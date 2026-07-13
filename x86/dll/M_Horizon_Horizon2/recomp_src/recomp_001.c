#include "recomp.h"

/* FUN_10009720 @ 0x12729720 (10 bytes, 5 insns) */
void f_12729720(void) {
  FTRACE(0x12729720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12729720 push ebp */
  push32((uint32_t)(EBP));
  /* 12729721 mov ebp, esp */
  EBP = (ESP);
  /* 12729723 mov eax, dword ptr [0x1274fc94] */
  EAX = (r32((uint32_t)(0x1274fc94)));
  /* 12729728 pop ebp */
  EBP = (pop32());
  /* 12729729 ret  */
  ESPCHK(0x12729720u, _esp0);
  ESP += 4; return;
}

/* FUN_10009730 @ 0x12729730 (31 bytes, 11 insns) */
void f_12729730(void) {
  FTRACE(0x12729730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12729730 push ebp */
  push32((uint32_t)(EBP));
  /* 12729731 mov ebp, esp */
  EBP = (ESP);
  /* 12729733 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272973a jbe 0x12729740 */
  if ((C.cf||C.zf)) goto L_12729740;
  /* 1272973c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272973e jmp 0x1272974d */
  goto L_1272974d;
L_12729740:;
  /* 12729740 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729743 mov dword ptr [0x1274fc94], eax */
  w32((uint32_t)(0x1274fc94), (EAX));
  /* 12729748 mov eax, 1 */
  EAX = (0x1u);
L_1272974d:;
  /* 1272974d pop ebp */
  EBP = (pop32());
  /* 1272974e ret  */
  ESPCHK(0x12729730u, _esp0);
  ESP += 4; return;
}

/* FUN_10009750 @ 0x12729750 (89 bytes, 20 insns) */
void f_12729750(void) {
  FTRACE(0x12729750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12729750 push ebp */
  push32((uint32_t)(EBP));
  /* 12729751 mov ebp, esp */
  EBP = (ESP);
  /* 12729753 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12729758 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272975a mov eax, dword ptr [0x1275302c] */
  EAX = (r32((uint32_t)(0x1275302c)));
  /* 1272975f push eax */
  push32((uint32_t)(EAX));
  /* 12729760 call dword ptr [0x1275431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275431c))), 0x12729766u);
  /* 12729766 mov dword ptr [0x12753028], eax */
  w32((uint32_t)(0x12753028), (EAX));
  /* 1272976b cmp dword ptr [0x12753028], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12753028))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729772 jne 0x12729778 */
  if (!C.zf) goto L_12729778;
  /* 12729774 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12729776 jmp 0x127297a7 */
  goto L_127297a7;
L_12729778:;
  /* 12729778 mov ecx, dword ptr [0x12753028] */
  ECX = (r32((uint32_t)(0x12753028)));
  /* 1272977e mov dword ptr [0x1275301c], ecx */
  w32((uint32_t)(0x1275301c), (ECX));
  /* 12729784 mov dword ptr [0x12753020], 0 */
  w32((uint32_t)(0x12753020), (0x0u));
  /* 1272978e mov dword ptr [0x12753024], 0 */
  w32((uint32_t)(0x12753024), (0x0u));
  /* 12729798 mov dword ptr [0x12753008], 0x10 */
  w32((uint32_t)(0x12753008), (0x10u));
  /* 127297a2 mov eax, 1 */
  EAX = (0x1u);
L_127297a7:;
  /* 127297a7 pop ebp */
  EBP = (pop32());
  /* 127297a8 ret  */
  ESPCHK(0x12729750u, _esp0);
  ESP += 4; return;
}

/* FUN_100097b0 @ 0x127297b0 (85 bytes, 29 insns) */
void f_127297b0(void) {
  FTRACE(0x127297b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127297b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127297b1 mov ebp, esp */
  EBP = (ESP);
  /* 127297b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127297b6 mov eax, dword ptr [0x12753024] */
  EAX = (r32((uint32_t)(0x12753024)));
  /* 127297bb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127297be mov ecx, dword ptr [0x12753028] */
  ECX = (r32((uint32_t)(0x12753028)));
  /* 127297c4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127297c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127297c9 mov edx, dword ptr [0x12753028] */
  EDX = (r32((uint32_t)(0x12753028)));
  /* 127297cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_127297d2:;
  /* 127297d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127297d5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127297d8 jae 0x127297ff */
  if (!C.cf) goto L_127297ff;
  /* 127297da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127297dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127297e0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127297e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127297e6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127297ed jae 0x127297f4 */
  if (!C.cf) goto L_127297f4;
  /* 127297ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127297f2 jmp 0x12729801 */
  goto L_12729801;
L_127297f4:;
  /* 127297f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127297f7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127297fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127297fd jmp 0x127297d2 */
  goto L_127297d2;
L_127297ff:;
  /* 127297ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12729801:;
  /* 12729801 mov esp, ebp */
  ESP = (EBP);
  /* 12729803 pop ebp */
  EBP = (pop32());
  /* 12729804 ret  */
  ESPCHK(0x127297b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009810 @ 0x12729810 (95 bytes, 33 insns) */
void f_12729810(void) {
  FTRACE(0x12729810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12729810 push ebp */
  push32((uint32_t)(EBP));
  /* 12729811 mov ebp, esp */
  EBP = (ESP);
  /* 12729813 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729819 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272981c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272981f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12729822 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12729825 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12729828 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272982b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12729830 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729833 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12729835 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729838 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1272983b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1272983d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272983f jne 0x12729861 */
  if (!C.zf) goto L_12729861;
  /* 12729841 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12729844 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12729847 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12729849 jne 0x12729861 */
  if (!C.zf) goto L_12729861;
  /* 1272984b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272984e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12729854 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12729856 je 0x12729861 */
  if (C.zf) goto L_12729861;
  /* 12729858 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1272985f jmp 0x12729868 */
  goto L_12729868;
L_12729861:;
  /* 12729861 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12729868:;
  /* 12729868 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272986b mov esp, ebp */
  ESP = (EBP);
  /* 1272986d pop ebp */
  EBP = (pop32());
  /* 1272986e ret  */
  ESPCHK(0x12729810u, _esp0);
  ESP += 4; return;
}

/* FUN_10009870 @ 0x12729870 (1485 bytes, 453 insns) */
void f_12729870(void) {
  FTRACE(0x12729870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12729870 push ebp */
  push32((uint32_t)(EBP));
  /* 12729871 mov ebp, esp */
  EBP = (ESP);
  /* 12729873 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729879 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1272987c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1272987f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729882 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12729885 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729888 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1272988b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272988e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12729891 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12729894 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729897 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272989d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127298a0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 127298a7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127298aa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127298ad sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127298b0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 127298b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127298b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127298b8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127298bb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 127298be mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127298c1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127298c4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 127298c7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127298ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127298cc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127298cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127298d2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 127298d5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127298d8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127298db and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127298de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127298e0 jne 0x12729a08 */
  if (!C.zf) goto L_12729a08;
  /* 127298e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127298e9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 127298ec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127298ef mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 127298f2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127298f6 jbe 0x127298ff */
  if ((C.cf||C.zf)) goto L_127298ff;
  /* 127298f8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_127298ff:;
  /* 127298ff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12729902 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12729905 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12729908 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272990b jne 0x127299e1 */
  if (!C.zf) goto L_127299e1;
  /* 12729911 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729915 jae 0x12729976 */
  if (!C.cf) goto L_12729976;
  /* 12729917 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1272991c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272991f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12729921 not eax */
  EAX = (~(EAX));
  /* 12729923 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729926 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729929 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1272992d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272992f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729932 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729935 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12729939 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1272993c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272993f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12729942 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12729945 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729948 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272994b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1272994e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729951 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729954 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12729958 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272995a jne 0x12729974 */
  if (!C.zf) goto L_12729974;
  /* 1272995c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12729961 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12729964 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12729966 not eax */
  EAX = (~(EAX));
  /* 12729968 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272996b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1272996d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1272996f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729972 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12729974:;
  /* 12729974 jmp 0x127299e1 */
  goto L_127299e1;
L_12729976:;
  /* 12729976 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12729979 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272997c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12729981 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12729983 not edx */
  EDX = (~(EDX));
  /* 12729985 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729988 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1272998b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12729992 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12729994 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729997 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1272999a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 127299a1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127299a4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127299a7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127299aa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127299ad mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127299b0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127299b3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 127299b6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127299b9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127299bc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127299c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127299c2 jne 0x127299e1 */
  if (!C.zf) goto L_127299e1;
  /* 127299c4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127299c7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127299ca mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127299cf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127299d1 not edx */
  EDX = (~(EDX));
  /* 127299d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127299d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127299d9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127299db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127299de mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_127299e1:;
  /* 127299e1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127299e4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127299e7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127299ea mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127299ed mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 127299f0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127299f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127299f6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127299f9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127299fc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 127299ff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12729a02 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729a05 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12729a08:;
  /* 12729a08 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12729a0b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12729a0e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729a11 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12729a14 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729a18 jbe 0x12729a21 */
  if ((C.cf||C.zf)) goto L_12729a21;
  /* 12729a1a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12729a21:;
  /* 12729a21 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12729a24 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12729a27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12729a29 jne 0x12729b85 */
  if (!C.zf) goto L_12729b85;
  /* 12729a2f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12729a32 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729a35 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12729a38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12729a3b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12729a3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729a41 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12729a44 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729a48 jbe 0x12729a51 */
  if ((C.cf||C.zf)) goto L_12729a51;
  /* 12729a4a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12729a51:;
  /* 12729a51 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12729a54 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729a57 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12729a5a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12729a5d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12729a60 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729a63 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12729a66 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729a6a jbe 0x12729a73 */
  if ((C.cf||C.zf)) goto L_12729a73;
  /* 12729a6c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12729a73:;
  /* 12729a73 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12729a76 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729a79 je 0x12729b7f */
  if (C.zf) goto L_12729b7f;
  /* 12729a7f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12729a82 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12729a85 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12729a88 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729a8b jne 0x12729b61 */
  if (!C.zf) goto L_12729b61;
  /* 12729a91 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729a95 jae 0x12729af6 */
  if (!C.cf) goto L_12729af6;
  /* 12729a97 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12729a9c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12729a9f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12729aa1 not edx */
  EDX = (~(EDX));
  /* 12729aa3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729aa6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729aa9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12729aad and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12729aaf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729ab2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729ab5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12729ab9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729abc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729abf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12729ac2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12729ac5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729ac8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729acb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12729ace mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729ad1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729ad4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12729ad8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12729ada jne 0x12729af4 */
  if (!C.zf) goto L_12729af4;
  /* 12729adc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12729ae1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12729ae4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12729ae6 not edx */
  EDX = (~(EDX));
  /* 12729ae8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729aeb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12729aed and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12729aef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729af2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12729af4:;
  /* 12729af4 jmp 0x12729b61 */
  goto L_12729b61;
L_12729af6:;
  /* 12729af6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12729af9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729afc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12729b01 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12729b03 not eax */
  EAX = (~(EAX));
  /* 12729b05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729b08 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729b0b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12729b12 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12729b14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729b17 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729b1a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12729b21 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729b24 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729b27 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12729b2a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12729b2d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729b30 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729b33 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12729b36 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729b39 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729b3c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12729b40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12729b42 jne 0x12729b61 */
  if (!C.zf) goto L_12729b61;
  /* 12729b44 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12729b47 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729b4a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12729b4f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12729b51 not eax */
  EAX = (~(EAX));
  /* 12729b53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729b56 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12729b59 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12729b5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729b5e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12729b61:;
  /* 12729b61 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12729b64 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12729b67 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12729b6a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12729b6d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12729b70 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12729b73 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12729b76 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12729b79 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12729b7c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12729b7f:;
  /* 12729b7f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12729b82 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12729b85:;
  /* 12729b85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12729b88 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12729b8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12729b8d jne 0x12729b9b */
  if (!C.zf) goto L_12729b9b;
  /* 12729b8f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12729b92 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729b95 je 0x12729cab */
  if (C.zf) goto L_12729cab;
L_12729b9b:;
  /* 12729b9b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12729b9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12729ba1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12729ba4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12729ba7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12729baa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12729bad mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12729bb0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12729bb3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12729bb6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12729bb9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12729bbc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12729bbf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12729bc2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12729bc5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12729bc8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12729bcb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12729bce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12729bd1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12729bd4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12729bd7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12729bda cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729bdd jne 0x12729cab */
  if (!C.zf) goto L_12729cab;
  /* 12729be3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729be7 jae 0x12729c44 */
  if (!C.cf) goto L_12729c44;
  /* 12729be9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729bec add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729bef movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12729bf3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729bf6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729bf9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12729bfc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12729bff mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729c02 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729c05 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12729c08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12729c0a jne 0x12729c22 */
  if (!C.zf) goto L_12729c22;
  /* 12729c0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12729c11 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12729c14 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12729c16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729c19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12729c1b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12729c1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729c20 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12729c22:;
  /* 12729c22 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12729c27 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12729c2a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12729c2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729c2f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729c32 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12729c36 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12729c38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729c3b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729c3e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12729c42 jmp 0x12729cab */
  goto L_12729cab;
L_12729c44:;
  /* 12729c44 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729c47 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729c4a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12729c4e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729c51 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729c54 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12729c57 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12729c5a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729c5d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729c60 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12729c63 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12729c65 jne 0x12729c82 */
  if (!C.zf) goto L_12729c82;
  /* 12729c67 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12729c6a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729c6d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12729c72 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12729c74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729c77 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12729c7a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12729c7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729c7f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12729c82:;
  /* 12729c82 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12729c85 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729c88 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12729c8d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12729c8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729c92 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729c95 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12729c9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12729c9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729ca1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12729ca4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12729cab:;
  /* 12729cab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12729cae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12729cb1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12729cb3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12729cb6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729cb9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12729cbc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12729cbf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12729cc2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12729cc4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729cc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12729cca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12729ccc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12729ccf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729cd2 jne 0x12729e39 */
  if (!C.zf) goto L_12729e39;
  /* 12729cd8 cmp dword ptr [0x12753020], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12753020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729cdf je 0x12729e28 */
  if (C.zf) goto L_12729e28;
  /* 12729ce5 mov eax, dword ptr [0x12753018] */
  EAX = (r32((uint32_t)(0x12753018)));
  /* 12729cea shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12729ced mov ecx, dword ptr [0x12753020] */
  ECX = (r32((uint32_t)(0x12753020)));
  /* 12729cf3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12729cf6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729cf8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12729cfb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12729d00 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12729d05 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729d08 push eax */
  push32((uint32_t)(EAX));
  /* 12729d09 call dword ptr [0x12754338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754338))), 0x12729d0fu);
  /* 12729d0f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12729d14 mov ecx, dword ptr [0x12753018] */
  ECX = (r32((uint32_t)(0x12753018)));
  /* 12729d1a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12729d1c mov eax, dword ptr [0x12753020] */
  EAX = (r32((uint32_t)(0x12753020)));
  /* 12729d21 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12729d24 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12729d26 mov edx, dword ptr [0x12753020] */
  EDX = (r32((uint32_t)(0x12753020)));
  /* 12729d2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12729d2f mov eax, dword ptr [0x12753020] */
  EAX = (r32((uint32_t)(0x12753020)));
  /* 12729d34 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12729d37 mov edx, dword ptr [0x12753018] */
  EDX = (r32((uint32_t)(0x12753018)));
  /* 12729d3d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12729d48 mov eax, dword ptr [0x12753020] */
  EAX = (r32((uint32_t)(0x12753020)));
  /* 12729d4d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12729d50 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12729d53 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12729d56 mov eax, dword ptr [0x12753020] */
  EAX = (r32((uint32_t)(0x12753020)));
  /* 12729d5b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12729d5e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12729d61 mov edx, dword ptr [0x12753020] */
  EDX = (r32((uint32_t)(0x12753020)));
  /* 12729d67 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12729d6a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12729d6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12729d70 jne 0x12729d86 */
  if (!C.zf) goto L_12729d86;
  /* 12729d72 mov edx, dword ptr [0x12753020] */
  EDX = (r32((uint32_t)(0x12753020)));
  /* 12729d78 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12729d7b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12729d7d mov ecx, dword ptr [0x12753020] */
  ECX = (r32((uint32_t)(0x12753020)));
  /* 12729d83 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12729d86:;
  /* 12729d86 mov edx, dword ptr [0x12753020] */
  EDX = (r32((uint32_t)(0x12753020)));
  /* 12729d8c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729d90 jne 0x12729e28 */
  if (!C.zf) goto L_12729e28;
  /* 12729d96 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12729d9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12729d9d mov eax, dword ptr [0x12753020] */
  EAX = (r32((uint32_t)(0x12753020)));
  /* 12729da2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12729da5 push ecx */
  push32((uint32_t)(ECX));
  /* 12729da6 call dword ptr [0x12754338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754338))), 0x12729dacu);
  /* 12729dac mov edx, dword ptr [0x12753020] */
  EDX = (r32((uint32_t)(0x12753020)));
  /* 12729db2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12729db5 push eax */
  push32((uint32_t)(EAX));
  /* 12729db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12729db8 mov ecx, dword ptr [0x1275302c] */
  ECX = (r32((uint32_t)(0x1275302c)));
  /* 12729dbe push ecx */
  push32((uint32_t)(ECX));
  /* 12729dbf call dword ptr [0x1275433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275433c))), 0x12729dc5u);
  /* 12729dc5 mov edx, dword ptr [0x12753024] */
  EDX = (r32((uint32_t)(0x12753024)));
  /* 12729dcb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12729dce mov eax, dword ptr [0x12753028] */
  EAX = (r32((uint32_t)(0x12753028)));
  /* 12729dd3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729dd5 mov ecx, dword ptr [0x12753020] */
  ECX = (r32((uint32_t)(0x12753020)));
  /* 12729ddb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729dde sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729de0 push eax */
  push32((uint32_t)(EAX));
  /* 12729de1 mov edx, dword ptr [0x12753020] */
  EDX = (r32((uint32_t)(0x12753020)));
  /* 12729de7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729dea push edx */
  push32((uint32_t)(EDX));
  /* 12729deb mov eax, dword ptr [0x12753020] */
  EAX = (r32((uint32_t)(0x12753020)));
  /* 12729df0 push eax */
  push32((uint32_t)(EAX));
  /* 12729df1 call 0x1272d3a0 */
  push32(0x12729df6u); f_1272d3a0();
  /* 12729df6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12729df9 mov ecx, dword ptr [0x12753024] */
  ECX = (r32((uint32_t)(0x12753024)));
  /* 12729dff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729e02 mov dword ptr [0x12753024], ecx */
  w32((uint32_t)(0x12753024), (ECX));
  /* 12729e08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729e0b cmp edx, dword ptr [0x12753020] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12753020))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729e11 jbe 0x12729e1c */
  if ((C.cf||C.zf)) goto L_12729e1c;
  /* 12729e13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729e16 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729e19 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12729e1c:;
  /* 12729e1c mov ecx, dword ptr [0x12753028] */
  ECX = (r32((uint32_t)(0x12753028)));
  /* 12729e22 mov dword ptr [0x1275301c], ecx */
  w32((uint32_t)(0x1275301c), (ECX));
L_12729e28:;
  /* 12729e28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729e2b mov dword ptr [0x12753020], edx */
  w32((uint32_t)(0x12753020), (EDX));
  /* 12729e31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729e34 mov dword ptr [0x12753018], eax */
  w32((uint32_t)(0x12753018), (EAX));
L_12729e39:;
  /* 12729e39 mov esp, ebp */
  ESP = (EBP);
  /* 12729e3b pop ebp */
  EBP = (pop32());
  /* 12729e3c ret  */
  ESPCHK(0x12729870u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e40 @ 0x12729e40 (1334 bytes, 427 insns) */
void f_12729e40(void) {
  FTRACE(0x12729e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12729e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12729e41 mov ebp, esp */
  EBP = (ESP);
  /* 12729e43 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729e46 push esi */
  push32((uint32_t)(ESI));
  /* 12729e47 mov eax, dword ptr [0x12753024] */
  EAX = (r32((uint32_t)(0x12753024)));
  /* 12729e4c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12729e4f mov ecx, dword ptr [0x12753028] */
  ECX = (r32((uint32_t)(0x12753028)));
  /* 12729e55 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729e57 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12729e5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729e5d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729e60 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12729e63 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12729e66 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12729e69 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12729e6c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729e6f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12729e72 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729e76 jge 0x12729e8c */
  if ((C.sf==C.of)) goto L_12729e8c;
  /* 12729e78 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12729e7b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12729e7e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12729e80 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12729e83 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12729e8a jmp 0x12729ea1 */
  goto L_12729ea1;
L_12729e8c:;
  /* 12729e8c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12729e93 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12729e96 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729e99 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12729e9c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12729e9e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12729ea1:;
  /* 12729ea1 mov ecx, dword ptr [0x1275301c] */
  ECX = (r32((uint32_t)(0x1275301c)));
  /* 12729ea7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12729eaa:;
  /* 12729eaa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729ead cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729eb0 jae 0x12729ed6 */
  if (!C.cf) goto L_12729ed6;
  /* 12729eb2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729eb5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12729eb8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12729eba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729ebd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12729ec0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12729ec3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12729ec5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12729ec7 je 0x12729ecb */
  if (C.zf) goto L_12729ecb;
  /* 12729ec9 jmp 0x12729ed6 */
  goto L_12729ed6;
L_12729ecb:;
  /* 12729ecb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729ece add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729ed1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12729ed4 jmp 0x12729eaa */
  goto L_12729eaa;
L_12729ed6:;
  /* 12729ed6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729ed9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729edc jne 0x12729fbd */
  if (!C.zf) goto L_12729fbd;
  /* 12729ee2 mov eax, dword ptr [0x12753028] */
  EAX = (r32((uint32_t)(0x12753028)));
  /* 12729ee7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12729eea:;
  /* 12729eea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729eed cmp ecx, dword ptr [0x1275301c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1275301c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729ef3 jae 0x12729f19 */
  if (!C.cf) goto L_12729f19;
  /* 12729ef5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729ef8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12729efb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12729efd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729f00 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12729f03 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12729f06 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12729f08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12729f0a je 0x12729f0e */
  if (C.zf) goto L_12729f0e;
  /* 12729f0c jmp 0x12729f19 */
  goto L_12729f19;
L_12729f0e:;
  /* 12729f0e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729f11 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729f14 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12729f17 jmp 0x12729eea */
  goto L_12729eea;
L_12729f19:;
  /* 12729f19 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729f1c cmp ecx, dword ptr [0x1275301c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1275301c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729f22 jne 0x12729fbd */
  if (!C.zf) goto L_12729fbd;
L_12729f28:;
  /* 12729f28 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729f2b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729f2e jae 0x12729f46 */
  if (!C.cf) goto L_12729f46;
  /* 12729f30 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729f33 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729f37 je 0x12729f3b */
  if (C.zf) goto L_12729f3b;
  /* 12729f39 jmp 0x12729f46 */
  goto L_12729f46;
L_12729f3b:;
  /* 12729f3b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729f3e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729f41 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12729f44 jmp 0x12729f28 */
  goto L_12729f28;
L_12729f46:;
  /* 12729f46 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729f49 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729f4c jne 0x12729f97 */
  if (!C.zf) goto L_12729f97;
  /* 12729f4e mov eax, dword ptr [0x12753028] */
  EAX = (r32((uint32_t)(0x12753028)));
  /* 12729f53 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12729f56:;
  /* 12729f56 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729f59 cmp ecx, dword ptr [0x1275301c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1275301c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729f5f jae 0x12729f77 */
  if (!C.cf) goto L_12729f77;
  /* 12729f61 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729f64 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729f68 je 0x12729f6c */
  if (C.zf) goto L_12729f6c;
  /* 12729f6a jmp 0x12729f77 */
  goto L_12729f77;
L_12729f6c:;
  /* 12729f6c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729f6f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729f72 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12729f75 jmp 0x12729f56 */
  goto L_12729f56;
L_12729f77:;
  /* 12729f77 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729f7a cmp ecx, dword ptr [0x1275301c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1275301c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729f80 jne 0x12729f97 */
  if (!C.zf) goto L_12729f97;
  /* 12729f82 call 0x1272a380 */
  push32(0x12729f87u); f_1272a380();
  /* 12729f87 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12729f8a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729f8e jne 0x12729f97 */
  if (!C.zf) goto L_12729f97;
  /* 12729f90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12729f92 jmp 0x1272a371 */
  goto L_1272a371;
L_12729f97:;
  /* 12729f97 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729f9a push edx */
  push32((uint32_t)(EDX));
  /* 12729f9b call 0x1272a490 */
  push32(0x12729fa0u); f_1272a490();
  /* 12729fa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12729fa3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729fa6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12729fa9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12729fab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729fae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12729fb1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729fb4 jne 0x12729fbd */
  if (!C.zf) goto L_12729fbd;
  /* 12729fb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12729fb8 jmp 0x1272a371 */
  goto L_1272a371;
L_12729fbd:;
  /* 12729fbd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729fc0 mov dword ptr [0x1275301c], edx */
  w32((uint32_t)(0x1275301c), (EDX));
  /* 12729fc6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729fc9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12729fcc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12729fcf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12729fd2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12729fd4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12729fd7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729fdb je 0x1272a000 */
  if (C.zf) goto L_1272a000;
  /* 12729fdd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12729fe0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12729fe3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12729fe6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12729fea mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12729fed mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12729ff0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12729ff3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12729ffa or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12729ffc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12729ffe jne 0x1272a035 */
  if (!C.zf) goto L_1272a035;
L_1272a000:;
  /* 1272a000 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1272a007:;
  /* 1272a007 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a00a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a00d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272a010 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1272a014 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a017 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a01a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1272a01d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1272a024 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1272a026 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272a028 jne 0x1272a035 */
  if (!C.zf) goto L_1272a035;
  /* 1272a02a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a02d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a030 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1272a033 jmp 0x1272a007 */
  goto L_1272a007;
L_1272a035:;
  /* 1272a035 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a038 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272a03e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a041 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1272a048 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272a04b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1272a052 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a055 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a058 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272a05b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1272a05f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1272a062 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a066 jne 0x1272a082 */
  if (!C.zf) goto L_1272a082;
  /* 1272a068 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1272a06f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a072 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a075 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1272a078 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1272a07f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1272a082:;
  /* 1272a082 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a086 jl 0x1272a09b */
  if ((C.sf!=C.of)) goto L_1272a09b;
  /* 1272a088 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1272a08b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1272a08d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1272a090 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272a093 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a096 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1272a099 jmp 0x1272a082 */
  goto L_1272a082;
L_1272a09b:;
  /* 1272a09b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272a09e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a0a1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1272a0a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1272a0a8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a0ab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1272a0ad sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a0b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1272a0b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272a0b6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1272a0b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a0bc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1272a0bf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a0c3 jle 0x1272a0cc */
  if ((C.zf||C.sf!=C.of)) goto L_1272a0cc;
  /* 1272a0c5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1272a0cc:;
  /* 1272a0cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a0cf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a0d2 je 0x1272a2f0 */
  if (C.zf) goto L_1272a2f0;
  /* 1272a0d8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a0db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a0de mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1272a0e1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a0e4 jne 0x1272a1ba */
  if (!C.zf) goto L_1272a1ba;
  /* 1272a0ea cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a0ee jge 0x1272a14f */
  if ((C.sf==C.of)) goto L_1272a14f;
  /* 1272a0f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1272a0f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272a0f8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1272a0fa not eax */
  EAX = (~(EAX));
  /* 1272a0fc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a0ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a102 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1272a106 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272a108 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a10b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a10e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1272a112 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a115 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a118 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1272a11b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1272a11e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a121 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a124 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1272a127 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a12a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a12d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1272a131 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272a133 jne 0x1272a14d */
  if (!C.zf) goto L_1272a14d;
  /* 1272a135 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1272a13a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272a13d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1272a13f not eax */
  EAX = (~(EAX));
  /* 1272a141 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a144 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1272a146 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1272a148 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a14b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1272a14d:;
  /* 1272a14d jmp 0x1272a1ba */
  goto L_1272a1ba;
L_1272a14f:;
  /* 1272a14f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272a152 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a155 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1272a15a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1272a15c not edx */
  EDX = (~(EDX));
  /* 1272a15e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a161 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a164 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1272a16b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1272a16d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a170 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a173 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1272a17a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a17d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a180 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1272a183 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1272a186 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a189 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a18c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1272a18f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a192 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a195 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1272a199 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272a19b jne 0x1272a1ba */
  if (!C.zf) goto L_1272a1ba;
  /* 1272a19d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272a1a0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a1a3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1272a1a8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1272a1aa not edx */
  EDX = (~(EDX));
  /* 1272a1ac mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a1af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1272a1b2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1272a1b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a1b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1272a1ba:;
  /* 1272a1ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a1bd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1272a1c0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a1c3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1272a1c6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1272a1c9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a1cc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1272a1cf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a1d2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1272a1d5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1272a1d8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a1dc je 0x1272a2f0 */
  if (C.zf) goto L_1272a2f0;
  /* 1272a1e2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a1e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a1e8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1272a1eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272a1ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a1f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272a1f4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1272a1f7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1272a1fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a1fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272a200 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1272a203 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272a206 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a209 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1272a20c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a20f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1272a212 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a215 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1272a218 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a21b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a21e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1272a221 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a224 jne 0x1272a2f0 */
  if (!C.zf) goto L_1272a2f0;
  /* 1272a22a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a22e jge 0x1272a28a */
  if ((C.sf==C.of)) goto L_1272a28a;
  /* 1272a230 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a233 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a236 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1272a23a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a23d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a240 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1272a243 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1272a245 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a248 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a24b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1272a24e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272a250 jne 0x1272a268 */
  if (!C.zf) goto L_1272a268;
  /* 1272a252 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1272a257 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a25a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1272a25c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a25f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1272a261 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1272a263 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a266 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1272a268:;
  /* 1272a268 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1272a26d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a270 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1272a272 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a275 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a278 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1272a27c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1272a27e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a281 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a284 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1272a288 jmp 0x1272a2f0 */
  goto L_1272a2f0;
L_1272a28a:;
  /* 1272a28a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a28d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a290 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1272a294 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a297 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a29a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1272a29d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1272a29f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a2a2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a2a5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1272a2a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272a2aa jne 0x1272a2c7 */
  if (!C.zf) goto L_1272a2c7;
  /* 1272a2ac mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a2af sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a2b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1272a2b7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1272a2b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a2bc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1272a2bf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1272a2c1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a2c4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1272a2c7:;
  /* 1272a2c7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a2ca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a2cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1272a2d2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1272a2d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a2d7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a2da mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1272a2e1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1272a2e3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a2e6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a2e9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1272a2f0:;
  /* 1272a2f0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a2f4 je 0x1272a30a */
  if (C.zf) goto L_1272a30a;
  /* 1272a2f6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a2f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272a2fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1272a2fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a301 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a304 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272a307 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1272a30a:;
  /* 1272a30a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a30d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a310 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1272a313 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272a316 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a319 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a31c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1272a31e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272a321 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a324 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a327 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a32a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1272a32d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a330 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1272a332 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a335 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1272a337 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a33a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a33d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1272a33f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272a341 jne 0x1272a363 */
  if (!C.zf) goto L_1272a363;
  /* 1272a343 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a346 cmp eax, dword ptr [0x12753020] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12753020))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a34c jne 0x1272a363 */
  if (!C.zf) goto L_1272a363;
  /* 1272a34e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a351 cmp ecx, dword ptr [0x12753018] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12753018))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a357 jne 0x1272a363 */
  if (!C.zf) goto L_1272a363;
  /* 1272a359 mov dword ptr [0x12753020], 0 */
  w32((uint32_t)(0x12753020), (0x0u));
L_1272a363:;
  /* 1272a363 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1272a366 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a369 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1272a36b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a36e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1272a371:;
  /* 1272a371 pop esi */
  ESI = (pop32());
  /* 1272a372 mov esp, ebp */
  ESP = (EBP);
  /* 1272a374 pop ebp */
  EBP = (pop32());
  /* 1272a375 ret  */
  ESPCHK(0x12729e40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a380 @ 0x1272a380 (271 bytes, 78 insns) */
void f_1272a380(void) {
  FTRACE(0x1272a380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272a380 push ebp */
  push32((uint32_t)(EBP));
  /* 1272a381 mov ebp, esp */
  EBP = (ESP);
  /* 1272a383 push ecx */
  push32((uint32_t)(ECX));
  /* 1272a384 mov eax, dword ptr [0x12753024] */
  EAX = (r32((uint32_t)(0x12753024)));
  /* 1272a389 cmp eax, dword ptr [0x12753008] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12753008))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a38f jne 0x1272a3db */
  if (!C.zf) goto L_1272a3db;
  /* 1272a391 mov ecx, dword ptr [0x12753008] */
  ECX = (r32((uint32_t)(0x12753008)));
  /* 1272a397 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a39a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272a39d push ecx */
  push32((uint32_t)(ECX));
  /* 1272a39e mov edx, dword ptr [0x12753028] */
  EDX = (r32((uint32_t)(0x12753028)));
  /* 1272a3a4 push edx */
  push32((uint32_t)(EDX));
  /* 1272a3a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272a3a7 mov eax, dword ptr [0x1275302c] */
  EAX = (r32((uint32_t)(0x1275302c)));
  /* 1272a3ac push eax */
  push32((uint32_t)(EAX));
  /* 1272a3ad call dword ptr [0x12754318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754318))), 0x1272a3b3u);
  /* 1272a3b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272a3b6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a3ba jne 0x1272a3c3 */
  if (!C.zf) goto L_1272a3c3;
  /* 1272a3bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272a3be jmp 0x1272a48b */
  goto L_1272a48b;
L_1272a3c3:;
  /* 1272a3c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a3c6 mov dword ptr [0x12753028], ecx */
  w32((uint32_t)(0x12753028), (ECX));
  /* 1272a3cc mov edx, dword ptr [0x12753008] */
  EDX = (r32((uint32_t)(0x12753008)));
  /* 1272a3d2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a3d5 mov dword ptr [0x12753008], edx */
  w32((uint32_t)(0x12753008), (EDX));
L_1272a3db:;
  /* 1272a3db mov eax, dword ptr [0x12753024] */
  EAX = (r32((uint32_t)(0x12753024)));
  /* 1272a3e0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272a3e3 mov ecx, dword ptr [0x12753028] */
  ECX = (r32((uint32_t)(0x12753028)));
  /* 1272a3e9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a3eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1272a3ee push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1272a3f3 push 8 */
  push32((uint32_t)(0x8u));
  /* 1272a3f5 mov edx, dword ptr [0x1275302c] */
  EDX = (r32((uint32_t)(0x1275302c)));
  /* 1272a3fb push edx */
  push32((uint32_t)(EDX));
  /* 1272a3fc call dword ptr [0x1275431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275431c))), 0x1272a402u);
  /* 1272a402 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a405 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1272a408 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a40b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a40f jne 0x1272a415 */
  if (!C.zf) goto L_1272a415;
  /* 1272a411 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272a413 jmp 0x1272a48b */
  goto L_1272a48b;
L_1272a415:;
  /* 1272a415 push 4 */
  push32((uint32_t)(0x4u));
  /* 1272a417 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1272a41c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1272a421 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272a423 call dword ptr [0x12754314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754314))), 0x1272a429u);
  /* 1272a429 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a42c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1272a42f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a432 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a436 jne 0x1272a452 */
  if (!C.zf) goto L_1272a452;
  /* 1272a438 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a43b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1272a43e push ecx */
  push32((uint32_t)(ECX));
  /* 1272a43f push 0 */
  push32((uint32_t)(0x0u));
  /* 1272a441 mov edx, dword ptr [0x1275302c] */
  EDX = (r32((uint32_t)(0x1275302c)));
  /* 1272a447 push edx */
  push32((uint32_t)(EDX));
  /* 1272a448 call dword ptr [0x1275433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275433c))), 0x1272a44eu);
  /* 1272a44e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272a450 jmp 0x1272a48b */
  goto L_1272a48b;
L_1272a452:;
  /* 1272a452 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a455 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1272a45b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a45e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1272a465 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a468 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1272a46f mov eax, dword ptr [0x12753024] */
  EAX = (r32((uint32_t)(0x12753024)));
  /* 1272a474 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a477 mov dword ptr [0x12753024], eax */
  w32((uint32_t)(0x12753024), (EAX));
  /* 1272a47c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a47f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1272a482 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1272a488 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1272a48b:;
  /* 1272a48b mov esp, ebp */
  ESP = (EBP);
  /* 1272a48d pop ebp */
  EBP = (pop32());
  /* 1272a48e ret  */
  ESPCHK(0x1272a380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a490 @ 0x1272a490 (494 bytes, 149 insns) */
void f_1272a490(void) {
  FTRACE(0x1272a490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272a490 push ebp */
  push32((uint32_t)(EBP));
  /* 1272a491 mov ebp, esp */
  EBP = (ESP);
  /* 1272a493 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272a499 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1272a49c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1272a49f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272a4a2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1272a4a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1272a4a8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1272a4af:;
  /* 1272a4af cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a4b3 jl 0x1272a4c8 */
  if ((C.sf!=C.of)) goto L_1272a4c8;
  /* 1272a4b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272a4b8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1272a4ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1272a4bd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272a4c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a4c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1272a4c6 jmp 0x1272a4af */
  goto L_1272a4af;
L_1272a4c8:;
  /* 1272a4c8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272a4cb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272a4d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a4d4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1272a4db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1272a4de mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1272a4e5 jmp 0x1272a4f0 */
  goto L_1272a4f0;
L_1272a4e7:;
  /* 1272a4e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272a4ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a4ed mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1272a4f0:;
  /* 1272a4f0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a4f4 jge 0x1272a516 */
  if ((C.sf==C.of)) goto L_1272a516;
  /* 1272a4f6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272a4f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272a4fc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1272a4ff mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1272a502 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a505 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a508 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1272a50b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a50e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a511 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1272a514 jmp 0x1272a4e7 */
  goto L_1272a4e7;
L_1272a516:;
  /* 1272a516 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272a519 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1272a51c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272a51f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1272a522 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a524 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1272a527 push 4 */
  push32((uint32_t)(0x4u));
  /* 1272a529 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1272a52e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1272a533 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a536 push edx */
  push32((uint32_t)(EDX));
  /* 1272a537 call dword ptr [0x12754314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754314))), 0x1272a53du);
  /* 1272a53d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272a53f jne 0x1272a549 */
  if (!C.zf) goto L_1272a549;
  /* 1272a541 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272a544 jmp 0x1272a67a */
  goto L_1272a67a;
L_1272a549:;
  /* 1272a549 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a54c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a551 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1272a554 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a557 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1272a55a jmp 0x1272a568 */
  goto L_1272a568;
L_1272a55c:;
  /* 1272a55c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a55f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a565 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1272a568:;
  /* 1272a568 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a56b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a56e ja 0x1272a5cd */
  if ((!C.cf&&!C.zf)) goto L_1272a5cd;
  /* 1272a570 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a573 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1272a57a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a57d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1272a587 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a58a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a58d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1272a590 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a593 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1272a599 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a59c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a5a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a5a5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1272a5a8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a5ab sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a5b1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a5b4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1272a5b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a5ba add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a5bf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1272a5c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272a5c5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1272a5cb jmp 0x1272a55c */
  goto L_1272a55c;
L_1272a5cd:;
  /* 1272a5cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272a5d0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a5d6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1272a5d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a5dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a5df mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a5e2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1272a5e5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a5e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1272a5eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1272a5ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a5f1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a5f4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1272a5f7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1272a5fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a5fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a600 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1272a603 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a606 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1272a609 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1272a60c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a60f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a612 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1272a615 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272a618 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a61b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1272a623 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272a626 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a629 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1272a634 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a637 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1272a63b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a63e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1272a641 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1272a644 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a647 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1272a64a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272a64c jne 0x1272a65d */
  if (!C.zf) goto L_1272a65d;
  /* 1272a64e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272a651 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1272a654 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1272a657 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272a65a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1272a65d:;
  /* 1272a65d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1272a662 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272a665 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1272a667 not edx */
  EDX = (~(EDX));
  /* 1272a669 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272a66c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1272a66f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1272a671 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272a674 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1272a677 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1272a67a:;
  /* 1272a67a mov esp, ebp */
  ESP = (EBP);
  /* 1272a67c pop ebp */
  EBP = (pop32());
  /* 1272a67d ret  */
  ESPCHK(0x1272a490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a680 @ 0x1272a680 (1515 bytes, 489 insns) */
void f_1272a680(void) {
  FTRACE(0x1272a680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272a680 push ebp */
  push32((uint32_t)(EBP));
  /* 1272a681 mov ebp, esp */
  EBP = (ESP);
  /* 1272a683 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a686 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272a689 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a68c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1272a68e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1272a691 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272a694 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1272a697 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1272a69a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272a69d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272a6a0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a6a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272a6a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272a6a9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1272a6ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272a6af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a6b2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272a6b8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a6bb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1272a6c2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1272a6c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272a6c8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a6cb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1272a6ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a6d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1272a6d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a6d6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1272a6d9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a6dc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a6df mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1272a6e2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a6e5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1272a6e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1272a6ea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1272a6ed cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a6f0 jle 0x1272a9a6 */
  if ((C.zf||C.sf!=C.of)) goto L_1272a9a6;
  /* 1272a6f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a6f9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1272a6fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272a6fe jne 0x1272a70b */
  if (!C.zf) goto L_1272a70b;
  /* 1272a700 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272a703 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a706 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a709 jle 0x1272a712 */
  if ((C.zf||C.sf!=C.of)) goto L_1272a712;
L_1272a70b:;
  /* 1272a70b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272a70d jmp 0x1272ac67 */
  goto L_1272ac67;
L_1272a712:;
  /* 1272a712 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a715 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1272a718 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a71b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1272a71e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a722 jbe 0x1272a72b */
  if ((C.cf||C.zf)) goto L_1272a72b;
  /* 1272a724 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1272a72b:;
  /* 1272a72b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a72e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a731 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1272a734 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a737 jne 0x1272a80d */
  if (!C.zf) goto L_1272a80d;
  /* 1272a73d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a741 jae 0x1272a7a2 */
  if (!C.cf) goto L_1272a7a2;
  /* 1272a743 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1272a748 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272a74b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1272a74d not edx */
  EDX = (~(EDX));
  /* 1272a74f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a752 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a755 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1272a759 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1272a75b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a75e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a761 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1272a765 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a768 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a76b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1272a76e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1272a771 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a774 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a777 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1272a77a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a77d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a780 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1272a784 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272a786 jne 0x1272a7a0 */
  if (!C.zf) goto L_1272a7a0;
  /* 1272a788 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1272a78d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272a790 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1272a792 not edx */
  EDX = (~(EDX));
  /* 1272a794 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272a797 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1272a799 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1272a79b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272a79e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1272a7a0:;
  /* 1272a7a0 jmp 0x1272a80d */
  goto L_1272a80d;
L_1272a7a2:;
  /* 1272a7a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272a7a5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a7a8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1272a7ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1272a7af not eax */
  EAX = (~(EAX));
  /* 1272a7b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a7b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a7b7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1272a7be and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272a7c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a7c3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a7c6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1272a7cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a7d0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a7d3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1272a7d6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1272a7d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a7dc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a7df mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1272a7e2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a7e5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a7e8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1272a7ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272a7ee jne 0x1272a80d */
  if (!C.zf) goto L_1272a80d;
  /* 1272a7f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272a7f3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a7f6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1272a7fb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1272a7fd not eax */
  EAX = (~(EAX));
  /* 1272a7ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272a802 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1272a805 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1272a807 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272a80a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1272a80d:;
  /* 1272a80d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a810 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1272a813 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a816 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1272a819 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1272a81c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a81f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1272a822 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a825 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1272a828 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1272a82b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272a82e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a831 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a834 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1272a837 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a83b jle 0x1272a987 */
  if ((C.zf||C.sf!=C.of)) goto L_1272a987;
  /* 1272a841 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a844 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a847 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1272a84a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a84d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1272a850 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a853 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1272a856 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a85a jbe 0x1272a863 */
  if ((C.cf||C.zf)) goto L_1272a863;
  /* 1272a85c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1272a863:;
  /* 1272a863 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272a866 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272a869 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1272a86c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1272a86f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a872 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a875 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1272a878 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1272a87b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a87e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a881 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1272a884 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272a887 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a88a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1272a88d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a890 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1272a893 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a896 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1272a899 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a89c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a89f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1272a8a2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a8a5 jne 0x1272a973 */
  if (!C.zf) goto L_1272a973;
  /* 1272a8ab cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a8af jae 0x1272a90c */
  if (!C.cf) goto L_1272a90c;
  /* 1272a8b1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a8b4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a8b7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1272a8bb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a8be add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a8c1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1272a8c4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1272a8c7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a8ca add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a8cd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1272a8d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272a8d2 jne 0x1272a8ea */
  if (!C.zf) goto L_1272a8ea;
  /* 1272a8d4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1272a8d9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272a8dc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1272a8de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272a8e1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1272a8e3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1272a8e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272a8e8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1272a8ea:;
  /* 1272a8ea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1272a8ef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272a8f2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1272a8f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a8f7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a8fa mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1272a8fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272a900 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a903 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a906 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1272a90a jmp 0x1272a973 */
  goto L_1272a973;
L_1272a90c:;
  /* 1272a90c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a90f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a912 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1272a916 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a919 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a91c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1272a91f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1272a922 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a925 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a928 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1272a92b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272a92d jne 0x1272a94a */
  if (!C.zf) goto L_1272a94a;
  /* 1272a92f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272a932 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a935 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1272a93a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1272a93c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272a93f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1272a942 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1272a944 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272a947 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1272a94a:;
  /* 1272a94a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272a94d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a950 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1272a955 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1272a957 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a95a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a95d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1272a964 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272a966 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272a969 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272a96c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1272a973:;
  /* 1272a973 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a976 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a979 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1272a97b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272a97e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a981 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a984 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1272a987:;
  /* 1272a987 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1272a98a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a98d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a990 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1272a992 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1272a995 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a998 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a99b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a99e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1272a9a1 jmp 0x1272ac62 */
  goto L_1272ac62;
L_1272a9a6:;
  /* 1272a9a6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1272a9a9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a9ac jge 0x1272ac62 */
  if ((C.sf==C.of)) goto L_1272ac62;
  /* 1272a9b2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1272a9b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a9b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a9bb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1272a9bd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1272a9c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a9c3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a9c6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a9c9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1272a9cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272a9cf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272a9d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1272a9d5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272a9d8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a9db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1272a9de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272a9e1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1272a9e4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272a9e7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1272a9ea cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272a9ee jbe 0x1272a9f7 */
  if ((C.cf||C.zf)) goto L_1272a9f7;
  /* 1272a9f0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1272a9f7:;
  /* 1272a9f7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272a9fa and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1272a9fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272a9ff jne 0x1272ab40 */
  if (!C.zf) goto L_1272ab40;
  /* 1272aa05 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272aa08 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1272aa0b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272aa0e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1272aa11 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272aa15 jbe 0x1272aa1e */
  if ((C.cf||C.zf)) goto L_1272aa1e;
  /* 1272aa17 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1272aa1e:;
  /* 1272aa1e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272aa21 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272aa24 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1272aa27 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272aa2a jne 0x1272ab00 */
  if (!C.zf) goto L_1272ab00;
  /* 1272aa30 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272aa34 jae 0x1272aa95 */
  if (!C.cf) goto L_1272aa95;
  /* 1272aa36 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1272aa3b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272aa3e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1272aa40 not edx */
  EDX = (~(EDX));
  /* 1272aa42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272aa45 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272aa48 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1272aa4c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1272aa4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272aa51 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272aa54 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1272aa58 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272aa5b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272aa5e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1272aa61 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1272aa64 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272aa67 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272aa6a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1272aa6d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272aa70 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272aa73 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1272aa77 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272aa79 jne 0x1272aa93 */
  if (!C.zf) goto L_1272aa93;
  /* 1272aa7b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1272aa80 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272aa83 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1272aa85 not edx */
  EDX = (~(EDX));
  /* 1272aa87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272aa8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1272aa8c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1272aa8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272aa91 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1272aa93:;
  /* 1272aa93 jmp 0x1272ab00 */
  goto L_1272ab00;
L_1272aa95:;
  /* 1272aa95 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272aa98 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272aa9b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1272aaa0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1272aaa2 not eax */
  EAX = (~(EAX));
  /* 1272aaa4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272aaa7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272aaaa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1272aab1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272aab3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272aab6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272aab9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1272aac0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272aac3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272aac6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1272aac9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1272aacc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272aacf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272aad2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1272aad5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272aad8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272aadb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1272aadf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272aae1 jne 0x1272ab00 */
  if (!C.zf) goto L_1272ab00;
  /* 1272aae3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272aae6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272aae9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1272aaee shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1272aaf0 not eax */
  EAX = (~(EAX));
  /* 1272aaf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272aaf5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1272aaf8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1272aafa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272aafd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1272ab00:;
  /* 1272ab00 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272ab03 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1272ab06 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272ab09 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1272ab0c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1272ab0f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272ab12 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1272ab15 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272ab18 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1272ab1b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1272ab1e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272ab21 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ab24 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1272ab27 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272ab2a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1272ab2d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272ab30 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1272ab33 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ab37 jbe 0x1272ab40 */
  if ((C.cf||C.zf)) goto L_1272ab40;
  /* 1272ab39 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1272ab40:;
  /* 1272ab40 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272ab43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ab46 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1272ab49 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1272ab4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272ab4f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272ab52 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1272ab55 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1272ab58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272ab5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272ab5e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1272ab61 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272ab64 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272ab67 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1272ab6a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272ab6d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1272ab70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272ab73 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1272ab76 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272ab79 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272ab7c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1272ab7f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ab82 jne 0x1272ac4e */
  if (!C.zf) goto L_1272ac4e;
  /* 1272ab88 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ab8c jae 0x1272abe8 */
  if (!C.cf) goto L_1272abe8;
  /* 1272ab8e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272ab91 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ab94 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1272ab98 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272ab9b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ab9e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1272aba1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1272aba3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272aba6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272aba9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1272abac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272abae jne 0x1272abc6 */
  if (!C.zf) goto L_1272abc6;
  /* 1272abb0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1272abb5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272abb8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1272abba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272abbd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1272abbf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1272abc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272abc4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1272abc6:;
  /* 1272abc6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1272abcb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272abce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1272abd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272abd3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272abd6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1272abda or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1272abdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272abdf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272abe2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1272abe6 jmp 0x1272ac4e */
  goto L_1272ac4e;
L_1272abe8:;
  /* 1272abe8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272abeb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272abee movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1272abf2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272abf5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272abf8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1272abfb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1272abfd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272ac00 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ac03 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1272ac06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272ac08 jne 0x1272ac25 */
  if (!C.zf) goto L_1272ac25;
  /* 1272ac0a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272ac0d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272ac10 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1272ac15 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1272ac17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ac1a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1272ac1d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1272ac1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ac22 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1272ac25:;
  /* 1272ac25 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272ac28 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272ac2b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1272ac30 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1272ac32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ac35 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272ac38 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1272ac3f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1272ac41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ac44 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272ac47 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1272ac4e:;
  /* 1272ac4e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272ac51 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272ac54 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1272ac56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272ac59 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ac5c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272ac5f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1272ac62:;
  /* 1272ac62 mov eax, 1 */
  EAX = (0x1u);
L_1272ac67:;
  /* 1272ac67 mov esp, ebp */
  ESP = (EBP);
  /* 1272ac69 pop ebp */
  EBP = (pop32());
  /* 1272ac6a ret  */
  ESPCHK(0x1272a680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac70 @ 0x1272ac70 (304 bytes, 79 insns) */
void f_1272ac70(void) {
  FTRACE(0x1272ac70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272ac70 push ebp */
  push32((uint32_t)(EBP));
  /* 1272ac71 mov ebp, esp */
  EBP = (ESP);
  /* 1272ac73 push ecx */
  push32((uint32_t)(ECX));
  /* 1272ac74 cmp dword ptr [0x12753020], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12753020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ac7b je 0x1272ad9c */
  if (C.zf) goto L_1272ad9c;
  /* 1272ac81 mov eax, dword ptr [0x12753018] */
  EAX = (r32((uint32_t)(0x12753018)));
  /* 1272ac86 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1272ac89 mov ecx, dword ptr [0x12753020] */
  ECX = (r32((uint32_t)(0x12753020)));
  /* 1272ac8f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1272ac92 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ac94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272ac97 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1272ac9c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1272aca1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272aca4 push eax */
  push32((uint32_t)(EAX));
  /* 1272aca5 call dword ptr [0x12754338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754338))), 0x1272acabu);
  /* 1272acab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1272acb0 mov ecx, dword ptr [0x12753018] */
  ECX = (r32((uint32_t)(0x12753018)));
  /* 1272acb6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1272acb8 mov eax, dword ptr [0x12753020] */
  EAX = (r32((uint32_t)(0x12753020)));
  /* 1272acbd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1272acc0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1272acc2 mov edx, dword ptr [0x12753020] */
  EDX = (r32((uint32_t)(0x12753020)));
  /* 1272acc8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1272accb mov eax, dword ptr [0x12753020] */
  EAX = (r32((uint32_t)(0x12753020)));
  /* 1272acd0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1272acd3 mov edx, dword ptr [0x12753018] */
  EDX = (r32((uint32_t)(0x12753018)));
  /* 1272acd9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1272ace4 mov eax, dword ptr [0x12753020] */
  EAX = (r32((uint32_t)(0x12753020)));
  /* 1272ace9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1272acec mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1272acef sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1272acf2 mov eax, dword ptr [0x12753020] */
  EAX = (r32((uint32_t)(0x12753020)));
  /* 1272acf7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1272acfa mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1272acfd mov edx, dword ptr [0x12753020] */
  EDX = (r32((uint32_t)(0x12753020)));
  /* 1272ad03 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1272ad06 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1272ad0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272ad0c jne 0x1272ad22 */
  if (!C.zf) goto L_1272ad22;
  /* 1272ad0e mov edx, dword ptr [0x12753020] */
  EDX = (r32((uint32_t)(0x12753020)));
  /* 1272ad14 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1272ad17 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1272ad19 mov ecx, dword ptr [0x12753020] */
  ECX = (r32((uint32_t)(0x12753020)));
  /* 1272ad1f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1272ad22:;
  /* 1272ad22 mov edx, dword ptr [0x12753020] */
  EDX = (r32((uint32_t)(0x12753020)));
  /* 1272ad28 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ad2c jne 0x1272ad92 */
  if (!C.zf) goto L_1272ad92;
  /* 1272ad2e cmp dword ptr [0x12753024], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12753024))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ad35 jle 0x1272ad92 */
  if ((C.zf||C.sf!=C.of)) goto L_1272ad92;
  /* 1272ad37 mov eax, dword ptr [0x12753020] */
  EAX = (r32((uint32_t)(0x12753020)));
  /* 1272ad3c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1272ad3f push ecx */
  push32((uint32_t)(ECX));
  /* 1272ad40 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272ad42 mov edx, dword ptr [0x1275302c] */
  EDX = (r32((uint32_t)(0x1275302c)));
  /* 1272ad48 push edx */
  push32((uint32_t)(EDX));
  /* 1272ad49 call dword ptr [0x1275433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275433c))), 0x1272ad4fu);
  /* 1272ad4f mov eax, dword ptr [0x12753024] */
  EAX = (r32((uint32_t)(0x12753024)));
  /* 1272ad54 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272ad57 mov ecx, dword ptr [0x12753028] */
  ECX = (r32((uint32_t)(0x12753028)));
  /* 1272ad5d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ad5f mov edx, dword ptr [0x12753020] */
  EDX = (r32((uint32_t)(0x12753020)));
  /* 1272ad65 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ad68 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272ad6a push ecx */
  push32((uint32_t)(ECX));
  /* 1272ad6b mov eax, dword ptr [0x12753020] */
  EAX = (r32((uint32_t)(0x12753020)));
  /* 1272ad70 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ad73 push eax */
  push32((uint32_t)(EAX));
  /* 1272ad74 mov ecx, dword ptr [0x12753020] */
  ECX = (r32((uint32_t)(0x12753020)));
  /* 1272ad7a push ecx */
  push32((uint32_t)(ECX));
  /* 1272ad7b call 0x1272d3a0 */
  push32(0x1272ad80u); f_1272d3a0();
  /* 1272ad80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ad83 mov edx, dword ptr [0x12753024] */
  EDX = (r32((uint32_t)(0x12753024)));
  /* 1272ad89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272ad8c mov dword ptr [0x12753024], edx */
  w32((uint32_t)(0x12753024), (EDX));
L_1272ad92:;
  /* 1272ad92 mov dword ptr [0x12753020], 0 */
  w32((uint32_t)(0x12753020), (0x0u));
L_1272ad9c:;
  /* 1272ad9c mov esp, ebp */
  ESP = (EBP);
  /* 1272ad9e pop ebp */
  EBP = (pop32());
  /* 1272ad9f ret  */
  ESPCHK(0x1272ac70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ada0 @ 0x1272ada0 (1565 bytes, 343 insns) */
void f_1272ada0(void) {
  FTRACE(0x1272ada0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272ada0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272ada1 mov ebp, esp */
  EBP = (ESP);
  /* 1272ada3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272ada9 mov eax, dword ptr [0x12753024] */
  EAX = (r32((uint32_t)(0x12753024)));
  /* 1272adae imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272adb1 push eax */
  push32((uint32_t)(EAX));
  /* 1272adb2 mov ecx, dword ptr [0x12753028] */
  ECX = (r32((uint32_t)(0x12753028)));
  /* 1272adb8 push ecx */
  push32((uint32_t)(ECX));
  /* 1272adb9 call dword ptr [0x127543b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543b4))), 0x1272adbfu);
  /* 1272adbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272adc1 je 0x1272adcb */
  if (C.zf) goto L_1272adcb;
  /* 1272adc3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272adc6 jmp 0x1272b3b9 */
  goto L_1272b3b9;
L_1272adcb:;
  /* 1272adcb mov edx, dword ptr [0x12753028] */
  EDX = (r32((uint32_t)(0x12753028)));
  /* 1272add1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1272add7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1272ade1 jmp 0x1272adf2 */
  goto L_1272adf2;
L_1272ade3:;
  /* 1272ade3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1272ade9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272adec mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1272adf2:;
  /* 1272adf2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1272adf8 cmp ecx, dword ptr [0x12753024] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12753024))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272adfe jge 0x1272b3b7 */
  if ((C.sf==C.of)) goto L_1272b3b7;
  /* 1272ae04 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1272ae0a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1272ae0d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1272ae13 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1272ae18 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1272ae1e push ecx */
  push32((uint32_t)(ECX));
  /* 1272ae1f call dword ptr [0x127543b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543b4))), 0x1272ae25u);
  /* 1272ae25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272ae27 je 0x1272ae33 */
  if (C.zf) goto L_1272ae33;
  /* 1272ae29 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1272ae2e jmp 0x1272b3b9 */
  goto L_1272b3b9;
L_1272ae33:;
  /* 1272ae33 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1272ae39 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1272ae3c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1272ae42 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1272ae48 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ae4e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1272ae51 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1272ae57 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1272ae5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272ae5d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1272ae67 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1272ae71 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1272ae78 jmp 0x1272ae83 */
  goto L_1272ae83;
L_1272ae7a:;
  /* 1272ae7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272ae7d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ae80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1272ae83:;
  /* 1272ae83 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ae87 jge 0x1272b37b */
  if ((C.sf==C.of)) goto L_1272b37b;
  /* 1272ae8d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1272ae97 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1272aea1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1272aeab mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1272aeb5 jmp 0x1272aec6 */
  goto L_1272aec6;
L_1272aeb7:;
  /* 1272aeb7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1272aebd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272aec0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1272aec6:;
  /* 1272aec6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272aecd jge 0x1272aee2 */
  if ((C.sf==C.of)) goto L_1272aee2;
  /* 1272aecf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1272aed5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1272aee0 jmp 0x1272aeb7 */
  goto L_1272aeb7;
L_1272aee2:;
  /* 1272aee2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272aee6 jl 0x1272b31d */
  if ((C.sf!=C.of)) goto L_1272b31d;
  /* 1272aeec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1272aef1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1272aef7 push ecx */
  push32((uint32_t)(ECX));
  /* 1272aef8 call dword ptr [0x127543b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543b4))), 0x1272aefeu);
  /* 1272aefe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272af00 je 0x1272af0c */
  if (C.zf) goto L_1272af0c;
  /* 1272af02 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1272af07 jmp 0x1272b3b9 */
  goto L_1272b3b9;
L_1272af0c:;
  /* 1272af0c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1272af12 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1272af15 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1272af1f jmp 0x1272af30 */
  goto L_1272af30;
L_1272af21:;
  /* 1272af21 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1272af27 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272af2a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1272af30:;
  /* 1272af30 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272af37 jge 0x1272b0b4 */
  if ((C.sf==C.of)) goto L_1272b0b4;
  /* 1272af3d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272af40 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272af43 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1272af49 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1272af4f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272af55 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1272af5b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1272af61 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272af65 jne 0x1272af72 */
  if (!C.zf) goto L_1272af72;
  /* 1272af67 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1272af6d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272af70 je 0x1272af7c */
  if (C.zf) goto L_1272af7c;
L_1272af72:;
  /* 1272af72 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1272af77 jmp 0x1272b3b9 */
  goto L_1272b3b9;
L_1272af7c:;
  /* 1272af7c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1272af82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1272af84 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1272af8a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1272af90 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1272af96 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1272af9c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1272af9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272afa1 je 0x1272afd9 */
  if (C.zf) goto L_1272afd9;
  /* 1272afa3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1272afa9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272afac mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1272afb2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272afbc jle 0x1272afc8 */
  if ((C.zf||C.sf!=C.of)) goto L_1272afc8;
  /* 1272afbe mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1272afc3 jmp 0x1272b3b9 */
  goto L_1272b3b9;
L_1272afc8:;
  /* 1272afc8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1272afce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272afd1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1272afd7 jmp 0x1272b01b */
  goto L_1272b01b;
L_1272afd9:;
  /* 1272afd9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1272afdf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1272afe2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272afe5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1272afeb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272aff2 jle 0x1272affe */
  if ((C.zf||C.sf!=C.of)) goto L_1272affe;
  /* 1272aff4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1272affe:;
  /* 1272affe mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1272b004 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1272b00b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b00e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1272b014 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1272b01b:;
  /* 1272b01b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b022 jl 0x1272b03d */
  if ((C.sf!=C.of)) goto L_1272b03d;
  /* 1272b024 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1272b02a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1272b02d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272b02f jne 0x1272b03d */
  if (!C.zf) goto L_1272b03d;
  /* 1272b031 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b03b jle 0x1272b047 */
  if ((C.zf||C.sf!=C.of)) goto L_1272b047;
L_1272b03d:;
  /* 1272b03d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1272b042 jmp 0x1272b3b9 */
  goto L_1272b3b9;
L_1272b047:;
  /* 1272b047 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1272b04d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b053 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1272b056 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b05c je 0x1272b068 */
  if (C.zf) goto L_1272b068;
  /* 1272b05e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1272b063 jmp 0x1272b3b9 */
  goto L_1272b3b9;
L_1272b068:;
  /* 1272b068 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1272b06e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b074 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1272b07a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1272b080 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b086 jb 0x1272af7c */
  if (C.cf) goto L_1272af7c;
  /* 1272b08c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1272b092 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b098 je 0x1272b0a4 */
  if (C.zf) goto L_1272b0a4;
  /* 1272b09a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1272b09f jmp 0x1272b3b9 */
  goto L_1272b3b9;
L_1272b0a4:;
  /* 1272b0a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272b0a7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b0ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1272b0af jmp 0x1272af21 */
  goto L_1272af21;
L_1272b0b4:;
  /* 1272b0b4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272b0b7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1272b0b9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b0bf je 0x1272b0cb */
  if (C.zf) goto L_1272b0cb;
  /* 1272b0c1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1272b0c6 jmp 0x1272b3b9 */
  goto L_1272b3b9;
L_1272b0cb:;
  /* 1272b0cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272b0ce mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1272b0d4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1272b0db jmp 0x1272b0e6 */
  goto L_1272b0e6;
L_1272b0dd:;
  /* 1272b0dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272b0e0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b0e3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1272b0e6:;
  /* 1272b0e6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b0ea jge 0x1272b31d */
  if ((C.sf==C.of)) goto L_1272b31d;
  /* 1272b0f0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1272b0fa mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1272b100 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1272b106:;
  /* 1272b106 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1272b10c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1272b10f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1272b115 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1272b11b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b121 je 0x1272b24a */
  if (C.zf) goto L_1272b24a;
  /* 1272b127 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272b12a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1272b130 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b137 je 0x1272b24a */
  if (C.zf) goto L_1272b24a;
  /* 1272b13d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1272b143 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b149 jb 0x1272b15e */
  if (C.cf) goto L_1272b15e;
  /* 1272b14b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1272b151 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b156 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b15c jb 0x1272b168 */
  if (C.cf) goto L_1272b168;
L_1272b15e:;
  /* 1272b15e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1272b163 jmp 0x1272b3b9 */
  goto L_1272b3b9;
L_1272b168:;
  /* 1272b168 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1272b16e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1272b174 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1272b17a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1272b180 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b183 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1272b186 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272b189 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b18e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1272b194:;
  /* 1272b194 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272b197 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b19d je 0x1272b1be */
  if (C.zf) goto L_1272b1be;
  /* 1272b19f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272b1a2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b1a8 jne 0x1272b1ac */
  if (!C.zf) goto L_1272b1ac;
  /* 1272b1aa jmp 0x1272b1be */
  goto L_1272b1be;
L_1272b1ac:;
  /* 1272b1ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272b1af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1272b1b1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1272b1b4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272b1b7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b1b9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1272b1bc jmp 0x1272b194 */
  goto L_1272b194;
L_1272b1be:;
  /* 1272b1be mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272b1c1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b1c7 jne 0x1272b1d3 */
  if (!C.zf) goto L_1272b1d3;
  /* 1272b1c9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1272b1ce jmp 0x1272b3b9 */
  goto L_1272b3b9;
L_1272b1d3:;
  /* 1272b1d3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1272b1d9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1272b1db sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1272b1de sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272b1e1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1272b1e7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b1ee jle 0x1272b1fa */
  if ((C.zf||C.sf!=C.of)) goto L_1272b1fa;
  /* 1272b1f0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1272b1fa:;
  /* 1272b1fa mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1272b200 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b203 je 0x1272b20f */
  if (C.zf) goto L_1272b20f;
  /* 1272b205 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1272b20a jmp 0x1272b3b9 */
  goto L_1272b3b9;
L_1272b20f:;
  /* 1272b20f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1272b215 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1272b218 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b21e je 0x1272b22a */
  if (C.zf) goto L_1272b22a;
  /* 1272b220 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1272b225 jmp 0x1272b3b9 */
  goto L_1272b3b9;
L_1272b22a:;
  /* 1272b22a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1272b230 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1272b236 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1272b23c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b23f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1272b245 jmp 0x1272b106 */
  goto L_1272b106;
L_1272b24a:;
  /* 1272b24a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b251 je 0x1272b2c1 */
  if (C.zf) goto L_1272b2c1;
  /* 1272b253 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b257 jge 0x1272b28b */
  if ((C.sf==C.of)) goto L_1272b28b;
  /* 1272b259 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1272b25e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272b261 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1272b263 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1272b269 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1272b26b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1272b271 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1272b276 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272b279 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1272b27b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1272b281 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1272b283 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1272b289 jmp 0x1272b2c1 */
  goto L_1272b2c1;
L_1272b28b:;
  /* 1272b28b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272b28e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272b291 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1272b296 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1272b298 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1272b29e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1272b2a0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1272b2a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272b2a9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272b2ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1272b2b1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1272b2b3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1272b2b9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1272b2bb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1272b2c1:;
  /* 1272b2c1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1272b2c7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1272b2ca cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b2d0 jne 0x1272b2e4 */
  if (!C.zf) goto L_1272b2e4;
  /* 1272b2d2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272b2d5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1272b2db cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b2e2 je 0x1272b2ee */
  if (C.zf) goto L_1272b2ee;
L_1272b2e4:;
  /* 1272b2e4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1272b2e9 jmp 0x1272b3b9 */
  goto L_1272b3b9;
L_1272b2ee:;
  /* 1272b2ee mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1272b2f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1272b2f7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b2fd je 0x1272b309 */
  if (C.zf) goto L_1272b309;
  /* 1272b2ff mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1272b304 jmp 0x1272b3b9 */
  goto L_1272b3b9;
L_1272b309:;
  /* 1272b309 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1272b30f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b312 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1272b318 jmp 0x1272b0dd */
  goto L_1272b0dd;
L_1272b31d:;
  /* 1272b31d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272b320 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1272b326 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1272b32c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b330 jne 0x1272b34a */
  if (!C.zf) goto L_1272b34a;
  /* 1272b332 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272b335 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1272b33b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1272b341 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b348 je 0x1272b351 */
  if (C.zf) goto L_1272b351;
L_1272b34a:;
  /* 1272b34a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1272b34f jmp 0x1272b3b9 */
  goto L_1272b3b9;
L_1272b351:;
  /* 1272b351 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1272b357 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b35d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1272b363 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272b366 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b36b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1272b36e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272b371 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1272b373 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1272b376 jmp 0x1272ae7a */
  goto L_1272ae7a;
L_1272b37b:;
  /* 1272b37b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1272b381 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1272b387 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b389 jne 0x1272b39c */
  if (!C.zf) goto L_1272b39c;
  /* 1272b38b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1272b391 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1272b397 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b39a je 0x1272b3a3 */
  if (C.zf) goto L_1272b3a3;
L_1272b39c:;
  /* 1272b39c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1272b3a1 jmp 0x1272b3b9 */
  goto L_1272b3b9;
L_1272b3a3:;
  /* 1272b3a3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1272b3a9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b3ac mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1272b3b2 jmp 0x1272ade3 */
  goto L_1272ade3;
L_1272b3b7:;
  /* 1272b3b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1272b3b9:;
  /* 1272b3b9 mov esp, ebp */
  ESP = (EBP);
  /* 1272b3bb pop ebp */
  EBP = (pop32());
  /* 1272b3bc ret  */
  ESPCHK(0x1272ada0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3c0 @ 0x1272b3c0 (250 bytes, 92 insns) */
void f_1272b3c0(void) {
  FTRACE(0x1272b3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272b3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272b3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1272b3c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272b3c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1272b3c7 push esi */
  push32((uint32_t)(ESI));
  /* 1272b3c8 push edi */
  push32((uint32_t)(EDI));
  /* 1272b3c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1272b3cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1272b3cf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1272b3d2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1272b3d5:;
  /* 1272b3d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b3d9 jne 0x1272b3f9 */
  if (!C.zf) goto L_1272b3f9;
  /* 1272b3db push 0x1274d224 */
  push32((uint32_t)(0x1274d224u));
  /* 1272b3e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272b3e2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1272b3e4 push 0x1274d218 */
  push32((uint32_t)(0x1274d218u));
  /* 1272b3e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272b3eb call 0x12724570 */
  push32(0x1272b3f0u); f_12724570();
  /* 1272b3f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b3f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b3f6 jne 0x1272b3f9 */
  if (!C.zf) goto L_1272b3f9;
  /* 1272b3f8 int3  */
  x86_unimpl("int3 @ 0x1272b3f8");
L_1272b3f9:;
  /* 1272b3f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272b3fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272b3fd jne 0x1272b3d5 */
  if (!C.zf) goto L_1272b3d5;
L_1272b3ff:;
  /* 1272b3ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b403 jne 0x1272b423 */
  if (!C.zf) goto L_1272b423;
  /* 1272b405 push 0x1274d208 */
  push32((uint32_t)(0x1274d208u));
  /* 1272b40a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272b40c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1272b40e push 0x1274d218 */
  push32((uint32_t)(0x1274d218u));
  /* 1272b413 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272b415 call 0x12724570 */
  push32(0x1272b41au); f_12724570();
  /* 1272b41a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b41d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b420 jne 0x1272b423 */
  if (!C.zf) goto L_1272b423;
  /* 1272b422 int3  */
  x86_unimpl("int3 @ 0x1272b422");
L_1272b423:;
  /* 1272b423 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272b425 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272b427 jne 0x1272b3ff */
  if (!C.zf) goto L_1272b3ff;
  /* 1272b429 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b42c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1272b433 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272b439 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1272b43c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b43f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272b442 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1272b444 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b447 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1272b44e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272b451 push ecx */
  push32((uint32_t)(ECX));
  /* 1272b452 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272b455 push edx */
  push32((uint32_t)(EDX));
  /* 1272b456 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b459 push eax */
  push32((uint32_t)(EAX));
  /* 1272b45a call 0x1272c440 */
  push32(0x1272b45fu); f_1272c440();
  /* 1272b45f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b462 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1272b465 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b468 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1272b46b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272b46e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b471 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1272b474 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b477 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b47b jl 0x1272b49f */
  if ((C.sf!=C.of)) goto L_1272b49f;
  /* 1272b47d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b480 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1272b482 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1272b485 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272b487 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1272b48d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1272b490 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b493 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1272b495 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b498 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b49b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1272b49d jmp 0x1272b4b0 */
  goto L_1272b4b0;
L_1272b49f:;
  /* 1272b49f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b4a2 push edx */
  push32((uint32_t)(EDX));
  /* 1272b4a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272b4a5 call 0x1272c1c0 */
  push32(0x1272b4aau); f_1272c1c0();
  /* 1272b4aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b4ad mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1272b4b0:;
  /* 1272b4b0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272b4b3 pop edi */
  EDI = (pop32());
  /* 1272b4b4 pop esi */
  ESI = (pop32());
  /* 1272b4b5 pop ebx */
  EBX = (pop32());
  /* 1272b4b6 mov esp, ebp */
  ESP = (EBP);
  /* 1272b4b8 pop ebp */
  EBP = (pop32());
  /* 1272b4b9 ret  */
  ESPCHK(0x1272b3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4c0 @ 0x1272b4c0 (183 bytes, 58 insns) */
void f_1272b4c0(void) {
  FTRACE(0x1272b4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272b4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272b4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1272b4c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272b4c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272b4c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b4cc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b4d1 ja 0x1272b4ea */
  if ((!C.cf&&!C.zf)) goto L_1272b4ea;
  /* 1272b4d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272b4d6 mov edx, dword ptr [0x1274fc98] */
  EDX = (r32((uint32_t)(0x1274fc98)));
  /* 1272b4dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272b4de mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1272b4e2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1272b4e5 jmp 0x1272b573 */
  goto L_1272b573;
L_1272b4ea:;
  /* 1272b4ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272b4ed sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1272b4f0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1272b4f6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1272b4fc mov edx, dword ptr [0x1274fc98] */
  EDX = (r32((uint32_t)(0x1274fc98)));
  /* 1272b502 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272b504 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1272b508 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1272b50d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272b50f je 0x1272b533 */
  if (C.zf) goto L_1272b533;
  /* 1272b511 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272b514 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1272b517 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1272b51d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1272b520 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1272b523 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1272b526 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1272b52a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1272b531 jmp 0x1272b544 */
  goto L_1272b544;
L_1272b533:;
  /* 1272b533 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1272b536 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1272b539 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1272b53d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1272b544:;
  /* 1272b544 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272b546 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272b548 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272b54a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1272b54d push ecx */
  push32((uint32_t)(ECX));
  /* 1272b54e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272b551 push edx */
  push32((uint32_t)(EDX));
  /* 1272b552 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1272b555 push eax */
  push32((uint32_t)(EAX));
  /* 1272b556 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272b558 call 0x1272d6e0 */
  push32(0x1272b55du); f_1272d6e0();
  /* 1272b55d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b560 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272b562 jne 0x1272b568 */
  if (!C.zf) goto L_1272b568;
  /* 1272b564 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272b566 jmp 0x1272b573 */
  goto L_1272b573;
L_1272b568:;
  /* 1272b568 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272b56b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272b570 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1272b573:;
  /* 1272b573 mov esp, ebp */
  ESP = (EBP);
  /* 1272b575 pop ebp */
  EBP = (pop32());
  /* 1272b576 ret  */
  ESPCHK(0x1272b4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b580 @ 0x1272b580 (836 bytes, 238 insns) */
void f_1272b580(void) {
  FTRACE(0x1272b580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272b580 push ebp */
  push32((uint32_t)(EBP));
  /* 1272b581 mov ebp, esp */
  EBP = (ESP);
  /* 1272b583 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272b586 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1272b588 call 0x12728eb0 */
  push32(0x1272b58du); f_12728eb0();
  /* 1272b58d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272b593 push eax */
  push32((uint32_t)(EAX));
  /* 1272b594 call 0x1272b8d0 */
  push32(0x1272b599u); f_1272b8d0();
  /* 1272b599 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b59c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1272b59f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272b5a2 cmp ecx, dword ptr [0x12752d64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12752d64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b5a8 jne 0x1272b5bb */
  if (!C.zf) goto L_1272b5bb;
  /* 1272b5aa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1272b5ac call 0x12728f50 */
  push32(0x1272b5b1u); f_12728f50();
  /* 1272b5b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b5b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272b5b6 jmp 0x1272b8c0 */
  goto L_1272b8c0;
L_1272b5bb:;
  /* 1272b5bb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b5bf jne 0x1272b5dc */
  if (!C.zf) goto L_1272b5dc;
  /* 1272b5c1 call 0x1272b9b0 */
  push32(0x1272b5c6u); f_1272b9b0();
  /* 1272b5c6 call 0x1272ba30 */
  push32(0x1272b5cbu); f_1272ba30();
  /* 1272b5cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1272b5cd call 0x12728f50 */
  push32(0x1272b5d2u); f_12728f50();
  /* 1272b5d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b5d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272b5d7 jmp 0x1272b8c0 */
  goto L_1272b8c0;
L_1272b5dc:;
  /* 1272b5dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1272b5e3 jmp 0x1272b5ee */
  goto L_1272b5ee;
L_1272b5e5:;
  /* 1272b5e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272b5e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b5eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1272b5ee:;
  /* 1272b5ee cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b5f2 jae 0x1272b73f */
  if (!C.cf) goto L_1272b73f;
  /* 1272b5f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272b5fb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272b5fe mov ecx, dword ptr [eax + 0x1274feb8] */
  ECX = (r32((uint32_t)(EAX + 0x1274feb8)));
  /* 1272b604 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b607 jne 0x1272b73a */
  if (!C.zf) goto L_1272b73a;
  /* 1272b60d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1272b614 jmp 0x1272b61f */
  goto L_1272b61f;
L_1272b616:;
  /* 1272b616 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b619 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b61c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1272b61f:;
  /* 1272b61f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b626 jae 0x1272b634 */
  if (!C.cf) goto L_1272b634;
  /* 1272b628 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b62b mov byte ptr [eax + 0x12752f00], 0 */
  w8((uint32_t)(EAX + 0x12752f00), (0x0u));
  /* 1272b632 jmp 0x1272b616 */
  goto L_1272b616;
L_1272b634:;
  /* 1272b634 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1272b63b jmp 0x1272b646 */
  goto L_1272b646;
L_1272b63d:;
  /* 1272b63d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272b640 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b643 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1272b646:;
  /* 1272b646 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b64a jae 0x1272b6c7 */
  if (!C.cf) goto L_1272b6c7;
  /* 1272b64c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272b64f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272b652 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272b655 lea ecx, [edx + eax*8 + 0x1274fec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1274fec8));
  /* 1272b65c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1272b65f jmp 0x1272b66a */
  goto L_1272b66a;
L_1272b661:;
  /* 1272b661 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272b664 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b667 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1272b66a:;
  /* 1272b66a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272b66d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272b66f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1272b671 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272b673 je 0x1272b6c2 */
  if (C.zf) goto L_1272b6c2;
  /* 1272b675 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272b678 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272b67a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1272b67d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272b67f je 0x1272b6c2 */
  if (C.zf) goto L_1272b6c2;
  /* 1272b681 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272b684 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272b686 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1272b688 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1272b68b jmp 0x1272b696 */
  goto L_1272b696;
L_1272b68d:;
  /* 1272b68d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b690 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b693 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1272b696:;
  /* 1272b696 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272b699 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272b69b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1272b69e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b6a1 ja 0x1272b6c0 */
  if ((!C.cf&&!C.zf)) goto L_1272b6c0;
  /* 1272b6a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b6a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272b6a9 mov dl, byte ptr [eax + 0x12752f01] */
  DL = (r8((uint32_t)(EAX + 0x12752f01)));
  /* 1272b6af or dl, byte ptr [ecx + 0x1274feb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1274feb0))); DL = (_r); fl_logic(_r,8); }
  /* 1272b6b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b6b8 mov byte ptr [eax + 0x12752f01], dl */
  w8((uint32_t)(EAX + 0x12752f01), (DL));
  /* 1272b6be jmp 0x1272b68d */
  goto L_1272b68d;
L_1272b6c0:;
  /* 1272b6c0 jmp 0x1272b661 */
  goto L_1272b661;
L_1272b6c2:;
  /* 1272b6c2 jmp 0x1272b63d */
  goto L_1272b63d;
L_1272b6c7:;
  /* 1272b6c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272b6ca mov dword ptr [0x12752d64], ecx */
  w32((uint32_t)(0x12752d64), (ECX));
  /* 1272b6d0 mov dword ptr [0x12752dec], 1 */
  w32((uint32_t)(0x12752dec), (0x1u));
  /* 1272b6da mov edx, dword ptr [0x12752d64] */
  EDX = (r32((uint32_t)(0x12752d64)));
  /* 1272b6e0 push edx */
  push32((uint32_t)(EDX));
  /* 1272b6e1 call 0x1272b930 */
  push32(0x1272b6e6u); f_1272b930();
  /* 1272b6e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b6e9 mov dword ptr [0x12753004], eax */
  w32((uint32_t)(0x12753004), (EAX));
  /* 1272b6ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1272b6f5 jmp 0x1272b700 */
  goto L_1272b700;
L_1272b6f7:;
  /* 1272b6f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272b6fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b6fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1272b700:;
  /* 1272b700 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b704 jae 0x1272b724 */
  if (!C.cf) goto L_1272b724;
  /* 1272b706 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272b709 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272b70c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272b70f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272b712 mov cx, word ptr [ecx + eax*2 + 0x1274febc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1274febc)));
  /* 1272b71a mov word ptr [edx*2 + 0x12752de0], cx */
  w16((uint32_t)(EDX*2 + 0x12752de0), (CX));
  /* 1272b722 jmp 0x1272b6f7 */
  goto L_1272b6f7;
L_1272b724:;
  /* 1272b724 call 0x1272ba30 */
  push32(0x1272b729u); f_1272ba30();
  /* 1272b729 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1272b72b call 0x12728f50 */
  push32(0x1272b730u); f_12728f50();
  /* 1272b730 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b733 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272b735 jmp 0x1272b8c0 */
  goto L_1272b8c0;
L_1272b73a:;
  /* 1272b73a jmp 0x1272b5e5 */
  goto L_1272b5e5;
L_1272b73f:;
  /* 1272b73f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1272b742 push edx */
  push32((uint32_t)(EDX));
  /* 1272b743 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272b746 push eax */
  push32((uint32_t)(EAX));
  /* 1272b747 call dword ptr [0x12754310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754310))), 0x1272b74du);
  /* 1272b74d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b750 jne 0x1272b892 */
  if (!C.zf) goto L_1272b892;
  /* 1272b756 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1272b75d jmp 0x1272b768 */
  goto L_1272b768;
L_1272b75f:;
  /* 1272b75f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b762 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b765 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1272b768:;
  /* 1272b768 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b76f jae 0x1272b77d */
  if (!C.cf) goto L_1272b77d;
  /* 1272b771 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b774 mov byte ptr [edx + 0x12752f00], 0 */
  w8((uint32_t)(EDX + 0x12752f00), (0x0u));
  /* 1272b77b jmp 0x1272b75f */
  goto L_1272b75f;
L_1272b77d:;
  /* 1272b77d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272b780 mov dword ptr [0x12752d64], eax */
  w32((uint32_t)(0x12752d64), (EAX));
  /* 1272b785 mov dword ptr [0x12753004], 0 */
  w32((uint32_t)(0x12753004), (0x0u));
  /* 1272b78f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b793 jbe 0x1272b84e */
  if ((C.cf||C.zf)) goto L_1272b84e;
  /* 1272b799 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1272b79c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1272b79f jmp 0x1272b7aa */
  goto L_1272b7aa;
L_1272b7a1:;
  /* 1272b7a1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272b7a4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b7a7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1272b7aa:;
  /* 1272b7aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272b7ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272b7af mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1272b7b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272b7b3 je 0x1272b7fc */
  if (C.zf) goto L_1272b7fc;
  /* 1272b7b5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272b7b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272b7ba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1272b7bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272b7bf je 0x1272b7fc */
  if (C.zf) goto L_1272b7fc;
  /* 1272b7c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272b7c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272b7c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1272b7c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1272b7cb jmp 0x1272b7d6 */
  goto L_1272b7d6;
L_1272b7cd:;
  /* 1272b7cd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b7d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b7d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1272b7d6:;
  /* 1272b7d6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272b7d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272b7db mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1272b7de cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b7e1 ja 0x1272b7fa */
  if ((!C.cf&&!C.zf)) goto L_1272b7fa;
  /* 1272b7e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b7e6 mov cl, byte ptr [eax + 0x12752f01] */
  CL = (r8((uint32_t)(EAX + 0x12752f01)));
  /* 1272b7ec or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1272b7ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b7f2 mov byte ptr [edx + 0x12752f01], cl */
  w8((uint32_t)(EDX + 0x12752f01), (CL));
  /* 1272b7f8 jmp 0x1272b7cd */
  goto L_1272b7cd;
L_1272b7fa:;
  /* 1272b7fa jmp 0x1272b7a1 */
  goto L_1272b7a1;
L_1272b7fc:;
  /* 1272b7fc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1272b803 jmp 0x1272b80e */
  goto L_1272b80e;
L_1272b805:;
  /* 1272b805 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b808 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b80b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1272b80e:;
  /* 1272b80e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b815 jae 0x1272b82e */
  if (!C.cf) goto L_1272b82e;
  /* 1272b817 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b81a mov dl, byte ptr [ecx + 0x12752f01] */
  DL = (r8((uint32_t)(ECX + 0x12752f01)));
  /* 1272b820 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1272b823 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272b826 mov byte ptr [eax + 0x12752f01], dl */
  w8((uint32_t)(EAX + 0x12752f01), (DL));
  /* 1272b82c jmp 0x1272b805 */
  goto L_1272b805;
L_1272b82e:;
  /* 1272b82e mov ecx, dword ptr [0x12752d64] */
  ECX = (r32((uint32_t)(0x12752d64)));
  /* 1272b834 push ecx */
  push32((uint32_t)(ECX));
  /* 1272b835 call 0x1272b930 */
  push32(0x1272b83au); f_1272b930();
  /* 1272b83a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b83d mov dword ptr [0x12753004], eax */
  w32((uint32_t)(0x12753004), (EAX));
  /* 1272b842 mov dword ptr [0x12752dec], 1 */
  w32((uint32_t)(0x12752dec), (0x1u));
  /* 1272b84c jmp 0x1272b858 */
  goto L_1272b858;
L_1272b84e:;
  /* 1272b84e mov dword ptr [0x12752dec], 0 */
  w32((uint32_t)(0x12752dec), (0x0u));
L_1272b858:;
  /* 1272b858 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1272b85f jmp 0x1272b86a */
  goto L_1272b86a;
L_1272b861:;
  /* 1272b861 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272b864 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b867 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1272b86a:;
  /* 1272b86a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b86e jae 0x1272b87f */
  if (!C.cf) goto L_1272b87f;
  /* 1272b870 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272b873 mov word ptr [eax*2 + 0x12752de0], 0 */
  w16((uint32_t)(EAX*2 + 0x12752de0), (0x0u));
  /* 1272b87d jmp 0x1272b861 */
  goto L_1272b861;
L_1272b87f:;
  /* 1272b87f call 0x1272ba30 */
  push32(0x1272b884u); f_1272ba30();
  /* 1272b884 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1272b886 call 0x12728f50 */
  push32(0x1272b88bu); f_12728f50();
  /* 1272b88b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b88e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272b890 jmp 0x1272b8c0 */
  goto L_1272b8c0;
L_1272b892:;
  /* 1272b892 cmp dword ptr [0x12751868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b899 je 0x1272b8b3 */
  if (C.zf) goto L_1272b8b3;
  /* 1272b89b call 0x1272b9b0 */
  push32(0x1272b8a0u); f_1272b9b0();
  /* 1272b8a0 call 0x1272ba30 */
  push32(0x1272b8a5u); f_1272ba30();
  /* 1272b8a5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1272b8a7 call 0x12728f50 */
  push32(0x1272b8acu); f_12728f50();
  /* 1272b8ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b8af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272b8b1 jmp 0x1272b8c0 */
  goto L_1272b8c0;
L_1272b8b3:;
  /* 1272b8b3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1272b8b5 call 0x12728f50 */
  push32(0x1272b8bau); f_12728f50();
  /* 1272b8ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b8bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1272b8c0:;
  /* 1272b8c0 mov esp, ebp */
  ESP = (EBP);
  /* 1272b8c2 pop ebp */
  EBP = (pop32());
  /* 1272b8c3 ret  */
  ESPCHK(0x1272b580u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1272b8d0 (89 bytes, 21 insns) */
void f_1272b8d0(void) {
  FTRACE(0x1272b8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272b8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272b8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1272b8d3 mov dword ptr [0x12751868], 0 */
  w32((uint32_t)(0x12751868), (0x0u));
  /* 1272b8dd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b8e1 jne 0x1272b8f5 */
  if (!C.zf) goto L_1272b8f5;
  /* 1272b8e3 mov dword ptr [0x12751868], 1 */
  w32((uint32_t)(0x12751868), (0x1u));
  /* 1272b8ed call dword ptr [0x12754308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754308))), 0x1272b8f3u);
  /* 1272b8f3 jmp 0x1272b927 */
  goto L_1272b927;
L_1272b8f5:;
  /* 1272b8f5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b8f9 jne 0x1272b90d */
  if (!C.zf) goto L_1272b90d;
  /* 1272b8fb mov dword ptr [0x12751868], 1 */
  w32((uint32_t)(0x12751868), (0x1u));
  /* 1272b905 call dword ptr [0x1275430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275430c))), 0x1272b90bu);
  /* 1272b90b jmp 0x1272b927 */
  goto L_1272b927;
L_1272b90d:;
  /* 1272b90d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b911 jne 0x1272b924 */
  if (!C.zf) goto L_1272b924;
  /* 1272b913 mov dword ptr [0x12751868], 1 */
  w32((uint32_t)(0x12751868), (0x1u));
  /* 1272b91d mov eax, dword ptr [0x12751888] */
  EAX = (r32((uint32_t)(0x12751888)));
  /* 1272b922 jmp 0x1272b927 */
  goto L_1272b927;
L_1272b924:;
  /* 1272b924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1272b927:;
  /* 1272b927 pop ebp */
  EBP = (pop32());
  /* 1272b928 ret  */
  ESPCHK(0x1272b8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b930 @ 0x1272b930 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1272b930(void) {
  FTRACE(0x1272b930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272b930 push ebp */
  push32((uint32_t)(EBP));
  /* 1272b931 mov ebp, esp */
  EBP = (ESP);
  /* 1272b933 push ecx */
  push32((uint32_t)(ECX));
  /* 1272b934 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272b937 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272b93a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272b93d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272b943 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1272b946 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b94a ja 0x1272b97a */
  if ((!C.cf&&!C.zf)) goto L_1272b97a;
  /* 1272b94c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272b94f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272b951 mov dl, byte ptr [eax + 0x1272b994] */
  DL = (r8((uint32_t)(EAX + 0x1272b994)));
  /* 1272b957 jmp dword ptr [edx*4 + 0x1272b980] */
  switch (EDX) {
    case 0: goto L_1272b95e;
    case 1: goto L_1272b965;
    case 2: goto L_1272b96c;
    case 3: goto L_1272b973;
    case 4: goto L_1272b97a;
    default: x86_unimpl("switch@0x1272b957 out of table"); return;
  }
L_1272b95e:;
  /* 1272b95e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1272b963 jmp 0x1272b97c */
  goto L_1272b97c;
L_1272b965:;
  /* 1272b965 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1272b96a jmp 0x1272b97c */
  goto L_1272b97c;
L_1272b96c:;
  /* 1272b96c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1272b971 jmp 0x1272b97c */
  goto L_1272b97c;
L_1272b973:;
  /* 1272b973 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1272b978 jmp 0x1272b97c */
  goto L_1272b97c;
L_1272b97a:;
  /* 1272b97a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1272b97c:;
  /* 1272b97c mov esp, ebp */
  ESP = (EBP);
  /* 1272b97e pop ebp */
  EBP = (pop32());
  /* 1272b97f ret  */
  ESPCHK(0x1272b930u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1272b9b0 (116 bytes, 29 insns) */
void f_1272b9b0(void) {
  FTRACE(0x1272b9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272b9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272b9b1 mov ebp, esp */
  EBP = (ESP);
  /* 1272b9b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1272b9b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1272b9bb jmp 0x1272b9c6 */
  goto L_1272b9c6;
L_1272b9bd:;
  /* 1272b9bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272b9c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272b9c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1272b9c6:;
  /* 1272b9c6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272b9cd jge 0x1272b9db */
  if ((C.sf==C.of)) goto L_1272b9db;
  /* 1272b9cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272b9d2 mov byte ptr [ecx + 0x12752f00], 0 */
  w8((uint32_t)(ECX + 0x12752f00), (0x0u));
  /* 1272b9d9 jmp 0x1272b9bd */
  goto L_1272b9bd;
L_1272b9db:;
  /* 1272b9db mov dword ptr [0x12752d64], 0 */
  w32((uint32_t)(0x12752d64), (0x0u));
  /* 1272b9e5 mov dword ptr [0x12752dec], 0 */
  w32((uint32_t)(0x12752dec), (0x0u));
  /* 1272b9ef mov dword ptr [0x12753004], 0 */
  w32((uint32_t)(0x12753004), (0x0u));
  /* 1272b9f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1272ba00 jmp 0x1272ba0b */
  goto L_1272ba0b;
L_1272ba02:;
  /* 1272ba02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ba05 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ba08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1272ba0b:;
  /* 1272ba0b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ba0f jge 0x1272ba20 */
  if ((C.sf==C.of)) goto L_1272ba20;
  /* 1272ba11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ba14 mov word ptr [eax*2 + 0x12752de0], 0 */
  w16((uint32_t)(EAX*2 + 0x12752de0), (0x0u));
  /* 1272ba1e jmp 0x1272ba02 */
  goto L_1272ba02;
L_1272ba20:;
  /* 1272ba20 mov esp, ebp */
  ESP = (EBP);
  /* 1272ba22 pop ebp */
  EBP = (pop32());
  /* 1272ba23 ret  */
  ESPCHK(0x1272b9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba30 @ 0x1272ba30 (770 bytes, 175 insns) */
void f_1272ba30(void) {
  FTRACE(0x1272ba30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272ba30 push ebp */
  push32((uint32_t)(EBP));
  /* 1272ba31 mov ebp, esp */
  EBP = (ESP);
  /* 1272ba33 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272ba39 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1272ba3f push eax */
  push32((uint32_t)(EAX));
  /* 1272ba40 mov ecx, dword ptr [0x12752d64] */
  ECX = (r32((uint32_t)(0x12752d64)));
  /* 1272ba46 push ecx */
  push32((uint32_t)(ECX));
  /* 1272ba47 call dword ptr [0x12754310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754310))), 0x1272ba4du);
  /* 1272ba4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ba50 jne 0x1272bc69 */
  if (!C.zf) goto L_1272bc69;
  /* 1272ba56 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1272ba60 jmp 0x1272ba71 */
  goto L_1272ba71;
L_1272ba62:;
  /* 1272ba62 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272ba68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ba6b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1272ba71:;
  /* 1272ba71 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ba7b jae 0x1272ba92 */
  if (!C.cf) goto L_1272ba92;
  /* 1272ba7d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272ba83 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1272ba89 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1272ba90 jmp 0x1272ba62 */
  goto L_1272ba62;
L_1272ba92:;
  /* 1272ba92 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1272ba99 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1272ba9f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272baa2 jmp 0x1272baad */
  goto L_1272baad;
L_1272baa4:;
  /* 1272baa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272baa7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272baaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1272baad:;
  /* 1272baad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272bab0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272bab2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1272bab4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272bab6 je 0x1272baf8 */
  if (C.zf) goto L_1272baf8;
  /* 1272bab8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272babb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272babd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1272babf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1272bac5 jmp 0x1272bad6 */
  goto L_1272bad6;
L_1272bac7:;
  /* 1272bac7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bacd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272bad0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1272bad6:;
  /* 1272bad6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272bad9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272badb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1272bade cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272bae4 ja 0x1272baf6 */
  if ((!C.cf&&!C.zf)) goto L_1272baf6;
  /* 1272bae6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272baec mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1272baf4 jmp 0x1272bac7 */
  goto L_1272bac7;
L_1272baf6:;
  /* 1272baf6 jmp 0x1272baa4 */
  goto L_1272baa4;
L_1272baf8:;
  /* 1272baf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272bafa mov eax, dword ptr [0x12753004] */
  EAX = (r32((uint32_t)(0x12753004)));
  /* 1272baff push eax */
  push32((uint32_t)(EAX));
  /* 1272bb00 mov ecx, dword ptr [0x12752d64] */
  ECX = (r32((uint32_t)(0x12752d64)));
  /* 1272bb06 push ecx */
  push32((uint32_t)(ECX));
  /* 1272bb07 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1272bb0d push edx */
  push32((uint32_t)(EDX));
  /* 1272bb0e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1272bb13 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1272bb19 push eax */
  push32((uint32_t)(EAX));
  /* 1272bb1a push 1 */
  push32((uint32_t)(0x1u));
  /* 1272bb1c call 0x1272d6e0 */
  push32(0x1272bb21u); f_1272d6e0();
  /* 1272bb21 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272bb24 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272bb26 mov ecx, dword ptr [0x12752d64] */
  ECX = (r32((uint32_t)(0x12752d64)));
  /* 1272bb2c push ecx */
  push32((uint32_t)(ECX));
  /* 1272bb2d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1272bb32 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1272bb38 push edx */
  push32((uint32_t)(EDX));
  /* 1272bb39 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1272bb3e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1272bb44 push eax */
  push32((uint32_t)(EAX));
  /* 1272bb45 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1272bb4a mov ecx, dword ptr [0x12753004] */
  ECX = (r32((uint32_t)(0x12753004)));
  /* 1272bb50 push ecx */
  push32((uint32_t)(ECX));
  /* 1272bb51 call 0x1272d8a0 */
  push32(0x1272bb56u); f_1272d8a0();
  /* 1272bb56 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272bb59 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272bb5b mov edx, dword ptr [0x12752d64] */
  EDX = (r32((uint32_t)(0x12752d64)));
  /* 1272bb61 push edx */
  push32((uint32_t)(EDX));
  /* 1272bb62 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1272bb67 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1272bb6d push eax */
  push32((uint32_t)(EAX));
  /* 1272bb6e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1272bb73 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1272bb79 push ecx */
  push32((uint32_t)(ECX));
  /* 1272bb7a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1272bb7f mov edx, dword ptr [0x12753004] */
  EDX = (r32((uint32_t)(0x12753004)));
  /* 1272bb85 push edx */
  push32((uint32_t)(EDX));
  /* 1272bb86 call 0x1272d8a0 */
  push32(0x1272bb8bu); f_1272d8a0();
  /* 1272bb8b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272bb8e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1272bb98 jmp 0x1272bba9 */
  goto L_1272bba9;
L_1272bb9a:;
  /* 1272bb9a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bba0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272bba3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1272bba9:;
  /* 1272bba9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272bbb3 jae 0x1272bc64 */
  if (!C.cf) goto L_1272bc64;
  /* 1272bbb9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bbbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272bbc1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1272bbc9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1272bbcc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272bbce je 0x1272bc06 */
  if (C.zf) goto L_1272bc06;
  /* 1272bbd0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bbd6 mov cl, byte ptr [eax + 0x12752f01] */
  CL = (r8((uint32_t)(EAX + 0x12752f01)));
  /* 1272bbdc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1272bbdf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bbe5 mov byte ptr [edx + 0x12752f01], cl */
  w8((uint32_t)(EDX + 0x12752f01), (CL));
  /* 1272bbeb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bbf1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bbf7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1272bbfe mov byte ptr [eax + 0x12752e00], dl */
  w8((uint32_t)(EAX + 0x12752e00), (DL));
  /* 1272bc04 jmp 0x1272bc5f */
  goto L_1272bc5f;
L_1272bc06:;
  /* 1272bc06 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bc0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272bc0e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1272bc16 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1272bc19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272bc1b je 0x1272bc52 */
  if (C.zf) goto L_1272bc52;
  /* 1272bc1d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bc23 mov al, byte ptr [edx + 0x12752f01] */
  AL = (r8((uint32_t)(EDX + 0x12752f01)));
  /* 1272bc29 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1272bc2b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bc31 mov byte ptr [ecx + 0x12752f01], al */
  w8((uint32_t)(ECX + 0x12752f01), (AL));
  /* 1272bc37 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bc3d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bc43 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1272bc4a mov byte ptr [edx + 0x12752e00], cl */
  w8((uint32_t)(EDX + 0x12752e00), (CL));
  /* 1272bc50 jmp 0x1272bc5f */
  goto L_1272bc5f;
L_1272bc52:;
  /* 1272bc52 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bc58 mov byte ptr [edx + 0x12752e00], 0 */
  w8((uint32_t)(EDX + 0x12752e00), (0x0u));
L_1272bc5f:;
  /* 1272bc5f jmp 0x1272bb9a */
  goto L_1272bb9a;
L_1272bc64:;
  /* 1272bc64 jmp 0x1272bd2e */
  goto L_1272bd2e;
L_1272bc69:;
  /* 1272bc69 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1272bc73 jmp 0x1272bc84 */
  goto L_1272bc84;
L_1272bc75:;
  /* 1272bc75 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bc7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272bc7e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1272bc84:;
  /* 1272bc84 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272bc8e jae 0x1272bd2e */
  if (!C.cf) goto L_1272bd2e;
  /* 1272bc94 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272bc9b jb 0x1272bcd8 */
  if (C.cf) goto L_1272bcd8;
  /* 1272bc9d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272bca4 ja 0x1272bcd8 */
  if ((!C.cf&&!C.zf)) goto L_1272bcd8;
  /* 1272bca6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bcac mov dl, byte ptr [ecx + 0x12752f01] */
  DL = (r8((uint32_t)(ECX + 0x12752f01)));
  /* 1272bcb2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1272bcb5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bcbb mov byte ptr [eax + 0x12752f01], dl */
  w8((uint32_t)(EAX + 0x12752f01), (DL));
  /* 1272bcc1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bcc7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272bcca mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bcd0 mov byte ptr [edx + 0x12752e00], cl */
  w8((uint32_t)(EDX + 0x12752e00), (CL));
  /* 1272bcd6 jmp 0x1272bd29 */
  goto L_1272bd29;
L_1272bcd8:;
  /* 1272bcd8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272bcdf jb 0x1272bd1c */
  if (C.cf) goto L_1272bd1c;
  /* 1272bce1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272bce8 ja 0x1272bd1c */
  if ((!C.cf&&!C.zf)) goto L_1272bd1c;
  /* 1272bcea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bcf0 mov cl, byte ptr [eax + 0x12752f01] */
  CL = (r8((uint32_t)(EAX + 0x12752f01)));
  /* 1272bcf6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1272bcf9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bcff mov byte ptr [edx + 0x12752f01], cl */
  w8((uint32_t)(EDX + 0x12752f01), (CL));
  /* 1272bd05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bd0b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272bd0e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bd14 mov byte ptr [ecx + 0x12752e00], al */
  w8((uint32_t)(ECX + 0x12752e00), (AL));
  /* 1272bd1a jmp 0x1272bd29 */
  goto L_1272bd29;
L_1272bd1c:;
  /* 1272bd1c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1272bd22 mov byte ptr [edx + 0x12752e00], 0 */
  w8((uint32_t)(EDX + 0x12752e00), (0x0u));
L_1272bd29:;
  /* 1272bd29 jmp 0x1272bc75 */
  goto L_1272bc75;
L_1272bd2e:;
  /* 1272bd2e mov esp, ebp */
  ESP = (EBP);
  /* 1272bd30 pop ebp */
  EBP = (pop32());
  /* 1272bd31 ret  */
  ESPCHK(0x1272ba30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd40 @ 0x1272bd40 (23 bytes, 9 insns) */
void f_1272bd40(void) {
  FTRACE(0x1272bd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272bd40 push ebp */
  push32((uint32_t)(EBP));
  /* 1272bd41 mov ebp, esp */
  EBP = (ESP);
  /* 1272bd43 cmp dword ptr [0x12752dec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12752dec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272bd4a je 0x1272bd53 */
  if (C.zf) goto L_1272bd53;
  /* 1272bd4c mov eax, dword ptr [0x12752d64] */
  EAX = (r32((uint32_t)(0x12752d64)));
  /* 1272bd51 jmp 0x1272bd55 */
  goto L_1272bd55;
L_1272bd53:;
  /* 1272bd53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1272bd55:;
  /* 1272bd55 pop ebp */
  EBP = (pop32());
  /* 1272bd56 ret  */
  ESPCHK(0x1272bd40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd60 @ 0x1272bd60 (34 bytes, 10 insns) */
void f_1272bd60(void) {
  FTRACE(0x1272bd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272bd60 push ebp */
  push32((uint32_t)(EBP));
  /* 1272bd61 mov ebp, esp */
  EBP = (ESP);
  /* 1272bd63 cmp dword ptr [0x127531b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127531b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272bd6a jne 0x1272bd80 */
  if (!C.zf) goto L_1272bd80;
  /* 1272bd6c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1272bd6e call 0x1272b580 */
  push32(0x1272bd73u); f_1272b580();
  /* 1272bd73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272bd76 mov dword ptr [0x127531b0], 1 */
  w32((uint32_t)(0x127531b0), (0x1u));
L_1272bd80:;
  /* 1272bd80 pop ebp */
  EBP = (pop32());
  /* 1272bd81 ret  */
  ESPCHK(0x1272bd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd90 @ 0x1272bd90 (664 bytes, 263 insns) [15 switch table(s)] */
void f_1272bd90(void) {
  FTRACE(0x1272bd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272bd90 push ebp */
  push32((uint32_t)(EBP));
  /* 1272bd91 mov ebp, esp */
  EBP = (ESP);
  /* 1272bd93 push edi */
  push32((uint32_t)(EDI));
  /* 1272bd94 push esi */
  push32((uint32_t)(ESI));
  /* 1272bd95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1272bd98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272bd9b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1272bd9e mov eax, ecx */
  EAX = (ECX);
  /* 1272bda0 mov edx, ecx */
  EDX = (ECX);
  /* 1272bda2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272bda4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272bda6 jbe 0x1272bdb0 */
  if ((C.cf||C.zf)) goto L_1272bdb0;
  /* 1272bda8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272bdaa jb 0x1272bf28 */
  if (C.cf) goto L_1272bf28;
L_1272bdb0:;
  /* 1272bdb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1272bdb6 jne 0x1272bdcc */
  if (!C.zf) goto L_1272bdcc;
  /* 1272bdb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1272bdbb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1272bdbe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272bdc1 jb 0x1272bdec */
  if (C.cf) goto L_1272bdec;
  /* 1272bdc3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1272bdc5 jmp dword ptr [edx*4 + 0x1272bed8] */
  switch (EDX) {
    case 0: goto L_1272bee8;
    case 1: goto L_1272bef0;
    case 2: goto L_1272befc;
    case 3: goto L_1272bf10;
    default: x86_unimpl("switch@0x1272bdc5 out of table"); return;
  }
L_1272bdcc:;
  /* 1272bdcc mov eax, edi */
  EAX = (EDI);
  /* 1272bdce mov edx, 3 */
  EDX = (0x3u);
  /* 1272bdd3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272bdd6 jb 0x1272bde4 */
  if (C.cf) goto L_1272bde4;
  /* 1272bdd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1272bddb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272bddd jmp dword ptr [eax*4 + 0x1272bdf0] */
  switch (EAX) {
    case 1: goto L_1272be00;
    case 2: goto L_1272be2c;
    case 3: goto L_1272be50;
    default: x86_unimpl("switch@0x1272bddd out of table"); return;
  }
L_1272bde4:;
  /* 1272bde4 jmp dword ptr [ecx*4 + 0x1272bee8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1272bee8)))); return;
  /* 1272bdeb nop  */
  /* nop */
L_1272bdec:;
  /* 1272bdec jmp dword ptr [ecx*4 + 0x1272be6c] */
  switch (ECX) {
    case 0: goto L_1272becf;
    case 1: goto L_1272bebc;
    case 2: goto L_1272beb4;
    case 3: goto L_1272beac;
    case 4: goto L_1272bea4;
    case 5: goto L_1272be9c;
    case 6: goto L_1272be94;
    case 7: goto L_1272be8c;
    default: x86_unimpl("switch@0x1272bdec out of table"); return;
  }
  /* 1272bdf3 nop  */
  /* nop */
L_1272be00:;
  /* 1272be00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1272be02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1272be04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1272be06 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1272be09 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1272be0c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1272be0f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1272be12 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1272be15 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1272be18 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1272be1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272be1e jb 0x1272bdec */
  if (C.cf) goto L_1272bdec;
  /* 1272be20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1272be22 jmp dword ptr [edx*4 + 0x1272bed8] */
  switch (EDX) {
    case 0: goto L_1272bee8;
    case 1: goto L_1272bef0;
    case 2: goto L_1272befc;
    case 3: goto L_1272bf10;
    default: x86_unimpl("switch@0x1272be22 out of table"); return;
  }
  /* 1272be29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1272be2c:;
  /* 1272be2c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1272be2e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1272be30 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1272be32 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1272be35 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1272be38 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1272be3b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1272be3e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1272be41 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272be44 jb 0x1272bdec */
  if (C.cf) goto L_1272bdec;
  /* 1272be46 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1272be48 jmp dword ptr [edx*4 + 0x1272bed8] */
  switch (EDX) {
    case 0: goto L_1272bee8;
    case 1: goto L_1272bef0;
    case 2: goto L_1272befc;
    case 3: goto L_1272bf10;
    default: x86_unimpl("switch@0x1272be48 out of table"); return;
  }
  /* 1272be4f nop  */
  /* nop */
L_1272be50:;
  /* 1272be50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1272be52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1272be54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1272be56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1272be57 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1272be5a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1272be5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272be5e jb 0x1272bdec */
  if (C.cf) goto L_1272bdec;
  /* 1272be60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1272be62 jmp dword ptr [edx*4 + 0x1272bed8] */
  switch (EDX) {
    case 0: goto L_1272bee8;
    case 1: goto L_1272bef0;
    case 2: goto L_1272befc;
    case 3: goto L_1272bf10;
    default: x86_unimpl("switch@0x1272be62 out of table"); return;
  }
  /* 1272be69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1272be8c:;
  /* 1272be8c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1272be90 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1272be94:;
  /* 1272be94 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1272be98 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1272be9c:;
  /* 1272be9c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1272bea0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1272bea4:;
  /* 1272bea4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1272bea8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1272beac:;
  /* 1272beac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1272beb0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1272beb4:;
  /* 1272beb4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1272beb8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1272bebc:;
  /* 1272bebc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1272bec0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1272bec4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1272becb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1272becd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1272becf:;
  /* 1272becf jmp dword ptr [edx*4 + 0x1272bed8] */
  switch (EDX) {
    case 0: goto L_1272bee8;
    case 1: goto L_1272bef0;
    case 2: goto L_1272befc;
    case 3: goto L_1272bf10;
    default: x86_unimpl("switch@0x1272becf out of table"); return;
  }
  /* 1272bed6 mov edi, edi */
  EDI = (EDI);
L_1272bee8:;
  /* 1272bee8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272beeb pop esi */
  ESI = (pop32());
  /* 1272beec pop edi */
  EDI = (pop32());
  /* 1272beed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1272beee ret  */
  ESPCHK(0x1272bd90u, _esp0);
  ESP += 4; return;
  /* 1272beef nop  */
  /* nop */
L_1272bef0:;
  /* 1272bef0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1272bef2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1272bef4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272bef7 pop esi */
  ESI = (pop32());
  /* 1272bef8 pop edi */
  EDI = (pop32());
  /* 1272bef9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1272befa ret  */
  ESPCHK(0x1272bd90u, _esp0);
  ESP += 4; return;
  /* 1272befb nop  */
  /* nop */
L_1272befc:;
  /* 1272befc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1272befe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1272bf00 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1272bf03 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1272bf06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272bf09 pop esi */
  ESI = (pop32());
  /* 1272bf0a pop edi */
  EDI = (pop32());
  /* 1272bf0b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1272bf0c ret  */
  ESPCHK(0x1272bd90u, _esp0);
  ESP += 4; return;
  /* 1272bf0d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1272bf10:;
  /* 1272bf10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1272bf12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1272bf14 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1272bf17 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1272bf1a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1272bf1d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1272bf20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272bf23 pop esi */
  ESI = (pop32());
  /* 1272bf24 pop edi */
  EDI = (pop32());
  /* 1272bf25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1272bf26 ret  */
  ESPCHK(0x1272bd90u, _esp0);
  ESP += 4; return;
  /* 1272bf27 nop  */
  /* nop */
L_1272bf28:;
  /* 1272bf28 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1272bf2c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1272bf30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1272bf36 jne 0x1272bf5c */
  if (!C.zf) goto L_1272bf5c;
  /* 1272bf38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1272bf3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1272bf3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272bf41 jb 0x1272bf50 */
  if (C.cf) goto L_1272bf50;
  /* 1272bf43 std  */
  C.df=1;
  /* 1272bf44 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1272bf46 cld  */
  C.df=0;
  /* 1272bf47 jmp dword ptr [edx*4 + 0x1272c070] */
  switch (EDX) {
    case 0: goto L_1272c080;
    case 1: goto L_1272c088;
    case 2: goto L_1272c098;
    case 3: goto L_1272c0ac;
    default: x86_unimpl("switch@0x1272bf47 out of table"); return;
  }
  /* 1272bf4e mov edi, edi */
  EDI = (EDI);
L_1272bf50:;
  /* 1272bf50 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1272bf52 jmp dword ptr [ecx*4 + 0x1272c020] */
  switch (ECX) {
    case 0: goto L_1272c067;
    default: x86_unimpl("switch@0x1272bf52 out of table"); return;
  }
  /* 1272bf59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1272bf5c:;
  /* 1272bf5c mov eax, edi */
  EAX = (EDI);
  /* 1272bf5e mov edx, 3 */
  EDX = (0x3u);
  /* 1272bf63 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272bf66 jb 0x1272bf74 */
  if (C.cf) goto L_1272bf74;
  /* 1272bf68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1272bf6b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272bf6d jmp dword ptr [eax*4 + 0x1272bf78] */
  switch (EAX) {
    case 1: goto L_1272bf88;
    case 2: goto L_1272bfa8;
    case 3: goto L_1272bfd0;
    default: x86_unimpl("switch@0x1272bf6d out of table"); return;
  }
L_1272bf74:;
  /* 1272bf74 jmp dword ptr [ecx*4 + 0x1272c070] */
  switch (ECX) {
    case 0: goto L_1272c080;
    case 1: goto L_1272c088;
    case 2: goto L_1272c098;
    case 3: goto L_1272c0ac;
    default: x86_unimpl("switch@0x1272bf74 out of table"); return;
  }
  /* 1272bf7b nop  */
  /* nop */
L_1272bf88:;
  /* 1272bf88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1272bf8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1272bf8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1272bf90 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1272bf91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1272bf94 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1272bf95 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272bf98 jb 0x1272bf50 */
  if (C.cf) goto L_1272bf50;
  /* 1272bf9a std  */
  C.df=1;
  /* 1272bf9b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1272bf9d cld  */
  C.df=0;
  /* 1272bf9e jmp dword ptr [edx*4 + 0x1272c070] */
  switch (EDX) {
    case 0: goto L_1272c080;
    case 1: goto L_1272c088;
    case 2: goto L_1272c098;
    case 3: goto L_1272c0ac;
    default: x86_unimpl("switch@0x1272bf9e out of table"); return;
  }
  /* 1272bfa5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1272bfa8:;
  /* 1272bfa8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1272bfab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1272bfad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1272bfb0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1272bfb3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1272bfb6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1272bfb9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272bfbc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272bfbf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272bfc2 jb 0x1272bf50 */
  if (C.cf) goto L_1272bf50;
  /* 1272bfc4 std  */
  C.df=1;
  /* 1272bfc5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1272bfc7 cld  */
  C.df=0;
  /* 1272bfc8 jmp dword ptr [edx*4 + 0x1272c070] */
  switch (EDX) {
    case 0: goto L_1272c080;
    case 1: goto L_1272c088;
    case 2: goto L_1272c098;
    case 3: goto L_1272c0ac;
    default: x86_unimpl("switch@0x1272bfc8 out of table"); return;
  }
  /* 1272bfcf nop  */
  /* nop */
L_1272bfd0:;
  /* 1272bfd0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1272bfd3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1272bfd5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1272bfd8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1272bfdb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1272bfde mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1272bfe1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1272bfe4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1272bfe7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272bfea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272bfed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272bff0 jb 0x1272bf50 */
  if (C.cf) goto L_1272bf50;
  /* 1272bff6 std  */
  C.df=1;
  /* 1272bff7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1272bff9 cld  */
  C.df=0;
  /* 1272bffa jmp dword ptr [edx*4 + 0x1272c070] */
  switch (EDX) {
    case 0: goto L_1272c080;
    case 1: goto L_1272c088;
    case 2: goto L_1272c098;
    case 3: goto L_1272c0ac;
    default: x86_unimpl("switch@0x1272bffa out of table"); return;
  }
  /* 1272c001 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1272c004 and al, 0xc0 */
  { uint32_t _r=(AL)&(0xc0u); AL = (_r); fl_logic(_r,8); }
  /* 1272c006 jb 0x1272c01a */
  if (C.cf) goto L_1272c01a;
  /* 1272c008 sub al, 0xc0 */
  { uint32_t _a=(AL),_b=(0xc0u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1272c00a jb 0x1272c01e */
  if (C.cf) goto L_1272c01e;
  /* 1272c00c xor al, 0xc0 */
  { uint32_t _r=(AL)^(0xc0u); AL = (_r); fl_logic(_r,8); }
  /* 1272c00e jb 0x1272c022 */
  if (C.cf) goto L_1272c022;
  /* 1272c010 cmp al, 0xc0 */
  { uint32_t _a=(AL),_b=(0xc0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1272c012 jb 0x1272c026 */
  if (C.cf) goto L_1272c026;
  /* 1272c014 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1272c015 sal byte ptr [edx + 0x12], 0x4c */
  w8((uint32_t)(EDX + 0x12), (sh_shl((uint32_t)(r8((uint32_t)(EDX + 0x12))), (0x4cu)&0x1f, 8)));
  /* 1272c019 sal byte ptr [edx + 0x12], 0x54 */
  w8((uint32_t)(EDX + 0x12), (sh_shl((uint32_t)(r8((uint32_t)(EDX + 0x12))), (0x54u)&0x1f, 8)));
L_1272c01e:;
  /* 1272c01e jb 0x1272c032 */
  if (C.cf) goto L_1272c032;
  /* 1272c024 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1272c028 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1272c02c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1272c030 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1272c034 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1272c038 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1272c03c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1272c040 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1272c044 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1272c048 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1272c04c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1272c050 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1272c054 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1272c058 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1272c05c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1272c063 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c065 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1272c067:;
  /* 1272c067 jmp dword ptr [edx*4 + 0x1272c070] */
  switch (EDX) {
    case 0: goto L_1272c080;
    case 1: goto L_1272c088;
    case 2: goto L_1272c098;
    case 3: goto L_1272c0ac;
    default: x86_unimpl("switch@0x1272c067 out of table"); return;
  }
  /* 1272c06e mov edi, edi */
  EDI = (EDI);
L_1272c080:;
  /* 1272c080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272c083 pop esi */
  ESI = (pop32());
  /* 1272c084 pop edi */
  EDI = (pop32());
  /* 1272c085 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1272c086 ret  */
  ESPCHK(0x1272bd90u, _esp0);
  ESP += 4; return;
  /* 1272c087 nop  */
  /* nop */
L_1272c088:;
  /* 1272c088 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1272c08b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1272c08e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272c091 pop esi */
  ESI = (pop32());
  /* 1272c092 pop edi */
  EDI = (pop32());
  /* 1272c093 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1272c094 ret  */
  ESPCHK(0x1272bd90u, _esp0);
  ESP += 4; return;
  /* 1272c095 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1272c098:;
  /* 1272c098 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1272c09b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1272c09e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1272c0a1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1272c0a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272c0a7 pop esi */
  ESI = (pop32());
  /* 1272c0a8 pop edi */
  EDI = (pop32());
  /* 1272c0a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1272c0aa ret  */
  ESPCHK(0x1272bd90u, _esp0);
  ESP += 4; return;
  /* 1272c0ab nop  */
  /* nop */
L_1272c0ac:;
  /* 1272c0ac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1272c0af mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1272c0b2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1272c0b5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1272c0b8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1272c0bb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1272c0be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272c0c1 pop esi */
  ESI = (pop32());
  /* 1272c0c2 pop edi */
  EDI = (pop32());
  /* 1272c0c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1272c0c4 ret  */
  ESPCHK(0x1272bd90u, _esp0);
  ESP += 4; return;
L_1272c01a: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1272c01a (unresolved jump table)"); return;
L_1272c022: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1272c022 (unresolved jump table)"); return;
L_1272c026: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1272c026 (unresolved jump table)"); return;
L_1272c032: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1272c032 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x1272c0d0 (104 bytes, 43 insns) */
void f_1272c0d0(void) {
  FTRACE(0x1272c0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272c0d0 push ebx */
  push32((uint32_t)(EBX));
  /* 1272c0d1 push esi */
  push32((uint32_t)(ESI));
  /* 1272c0d2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1272c0d6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272c0d8 jne 0x1272c0f2 */
  if (!C.zf) goto L_1272c0f2;
  /* 1272c0da mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1272c0de mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1272c0e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272c0e4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1272c0e6 mov ebx, eax */
  EBX = (EAX);
  /* 1272c0e8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1272c0ec div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1272c0ee mov edx, ebx */
  EDX = (EBX);
  /* 1272c0f0 jmp 0x1272c133 */
  goto L_1272c133;
L_1272c0f2:;
  /* 1272c0f2 mov ecx, eax */
  ECX = (EAX);
  /* 1272c0f4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1272c0f8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1272c0fc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1272c100:;
  /* 1272c100 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1272c102 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1272c104 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1272c106 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1272c108 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272c10a jne 0x1272c100 */
  if (!C.zf) goto L_1272c100;
  /* 1272c10c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1272c10e mov esi, eax */
  ESI = (EAX);
  /* 1272c110 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1272c114 mov ecx, eax */
  ECX = (EAX);
  /* 1272c116 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1272c11a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1272c11c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c11e jb 0x1272c12e */
  if (C.cf) goto L_1272c12e;
  /* 1272c120 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c124 ja 0x1272c12e */
  if ((!C.cf&&!C.zf)) goto L_1272c12e;
  /* 1272c126 jb 0x1272c12f */
  if (C.cf) goto L_1272c12f;
  /* 1272c128 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c12c jbe 0x1272c12f */
  if ((C.cf||C.zf)) goto L_1272c12f;
L_1272c12e:;
  /* 1272c12e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1272c12f:;
  /* 1272c12f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272c131 mov eax, esi */
  EAX = (ESI);
L_1272c133:;
  /* 1272c133 pop esi */
  ESI = (pop32());
  /* 1272c134 pop ebx */
  EBX = (pop32());
  /* 1272c135 ret 0x10 */
  ESPCHK(0x1272c0d0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1272c140 (117 bytes, 44 insns) */
void f_1272c140(void) {
  FTRACE(0x1272c140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272c140 push ebx */
  push32((uint32_t)(EBX));
  /* 1272c141 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1272c145 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272c147 jne 0x1272c161 */
  if (!C.zf) goto L_1272c161;
  /* 1272c149 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1272c14d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1272c151 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272c153 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1272c155 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1272c159 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1272c15b mov eax, edx */
  EAX = (EDX);
  /* 1272c15d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272c15f jmp 0x1272c1b1 */
  goto L_1272c1b1;
L_1272c161:;
  /* 1272c161 mov ecx, eax */
  ECX = (EAX);
  /* 1272c163 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1272c167 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1272c16b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1272c16f:;
  /* 1272c16f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1272c171 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1272c173 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1272c175 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1272c177 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272c179 jne 0x1272c16f */
  if (!C.zf) goto L_1272c16f;
  /* 1272c17b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1272c17d mov ecx, eax */
  ECX = (EAX);
  /* 1272c17f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1272c183 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1272c184 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1272c188 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c18a jb 0x1272c19a */
  if (C.cf) goto L_1272c19a;
  /* 1272c18c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c190 ja 0x1272c19a */
  if ((!C.cf&&!C.zf)) goto L_1272c19a;
  /* 1272c192 jb 0x1272c1a2 */
  if (C.cf) goto L_1272c1a2;
  /* 1272c194 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c198 jbe 0x1272c1a2 */
  if ((C.cf||C.zf)) goto L_1272c1a2;
L_1272c19a:;
  /* 1272c19a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272c19e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1272c1a2:;
  /* 1272c1a2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272c1a6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272c1aa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1272c1ac neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1272c1ae sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1272c1b1:;
  /* 1272c1b1 pop ebx */
  EBX = (pop32());
  /* 1272c1b2 ret 0x10 */
  ESPCHK(0x1272c140u, _esp0);
  ESP += 20; return;
}

/* FUN_1000c1c0 @ 0x1272c1c0 (628 bytes, 214 insns) */
void f_1272c1c0(void) {
  FTRACE(0x1272c1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272c1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272c1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1272c1c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272c1c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1272c1c7 push esi */
  push32((uint32_t)(ESI));
  /* 1272c1c8 push edi */
  push32((uint32_t)(EDI));
L_1272c1c9:;
  /* 1272c1c9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c1cd jne 0x1272c1ed */
  if (!C.zf) goto L_1272c1ed;
  /* 1272c1cf push 0x1274d2d0 */
  push32((uint32_t)(0x1274d2d0u));
  /* 1272c1d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272c1d6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1272c1d8 push 0x1274d2c4 */
  push32((uint32_t)(0x1274d2c4u));
  /* 1272c1dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1272c1df call 0x12724570 */
  push32(0x1272c1e4u); f_12724570();
  /* 1272c1e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c1e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c1ea jne 0x1272c1ed */
  if (!C.zf) goto L_1272c1ed;
  /* 1272c1ec int3  */
  x86_unimpl("int3 @ 0x1272c1ec");
L_1272c1ed:;
  /* 1272c1ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272c1ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272c1f1 jne 0x1272c1c9 */
  if (!C.zf) goto L_1272c1c9;
  /* 1272c1f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272c1f6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1272c1f9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c1fc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1272c1ff mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1272c202 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c205 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1272c208 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1272c20e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272c210 je 0x1272c21f */
  if (C.zf) goto L_1272c21f;
  /* 1272c212 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c215 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1272c218 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1272c21b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272c21d je 0x1272c235 */
  if (C.zf) goto L_1272c235;
L_1272c21f:;
  /* 1272c21f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c222 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1272c225 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1272c227 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c22a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1272c22d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272c230 jmp 0x1272c42d */
  goto L_1272c42d;
L_1272c235:;
  /* 1272c235 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c238 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1272c23b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1272c23e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272c240 je 0x1272c28c */
  if (C.zf) goto L_1272c28c;
  /* 1272c242 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c245 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1272c24c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c24f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1272c252 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1272c255 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272c257 je 0x1272c275 */
  if (C.zf) goto L_1272c275;
  /* 1272c259 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c25c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c25f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1272c262 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1272c264 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c267 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1272c26a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1272c26d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c270 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1272c273 jmp 0x1272c28c */
  goto L_1272c28c;
L_1272c275:;
  /* 1272c275 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c278 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1272c27b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1272c27e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c281 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1272c284 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272c287 jmp 0x1272c42d */
  goto L_1272c42d;
L_1272c28c:;
  /* 1272c28c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c28f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1272c292 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1272c295 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c298 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1272c29b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c29e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1272c2a1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1272c2a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c2a7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1272c2aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c2ad mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1272c2b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1272c2bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c2be mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1272c2c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c2c4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1272c2c7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1272c2cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272c2cf jne 0x1272c2ff */
  if (!C.zf) goto L_1272c2ff;
  /* 1272c2d1 cmp dword ptr [ebp - 8], 0x12750140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12750140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c2d8 je 0x1272c2e3 */
  if (C.zf) goto L_1272c2e3;
  /* 1272c2da cmp dword ptr [ebp - 8], 0x12750160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12750160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c2e1 jne 0x1272c2f3 */
  if (!C.zf) goto L_1272c2f3;
L_1272c2e3:;
  /* 1272c2e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272c2e6 push edx */
  push32((uint32_t)(EDX));
  /* 1272c2e7 call 0x1272e130 */
  push32(0x1272c2ecu); f_1272e130();
  /* 1272c2ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c2ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272c2f1 jne 0x1272c2ff */
  if (!C.zf) goto L_1272c2ff;
L_1272c2f3:;
  /* 1272c2f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c2f6 push eax */
  push32((uint32_t)(EAX));
  /* 1272c2f7 call 0x1272e060 */
  push32(0x1272c2fcu); f_1272e060();
  /* 1272c2fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272c2ff:;
  /* 1272c2ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c302 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1272c305 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1272c30b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272c30d je 0x1272c3eb */
  if (C.zf) goto L_1272c3eb;
L_1272c313:;
  /* 1272c313 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c316 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c319 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1272c31b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272c31e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272c320 jge 0x1272c343 */
  if ((C.sf==C.of)) goto L_1272c343;
  /* 1272c322 push 0x1274d284 */
  push32((uint32_t)(0x1274d284u));
  /* 1272c327 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272c329 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1272c32e push 0x1274d2c4 */
  push32((uint32_t)(0x1274d2c4u));
  /* 1272c333 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272c335 call 0x12724570 */
  push32(0x1272c33au); f_12724570();
  /* 1272c33a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c33d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c340 jne 0x1272c343 */
  if (!C.zf) goto L_1272c343;
  /* 1272c342 int3  */
  x86_unimpl("int3 @ 0x1272c342");
L_1272c343:;
  /* 1272c343 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272c345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272c347 jne 0x1272c313 */
  if (!C.zf) goto L_1272c313;
  /* 1272c349 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c34c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c34f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1272c351 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272c354 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272c357 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c35a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1272c35d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c360 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c363 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1272c365 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c368 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1272c36b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272c36e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c371 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1272c374 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c378 jle 0x1272c396 */
  if ((C.zf||C.sf!=C.of)) goto L_1272c396;
  /* 1272c37a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c37d push ecx */
  push32((uint32_t)(ECX));
  /* 1272c37e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c381 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1272c384 push eax */
  push32((uint32_t)(EAX));
  /* 1272c385 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272c388 push ecx */
  push32((uint32_t)(ECX));
  /* 1272c389 call 0x1272dd50 */
  push32(0x1272c38eu); f_1272dd50();
  /* 1272c38e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c391 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1272c394 jmp 0x1272c3de */
  goto L_1272c3de;
L_1272c396:;
  /* 1272c396 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c39a je 0x1272c3b9 */
  if (C.zf) goto L_1272c3b9;
  /* 1272c39c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272c39f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1272c3a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272c3a5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1272c3a8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272c3ab mov ecx, dword ptr [edx*4 + 0x12753060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12753060)));
  /* 1272c3b2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c3b4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1272c3b7 jmp 0x1272c3c0 */
  goto L_1272c3c0;
L_1272c3b9:;
  /* 1272c3b9 mov dword ptr [ebp - 0x14], 0x1274fa60 */
  w32((uint32_t)(EBP + -0x14), (0x1274fa60u));
L_1272c3c0:;
  /* 1272c3c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272c3c3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1272c3c7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1272c3ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272c3cc je 0x1272c3de */
  if (C.zf) goto L_1272c3de;
  /* 1272c3ce push 2 */
  push32((uint32_t)(0x2u));
  /* 1272c3d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272c3d2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272c3d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1272c3d6 call 0x1272dc00 */
  push32(0x1272c3dbu); f_1272dc00();
  /* 1272c3db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272c3de:;
  /* 1272c3de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c3e1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1272c3e4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1272c3e7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1272c3e9 jmp 0x1272c409 */
  goto L_1272c409;
L_1272c3eb:;
  /* 1272c3eb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1272c3f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c3f5 push edx */
  push32((uint32_t)(EDX));
  /* 1272c3f6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1272c3f9 push eax */
  push32((uint32_t)(EAX));
  /* 1272c3fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272c3fd push ecx */
  push32((uint32_t)(ECX));
  /* 1272c3fe call 0x1272dd50 */
  push32(0x1272c403u); f_1272dd50();
  /* 1272c403 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c406 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1272c409:;
  /* 1272c409 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272c40c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c40f je 0x1272c425 */
  if (C.zf) goto L_1272c425;
  /* 1272c411 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c414 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1272c417 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1272c41a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c41d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1272c420 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272c423 jmp 0x1272c42d */
  goto L_1272c42d;
L_1272c425:;
  /* 1272c425 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272c428 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1272c42d:;
  /* 1272c42d pop edi */
  EDI = (pop32());
  /* 1272c42e pop esi */
  ESI = (pop32());
  /* 1272c42f pop ebx */
  EBX = (pop32());
  /* 1272c430 mov esp, ebp */
  ESP = (EBP);
  /* 1272c432 pop ebp */
  EBP = (pop32());
  /* 1272c433 ret  */
  ESPCHK(0x1272c1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c440 @ 0x1272c440 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1272c440(void) {
  FTRACE(0x1272c440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272c440 push ebp */
  push32((uint32_t)(EBP));
  /* 1272c441 mov ebp, esp */
  EBP = (ESP);
  /* 1272c443 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272c449 push ebx */
  push32((uint32_t)(EBX));
  /* 1272c44a push esi */
  push32((uint32_t)(ESI));
  /* 1272c44b push edi */
  push32((uint32_t)(EDI));
  /* 1272c44c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1272c453 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1272c45d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1272c464:;
  /* 1272c464 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272c467 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1272c469 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1272c46c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1272c470 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272c473 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c476 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1272c479 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272c47b je 0x1272d057 */
  if (C.zf) goto L_1272d057;
  /* 1272c481 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c488 jl 0x1272d057 */
  if ((C.sf!=C.of)) goto L_1272d057;
  /* 1272c48e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1272c492 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c495 jl 0x1272c4b6 */
  if ((C.sf!=C.of)) goto L_1272c4b6;
  /* 1272c497 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1272c49b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c49e jg 0x1272c4b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1272c4b6;
  /* 1272c4a0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1272c4a4 movsx ecx, byte ptr [eax + 0x1274d2bc] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1274d2bc))));
  /* 1272c4ab and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1272c4ae mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1272c4b4 jmp 0x1272c4c0 */
  goto L_1272c4c0;
L_1272c4b6:;
  /* 1272c4b6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1272c4c0:;
  /* 1272c4c0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1272c4c6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1272c4c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272c4cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272c4cf movsx edx, byte ptr [ecx + eax*8 + 0x1274d2dc] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1274d2dc))));
  /* 1272c4d7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1272c4da mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1272c4dd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272c4e0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1272c4e6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c4ed ja 0x1272d052 */
  if ((!C.cf&&!C.zf)) goto L_1272d052;
  /* 1272c4f3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1272c4f9 jmp dword ptr [ecx*4 + 0x1272d064] */
  switch (ECX) {
    case 0: goto L_1272c500;
    case 1: goto L_1272c59a;
    case 2: goto L_1272c5dc;
    case 3: goto L_1272c64b;
    case 4: goto L_1272c6a3;
    case 5: goto L_1272c6b2;
    case 6: goto L_1272c6fe;
    case 7: goto L_1272c791;
    case 8: goto L_1272c628;
    case 9: goto L_1272c633;
    case 10: goto L_1272c61e;
    case 11: goto L_1272c613;
    case 12: goto L_1272c63e;
    case 13: goto L_1272c646;
    default: x86_unimpl("switch@0x1272c4f9 out of table"); return;
  }
L_1272c500:;
  /* 1272c500 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1272c507 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272c50a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1272c510 mov eax, dword ptr [0x1274fc98] */
  EAX = (r32((uint32_t)(0x1274fc98)));
  /* 1272c515 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272c517 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1272c51b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1272c521 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272c523 je 0x1272c57d */
  if (C.zf) goto L_1272c57d;
  /* 1272c525 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1272c52b push edx */
  push32((uint32_t)(EDX));
  /* 1272c52c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272c52f push eax */
  push32((uint32_t)(EAX));
  /* 1272c530 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1272c534 push ecx */
  push32((uint32_t)(ECX));
  /* 1272c535 call 0x1272d170 */
  push32(0x1272c53au); f_1272d170();
  /* 1272c53a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c53d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272c540 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1272c542 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1272c545 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272c548 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c54b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1272c54e:;
  /* 1272c54e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1272c552 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272c554 jne 0x1272c577 */
  if (!C.zf) goto L_1272c577;
  /* 1272c556 push 0x1274d35c */
  push32((uint32_t)(0x1274d35cu));
  /* 1272c55b push 0 */
  push32((uint32_t)(0x0u));
  /* 1272c55d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1272c562 push 0x1274d350 */
  push32((uint32_t)(0x1274d350u));
  /* 1272c567 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272c569 call 0x12724570 */
  push32(0x1272c56eu); f_12724570();
  /* 1272c56e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c571 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c574 jne 0x1272c577 */
  if (!C.zf) goto L_1272c577;
  /* 1272c576 int3  */
  x86_unimpl("int3 @ 0x1272c576");
L_1272c577:;
  /* 1272c577 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272c579 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272c57b jne 0x1272c54e */
  if (!C.zf) goto L_1272c54e;
L_1272c57d:;
  /* 1272c57d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1272c583 push ecx */
  push32((uint32_t)(ECX));
  /* 1272c584 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272c587 push edx */
  push32((uint32_t)(EDX));
  /* 1272c588 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1272c58c push eax */
  push32((uint32_t)(EAX));
  /* 1272c58d call 0x1272d170 */
  push32(0x1272c592u); f_1272d170();
  /* 1272c592 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c595 jmp 0x1272d052 */
  goto L_1272d052;
L_1272c59a:;
  /* 1272c59a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1272c5a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272c5a4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1272c5aa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1272c5b0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1272c5b6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1272c5bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1272c5bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1272c5c6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1272c5d0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1272c5d7 jmp 0x1272d052 */
  goto L_1272d052;
L_1272c5dc:;
  /* 1272c5dc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1272c5e0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1272c5e6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1272c5ec sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272c5ef mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1272c5f5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c5fc ja 0x1272c646 */
  if ((!C.cf&&!C.zf)) goto L_1272c646;
  /* 1272c5fe mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1272c604 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272c606 mov al, byte ptr [ecx + 0x1272d09c] */
  AL = (r8((uint32_t)(ECX + 0x1272d09c)));
  /* 1272c60c jmp dword ptr [eax*4 + 0x1272d084] */
  switch (EAX) {
    case 0: goto L_1272c628;
    case 1: goto L_1272c633;
    case 2: goto L_1272c61e;
    case 3: goto L_1272c613;
    case 4: goto L_1272c63e;
    case 5: goto L_1272c646;
    default: x86_unimpl("switch@0x1272c60c out of table"); return;
  }
L_1272c613:;
  /* 1272c613 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c616 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1272c619 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272c61c jmp 0x1272c646 */
  goto L_1272c646;
L_1272c61e:;
  /* 1272c61e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c621 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1272c623 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272c626 jmp 0x1272c646 */
  goto L_1272c646;
L_1272c628:;
  /* 1272c628 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c62b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1272c62e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1272c631 jmp 0x1272c646 */
  goto L_1272c646;
L_1272c633:;
  /* 1272c633 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c636 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1272c639 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272c63c jmp 0x1272c646 */
  goto L_1272c646;
L_1272c63e:;
  /* 1272c63e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c641 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1272c643 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1272c646:;
  /* 1272c646 jmp 0x1272d052 */
  goto L_1272d052;
L_1272c64b:;
  /* 1272c64b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1272c64f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c652 jne 0x1272c687 */
  if (!C.zf) goto L_1272c687;
  /* 1272c654 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1272c657 push edx */
  push32((uint32_t)(EDX));
  /* 1272c658 call 0x1272d280 */
  push32(0x1272c65du); f_1272d280();
  /* 1272c65d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c660 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1272c666 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c66d jge 0x1272c685 */
  if ((C.sf==C.of)) goto L_1272c685;
  /* 1272c66f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c672 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1272c674 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272c677 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1272c67d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1272c67f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1272c685:;
  /* 1272c685 jmp 0x1272c69e */
  goto L_1272c69e;
L_1272c687:;
  /* 1272c687 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1272c68d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272c690 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1272c694 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1272c698 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1272c69e:;
  /* 1272c69e jmp 0x1272d052 */
  goto L_1272d052;
L_1272c6a3:;
  /* 1272c6a3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1272c6ad jmp 0x1272d052 */
  goto L_1272d052;
L_1272c6b2:;
  /* 1272c6b2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1272c6b6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c6b9 jne 0x1272c6e2 */
  if (!C.zf) goto L_1272c6e2;
  /* 1272c6bb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1272c6be push eax */
  push32((uint32_t)(EAX));
  /* 1272c6bf call 0x1272d280 */
  push32(0x1272c6c4u); f_1272d280();
  /* 1272c6c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c6c7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1272c6cd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c6d4 jge 0x1272c6e0 */
  if ((C.sf==C.of)) goto L_1272c6e0;
  /* 1272c6d6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1272c6e0:;
  /* 1272c6e0 jmp 0x1272c6f9 */
  goto L_1272c6f9;
L_1272c6e2:;
  /* 1272c6e2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1272c6e8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272c6eb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1272c6ef lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1272c6f3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1272c6f9:;
  /* 1272c6f9 jmp 0x1272d052 */
  goto L_1272d052;
L_1272c6fe:;
  /* 1272c6fe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1272c702 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1272c708 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1272c70e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272c711 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1272c717 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c71e ja 0x1272c78c */
  if ((!C.cf&&!C.zf)) goto L_1272c78c;
  /* 1272c720 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1272c726 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272c728 mov al, byte ptr [ecx + 0x1272d0c1] */
  AL = (r8((uint32_t)(ECX + 0x1272d0c1)));
  /* 1272c72e jmp dword ptr [eax*4 + 0x1272d0ad] */
  switch (EAX) {
    case 0: goto L_1272c740;
    case 1: goto L_1272c779;
    case 2: goto L_1272c735;
    case 3: goto L_1272c783;
    case 4: goto L_1272c78c;
    default: x86_unimpl("switch@0x1272c72e out of table"); return;
  }
L_1272c735:;
  /* 1272c735 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c738 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1272c73b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272c73e jmp 0x1272c78c */
  goto L_1272c78c;
L_1272c740:;
  /* 1272c740 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272c743 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1272c746 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c749 jne 0x1272c76b */
  if (!C.zf) goto L_1272c76b;
  /* 1272c74b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272c74e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1272c752 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c755 jne 0x1272c76b */
  if (!C.zf) goto L_1272c76b;
  /* 1272c757 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272c75a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c75d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1272c760 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c763 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1272c766 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272c769 jmp 0x1272c777 */
  goto L_1272c777;
L_1272c76b:;
  /* 1272c76b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1272c772 jmp 0x1272c500 */
  goto L_1272c500;
L_1272c777:;
  /* 1272c777 jmp 0x1272c78c */
  goto L_1272c78c;
L_1272c779:;
  /* 1272c779 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c77c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1272c77e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272c781 jmp 0x1272c78c */
  goto L_1272c78c;
L_1272c783:;
  /* 1272c783 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c786 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1272c789 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1272c78c:;
  /* 1272c78c jmp 0x1272d052 */
  goto L_1272d052;
L_1272c791:;
  /* 1272c791 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1272c795 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1272c79b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1272c7a1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272c7a4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1272c7aa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c7b1 ja 0x1272ce77 */
  if ((!C.cf&&!C.zf)) goto L_1272ce77;
  /* 1272c7b7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1272c7bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272c7bf mov cl, byte ptr [edx + 0x1272d12c] */
  CL = (r8((uint32_t)(EDX + 0x1272d12c)));
  /* 1272c7c5 jmp dword ptr [ecx*4 + 0x1272d0f0] */
  switch (ECX) {
    case 0: goto L_1272c7cc;
    case 1: goto L_1272ca60;
    case 2: goto L_1272c8f0;
    case 3: goto L_1272cb99;
    case 4: goto L_1272c85b;
    case 5: goto L_1272c7e1;
    case 6: goto L_1272cb6b;
    case 7: goto L_1272ca70;
    case 8: goto L_1272ca15;
    case 9: goto L_1272cbe5;
    case 10: goto L_1272cb8f;
    case 11: goto L_1272c906;
    case 12: goto L_1272cb83;
    case 13: goto L_1272cba5;
    case 14: goto L_1272ce77;
    default: x86_unimpl("switch@0x1272c7c5 out of table"); return;
  }
L_1272c7cc:;
  /* 1272c7cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c7cf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1272c7d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272c7d6 jne 0x1272c7e1 */
  if (!C.zf) goto L_1272c7e1;
  /* 1272c7d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c7db or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1272c7de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1272c7e1:;
  /* 1272c7e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c7e4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1272c7ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272c7ec je 0x1272c827 */
  if (C.zf) goto L_1272c827;
  /* 1272c7ee lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1272c7f1 push eax */
  push32((uint32_t)(EAX));
  /* 1272c7f2 call 0x1272d2c0 */
  push32(0x1272c7f7u); f_1272d2c0();
  /* 1272c7f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c7fa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1272c7fe mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1272c802 push ecx */
  push32((uint32_t)(ECX));
  /* 1272c803 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1272c809 push edx */
  push32((uint32_t)(EDX));
  /* 1272c80a call 0x1272e3a0 */
  push32(0x1272c80fu); f_1272e3a0();
  /* 1272c80f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c812 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1272c815 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c819 jge 0x1272c825 */
  if ((C.sf==C.of)) goto L_1272c825;
  /* 1272c81b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1272c825:;
  /* 1272c825 jmp 0x1272c84d */
  goto L_1272c84d;
L_1272c827:;
  /* 1272c827 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1272c82a push eax */
  push32((uint32_t)(EAX));
  /* 1272c82b call 0x1272d280 */
  push32(0x1272c830u); f_1272d280();
  /* 1272c830 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c833 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1272c83a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1272c840 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1272c846 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1272c84d:;
  /* 1272c84d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1272c853 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1272c856 jmp 0x1272ce77 */
  goto L_1272ce77;
L_1272c85b:;
  /* 1272c85b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1272c85e push eax */
  push32((uint32_t)(EAX));
  /* 1272c85f call 0x1272d280 */
  push32(0x1272c864u); f_1272d280();
  /* 1272c864 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c867 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1272c86d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c874 je 0x1272c882 */
  if (C.zf) goto L_1272c882;
  /* 1272c876 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1272c87c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c880 jne 0x1272c89c */
  if (!C.zf) goto L_1272c89c;
L_1272c882:;
  /* 1272c882 mov edx, dword ptr [0x1274ffb0] */
  EDX = (r32((uint32_t)(0x1274ffb0)));
  /* 1272c888 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1272c88b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272c88e push eax */
  push32((uint32_t)(EAX));
  /* 1272c88f call 0x127282e0 */
  push32(0x1272c894u); f_127282e0();
  /* 1272c894 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c897 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1272c89a jmp 0x1272c8eb */
  goto L_1272c8eb;
L_1272c89c:;
  /* 1272c89c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c89f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1272c8a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272c8a7 je 0x1272c8cc */
  if (C.zf) goto L_1272c8cc;
  /* 1272c8a9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1272c8af mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1272c8b2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1272c8b5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1272c8bb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1272c8be shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1272c8c0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1272c8c3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1272c8ca jmp 0x1272c8eb */
  goto L_1272c8eb;
L_1272c8cc:;
  /* 1272c8cc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1272c8d3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1272c8d9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1272c8dc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1272c8df mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1272c8e5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1272c8e8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1272c8eb:;
  /* 1272c8eb jmp 0x1272ce77 */
  goto L_1272ce77;
L_1272c8f0:;
  /* 1272c8f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c8f3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1272c8f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272c8fb jne 0x1272c906 */
  if (!C.zf) goto L_1272c906;
  /* 1272c8fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c900 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1272c903 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1272c906:;
  /* 1272c906 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c90d jne 0x1272c91b */
  if (!C.zf) goto L_1272c91b;
  /* 1272c90f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1272c919 jmp 0x1272c927 */
  goto L_1272c927;
L_1272c91b:;
  /* 1272c91b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1272c921 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1272c927:;
  /* 1272c927 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1272c92d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1272c933 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1272c936 push edx */
  push32((uint32_t)(EDX));
  /* 1272c937 call 0x1272d280 */
  push32(0x1272c93cu); f_1272d280();
  /* 1272c93c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c93f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1272c942 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272c945 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1272c94a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272c94c je 0x1272c9b6 */
  if (C.zf) goto L_1272c9b6;
  /* 1272c94e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c952 jne 0x1272c95d */
  if (!C.zf) goto L_1272c95d;
  /* 1272c954 mov ecx, dword ptr [0x1274ffb4] */
  ECX = (r32((uint32_t)(0x1274ffb4)));
  /* 1272c95a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1272c95d:;
  /* 1272c95d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1272c964 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272c967 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1272c96d:;
  /* 1272c96d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1272c973 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1272c979 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272c97c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1272c982 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272c984 je 0x1272c9a6 */
  if (C.zf) goto L_1272c9a6;
  /* 1272c986 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1272c98c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272c98e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1272c991 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272c993 je 0x1272c9a6 */
  if (C.zf) goto L_1272c9a6;
  /* 1272c995 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1272c99b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c99e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1272c9a4 jmp 0x1272c96d */
  goto L_1272c96d;
L_1272c9a6:;
  /* 1272c9a6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1272c9ac sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272c9af sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1272c9b1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1272c9b4 jmp 0x1272ca10 */
  goto L_1272ca10;
L_1272c9b6:;
  /* 1272c9b6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272c9ba jne 0x1272c9c4 */
  if (!C.zf) goto L_1272c9c4;
  /* 1272c9bc mov eax, dword ptr [0x1274ffb0] */
  EAX = (r32((uint32_t)(0x1274ffb0)));
  /* 1272c9c1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1272c9c4:;
  /* 1272c9c4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272c9c7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1272c9cd:;
  /* 1272c9cd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1272c9d3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1272c9d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272c9dc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1272c9e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272c9e4 je 0x1272ca04 */
  if (C.zf) goto L_1272ca04;
  /* 1272c9e6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1272c9ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1272c9ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272c9f1 je 0x1272ca04 */
  if (C.zf) goto L_1272ca04;
  /* 1272c9f3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1272c9f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272c9fc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1272ca02 jmp 0x1272c9cd */
  goto L_1272c9cd;
L_1272ca04:;
  /* 1272ca04 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1272ca0a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272ca0d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1272ca10:;
  /* 1272ca10 jmp 0x1272ce77 */
  goto L_1272ce77;
L_1272ca15:;
  /* 1272ca15 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1272ca18 push edx */
  push32((uint32_t)(EDX));
  /* 1272ca19 call 0x1272d280 */
  push32(0x1272ca1eu); f_1272d280();
  /* 1272ca1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ca21 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1272ca27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ca2a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1272ca2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272ca2f je 0x1272ca43 */
  if (C.zf) goto L_1272ca43;
  /* 1272ca31 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1272ca37 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1272ca3e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1272ca41 jmp 0x1272ca51 */
  goto L_1272ca51;
L_1272ca43:;
  /* 1272ca43 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1272ca49 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1272ca4f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1272ca51:;
  /* 1272ca51 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1272ca5b jmp 0x1272ce77 */
  goto L_1272ce77;
L_1272ca60:;
  /* 1272ca60 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1272ca67 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1272ca6a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1272ca6d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1272ca70:;
  /* 1272ca70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ca73 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1272ca75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272ca78 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1272ca7e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1272ca81 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ca88 jge 0x1272ca96 */
  if ((C.sf==C.of)) goto L_1272ca96;
  /* 1272ca8a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1272ca94 jmp 0x1272cab2 */
  goto L_1272cab2;
L_1272ca96:;
  /* 1272ca96 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ca9d jne 0x1272cab2 */
  if (!C.zf) goto L_1272cab2;
  /* 1272ca9f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1272caa3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272caa6 jne 0x1272cab2 */
  if (!C.zf) goto L_1272cab2;
  /* 1272caa8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1272cab2:;
  /* 1272cab2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272cab5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272cab8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1272cabb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272cabe sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272cac1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1272cac3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1272cac6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1272cacc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1272cad2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272cad5 push ecx */
  push32((uint32_t)(ECX));
  /* 1272cad6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1272cadc push edx */
  push32((uint32_t)(EDX));
  /* 1272cadd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1272cae1 push eax */
  push32((uint32_t)(EAX));
  /* 1272cae2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272cae5 push ecx */
  push32((uint32_t)(ECX));
  /* 1272cae6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1272caec push edx */
  push32((uint32_t)(EDX));
  /* 1272caed call dword ptr [0x127503a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127503a0))), 0x1272caf3u);
  /* 1272caf3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272caf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272caf9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1272cafe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272cb00 je 0x1272cb18 */
  if (C.zf) goto L_1272cb18;
  /* 1272cb02 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272cb09 jne 0x1272cb18 */
  if (!C.zf) goto L_1272cb18;
  /* 1272cb0b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272cb0e push ecx */
  push32((uint32_t)(ECX));
  /* 1272cb0f call dword ptr [0x127503ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x127503ac))), 0x1272cb15u);
  /* 1272cb15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272cb18:;
  /* 1272cb18 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1272cb1c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272cb1f jne 0x1272cb3a */
  if (!C.zf) goto L_1272cb3a;
  /* 1272cb21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272cb24 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1272cb29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272cb2b jne 0x1272cb3a */
  if (!C.zf) goto L_1272cb3a;
  /* 1272cb2d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272cb30 push ecx */
  push32((uint32_t)(ECX));
  /* 1272cb31 call dword ptr [0x127503a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127503a4))), 0x1272cb37u);
  /* 1272cb37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272cb3a:;
  /* 1272cb3a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272cb3d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1272cb40 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272cb43 jne 0x1272cb57 */
  if (!C.zf) goto L_1272cb57;
  /* 1272cb45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272cb48 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1272cb4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1272cb4e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272cb51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272cb54 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1272cb57:;
  /* 1272cb57 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272cb5a push eax */
  push32((uint32_t)(EAX));
  /* 1272cb5b call 0x127282e0 */
  push32(0x1272cb60u); f_127282e0();
  /* 1272cb60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272cb63 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1272cb66 jmp 0x1272ce77 */
  goto L_1272ce77;
L_1272cb6b:;
  /* 1272cb6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272cb6e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1272cb71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1272cb74 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1272cb7e jmp 0x1272cc05 */
  goto L_1272cc05;
L_1272cb83:;
  /* 1272cb83 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1272cb8d jmp 0x1272cc05 */
  goto L_1272cc05;
L_1272cb8f:;
  /* 1272cb8f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1272cb99:;
  /* 1272cb99 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1272cba3 jmp 0x1272cbaf */
  goto L_1272cbaf;
L_1272cba5:;
  /* 1272cba5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1272cbaf:;
  /* 1272cbaf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1272cbb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272cbbc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1272cbc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272cbc4 je 0x1272cbe3 */
  if (C.zf) goto L_1272cbe3;
  /* 1272cbc6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1272cbcd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1272cbd3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272cbd6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1272cbdc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1272cbe3:;
  /* 1272cbe3 jmp 0x1272cc05 */
  goto L_1272cc05;
L_1272cbe5:;
  /* 1272cbe5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1272cbef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272cbf2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1272cbf8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272cbfa je 0x1272cc05 */
  if (C.zf) goto L_1272cc05;
  /* 1272cbfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272cbff or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1272cc02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1272cc05:;
  /* 1272cc05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272cc08 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1272cc0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272cc0f je 0x1272cc2e */
  if (C.zf) goto L_1272cc2e;
  /* 1272cc11 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1272cc14 push ecx */
  push32((uint32_t)(ECX));
  /* 1272cc15 call 0x1272d2a0 */
  push32(0x1272cc1au); f_1272d2a0();
  /* 1272cc1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272cc1d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1272cc23 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1272cc29 jmp 0x1272ccbf */
  goto L_1272ccbf;
L_1272cc2e:;
  /* 1272cc2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272cc31 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1272cc34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272cc36 je 0x1272cc80 */
  if (C.zf) goto L_1272cc80;
  /* 1272cc38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272cc3b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1272cc3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272cc40 je 0x1272cc60 */
  if (C.zf) goto L_1272cc60;
  /* 1272cc42 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1272cc45 push ecx */
  push32((uint32_t)(ECX));
  /* 1272cc46 call 0x1272d280 */
  push32(0x1272cc4bu); f_1272d280();
  /* 1272cc4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272cc4e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1272cc51 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1272cc52 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1272cc58 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1272cc5e jmp 0x1272cc7e */
  goto L_1272cc7e;
L_1272cc60:;
  /* 1272cc60 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1272cc63 push edx */
  push32((uint32_t)(EDX));
  /* 1272cc64 call 0x1272d280 */
  push32(0x1272cc69u); f_1272d280();
  /* 1272cc69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272cc6c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272cc71 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1272cc72 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1272cc78 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1272cc7e:;
  /* 1272cc7e jmp 0x1272ccbf */
  goto L_1272ccbf;
L_1272cc80:;
  /* 1272cc80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272cc83 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1272cc86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272cc88 je 0x1272cca5 */
  if (C.zf) goto L_1272cca5;
  /* 1272cc8a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1272cc8d push ecx */
  push32((uint32_t)(ECX));
  /* 1272cc8e call 0x1272d280 */
  push32(0x1272cc93u); f_1272d280();
  /* 1272cc93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272cc96 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1272cc97 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1272cc9d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1272cca3 jmp 0x1272ccbf */
  goto L_1272ccbf;
L_1272cca5:;
  /* 1272cca5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1272cca8 push edx */
  push32((uint32_t)(EDX));
  /* 1272cca9 call 0x1272d280 */
  push32(0x1272ccaeu); f_1272d280();
  /* 1272ccae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ccb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272ccb3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1272ccb9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1272ccbf:;
  /* 1272ccbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ccc2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1272ccc5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272ccc7 je 0x1272cd07 */
  if (C.zf) goto L_1272cd07;
  /* 1272ccc9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ccd0 jg 0x1272cd07 */
  if ((!C.zf&&C.sf==C.of)) goto L_1272cd07;
  /* 1272ccd2 jl 0x1272ccdd */
  if ((C.sf!=C.of)) goto L_1272ccdd;
  /* 1272ccd4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ccdb jae 0x1272cd07 */
  if (!C.cf) goto L_1272cd07;
L_1272ccdd:;
  /* 1272ccdd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1272cce3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1272cce5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1272cceb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ccee neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1272ccf0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1272ccf6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1272ccfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ccff or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1272cd02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272cd05 jmp 0x1272cd1f */
  goto L_1272cd1f;
L_1272cd07:;
  /* 1272cd07 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1272cd0d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1272cd13 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1272cd19 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1272cd1f:;
  /* 1272cd1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272cd22 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1272cd28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272cd2a jne 0x1272cd47 */
  if (!C.zf) goto L_1272cd47;
  /* 1272cd2c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1272cd32 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1272cd38 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1272cd3b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1272cd41 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1272cd47:;
  /* 1272cd47 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272cd4e jge 0x1272cd5c */
  if ((C.sf==C.of)) goto L_1272cd5c;
  /* 1272cd50 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1272cd5a jmp 0x1272cd65 */
  goto L_1272cd65;
L_1272cd5c:;
  /* 1272cd5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272cd5f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1272cd62 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1272cd65:;
  /* 1272cd65 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1272cd6b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1272cd71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272cd73 jne 0x1272cd7c */
  if (!C.zf) goto L_1272cd7c;
  /* 1272cd75 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1272cd7c:;
  /* 1272cd7c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1272cd7f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1272cd82:;
  /* 1272cd82 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1272cd88 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1272cd8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272cd91 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1272cd97 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272cd99 jg 0x1272cdaf */
  if ((!C.zf&&C.sf==C.of)) goto L_1272cdaf;
  /* 1272cd9b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1272cda1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1272cda7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272cda9 je 0x1272ce30 */
  if (C.zf) goto L_1272ce30;
L_1272cdaf:;
  /* 1272cdaf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1272cdb5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1272cdb6 push edx */
  push32((uint32_t)(EDX));
  /* 1272cdb7 push eax */
  push32((uint32_t)(EAX));
  /* 1272cdb8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1272cdbe push edx */
  push32((uint32_t)(EDX));
  /* 1272cdbf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1272cdc5 push eax */
  push32((uint32_t)(EAX));
  /* 1272cdc6 call 0x1272c140 */
  push32(0x1272cdcbu); f_1272c140();
  /* 1272cdcb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272cdce mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1272cdd4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1272cdda cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1272cddb push edx */
  push32((uint32_t)(EDX));
  /* 1272cddc push eax */
  push32((uint32_t)(EAX));
  /* 1272cddd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1272cde3 push ecx */
  push32((uint32_t)(ECX));
  /* 1272cde4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1272cdea push edx */
  push32((uint32_t)(EDX));
  /* 1272cdeb call 0x1272c0d0 */
  push32(0x1272cdf0u); f_1272c0d0();
  /* 1272cdf0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1272cdf6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1272cdfc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ce03 jle 0x1272ce17 */
  if ((C.zf||C.sf!=C.of)) goto L_1272ce17;
  /* 1272ce05 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1272ce0b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ce11 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1272ce17:;
  /* 1272ce17 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272ce1a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1272ce20 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1272ce22 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272ce25 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272ce28 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1272ce2b jmp 0x1272cd82 */
  goto L_1272cd82;
L_1272ce30:;
  /* 1272ce30 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1272ce33 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272ce36 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1272ce39 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272ce3c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ce3f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1272ce42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ce45 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1272ce4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272ce4c je 0x1272ce77 */
  if (C.zf) goto L_1272ce77;
  /* 1272ce4e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272ce51 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1272ce54 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ce57 jne 0x1272ce5f */
  if (!C.zf) goto L_1272ce5f;
  /* 1272ce59 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ce5d jne 0x1272ce77 */
  if (!C.zf) goto L_1272ce77;
L_1272ce5f:;
  /* 1272ce5f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272ce62 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272ce65 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1272ce68 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272ce6b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1272ce6e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272ce71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ce74 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1272ce77:;
  /* 1272ce77 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ce7e jne 0x1272d052 */
  if (!C.zf) goto L_1272d052;
  /* 1272ce84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ce87 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1272ce8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272ce8c je 0x1272cedd */
  if (C.zf) goto L_1272cedd;
  /* 1272ce8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ce91 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1272ce97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272ce99 je 0x1272ceab */
  if (C.zf) goto L_1272ceab;
  /* 1272ce9b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1272cea2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1272cea9 jmp 0x1272cedd */
  goto L_1272cedd;
L_1272ceab:;
  /* 1272ceab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ceae and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1272ceb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272ceb3 je 0x1272cec5 */
  if (C.zf) goto L_1272cec5;
  /* 1272ceb5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1272cebc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1272cec3 jmp 0x1272cedd */
  goto L_1272cedd;
L_1272cec5:;
  /* 1272cec5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272cec8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1272cecb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272cecd je 0x1272cedd */
  if (C.zf) goto L_1272cedd;
  /* 1272cecf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1272ced6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1272cedd:;
  /* 1272cedd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1272cee3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272cee6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272cee9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1272ceef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272cef2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1272cef5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272cef7 jne 0x1272cf15 */
  if (!C.zf) goto L_1272cf15;
  /* 1272cef9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1272ceff push eax */
  push32((uint32_t)(EAX));
  /* 1272cf00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272cf03 push ecx */
  push32((uint32_t)(ECX));
  /* 1272cf04 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1272cf0a push edx */
  push32((uint32_t)(EDX));
  /* 1272cf0b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1272cf0d call 0x1272d1f0 */
  push32(0x1272cf12u); f_1272d1f0();
  /* 1272cf12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272cf15:;
  /* 1272cf15 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1272cf1b push eax */
  push32((uint32_t)(EAX));
  /* 1272cf1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272cf1f push ecx */
  push32((uint32_t)(ECX));
  /* 1272cf20 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272cf23 push edx */
  push32((uint32_t)(EDX));
  /* 1272cf24 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1272cf2a push eax */
  push32((uint32_t)(EAX));
  /* 1272cf2b call 0x1272d230 */
  push32(0x1272cf30u); f_1272d230();
  /* 1272cf30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272cf33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272cf36 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1272cf39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272cf3b je 0x1272cf63 */
  if (C.zf) goto L_1272cf63;
  /* 1272cf3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272cf40 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1272cf43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272cf45 jne 0x1272cf63 */
  if (!C.zf) goto L_1272cf63;
  /* 1272cf47 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1272cf4d push eax */
  push32((uint32_t)(EAX));
  /* 1272cf4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272cf51 push ecx */
  push32((uint32_t)(ECX));
  /* 1272cf52 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1272cf58 push edx */
  push32((uint32_t)(EDX));
  /* 1272cf59 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1272cf5b call 0x1272d1f0 */
  push32(0x1272cf60u); f_1272d1f0();
  /* 1272cf60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272cf63:;
  /* 1272cf63 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272cf67 je 0x1272d011 */
  if (C.zf) goto L_1272d011;
  /* 1272cf6d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272cf71 jle 0x1272d011 */
  if ((C.zf||C.sf!=C.of)) goto L_1272d011;
  /* 1272cf77 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272cf7a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1272cf80 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272cf83 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1272cf89:;
  /* 1272cf89 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1272cf8f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1272cf95 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272cf98 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1272cf9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272cfa0 je 0x1272d00f */
  if (C.zf) goto L_1272d00f;
  /* 1272cfa2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1272cfa8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1272cfab mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1272cfb2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1272cfb9 push eax */
  push32((uint32_t)(EAX));
  /* 1272cfba lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1272cfc0 push ecx */
  push32((uint32_t)(ECX));
  /* 1272cfc1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1272cfc7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272cfca mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1272cfd0 call 0x1272e3a0 */
  push32(0x1272cfd5u); f_1272e3a0();
  /* 1272cfd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272cfd8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1272cfde cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272cfe5 jg 0x1272cfe9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1272cfe9;
  /* 1272cfe7 jmp 0x1272d00f */
  goto L_1272d00f;
L_1272cfe9:;
  /* 1272cfe9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1272cfef push eax */
  push32((uint32_t)(EAX));
  /* 1272cff0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272cff3 push ecx */
  push32((uint32_t)(ECX));
  /* 1272cff4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1272cffa push edx */
  push32((uint32_t)(EDX));
  /* 1272cffb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1272d001 push eax */
  push32((uint32_t)(EAX));
  /* 1272d002 call 0x1272d230 */
  push32(0x1272d007u); f_1272d230();
  /* 1272d007 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d00a jmp 0x1272cf89 */
  goto L_1272cf89;
L_1272d00f:;
  /* 1272d00f jmp 0x1272d02c */
  goto L_1272d02c;
L_1272d011:;
  /* 1272d011 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1272d017 push ecx */
  push32((uint32_t)(ECX));
  /* 1272d018 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d01b push edx */
  push32((uint32_t)(EDX));
  /* 1272d01c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272d01f push eax */
  push32((uint32_t)(EAX));
  /* 1272d020 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272d023 push ecx */
  push32((uint32_t)(ECX));
  /* 1272d024 call 0x1272d230 */
  push32(0x1272d029u); f_1272d230();
  /* 1272d029 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272d02c:;
  /* 1272d02c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272d02f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1272d032 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272d034 je 0x1272d052 */
  if (C.zf) goto L_1272d052;
  /* 1272d036 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1272d03c push eax */
  push32((uint32_t)(EAX));
  /* 1272d03d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d040 push ecx */
  push32((uint32_t)(ECX));
  /* 1272d041 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1272d047 push edx */
  push32((uint32_t)(EDX));
  /* 1272d048 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1272d04a call 0x1272d1f0 */
  push32(0x1272d04fu); f_1272d1f0();
  /* 1272d04f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272d052:;
  /* 1272d052 jmp 0x1272c464 */
  goto L_1272c464;
L_1272d057:;
  /* 1272d057 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1272d05d pop edi */
  EDI = (pop32());
  /* 1272d05e pop esi */
  ESI = (pop32());
  /* 1272d05f pop ebx */
  EBX = (pop32());
  /* 1272d060 mov esp, ebp */
  ESP = (EBP);
  /* 1272d062 pop ebp */
  EBP = (pop32());
  /* 1272d063 ret  */
  ESPCHK(0x1272c440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d170 @ 0x1272d170 (119 bytes, 44 insns) */
void f_1272d170(void) {
  FTRACE(0x1272d170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272d170 push ebp */
  push32((uint32_t)(EBP));
  /* 1272d171 mov ebp, esp */
  EBP = (ESP);
  /* 1272d173 push ecx */
  push32((uint32_t)(ECX));
  /* 1272d174 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272d177 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1272d17a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272d17d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272d180 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1272d183 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272d186 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d18a jl 0x1272d1b2 */
  if ((C.sf!=C.of)) goto L_1272d1b2;
  /* 1272d18c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272d18f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1272d191 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1272d194 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1272d196 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1272d19a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1272d1a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1272d1a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272d1a6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1272d1a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d1ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272d1ae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1272d1b0 jmp 0x1272d1c5 */
  goto L_1272d1c5;
L_1272d1b2:;
  /* 1272d1b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272d1b5 push edx */
  push32((uint32_t)(EDX));
  /* 1272d1b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d1b9 push eax */
  push32((uint32_t)(EAX));
  /* 1272d1ba call 0x1272c1c0 */
  push32(0x1272d1bfu); f_1272c1c0();
  /* 1272d1bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d1c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1272d1c5:;
  /* 1272d1c5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d1c9 jne 0x1272d1d6 */
  if (!C.zf) goto L_1272d1d6;
  /* 1272d1cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272d1ce mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1272d1d4 jmp 0x1272d1e3 */
  goto L_1272d1e3;
L_1272d1d6:;
  /* 1272d1d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272d1d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1272d1db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d1de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272d1e1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1272d1e3:;
  /* 1272d1e3 mov esp, ebp */
  ESP = (EBP);
  /* 1272d1e5 pop ebp */
  EBP = (pop32());
  /* 1272d1e6 ret  */
  ESPCHK(0x1272d170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1f0 @ 0x1272d1f0 (53 bytes, 23 insns) */
void f_1272d1f0(void) {
  FTRACE(0x1272d1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272d1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272d1f1 mov ebp, esp */
  EBP = (ESP);
L_1272d1f3:;
  /* 1272d1f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272d1f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272d1f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272d1fc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1272d1ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272d201 jle 0x1272d223 */
  if ((C.zf||C.sf!=C.of)) goto L_1272d223;
  /* 1272d203 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1272d206 push edx */
  push32((uint32_t)(EDX));
  /* 1272d207 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272d20a push eax */
  push32((uint32_t)(EAX));
  /* 1272d20b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d20e push ecx */
  push32((uint32_t)(ECX));
  /* 1272d20f call 0x1272d170 */
  push32(0x1272d214u); f_1272d170();
  /* 1272d214 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d217 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1272d21a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d21d jne 0x1272d221 */
  if (!C.zf) goto L_1272d221;
  /* 1272d21f jmp 0x1272d223 */
  goto L_1272d223;
L_1272d221:;
  /* 1272d221 jmp 0x1272d1f3 */
  goto L_1272d1f3;
L_1272d223:;
  /* 1272d223 pop ebp */
  EBP = (pop32());
  /* 1272d224 ret  */
  ESPCHK(0x1272d1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d230 @ 0x1272d230 (74 bytes, 31 insns) */
void f_1272d230(void) {
  FTRACE(0x1272d230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272d230 push ebp */
  push32((uint32_t)(EBP));
  /* 1272d231 mov ebp, esp */
  EBP = (ESP);
  /* 1272d233 push ecx */
  push32((uint32_t)(ECX));
L_1272d234:;
  /* 1272d234 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272d237 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272d23a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272d23d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1272d240 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272d242 jle 0x1272d276 */
  if ((C.zf||C.sf!=C.of)) goto L_1272d276;
  /* 1272d244 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1272d247 push edx */
  push32((uint32_t)(EDX));
  /* 1272d248 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272d24b push eax */
  push32((uint32_t)(EAX));
  /* 1272d24c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d24f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1272d252 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272d255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272d258 push eax */
  push32((uint32_t)(EAX));
  /* 1272d259 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d25c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d25f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1272d262 call 0x1272d170 */
  push32(0x1272d267u); f_1272d170();
  /* 1272d267 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d26a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1272d26d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d270 jne 0x1272d274 */
  if (!C.zf) goto L_1272d274;
  /* 1272d272 jmp 0x1272d276 */
  goto L_1272d276;
L_1272d274:;
  /* 1272d274 jmp 0x1272d234 */
  goto L_1272d234;
L_1272d276:;
  /* 1272d276 mov esp, ebp */
  ESP = (EBP);
  /* 1272d278 pop ebp */
  EBP = (pop32());
  /* 1272d279 ret  */
  ESPCHK(0x1272d230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d280 @ 0x1272d280 (26 bytes, 12 insns) */
void f_1272d280(void) {
  FTRACE(0x1272d280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272d280 push ebp */
  push32((uint32_t)(EBP));
  /* 1272d281 mov ebp, esp */
  EBP = (ESP);
  /* 1272d283 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d286 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1272d288 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d28b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d28e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1272d290 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d293 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1272d295 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1272d298 pop ebp */
  EBP = (pop32());
  /* 1272d299 ret  */
  ESPCHK(0x1272d280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2a0 @ 0x1272d2a0 (31 bytes, 14 insns) */
void f_1272d2a0(void) {
  FTRACE(0x1272d2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272d2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272d2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1272d2a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d2a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1272d2a8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d2ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d2ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1272d2b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d2b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1272d2b5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272d2b8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1272d2ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1272d2bd pop ebp */
  EBP = (pop32());
  /* 1272d2be ret  */
  ESPCHK(0x1272d2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2c0 @ 0x1272d2c0 (27 bytes, 12 insns) */
void f_1272d2c0(void) {
  FTRACE(0x1272d2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272d2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272d2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1272d2c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d2c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1272d2c8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d2cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d2ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1272d2d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d2d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1272d2d5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1272d2d9 pop ebp */
  EBP = (pop32());
  /* 1272d2da ret  */
  ESPCHK(0x1272d2c0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1272d2e0 (145 bytes, 42 insns) */
void f_1272d2e0(void) {
  FTRACE(0x1272d2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272d2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272d2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1272d2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1272d2e4 call 0x1272d390 */
  push32(0x1272d2e9u); f_1272d390();
  /* 1272d2e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d2ec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1272d2ee mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1272d2f5 jmp 0x1272d300 */
  goto L_1272d300;
L_1272d2f7:;
  /* 1272d2f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272d2fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d2fd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1272d300:;
  /* 1272d300 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d304 jae 0x1272d32a */
  if (!C.cf) goto L_1272d32a;
  /* 1272d306 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272d309 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d30c cmp ecx, dword ptr [eax*8 + 0x1274ffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1274ffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d313 jne 0x1272d328 */
  if (!C.zf) goto L_1272d328;
  /* 1272d315 call 0x1272d380 */
  push32(0x1272d31au); f_1272d380();
  /* 1272d31a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272d31d mov ecx, dword ptr [edx*8 + 0x1274ffbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1274ffbc)));
  /* 1272d324 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1272d326 jmp 0x1272d36d */
  goto L_1272d36d;
L_1272d328:;
  /* 1272d328 jmp 0x1272d2f7 */
  goto L_1272d2f7;
L_1272d32a:;
  /* 1272d32a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d32e jb 0x1272d343 */
  if (C.cf) goto L_1272d343;
  /* 1272d330 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d334 ja 0x1272d343 */
  if ((!C.cf&&!C.zf)) goto L_1272d343;
  /* 1272d336 call 0x1272d380 */
  push32(0x1272d33bu); f_1272d380();
  /* 1272d33b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1272d341 jmp 0x1272d36d */
  goto L_1272d36d;
L_1272d343:;
  /* 1272d343 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d34a jb 0x1272d362 */
  if (C.cf) goto L_1272d362;
  /* 1272d34c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d353 ja 0x1272d362 */
  if ((!C.cf&&!C.zf)) goto L_1272d362;
  /* 1272d355 call 0x1272d380 */
  push32(0x1272d35au); f_1272d380();
  /* 1272d35a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1272d360 jmp 0x1272d36d */
  goto L_1272d36d;
L_1272d362:;
  /* 1272d362 call 0x1272d380 */
  push32(0x1272d367u); f_1272d380();
  /* 1272d367 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1272d36d:;
  /* 1272d36d mov esp, ebp */
  ESP = (EBP);
  /* 1272d36f pop ebp */
  EBP = (pop32());
  /* 1272d370 ret  */
  ESPCHK(0x1272d2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d380 @ 0x1272d380 (13 bytes, 6 insns) */
void f_1272d380(void) {
  FTRACE(0x1272d380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272d380 push ebp */
  push32((uint32_t)(EBP));
  /* 1272d381 mov ebp, esp */
  EBP = (ESP);
  /* 1272d383 call 0x12724ef0 */
  push32(0x1272d388u); f_12724ef0();
  /* 1272d388 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d38b pop ebp */
  EBP = (pop32());
  /* 1272d38c ret  */
  ESPCHK(0x1272d380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d390 @ 0x1272d390 (13 bytes, 6 insns) */
void f_1272d390(void) {
  FTRACE(0x1272d390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272d390 push ebp */
  push32((uint32_t)(EBP));
  /* 1272d391 mov ebp, esp */
  EBP = (ESP);
  /* 1272d393 call 0x12724ef0 */
  push32(0x1272d398u); f_12724ef0();
  /* 1272d398 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d39b pop ebp */
  EBP = (pop32());
  /* 1272d39c ret  */
  ESPCHK(0x1272d390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3a0 @ 0x1272d3a0 (664 bytes, 269 insns) [15 switch table(s)] */
void f_1272d3a0(void) {
  FTRACE(0x1272d3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272d3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272d3a1 mov ebp, esp */
  EBP = (ESP);
  /* 1272d3a3 push edi */
  push32((uint32_t)(EDI));
  /* 1272d3a4 push esi */
  push32((uint32_t)(ESI));
  /* 1272d3a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1272d3a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272d3ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d3ae mov eax, ecx */
  EAX = (ECX);
  /* 1272d3b0 mov edx, ecx */
  EDX = (ECX);
  /* 1272d3b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d3b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d3b6 jbe 0x1272d3c0 */
  if ((C.cf||C.zf)) goto L_1272d3c0;
  /* 1272d3b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d3ba jb 0x1272d538 */
  if (C.cf) goto L_1272d538;
L_1272d3c0:;
  /* 1272d3c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1272d3c6 jne 0x1272d3dc */
  if (!C.zf) goto L_1272d3dc;
  /* 1272d3c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1272d3cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1272d3ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d3d1 jb 0x1272d3fc */
  if (C.cf) goto L_1272d3fc;
  /* 1272d3d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1272d3d5 jmp dword ptr [edx*4 + 0x1272d4e8] */
  switch (EDX) {
    case 0: goto L_1272d4f8;
    case 1: goto L_1272d500;
    case 2: goto L_1272d50c;
    case 3: goto L_1272d520;
    default: x86_unimpl("switch@0x1272d3d5 out of table"); return;
  }
L_1272d3dc:;
  /* 1272d3dc mov eax, edi */
  EAX = (EDI);
  /* 1272d3de mov edx, 3 */
  EDX = (0x3u);
  /* 1272d3e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272d3e6 jb 0x1272d3f4 */
  if (C.cf) goto L_1272d3f4;
  /* 1272d3e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1272d3eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d3ed jmp dword ptr [eax*4 + 0x1272d400] */
  switch (EAX) {
    case 1: goto L_1272d410;
    case 2: goto L_1272d43c;
    case 3: goto L_1272d460;
    default: x86_unimpl("switch@0x1272d3ed out of table"); return;
  }
L_1272d3f4:;
  /* 1272d3f4 jmp dword ptr [ecx*4 + 0x1272d4f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1272d4f8)))); return;
  /* 1272d3fb nop  */
  /* nop */
L_1272d3fc:;
  /* 1272d3fc jmp dword ptr [ecx*4 + 0x1272d47c] */
  switch (ECX) {
    case 0: goto L_1272d4df;
    case 1: goto L_1272d4cc;
    case 2: goto L_1272d4c4;
    case 3: goto L_1272d4bc;
    case 4: goto L_1272d4b4;
    case 5: goto L_1272d4ac;
    case 6: goto L_1272d4a4;
    case 7: goto L_1272d49c;
    default: x86_unimpl("switch@0x1272d3fc out of table"); return;
  }
  /* 1272d403 nop  */
  /* nop */
L_1272d410:;
  /* 1272d410 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1272d412 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1272d414 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1272d416 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1272d419 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1272d41c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1272d41f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1272d422 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1272d425 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d428 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d42b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d42e jb 0x1272d3fc */
  if (C.cf) goto L_1272d3fc;
  /* 1272d430 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1272d432 jmp dword ptr [edx*4 + 0x1272d4e8] */
  switch (EDX) {
    case 0: goto L_1272d4f8;
    case 1: goto L_1272d500;
    case 2: goto L_1272d50c;
    case 3: goto L_1272d520;
    default: x86_unimpl("switch@0x1272d432 out of table"); return;
  }
  /* 1272d439 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1272d43c:;
  /* 1272d43c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1272d43e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1272d440 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1272d442 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1272d445 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1272d448 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1272d44b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d44e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d451 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d454 jb 0x1272d3fc */
  if (C.cf) goto L_1272d3fc;
  /* 1272d456 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1272d458 jmp dword ptr [edx*4 + 0x1272d4e8] */
  switch (EDX) {
    case 0: goto L_1272d4f8;
    case 1: goto L_1272d500;
    case 2: goto L_1272d50c;
    case 3: goto L_1272d520;
    default: x86_unimpl("switch@0x1272d458 out of table"); return;
  }
  /* 1272d45f nop  */
  /* nop */
L_1272d460:;
  /* 1272d460 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1272d462 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1272d464 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1272d466 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1272d467 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1272d46a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1272d46b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d46e jb 0x1272d3fc */
  if (C.cf) goto L_1272d3fc;
  /* 1272d470 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1272d472 jmp dword ptr [edx*4 + 0x1272d4e8] */
  switch (EDX) {
    case 0: goto L_1272d4f8;
    case 1: goto L_1272d500;
    case 2: goto L_1272d50c;
    case 3: goto L_1272d520;
    default: x86_unimpl("switch@0x1272d472 out of table"); return;
  }
  /* 1272d479 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1272d49c:;
  /* 1272d49c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1272d4a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1272d4a4:;
  /* 1272d4a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1272d4a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1272d4ac:;
  /* 1272d4ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1272d4b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1272d4b4:;
  /* 1272d4b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1272d4b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1272d4bc:;
  /* 1272d4bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1272d4c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1272d4c4:;
  /* 1272d4c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1272d4c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1272d4cc:;
  /* 1272d4cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1272d4d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1272d4d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1272d4db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d4dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1272d4df:;
  /* 1272d4df jmp dword ptr [edx*4 + 0x1272d4e8] */
  switch (EDX) {
    case 0: goto L_1272d4f8;
    case 1: goto L_1272d500;
    case 2: goto L_1272d50c;
    case 3: goto L_1272d520;
    default: x86_unimpl("switch@0x1272d4df out of table"); return;
  }
  /* 1272d4e6 mov edi, edi */
  EDI = (EDI);
L_1272d4f8:;
  /* 1272d4f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d4fb pop esi */
  ESI = (pop32());
  /* 1272d4fc pop edi */
  EDI = (pop32());
  /* 1272d4fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1272d4fe ret  */
  ESPCHK(0x1272d3a0u, _esp0);
  ESP += 4; return;
  /* 1272d4ff nop  */
  /* nop */
L_1272d500:;
  /* 1272d500 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1272d502 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1272d504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d507 pop esi */
  ESI = (pop32());
  /* 1272d508 pop edi */
  EDI = (pop32());
  /* 1272d509 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1272d50a ret  */
  ESPCHK(0x1272d3a0u, _esp0);
  ESP += 4; return;
  /* 1272d50b nop  */
  /* nop */
L_1272d50c:;
  /* 1272d50c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1272d50e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1272d510 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1272d513 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1272d516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d519 pop esi */
  ESI = (pop32());
  /* 1272d51a pop edi */
  EDI = (pop32());
  /* 1272d51b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1272d51c ret  */
  ESPCHK(0x1272d3a0u, _esp0);
  ESP += 4; return;
  /* 1272d51d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1272d520:;
  /* 1272d520 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1272d522 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1272d524 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1272d527 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1272d52a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1272d52d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1272d530 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d533 pop esi */
  ESI = (pop32());
  /* 1272d534 pop edi */
  EDI = (pop32());
  /* 1272d535 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1272d536 ret  */
  ESPCHK(0x1272d3a0u, _esp0);
  ESP += 4; return;
  /* 1272d537 nop  */
  /* nop */
L_1272d538:;
  /* 1272d538 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1272d53c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1272d540 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1272d546 jne 0x1272d56c */
  if (!C.zf) goto L_1272d56c;
  /* 1272d548 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1272d54b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1272d54e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d551 jb 0x1272d560 */
  if (C.cf) goto L_1272d560;
  /* 1272d553 std  */
  C.df=1;
  /* 1272d554 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1272d556 cld  */
  C.df=0;
  /* 1272d557 jmp dword ptr [edx*4 + 0x1272d680] */
  switch (EDX) {
    case 0: goto L_1272d690;
    case 1: goto L_1272d698;
    case 2: goto L_1272d6a8;
    case 3: goto L_1272d6bc;
    default: x86_unimpl("switch@0x1272d557 out of table"); return;
  }
  /* 1272d55e mov edi, edi */
  EDI = (EDI);
L_1272d560:;
  /* 1272d560 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1272d562 jmp dword ptr [ecx*4 + 0x1272d630] */
  switch (ECX) {
    case 0: goto L_1272d677;
    default: x86_unimpl("switch@0x1272d562 out of table"); return;
  }
  /* 1272d569 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1272d56c:;
  /* 1272d56c mov eax, edi */
  EAX = (EDI);
  /* 1272d56e mov edx, 3 */
  EDX = (0x3u);
  /* 1272d573 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d576 jb 0x1272d584 */
  if (C.cf) goto L_1272d584;
  /* 1272d578 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1272d57b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272d57d jmp dword ptr [eax*4 + 0x1272d588] */
  switch (EAX) {
    case 1: goto L_1272d598;
    case 2: goto L_1272d5b8;
    case 3: goto L_1272d5e0;
    default: x86_unimpl("switch@0x1272d57d out of table"); return;
  }
L_1272d584:;
  /* 1272d584 jmp dword ptr [ecx*4 + 0x1272d680] */
  switch (ECX) {
    case 0: goto L_1272d690;
    case 1: goto L_1272d698;
    case 2: goto L_1272d6a8;
    case 3: goto L_1272d6bc;
    default: x86_unimpl("switch@0x1272d584 out of table"); return;
  }
  /* 1272d58b nop  */
  /* nop */
L_1272d598:;
  /* 1272d598 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1272d59b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1272d59d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1272d5a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1272d5a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1272d5a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1272d5a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d5a8 jb 0x1272d560 */
  if (C.cf) goto L_1272d560;
  /* 1272d5aa std  */
  C.df=1;
  /* 1272d5ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1272d5ad cld  */
  C.df=0;
  /* 1272d5ae jmp dword ptr [edx*4 + 0x1272d680] */
  switch (EDX) {
    case 0: goto L_1272d690;
    case 1: goto L_1272d698;
    case 2: goto L_1272d6a8;
    case 3: goto L_1272d6bc;
    default: x86_unimpl("switch@0x1272d5ae out of table"); return;
  }
  /* 1272d5b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1272d5b8:;
  /* 1272d5b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1272d5bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1272d5bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1272d5c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1272d5c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1272d5c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1272d5c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272d5cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272d5cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d5d2 jb 0x1272d560 */
  if (C.cf) goto L_1272d560;
  /* 1272d5d4 std  */
  C.df=1;
  /* 1272d5d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1272d5d7 cld  */
  C.df=0;
  /* 1272d5d8 jmp dword ptr [edx*4 + 0x1272d680] */
  switch (EDX) {
    case 0: goto L_1272d690;
    case 1: goto L_1272d698;
    case 2: goto L_1272d6a8;
    case 3: goto L_1272d6bc;
    default: x86_unimpl("switch@0x1272d5d8 out of table"); return;
  }
  /* 1272d5df nop  */
  /* nop */
L_1272d5e0:;
  /* 1272d5e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1272d5e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1272d5e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1272d5e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1272d5eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1272d5ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1272d5f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1272d5f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1272d5f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272d5fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272d5fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d600 jb 0x1272d560 */
  if (C.cf) goto L_1272d560;
  /* 1272d606 std  */
  C.df=1;
  /* 1272d607 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1272d609 cld  */
  C.df=0;
  /* 1272d60a jmp dword ptr [edx*4 + 0x1272d680] */
  switch (EDX) {
    case 0: goto L_1272d690;
    case 1: goto L_1272d698;
    case 2: goto L_1272d6a8;
    case 3: goto L_1272d6bc;
    default: x86_unimpl("switch@0x1272d60a out of table"); return;
  }
  /* 1272d611 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1272d614 xor al, 0xd6 */
  { uint32_t _r=(AL)^(0xd6u); AL = (_r); fl_logic(_r,8); }
  /* 1272d616 jb 0x1272d62a */
  if (C.cf) goto L_1272d62a;
  /* 1272d618 cmp al, 0xd6 */
  { uint32_t _a=(AL),_b=(0xd6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1272d61a jb 0x1272d62e */
  if (C.cf) goto L_1272d62e;
  /* 1272d61c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1272d61d salc  */
  x86_unimpl("salc @ 0x1272d61d");
  /* 1272d61e jb 0x1272d632 */
  if (C.cf) goto L_1272d632;
  /* 1272d620 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 1272d621 salc  */
  x86_unimpl("salc @ 0x1272d621");
  /* 1272d622 jb 0x1272d636 */
  if (C.cf) goto L_1272d636;
  /* 1272d624 push esp */
  push32((uint32_t)(ESP));
  /* 1272d625 salc  */
  x86_unimpl("salc @ 0x1272d625");
  /* 1272d626 jb 0x1272d63a */
  if (C.cf) goto L_1272d63a;
  /* 1272d628 pop esp */
  ESP = (pop32());
  /* 1272d629 salc  */
  x86_unimpl("salc @ 0x1272d629");
L_1272d62a:;
  /* 1272d62a jb 0x1272d63e */
  if (C.cf) goto L_1272d63e;
  /* 1272d62c salc  */
  x86_unimpl("salc @ 0x1272d62c");
L_1272d62e:;
  /* 1272d62e jb 0x1272d642 */
  if (C.cf) goto L_1272d642;
  /* 1272d634 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1272d638 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1272d63c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1272d640 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1272d644 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1272d648 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1272d64c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1272d650 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1272d654 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1272d658 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1272d65c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1272d660 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1272d664 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1272d668 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1272d66c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1272d673 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d675 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1272d677:;
  /* 1272d677 jmp dword ptr [edx*4 + 0x1272d680] */
  switch (EDX) {
    case 0: goto L_1272d690;
    case 1: goto L_1272d698;
    case 2: goto L_1272d6a8;
    case 3: goto L_1272d6bc;
    default: x86_unimpl("switch@0x1272d677 out of table"); return;
  }
  /* 1272d67e mov edi, edi */
  EDI = (EDI);
L_1272d690:;
  /* 1272d690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d693 pop esi */
  ESI = (pop32());
  /* 1272d694 pop edi */
  EDI = (pop32());
  /* 1272d695 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1272d696 ret  */
  ESPCHK(0x1272d3a0u, _esp0);
  ESP += 4; return;
  /* 1272d697 nop  */
  /* nop */
L_1272d698:;
  /* 1272d698 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1272d69b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1272d69e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d6a1 pop esi */
  ESI = (pop32());
  /* 1272d6a2 pop edi */
  EDI = (pop32());
  /* 1272d6a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1272d6a4 ret  */
  ESPCHK(0x1272d3a0u, _esp0);
  ESP += 4; return;
  /* 1272d6a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1272d6a8:;
  /* 1272d6a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1272d6ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1272d6ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1272d6b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1272d6b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d6b7 pop esi */
  ESI = (pop32());
  /* 1272d6b8 pop edi */
  EDI = (pop32());
  /* 1272d6b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1272d6ba ret  */
  ESPCHK(0x1272d3a0u, _esp0);
  ESP += 4; return;
  /* 1272d6bb nop  */
  /* nop */
L_1272d6bc:;
  /* 1272d6bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1272d6bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1272d6c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1272d6c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1272d6c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1272d6cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1272d6ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d6d1 pop esi */
  ESI = (pop32());
  /* 1272d6d2 pop edi */
  EDI = (pop32());
  /* 1272d6d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1272d6d4 ret  */
  ESPCHK(0x1272d3a0u, _esp0);
  ESP += 4; return;
L_1272d632: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1272d632 (unresolved jump table)"); return;
L_1272d636: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1272d636 (unresolved jump table)"); return;
L_1272d63a: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1272d63a (unresolved jump table)"); return;
L_1272d63e: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1272d63e (unresolved jump table)"); return;
L_1272d642: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1272d642 (unresolved jump table)"); return;
}

/* FUN_1000d6e0 @ 0x1272d6e0 (421 bytes, 148 insns) */
void f_1272d6e0(void) {
  FTRACE(0x1272d6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272d6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272d6e1 mov ebp, esp */
  EBP = (ESP);
  /* 1272d6e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1272d6e5 push 0x1274d378 */
  push32((uint32_t)(0x1274d378u));
  /* 1272d6ea push 0x1272e5b8 */
  push32((uint32_t)(0x1272e5b8u));
  /* 1272d6ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1272d6f5 push eax */
  push32((uint32_t)(EAX));
  /* 1272d6f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1272d6fd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d700 push ebx */
  push32((uint32_t)(EBX));
  /* 1272d701 push esi */
  push32((uint32_t)(ESI));
  /* 1272d702 push edi */
  push32((uint32_t)(EDI));
  /* 1272d703 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1272d706 cmp dword ptr [0x1275186c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1275186c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d70d jne 0x1272d75e */
  if (!C.zf) goto L_1272d75e;
  /* 1272d70f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1272d712 push eax */
  push32((uint32_t)(EAX));
  /* 1272d713 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272d715 push 0x1274d370 */
  push32((uint32_t)(0x1274d370u));
  /* 1272d71a push 1 */
  push32((uint32_t)(0x1u));
  /* 1272d71c call dword ptr [0x127542fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542fc))), 0x1272d722u);
  /* 1272d722 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272d724 je 0x1272d732 */
  if (C.zf) goto L_1272d732;
  /* 1272d726 mov dword ptr [0x1275186c], 1 */
  w32((uint32_t)(0x1275186c), (0x1u));
  /* 1272d730 jmp 0x1272d75e */
  goto L_1272d75e;
L_1272d732:;
  /* 1272d732 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1272d735 push ecx */
  push32((uint32_t)(ECX));
  /* 1272d736 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272d738 push 0x1274d36c */
  push32((uint32_t)(0x1274d36cu));
  /* 1272d73d push 1 */
  push32((uint32_t)(0x1u));
  /* 1272d73f push 0 */
  push32((uint32_t)(0x0u));
  /* 1272d741 call dword ptr [0x12754300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754300))), 0x1272d747u);
  /* 1272d747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272d749 je 0x1272d757 */
  if (C.zf) goto L_1272d757;
  /* 1272d74b mov dword ptr [0x1275186c], 2 */
  w32((uint32_t)(0x1275186c), (0x2u));
  /* 1272d755 jmp 0x1272d75e */
  goto L_1272d75e;
L_1272d757:;
  /* 1272d757 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272d759 jmp 0x1272d888 */
  goto L_1272d888;
L_1272d75e:;
  /* 1272d75e cmp dword ptr [0x1275186c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1275186c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d765 jne 0x1272d795 */
  if (!C.zf) goto L_1272d795;
  /* 1272d767 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d76b jne 0x1272d776 */
  if (!C.zf) goto L_1272d776;
  /* 1272d76d mov edx, dword ptr [0x12751878] */
  EDX = (r32((uint32_t)(0x12751878)));
  /* 1272d773 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1272d776:;
  /* 1272d776 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1272d779 push eax */
  push32((uint32_t)(EAX));
  /* 1272d77a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272d77d push ecx */
  push32((uint32_t)(ECX));
  /* 1272d77e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272d781 push edx */
  push32((uint32_t)(EDX));
  /* 1272d782 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d785 push eax */
  push32((uint32_t)(EAX));
  /* 1272d786 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1272d789 push ecx */
  push32((uint32_t)(ECX));
  /* 1272d78a call dword ptr [0x12754300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754300))), 0x1272d790u);
  /* 1272d790 jmp 0x1272d888 */
  goto L_1272d888;
L_1272d795:;
  /* 1272d795 cmp dword ptr [0x1275186c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1275186c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d79c jne 0x1272d886 */
  if (!C.zf) goto L_1272d886;
  /* 1272d7a2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d7a6 jne 0x1272d7b1 */
  if (!C.zf) goto L_1272d7b1;
  /* 1272d7a8 mov edx, dword ptr [0x12751888] */
  EDX = (r32((uint32_t)(0x12751888)));
  /* 1272d7ae mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1272d7b1:;
  /* 1272d7b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272d7b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272d7b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272d7b8 push eax */
  push32((uint32_t)(EAX));
  /* 1272d7b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272d7bc push ecx */
  push32((uint32_t)(ECX));
  /* 1272d7bd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1272d7c0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1272d7c2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272d7c4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1272d7c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d7ca push edx */
  push32((uint32_t)(EDX));
  /* 1272d7cb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1272d7ce push eax */
  push32((uint32_t)(EAX));
  /* 1272d7cf call dword ptr [0x12754304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754304))), 0x1272d7d5u);
  /* 1272d7d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1272d7d8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d7dc jne 0x1272d7e5 */
  if (!C.zf) goto L_1272d7e5;
  /* 1272d7de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272d7e0 jmp 0x1272d888 */
  goto L_1272d888;
L_1272d7e5:;
  /* 1272d7e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1272d7ec mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272d7ef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1272d7f1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d7f4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1272d7f6 call 0x12728650 */
  push32(0x1272d7fbu); f_12728650();
  /* 1272d7fb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1272d7fe mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1272d801 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272d804 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1272d807 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272d80a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1272d80c push edx */
  push32((uint32_t)(EDX));
  /* 1272d80d push 0 */
  push32((uint32_t)(0x0u));
  /* 1272d80f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272d812 push eax */
  push32((uint32_t)(EAX));
  /* 1272d813 call 0x12729220 */
  push32(0x1272d818u); f_12729220();
  /* 1272d818 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d81b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1272d822 jmp 0x1272d83b */
  goto L_1272d83b;
  /* 1272d824 mov eax, 1 */
  EAX = (0x1u);
  /* 1272d829 ret  */
  ESPCHK(0x1272d6e0u, _esp0);
  ESP += 4; return;
  /* 1272d82a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1272d82d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1272d834 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1272d83b:;
  /* 1272d83b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d83f jne 0x1272d845 */
  if (!C.zf) goto L_1272d845;
  /* 1272d841 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272d843 jmp 0x1272d888 */
  goto L_1272d888;
L_1272d845:;
  /* 1272d845 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272d848 push ecx */
  push32((uint32_t)(ECX));
  /* 1272d849 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272d84c push edx */
  push32((uint32_t)(EDX));
  /* 1272d84d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272d850 push eax */
  push32((uint32_t)(EAX));
  /* 1272d851 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272d854 push ecx */
  push32((uint32_t)(ECX));
  /* 1272d855 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272d857 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1272d85a push edx */
  push32((uint32_t)(EDX));
  /* 1272d85b call dword ptr [0x12754304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754304))), 0x1272d861u);
  /* 1272d861 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1272d864 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d868 jne 0x1272d86e */
  if (!C.zf) goto L_1272d86e;
  /* 1272d86a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272d86c jmp 0x1272d888 */
  goto L_1272d888;
L_1272d86e:;
  /* 1272d86e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1272d871 push eax */
  push32((uint32_t)(EAX));
  /* 1272d872 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272d875 push ecx */
  push32((uint32_t)(ECX));
  /* 1272d876 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272d879 push edx */
  push32((uint32_t)(EDX));
  /* 1272d87a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d87d push eax */
  push32((uint32_t)(EAX));
  /* 1272d87e call dword ptr [0x127542fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542fc))), 0x1272d884u);
  /* 1272d884 jmp 0x1272d888 */
  goto L_1272d888;
L_1272d886:;
  /* 1272d886 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1272d888:;
  /* 1272d888 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1272d88b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272d88e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1272d895 pop edi */
  EDI = (pop32());
  /* 1272d896 pop esi */
  ESI = (pop32());
  /* 1272d897 pop ebx */
  EBX = (pop32());
  /* 1272d898 mov esp, ebp */
  ESP = (EBP);
  /* 1272d89a pop ebp */
  EBP = (pop32());
  /* 1272d89b ret  */
  ESPCHK(0x1272d6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8a0 @ 0x1272d8a0 (727 bytes, 263 insns) */
void f_1272d8a0(void) {
  FTRACE(0x1272d8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272d8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272d8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1272d8a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1272d8a5 push 0x1274d388 */
  push32((uint32_t)(0x1274d388u));
  /* 1272d8aa push 0x1272e5b8 */
  push32((uint32_t)(0x1272e5b8u));
  /* 1272d8af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1272d8b5 push eax */
  push32((uint32_t)(EAX));
  /* 1272d8b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1272d8bd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d8c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1272d8c1 push esi */
  push32((uint32_t)(ESI));
  /* 1272d8c2 push edi */
  push32((uint32_t)(EDI));
  /* 1272d8c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1272d8c6 cmp dword ptr [0x12751890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d8cd jne 0x1272d926 */
  if (!C.zf) goto L_1272d926;
  /* 1272d8cf push 0 */
  push32((uint32_t)(0x0u));
  /* 1272d8d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272d8d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272d8d5 push 0x1274d370 */
  push32((uint32_t)(0x1274d370u));
  /* 1272d8da push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1272d8df push 0 */
  push32((uint32_t)(0x0u));
  /* 1272d8e1 call dword ptr [0x127542f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542f4))), 0x1272d8e7u);
  /* 1272d8e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272d8e9 je 0x1272d8f7 */
  if (C.zf) goto L_1272d8f7;
  /* 1272d8eb mov dword ptr [0x12751890], 1 */
  w32((uint32_t)(0x12751890), (0x1u));
  /* 1272d8f5 jmp 0x1272d926 */
  goto L_1272d926;
L_1272d8f7:;
  /* 1272d8f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272d8f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272d8fb push 1 */
  push32((uint32_t)(0x1u));
  /* 1272d8fd push 0x1274d36c */
  push32((uint32_t)(0x1274d36cu));
  /* 1272d902 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1272d907 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272d909 call dword ptr [0x127542f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542f8))), 0x1272d90fu);
  /* 1272d90f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272d911 je 0x1272d91f */
  if (C.zf) goto L_1272d91f;
  /* 1272d913 mov dword ptr [0x12751890], 2 */
  w32((uint32_t)(0x12751890), (0x2u));
  /* 1272d91d jmp 0x1272d926 */
  goto L_1272d926;
L_1272d91f:;
  /* 1272d91f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272d921 jmp 0x1272db91 */
  goto L_1272db91;
L_1272d926:;
  /* 1272d926 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d92a jle 0x1272d93f */
  if ((C.zf||C.sf!=C.of)) goto L_1272d93f;
  /* 1272d92c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1272d92f push eax */
  push32((uint32_t)(EAX));
  /* 1272d930 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272d933 push ecx */
  push32((uint32_t)(ECX));
  /* 1272d934 call 0x1272dbb0 */
  push32(0x1272d939u); f_1272dbb0();
  /* 1272d939 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d93c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1272d93f:;
  /* 1272d93f cmp dword ptr [0x12751890], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12751890))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d946 jne 0x1272d96b */
  if (!C.zf) goto L_1272d96b;
  /* 1272d948 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1272d94b push edx */
  push32((uint32_t)(EDX));
  /* 1272d94c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1272d94f push eax */
  push32((uint32_t)(EAX));
  /* 1272d950 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1272d953 push ecx */
  push32((uint32_t)(ECX));
  /* 1272d954 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272d957 push edx */
  push32((uint32_t)(EDX));
  /* 1272d958 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272d95b push eax */
  push32((uint32_t)(EAX));
  /* 1272d95c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272d95f push ecx */
  push32((uint32_t)(ECX));
  /* 1272d960 call dword ptr [0x127542f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542f8))), 0x1272d966u);
  /* 1272d966 jmp 0x1272db91 */
  goto L_1272db91;
L_1272d96b:;
  /* 1272d96b cmp dword ptr [0x12751890], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12751890))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d972 jne 0x1272db8f */
  if (!C.zf) goto L_1272db8f;
  /* 1272d978 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d97c jne 0x1272d987 */
  if (!C.zf) goto L_1272d987;
  /* 1272d97e mov edx, dword ptr [0x12751888] */
  EDX = (r32((uint32_t)(0x12751888)));
  /* 1272d984 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1272d987:;
  /* 1272d987 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272d989 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272d98b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1272d98e push eax */
  push32((uint32_t)(EAX));
  /* 1272d98f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272d992 push ecx */
  push32((uint32_t)(ECX));
  /* 1272d993 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1272d996 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1272d998 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272d99a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1272d99d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d9a0 push edx */
  push32((uint32_t)(EDX));
  /* 1272d9a1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1272d9a4 push eax */
  push32((uint32_t)(EAX));
  /* 1272d9a5 call dword ptr [0x12754304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754304))), 0x1272d9abu);
  /* 1272d9ab mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1272d9ae cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272d9b2 jne 0x1272d9bb */
  if (!C.zf) goto L_1272d9bb;
  /* 1272d9b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272d9b6 jmp 0x1272db91 */
  goto L_1272db91;
L_1272d9bb:;
  /* 1272d9bb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1272d9c2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1272d9c5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1272d9c7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272d9ca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1272d9cc call 0x12728650 */
  push32(0x1272d9d1u); f_12728650();
  /* 1272d9d1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1272d9d4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1272d9d7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1272d9da mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1272d9dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1272d9e4 jmp 0x1272d9fd */
  goto L_1272d9fd;
  /* 1272d9e6 mov eax, 1 */
  EAX = (0x1u);
  /* 1272d9eb ret  */
  ESPCHK(0x1272d8a0u, _esp0);
  ESP += 4; return;
  /* 1272d9ec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1272d9ef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1272d9f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1272d9fd:;
  /* 1272d9fd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272da01 jne 0x1272da0a */
  if (!C.zf) goto L_1272da0a;
  /* 1272da03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272da05 jmp 0x1272db91 */
  goto L_1272db91;
L_1272da0a:;
  /* 1272da0a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1272da0d push edx */
  push32((uint32_t)(EDX));
  /* 1272da0e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272da11 push eax */
  push32((uint32_t)(EAX));
  /* 1272da12 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1272da15 push ecx */
  push32((uint32_t)(ECX));
  /* 1272da16 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272da19 push edx */
  push32((uint32_t)(EDX));
  /* 1272da1a push 1 */
  push32((uint32_t)(0x1u));
  /* 1272da1c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1272da1f push eax */
  push32((uint32_t)(EAX));
  /* 1272da20 call dword ptr [0x12754304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754304))), 0x1272da26u);
  /* 1272da26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272da28 jne 0x1272da31 */
  if (!C.zf) goto L_1272da31;
  /* 1272da2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272da2c jmp 0x1272db91 */
  goto L_1272db91;
L_1272da31:;
  /* 1272da31 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272da33 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272da35 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1272da38 push ecx */
  push32((uint32_t)(ECX));
  /* 1272da39 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272da3c push edx */
  push32((uint32_t)(EDX));
  /* 1272da3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272da40 push eax */
  push32((uint32_t)(EAX));
  /* 1272da41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272da44 push ecx */
  push32((uint32_t)(ECX));
  /* 1272da45 call dword ptr [0x127542f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542f4))), 0x1272da4bu);
  /* 1272da4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1272da4e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272da52 jne 0x1272da5b */
  if (!C.zf) goto L_1272da5b;
  /* 1272da54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272da56 jmp 0x1272db91 */
  goto L_1272db91;
L_1272da5b:;
  /* 1272da5b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272da5e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1272da64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272da66 je 0x1272daab */
  if (C.zf) goto L_1272daab;
  /* 1272da68 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272da6c je 0x1272daa6 */
  if (C.zf) goto L_1272daa6;
  /* 1272da6e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272da71 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272da74 jle 0x1272da7d */
  if ((C.zf||C.sf!=C.of)) goto L_1272da7d;
  /* 1272da76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272da78 jmp 0x1272db91 */
  goto L_1272db91;
L_1272da7d:;
  /* 1272da7d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1272da80 push ecx */
  push32((uint32_t)(ECX));
  /* 1272da81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1272da84 push edx */
  push32((uint32_t)(EDX));
  /* 1272da85 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1272da88 push eax */
  push32((uint32_t)(EAX));
  /* 1272da89 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272da8c push ecx */
  push32((uint32_t)(ECX));
  /* 1272da8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272da90 push edx */
  push32((uint32_t)(EDX));
  /* 1272da91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272da94 push eax */
  push32((uint32_t)(EAX));
  /* 1272da95 call dword ptr [0x127542f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542f4))), 0x1272da9bu);
  /* 1272da9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272da9d jne 0x1272daa6 */
  if (!C.zf) goto L_1272daa6;
  /* 1272da9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272daa1 jmp 0x1272db91 */
  goto L_1272db91;
L_1272daa6:;
  /* 1272daa6 jmp 0x1272db8a */
  goto L_1272db8a;
L_1272daab:;
  /* 1272daab mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272daae mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1272dab1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1272dab8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272dabb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1272dabd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272dac0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1272dac2 call 0x12728650 */
  push32(0x1272dac7u); f_12728650();
  /* 1272dac7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1272daca mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1272dacd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1272dad0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1272dad3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1272dada jmp 0x1272daf3 */
  goto L_1272daf3;
  /* 1272dadc mov eax, 1 */
  EAX = (0x1u);
  /* 1272dae1 ret  */
  ESPCHK(0x1272d8a0u, _esp0);
  ESP += 4; return;
  /* 1272dae2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1272dae5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1272daec mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1272daf3:;
  /* 1272daf3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272daf7 jne 0x1272db00 */
  if (!C.zf) goto L_1272db00;
  /* 1272daf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272dafb jmp 0x1272db91 */
  goto L_1272db91;
L_1272db00:;
  /* 1272db00 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272db03 push eax */
  push32((uint32_t)(EAX));
  /* 1272db04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272db07 push ecx */
  push32((uint32_t)(ECX));
  /* 1272db08 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1272db0b push edx */
  push32((uint32_t)(EDX));
  /* 1272db0c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272db0f push eax */
  push32((uint32_t)(EAX));
  /* 1272db10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272db13 push ecx */
  push32((uint32_t)(ECX));
  /* 1272db14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272db17 push edx */
  push32((uint32_t)(EDX));
  /* 1272db18 call dword ptr [0x127542f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542f4))), 0x1272db1eu);
  /* 1272db1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272db20 jne 0x1272db26 */
  if (!C.zf) goto L_1272db26;
  /* 1272db22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272db24 jmp 0x1272db91 */
  goto L_1272db91;
L_1272db26:;
  /* 1272db26 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272db2a jne 0x1272db5a */
  if (!C.zf) goto L_1272db5a;
  /* 1272db2c push 0 */
  push32((uint32_t)(0x0u));
  /* 1272db2e push 0 */
  push32((uint32_t)(0x0u));
  /* 1272db30 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272db32 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272db34 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272db37 push eax */
  push32((uint32_t)(EAX));
  /* 1272db38 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272db3b push ecx */
  push32((uint32_t)(ECX));
  /* 1272db3c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1272db41 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1272db44 push edx */
  push32((uint32_t)(EDX));
  /* 1272db45 call dword ptr [0x127543c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543c8))), 0x1272db4bu);
  /* 1272db4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1272db4e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272db52 jne 0x1272db58 */
  if (!C.zf) goto L_1272db58;
  /* 1272db54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272db56 jmp 0x1272db91 */
  goto L_1272db91;
L_1272db58:;
  /* 1272db58 jmp 0x1272db8a */
  goto L_1272db8a;
L_1272db5a:;
  /* 1272db5a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272db5c push 0 */
  push32((uint32_t)(0x0u));
  /* 1272db5e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1272db61 push eax */
  push32((uint32_t)(EAX));
  /* 1272db62 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1272db65 push ecx */
  push32((uint32_t)(ECX));
  /* 1272db66 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1272db69 push edx */
  push32((uint32_t)(EDX));
  /* 1272db6a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1272db6d push eax */
  push32((uint32_t)(EAX));
  /* 1272db6e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1272db73 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1272db76 push ecx */
  push32((uint32_t)(ECX));
  /* 1272db77 call dword ptr [0x127543c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543c8))), 0x1272db7du);
  /* 1272db7d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1272db80 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272db84 jne 0x1272db8a */
  if (!C.zf) goto L_1272db8a;
  /* 1272db86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272db88 jmp 0x1272db91 */
  goto L_1272db91;
L_1272db8a:;
  /* 1272db8a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272db8d jmp 0x1272db91 */
  goto L_1272db91;
L_1272db8f:;
  /* 1272db8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1272db91:;
  /* 1272db91 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1272db94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272db97 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1272db9e pop edi */
  EDI = (pop32());
  /* 1272db9f pop esi */
  ESI = (pop32());
  /* 1272dba0 pop ebx */
  EBX = (pop32());
  /* 1272dba1 mov esp, ebp */
  ESP = (EBP);
  /* 1272dba3 pop ebp */
  EBP = (pop32());
  /* 1272dba4 ret  */
  ESPCHK(0x1272d8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbb0 @ 0x1272dbb0 (80 bytes, 32 insns) */
void f_1272dbb0(void) {
  FTRACE(0x1272dbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272dbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272dbb1 mov ebp, esp */
  EBP = (ESP);
  /* 1272dbb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272dbb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272dbb9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1272dbbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272dbbf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1272dbc2:;
  /* 1272dbc2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272dbc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272dbc8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272dbcb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1272dbce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272dbd0 je 0x1272dbe7 */
  if (C.zf) goto L_1272dbe7;
  /* 1272dbd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272dbd5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1272dbd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272dbda je 0x1272dbe7 */
  if (C.zf) goto L_1272dbe7;
  /* 1272dbdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272dbdf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272dbe2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272dbe5 jmp 0x1272dbc2 */
  goto L_1272dbc2;
L_1272dbe7:;
  /* 1272dbe7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272dbea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1272dbed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272dbef jne 0x1272dbf9 */
  if (!C.zf) goto L_1272dbf9;
  /* 1272dbf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272dbf4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272dbf7 jmp 0x1272dbfc */
  goto L_1272dbfc;
L_1272dbf9:;
  /* 1272dbf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1272dbfc:;
  /* 1272dbfc mov esp, ebp */
  ESP = (EBP);
  /* 1272dbfe pop ebp */
  EBP = (pop32());
  /* 1272dbff ret  */
  ESPCHK(0x1272dbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc00 @ 0x1272dc00 (130 bytes, 43 insns) */
void f_1272dc00(void) {
  FTRACE(0x1272dc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272dc00 push ebp */
  push32((uint32_t)(EBP));
  /* 1272dc01 mov ebp, esp */
  EBP = (ESP);
  /* 1272dc03 push ecx */
  push32((uint32_t)(ECX));
  /* 1272dc04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272dc07 cmp eax, dword ptr [0x1275319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1275319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272dc0d jae 0x1272dc31 */
  if (!C.cf) goto L_1272dc31;
  /* 1272dc0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272dc12 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1272dc15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272dc18 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1272dc1b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272dc1e mov eax, dword ptr [ecx*4 + 0x12753060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12753060)));
  /* 1272dc25 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1272dc2a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1272dc2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272dc2f jne 0x1272dc4c */
  if (!C.zf) goto L_1272dc4c;
L_1272dc31:;
  /* 1272dc31 call 0x1272d380 */
  push32(0x1272dc36u); f_1272d380();
  /* 1272dc36 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1272dc3c call 0x1272d390 */
  push32(0x1272dc41u); f_1272d390();
  /* 1272dc41 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1272dc47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272dc4a jmp 0x1272dc7e */
  goto L_1272dc7e;
L_1272dc4c:;
  /* 1272dc4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272dc4f push edx */
  push32((uint32_t)(EDX));
  /* 1272dc50 call 0x1272eba0 */
  push32(0x1272dc55u); f_1272eba0();
  /* 1272dc55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272dc58 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272dc5b push eax */
  push32((uint32_t)(EAX));
  /* 1272dc5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272dc5f push ecx */
  push32((uint32_t)(ECX));
  /* 1272dc60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272dc63 push edx */
  push32((uint32_t)(EDX));
  /* 1272dc64 call 0x1272dc90 */
  push32(0x1272dc69u); f_1272dc90();
  /* 1272dc69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272dc6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272dc6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272dc72 push eax */
  push32((uint32_t)(EAX));
  /* 1272dc73 call 0x1272ec30 */
  push32(0x1272dc78u); f_1272ec30();
  /* 1272dc78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272dc7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1272dc7e:;
  /* 1272dc7e mov esp, ebp */
  ESP = (EBP);
  /* 1272dc80 pop ebp */
  EBP = (pop32());
  /* 1272dc81 ret  */
  ESPCHK(0x1272dc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc90 @ 0x1272dc90 (178 bytes, 56 insns) */
void f_1272dc90(void) {
  FTRACE(0x1272dc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272dc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1272dc91 mov ebp, esp */
  EBP = (ESP);
  /* 1272dc93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272dc96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272dc99 push eax */
  push32((uint32_t)(EAX));
  /* 1272dc9a call 0x1272ea20 */
  push32(0x1272dc9fu); f_1272ea20();
  /* 1272dc9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272dca2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1272dca5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272dca9 jne 0x1272dcbe */
  if (!C.zf) goto L_1272dcbe;
  /* 1272dcab call 0x1272d380 */
  push32(0x1272dcb0u); f_1272d380();
  /* 1272dcb0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1272dcb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272dcb9 jmp 0x1272dd3e */
  goto L_1272dd3e;
L_1272dcbe:;
  /* 1272dcbe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272dcc1 push ecx */
  push32((uint32_t)(ECX));
  /* 1272dcc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272dcc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272dcc7 push edx */
  push32((uint32_t)(EDX));
  /* 1272dcc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272dccb push eax */
  push32((uint32_t)(EAX));
  /* 1272dccc call dword ptr [0x127542f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542f0))), 0x1272dcd2u);
  /* 1272dcd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1272dcd5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272dcd9 jne 0x1272dce6 */
  if (!C.zf) goto L_1272dce6;
  /* 1272dcdb call dword ptr [0x1275439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275439c))), 0x1272dce1u);
  /* 1272dce1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272dce4 jmp 0x1272dced */
  goto L_1272dced;
L_1272dce6:;
  /* 1272dce6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1272dced:;
  /* 1272dced cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272dcf1 je 0x1272dd04 */
  if (C.zf) goto L_1272dd04;
  /* 1272dcf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272dcf6 push ecx */
  push32((uint32_t)(ECX));
  /* 1272dcf7 call 0x1272d2e0 */
  push32(0x1272dcfcu); f_1272d2e0();
  /* 1272dcfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272dcff or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272dd02 jmp 0x1272dd3e */
  goto L_1272dd3e;
L_1272dd04:;
  /* 1272dd04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272dd07 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1272dd0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272dd0d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1272dd10 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272dd13 mov ecx, dword ptr [edx*4 + 0x12753060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12753060)));
  /* 1272dd1a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1272dd1e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1272dd21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272dd24 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1272dd27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272dd2a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1272dd2d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272dd30 mov eax, dword ptr [eax*4 + 0x12753060] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12753060)));
  /* 1272dd37 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1272dd3b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1272dd3e:;
  /* 1272dd3e mov esp, ebp */
  ESP = (EBP);
  /* 1272dd40 pop ebp */
  EBP = (pop32());
  /* 1272dd41 ret  */
  ESPCHK(0x1272dc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd50 @ 0x1272dd50 (130 bytes, 43 insns) */
void f_1272dd50(void) {
  FTRACE(0x1272dd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272dd50 push ebp */
  push32((uint32_t)(EBP));
  /* 1272dd51 mov ebp, esp */
  EBP = (ESP);
  /* 1272dd53 push ecx */
  push32((uint32_t)(ECX));
  /* 1272dd54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272dd57 cmp eax, dword ptr [0x1275319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1275319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272dd5d jae 0x1272dd81 */
  if (!C.cf) goto L_1272dd81;
  /* 1272dd5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272dd62 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1272dd65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272dd68 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1272dd6b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272dd6e mov eax, dword ptr [ecx*4 + 0x12753060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12753060)));
  /* 1272dd75 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1272dd7a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1272dd7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272dd7f jne 0x1272dd9c */
  if (!C.zf) goto L_1272dd9c;
L_1272dd81:;
  /* 1272dd81 call 0x1272d380 */
  push32(0x1272dd86u); f_1272d380();
  /* 1272dd86 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1272dd8c call 0x1272d390 */
  push32(0x1272dd91u); f_1272d390();
  /* 1272dd91 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1272dd97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272dd9a jmp 0x1272ddce */
  goto L_1272ddce;
L_1272dd9c:;
  /* 1272dd9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272dd9f push edx */
  push32((uint32_t)(EDX));
  /* 1272dda0 call 0x1272eba0 */
  push32(0x1272dda5u); f_1272eba0();
  /* 1272dda5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272dda8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272ddab push eax */
  push32((uint32_t)(EAX));
  /* 1272ddac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272ddaf push ecx */
  push32((uint32_t)(ECX));
  /* 1272ddb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ddb3 push edx */
  push32((uint32_t)(EDX));
  /* 1272ddb4 call 0x1272dde0 */
  push32(0x1272ddb9u); f_1272dde0();
  /* 1272ddb9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ddbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272ddbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ddc2 push eax */
  push32((uint32_t)(EAX));
  /* 1272ddc3 call 0x1272ec30 */
  push32(0x1272ddc8u); f_1272ec30();
  /* 1272ddc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ddcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1272ddce:;
  /* 1272ddce mov esp, ebp */
  ESP = (EBP);
  /* 1272ddd0 pop ebp */
  EBP = (pop32());
  /* 1272ddd1 ret  */
  ESPCHK(0x1272dd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dde0 @ 0x1272dde0 (627 bytes, 182 insns) */
void f_1272dde0(void) {
  FTRACE(0x1272dde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272dde0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272dde1 mov ebp, esp */
  EBP = (ESP);
  /* 1272dde3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272dde9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1272ddf0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272ddf3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1272ddf9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ddfd jne 0x1272de06 */
  if (!C.zf) goto L_1272de06;
  /* 1272ddff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272de01 jmp 0x1272e04f */
  goto L_1272e04f;
L_1272de06:;
  /* 1272de06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272de09 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1272de0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272de0f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1272de12 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272de15 mov eax, dword ptr [ecx*4 + 0x12753060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12753060)));
  /* 1272de1c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1272de21 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1272de24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272de26 je 0x1272de38 */
  if (C.zf) goto L_1272de38;
  /* 1272de28 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272de2a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272de2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272de2f push edx */
  push32((uint32_t)(EDX));
  /* 1272de30 call 0x1272dc90 */
  push32(0x1272de35u); f_1272dc90();
  /* 1272de35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272de38:;
  /* 1272de38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272de3b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1272de3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272de41 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1272de44 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272de47 mov edx, dword ptr [eax*4 + 0x12753060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12753060)));
  /* 1272de4e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1272de53 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1272de58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272de5a je 0x1272df6c */
  if (C.zf) goto L_1272df6c;
  /* 1272de60 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272de63 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1272de66 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1272de6d:;
  /* 1272de6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272de70 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272de73 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272de76 jae 0x1272df6a */
  if (!C.cf) goto L_1272df6a;
  /* 1272de7c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1272de82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1272de85:;
  /* 1272de85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272de88 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1272de8e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272de90 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272de96 jge 0x1272def7 */
  if ((C.sf==C.of)) goto L_1272def7;
  /* 1272de98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272de9b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272de9e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272dea1 jae 0x1272def7 */
  if (!C.cf) goto L_1272def7;
  /* 1272dea3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272dea6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1272dea8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1272deae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272deb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272deb4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272deb7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1272debe cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272dec1 jne 0x1272dee1 */
  if (!C.zf) goto L_1272dee1;
  /* 1272dec3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1272dec9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272decc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1272ded2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ded5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1272ded8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272dedb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272dede mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1272dee1:;
  /* 1272dee1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272dee4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1272deea mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1272deec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272deef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272def2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1272def5 jmp 0x1272de85 */
  goto L_1272de85;
L_1272def7:;
  /* 1272def7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272def9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1272deff push edx */
  push32((uint32_t)(EDX));
  /* 1272df00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272df03 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1272df09 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272df0b push eax */
  push32((uint32_t)(EAX));
  /* 1272df0c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1272df12 push edx */
  push32((uint32_t)(EDX));
  /* 1272df13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272df16 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1272df19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272df1c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1272df1f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272df22 mov edx, dword ptr [eax*4 + 0x12753060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12753060)));
  /* 1272df29 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1272df2c push eax */
  push32((uint32_t)(EAX));
  /* 1272df2d call dword ptr [0x12754360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754360))), 0x1272df33u);
  /* 1272df33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272df35 je 0x1272df5a */
  if (C.zf) goto L_1272df5a;
  /* 1272df37 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272df3a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272df40 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1272df43 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272df46 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1272df4c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272df4e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272df54 jge 0x1272df58 */
  if ((C.sf==C.of)) goto L_1272df58;
  /* 1272df56 jmp 0x1272df6a */
  goto L_1272df6a;
L_1272df58:;
  /* 1272df58 jmp 0x1272df65 */
  goto L_1272df65;
L_1272df5a:;
  /* 1272df5a call dword ptr [0x1275439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275439c))), 0x1272df60u);
  /* 1272df60 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1272df63 jmp 0x1272df6a */
  goto L_1272df6a;
L_1272df65:;
  /* 1272df65 jmp 0x1272de6d */
  goto L_1272de6d;
L_1272df6a:;
  /* 1272df6a jmp 0x1272dfbc */
  goto L_1272dfbc;
L_1272df6c:;
  /* 1272df6c push 0 */
  push32((uint32_t)(0x0u));
  /* 1272df6e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1272df74 push ecx */
  push32((uint32_t)(ECX));
  /* 1272df75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272df78 push edx */
  push32((uint32_t)(EDX));
  /* 1272df79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272df7c push eax */
  push32((uint32_t)(EAX));
  /* 1272df7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272df80 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1272df83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272df86 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1272df89 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272df8c mov eax, dword ptr [ecx*4 + 0x12753060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12753060)));
  /* 1272df93 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1272df96 push ecx */
  push32((uint32_t)(ECX));
  /* 1272df97 call dword ptr [0x12754360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754360))), 0x1272df9du);
  /* 1272df9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272df9f je 0x1272dfb3 */
  if (C.zf) goto L_1272dfb3;
  /* 1272dfa1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1272dfa8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1272dfae mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1272dfb1 jmp 0x1272dfbc */
  goto L_1272dfbc;
L_1272dfb3:;
  /* 1272dfb3 call dword ptr [0x1275439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275439c))), 0x1272dfb9u);
  /* 1272dfb9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1272dfbc:;
  /* 1272dfbc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272dfc0 jne 0x1272e046 */
  if (!C.zf) goto L_1272e046;
  /* 1272dfc6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272dfca je 0x1272dffa */
  if (C.zf) goto L_1272dffa;
  /* 1272dfcc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272dfd0 jne 0x1272dfe9 */
  if (!C.zf) goto L_1272dfe9;
  /* 1272dfd2 call 0x1272d380 */
  push32(0x1272dfd7u); f_1272d380();
  /* 1272dfd7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1272dfdd call 0x1272d390 */
  push32(0x1272dfe2u); f_1272d390();
  /* 1272dfe2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272dfe5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1272dfe7 jmp 0x1272dff5 */
  goto L_1272dff5;
L_1272dfe9:;
  /* 1272dfe9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272dfec push edx */
  push32((uint32_t)(EDX));
  /* 1272dfed call 0x1272d2e0 */
  push32(0x1272dff2u); f_1272d2e0();
  /* 1272dff2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272dff5:;
  /* 1272dff5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272dff8 jmp 0x1272e04f */
  goto L_1272e04f;
L_1272dffa:;
  /* 1272dffa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272dffd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1272e000 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e003 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1272e006 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272e009 mov edx, dword ptr [eax*4 + 0x12753060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12753060)));
  /* 1272e010 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1272e015 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1272e018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272e01a je 0x1272e02b */
  if (C.zf) goto L_1272e02b;
  /* 1272e01c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272e01f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1272e022 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e025 jne 0x1272e02b */
  if (!C.zf) goto L_1272e02b;
  /* 1272e027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272e029 jmp 0x1272e04f */
  goto L_1272e04f;
L_1272e02b:;
  /* 1272e02b call 0x1272d380 */
  push32(0x1272e030u); f_1272d380();
  /* 1272e030 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1272e036 call 0x1272d390 */
  push32(0x1272e03bu); f_1272d390();
  /* 1272e03b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1272e041 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272e044 jmp 0x1272e04f */
  goto L_1272e04f;
L_1272e046:;
  /* 1272e046 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272e049 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1272e04f:;
  /* 1272e04f mov esp, ebp */
  ESP = (EBP);
  /* 1272e051 pop ebp */
  EBP = (pop32());
  /* 1272e052 ret  */
  ESPCHK(0x1272dde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e060 @ 0x1272e060 (199 bytes, 68 insns) */
void f_1272e060(void) {
  FTRACE(0x1272e060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272e060 push ebp */
  push32((uint32_t)(EBP));
  /* 1272e061 mov ebp, esp */
  EBP = (ESP);
  /* 1272e063 push ecx */
  push32((uint32_t)(ECX));
  /* 1272e064 push ebx */
  push32((uint32_t)(EBX));
  /* 1272e065 push esi */
  push32((uint32_t)(ESI));
  /* 1272e066 push edi */
  push32((uint32_t)(EDI));
L_1272e067:;
  /* 1272e067 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e06b jne 0x1272e08b */
  if (!C.zf) goto L_1272e08b;
  /* 1272e06d push 0x1274d2d0 */
  push32((uint32_t)(0x1274d2d0u));
  /* 1272e072 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272e074 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1272e076 push 0x1274d3a0 */
  push32((uint32_t)(0x1274d3a0u));
  /* 1272e07b push 2 */
  push32((uint32_t)(0x2u));
  /* 1272e07d call 0x12724570 */
  push32(0x1272e082u); f_12724570();
  /* 1272e082 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e085 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e088 jne 0x1272e08b */
  if (!C.zf) goto L_1272e08b;
  /* 1272e08a int3  */
  x86_unimpl("int3 @ 0x1272e08a");
L_1272e08b:;
  /* 1272e08b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272e08d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272e08f jne 0x1272e067 */
  if (!C.zf) goto L_1272e067;
  /* 1272e091 mov ecx, dword ptr [0x12751894] */
  ECX = (r32((uint32_t)(0x12751894)));
  /* 1272e097 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e09a mov dword ptr [0x12751894], ecx */
  w32((uint32_t)(0x12751894), (ECX));
  /* 1272e0a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e0a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272e0a6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1272e0a8 push 0x1274d3a0 */
  push32((uint32_t)(0x1274d3a0u));
  /* 1272e0ad push 2 */
  push32((uint32_t)(0x2u));
  /* 1272e0af push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1272e0b4 call 0x127254b0 */
  push32(0x1272e0b9u); f_127254b0();
  /* 1272e0b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e0bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e0bf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1272e0c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e0c5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e0c9 je 0x1272e0e6 */
  if (C.zf) goto L_1272e0e6;
  /* 1272e0cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e0ce mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1272e0d1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1272e0d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e0d7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1272e0da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e0dd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1272e0e4 jmp 0x1272e10b */
  goto L_1272e10b;
L_1272e0e6:;
  /* 1272e0e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e0e9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1272e0ec or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1272e0ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e0f2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1272e0f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e0f8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e0fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e0fe mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1272e101 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e104 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1272e10b:;
  /* 1272e10b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e10e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e111 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1272e114 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1272e116 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e119 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1272e120 pop edi */
  EDI = (pop32());
  /* 1272e121 pop esi */
  ESI = (pop32());
  /* 1272e122 pop ebx */
  EBX = (pop32());
  /* 1272e123 mov esp, ebp */
  ESP = (EBP);
  /* 1272e125 pop ebp */
  EBP = (pop32());
  /* 1272e126 ret  */
  ESPCHK(0x1272e060u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1272e130 (50 bytes, 17 insns) */
void f_1272e130(void) {
  FTRACE(0x1272e130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272e130 push ebp */
  push32((uint32_t)(EBP));
  /* 1272e131 mov ebp, esp */
  EBP = (ESP);
  /* 1272e133 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e136 cmp eax, dword ptr [0x1275319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1275319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e13c jb 0x1272e142 */
  if (C.cf) goto L_1272e142;
  /* 1272e13e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272e140 jmp 0x1272e160 */
  goto L_1272e160;
L_1272e142:;
  /* 1272e142 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e145 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1272e148 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e14b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1272e14e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272e151 mov eax, dword ptr [ecx*4 + 0x12753060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12753060)));
  /* 1272e158 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1272e15d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1272e160:;
  /* 1272e160 pop ebp */
  EBP = (pop32());
  /* 1272e161 ret  */
  ESPCHK(0x1272e130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e170 @ 0x1272e170 (300 bytes, 80 insns) */
void f_1272e170(void) {
  FTRACE(0x1272e170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272e170 push ebp */
  push32((uint32_t)(EBP));
  /* 1272e171 mov ebp, esp */
  EBP = (ESP);
  /* 1272e173 push ecx */
  push32((uint32_t)(ECX));
  /* 1272e174 cmp dword ptr [0x12752d60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12752d60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e17b jne 0x1272e189 */
  if (!C.zf) goto L_1272e189;
  /* 1272e17d mov dword ptr [0x12752d60], 0x200 */
  w32((uint32_t)(0x12752d60), (0x200u));
  /* 1272e187 jmp 0x1272e19c */
  goto L_1272e19c;
L_1272e189:;
  /* 1272e189 cmp dword ptr [0x12752d60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12752d60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e190 jge 0x1272e19c */
  if ((C.sf==C.of)) goto L_1272e19c;
  /* 1272e192 mov dword ptr [0x12752d60], 0x14 */
  w32((uint32_t)(0x12752d60), (0x14u));
L_1272e19c:;
  /* 1272e19c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1272e1a1 push 0x1274d3ac */
  push32((uint32_t)(0x1274d3acu));
  /* 1272e1a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272e1a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1272e1aa mov eax, dword ptr [0x12752d60] */
  EAX = (r32((uint32_t)(0x12752d60)));
  /* 1272e1af push eax */
  push32((uint32_t)(EAX));
  /* 1272e1b0 call 0x127258c0 */
  push32(0x1272e1b5u); f_127258c0();
  /* 1272e1b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e1b8 mov dword ptr [0x12751a08], eax */
  w32((uint32_t)(0x12751a08), (EAX));
  /* 1272e1bd cmp dword ptr [0x12751a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e1c4 jne 0x1272e205 */
  if (!C.zf) goto L_1272e205;
  /* 1272e1c6 mov dword ptr [0x12752d60], 0x14 */
  w32((uint32_t)(0x12752d60), (0x14u));
  /* 1272e1d0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1272e1d5 push 0x1274d3ac */
  push32((uint32_t)(0x1274d3acu));
  /* 1272e1da push 2 */
  push32((uint32_t)(0x2u));
  /* 1272e1dc push 4 */
  push32((uint32_t)(0x4u));
  /* 1272e1de mov ecx, dword ptr [0x12752d60] */
  ECX = (r32((uint32_t)(0x12752d60)));
  /* 1272e1e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1272e1e5 call 0x127258c0 */
  push32(0x1272e1eau); f_127258c0();
  /* 1272e1ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e1ed mov dword ptr [0x12751a08], eax */
  w32((uint32_t)(0x12751a08), (EAX));
  /* 1272e1f2 cmp dword ptr [0x12751a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e1f9 jne 0x1272e205 */
  if (!C.zf) goto L_1272e205;
  /* 1272e1fb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1272e1fd call 0x12724420 */
  push32(0x1272e202u); f_12724420();
  /* 1272e202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272e205:;
  /* 1272e205 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1272e20c jmp 0x1272e217 */
  goto L_1272e217;
L_1272e20e:;
  /* 1272e20e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e211 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e214 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1272e217:;
  /* 1272e217 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e21b jge 0x1272e236 */
  if ((C.sf==C.of)) goto L_1272e236;
  /* 1272e21d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e220 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1272e223 add eax, 0x12750120 */
  { uint32_t _a=(EAX),_b=(0x12750120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e228 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e22b mov edx, dword ptr [0x12751a08] */
  EDX = (r32((uint32_t)(0x12751a08)));
  /* 1272e231 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1272e234 jmp 0x1272e20e */
  goto L_1272e20e;
L_1272e236:;
  /* 1272e236 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1272e23d jmp 0x1272e248 */
  goto L_1272e248;
L_1272e23f:;
  /* 1272e23f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e242 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e245 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1272e248:;
  /* 1272e248 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e24c jge 0x1272e298 */
  if ((C.sf==C.of)) goto L_1272e298;
  /* 1272e24e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e251 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1272e254 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e257 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1272e25a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272e25d mov eax, dword ptr [ecx*4 + 0x12753060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12753060)));
  /* 1272e264 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e268 je 0x1272e286 */
  if (C.zf) goto L_1272e286;
  /* 1272e26a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e26d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1272e270 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e273 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1272e276 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272e279 mov eax, dword ptr [ecx*4 + 0x12753060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12753060)));
  /* 1272e280 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e284 jne 0x1272e296 */
  if (!C.zf) goto L_1272e296;
L_1272e286:;
  /* 1272e286 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e289 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1272e28c mov dword ptr [ecx + 0x12750130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12750130), (0xffffffffu));
L_1272e296:;
  /* 1272e296 jmp 0x1272e23f */
  goto L_1272e23f;
L_1272e298:;
  /* 1272e298 mov esp, ebp */
  ESP = (EBP);
  /* 1272e29a pop ebp */
  EBP = (pop32());
  /* 1272e29b ret  */
  ESPCHK(0x1272e170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2a0 @ 0x1272e2a0 (26 bytes, 9 insns) */
void f_1272e2a0(void) {
  FTRACE(0x1272e2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272e2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272e2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1272e2a3 call 0x1272eea0 */
  push32(0x1272e2a8u); f_1272eea0();
  /* 1272e2a8 movsx eax, byte ptr [0x127516b0] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x127516b0))));
  /* 1272e2af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272e2b1 je 0x1272e2b8 */
  if (C.zf) goto L_1272e2b8;
  /* 1272e2b3 call 0x1272ec60 */
  push32(0x1272e2b8u); f_1272ec60();
L_1272e2b8:;
  /* 1272e2b8 pop ebp */
  EBP = (pop32());
  /* 1272e2b9 ret  */
  ESPCHK(0x1272e2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2c0 @ 0x1272e2c0 (61 bytes, 20 insns) */
void f_1272e2c0(void) {
  FTRACE(0x1272e2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272e2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272e2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1272e2c3 cmp dword ptr [ebp + 8], 0x12750120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12750120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e2ca jb 0x1272e2ee */
  if (C.cf) goto L_1272e2ee;
  /* 1272e2cc cmp dword ptr [ebp + 8], 0x12750380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12750380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e2d3 ja 0x1272e2ee */
  if ((!C.cf&&!C.zf)) goto L_1272e2ee;
  /* 1272e2d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e2d8 sub eax, 0x12750120 */
  { uint32_t _a=(EAX),_b=(0x12750120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272e2dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1272e2e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e2e3 push eax */
  push32((uint32_t)(EAX));
  /* 1272e2e4 call 0x12728eb0 */
  push32(0x1272e2e9u); f_12728eb0();
  /* 1272e2e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e2ec jmp 0x1272e2fb */
  goto L_1272e2fb;
L_1272e2ee:;
  /* 1272e2ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e2f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e2f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1272e2f5 call dword ptr [0x1275432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275432c))), 0x1272e2fbu);
L_1272e2fb:;
  /* 1272e2fb pop ebp */
  EBP = (pop32());
  /* 1272e2fc ret  */
  ESPCHK(0x1272e2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e300 @ 0x1272e300 (41 bytes, 16 insns) */
void f_1272e300(void) {
  FTRACE(0x1272e300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272e300 push ebp */
  push32((uint32_t)(EBP));
  /* 1272e301 mov ebp, esp */
  EBP = (ESP);
  /* 1272e303 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e307 jge 0x1272e31a */
  if ((C.sf==C.of)) goto L_1272e31a;
  /* 1272e309 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e30c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e30f push eax */
  push32((uint32_t)(EAX));
  /* 1272e310 call 0x12728eb0 */
  push32(0x1272e315u); f_12728eb0();
  /* 1272e315 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e318 jmp 0x1272e327 */
  goto L_1272e327;
L_1272e31a:;
  /* 1272e31a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272e31d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e320 push ecx */
  push32((uint32_t)(ECX));
  /* 1272e321 call dword ptr [0x1275432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275432c))), 0x1272e327u);
L_1272e327:;
  /* 1272e327 pop ebp */
  EBP = (pop32());
  /* 1272e328 ret  */
  ESPCHK(0x1272e300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e330 @ 0x1272e330 (61 bytes, 20 insns) */
void f_1272e330(void) {
  FTRACE(0x1272e330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272e330 push ebp */
  push32((uint32_t)(EBP));
  /* 1272e331 mov ebp, esp */
  EBP = (ESP);
  /* 1272e333 cmp dword ptr [ebp + 8], 0x12750120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12750120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e33a jb 0x1272e35e */
  if (C.cf) goto L_1272e35e;
  /* 1272e33c cmp dword ptr [ebp + 8], 0x12750380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12750380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e343 ja 0x1272e35e */
  if ((!C.cf&&!C.zf)) goto L_1272e35e;
  /* 1272e345 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e348 sub eax, 0x12750120 */
  { uint32_t _a=(EAX),_b=(0x12750120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272e34d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1272e350 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e353 push eax */
  push32((uint32_t)(EAX));
  /* 1272e354 call 0x12728f50 */
  push32(0x1272e359u); f_12728f50();
  /* 1272e359 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e35c jmp 0x1272e36b */
  goto L_1272e36b;
L_1272e35e:;
  /* 1272e35e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e361 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e364 push ecx */
  push32((uint32_t)(ECX));
  /* 1272e365 call dword ptr [0x12754328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754328))), 0x1272e36bu);
L_1272e36b:;
  /* 1272e36b pop ebp */
  EBP = (pop32());
  /* 1272e36c ret  */
  ESPCHK(0x1272e330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e370 @ 0x1272e370 (41 bytes, 16 insns) */
void f_1272e370(void) {
  FTRACE(0x1272e370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272e370 push ebp */
  push32((uint32_t)(EBP));
  /* 1272e371 mov ebp, esp */
  EBP = (ESP);
  /* 1272e373 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e377 jge 0x1272e38a */
  if ((C.sf==C.of)) goto L_1272e38a;
  /* 1272e379 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e37c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e37f push eax */
  push32((uint32_t)(EAX));
  /* 1272e380 call 0x12728f50 */
  push32(0x1272e385u); f_12728f50();
  /* 1272e385 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e388 jmp 0x1272e397 */
  goto L_1272e397;
L_1272e38a:;
  /* 1272e38a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272e38d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e390 push ecx */
  push32((uint32_t)(ECX));
  /* 1272e391 call dword ptr [0x12754328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754328))), 0x1272e397u);
L_1272e397:;
  /* 1272e397 pop ebp */
  EBP = (pop32());
  /* 1272e398 ret  */
  ESPCHK(0x1272e370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3a0 @ 0x1272e3a0 (119 bytes, 34 insns) */
void f_1272e3a0(void) {
  FTRACE(0x1272e3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272e3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272e3a1 mov ebp, esp */
  EBP = (ESP);
  /* 1272e3a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272e3a6 push 0x12751a04 */
  push32((uint32_t)(0x12751a04u));
  /* 1272e3ab call dword ptr [0x12754374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754374))), 0x1272e3b1u);
  /* 1272e3b1 cmp dword ptr [0x127519f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127519f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e3b8 je 0x1272e3d8 */
  if (C.zf) goto L_1272e3d8;
  /* 1272e3ba push 0x12751a04 */
  push32((uint32_t)(0x12751a04u));
  /* 1272e3bf call dword ptr [0x12754364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754364))), 0x1272e3c5u);
  /* 1272e3c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1272e3c7 call 0x12728eb0 */
  push32(0x1272e3ccu); f_12728eb0();
  /* 1272e3cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e3cf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1272e3d6 jmp 0x1272e3df */
  goto L_1272e3df;
L_1272e3d8:;
  /* 1272e3d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1272e3df:;
  /* 1272e3df mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1272e3e3 push eax */
  push32((uint32_t)(EAX));
  /* 1272e3e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e3e7 push ecx */
  push32((uint32_t)(ECX));
  /* 1272e3e8 call 0x1272e420 */
  push32(0x1272e3edu); f_1272e420();
  /* 1272e3ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e3f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1272e3f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e3f7 je 0x1272e405 */
  if (C.zf) goto L_1272e405;
  /* 1272e3f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1272e3fb call 0x12728f50 */
  push32(0x1272e400u); f_12728f50();
  /* 1272e400 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e403 jmp 0x1272e410 */
  goto L_1272e410;
L_1272e405:;
  /* 1272e405 push 0x12751a04 */
  push32((uint32_t)(0x12751a04u));
  /* 1272e40a call dword ptr [0x12754364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754364))), 0x1272e410u);
L_1272e410:;
  /* 1272e410 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272e413 mov esp, ebp */
  ESP = (EBP);
  /* 1272e415 pop ebp */
  EBP = (pop32());
  /* 1272e416 ret  */
  ESPCHK(0x1272e3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e420 @ 0x1272e420 (160 bytes, 50 insns) */
void f_1272e420(void) {
  FTRACE(0x1272e420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272e420 push ebp */
  push32((uint32_t)(EBP));
  /* 1272e421 mov ebp, esp */
  EBP = (ESP);
  /* 1272e423 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272e426 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e42a jne 0x1272e433 */
  if (!C.zf) goto L_1272e433;
  /* 1272e42c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272e42e jmp 0x1272e4bc */
  goto L_1272e4bc;
L_1272e433:;
  /* 1272e433 cmp dword ptr [0x12751878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e43a jne 0x1272e46a */
  if (!C.zf) goto L_1272e46a;
  /* 1272e43c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272e43f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272e444 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e449 jle 0x1272e45b */
  if ((C.zf||C.sf!=C.of)) goto L_1272e45b;
  /* 1272e44b call 0x1272d380 */
  push32(0x1272e450u); f_1272d380();
  /* 1272e450 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1272e456 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272e459 jmp 0x1272e4bc */
  goto L_1272e4bc;
L_1272e45b:;
  /* 1272e45b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e45e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1272e461 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1272e463 mov eax, 1 */
  EAX = (0x1u);
  /* 1272e468 jmp 0x1272e4bc */
  goto L_1272e4bc;
L_1272e46a:;
  /* 1272e46a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1272e471 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1272e474 push eax */
  push32((uint32_t)(EAX));
  /* 1272e475 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272e477 mov ecx, dword ptr [0x1274fea4] */
  ECX = (r32((uint32_t)(0x1274fea4)));
  /* 1272e47d push ecx */
  push32((uint32_t)(ECX));
  /* 1272e47e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e481 push edx */
  push32((uint32_t)(EDX));
  /* 1272e482 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272e484 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1272e487 push eax */
  push32((uint32_t)(EAX));
  /* 1272e488 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1272e48d mov ecx, dword ptr [0x12751888] */
  ECX = (r32((uint32_t)(0x12751888)));
  /* 1272e493 push ecx */
  push32((uint32_t)(ECX));
  /* 1272e494 call dword ptr [0x127543c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543c8))), 0x1272e49au);
  /* 1272e49a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272e49d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e4a1 je 0x1272e4a9 */
  if (C.zf) goto L_1272e4a9;
  /* 1272e4a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e4a7 je 0x1272e4b9 */
  if (C.zf) goto L_1272e4b9;
L_1272e4a9:;
  /* 1272e4a9 call 0x1272d380 */
  push32(0x1272e4aeu); f_1272d380();
  /* 1272e4ae mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1272e4b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272e4b7 jmp 0x1272e4bc */
  goto L_1272e4bc;
L_1272e4b9:;
  /* 1272e4b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1272e4bc:;
  /* 1272e4bc mov esp, ebp */
  ESP = (EBP);
  /* 1272e4be pop ebp */
  EBP = (pop32());
  /* 1272e4bf ret  */
  ESPCHK(0x1272e420u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1272e4c0 (32 bytes, 18 insns) */
void f_1272e4c0(void) {
  FTRACE(0x1272e4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272e4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272e4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1272e4c3 push ebx */
  push32((uint32_t)(EBX));
  /* 1272e4c4 push esi */
  push32((uint32_t)(ESI));
  /* 1272e4c5 push edi */
  push32((uint32_t)(EDI));
  /* 1272e4c6 push ebp */
  push32((uint32_t)(EBP));
  /* 1272e4c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272e4c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272e4cb push 0x1272e4d8 */
  push32((uint32_t)(0x1272e4d8u));
  /* 1272e4d0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1272e4d3 call 0x12735c0c */
  push32(0x1272e4d8u); f_12735c0c();
  /* 1272e4d8 pop ebp */
  EBP = (pop32());
  /* 1272e4d9 pop edi */
  EDI = (pop32());
  /* 1272e4da pop esi */
  ESI = (pop32());
  /* 1272e4db pop ebx */
  EBX = (pop32());
  /* 1272e4dc mov esp, ebp */
  ESP = (EBP);
  /* 1272e4de pop ebp */
  EBP = (pop32());
  /* 1272e4df ret  */
  ESPCHK(0x1272e4c0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1272e502 (104 bytes, 33 insns) */
void f_1272e502(void) {
  FTRACE(0x1272e502u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272e502 push ebx */
  push32((uint32_t)(EBX));
  /* 1272e503 push esi */
  push32((uint32_t)(ESI));
  /* 1272e504 push edi */
  push32((uint32_t)(EDI));
  /* 1272e505 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1272e509 push eax */
  push32((uint32_t)(EAX));
  /* 1272e50a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1272e50c push 0x1272e4e0 */
  push32((uint32_t)(0x1272e4e0u));
  /* 1272e511 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1272e518 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1272e51f:;
  /* 1272e51f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1272e523 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1272e526 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1272e529 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e52c je 0x1272e55c */
  if (C.zf) goto L_1272e55c;
  /* 1272e52e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e532 je 0x1272e55c */
  if (C.zf) goto L_1272e55c;
  /* 1272e534 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1272e537 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1272e53a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1272e53e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1272e541 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e546 jne 0x1272e55a */
  if (!C.zf) goto L_1272e55a;
  /* 1272e548 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1272e54d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1272e551 call 0x1272e596 */
  push32(0x1272e556u); f_1272e596();
  /* 1272e556 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1272e55au);
L_1272e55a:;
  /* 1272e55a jmp 0x1272e51f */
  goto L_1272e51f;
L_1272e55c:;
  /* 1272e55c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1272e563 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e566 pop edi */
  EDI = (pop32());
  /* 1272e567 pop esi */
  ESI = (pop32());
  /* 1272e568 pop ebx */
  EBX = (pop32());
  /* 1272e569 ret  */
  ESPCHK(0x1272e502u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e596 @ 0x1272e596 (24 bytes, 10 insns) */
void f_1272e596(void) {
  FTRACE(0x1272e596u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272e596 push ebx */
  push32((uint32_t)(EBX));
  /* 1272e597 push ecx */
  push32((uint32_t)(ECX));
  /* 1272e598 mov ebx, 0x127503b8 */
  EBX = (0x127503b8u);
  /* 1272e59d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e5a0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1272e5a3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1272e5a6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1272e5a9 pop ecx */
  ECX = (pop32());
  /* 1272e5aa pop ebx */
  EBX = (pop32());
  /* 1272e5ab ret 4 */
  ESPCHK(0x1272e596u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e675 @ 0x1272e675 (27 bytes, 11 insns) */
void f_1272e675(void) {
  FTRACE(0x1272e675u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272e675 push ebp */
  push32((uint32_t)(EBP));
  /* 1272e676 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1272e67a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1272e67c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1272e67f push eax */
  push32((uint32_t)(EAX));
  /* 1272e680 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1272e683 push eax */
  push32((uint32_t)(EAX));
  /* 1272e684 call 0x1272e502 */
  push32(0x1272e689u); f_1272e502();
  /* 1272e689 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e68c pop ebp */
  EBP = (pop32());
  /* 1272e68d ret 4 */
  ESPCHK(0x1272e675u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e690 @ 0x1272e690 (482 bytes, 138 insns) */
void f_1272e690(void) {
  FTRACE(0x1272e690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272e690 push ebp */
  push32((uint32_t)(EBP));
  /* 1272e691 mov ebp, esp */
  EBP = (ESP);
  /* 1272e693 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272e696 push esi */
  push32((uint32_t)(ESI));
  /* 1272e697 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1272e69e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1272e6a0 call 0x12728eb0 */
  push32(0x1272e6a5u); f_12728eb0();
  /* 1272e6a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e6a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1272e6af jmp 0x1272e6ba */
  goto L_1272e6ba;
L_1272e6b1:;
  /* 1272e6b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272e6b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e6b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1272e6ba:;
  /* 1272e6ba cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e6be jge 0x1272e860 */
  if ((C.sf==C.of)) goto L_1272e860;
  /* 1272e6c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272e6c7 cmp dword ptr [ecx*4 + 0x12753060], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12753060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e6cf je 0x1272e7c6 */
  if (C.zf) goto L_1272e7c6;
  /* 1272e6d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272e6d8 mov eax, dword ptr [edx*4 + 0x12753060] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12753060)));
  /* 1272e6df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272e6e2 jmp 0x1272e6ed */
  goto L_1272e6ed;
L_1272e6e4:;
  /* 1272e6e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e6e7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e6ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1272e6ed:;
  /* 1272e6ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272e6f0 mov eax, dword ptr [edx*4 + 0x12753060] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12753060)));
  /* 1272e6f7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e6fc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e6ff jae 0x1272e7b6 */
  if (!C.cf) goto L_1272e7b6;
  /* 1272e705 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e708 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1272e70c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1272e70f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272e711 jne 0x1272e7b1 */
  if (!C.zf) goto L_1272e7b1;
  /* 1272e717 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e71a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e71e jne 0x1272e759 */
  if (!C.zf) goto L_1272e759;
  /* 1272e720 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1272e722 call 0x12728eb0 */
  push32(0x1272e727u); f_12728eb0();
  /* 1272e727 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e72a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e72d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e731 jne 0x1272e74f */
  if (!C.zf) goto L_1272e74f;
  /* 1272e733 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e736 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e739 push edx */
  push32((uint32_t)(EDX));
  /* 1272e73a call dword ptr [0x12754330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754330))), 0x1272e740u);
  /* 1272e740 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e743 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1272e746 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e749 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e74c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1272e74f:;
  /* 1272e74f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1272e751 call 0x12728f50 */
  push32(0x1272e756u); f_12728f50();
  /* 1272e756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272e759:;
  /* 1272e759 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e75c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e75f push eax */
  push32((uint32_t)(EAX));
  /* 1272e760 call dword ptr [0x1275432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275432c))), 0x1272e766u);
  /* 1272e766 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e769 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1272e76d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1272e770 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272e772 je 0x1272e786 */
  if (C.zf) goto L_1272e786;
  /* 1272e774 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e777 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e77a push eax */
  push32((uint32_t)(EAX));
  /* 1272e77b call dword ptr [0x12754328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754328))), 0x1272e781u);
  /* 1272e781 jmp 0x1272e6e4 */
  goto L_1272e6e4;
L_1272e786:;
  /* 1272e786 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e789 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1272e78f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272e792 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1272e795 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272e798 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e79b sub eax, dword ptr [edx*4 + 0x12753060] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12753060))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272e7a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1272e7a3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1272e7a8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1272e7aa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e7ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1272e7af jmp 0x1272e7b6 */
  goto L_1272e7b6;
L_1272e7b1:;
  /* 1272e7b1 jmp 0x1272e6e4 */
  goto L_1272e6e4;
L_1272e7b6:;
  /* 1272e7b6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e7ba je 0x1272e7c1 */
  if (C.zf) goto L_1272e7c1;
  /* 1272e7bc jmp 0x1272e860 */
  goto L_1272e860;
L_1272e7c1:;
  /* 1272e7c1 jmp 0x1272e85b */
  goto L_1272e85b;
L_1272e7c6:;
  /* 1272e7c6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1272e7c8 push 0x1274d3b4 */
  push32((uint32_t)(0x1274d3b4u));
  /* 1272e7cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1272e7cf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1272e7d4 call 0x127254b0 */
  push32(0x1272e7d9u); f_127254b0();
  /* 1272e7d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e7dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272e7df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e7e3 je 0x1272e859 */
  if (C.zf) goto L_1272e859;
  /* 1272e7e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272e7e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e7eb mov dword ptr [eax*4 + 0x12753060], ecx */
  w32((uint32_t)(EAX*4 + 0x12753060), (ECX));
  /* 1272e7f2 mov edx, dword ptr [0x1275319c] */
  EDX = (r32((uint32_t)(0x1275319c)));
  /* 1272e7f8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e7fb mov dword ptr [0x1275319c], edx */
  w32((uint32_t)(0x1275319c), (EDX));
  /* 1272e801 jmp 0x1272e80c */
  goto L_1272e80c;
L_1272e803:;
  /* 1272e803 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e806 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e809 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1272e80c:;
  /* 1272e80c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272e80f mov edx, dword ptr [ecx*4 + 0x12753060] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12753060)));
  /* 1272e816 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e81c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e81f jae 0x1272e844 */
  if (!C.cf) goto L_1272e844;
  /* 1272e821 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e824 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1272e828 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e82b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1272e831 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e834 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1272e838 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272e83b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1272e842 jmp 0x1272e803 */
  goto L_1272e803;
L_1272e844:;
  /* 1272e844 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272e847 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1272e84a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1272e84d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272e850 push edx */
  push32((uint32_t)(EDX));
  /* 1272e851 call 0x1272eba0 */
  push32(0x1272e856u); f_1272eba0();
  /* 1272e856 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272e859:;
  /* 1272e859 jmp 0x1272e860 */
  goto L_1272e860;
L_1272e85b:;
  /* 1272e85b jmp 0x1272e6b1 */
  goto L_1272e6b1;
L_1272e860:;
  /* 1272e860 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1272e862 call 0x12728f50 */
  push32(0x1272e867u); f_12728f50();
  /* 1272e867 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272e86a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272e86d pop esi */
  ESI = (pop32());
  /* 1272e86e mov esp, ebp */
  ESP = (EBP);
  /* 1272e870 pop ebp */
  EBP = (pop32());
  /* 1272e871 ret  */
  ESPCHK(0x1272e690u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1272e880 (183 bytes, 57 insns) */
void f_1272e880(void) {
  FTRACE(0x1272e880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272e880 push ebp */
  push32((uint32_t)(EBP));
  /* 1272e881 mov ebp, esp */
  EBP = (ESP);
  /* 1272e883 push ecx */
  push32((uint32_t)(ECX));
  /* 1272e884 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e887 cmp eax, dword ptr [0x1275319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1275319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e88d jae 0x1272e91a */
  if (!C.cf) goto L_1272e91a;
  /* 1272e893 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e896 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1272e899 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e89c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1272e89f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272e8a2 mov eax, dword ptr [ecx*4 + 0x12753060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12753060)));
  /* 1272e8a9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e8ad jne 0x1272e91a */
  if (!C.zf) goto L_1272e91a;
  /* 1272e8af cmp dword ptr [0x12751670], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12751670))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e8b6 jne 0x1272e8fa */
  if (!C.zf) goto L_1272e8fa;
  /* 1272e8b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e8bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1272e8be cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e8c2 je 0x1272e8d2 */
  if (C.zf) goto L_1272e8d2;
  /* 1272e8c4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e8c8 je 0x1272e8e0 */
  if (C.zf) goto L_1272e8e0;
  /* 1272e8ca cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e8ce je 0x1272e8ee */
  if (C.zf) goto L_1272e8ee;
  /* 1272e8d0 jmp 0x1272e8fa */
  goto L_1272e8fa;
L_1272e8d2:;
  /* 1272e8d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272e8d5 push edx */
  push32((uint32_t)(EDX));
  /* 1272e8d6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1272e8d8 call dword ptr [0x127542e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542e8))), 0x1272e8deu);
  /* 1272e8de jmp 0x1272e8fa */
  goto L_1272e8fa;
L_1272e8e0:;
  /* 1272e8e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272e8e3 push eax */
  push32((uint32_t)(EAX));
  /* 1272e8e4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1272e8e6 call dword ptr [0x127542e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542e8))), 0x1272e8ecu);
  /* 1272e8ec jmp 0x1272e8fa */
  goto L_1272e8fa;
L_1272e8ee:;
  /* 1272e8ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272e8f1 push ecx */
  push32((uint32_t)(ECX));
  /* 1272e8f2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1272e8f4 call dword ptr [0x127542e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542e8))), 0x1272e8fau);
L_1272e8fa:;
  /* 1272e8fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e8fd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1272e900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e903 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1272e906 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272e909 mov ecx, dword ptr [edx*4 + 0x12753060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12753060)));
  /* 1272e910 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272e913 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1272e916 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272e918 jmp 0x1272e933 */
  goto L_1272e933;
L_1272e91a:;
  /* 1272e91a call 0x1272d380 */
  push32(0x1272e91fu); f_1272d380();
  /* 1272e91f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1272e925 call 0x1272d390 */
  push32(0x1272e92au); f_1272d390();
  /* 1272e92a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1272e930 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1272e933:;
  /* 1272e933 mov esp, ebp */
  ESP = (EBP);
  /* 1272e935 pop ebp */
  EBP = (pop32());
  /* 1272e936 ret  */
  ESPCHK(0x1272e880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e940 @ 0x1272e940 (216 bytes, 63 insns) */
void f_1272e940(void) {
  FTRACE(0x1272e940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272e940 push ebp */
  push32((uint32_t)(EBP));
  /* 1272e941 mov ebp, esp */
  EBP = (ESP);
  /* 1272e943 push ecx */
  push32((uint32_t)(ECX));
  /* 1272e944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e947 cmp eax, dword ptr [0x1275319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1275319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e94d jae 0x1272e9fb */
  if (!C.cf) goto L_1272e9fb;
  /* 1272e953 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e956 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1272e959 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e95c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1272e95f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272e962 mov eax, dword ptr [ecx*4 + 0x12753060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12753060)));
  /* 1272e969 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1272e96e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1272e971 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272e973 je 0x1272e9fb */
  if (C.zf) goto L_1272e9fb;
  /* 1272e979 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e97c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1272e97f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e982 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1272e985 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272e988 mov ecx, dword ptr [edx*4 + 0x12753060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12753060)));
  /* 1272e98f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e993 je 0x1272e9fb */
  if (C.zf) goto L_1272e9fb;
  /* 1272e995 cmp dword ptr [0x12751670], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12751670))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e99c jne 0x1272e9da */
  if (!C.zf) goto L_1272e9da;
  /* 1272e99e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e9a1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272e9a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e9a8 je 0x1272e9b8 */
  if (C.zf) goto L_1272e9b8;
  /* 1272e9aa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e9ae je 0x1272e9c4 */
  if (C.zf) goto L_1272e9c4;
  /* 1272e9b0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272e9b4 je 0x1272e9d0 */
  if (C.zf) goto L_1272e9d0;
  /* 1272e9b6 jmp 0x1272e9da */
  goto L_1272e9da;
L_1272e9b8:;
  /* 1272e9b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272e9ba push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1272e9bc call dword ptr [0x127542e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542e8))), 0x1272e9c2u);
  /* 1272e9c2 jmp 0x1272e9da */
  goto L_1272e9da;
L_1272e9c4:;
  /* 1272e9c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272e9c6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1272e9c8 call dword ptr [0x127542e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542e8))), 0x1272e9ceu);
  /* 1272e9ce jmp 0x1272e9da */
  goto L_1272e9da;
L_1272e9d0:;
  /* 1272e9d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272e9d2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1272e9d4 call dword ptr [0x127542e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542e8))), 0x1272e9dau);
L_1272e9da:;
  /* 1272e9da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e9dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1272e9e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272e9e3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1272e9e6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272e9e9 mov edx, dword ptr [eax*4 + 0x12753060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12753060)));
  /* 1272e9f0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1272e9f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272e9f9 jmp 0x1272ea14 */
  goto L_1272ea14;
L_1272e9fb:;
  /* 1272e9fb call 0x1272d380 */
  push32(0x1272ea00u); f_1272d380();
  /* 1272ea00 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1272ea06 call 0x1272d390 */
  push32(0x1272ea0bu); f_1272d390();
  /* 1272ea0b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1272ea11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1272ea14:;
  /* 1272ea14 mov esp, ebp */
  ESP = (EBP);
  /* 1272ea16 pop ebp */
  EBP = (pop32());
  /* 1272ea17 ret  */
  ESPCHK(0x1272e940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea20 @ 0x1272ea20 (102 bytes, 30 insns) */
void f_1272ea20(void) {
  FTRACE(0x1272ea20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272ea20 push ebp */
  push32((uint32_t)(EBP));
  /* 1272ea21 mov ebp, esp */
  EBP = (ESP);
  /* 1272ea23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ea26 cmp eax, dword ptr [0x1275319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1275319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ea2c jae 0x1272ea6b */
  if (!C.cf) goto L_1272ea6b;
  /* 1272ea2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ea31 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1272ea34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ea37 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1272ea3a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272ea3d mov eax, dword ptr [ecx*4 + 0x12753060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12753060)));
  /* 1272ea44 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1272ea49 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1272ea4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272ea4e je 0x1272ea6b */
  if (C.zf) goto L_1272ea6b;
  /* 1272ea50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ea53 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1272ea56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ea59 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1272ea5c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272ea5f mov ecx, dword ptr [edx*4 + 0x12753060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12753060)));
  /* 1272ea66 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1272ea69 jmp 0x1272ea84 */
  goto L_1272ea84;
L_1272ea6b:;
  /* 1272ea6b call 0x1272d380 */
  push32(0x1272ea70u); f_1272d380();
  /* 1272ea70 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1272ea76 call 0x1272d390 */
  push32(0x1272ea7bu); f_1272d390();
  /* 1272ea7b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1272ea81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1272ea84:;
  /* 1272ea84 pop ebp */
  EBP = (pop32());
  /* 1272ea85 ret  */
  ESPCHK(0x1272ea20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea90 @ 0x1272ea90 (260 bytes, 83 insns) */
void f_1272ea90(void) {
  FTRACE(0x1272ea90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272ea90 push ebp */
  push32((uint32_t)(EBP));
  /* 1272ea91 mov ebp, esp */
  EBP = (ESP);
  /* 1272ea93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272ea96 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1272ea9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272ea9d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1272eaa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272eaa2 je 0x1272eaad */
  if (C.zf) goto L_1272eaad;
  /* 1272eaa4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1272eaa7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1272eaaa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1272eaad:;
  /* 1272eaad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272eab0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1272eab6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272eab8 je 0x1272eac2 */
  if (C.zf) goto L_1272eac2;
  /* 1272eaba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1272eabd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1272eabf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1272eac2:;
  /* 1272eac2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272eac5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1272eacb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272eacd je 0x1272ead8 */
  if (C.zf) goto L_1272ead8;
  /* 1272eacf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1272ead2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1272ead5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1272ead8:;
  /* 1272ead8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272eadb push eax */
  push32((uint32_t)(EAX));
  /* 1272eadc call dword ptr [0x127543a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543a8))), 0x1272eae2u);
  /* 1272eae2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272eae5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272eae9 jne 0x1272eb02 */
  if (!C.zf) goto L_1272eb02;
  /* 1272eaeb call dword ptr [0x1275439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275439c))), 0x1272eaf1u);
  /* 1272eaf1 push eax */
  push32((uint32_t)(EAX));
  /* 1272eaf2 call 0x1272d2e0 */
  push32(0x1272eaf7u); f_1272d2e0();
  /* 1272eaf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272eafa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272eafd jmp 0x1272eb90 */
  goto L_1272eb90;
L_1272eb02:;
  /* 1272eb02 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272eb06 jne 0x1272eb13 */
  if (!C.zf) goto L_1272eb13;
  /* 1272eb08 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1272eb0b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1272eb0e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1272eb11 jmp 0x1272eb22 */
  goto L_1272eb22;
L_1272eb13:;
  /* 1272eb13 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272eb17 jne 0x1272eb22 */
  if (!C.zf) goto L_1272eb22;
  /* 1272eb19 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1272eb1c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1272eb1f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1272eb22:;
  /* 1272eb22 call 0x1272e690 */
  push32(0x1272eb27u); f_1272e690();
  /* 1272eb27 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1272eb2a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272eb2e jne 0x1272eb4b */
  if (!C.zf) goto L_1272eb4b;
  /* 1272eb30 call 0x1272d380 */
  push32(0x1272eb35u); f_1272d380();
  /* 1272eb35 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1272eb3b call 0x1272d390 */
  push32(0x1272eb40u); f_1272d390();
  /* 1272eb40 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1272eb46 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272eb49 jmp 0x1272eb90 */
  goto L_1272eb90;
L_1272eb4b:;
  /* 1272eb4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272eb4e push eax */
  push32((uint32_t)(EAX));
  /* 1272eb4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272eb52 push ecx */
  push32((uint32_t)(ECX));
  /* 1272eb53 call 0x1272e880 */
  push32(0x1272eb58u); f_1272e880();
  /* 1272eb58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272eb5b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1272eb5e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1272eb61 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1272eb64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272eb67 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1272eb6a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272eb6d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1272eb70 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272eb73 mov edx, dword ptr [eax*4 + 0x12753060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12753060)));
  /* 1272eb7a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1272eb7d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1272eb81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272eb84 push ecx */
  push32((uint32_t)(ECX));
  /* 1272eb85 call 0x1272ec30 */
  push32(0x1272eb8au); f_1272ec30();
  /* 1272eb8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272eb8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1272eb90:;
  /* 1272eb90 mov esp, ebp */
  ESP = (EBP);
  /* 1272eb92 pop ebp */
  EBP = (pop32());
  /* 1272eb93 ret  */
  ESPCHK(0x1272ea90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eba0 @ 0x1272eba0 (134 bytes, 44 insns) */
void f_1272eba0(void) {
  FTRACE(0x1272eba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272eba0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272eba1 mov ebp, esp */
  EBP = (ESP);
  /* 1272eba3 push ecx */
  push32((uint32_t)(ECX));
  /* 1272eba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272eba7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1272ebaa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ebad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1272ebb0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272ebb3 mov edx, dword ptr [eax*4 + 0x12753060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12753060)));
  /* 1272ebba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ebbc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272ebbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ebc2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ebc6 jne 0x1272ec01 */
  if (!C.zf) goto L_1272ec01;
  /* 1272ebc8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1272ebca call 0x12728eb0 */
  push32(0x1272ebcfu); f_12728eb0();
  /* 1272ebcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ebd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ebd5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ebd9 jne 0x1272ebf7 */
  if (!C.zf) goto L_1272ebf7;
  /* 1272ebdb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ebde add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ebe1 push edx */
  push32((uint32_t)(EDX));
  /* 1272ebe2 call dword ptr [0x12754330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754330))), 0x1272ebe8u);
  /* 1272ebe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ebeb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1272ebee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ebf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ebf4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1272ebf7:;
  /* 1272ebf7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1272ebf9 call 0x12728f50 */
  push32(0x1272ebfeu); f_12728f50();
  /* 1272ebfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272ec01:;
  /* 1272ec01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ec04 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1272ec07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ec0a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1272ec0d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272ec10 mov edx, dword ptr [eax*4 + 0x12753060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12753060)));
  /* 1272ec17 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1272ec1b push eax */
  push32((uint32_t)(EAX));
  /* 1272ec1c call dword ptr [0x1275432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275432c))), 0x1272ec22u);
  /* 1272ec22 mov esp, ebp */
  ESP = (EBP);
  /* 1272ec24 pop ebp */
  EBP = (pop32());
  /* 1272ec25 ret  */
  ESPCHK(0x1272eba0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1272ec30 (38 bytes, 13 insns) */
void f_1272ec30(void) {
  FTRACE(0x1272ec30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272ec30 push ebp */
  push32((uint32_t)(EBP));
  /* 1272ec31 mov ebp, esp */
  EBP = (ESP);
  /* 1272ec33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ec36 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1272ec39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ec3c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1272ec3f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272ec42 mov edx, dword ptr [eax*4 + 0x12753060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12753060)));
  /* 1272ec49 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1272ec4d push eax */
  push32((uint32_t)(EAX));
  /* 1272ec4e call dword ptr [0x12754328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754328))), 0x1272ec54u);
  /* 1272ec54 pop ebp */
  EBP = (pop32());
  /* 1272ec55 ret  */
  ESPCHK(0x1272ec30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec60 @ 0x1272ec60 (218 bytes, 63 insns) */
void f_1272ec60(void) {
  FTRACE(0x1272ec60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272ec60 push ebp */
  push32((uint32_t)(EBP));
  /* 1272ec61 mov ebp, esp */
  EBP = (ESP);
  /* 1272ec63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272ec66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1272ec6d push 2 */
  push32((uint32_t)(0x2u));
  /* 1272ec6f call 0x12728eb0 */
  push32(0x1272ec74u); f_12728eb0();
  /* 1272ec74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ec77 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1272ec7e jmp 0x1272ec89 */
  goto L_1272ec89;
L_1272ec80:;
  /* 1272ec80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ec83 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ec86 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1272ec89:;
  /* 1272ec89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ec8c cmp ecx, dword ptr [0x12752d60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12752d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ec92 jge 0x1272ed29 */
  if ((C.sf==C.of)) goto L_1272ed29;
  /* 1272ec98 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ec9b mov eax, dword ptr [0x12751a08] */
  EAX = (r32((uint32_t)(0x12751a08)));
  /* 1272eca0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272eca4 je 0x1272ed24 */
  if (C.zf) goto L_1272ed24;
  /* 1272eca6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272eca9 mov edx, dword ptr [0x12751a08] */
  EDX = (r32((uint32_t)(0x12751a08)));
  /* 1272ecaf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1272ecb2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1272ecb5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1272ecbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272ecbd je 0x1272ece1 */
  if (C.zf) goto L_1272ece1;
  /* 1272ecbf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ecc2 mov eax, dword ptr [0x12751a08] */
  EAX = (r32((uint32_t)(0x12751a08)));
  /* 1272ecc7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1272ecca push ecx */
  push32((uint32_t)(ECX));
  /* 1272eccb call 0x1272fa50 */
  push32(0x1272ecd0u); f_1272fa50();
  /* 1272ecd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ecd3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ecd6 je 0x1272ece1 */
  if (C.zf) goto L_1272ece1;
  /* 1272ecd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ecdb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ecde mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1272ece1:;
  /* 1272ece1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ece5 jl 0x1272ed24 */
  if ((C.sf!=C.of)) goto L_1272ed24;
  /* 1272ece7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ecea mov ecx, dword ptr [0x12751a08] */
  ECX = (r32((uint32_t)(0x12751a08)));
  /* 1272ecf0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1272ecf3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ecf6 push edx */
  push32((uint32_t)(EDX));
  /* 1272ecf7 call dword ptr [0x127543b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543b0))), 0x1272ecfdu);
  /* 1272ecfd push 2 */
  push32((uint32_t)(0x2u));
  /* 1272ecff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ed02 mov ecx, dword ptr [0x12751a08] */
  ECX = (r32((uint32_t)(0x12751a08)));
  /* 1272ed08 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1272ed0b push edx */
  push32((uint32_t)(EDX));
  /* 1272ed0c call 0x12725f40 */
  push32(0x1272ed11u); f_12725f40();
  /* 1272ed11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ed14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ed17 mov ecx, dword ptr [0x12751a08] */
  ECX = (r32((uint32_t)(0x12751a08)));
  /* 1272ed1d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1272ed24:;
  /* 1272ed24 jmp 0x1272ec80 */
  goto L_1272ec80;
L_1272ed29:;
  /* 1272ed29 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272ed2b call 0x12728f50 */
  push32(0x1272ed30u); f_12728f50();
  /* 1272ed30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ed33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ed36 mov esp, ebp */
  ESP = (EBP);
  /* 1272ed38 pop ebp */
  EBP = (pop32());
  /* 1272ed39 ret  */
  ESPCHK(0x1272ec60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed40 @ 0x1272ed40 (68 bytes, 26 insns) */
void f_1272ed40(void) {
  FTRACE(0x1272ed40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272ed40 push ebp */
  push32((uint32_t)(EBP));
  /* 1272ed41 mov ebp, esp */
  EBP = (ESP);
  /* 1272ed43 push ecx */
  push32((uint32_t)(ECX));
  /* 1272ed44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ed48 jne 0x1272ed56 */
  if (!C.zf) goto L_1272ed56;
  /* 1272ed4a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272ed4c call 0x1272eeb0 */
  push32(0x1272ed51u); f_1272eeb0();
  /* 1272ed51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ed54 jmp 0x1272ed80 */
  goto L_1272ed80;
L_1272ed56:;
  /* 1272ed56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ed59 push eax */
  push32((uint32_t)(EAX));
  /* 1272ed5a call 0x1272e2c0 */
  push32(0x1272ed5fu); f_1272e2c0();
  /* 1272ed5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ed62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ed65 push ecx */
  push32((uint32_t)(ECX));
  /* 1272ed66 call 0x1272ed90 */
  push32(0x1272ed6bu); f_1272ed90();
  /* 1272ed6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ed6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272ed71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ed74 push edx */
  push32((uint32_t)(EDX));
  /* 1272ed75 call 0x1272e330 */
  push32(0x1272ed7au); f_1272e330();
  /* 1272ed7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ed7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1272ed80:;
  /* 1272ed80 mov esp, ebp */
  ESP = (EBP);
  /* 1272ed82 pop ebp */
  EBP = (pop32());
  /* 1272ed83 ret  */
  ESPCHK(0x1272ed40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed90 @ 0x1272ed90 (65 bytes, 26 insns) */
void f_1272ed90(void) {
  FTRACE(0x1272ed90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272ed90 push ebp */
  push32((uint32_t)(EBP));
  /* 1272ed91 mov ebp, esp */
  EBP = (ESP);
  /* 1272ed93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ed96 push eax */
  push32((uint32_t)(EAX));
  /* 1272ed97 call 0x1272ede0 */
  push32(0x1272ed9cu); f_1272ede0();
  /* 1272ed9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ed9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272eda1 je 0x1272eda8 */
  if (C.zf) goto L_1272eda8;
  /* 1272eda3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272eda6 jmp 0x1272edcf */
  goto L_1272edcf;
L_1272eda8:;
  /* 1272eda8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272edab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1272edae and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1272edb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272edb6 je 0x1272edcd */
  if (C.zf) goto L_1272edcd;
  /* 1272edb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272edbb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1272edbe push ecx */
  push32((uint32_t)(ECX));
  /* 1272edbf call 0x1272fba0 */
  push32(0x1272edc4u); f_1272fba0();
  /* 1272edc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272edc7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1272edc9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272edcb jmp 0x1272edcf */
  goto L_1272edcf;
L_1272edcd:;
  /* 1272edcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1272edcf:;
  /* 1272edcf pop ebp */
  EBP = (pop32());
  /* 1272edd0 ret  */
  ESPCHK(0x1272ed90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ede0 @ 0x1272ede0 (183 bytes, 62 insns) */
void f_1272ede0(void) {
  FTRACE(0x1272ede0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272ede0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272ede1 mov ebp, esp */
  EBP = (ESP);
  /* 1272ede3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272ede6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1272eded mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272edf0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1272edf3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272edf6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1272edf9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1272edfc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272edff jne 0x1272ee7b */
  if (!C.zf) goto L_1272ee7b;
  /* 1272ee01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ee04 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1272ee07 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1272ee0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272ee0f je 0x1272ee7b */
  if (C.zf) goto L_1272ee7b;
  /* 1272ee11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ee14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ee17 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1272ee19 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272ee1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272ee1f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ee23 jle 0x1272ee7b */
  if ((C.zf||C.sf!=C.of)) goto L_1272ee7b;
  /* 1272ee25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272ee28 push edx */
  push32((uint32_t)(EDX));
  /* 1272ee29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ee2c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1272ee2f push ecx */
  push32((uint32_t)(ECX));
  /* 1272ee30 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ee33 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1272ee36 push eax */
  push32((uint32_t)(EAX));
  /* 1272ee37 call 0x1272dd50 */
  push32(0x1272ee3cu); f_1272dd50();
  /* 1272ee3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ee3f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ee42 jne 0x1272ee65 */
  if (!C.zf) goto L_1272ee65;
  /* 1272ee44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ee47 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1272ee4a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1272ee50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272ee52 je 0x1272ee63 */
  if (C.zf) goto L_1272ee63;
  /* 1272ee54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ee57 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1272ee5a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1272ee5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ee60 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1272ee63:;
  /* 1272ee63 jmp 0x1272ee7b */
  goto L_1272ee7b;
L_1272ee65:;
  /* 1272ee65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ee68 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1272ee6b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1272ee6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ee71 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1272ee74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1272ee7b:;
  /* 1272ee7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ee7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ee81 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1272ee84 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1272ee86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272ee89 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1272ee90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ee93 mov esp, ebp */
  ESP = (EBP);
  /* 1272ee95 pop ebp */
  EBP = (pop32());
  /* 1272ee96 ret  */
  ESPCHK(0x1272ede0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eea0 @ 0x1272eea0 (15 bytes, 7 insns) */
void f_1272eea0(void) {
  FTRACE(0x1272eea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272eea0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272eea1 mov ebp, esp */
  EBP = (ESP);
  /* 1272eea3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272eea5 call 0x1272eeb0 */
  push32(0x1272eeaau); f_1272eeb0();
  /* 1272eeaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272eead pop ebp */
  EBP = (pop32());
  /* 1272eeae ret  */
  ESPCHK(0x1272eea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eeb0 @ 0x1272eeb0 (319 bytes, 94 insns) */
void f_1272eeb0(void) {
  FTRACE(0x1272eeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272eeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272eeb1 mov ebp, esp */
  EBP = (ESP);
  /* 1272eeb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272eeb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1272eebd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1272eec4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272eec6 call 0x12728eb0 */
  push32(0x1272eecbu); f_12728eb0();
  /* 1272eecb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272eece mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1272eed5 jmp 0x1272eee0 */
  goto L_1272eee0;
L_1272eed7:;
  /* 1272eed7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272eeda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272eedd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1272eee0:;
  /* 1272eee0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272eee3 cmp ecx, dword ptr [0x12752d60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12752d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272eee9 jge 0x1272efd3 */
  if ((C.sf==C.of)) goto L_1272efd3;
  /* 1272eeef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272eef2 mov eax, dword ptr [0x12751a08] */
  EAX = (r32((uint32_t)(0x12751a08)));
  /* 1272eef7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272eefb je 0x1272efce */
  if (C.zf) goto L_1272efce;
  /* 1272ef01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272ef04 mov edx, dword ptr [0x12751a08] */
  EDX = (r32((uint32_t)(0x12751a08)));
  /* 1272ef0a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1272ef0d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1272ef10 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1272ef16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272ef18 je 0x1272efce */
  if (C.zf) goto L_1272efce;
  /* 1272ef1e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272ef21 mov eax, dword ptr [0x12751a08] */
  EAX = (r32((uint32_t)(0x12751a08)));
  /* 1272ef26 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1272ef29 push ecx */
  push32((uint32_t)(ECX));
  /* 1272ef2a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272ef2d push edx */
  push32((uint32_t)(EDX));
  /* 1272ef2e call 0x1272e300 */
  push32(0x1272ef33u); f_1272e300();
  /* 1272ef33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ef36 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272ef39 mov ecx, dword ptr [0x12751a08] */
  ECX = (r32((uint32_t)(0x12751a08)));
  /* 1272ef3f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1272ef42 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1272ef45 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1272ef4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272ef4c je 0x1272efb5 */
  if (C.zf) goto L_1272efb5;
  /* 1272ef4e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ef52 jne 0x1272ef79 */
  if (!C.zf) goto L_1272ef79;
  /* 1272ef54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272ef57 mov edx, dword ptr [0x12751a08] */
  EDX = (r32((uint32_t)(0x12751a08)));
  /* 1272ef5d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1272ef60 push eax */
  push32((uint32_t)(EAX));
  /* 1272ef61 call 0x1272ed90 */
  push32(0x1272ef66u); f_1272ed90();
  /* 1272ef66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ef69 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ef6c je 0x1272ef77 */
  if (C.zf) goto L_1272ef77;
  /* 1272ef6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ef71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ef74 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1272ef77:;
  /* 1272ef77 jmp 0x1272efb5 */
  goto L_1272efb5;
L_1272ef79:;
  /* 1272ef79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272ef7d jne 0x1272efb5 */
  if (!C.zf) goto L_1272efb5;
  /* 1272ef7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272ef82 mov eax, dword ptr [0x12751a08] */
  EAX = (r32((uint32_t)(0x12751a08)));
  /* 1272ef87 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1272ef8a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1272ef8d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1272ef90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272ef92 je 0x1272efb5 */
  if (C.zf) goto L_1272efb5;
  /* 1272ef94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272ef97 mov ecx, dword ptr [0x12751a08] */
  ECX = (r32((uint32_t)(0x12751a08)));
  /* 1272ef9d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1272efa0 push edx */
  push32((uint32_t)(EDX));
  /* 1272efa1 call 0x1272ed90 */
  push32(0x1272efa6u); f_1272ed90();
  /* 1272efa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272efa9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272efac jne 0x1272efb5 */
  if (!C.zf) goto L_1272efb5;
  /* 1272efae mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1272efb5:;
  /* 1272efb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272efb8 mov ecx, dword ptr [0x12751a08] */
  ECX = (r32((uint32_t)(0x12751a08)));
  /* 1272efbe mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1272efc1 push edx */
  push32((uint32_t)(EDX));
  /* 1272efc2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272efc5 push eax */
  push32((uint32_t)(EAX));
  /* 1272efc6 call 0x1272e370 */
  push32(0x1272efcbu); f_1272e370();
  /* 1272efcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272efce:;
  /* 1272efce jmp 0x1272eed7 */
  goto L_1272eed7;
L_1272efd3:;
  /* 1272efd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272efd5 call 0x12728f50 */
  push32(0x1272efdau); f_12728f50();
  /* 1272efda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272efdd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272efe1 jne 0x1272efe8 */
  if (!C.zf) goto L_1272efe8;
  /* 1272efe3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272efe6 jmp 0x1272efeb */
  goto L_1272efeb;
L_1272efe8:;
  /* 1272efe8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1272efeb:;
  /* 1272efeb mov esp, ebp */
  ESP = (EBP);
  /* 1272efed pop ebp */
  EBP = (pop32());
  /* 1272efee ret  */
  ESPCHK(0x1272eeb0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1272eff0 (15 bytes, 7 insns) */
void f_1272eff0(void) {
  FTRACE(0x1272eff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272eff0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272eff1 mov ebp, esp */
  EBP = (ESP);
  /* 1272eff3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272eff5 call 0x12724420 */
  push32(0x1272effau); f_12724420();
  /* 1272effa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272effd pop ebp */
  EBP = (pop32());
  /* 1272effe ret  */
  ESPCHK(0x1272eff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f000 @ 0x1272f000 (1007 bytes, 269 insns) */
void f_1272f000(void) {
  FTRACE(0x1272f000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272f000 push ebp */
  push32((uint32_t)(EBP));
  /* 1272f001 mov ebp, esp */
  EBP = (ESP);
  /* 1272f003 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272f009 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f00d jl 0x1272f015 */
  if ((C.sf!=C.of)) goto L_1272f015;
  /* 1272f00f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f013 jle 0x1272f01c */
  if ((C.zf||C.sf!=C.of)) goto L_1272f01c;
L_1272f015:;
  /* 1272f015 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272f017 jmp 0x1272f3eb */
  goto L_1272f3eb;
L_1272f01c:;
  /* 1272f01c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1272f01e call 0x12728eb0 */
  push32(0x1272f023u); f_12728eb0();
  /* 1272f023 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f026 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1272f02d mov eax, dword ptr [0x127519f4] */
  EAX = (r32((uint32_t)(0x127519f4)));
  /* 1272f032 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f035 mov dword ptr [0x127519f4], eax */
  w32((uint32_t)(0x127519f4), (EAX));
L_1272f03a:;
  /* 1272f03a cmp dword ptr [0x12751a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f041 je 0x1272f04d */
  if (C.zf) goto L_1272f04d;
  /* 1272f043 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272f045 call dword ptr [0x127542e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542e4))), 0x1272f04bu);
  /* 1272f04b jmp 0x1272f03a */
  goto L_1272f03a;
L_1272f04d:;
  /* 1272f04d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f051 je 0x1272f091 */
  if (C.zf) goto L_1272f091;
  /* 1272f053 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f057 je 0x1272f071 */
  if (C.zf) goto L_1272f071;
  /* 1272f059 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f05c push ecx */
  push32((uint32_t)(ECX));
  /* 1272f05d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f060 push edx */
  push32((uint32_t)(EDX));
  /* 1272f061 call 0x1272f3f0 */
  push32(0x1272f066u); f_1272f3f0();
  /* 1272f066 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f069 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1272f06f jmp 0x1272f083 */
  goto L_1272f083;
L_1272f071:;
  /* 1272f071 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f074 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272f077 mov ecx, dword ptr [eax + 0x127504dc] */
  ECX = (r32((uint32_t)(EAX + 0x127504dc)));
  /* 1272f07d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1272f083:;
  /* 1272f083 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1272f089 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1272f08c jmp 0x1272f3cb */
  goto L_1272f3cb;
L_1272f091:;
  /* 1272f091 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1272f098 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1272f09f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f0a3 je 0x1272f3c3 */
  if (C.zf) goto L_1272f3c3;
  /* 1272f0a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f0ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1272f0af cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f0b2 jne 0x1272f2d4 */
  if (!C.zf) goto L_1272f2d4;
  /* 1272f0b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f0bb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1272f0bf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f0c2 jne 0x1272f2d4 */
  if (!C.zf) goto L_1272f2d4;
  /* 1272f0c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f0cb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1272f0cf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f0d2 jne 0x1272f2d4 */
  if (!C.zf) goto L_1272f2d4;
  /* 1272f0d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f0db mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1272f0e1:;
  /* 1272f0e1 push 0x1274d404 */
  push32((uint32_t)(0x1274d404u));
  /* 1272f0e6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1272f0ec push ecx */
  push32((uint32_t)(ECX));
  /* 1272f0ed call 0x12731250 */
  push32(0x1272f0f2u); f_12731250();
  /* 1272f0f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f0f5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1272f0fb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f102 je 0x1272f12d */
  if (C.zf) goto L_1272f12d;
  /* 1272f104 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1272f10a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272f110 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1272f116 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f11d je 0x1272f12d */
  if (C.zf) goto L_1272f12d;
  /* 1272f11f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1272f125 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1272f128 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f12b jne 0x1272f153 */
  if (!C.zf) goto L_1272f153;
L_1272f12d:;
  /* 1272f12d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f131 je 0x1272f14c */
  if (C.zf) goto L_1272f14c;
  /* 1272f133 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1272f135 call 0x12728f50 */
  push32(0x1272f13au); f_12728f50();
  /* 1272f13a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f13d mov edx, dword ptr [0x127519f4] */
  EDX = (r32((uint32_t)(0x127519f4)));
  /* 1272f143 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272f146 mov dword ptr [0x127519f4], edx */
  w32((uint32_t)(0x127519f4), (EDX));
L_1272f14c:;
  /* 1272f14c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272f14e jmp 0x1272f3eb */
  goto L_1272f3eb;
L_1272f153:;
  /* 1272f153 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1272f15a jmp 0x1272f165 */
  goto L_1272f165;
L_1272f15c:;
  /* 1272f15c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272f15f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f162 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1272f165:;
  /* 1272f165 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f169 jg 0x1272f1b3 */
  if ((!C.zf&&C.sf==C.of)) goto L_1272f1b3;
  /* 1272f16b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1272f171 push ecx */
  push32((uint32_t)(ECX));
  /* 1272f172 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1272f178 push edx */
  push32((uint32_t)(EDX));
  /* 1272f179 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272f17c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272f17f mov ecx, dword ptr [eax + 0x127504d8] */
  ECX = (r32((uint32_t)(EAX + 0x127504d8)));
  /* 1272f185 push ecx */
  push32((uint32_t)(ECX));
  /* 1272f186 call 0x12731210 */
  push32(0x1272f18bu); f_12731210();
  /* 1272f18b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f18e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272f190 jne 0x1272f1b1 */
  if (!C.zf) goto L_1272f1b1;
  /* 1272f192 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272f195 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272f198 mov eax, dword ptr [edx + 0x127504d8] */
  EAX = (r32((uint32_t)(EDX + 0x127504d8)));
  /* 1272f19e push eax */
  push32((uint32_t)(EAX));
  /* 1272f19f call 0x127282e0 */
  push32(0x1272f1a4u); f_127282e0();
  /* 1272f1a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f1a7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f1ad jne 0x1272f1b1 */
  if (!C.zf) goto L_1272f1b1;
  /* 1272f1af jmp 0x1272f1b3 */
  goto L_1272f1b3;
L_1272f1b1:;
  /* 1272f1b1 jmp 0x1272f15c */
  goto L_1272f15c;
L_1272f1b3:;
  /* 1272f1b3 push 0x1274d400 */
  push32((uint32_t)(0x1274d400u));
  /* 1272f1b8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1272f1be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f1c1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1272f1c7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1272f1cd push edx */
  push32((uint32_t)(EDX));
  /* 1272f1ce call 0x127311d0 */
  push32(0x1272f1d3u); f_127311d0();
  /* 1272f1d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f1d6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1272f1dc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f1e3 jne 0x1272f219 */
  if (!C.zf) goto L_1272f219;
  /* 1272f1e5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1272f1eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1272f1ee cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f1f1 je 0x1272f219 */
  if (C.zf) goto L_1272f219;
  /* 1272f1f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f1f7 je 0x1272f212 */
  if (C.zf) goto L_1272f212;
  /* 1272f1f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1272f1fb call 0x12728f50 */
  push32(0x1272f200u); f_12728f50();
  /* 1272f200 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f203 mov edx, dword ptr [0x127519f4] */
  EDX = (r32((uint32_t)(0x127519f4)));
  /* 1272f209 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272f20c mov dword ptr [0x127519f4], edx */
  w32((uint32_t)(0x127519f4), (EDX));
L_1272f212:;
  /* 1272f212 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272f214 jmp 0x1272f3eb */
  goto L_1272f3eb;
L_1272f219:;
  /* 1272f219 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f21d jg 0x1272f26a */
  if ((!C.zf&&C.sf==C.of)) goto L_1272f26a;
  /* 1272f21f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1272f225 push eax */
  push32((uint32_t)(EAX));
  /* 1272f226 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1272f22c push ecx */
  push32((uint32_t)(ECX));
  /* 1272f22d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1272f233 push edx */
  push32((uint32_t)(EDX));
  /* 1272f234 call 0x12728cd0 */
  push32(0x1272f239u); f_12728cd0();
  /* 1272f239 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f23c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1272f242 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1272f24a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1272f250 push ecx */
  push32((uint32_t)(ECX));
  /* 1272f251 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272f254 push edx */
  push32((uint32_t)(EDX));
  /* 1272f255 call 0x1272f3f0 */
  push32(0x1272f25au); f_1272f3f0();
  /* 1272f25a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f25d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272f25f je 0x1272f26a */
  if (C.zf) goto L_1272f26a;
  /* 1272f261 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272f264 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f267 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1272f26a:;
  /* 1272f26a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1272f270 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f276 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1272f27c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1272f282 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1272f285 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272f287 je 0x1272f298 */
  if (C.zf) goto L_1272f298;
  /* 1272f289 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1272f28f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f292 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1272f298:;
  /* 1272f298 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1272f29e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1272f2a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272f2a3 jne 0x1272f0e1 */
  if (!C.zf) goto L_1272f0e1;
  /* 1272f2a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f2ad je 0x1272f2bc */
  if (C.zf) goto L_1272f2bc;
  /* 1272f2af call 0x1272f590 */
  push32(0x1272f2b4u); f_1272f590();
  /* 1272f2b4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1272f2ba jmp 0x1272f2c6 */
  goto L_1272f2c6;
L_1272f2bc:;
  /* 1272f2bc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1272f2c6:;
  /* 1272f2c6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1272f2cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1272f2cf jmp 0x1272f3c1 */
  goto L_1272f3c1;
L_1272f2d4:;
  /* 1272f2d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f2d7 push edx */
  push32((uint32_t)(EDX));
  /* 1272f2d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272f2da push 0 */
  push32((uint32_t)(0x0u));
  /* 1272f2dc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1272f2e2 push eax */
  push32((uint32_t)(EAX));
  /* 1272f2e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f2e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1272f2e7 call 0x1272f690 */
  push32(0x1272f2ecu); f_1272f690();
  /* 1272f2ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f2ef mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1272f2f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f2f6 je 0x1272f3c1 */
  if (C.zf) goto L_1272f3c1;
  /* 1272f2fc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1272f303 jmp 0x1272f30e */
  goto L_1272f30e;
L_1272f305:;
  /* 1272f305 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272f308 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f30b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1272f30e:;
  /* 1272f30e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f312 jg 0x1272f370 */
  if ((!C.zf&&C.sf==C.of)) goto L_1272f370;
  /* 1272f314 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f318 je 0x1272f36e */
  if (C.zf) goto L_1272f36e;
  /* 1272f31a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272f31d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272f320 mov ecx, dword ptr [eax + 0x127504dc] */
  ECX = (r32((uint32_t)(EAX + 0x127504dc)));
  /* 1272f326 push ecx */
  push32((uint32_t)(ECX));
  /* 1272f327 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1272f32d push edx */
  push32((uint32_t)(EDX));
  /* 1272f32e call 0x12731140 */
  push32(0x1272f333u); f_12731140();
  /* 1272f333 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f336 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272f338 je 0x1272f365 */
  if (C.zf) goto L_1272f365;
  /* 1272f33a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1272f340 push eax */
  push32((uint32_t)(EAX));
  /* 1272f341 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272f344 push ecx */
  push32((uint32_t)(ECX));
  /* 1272f345 call 0x1272f3f0 */
  push32(0x1272f34au); f_1272f3f0();
  /* 1272f34a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f34d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272f34f je 0x1272f35c */
  if (C.zf) goto L_1272f35c;
  /* 1272f351 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272f354 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f357 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1272f35a jmp 0x1272f363 */
  goto L_1272f363;
L_1272f35c:;
  /* 1272f35c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1272f363:;
  /* 1272f363 jmp 0x1272f36e */
  goto L_1272f36e;
L_1272f365:;
  /* 1272f365 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272f368 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f36b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1272f36e:;
  /* 1272f36e jmp 0x1272f305 */
  goto L_1272f305;
L_1272f370:;
  /* 1272f370 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f374 je 0x1272f39b */
  if (C.zf) goto L_1272f39b;
  /* 1272f376 call 0x1272f590 */
  push32(0x1272f37bu); f_1272f590();
  /* 1272f37b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1272f37e push 2 */
  push32((uint32_t)(0x2u));
  /* 1272f380 mov ecx, dword ptr [0x127504dc] */
  ECX = (r32((uint32_t)(0x127504dc)));
  /* 1272f386 push ecx */
  push32((uint32_t)(ECX));
  /* 1272f387 call 0x12725f40 */
  push32(0x1272f38cu); f_12725f40();
  /* 1272f38c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f38f mov dword ptr [0x127504dc], 0 */
  w32((uint32_t)(0x127504dc), (0x0u));
  /* 1272f399 jmp 0x1272f3c1 */
  goto L_1272f3c1;
L_1272f39b:;
  /* 1272f39b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f39f je 0x1272f3ae */
  if (C.zf) goto L_1272f3ae;
  /* 1272f3a1 call 0x1272f590 */
  push32(0x1272f3a6u); f_1272f590();
  /* 1272f3a6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1272f3ac jmp 0x1272f3b8 */
  goto L_1272f3b8;
L_1272f3ae:;
  /* 1272f3ae mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1272f3b8:;
  /* 1272f3b8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1272f3be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1272f3c1:;
  /* 1272f3c1 jmp 0x1272f3cb */
  goto L_1272f3cb;
L_1272f3c3:;
  /* 1272f3c3 call 0x1272f590 */
  push32(0x1272f3c8u); f_1272f590();
  /* 1272f3c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1272f3cb:;
  /* 1272f3cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f3cf je 0x1272f3e8 */
  if (C.zf) goto L_1272f3e8;
  /* 1272f3d1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1272f3d3 call 0x12728f50 */
  push32(0x1272f3d8u); f_12728f50();
  /* 1272f3d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f3db mov eax, dword ptr [0x127519f4] */
  EAX = (r32((uint32_t)(0x127519f4)));
  /* 1272f3e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272f3e3 mov dword ptr [0x127519f4], eax */
  w32((uint32_t)(0x127519f4), (EAX));
L_1272f3e8:;
  /* 1272f3e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1272f3eb:;
  /* 1272f3eb mov esp, ebp */
  ESP = (EBP);
  /* 1272f3ed pop ebp */
  EBP = (pop32());
  /* 1272f3ee ret  */
  ESPCHK(0x1272f000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3f0 @ 0x1272f3f0 (403 bytes, 117 insns) */
void f_1272f3f0(void) {
  FTRACE(0x1272f3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272f3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272f3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1272f3f3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272f3f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f3fc push eax */
  push32((uint32_t)(EAX));
  /* 1272f3fd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1272f403 push ecx */
  push32((uint32_t)(ECX));
  /* 1272f404 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1272f40a push edx */
  push32((uint32_t)(EDX));
  /* 1272f40b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1272f411 push eax */
  push32((uint32_t)(EAX));
  /* 1272f412 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f415 push ecx */
  push32((uint32_t)(ECX));
  /* 1272f416 call 0x1272f690 */
  push32(0x1272f41bu); f_1272f690();
  /* 1272f41b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f41e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272f420 jne 0x1272f429 */
  if (!C.zf) goto L_1272f429;
  /* 1272f422 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272f424 jmp 0x1272f57f */
  goto L_1272f57f;
L_1272f429:;
  /* 1272f429 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1272f42e push 0x1274d408 */
  push32((uint32_t)(0x1274d408u));
  /* 1272f433 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272f435 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1272f43b push edx */
  push32((uint32_t)(EDX));
  /* 1272f43c call 0x127282e0 */
  push32(0x1272f441u); f_127282e0();
  /* 1272f441 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f444 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f447 push eax */
  push32((uint32_t)(EAX));
  /* 1272f448 call 0x127254b0 */
  push32(0x1272f44du); f_127254b0();
  /* 1272f44d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f450 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1272f453 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f457 jne 0x1272f460 */
  if (!C.zf) goto L_1272f460;
  /* 1272f459 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272f45b jmp 0x1272f57f */
  goto L_1272f57f;
L_1272f460:;
  /* 1272f460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f463 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272f466 mov ecx, dword ptr [eax + 0x127504dc] */
  ECX = (r32((uint32_t)(EAX + 0x127504dc)));
  /* 1272f46c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272f46f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f472 mov eax, dword ptr [edx*4 + 0x12751870] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12751870)));
  /* 1272f479 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272f47c push 6 */
  push32((uint32_t)(0x6u));
  /* 1272f47e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f481 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272f484 add ecx, 0x127518c0 */
  { uint32_t _a=(ECX),_b=(0x127518c0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f48a push ecx */
  push32((uint32_t)(ECX));
  /* 1272f48b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1272f48e push edx */
  push32((uint32_t)(EDX));
  /* 1272f48f call 0x1272bd90 */
  push32(0x1272f494u); f_1272bd90();
  /* 1272f494 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f497 mov eax, dword ptr [0x12751888] */
  EAX = (r32((uint32_t)(0x12751888)));
  /* 1272f49c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1272f49f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1272f4a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1272f4a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272f4a9 push edx */
  push32((uint32_t)(EDX));
  /* 1272f4aa call 0x12728460 */
  push32(0x1272f4afu); f_12728460();
  /* 1272f4af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f4b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f4b5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272f4b8 mov dword ptr [ecx + 0x127504dc], eax */
  w32((uint32_t)(ECX + 0x127504dc), (EAX));
  /* 1272f4be mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1272f4c4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1272f4ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f4cd mov dword ptr [eax*4 + 0x12751870], edx */
  w32((uint32_t)(EAX*4 + 0x12751870), (EDX));
  /* 1272f4d4 push 6 */
  push32((uint32_t)(0x6u));
  /* 1272f4d6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1272f4dc push ecx */
  push32((uint32_t)(ECX));
  /* 1272f4dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f4e0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272f4e3 add edx, 0x127518c0 */
  { uint32_t _a=(EDX),_b=(0x127518c0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f4e9 push edx */
  push32((uint32_t)(EDX));
  /* 1272f4ea call 0x1272bd90 */
  push32(0x1272f4efu); f_1272bd90();
  /* 1272f4ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f4f2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f4f6 jne 0x1272f503 */
  if (!C.zf) goto L_1272f503;
  /* 1272f4f8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1272f4fe mov dword ptr [0x12751888], eax */
  w32((uint32_t)(0x12751888), (EAX));
L_1272f503:;
  /* 1272f503 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f507 jne 0x1272f515 */
  if (!C.zf) goto L_1272f515;
  /* 1272f509 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1272f50f mov dword ptr [0x1275188c], ecx */
  w32((uint32_t)(0x1275188c), (ECX));
L_1272f515:;
  /* 1272f515 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f518 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272f51b call dword ptr [edx + 0x127504e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x127504e0))), 0x1272f521u);
  /* 1272f521 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272f523 je 0x1272f55c */
  if (C.zf) goto L_1272f55c;
  /* 1272f525 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f528 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272f52b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272f52e mov dword ptr [eax + 0x127504dc], ecx */
  w32((uint32_t)(EAX + 0x127504dc), (ECX));
  /* 1272f534 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272f536 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272f539 push edx */
  push32((uint32_t)(EDX));
  /* 1272f53a call 0x12725f40 */
  push32(0x1272f53fu); f_12725f40();
  /* 1272f53f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f542 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f545 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272f548 mov dword ptr [eax*4 + 0x12751870], ecx */
  w32((uint32_t)(EAX*4 + 0x12751870), (ECX));
  /* 1272f54f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1272f552 mov dword ptr [0x12751888], edx */
  w32((uint32_t)(0x12751888), (EDX));
  /* 1272f558 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272f55a jmp 0x1272f57f */
  goto L_1272f57f;
L_1272f55c:;
  /* 1272f55c cmp dword ptr [ebp - 0xc], 0x127503c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x127503c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f563 je 0x1272f573 */
  if (C.zf) goto L_1272f573;
  /* 1272f565 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272f567 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272f56a push eax */
  push32((uint32_t)(EAX));
  /* 1272f56b call 0x12725f40 */
  push32(0x1272f570u); f_12725f40();
  /* 1272f570 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272f573:;
  /* 1272f573 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f576 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272f579 mov eax, dword ptr [ecx + 0x127504dc] */
  EAX = (r32((uint32_t)(ECX + 0x127504dc)));
L_1272f57f:;
  /* 1272f57f mov esp, ebp */
  ESP = (EBP);
  /* 1272f581 pop ebp */
  EBP = (pop32());
  /* 1272f582 ret  */
  ESPCHK(0x1272f3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f590 @ 0x1272f590 (256 bytes, 72 insns) */
void f_1272f590(void) {
  FTRACE(0x1272f590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272f590 push ebp */
  push32((uint32_t)(EBP));
  /* 1272f591 mov ebp, esp */
  EBP = (ESP);
  /* 1272f593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272f596 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1272f59d cmp dword ptr [0x127504dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127504dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f5a4 jne 0x1272f5c4 */
  if (!C.zf) goto L_1272f5c4;
  /* 1272f5a6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1272f5ab push 0x1274d408 */
  push32((uint32_t)(0x1274d408u));
  /* 1272f5b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272f5b2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1272f5b7 call 0x127254b0 */
  push32(0x1272f5bcu); f_127254b0();
  /* 1272f5bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f5bf mov dword ptr [0x127504dc], eax */
  w32((uint32_t)(0x127504dc), (EAX));
L_1272f5c4:;
  /* 1272f5c4 mov eax, dword ptr [0x127504dc] */
  EAX = (r32((uint32_t)(0x127504dc)));
  /* 1272f5c9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1272f5cc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1272f5d3 jmp 0x1272f5de */
  goto L_1272f5de;
L_1272f5d5:;
  /* 1272f5d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272f5d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f5db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1272f5de:;
  /* 1272f5de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272f5e1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272f5e4 mov eax, dword ptr [edx + 0x127504dc] */
  EAX = (r32((uint32_t)(EDX + 0x127504dc)));
  /* 1272f5ea push eax */
  push32((uint32_t)(EAX));
  /* 1272f5eb push 0x1274d414 */
  push32((uint32_t)(0x1274d414u));
  /* 1272f5f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272f5f3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272f5f6 mov edx, dword ptr [ecx + 0x127504d8] */
  EDX = (r32((uint32_t)(ECX + 0x127504d8)));
  /* 1272f5fc push edx */
  push32((uint32_t)(EDX));
  /* 1272f5fd push 3 */
  push32((uint32_t)(0x3u));
  /* 1272f5ff mov eax, dword ptr [0x127504dc] */
  EAX = (r32((uint32_t)(0x127504dc)));
  /* 1272f604 push eax */
  push32((uint32_t)(EAX));
  /* 1272f605 call 0x1272f830 */
  push32(0x1272f60au); f_1272f830();
  /* 1272f60a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f60d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f611 jge 0x1272f659 */
  if ((C.sf==C.of)) goto L_1272f659;
  /* 1272f613 push 0x1274d400 */
  push32((uint32_t)(0x1274d400u));
  /* 1272f618 mov ecx, dword ptr [0x127504dc] */
  ECX = (r32((uint32_t)(0x127504dc)));
  /* 1272f61e push ecx */
  push32((uint32_t)(ECX));
  /* 1272f61f call 0x12728470 */
  push32(0x1272f624u); f_12728470();
  /* 1272f624 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f627 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272f62a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f62d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272f630 mov eax, dword ptr [edx + 0x127504dc] */
  EAX = (r32((uint32_t)(EDX + 0x127504dc)));
  /* 1272f636 push eax */
  push32((uint32_t)(EAX));
  /* 1272f637 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272f63a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272f63d mov edx, dword ptr [ecx + 0x127504dc] */
  EDX = (r32((uint32_t)(ECX + 0x127504dc)));
  /* 1272f643 push edx */
  push32((uint32_t)(EDX));
  /* 1272f644 call 0x12731140 */
  push32(0x1272f649u); f_12731140();
  /* 1272f649 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f64c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272f64e je 0x1272f657 */
  if (C.zf) goto L_1272f657;
  /* 1272f650 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1272f657:;
  /* 1272f657 jmp 0x1272f687 */
  goto L_1272f687;
L_1272f659:;
  /* 1272f659 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f65d jne 0x1272f666 */
  if (!C.zf) goto L_1272f666;
  /* 1272f65f mov eax, dword ptr [0x127504dc] */
  EAX = (r32((uint32_t)(0x127504dc)));
  /* 1272f664 jmp 0x1272f68c */
  goto L_1272f68c;
L_1272f666:;
  /* 1272f666 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272f668 mov eax, dword ptr [0x127504dc] */
  EAX = (r32((uint32_t)(0x127504dc)));
  /* 1272f66d push eax */
  push32((uint32_t)(EAX));
  /* 1272f66e call 0x12725f40 */
  push32(0x1272f673u); f_12725f40();
  /* 1272f673 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f676 mov dword ptr [0x127504dc], 0 */
  w32((uint32_t)(0x127504dc), (0x0u));
  /* 1272f680 mov eax, dword ptr [0x127504f4] */
  EAX = (r32((uint32_t)(0x127504f4)));
  /* 1272f685 jmp 0x1272f68c */
  goto L_1272f68c;
L_1272f687:;
  /* 1272f687 jmp 0x1272f5d5 */
  goto L_1272f5d5;
L_1272f68c:;
  /* 1272f68c mov esp, ebp */
  ESP = (EBP);
  /* 1272f68e pop ebp */
  EBP = (pop32());
  /* 1272f68f ret  */
  ESPCHK(0x1272f590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f690 @ 0x1272f690 (388 bytes, 115 insns) */
void f_1272f690(void) {
  FTRACE(0x1272f690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272f690 push ebp */
  push32((uint32_t)(EBP));
  /* 1272f691 mov ebp, esp */
  EBP = (ESP);
  /* 1272f693 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272f699 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f69d jne 0x1272f6a6 */
  if (!C.zf) goto L_1272f6a6;
  /* 1272f69f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272f6a1 jmp 0x1272f810 */
  goto L_1272f810;
L_1272f6a6:;
  /* 1272f6a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f6a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1272f6ac cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f6af jne 0x1272f700 */
  if (!C.zf) goto L_1272f700;
  /* 1272f6b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f6b4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1272f6b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272f6ba jne 0x1272f700 */
  if (!C.zf) goto L_1272f700;
  /* 1272f6bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f6bf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1272f6c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f6c5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1272f6c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f6cd je 0x1272f6e9 */
  if (C.zf) goto L_1272f6e9;
  /* 1272f6cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272f6d2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1272f6d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272f6da mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1272f6e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272f6e3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1272f6e9:;
  /* 1272f6e9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f6ed je 0x1272f6f8 */
  if (C.zf) goto L_1272f6f8;
  /* 1272f6ef mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1272f6f2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1272f6f8:;
  /* 1272f6f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f6fb jmp 0x1272f810 */
  goto L_1272f810;
L_1272f700:;
  /* 1272f700 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f703 push ecx */
  push32((uint32_t)(ECX));
  /* 1272f704 push 0x12750450 */
  push32((uint32_t)(0x12750450u));
  /* 1272f709 call 0x12731140 */
  push32(0x1272f70eu); f_12731140();
  /* 1272f70e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f711 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272f713 je 0x1272f7c8 */
  if (C.zf) goto L_1272f7c8;
  /* 1272f719 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f71c push edx */
  push32((uint32_t)(EDX));
  /* 1272f71d push 0x127503cc */
  push32((uint32_t)(0x127503ccu));
  /* 1272f722 call 0x12731140 */
  push32(0x1272f727u); f_12731140();
  /* 1272f727 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f72a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272f72c je 0x1272f7c8 */
  if (C.zf) goto L_1272f7c8;
  /* 1272f732 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f735 push eax */
  push32((uint32_t)(EAX));
  /* 1272f736 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1272f73c push ecx */
  push32((uint32_t)(ECX));
  /* 1272f73d call 0x1272f880 */
  push32(0x1272f742u); f_1272f880();
  /* 1272f742 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f745 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272f747 je 0x1272f750 */
  if (C.zf) goto L_1272f750;
  /* 1272f749 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272f74b jmp 0x1272f810 */
  goto L_1272f810;
L_1272f750:;
  /* 1272f750 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1272f756 push edx */
  push32((uint32_t)(EDX));
  /* 1272f757 push 0x12751898 */
  push32((uint32_t)(0x12751898u));
  /* 1272f75c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1272f762 push eax */
  push32((uint32_t)(EAX));
  /* 1272f763 call 0x12731290 */
  push32(0x1272f768u); f_12731290();
  /* 1272f768 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f76b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272f76d jne 0x1272f776 */
  if (!C.zf) goto L_1272f776;
  /* 1272f76f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272f771 jmp 0x1272f810 */
  goto L_1272f810;
L_1272f776:;
  /* 1272f776 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272f778 mov cx, word ptr [0x1275189c] */
  CX = (r16((uint32_t)(0x1275189c)));
  /* 1272f77f mov dword ptr [0x127518a0], ecx */
  w32((uint32_t)(0x127518a0), (ECX));
  /* 1272f785 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1272f78b push edx */
  push32((uint32_t)(EDX));
  /* 1272f78c push 0x12750450 */
  push32((uint32_t)(0x12750450u));
  /* 1272f791 call 0x1272f9e0 */
  push32(0x1272f796u); f_1272f9e0();
  /* 1272f796 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f799 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f79c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1272f79f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272f7a1 je 0x1272f7b6 */
  if (C.zf) goto L_1272f7b6;
  /* 1272f7a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f7a6 push edx */
  push32((uint32_t)(EDX));
  /* 1272f7a7 push 0x127503cc */
  push32((uint32_t)(0x127503ccu));
  /* 1272f7ac call 0x12728460 */
  push32(0x1272f7b1u); f_12728460();
  /* 1272f7b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f7b4 jmp 0x1272f7c8 */
  goto L_1272f7c8;
L_1272f7b6:;
  /* 1272f7b6 push 0x12750450 */
  push32((uint32_t)(0x12750450u));
  /* 1272f7bb push 0x127503cc */
  push32((uint32_t)(0x127503ccu));
  /* 1272f7c0 call 0x12728460 */
  push32(0x1272f7c5u); f_12728460();
  /* 1272f7c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272f7c8:;
  /* 1272f7c8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f7cc je 0x1272f7e1 */
  if (C.zf) goto L_1272f7e1;
  /* 1272f7ce push 6 */
  push32((uint32_t)(0x6u));
  /* 1272f7d0 push 0x12751898 */
  push32((uint32_t)(0x12751898u));
  /* 1272f7d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272f7d8 push eax */
  push32((uint32_t)(EAX));
  /* 1272f7d9 call 0x1272bd90 */
  push32(0x1272f7deu); f_1272bd90();
  /* 1272f7de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272f7e1:;
  /* 1272f7e1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f7e5 je 0x1272f7fa */
  if (C.zf) goto L_1272f7fa;
  /* 1272f7e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1272f7e9 push 0x127518a0 */
  push32((uint32_t)(0x127518a0u));
  /* 1272f7ee mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1272f7f1 push ecx */
  push32((uint32_t)(ECX));
  /* 1272f7f2 call 0x1272bd90 */
  push32(0x1272f7f7u); f_1272bd90();
  /* 1272f7f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272f7fa:;
  /* 1272f7fa push 0x12750450 */
  push32((uint32_t)(0x12750450u));
  /* 1272f7ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f802 push edx */
  push32((uint32_t)(EDX));
  /* 1272f803 call 0x12728460 */
  push32(0x1272f808u); f_12728460();
  /* 1272f808 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f80b mov eax, 0x12750450 */
  EAX = (0x12750450u);
L_1272f810:;
  /* 1272f810 mov esp, ebp */
  ESP = (EBP);
  /* 1272f812 pop ebp */
  EBP = (pop32());
  /* 1272f813 ret  */
  ESPCHK(0x1272f690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f820 @ 0x1272f820 (7 bytes, 5 insns) */
void f_1272f820(void) {
  FTRACE(0x1272f820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272f820 push ebp */
  push32((uint32_t)(EBP));
  /* 1272f821 mov ebp, esp */
  EBP = (ESP);
  /* 1272f823 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272f825 pop ebp */
  EBP = (pop32());
  /* 1272f826 ret  */
  ESPCHK(0x1272f820u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1272f830 (79 bytes, 28 insns) */
void f_1272f830(void) {
  FTRACE(0x1272f830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272f830 push ebp */
  push32((uint32_t)(EBP));
  /* 1272f831 mov ebp, esp */
  EBP = (ESP);
  /* 1272f833 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272f836 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1272f839 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272f83c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1272f843 jmp 0x1272f84e */
  goto L_1272f84e;
L_1272f845:;
  /* 1272f845 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272f848 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f84b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1272f84e:;
  /* 1272f84e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272f851 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f854 jge 0x1272f874 */
  if ((C.sf==C.of)) goto L_1272f874;
  /* 1272f856 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272f859 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f85c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272f85f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272f862 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1272f865 push edx */
  push32((uint32_t)(EDX));
  /* 1272f866 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f869 push eax */
  push32((uint32_t)(EAX));
  /* 1272f86a call 0x12728470 */
  push32(0x1272f86fu); f_12728470();
  /* 1272f86f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f872 jmp 0x1272f845 */
  goto L_1272f845;
L_1272f874:;
  /* 1272f874 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1272f87b mov esp, ebp */
  ESP = (EBP);
  /* 1272f87d pop ebp */
  EBP = (pop32());
  /* 1272f87e ret  */
  ESPCHK(0x1272f830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f880 @ 0x1272f880 (349 bytes, 122 insns) */
void f_1272f880(void) {
  FTRACE(0x1272f880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272f880 push ebp */
  push32((uint32_t)(EBP));
  /* 1272f881 mov ebp, esp */
  EBP = (ESP);
  /* 1272f883 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272f886 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1272f88b push 0 */
  push32((uint32_t)(0x0u));
  /* 1272f88d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f890 push eax */
  push32((uint32_t)(EAX));
  /* 1272f891 call 0x12729220 */
  push32(0x1272f896u); f_12729220();
  /* 1272f896 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f899 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f89c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1272f89f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272f8a1 jne 0x1272f8aa */
  if (!C.zf) goto L_1272f8aa;
  /* 1272f8a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272f8a5 jmp 0x1272f9d9 */
  goto L_1272f9d9;
L_1272f8aa:;
  /* 1272f8aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f8ad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1272f8b0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f8b3 jne 0x1272f8e0 */
  if (!C.zf) goto L_1272f8e0;
  /* 1272f8b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f8b8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1272f8bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272f8be je 0x1272f8e0 */
  if (C.zf) goto L_1272f8e0;
  /* 1272f8c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f8c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f8c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1272f8c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f8ca add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f8d0 push edx */
  push32((uint32_t)(EDX));
  /* 1272f8d1 call 0x12728460 */
  push32(0x1272f8d6u); f_12728460();
  /* 1272f8d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f8d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272f8db jmp 0x1272f9d9 */
  goto L_1272f9d9;
L_1272f8e0:;
  /* 1272f8e0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1272f8e7 jmp 0x1272f8f2 */
  goto L_1272f8f2;
L_1272f8e9:;
  /* 1272f8e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272f8ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f8ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1272f8f2:;
  /* 1272f8f2 push 0x1274d418 */
  push32((uint32_t)(0x1274d418u));
  /* 1272f8f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f8fa push ecx */
  push32((uint32_t)(ECX));
  /* 1272f8fb call 0x127311d0 */
  push32(0x1272f900u); f_127311d0();
  /* 1272f900 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f903 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1272f906 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f90a jne 0x1272f914 */
  if (!C.zf) goto L_1272f914;
  /* 1272f90c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272f90f jmp 0x1272f9d9 */
  goto L_1272f9d9;
L_1272f914:;
  /* 1272f914 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f917 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f91a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1272f91c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1272f91f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f923 jne 0x1272f94a */
  if (!C.zf) goto L_1272f94a;
  /* 1272f925 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f929 jge 0x1272f94a */
  if ((C.sf==C.of)) goto L_1272f94a;
  /* 1272f92b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1272f92f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f932 je 0x1272f94a */
  if (C.zf) goto L_1272f94a;
  /* 1272f934 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272f937 push edx */
  push32((uint32_t)(EDX));
  /* 1272f938 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f93b push eax */
  push32((uint32_t)(EAX));
  /* 1272f93c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f93f push ecx */
  push32((uint32_t)(ECX));
  /* 1272f940 call 0x12728cd0 */
  push32(0x1272f945u); f_12728cd0();
  /* 1272f945 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f948 jmp 0x1272f9b0 */
  goto L_1272f9b0;
L_1272f94a:;
  /* 1272f94a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f94e jne 0x1272f978 */
  if (!C.zf) goto L_1272f978;
  /* 1272f950 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f954 jge 0x1272f978 */
  if ((C.sf==C.of)) goto L_1272f978;
  /* 1272f956 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1272f95a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f95d je 0x1272f978 */
  if (C.zf) goto L_1272f978;
  /* 1272f95f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272f962 push eax */
  push32((uint32_t)(EAX));
  /* 1272f963 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f966 push ecx */
  push32((uint32_t)(ECX));
  /* 1272f967 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f96a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f96d push edx */
  push32((uint32_t)(EDX));
  /* 1272f96e call 0x12728cd0 */
  push32(0x1272f973u); f_12728cd0();
  /* 1272f973 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f976 jmp 0x1272f9b0 */
  goto L_1272f9b0;
L_1272f978:;
  /* 1272f978 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f97c jne 0x1272f9ab */
  if (!C.zf) goto L_1272f9ab;
  /* 1272f97e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1272f982 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272f984 je 0x1272f98f */
  if (C.zf) goto L_1272f98f;
  /* 1272f986 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1272f98a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f98d jne 0x1272f9ab */
  if (!C.zf) goto L_1272f9ab;
L_1272f98f:;
  /* 1272f98f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272f992 push edx */
  push32((uint32_t)(EDX));
  /* 1272f993 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f996 push eax */
  push32((uint32_t)(EAX));
  /* 1272f997 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f99a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f9a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1272f9a1 call 0x12728cd0 */
  push32(0x1272f9a6u); f_12728cd0();
  /* 1272f9a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f9a9 jmp 0x1272f9b0 */
  goto L_1272f9b0;
L_1272f9ab:;
  /* 1272f9ab or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272f9ae jmp 0x1272f9d9 */
  goto L_1272f9d9;
L_1272f9b0:;
  /* 1272f9b0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1272f9b4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272f9b7 jne 0x1272f9bb */
  if (!C.zf) goto L_1272f9bb;
  /* 1272f9b9 jmp 0x1272f9d7 */
  goto L_1272f9d7;
L_1272f9bb:;
  /* 1272f9bb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1272f9bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272f9c1 jne 0x1272f9c5 */
  if (!C.zf) goto L_1272f9c5;
  /* 1272f9c3 jmp 0x1272f9d7 */
  goto L_1272f9d7;
L_1272f9c5:;
  /* 1272f9c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272f9c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f9cb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1272f9cf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1272f9d2 jmp 0x1272f8e9 */
  goto L_1272f8e9;
L_1272f9d7:;
  /* 1272f9d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1272f9d9:;
  /* 1272f9d9 mov esp, ebp */
  ESP = (EBP);
  /* 1272f9db pop ebp */
  EBP = (pop32());
  /* 1272f9dc ret  */
  ESPCHK(0x1272f880u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1272f9e0 (101 bytes, 36 insns) */
void f_1272f9e0(void) {
  FTRACE(0x1272f9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272f9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272f9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1272f9e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f9e6 push eax */
  push32((uint32_t)(EAX));
  /* 1272f9e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272f9ea push ecx */
  push32((uint32_t)(ECX));
  /* 1272f9eb call 0x12728460 */
  push32(0x1272f9f0u); f_12728460();
  /* 1272f9f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272f9f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272f9f6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1272f9fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272f9fc je 0x1272fa18 */
  if (C.zf) goto L_1272fa18;
  /* 1272f9fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272fa01 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fa04 push ecx */
  push32((uint32_t)(ECX));
  /* 1272fa05 push 0x1274d420 */
  push32((uint32_t)(0x1274d420u));
  /* 1272fa0a push 2 */
  push32((uint32_t)(0x2u));
  /* 1272fa0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fa0f push edx */
  push32((uint32_t)(EDX));
  /* 1272fa10 call 0x1272f830 */
  push32(0x1272fa15u); f_1272f830();
  /* 1272fa15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272fa18:;
  /* 1272fa18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272fa1b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1272fa22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272fa24 je 0x1272fa43 */
  if (C.zf) goto L_1272fa43;
  /* 1272fa26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272fa29 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fa2f push edx */
  push32((uint32_t)(EDX));
  /* 1272fa30 push 0x1274d41c */
  push32((uint32_t)(0x1274d41cu));
  /* 1272fa35 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272fa37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fa3a push eax */
  push32((uint32_t)(EAX));
  /* 1272fa3b call 0x1272f830 */
  push32(0x1272fa40u); f_1272f830();
  /* 1272fa40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272fa43:;
  /* 1272fa43 pop ebp */
  EBP = (pop32());
  /* 1272fa44 ret  */
  ESPCHK(0x1272f9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa50 @ 0x1272fa50 (130 bytes, 50 insns) */
void f_1272fa50(void) {
  FTRACE(0x1272fa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272fa50 push ebp */
  push32((uint32_t)(EBP));
  /* 1272fa51 mov ebp, esp */
  EBP = (ESP);
  /* 1272fa53 push ecx */
  push32((uint32_t)(ECX));
  /* 1272fa54 push ebx */
  push32((uint32_t)(EBX));
  /* 1272fa55 push esi */
  push32((uint32_t)(ESI));
  /* 1272fa56 push edi */
  push32((uint32_t)(EDI));
  /* 1272fa57 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1272fa5e:;
  /* 1272fa5e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272fa62 jne 0x1272fa82 */
  if (!C.zf) goto L_1272fa82;
  /* 1272fa64 push 0x1274d430 */
  push32((uint32_t)(0x1274d430u));
  /* 1272fa69 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272fa6b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1272fa6d push 0x1274d424 */
  push32((uint32_t)(0x1274d424u));
  /* 1272fa72 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272fa74 call 0x12724570 */
  push32(0x1272fa79u); f_12724570();
  /* 1272fa79 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fa7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272fa7f jne 0x1272fa82 */
  if (!C.zf) goto L_1272fa82;
  /* 1272fa81 int3  */
  x86_unimpl("int3 @ 0x1272fa81");
L_1272fa82:;
  /* 1272fa82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272fa84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272fa86 jne 0x1272fa5e */
  if (!C.zf) goto L_1272fa5e;
  /* 1272fa88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fa8b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1272fa8e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1272fa91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272fa93 je 0x1272faa1 */
  if (C.zf) goto L_1272faa1;
  /* 1272fa95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fa98 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1272fa9f jmp 0x1272fac8 */
  goto L_1272fac8;
L_1272faa1:;
  /* 1272faa1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272faa4 push ecx */
  push32((uint32_t)(ECX));
  /* 1272faa5 call 0x1272e2c0 */
  push32(0x1272faaau); f_1272e2c0();
  /* 1272faaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272faad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fab0 push edx */
  push32((uint32_t)(EDX));
  /* 1272fab1 call 0x1272fae0 */
  push32(0x1272fab6u); f_1272fae0();
  /* 1272fab6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fab9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272fabc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fabf push eax */
  push32((uint32_t)(EAX));
  /* 1272fac0 call 0x1272e330 */
  push32(0x1272fac5u); f_1272e330();
  /* 1272fac5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272fac8:;
  /* 1272fac8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272facb pop edi */
  EDI = (pop32());
  /* 1272facc pop esi */
  ESI = (pop32());
  /* 1272facd pop ebx */
  EBX = (pop32());
  /* 1272face mov esp, ebp */
  ESP = (EBP);
  /* 1272fad0 pop ebp */
  EBP = (pop32());
  /* 1272fad1 ret  */
  ESPCHK(0x1272fa50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fae0 @ 0x1272fae0 (190 bytes, 67 insns) */
void f_1272fae0(void) {
  FTRACE(0x1272fae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272fae0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272fae1 mov ebp, esp */
  EBP = (ESP);
  /* 1272fae3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272fae6 push ebx */
  push32((uint32_t)(EBX));
  /* 1272fae7 push esi */
  push32((uint32_t)(ESI));
  /* 1272fae8 push edi */
  push32((uint32_t)(EDI));
  /* 1272fae9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1272faf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272faf3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1272faf6:;
  /* 1272faf6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272fafa jne 0x1272fb1a */
  if (!C.zf) goto L_1272fb1a;
  /* 1272fafc push 0x1274d2d0 */
  push32((uint32_t)(0x1274d2d0u));
  /* 1272fb01 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272fb03 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1272fb05 push 0x1274d424 */
  push32((uint32_t)(0x1274d424u));
  /* 1272fb0a push 2 */
  push32((uint32_t)(0x2u));
  /* 1272fb0c call 0x12724570 */
  push32(0x1272fb11u); f_12724570();
  /* 1272fb11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fb14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272fb17 jne 0x1272fb1a */
  if (!C.zf) goto L_1272fb1a;
  /* 1272fb19 int3  */
  x86_unimpl("int3 @ 0x1272fb19");
L_1272fb1a:;
  /* 1272fb1a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272fb1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272fb1e jne 0x1272faf6 */
  if (!C.zf) goto L_1272faf6;
  /* 1272fb20 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272fb23 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1272fb26 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1272fb2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272fb2d je 0x1272fb8a */
  if (C.zf) goto L_1272fb8a;
  /* 1272fb2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272fb32 push ecx */
  push32((uint32_t)(ECX));
  /* 1272fb33 call 0x1272ede0 */
  push32(0x1272fb38u); f_1272ede0();
  /* 1272fb38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fb3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272fb3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272fb41 push edx */
  push32((uint32_t)(EDX));
  /* 1272fb42 call 0x12732160 */
  push32(0x1272fb47u); f_12732160();
  /* 1272fb47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fb4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272fb4d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1272fb50 push ecx */
  push32((uint32_t)(ECX));
  /* 1272fb51 call 0x12732030 */
  push32(0x1272fb56u); f_12732030();
  /* 1272fb56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fb59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272fb5b jge 0x1272fb66 */
  if ((C.sf==C.of)) goto L_1272fb66;
  /* 1272fb5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1272fb64 jmp 0x1272fb8a */
  goto L_1272fb8a;
L_1272fb66:;
  /* 1272fb66 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272fb69 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272fb6d je 0x1272fb8a */
  if (C.zf) goto L_1272fb8a;
  /* 1272fb6f push 2 */
  push32((uint32_t)(0x2u));
  /* 1272fb71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272fb74 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1272fb77 push ecx */
  push32((uint32_t)(ECX));
  /* 1272fb78 call 0x12725f40 */
  push32(0x1272fb7du); f_12725f40();
  /* 1272fb7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fb80 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272fb83 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1272fb8a:;
  /* 1272fb8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272fb8d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1272fb94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272fb97 pop edi */
  EDI = (pop32());
  /* 1272fb98 pop esi */
  ESI = (pop32());
  /* 1272fb99 pop ebx */
  EBX = (pop32());
  /* 1272fb9a mov esp, ebp */
  ESP = (EBP);
  /* 1272fb9c pop ebp */
  EBP = (pop32());
  /* 1272fb9d ret  */
  ESPCHK(0x1272fae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fba0 @ 0x1272fba0 (210 bytes, 63 insns) */
void f_1272fba0(void) {
  FTRACE(0x1272fba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272fba0 push ebp */
  push32((uint32_t)(EBP));
  /* 1272fba1 mov ebp, esp */
  EBP = (ESP);
  /* 1272fba3 push ecx */
  push32((uint32_t)(ECX));
  /* 1272fba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fba7 cmp eax, dword ptr [0x1275319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1275319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272fbad jae 0x1272fbd1 */
  if (!C.cf) goto L_1272fbd1;
  /* 1272fbaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fbb2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1272fbb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fbb8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1272fbbb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272fbbe mov eax, dword ptr [ecx*4 + 0x12753060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12753060)));
  /* 1272fbc5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1272fbca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1272fbcd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272fbcf jne 0x1272fbe4 */
  if (!C.zf) goto L_1272fbe4;
L_1272fbd1:;
  /* 1272fbd1 call 0x1272d380 */
  push32(0x1272fbd6u); f_1272d380();
  /* 1272fbd6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1272fbdc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272fbdf jmp 0x1272fc6e */
  goto L_1272fc6e;
L_1272fbe4:;
  /* 1272fbe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fbe7 push edx */
  push32((uint32_t)(EDX));
  /* 1272fbe8 call 0x1272eba0 */
  push32(0x1272fbedu); f_1272eba0();
  /* 1272fbed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fbf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fbf3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1272fbf6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fbf9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1272fbfc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272fbff mov edx, dword ptr [eax*4 + 0x12753060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12753060)));
  /* 1272fc06 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1272fc0b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1272fc0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272fc10 je 0x1272fc4d */
  if (C.zf) goto L_1272fc4d;
  /* 1272fc12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fc15 push ecx */
  push32((uint32_t)(ECX));
  /* 1272fc16 call 0x1272ea20 */
  push32(0x1272fc1bu); f_1272ea20();
  /* 1272fc1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fc1e push eax */
  push32((uint32_t)(EAX));
  /* 1272fc1f call dword ptr [0x127542e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542e0))), 0x1272fc25u);
  /* 1272fc25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272fc27 jne 0x1272fc34 */
  if (!C.zf) goto L_1272fc34;
  /* 1272fc29 call dword ptr [0x1275439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275439c))), 0x1272fc2fu);
  /* 1272fc2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272fc32 jmp 0x1272fc3b */
  goto L_1272fc3b;
L_1272fc34:;
  /* 1272fc34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1272fc3b:;
  /* 1272fc3b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272fc3f jne 0x1272fc43 */
  if (!C.zf) goto L_1272fc43;
  /* 1272fc41 jmp 0x1272fc5f */
  goto L_1272fc5f;
L_1272fc43:;
  /* 1272fc43 call 0x1272d390 */
  push32(0x1272fc48u); f_1272d390();
  /* 1272fc48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272fc4b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1272fc4d:;
  /* 1272fc4d call 0x1272d380 */
  push32(0x1272fc52u); f_1272d380();
  /* 1272fc52 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1272fc58 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1272fc5f:;
  /* 1272fc5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fc62 push eax */
  push32((uint32_t)(EAX));
  /* 1272fc63 call 0x1272ec30 */
  push32(0x1272fc68u); f_1272ec30();
  /* 1272fc68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fc6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1272fc6e:;
  /* 1272fc6e mov esp, ebp */
  ESP = (EBP);
  /* 1272fc70 pop ebp */
  EBP = (pop32());
  /* 1272fc71 ret  */
  ESPCHK(0x1272fba0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1272fc80 (219 bytes, 64 insns) */
void f_1272fc80(void) {
  FTRACE(0x1272fc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272fc80 push ebp */
  push32((uint32_t)(EBP));
  /* 1272fc81 mov ebp, esp */
  EBP = (ESP);
  /* 1272fc83 push ecx */
  push32((uint32_t)(ECX));
  /* 1272fc84 cmp dword ptr [0x12751884], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751884))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272fc8b je 0x1272fd21 */
  if (C.zf) goto L_1272fd21;
  /* 1272fc91 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1272fc93 push 0x1274d440 */
  push32((uint32_t)(0x1274d440u));
  /* 1272fc98 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272fc9a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1272fc9f push 1 */
  push32((uint32_t)(0x1u));
  /* 1272fca1 call 0x127258c0 */
  push32(0x1272fca6u); f_127258c0();
  /* 1272fca6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fca9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272fcac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272fcb0 jne 0x1272fcbc */
  if (!C.zf) goto L_1272fcbc;
  /* 1272fcb2 mov eax, 1 */
  EAX = (0x1u);
  /* 1272fcb7 jmp 0x1272fd57 */
  goto L_1272fd57;
L_1272fcbc:;
  /* 1272fcbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272fcbf push eax */
  push32((uint32_t)(EAX));
  /* 1272fcc0 call 0x1272fd60 */
  push32(0x1272fcc5u); f_1272fd60();
  /* 1272fcc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fcc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272fcca je 0x1272fced */
  if (C.zf) goto L_1272fced;
  /* 1272fccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272fccf push ecx */
  push32((uint32_t)(ECX));
  /* 1272fcd0 call 0x127302f0 */
  push32(0x1272fcd5u); f_127302f0();
  /* 1272fcd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fcd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272fcda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272fcdd push edx */
  push32((uint32_t)(EDX));
  /* 1272fcde call 0x12725f40 */
  push32(0x1272fce3u); f_12725f40();
  /* 1272fce3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fce6 mov eax, 1 */
  EAX = (0x1u);
  /* 1272fceb jmp 0x1272fd57 */
  goto L_1272fd57;
L_1272fced:;
  /* 1272fced mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272fcf0 mov dword ptr [0x12750c98], eax */
  w32((uint32_t)(0x12750c98), (EAX));
  /* 1272fcf5 mov ecx, dword ptr [0x127518a4] */
  ECX = (r32((uint32_t)(0x127518a4)));
  /* 1272fcfb push ecx */
  push32((uint32_t)(ECX));
  /* 1272fcfc call 0x127302f0 */
  push32(0x1272fd01u); f_127302f0();
  /* 1272fd01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fd04 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272fd06 mov edx, dword ptr [0x127518a4] */
  EDX = (r32((uint32_t)(0x127518a4)));
  /* 1272fd0c push edx */
  push32((uint32_t)(EDX));
  /* 1272fd0d call 0x12725f40 */
  push32(0x1272fd12u); f_12725f40();
  /* 1272fd12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fd15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272fd18 mov dword ptr [0x127518a4], eax */
  w32((uint32_t)(0x127518a4), (EAX));
  /* 1272fd1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272fd1f jmp 0x1272fd57 */
  goto L_1272fd57;
L_1272fd21:;
  /* 1272fd21 mov dword ptr [0x12750c98], 0x12750ca0 */
  w32((uint32_t)(0x12750c98), (0x12750ca0u));
  /* 1272fd2b mov ecx, dword ptr [0x127518a4] */
  ECX = (r32((uint32_t)(0x127518a4)));
  /* 1272fd31 push ecx */
  push32((uint32_t)(ECX));
  /* 1272fd32 call 0x127302f0 */
  push32(0x1272fd37u); f_127302f0();
  /* 1272fd37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fd3a push 2 */
  push32((uint32_t)(0x2u));
  /* 1272fd3c mov edx, dword ptr [0x127518a4] */
  EDX = (r32((uint32_t)(0x127518a4)));
  /* 1272fd42 push edx */
  push32((uint32_t)(EDX));
  /* 1272fd43 call 0x12725f40 */
  push32(0x1272fd48u); f_12725f40();
  /* 1272fd48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fd4b mov dword ptr [0x127518a4], 0 */
  w32((uint32_t)(0x127518a4), (0x0u));
  /* 1272fd55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1272fd57:;
  /* 1272fd57 mov esp, ebp */
  ESP = (EBP);
  /* 1272fd59 pop ebp */
  EBP = (pop32());
  /* 1272fd5a ret  */
  ESPCHK(0x1272fc80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd60 @ 0x1272fd60 (1423 bytes, 533 insns) */
void f_1272fd60(void) {
  FTRACE(0x1272fd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272fd60 push ebp */
  push32((uint32_t)(EBP));
  /* 1272fd61 mov ebp, esp */
  EBP = (ESP);
  /* 1272fd63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272fd66 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1272fd6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272fd6f mov ax, word ptr [0x127518de] */
  AX = (r16((uint32_t)(0x127518de)));
  /* 1272fd75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272fd78 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272fd7a mov cx, word ptr [0x127518e0] */
  CX = (r16((uint32_t)(0x127518e0)));
  /* 1272fd81 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1272fd84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272fd88 jne 0x1272fd92 */
  if (!C.zf) goto L_1272fd92;
  /* 1272fd8a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272fd8d jmp 0x127302eb */
  goto L_127302eb;
L_1272fd92:;
  /* 1272fd92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fd95 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fd98 push edx */
  push32((uint32_t)(EDX));
  /* 1272fd99 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1272fd9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272fd9e push eax */
  push32((uint32_t)(EAX));
  /* 1272fd9f push 1 */
  push32((uint32_t)(0x1u));
  /* 1272fda1 call 0x12733670 */
  push32(0x1272fda6u); f_12733670();
  /* 1272fda6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fda9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272fdac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272fdae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272fdb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fdb4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fdb7 push edx */
  push32((uint32_t)(EDX));
  /* 1272fdb8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1272fdba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272fdbd push eax */
  push32((uint32_t)(EAX));
  /* 1272fdbe push 1 */
  push32((uint32_t)(0x1u));
  /* 1272fdc0 call 0x12733670 */
  push32(0x1272fdc5u); f_12733670();
  /* 1272fdc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fdc8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272fdcb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272fdcd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272fdd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fdd3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fdd6 push edx */
  push32((uint32_t)(EDX));
  /* 1272fdd7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1272fdd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272fddc push eax */
  push32((uint32_t)(EAX));
  /* 1272fddd push 1 */
  push32((uint32_t)(0x1u));
  /* 1272fddf call 0x12733670 */
  push32(0x1272fde4u); f_12733670();
  /* 1272fde4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fde7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272fdea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272fdec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272fdef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fdf2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fdf5 push edx */
  push32((uint32_t)(EDX));
  /* 1272fdf6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1272fdf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272fdfb push eax */
  push32((uint32_t)(EAX));
  /* 1272fdfc push 1 */
  push32((uint32_t)(0x1u));
  /* 1272fdfe call 0x12733670 */
  push32(0x1272fe03u); f_12733670();
  /* 1272fe03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fe06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272fe09 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272fe0b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272fe0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fe11 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fe14 push edx */
  push32((uint32_t)(EDX));
  /* 1272fe15 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1272fe17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272fe1a push eax */
  push32((uint32_t)(EAX));
  /* 1272fe1b push 1 */
  push32((uint32_t)(0x1u));
  /* 1272fe1d call 0x12733670 */
  push32(0x1272fe22u); f_12733670();
  /* 1272fe22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fe25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272fe28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272fe2a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272fe2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fe30 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fe33 push edx */
  push32((uint32_t)(EDX));
  /* 1272fe34 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1272fe36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272fe39 push eax */
  push32((uint32_t)(EAX));
  /* 1272fe3a push 1 */
  push32((uint32_t)(0x1u));
  /* 1272fe3c call 0x12733670 */
  push32(0x1272fe41u); f_12733670();
  /* 1272fe41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fe44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272fe47 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272fe49 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272fe4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fe4f push edx */
  push32((uint32_t)(EDX));
  /* 1272fe50 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1272fe52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272fe55 push eax */
  push32((uint32_t)(EAX));
  /* 1272fe56 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272fe58 call 0x12733670 */
  push32(0x1272fe5du); f_12733670();
  /* 1272fe5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fe60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272fe63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272fe65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272fe68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fe6b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fe6e push edx */
  push32((uint32_t)(EDX));
  /* 1272fe6f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1272fe71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272fe74 push eax */
  push32((uint32_t)(EAX));
  /* 1272fe75 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272fe77 call 0x12733670 */
  push32(0x1272fe7cu); f_12733670();
  /* 1272fe7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fe7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272fe82 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272fe84 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272fe87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fe8a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fe8d push edx */
  push32((uint32_t)(EDX));
  /* 1272fe8e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1272fe90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272fe93 push eax */
  push32((uint32_t)(EAX));
  /* 1272fe94 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272fe96 call 0x12733670 */
  push32(0x1272fe9bu); f_12733670();
  /* 1272fe9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fe9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272fea1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272fea3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272fea6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fea9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272feac push edx */
  push32((uint32_t)(EDX));
  /* 1272fead push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1272feaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272feb2 push eax */
  push32((uint32_t)(EAX));
  /* 1272feb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272feb5 call 0x12733670 */
  push32(0x1272febau); f_12733670();
  /* 1272feba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272febd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272fec0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272fec2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272fec5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fec8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fecb push edx */
  push32((uint32_t)(EDX));
  /* 1272fecc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1272fece mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272fed1 push eax */
  push32((uint32_t)(EAX));
  /* 1272fed2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272fed4 call 0x12733670 */
  push32(0x1272fed9u); f_12733670();
  /* 1272fed9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fedc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272fedf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272fee1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272fee4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fee7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272feea push edx */
  push32((uint32_t)(EDX));
  /* 1272feeb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1272feed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272fef0 push eax */
  push32((uint32_t)(EAX));
  /* 1272fef1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272fef3 call 0x12733670 */
  push32(0x1272fef8u); f_12733670();
  /* 1272fef8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fefb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272fefe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272ff00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272ff03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ff06 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ff09 push edx */
  push32((uint32_t)(EDX));
  /* 1272ff0a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1272ff0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ff0f push eax */
  push32((uint32_t)(EAX));
  /* 1272ff10 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272ff12 call 0x12733670 */
  push32(0x1272ff17u); f_12733670();
  /* 1272ff17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ff1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272ff1d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272ff1f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272ff22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ff25 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ff28 push edx */
  push32((uint32_t)(EDX));
  /* 1272ff29 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1272ff2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ff2e push eax */
  push32((uint32_t)(EAX));
  /* 1272ff2f push 1 */
  push32((uint32_t)(0x1u));
  /* 1272ff31 call 0x12733670 */
  push32(0x1272ff36u); f_12733670();
  /* 1272ff36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ff39 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272ff3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272ff3e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272ff41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ff44 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ff47 push edx */
  push32((uint32_t)(EDX));
  /* 1272ff48 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1272ff4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ff4d push eax */
  push32((uint32_t)(EAX));
  /* 1272ff4e push 1 */
  push32((uint32_t)(0x1u));
  /* 1272ff50 call 0x12733670 */
  push32(0x1272ff55u); f_12733670();
  /* 1272ff55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ff58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272ff5b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272ff5d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272ff60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ff63 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ff66 push edx */
  push32((uint32_t)(EDX));
  /* 1272ff67 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1272ff69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ff6c push eax */
  push32((uint32_t)(EAX));
  /* 1272ff6d push 1 */
  push32((uint32_t)(0x1u));
  /* 1272ff6f call 0x12733670 */
  push32(0x1272ff74u); f_12733670();
  /* 1272ff74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ff77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272ff7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272ff7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272ff7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ff82 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ff85 push edx */
  push32((uint32_t)(EDX));
  /* 1272ff86 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1272ff88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ff8b push eax */
  push32((uint32_t)(EAX));
  /* 1272ff8c push 1 */
  push32((uint32_t)(0x1u));
  /* 1272ff8e call 0x12733670 */
  push32(0x1272ff93u); f_12733670();
  /* 1272ff93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ff96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272ff99 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272ff9b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272ff9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ffa1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ffa4 push edx */
  push32((uint32_t)(EDX));
  /* 1272ffa5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1272ffa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ffaa push eax */
  push32((uint32_t)(EAX));
  /* 1272ffab push 1 */
  push32((uint32_t)(0x1u));
  /* 1272ffad call 0x12733670 */
  push32(0x1272ffb2u); f_12733670();
  /* 1272ffb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ffb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272ffb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272ffba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272ffbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ffc0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ffc3 push edx */
  push32((uint32_t)(EDX));
  /* 1272ffc4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1272ffc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ffc9 push eax */
  push32((uint32_t)(EAX));
  /* 1272ffca push 1 */
  push32((uint32_t)(0x1u));
  /* 1272ffcc call 0x12733670 */
  push32(0x1272ffd1u); f_12733670();
  /* 1272ffd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ffd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272ffd7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272ffd9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272ffdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272ffdf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272ffe2 push edx */
  push32((uint32_t)(EDX));
  /* 1272ffe3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1272ffe5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272ffe8 push eax */
  push32((uint32_t)(EAX));
  /* 1272ffe9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272ffeb call 0x12733670 */
  push32(0x1272fff0u); f_12733670();
  /* 1272fff0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272fff3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272fff6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1272fff8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272fffb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272fffe add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730001 push edx */
  push32((uint32_t)(EDX));
  /* 12730002 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12730004 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730007 push eax */
  push32((uint32_t)(EAX));
  /* 12730008 push 1 */
  push32((uint32_t)(0x1u));
  /* 1273000a call 0x12733670 */
  push32(0x1273000fu); f_12733670();
  /* 1273000f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730012 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12730015 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730017 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1273001a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273001d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730020 push edx */
  push32((uint32_t)(EDX));
  /* 12730021 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12730023 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730026 push eax */
  push32((uint32_t)(EAX));
  /* 12730027 push 1 */
  push32((uint32_t)(0x1u));
  /* 12730029 call 0x12733670 */
  push32(0x1273002eu); f_12733670();
  /* 1273002e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730031 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12730034 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730036 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12730039 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273003c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273003f push edx */
  push32((uint32_t)(EDX));
  /* 12730040 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12730042 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730045 push eax */
  push32((uint32_t)(EAX));
  /* 12730046 push 1 */
  push32((uint32_t)(0x1u));
  /* 12730048 call 0x12733670 */
  push32(0x1273004du); f_12733670();
  /* 1273004d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730050 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12730053 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730055 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12730058 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273005b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273005e push edx */
  push32((uint32_t)(EDX));
  /* 1273005f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12730061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730064 push eax */
  push32((uint32_t)(EAX));
  /* 12730065 push 1 */
  push32((uint32_t)(0x1u));
  /* 12730067 call 0x12733670 */
  push32(0x1273006cu); f_12733670();
  /* 1273006c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273006f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12730072 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730074 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12730077 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273007a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273007d push edx */
  push32((uint32_t)(EDX));
  /* 1273007e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12730080 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730083 push eax */
  push32((uint32_t)(EAX));
  /* 12730084 push 1 */
  push32((uint32_t)(0x1u));
  /* 12730086 call 0x12733670 */
  push32(0x1273008bu); f_12733670();
  /* 1273008b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273008e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12730091 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730093 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12730096 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730099 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273009c push edx */
  push32((uint32_t)(EDX));
  /* 1273009d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1273009f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127300a2 push eax */
  push32((uint32_t)(EAX));
  /* 127300a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127300a5 call 0x12733670 */
  push32(0x127300aau); f_12733670();
  /* 127300aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127300ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127300b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127300b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127300b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127300b8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127300bb push edx */
  push32((uint32_t)(EDX));
  /* 127300bc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 127300be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127300c1 push eax */
  push32((uint32_t)(EAX));
  /* 127300c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 127300c4 call 0x12733670 */
  push32(0x127300c9u); f_12733670();
  /* 127300c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127300cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127300cf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127300d1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127300d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127300d7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127300da push edx */
  push32((uint32_t)(EDX));
  /* 127300db push 0x39 */
  push32((uint32_t)(0x39u));
  /* 127300dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127300e0 push eax */
  push32((uint32_t)(EAX));
  /* 127300e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 127300e3 call 0x12733670 */
  push32(0x127300e8u); f_12733670();
  /* 127300e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127300eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127300ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127300f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127300f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127300f6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127300f9 push edx */
  push32((uint32_t)(EDX));
  /* 127300fa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 127300fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127300ff push eax */
  push32((uint32_t)(EAX));
  /* 12730100 push 1 */
  push32((uint32_t)(0x1u));
  /* 12730102 call 0x12733670 */
  push32(0x12730107u); f_12733670();
  /* 12730107 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273010a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273010d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1273010f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12730112 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730115 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730118 push edx */
  push32((uint32_t)(EDX));
  /* 12730119 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1273011b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273011e push eax */
  push32((uint32_t)(EAX));
  /* 1273011f push 1 */
  push32((uint32_t)(0x1u));
  /* 12730121 call 0x12733670 */
  push32(0x12730126u); f_12733670();
  /* 12730126 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730129 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273012c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1273012e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12730131 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730134 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730137 push edx */
  push32((uint32_t)(EDX));
  /* 12730138 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1273013a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273013d push eax */
  push32((uint32_t)(EAX));
  /* 1273013e push 1 */
  push32((uint32_t)(0x1u));
  /* 12730140 call 0x12733670 */
  push32(0x12730145u); f_12733670();
  /* 12730145 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730148 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273014b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1273014d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12730150 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730153 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730156 push edx */
  push32((uint32_t)(EDX));
  /* 12730157 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12730159 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273015c push eax */
  push32((uint32_t)(EAX));
  /* 1273015d push 1 */
  push32((uint32_t)(0x1u));
  /* 1273015f call 0x12733670 */
  push32(0x12730164u); f_12733670();
  /* 12730164 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730167 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273016a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1273016c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1273016f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730172 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730178 push edx */
  push32((uint32_t)(EDX));
  /* 12730179 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1273017b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273017e push eax */
  push32((uint32_t)(EAX));
  /* 1273017f push 1 */
  push32((uint32_t)(0x1u));
  /* 12730181 call 0x12733670 */
  push32(0x12730186u); f_12733670();
  /* 12730186 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730189 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273018c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1273018e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12730191 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730194 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273019a push edx */
  push32((uint32_t)(EDX));
  /* 1273019b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1273019d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127301a0 push eax */
  push32((uint32_t)(EAX));
  /* 127301a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 127301a3 call 0x12733670 */
  push32(0x127301a8u); f_12733670();
  /* 127301a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127301ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127301ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127301b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127301b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127301b6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127301bc push edx */
  push32((uint32_t)(EDX));
  /* 127301bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 127301bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127301c2 push eax */
  push32((uint32_t)(EAX));
  /* 127301c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127301c5 call 0x12733670 */
  push32(0x127301cau); f_12733670();
  /* 127301ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127301cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127301d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127301d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127301d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127301d8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127301de push edx */
  push32((uint32_t)(EDX));
  /* 127301df push 0x41 */
  push32((uint32_t)(0x41u));
  /* 127301e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127301e4 push eax */
  push32((uint32_t)(EAX));
  /* 127301e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 127301e7 call 0x12733670 */
  push32(0x127301ecu); f_12733670();
  /* 127301ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127301ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127301f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127301f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127301f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127301fa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730200 push edx */
  push32((uint32_t)(EDX));
  /* 12730201 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12730203 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730206 push eax */
  push32((uint32_t)(EAX));
  /* 12730207 push 1 */
  push32((uint32_t)(0x1u));
  /* 12730209 call 0x12733670 */
  push32(0x1273020eu); f_12733670();
  /* 1273020e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730211 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12730214 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730216 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12730219 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273021c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730222 push edx */
  push32((uint32_t)(EDX));
  /* 12730223 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12730225 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730228 push eax */
  push32((uint32_t)(EAX));
  /* 12730229 push 1 */
  push32((uint32_t)(0x1u));
  /* 1273022b call 0x12733670 */
  push32(0x12730230u); f_12733670();
  /* 12730230 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730233 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12730236 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730238 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1273023b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273023e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730244 push edx */
  push32((uint32_t)(EDX));
  /* 12730245 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12730247 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273024a push eax */
  push32((uint32_t)(EAX));
  /* 1273024b push 1 */
  push32((uint32_t)(0x1u));
  /* 1273024d call 0x12733670 */
  push32(0x12730252u); f_12733670();
  /* 12730252 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730255 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12730258 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1273025a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1273025d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730260 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730266 push edx */
  push32((uint32_t)(EDX));
  /* 12730267 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12730269 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273026c push eax */
  push32((uint32_t)(EAX));
  /* 1273026d push 1 */
  push32((uint32_t)(0x1u));
  /* 1273026f call 0x12733670 */
  push32(0x12730274u); f_12733670();
  /* 12730274 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730277 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273027a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1273027c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1273027f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730282 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730288 push edx */
  push32((uint32_t)(EDX));
  /* 12730289 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1273028b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1273028e push eax */
  push32((uint32_t)(EAX));
  /* 1273028f push 1 */
  push32((uint32_t)(0x1u));
  /* 12730291 call 0x12733670 */
  push32(0x12730296u); f_12733670();
  /* 12730296 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730299 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273029c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1273029e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127302a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127302a4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127302aa push edx */
  push32((uint32_t)(EDX));
  /* 127302ab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 127302ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127302b0 push eax */
  push32((uint32_t)(EAX));
  /* 127302b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 127302b3 call 0x12733670 */
  push32(0x127302b8u); f_12733670();
  /* 127302b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127302bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127302be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127302c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127302c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127302c6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127302cc push edx */
  push32((uint32_t)(EDX));
  /* 127302cd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 127302d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127302d5 push eax */
  push32((uint32_t)(EAX));
  /* 127302d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 127302d8 call 0x12733670 */
  push32(0x127302ddu); f_12733670();
  /* 127302dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127302e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127302e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127302e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127302e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_127302eb:;
  /* 127302eb mov esp, ebp */
  ESP = (EBP);
  /* 127302ed pop ebp */
  EBP = (pop32());
  /* 127302ee ret  */
  ESPCHK(0x1272fd60u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x127302f0 (779 bytes, 265 insns) */
void f_127302f0(void) {
  FTRACE(0x127302f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127302f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127302f1 mov ebp, esp */
  EBP = (ESP);
  /* 127302f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127302f7 jne 0x127302fe */
  if (!C.zf) goto L_127302fe;
  /* 127302f9 jmp 0x127305f9 */
  goto L_127305f9;
L_127302fe:;
  /* 127302fe push 2 */
  push32((uint32_t)(0x2u));
  /* 12730300 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730303 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12730306 push ecx */
  push32((uint32_t)(ECX));
  /* 12730307 call 0x12725f40 */
  push32(0x1273030cu); f_12725f40();
  /* 1273030c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273030f push 2 */
  push32((uint32_t)(0x2u));
  /* 12730311 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730314 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12730317 push eax */
  push32((uint32_t)(EAX));
  /* 12730318 call 0x12725f40 */
  push32(0x1273031du); f_12725f40();
  /* 1273031d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730320 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730322 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730325 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12730328 push edx */
  push32((uint32_t)(EDX));
  /* 12730329 call 0x12725f40 */
  push32(0x1273032eu); f_12725f40();
  /* 1273032e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730331 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730333 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730336 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12730339 push ecx */
  push32((uint32_t)(ECX));
  /* 1273033a call 0x12725f40 */
  push32(0x1273033fu); f_12725f40();
  /* 1273033f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730342 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730344 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730347 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1273034a push eax */
  push32((uint32_t)(EAX));
  /* 1273034b call 0x12725f40 */
  push32(0x12730350u); f_12725f40();
  /* 12730350 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730353 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730355 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730358 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1273035b push edx */
  push32((uint32_t)(EDX));
  /* 1273035c call 0x12725f40 */
  push32(0x12730361u); f_12725f40();
  /* 12730361 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730364 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730366 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730369 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1273036b push ecx */
  push32((uint32_t)(ECX));
  /* 1273036c call 0x12725f40 */
  push32(0x12730371u); f_12725f40();
  /* 12730371 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730374 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730376 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730379 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1273037c push eax */
  push32((uint32_t)(EAX));
  /* 1273037d call 0x12725f40 */
  push32(0x12730382u); f_12725f40();
  /* 12730382 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730385 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730387 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273038a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1273038d push edx */
  push32((uint32_t)(EDX));
  /* 1273038e call 0x12725f40 */
  push32(0x12730393u); f_12725f40();
  /* 12730393 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730396 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730398 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273039b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1273039e push ecx */
  push32((uint32_t)(ECX));
  /* 1273039f call 0x12725f40 */
  push32(0x127303a4u); f_12725f40();
  /* 127303a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127303a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 127303a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127303ac mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 127303af push eax */
  push32((uint32_t)(EAX));
  /* 127303b0 call 0x12725f40 */
  push32(0x127303b5u); f_12725f40();
  /* 127303b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127303b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 127303ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127303bd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 127303c0 push edx */
  push32((uint32_t)(EDX));
  /* 127303c1 call 0x12725f40 */
  push32(0x127303c6u); f_12725f40();
  /* 127303c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127303c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 127303cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127303ce mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 127303d1 push ecx */
  push32((uint32_t)(ECX));
  /* 127303d2 call 0x12725f40 */
  push32(0x127303d7u); f_12725f40();
  /* 127303d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127303da push 2 */
  push32((uint32_t)(0x2u));
  /* 127303dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127303df mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 127303e2 push eax */
  push32((uint32_t)(EAX));
  /* 127303e3 call 0x12725f40 */
  push32(0x127303e8u); f_12725f40();
  /* 127303e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127303eb push 2 */
  push32((uint32_t)(0x2u));
  /* 127303ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127303f0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 127303f3 push edx */
  push32((uint32_t)(EDX));
  /* 127303f4 call 0x12725f40 */
  push32(0x127303f9u); f_12725f40();
  /* 127303f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127303fc push 2 */
  push32((uint32_t)(0x2u));
  /* 127303fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730401 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12730404 push ecx */
  push32((uint32_t)(ECX));
  /* 12730405 call 0x12725f40 */
  push32(0x1273040au); f_12725f40();
  /* 1273040a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273040d push 2 */
  push32((uint32_t)(0x2u));
  /* 1273040f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730412 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12730415 push eax */
  push32((uint32_t)(EAX));
  /* 12730416 call 0x12725f40 */
  push32(0x1273041bu); f_12725f40();
  /* 1273041b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273041e push 2 */
  push32((uint32_t)(0x2u));
  /* 12730420 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730423 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12730426 push edx */
  push32((uint32_t)(EDX));
  /* 12730427 call 0x12725f40 */
  push32(0x1273042cu); f_12725f40();
  /* 1273042c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273042f push 2 */
  push32((uint32_t)(0x2u));
  /* 12730431 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730434 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12730437 push ecx */
  push32((uint32_t)(ECX));
  /* 12730438 call 0x12725f40 */
  push32(0x1273043du); f_12725f40();
  /* 1273043d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730440 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730442 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730445 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12730448 push eax */
  push32((uint32_t)(EAX));
  /* 12730449 call 0x12725f40 */
  push32(0x1273044eu); f_12725f40();
  /* 1273044e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730451 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730453 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730456 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12730459 push edx */
  push32((uint32_t)(EDX));
  /* 1273045a call 0x12725f40 */
  push32(0x1273045fu); f_12725f40();
  /* 1273045f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730462 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730464 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730467 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1273046a push ecx */
  push32((uint32_t)(ECX));
  /* 1273046b call 0x12725f40 */
  push32(0x12730470u); f_12725f40();
  /* 12730470 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730473 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730475 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730478 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1273047b push eax */
  push32((uint32_t)(EAX));
  /* 1273047c call 0x12725f40 */
  push32(0x12730481u); f_12725f40();
  /* 12730481 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730484 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730486 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730489 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1273048c push edx */
  push32((uint32_t)(EDX));
  /* 1273048d call 0x12725f40 */
  push32(0x12730492u); f_12725f40();
  /* 12730492 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730495 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730497 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273049a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1273049d push ecx */
  push32((uint32_t)(ECX));
  /* 1273049e call 0x12725f40 */
  push32(0x127304a3u); f_12725f40();
  /* 127304a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127304a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 127304a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127304ab mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 127304ae push eax */
  push32((uint32_t)(EAX));
  /* 127304af call 0x12725f40 */
  push32(0x127304b4u); f_12725f40();
  /* 127304b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127304b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 127304b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127304bc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 127304bf push edx */
  push32((uint32_t)(EDX));
  /* 127304c0 call 0x12725f40 */
  push32(0x127304c5u); f_12725f40();
  /* 127304c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127304c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 127304ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127304cd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 127304d0 push ecx */
  push32((uint32_t)(ECX));
  /* 127304d1 call 0x12725f40 */
  push32(0x127304d6u); f_12725f40();
  /* 127304d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127304d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 127304db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127304de mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 127304e1 push eax */
  push32((uint32_t)(EAX));
  /* 127304e2 call 0x12725f40 */
  push32(0x127304e7u); f_12725f40();
  /* 127304e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127304ea push 2 */
  push32((uint32_t)(0x2u));
  /* 127304ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127304ef mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 127304f2 push edx */
  push32((uint32_t)(EDX));
  /* 127304f3 call 0x12725f40 */
  push32(0x127304f8u); f_12725f40();
  /* 127304f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127304fb push 2 */
  push32((uint32_t)(0x2u));
  /* 127304fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730500 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12730503 push ecx */
  push32((uint32_t)(ECX));
  /* 12730504 call 0x12725f40 */
  push32(0x12730509u); f_12725f40();
  /* 12730509 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273050c push 2 */
  push32((uint32_t)(0x2u));
  /* 1273050e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730511 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12730514 push eax */
  push32((uint32_t)(EAX));
  /* 12730515 call 0x12725f40 */
  push32(0x1273051au); f_12725f40();
  /* 1273051a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273051d push 2 */
  push32((uint32_t)(0x2u));
  /* 1273051f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730522 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12730528 push edx */
  push32((uint32_t)(EDX));
  /* 12730529 call 0x12725f40 */
  push32(0x1273052eu); f_12725f40();
  /* 1273052e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730531 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730533 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730536 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1273053c push ecx */
  push32((uint32_t)(ECX));
  /* 1273053d call 0x12725f40 */
  push32(0x12730542u); f_12725f40();
  /* 12730542 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730545 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730547 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273054a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12730550 push eax */
  push32((uint32_t)(EAX));
  /* 12730551 call 0x12725f40 */
  push32(0x12730556u); f_12725f40();
  /* 12730556 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730559 push 2 */
  push32((uint32_t)(0x2u));
  /* 1273055b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273055e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12730564 push edx */
  push32((uint32_t)(EDX));
  /* 12730565 call 0x12725f40 */
  push32(0x1273056au); f_12725f40();
  /* 1273056a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273056d push 2 */
  push32((uint32_t)(0x2u));
  /* 1273056f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730572 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12730578 push ecx */
  push32((uint32_t)(ECX));
  /* 12730579 call 0x12725f40 */
  push32(0x1273057eu); f_12725f40();
  /* 1273057e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730581 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730583 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730586 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1273058c push eax */
  push32((uint32_t)(EAX));
  /* 1273058d call 0x12725f40 */
  push32(0x12730592u); f_12725f40();
  /* 12730592 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730595 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730597 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273059a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 127305a0 push edx */
  push32((uint32_t)(EDX));
  /* 127305a1 call 0x12725f40 */
  push32(0x127305a6u); f_12725f40();
  /* 127305a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127305a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 127305ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127305ae mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 127305b4 push ecx */
  push32((uint32_t)(ECX));
  /* 127305b5 call 0x12725f40 */
  push32(0x127305bau); f_12725f40();
  /* 127305ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127305bd push 2 */
  push32((uint32_t)(0x2u));
  /* 127305bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127305c2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 127305c8 push eax */
  push32((uint32_t)(EAX));
  /* 127305c9 call 0x12725f40 */
  push32(0x127305ceu); f_12725f40();
  /* 127305ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127305d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 127305d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127305d6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 127305dc push edx */
  push32((uint32_t)(EDX));
  /* 127305dd call 0x12725f40 */
  push32(0x127305e2u); f_12725f40();
  /* 127305e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127305e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 127305e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127305ea mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 127305f0 push ecx */
  push32((uint32_t)(ECX));
  /* 127305f1 call 0x12725f40 */
  push32(0x127305f6u); f_12725f40();
  /* 127305f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127305f9:;
  /* 127305f9 pop ebp */
  EBP = (pop32());
  /* 127305fa ret  */
  ESPCHK(0x127302f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010600 @ 0x12730600 (678 bytes, 180 insns) */
void f_12730600(void) {
  FTRACE(0x12730600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12730600 push ebp */
  push32((uint32_t)(EBP));
  /* 12730601 mov ebp, esp */
  EBP = (ESP);
  /* 12730603 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12730606 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1273060d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1273060f mov ax, word ptr [0x127518da] */
  AX = (r16((uint32_t)(0x127518da)));
  /* 12730615 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12730618 cmp dword ptr [0x12751880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273061f je 0x1273077a */
  if (C.zf) goto L_1273077a;
  /* 12730625 push 0x127518a8 */
  push32((uint32_t)(0x127518a8u));
  /* 1273062a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1273062c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273062f push ecx */
  push32((uint32_t)(ECX));
  /* 12730630 push 1 */
  push32((uint32_t)(0x1u));
  /* 12730632 call 0x12733670 */
  push32(0x12730637u); f_12733670();
  /* 12730637 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273063a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1273063d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1273063f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12730642 push 0x127518ac */
  push32((uint32_t)(0x127518acu));
  /* 12730647 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12730649 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273064c push eax */
  push32((uint32_t)(EAX));
  /* 1273064d push 1 */
  push32((uint32_t)(0x1u));
  /* 1273064f call 0x12733670 */
  push32(0x12730654u); f_12733670();
  /* 12730654 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730657 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1273065a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1273065c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1273065f push 0x127518b0 */
  push32((uint32_t)(0x127518b0u));
  /* 12730664 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12730666 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730669 push edx */
  push32((uint32_t)(EDX));
  /* 1273066a push 1 */
  push32((uint32_t)(0x1u));
  /* 1273066c call 0x12733670 */
  push32(0x12730671u); f_12733670();
  /* 12730671 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730674 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12730677 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730679 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1273067c mov edx, dword ptr [0x127518b0] */
  EDX = (r32((uint32_t)(0x127518b0)));
  /* 12730682 push edx */
  push32((uint32_t)(EDX));
  /* 12730683 call 0x127308b0 */
  push32(0x12730688u); f_127308b0();
  /* 12730688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273068b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273068f je 0x127306e9 */
  if (C.zf) goto L_127306e9;
  /* 12730691 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730693 mov eax, dword ptr [0x127518a8] */
  EAX = (r32((uint32_t)(0x127518a8)));
  /* 12730698 push eax */
  push32((uint32_t)(EAX));
  /* 12730699 call 0x12725f40 */
  push32(0x1273069eu); f_12725f40();
  /* 1273069e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127306a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 127306a3 mov ecx, dword ptr [0x127518ac] */
  ECX = (r32((uint32_t)(0x127518ac)));
  /* 127306a9 push ecx */
  push32((uint32_t)(ECX));
  /* 127306aa call 0x12725f40 */
  push32(0x127306afu); f_12725f40();
  /* 127306af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127306b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 127306b4 mov edx, dword ptr [0x127518b0] */
  EDX = (r32((uint32_t)(0x127518b0)));
  /* 127306ba push edx */
  push32((uint32_t)(EDX));
  /* 127306bb call 0x12725f40 */
  push32(0x127306c0u); f_12725f40();
  /* 127306c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127306c3 mov dword ptr [0x127518a8], 0 */
  w32((uint32_t)(0x127518a8), (0x0u));
  /* 127306cd mov dword ptr [0x127518ac], 0 */
  w32((uint32_t)(0x127518ac), (0x0u));
  /* 127306d7 mov dword ptr [0x127518b0], 0 */
  w32((uint32_t)(0x127518b0), (0x0u));
  /* 127306e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127306e4 jmp 0x127308a2 */
  goto L_127308a2;
L_127306e9:;
  /* 127306e9 mov eax, dword ptr [0x12750d88] */
  EAX = (r32((uint32_t)(0x12750d88)));
  /* 127306ee cmp dword ptr [eax], 0x12750d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12750d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127306f4 je 0x12730730 */
  if (C.zf) goto L_12730730;
  /* 127306f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 127306f8 mov ecx, dword ptr [0x12750d88] */
  ECX = (r32((uint32_t)(0x12750d88)));
  /* 127306fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12730700 push edx */
  push32((uint32_t)(EDX));
  /* 12730701 call 0x12725f40 */
  push32(0x12730706u); f_12725f40();
  /* 12730706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730709 push 2 */
  push32((uint32_t)(0x2u));
  /* 1273070b mov eax, dword ptr [0x12750d88] */
  EAX = (r32((uint32_t)(0x12750d88)));
  /* 12730710 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12730713 push ecx */
  push32((uint32_t)(ECX));
  /* 12730714 call 0x12725f40 */
  push32(0x12730719u); f_12725f40();
  /* 12730719 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273071c push 2 */
  push32((uint32_t)(0x2u));
  /* 1273071e mov edx, dword ptr [0x12750d88] */
  EDX = (r32((uint32_t)(0x12750d88)));
  /* 12730724 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12730727 push eax */
  push32((uint32_t)(EAX));
  /* 12730728 call 0x12725f40 */
  push32(0x1273072du); f_12725f40();
  /* 1273072d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12730730:;
  /* 12730730 mov ecx, dword ptr [0x12750d88] */
  ECX = (r32((uint32_t)(0x12750d88)));
  /* 12730736 mov edx, dword ptr [0x127518a8] */
  EDX = (r32((uint32_t)(0x127518a8)));
  /* 1273073c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1273073e mov eax, dword ptr [0x12750d88] */
  EAX = (r32((uint32_t)(0x12750d88)));
  /* 12730743 mov ecx, dword ptr [0x127518ac] */
  ECX = (r32((uint32_t)(0x127518ac)));
  /* 12730749 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1273074c mov edx, dword ptr [0x12750d88] */
  EDX = (r32((uint32_t)(0x12750d88)));
  /* 12730752 mov eax, dword ptr [0x127518b0] */
  EAX = (r32((uint32_t)(0x127518b0)));
  /* 12730757 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1273075a mov ecx, dword ptr [0x12750d88] */
  ECX = (r32((uint32_t)(0x12750d88)));
  /* 12730760 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12730762 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12730764 mov byte ptr [0x1274fea8], al */
  w8((uint32_t)(0x1274fea8), (AL));
  /* 12730769 mov dword ptr [0x1274feac], 1 */
  w32((uint32_t)(0x1274feac), (0x1u));
  /* 12730773 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12730775 jmp 0x127308a2 */
  goto L_127308a2;
L_1273077a:;
  /* 1273077a push 2 */
  push32((uint32_t)(0x2u));
  /* 1273077c mov ecx, dword ptr [0x127518a8] */
  ECX = (r32((uint32_t)(0x127518a8)));
  /* 12730782 push ecx */
  push32((uint32_t)(ECX));
  /* 12730783 call 0x12725f40 */
  push32(0x12730788u); f_12725f40();
  /* 12730788 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273078b push 2 */
  push32((uint32_t)(0x2u));
  /* 1273078d mov edx, dword ptr [0x127518ac] */
  EDX = (r32((uint32_t)(0x127518ac)));
  /* 12730793 push edx */
  push32((uint32_t)(EDX));
  /* 12730794 call 0x12725f40 */
  push32(0x12730799u); f_12725f40();
  /* 12730799 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273079c push 2 */
  push32((uint32_t)(0x2u));
  /* 1273079e mov eax, dword ptr [0x127518b0] */
  EAX = (r32((uint32_t)(0x127518b0)));
  /* 127307a3 push eax */
  push32((uint32_t)(EAX));
  /* 127307a4 call 0x12725f40 */
  push32(0x127307a9u); f_12725f40();
  /* 127307a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127307ac mov dword ptr [0x127518a8], 0 */
  w32((uint32_t)(0x127518a8), (0x0u));
  /* 127307b6 mov dword ptr [0x127518ac], 0 */
  w32((uint32_t)(0x127518ac), (0x0u));
  /* 127307c0 mov dword ptr [0x127518b0], 0 */
  w32((uint32_t)(0x127518b0), (0x0u));
  /* 127307ca push 0x88 */
  push32((uint32_t)(0x88u));
  /* 127307cf push 0x1274d44c */
  push32((uint32_t)(0x1274d44cu));
  /* 127307d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 127307d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 127307d8 call 0x127254b0 */
  push32(0x127307ddu); f_127254b0();
  /* 127307dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127307e0 mov ecx, dword ptr [0x12750d88] */
  ECX = (r32((uint32_t)(0x12750d88)));
  /* 127307e6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127307e8 mov edx, dword ptr [0x12750d88] */
  EDX = (r32((uint32_t)(0x12750d88)));
  /* 127307ee cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127307f1 jne 0x127307fb */
  if (!C.zf) goto L_127307fb;
  /* 127307f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127307f6 jmp 0x127308a2 */
  goto L_127308a2;
L_127307fb:;
  /* 127307fb push 0x1274d41c */
  push32((uint32_t)(0x1274d41cu));
  /* 12730800 mov eax, dword ptr [0x12750d88] */
  EAX = (r32((uint32_t)(0x12750d88)));
  /* 12730805 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12730807 push ecx */
  push32((uint32_t)(ECX));
  /* 12730808 call 0x12728460 */
  push32(0x1273080du); f_12728460();
  /* 1273080d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730810 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12730815 push 0x1274d44c */
  push32((uint32_t)(0x1274d44cu));
  /* 1273081a push 2 */
  push32((uint32_t)(0x2u));
  /* 1273081c push 2 */
  push32((uint32_t)(0x2u));
  /* 1273081e call 0x127254b0 */
  push32(0x12730823u); f_127254b0();
  /* 12730823 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730826 mov edx, dword ptr [0x12750d88] */
  EDX = (r32((uint32_t)(0x12750d88)));
  /* 1273082c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1273082f mov eax, dword ptr [0x12750d88] */
  EAX = (r32((uint32_t)(0x12750d88)));
  /* 12730834 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730838 jne 0x1273083f */
  if (!C.zf) goto L_1273083f;
  /* 1273083a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1273083d jmp 0x127308a2 */
  goto L_127308a2;
L_1273083f:;
  /* 1273083f mov ecx, dword ptr [0x12750d88] */
  ECX = (r32((uint32_t)(0x12750d88)));
  /* 12730845 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12730848 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1273084b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12730850 push 0x1274d44c */
  push32((uint32_t)(0x1274d44cu));
  /* 12730855 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730857 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730859 call 0x127254b0 */
  push32(0x1273085eu); f_127254b0();
  /* 1273085e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730861 mov ecx, dword ptr [0x12750d88] */
  ECX = (r32((uint32_t)(0x12750d88)));
  /* 12730867 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1273086a mov edx, dword ptr [0x12750d88] */
  EDX = (r32((uint32_t)(0x12750d88)));
  /* 12730870 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730874 jne 0x1273087b */
  if (!C.zf) goto L_1273087b;
  /* 12730876 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12730879 jmp 0x127308a2 */
  goto L_127308a2;
L_1273087b:;
  /* 1273087b mov eax, dword ptr [0x12750d88] */
  EAX = (r32((uint32_t)(0x12750d88)));
  /* 12730880 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12730883 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12730886 mov edx, dword ptr [0x12750d88] */
  EDX = (r32((uint32_t)(0x12750d88)));
  /* 1273088c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1273088e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12730890 mov byte ptr [0x1274fea8], cl */
  w8((uint32_t)(0x1274fea8), (CL));
  /* 12730896 mov dword ptr [0x1274feac], 1 */
  w32((uint32_t)(0x1274feac), (0x1u));
  /* 127308a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127308a2:;
  /* 127308a2 mov esp, ebp */
  ESP = (EBP);
  /* 127308a4 pop ebp */
  EBP = (pop32());
  /* 127308a5 ret  */
  ESPCHK(0x12730600u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x127308b0 (125 bytes, 49 insns) */
void f_127308b0(void) {
  FTRACE(0x127308b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127308b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127308b1 mov ebp, esp */
  EBP = (ESP);
  /* 127308b3 push ecx */
  push32((uint32_t)(ECX));
L_127308b4:;
  /* 127308b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127308b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127308ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127308bc je 0x12730929 */
  if (C.zf) goto L_12730929;
  /* 127308be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127308c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127308c4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127308c7 jl 0x127308ed */
  if ((C.sf!=C.of)) goto L_127308ed;
  /* 127308c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127308cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127308cf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127308d2 jg 0x127308ed */
  if ((!C.zf&&C.sf==C.of)) goto L_127308ed;
  /* 127308d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127308d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127308da sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127308dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127308e0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 127308e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127308e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127308e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127308eb jmp 0x12730927 */
  goto L_12730927;
L_127308ed:;
  /* 127308ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127308f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127308f3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127308f6 jne 0x1273091e */
  if (!C.zf) goto L_1273091e;
  /* 127308f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127308fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127308fe:;
  /* 127308fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730901 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730904 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12730907 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12730909 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273090c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273090f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12730912 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730915 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12730918 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1273091a jne 0x127308fe */
  if (!C.zf) goto L_127308fe;
  /* 1273091c jmp 0x12730927 */
  goto L_12730927;
L_1273091e:;
  /* 1273091e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730921 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730924 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12730927:;
  /* 12730927 jmp 0x127308b4 */
  goto L_127308b4;
L_12730929:;
  /* 12730929 mov esp, ebp */
  ESP = (EBP);
  /* 1273092b pop ebp */
  EBP = (pop32());
  /* 1273092c ret  */
  ESPCHK(0x127308b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010930 @ 0x12730930 (304 bytes, 85 insns) */
void f_12730930(void) {
  FTRACE(0x12730930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12730930 push ebp */
  push32((uint32_t)(EBP));
  /* 12730931 mov ebp, esp */
  EBP = (ESP);
  /* 12730933 push ecx */
  push32((uint32_t)(ECX));
  /* 12730934 cmp dword ptr [0x1275187c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1275187c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273093b je 0x127309fc */
  if (C.zf) goto L_127309fc;
  /* 12730941 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12730943 push 0x1274d458 */
  push32((uint32_t)(0x1274d458u));
  /* 12730948 push 2 */
  push32((uint32_t)(0x2u));
  /* 1273094a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1273094c push 1 */
  push32((uint32_t)(0x1u));
  /* 1273094e call 0x127258c0 */
  push32(0x12730953u); f_127258c0();
  /* 12730953 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730956 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12730959 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273095d jne 0x12730969 */
  if (!C.zf) goto L_12730969;
  /* 1273095f mov eax, 1 */
  EAX = (0x1u);
  /* 12730964 jmp 0x12730a5c */
  goto L_12730a5c;
L_12730969:;
  /* 12730969 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273096c push eax */
  push32((uint32_t)(EAX));
  /* 1273096d call 0x12730a60 */
  push32(0x12730972u); f_12730a60();
  /* 12730972 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730975 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12730977 je 0x1273099d */
  if (C.zf) goto L_1273099d;
  /* 12730979 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273097c push ecx */
  push32((uint32_t)(ECX));
  /* 1273097d call 0x12730cf0 */
  push32(0x12730982u); f_12730cf0();
  /* 12730982 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730985 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730987 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273098a push edx */
  push32((uint32_t)(EDX));
  /* 1273098b call 0x12725f40 */
  push32(0x12730990u); f_12725f40();
  /* 12730990 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730993 mov eax, 1 */
  EAX = (0x1u);
  /* 12730998 jmp 0x12730a5c */
  goto L_12730a5c;
L_1273099d:;
  /* 1273099d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127309a0 mov ecx, dword ptr [0x12750d88] */
  ECX = (r32((uint32_t)(0x12750d88)));
  /* 127309a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127309a8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127309aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127309ad mov ecx, dword ptr [0x12750d88] */
  ECX = (r32((uint32_t)(0x12750d88)));
  /* 127309b3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127309b6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 127309b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127309bc mov ecx, dword ptr [0x12750d88] */
  ECX = (r32((uint32_t)(0x12750d88)));
  /* 127309c2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127309c5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 127309c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127309cb mov dword ptr [0x12750d88], eax */
  w32((uint32_t)(0x12750d88), (EAX));
  /* 127309d0 mov ecx, dword ptr [0x127518b4] */
  ECX = (r32((uint32_t)(0x127518b4)));
  /* 127309d6 push ecx */
  push32((uint32_t)(ECX));
  /* 127309d7 call 0x12730cf0 */
  push32(0x127309dcu); f_12730cf0();
  /* 127309dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127309df push 2 */
  push32((uint32_t)(0x2u));
  /* 127309e1 mov edx, dword ptr [0x127518b4] */
  EDX = (r32((uint32_t)(0x127518b4)));
  /* 127309e7 push edx */
  push32((uint32_t)(EDX));
  /* 127309e8 call 0x12725f40 */
  push32(0x127309edu); f_12725f40();
  /* 127309ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127309f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127309f3 mov dword ptr [0x127518b4], eax */
  w32((uint32_t)(0x127518b4), (EAX));
  /* 127309f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127309fa jmp 0x12730a5c */
  goto L_12730a5c;
L_127309fc:;
  /* 127309fc mov ecx, dword ptr [0x12750d88] */
  ECX = (r32((uint32_t)(0x12750d88)));
  /* 12730a02 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12730a04 mov dword ptr [0x12750d58], edx */
  w32((uint32_t)(0x12750d58), (EDX));
  /* 12730a0a mov eax, dword ptr [0x12750d88] */
  EAX = (r32((uint32_t)(0x12750d88)));
  /* 12730a0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12730a12 mov dword ptr [0x12750d5c], ecx */
  w32((uint32_t)(0x12750d5c), (ECX));
  /* 12730a18 mov edx, dword ptr [0x12750d88] */
  EDX = (r32((uint32_t)(0x12750d88)));
  /* 12730a1e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12730a21 mov dword ptr [0x12750d60], eax */
  w32((uint32_t)(0x12750d60), (EAX));
  /* 12730a26 mov dword ptr [0x12750d88], 0x12750d58 */
  w32((uint32_t)(0x12750d88), (0x12750d58u));
  /* 12730a30 mov ecx, dword ptr [0x127518b4] */
  ECX = (r32((uint32_t)(0x127518b4)));
  /* 12730a36 push ecx */
  push32((uint32_t)(ECX));
  /* 12730a37 call 0x12730cf0 */
  push32(0x12730a3cu); f_12730cf0();
  /* 12730a3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730a3f push 2 */
  push32((uint32_t)(0x2u));
  /* 12730a41 mov edx, dword ptr [0x127518b4] */
  EDX = (r32((uint32_t)(0x127518b4)));
  /* 12730a47 push edx */
  push32((uint32_t)(EDX));
  /* 12730a48 call 0x12725f40 */
  push32(0x12730a4du); f_12725f40();
  /* 12730a4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730a50 mov dword ptr [0x127518b4], 0 */
  w32((uint32_t)(0x127518b4), (0x0u));
  /* 12730a5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12730a5c:;
  /* 12730a5c mov esp, ebp */
  ESP = (EBP);
  /* 12730a5e pop ebp */
  EBP = (pop32());
  /* 12730a5f ret  */
  ESPCHK(0x12730930u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a60 @ 0x12730a60 (525 bytes, 200 insns) */
void f_12730a60(void) {
  FTRACE(0x12730a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12730a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12730a61 mov ebp, esp */
  EBP = (ESP);
  /* 12730a63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12730a66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12730a6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12730a6f mov ax, word ptr [0x127518d4] */
  AX = (r16((uint32_t)(0x127518d4)));
  /* 12730a75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12730a78 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730a7c jne 0x12730a86 */
  if (!C.zf) goto L_12730a86;
  /* 12730a7e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12730a81 jmp 0x12730c69 */
  goto L_12730c69;
L_12730a86:;
  /* 12730a86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730a89 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730a8c push ecx */
  push32((uint32_t)(ECX));
  /* 12730a8d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12730a8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730a92 push edx */
  push32((uint32_t)(EDX));
  /* 12730a93 push 1 */
  push32((uint32_t)(0x1u));
  /* 12730a95 call 0x12733670 */
  push32(0x12730a9au); f_12733670();
  /* 12730a9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730a9d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12730aa0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730aa2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12730aa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730aa8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730aab push edx */
  push32((uint32_t)(EDX));
  /* 12730aac push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12730aae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730ab1 push eax */
  push32((uint32_t)(EAX));
  /* 12730ab2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12730ab4 call 0x12733670 */
  push32(0x12730ab9u); f_12733670();
  /* 12730ab9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730abc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12730abf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730ac1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12730ac4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730ac7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730aca push edx */
  push32((uint32_t)(EDX));
  /* 12730acb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12730acd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730ad0 push eax */
  push32((uint32_t)(EAX));
  /* 12730ad1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12730ad3 call 0x12733670 */
  push32(0x12730ad8u); f_12733670();
  /* 12730ad8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730adb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12730ade or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730ae0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12730ae3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730ae6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730ae9 push edx */
  push32((uint32_t)(EDX));
  /* 12730aea push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12730aec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730aef push eax */
  push32((uint32_t)(EAX));
  /* 12730af0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12730af2 call 0x12733670 */
  push32(0x12730af7u); f_12733670();
  /* 12730af7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730afa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12730afd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730aff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12730b02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730b05 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730b08 push edx */
  push32((uint32_t)(EDX));
  /* 12730b09 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12730b0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730b0e push eax */
  push32((uint32_t)(EAX));
  /* 12730b0f push 1 */
  push32((uint32_t)(0x1u));
  /* 12730b11 call 0x12733670 */
  push32(0x12730b16u); f_12733670();
  /* 12730b16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730b19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12730b1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730b1e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12730b21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730b24 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12730b27 push eax */
  push32((uint32_t)(EAX));
  /* 12730b28 call 0x12730c70 */
  push32(0x12730b2du); f_12730c70();
  /* 12730b2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730b30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730b33 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730b36 push ecx */
  push32((uint32_t)(ECX));
  /* 12730b37 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12730b39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730b3c push edx */
  push32((uint32_t)(EDX));
  /* 12730b3d push 1 */
  push32((uint32_t)(0x1u));
  /* 12730b3f call 0x12733670 */
  push32(0x12730b44u); f_12733670();
  /* 12730b44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730b47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12730b4a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730b4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12730b4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730b52 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730b55 push edx */
  push32((uint32_t)(EDX));
  /* 12730b56 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12730b58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730b5b push eax */
  push32((uint32_t)(EAX));
  /* 12730b5c push 1 */
  push32((uint32_t)(0x1u));
  /* 12730b5e call 0x12733670 */
  push32(0x12730b63u); f_12733670();
  /* 12730b63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730b66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12730b69 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730b6b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12730b6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730b71 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730b74 push edx */
  push32((uint32_t)(EDX));
  /* 12730b75 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12730b77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730b7a push eax */
  push32((uint32_t)(EAX));
  /* 12730b7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12730b7d call 0x12733670 */
  push32(0x12730b82u); f_12733670();
  /* 12730b82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730b85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12730b88 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730b8a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12730b8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730b90 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730b93 push edx */
  push32((uint32_t)(EDX));
  /* 12730b94 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12730b96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730b99 push eax */
  push32((uint32_t)(EAX));
  /* 12730b9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12730b9c call 0x12733670 */
  push32(0x12730ba1u); f_12733670();
  /* 12730ba1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730ba4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12730ba7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730ba9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12730bac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730baf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730bb2 push edx */
  push32((uint32_t)(EDX));
  /* 12730bb3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12730bb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730bb8 push eax */
  push32((uint32_t)(EAX));
  /* 12730bb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12730bbb call 0x12733670 */
  push32(0x12730bc0u); f_12733670();
  /* 12730bc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730bc3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12730bc6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730bc8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12730bcb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730bce add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730bd1 push edx */
  push32((uint32_t)(EDX));
  /* 12730bd2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12730bd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730bd7 push eax */
  push32((uint32_t)(EAX));
  /* 12730bd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12730bda call 0x12733670 */
  push32(0x12730bdfu); f_12733670();
  /* 12730bdf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730be2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12730be5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730be7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12730bea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730bed add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730bf0 push edx */
  push32((uint32_t)(EDX));
  /* 12730bf1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12730bf3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730bf6 push eax */
  push32((uint32_t)(EAX));
  /* 12730bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12730bf9 call 0x12733670 */
  push32(0x12730bfeu); f_12733670();
  /* 12730bfe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730c01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12730c04 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730c06 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12730c09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730c0c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730c0f push edx */
  push32((uint32_t)(EDX));
  /* 12730c10 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12730c12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730c15 push eax */
  push32((uint32_t)(EAX));
  /* 12730c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12730c18 call 0x12733670 */
  push32(0x12730c1du); f_12733670();
  /* 12730c1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730c20 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12730c23 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730c25 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12730c28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730c2b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730c2e push edx */
  push32((uint32_t)(EDX));
  /* 12730c2f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12730c31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730c34 push eax */
  push32((uint32_t)(EAX));
  /* 12730c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12730c37 call 0x12733670 */
  push32(0x12730c3cu); f_12733670();
  /* 12730c3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730c3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12730c42 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730c44 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12730c47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730c4a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730c4d push edx */
  push32((uint32_t)(EDX));
  /* 12730c4e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12730c50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730c53 push eax */
  push32((uint32_t)(EAX));
  /* 12730c54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12730c56 call 0x12733670 */
  push32(0x12730c5bu); f_12733670();
  /* 12730c5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730c5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12730c61 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12730c63 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12730c66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12730c69:;
  /* 12730c69 mov esp, ebp */
  ESP = (EBP);
  /* 12730c6b pop ebp */
  EBP = (pop32());
  /* 12730c6c ret  */
  ESPCHK(0x12730a60u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12730c70 (125 bytes, 49 insns) */
void f_12730c70(void) {
  FTRACE(0x12730c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12730c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12730c71 mov ebp, esp */
  EBP = (ESP);
  /* 12730c73 push ecx */
  push32((uint32_t)(ECX));
L_12730c74:;
  /* 12730c74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730c77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12730c7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12730c7c je 0x12730ce9 */
  if (C.zf) goto L_12730ce9;
  /* 12730c7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730c81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12730c84 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730c87 jl 0x12730cad */
  if ((C.sf!=C.of)) goto L_12730cad;
  /* 12730c89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730c8c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12730c8f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730c92 jg 0x12730cad */
  if ((!C.zf&&C.sf==C.of)) goto L_12730cad;
  /* 12730c94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730c97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12730c9a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12730c9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730ca0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12730ca2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730ca5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730ca8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12730cab jmp 0x12730ce7 */
  goto L_12730ce7;
L_12730cad:;
  /* 12730cad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730cb0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12730cb3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730cb6 jne 0x12730cde */
  if (!C.zf) goto L_12730cde;
  /* 12730cb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730cbb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12730cbe:;
  /* 12730cbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730cc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730cc4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12730cc7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12730cc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730ccc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730ccf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12730cd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12730cd5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12730cd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12730cda jne 0x12730cbe */
  if (!C.zf) goto L_12730cbe;
  /* 12730cdc jmp 0x12730ce7 */
  goto L_12730ce7;
L_12730cde:;
  /* 12730cde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730ce1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730ce4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12730ce7:;
  /* 12730ce7 jmp 0x12730c74 */
  goto L_12730c74;
L_12730ce9:;
  /* 12730ce9 mov esp, ebp */
  ESP = (EBP);
  /* 12730ceb pop ebp */
  EBP = (pop32());
  /* 12730cec ret  */
  ESPCHK(0x12730c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010cf0 @ 0x12730cf0 (147 bytes, 52 insns) */
void f_12730cf0(void) {
  FTRACE(0x12730cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12730cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12730cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12730cf3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730cf7 jne 0x12730cfe */
  if (!C.zf) goto L_12730cfe;
  /* 12730cf9 jmp 0x12730d81 */
  goto L_12730d81;
L_12730cfe:;
  /* 12730cfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730d01 cmp dword ptr [eax + 0xc], 0x12751910 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12751910u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730d08 je 0x12730d81 */
  if (C.zf) goto L_12730d81;
  /* 12730d0a push 2 */
  push32((uint32_t)(0x2u));
  /* 12730d0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730d0f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12730d12 push edx */
  push32((uint32_t)(EDX));
  /* 12730d13 call 0x12725f40 */
  push32(0x12730d18u); f_12725f40();
  /* 12730d18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730d1b push 2 */
  push32((uint32_t)(0x2u));
  /* 12730d1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730d20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12730d23 push ecx */
  push32((uint32_t)(ECX));
  /* 12730d24 call 0x12725f40 */
  push32(0x12730d29u); f_12725f40();
  /* 12730d29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730d2c push 2 */
  push32((uint32_t)(0x2u));
  /* 12730d2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730d31 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12730d34 push eax */
  push32((uint32_t)(EAX));
  /* 12730d35 call 0x12725f40 */
  push32(0x12730d3au); f_12725f40();
  /* 12730d3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730d3d push 2 */
  push32((uint32_t)(0x2u));
  /* 12730d3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730d42 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12730d45 push edx */
  push32((uint32_t)(EDX));
  /* 12730d46 call 0x12725f40 */
  push32(0x12730d4bu); f_12725f40();
  /* 12730d4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730d4e push 2 */
  push32((uint32_t)(0x2u));
  /* 12730d50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730d53 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12730d56 push ecx */
  push32((uint32_t)(ECX));
  /* 12730d57 call 0x12725f40 */
  push32(0x12730d5cu); f_12725f40();
  /* 12730d5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730d5f push 2 */
  push32((uint32_t)(0x2u));
  /* 12730d61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730d64 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12730d67 push eax */
  push32((uint32_t)(EAX));
  /* 12730d68 call 0x12725f40 */
  push32(0x12730d6du); f_12725f40();
  /* 12730d6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730d70 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730d72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12730d75 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12730d78 push edx */
  push32((uint32_t)(EDX));
  /* 12730d79 call 0x12725f40 */
  push32(0x12730d7eu); f_12725f40();
  /* 12730d7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12730d81:;
  /* 12730d81 pop ebp */
  EBP = (pop32());
  /* 12730d82 ret  */
  ESPCHK(0x12730cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d90 @ 0x12730d90 (928 bytes, 284 insns) */
void f_12730d90(void) {
  FTRACE(0x12730d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12730d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12730d91 mov ebp, esp */
  EBP = (ESP);
  /* 12730d93 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12730d96 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12730d9d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12730da4 cmp dword ptr [0x12751878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730dab je 0x127310e1 */
  if (C.zf) goto L_127310e1;
  /* 12730db1 cmp dword ptr [0x12751888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730db8 jne 0x12730de0 */
  if (!C.zf) goto L_12730de0;
  /* 12730dba push 0x12751888 */
  push32((uint32_t)(0x12751888u));
  /* 12730dbf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12730dc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12730dc6 mov ax, word ptr [0x127518cc] */
  AX = (r16((uint32_t)(0x127518cc)));
  /* 12730dcc push eax */
  push32((uint32_t)(EAX));
  /* 12730dcd push 0 */
  push32((uint32_t)(0x0u));
  /* 12730dcf call 0x12733670 */
  push32(0x12730dd4u); f_12733670();
  /* 12730dd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730dd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12730dd9 je 0x12730de0 */
  if (C.zf) goto L_12730de0;
  /* 12730ddb jmp 0x127310a2 */
  goto L_127310a2;
L_12730de0:;
  /* 12730de0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12730de2 push 0x1274d464 */
  push32((uint32_t)(0x1274d464u));
  /* 12730de7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730de9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12730dee call 0x127254b0 */
  push32(0x12730df3u); f_127254b0();
  /* 12730df3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730df6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12730df9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12730dfb push 0x1274d464 */
  push32((uint32_t)(0x1274d464u));
  /* 12730e00 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730e02 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12730e07 call 0x127254b0 */
  push32(0x12730e0cu); f_127254b0();
  /* 12730e0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730e0f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12730e12 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12730e14 push 0x1274d464 */
  push32((uint32_t)(0x1274d464u));
  /* 12730e19 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730e1b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12730e20 call 0x127254b0 */
  push32(0x12730e25u); f_127254b0();
  /* 12730e25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730e28 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12730e2b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12730e2d push 0x1274d464 */
  push32((uint32_t)(0x1274d464u));
  /* 12730e32 push 2 */
  push32((uint32_t)(0x2u));
  /* 12730e34 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12730e39 call 0x127254b0 */
  push32(0x12730e3eu); f_127254b0();
  /* 12730e3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730e41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12730e44 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730e48 je 0x12730e5c */
  if (C.zf) goto L_12730e5c;
  /* 12730e4a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730e4e je 0x12730e5c */
  if (C.zf) goto L_12730e5c;
  /* 12730e50 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730e54 je 0x12730e5c */
  if (C.zf) goto L_12730e5c;
  /* 12730e56 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730e5a jne 0x12730e61 */
  if (!C.zf) goto L_12730e61;
L_12730e5c:;
  /* 12730e5c jmp 0x127310a2 */
  goto L_127310a2;
L_12730e61:;
  /* 12730e61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12730e64 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12730e67 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12730e6e jmp 0x12730e79 */
  goto L_12730e79;
L_12730e70:;
  /* 12730e70 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12730e73 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730e76 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12730e79:;
  /* 12730e79 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730e80 jge 0x12730e95 */
  if ((C.sf==C.of)) goto L_12730e95;
  /* 12730e82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12730e85 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12730e88 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12730e8a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12730e8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730e90 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12730e93 jmp 0x12730e70 */
  goto L_12730e70;
L_12730e95:;
  /* 12730e95 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12730e98 push eax */
  push32((uint32_t)(EAX));
  /* 12730e99 mov ecx, dword ptr [0x12751888] */
  ECX = (r32((uint32_t)(0x12751888)));
  /* 12730e9f push ecx */
  push32((uint32_t)(ECX));
  /* 12730ea0 call dword ptr [0x12754310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754310))), 0x12730ea6u);
  /* 12730ea6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12730ea8 jne 0x12730eaf */
  if (!C.zf) goto L_12730eaf;
  /* 12730eaa jmp 0x127310a2 */
  goto L_127310a2;
L_12730eaf:;
  /* 12730eaf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730eb3 jbe 0x12730eba */
  if ((C.cf||C.zf)) goto L_12730eba;
  /* 12730eb5 jmp 0x127310a2 */
  goto L_127310a2;
L_12730eba:;
  /* 12730eba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12730ebd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12730ec3 mov dword ptr [0x1274fea4], edx */
  w32((uint32_t)(0x1274fea4), (EDX));
  /* 12730ec9 cmp dword ptr [0x1274fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1274fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730ed0 jle 0x12730f29 */
  if ((C.zf||C.sf!=C.of)) goto L_12730f29;
  /* 12730ed2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12730ed5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12730ed8 jmp 0x12730ee3 */
  goto L_12730ee3;
L_12730eda:;
  /* 12730eda mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12730edd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730ee0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12730ee3:;
  /* 12730ee3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12730ee6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12730ee8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12730eea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12730eec je 0x12730f29 */
  if (C.zf) goto L_12730f29;
  /* 12730eee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12730ef1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12730ef3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12730ef6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12730ef8 je 0x12730f29 */
  if (C.zf) goto L_12730f29;
  /* 12730efa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12730efd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12730eff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12730f01 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12730f04 jmp 0x12730f0f */
  goto L_12730f0f;
L_12730f06:;
  /* 12730f06 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12730f09 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730f0c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12730f0f:;
  /* 12730f0f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12730f12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12730f14 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12730f17 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730f1a jg 0x12730f27 */
  if ((!C.zf&&C.sf==C.of)) goto L_12730f27;
  /* 12730f1c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12730f1f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730f22 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12730f25 jmp 0x12730f06 */
  goto L_12730f06;
L_12730f27:;
  /* 12730f27 jmp 0x12730eda */
  goto L_12730eda;
L_12730f29:;
  /* 12730f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12730f2b push 0 */
  push32((uint32_t)(0x0u));
  /* 12730f2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12730f2f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12730f32 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730f35 push eax */
  push32((uint32_t)(EAX));
  /* 12730f36 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12730f3b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12730f3e push ecx */
  push32((uint32_t)(ECX));
  /* 12730f3f push 1 */
  push32((uint32_t)(0x1u));
  /* 12730f41 call 0x1272d6e0 */
  push32(0x12730f46u); f_1272d6e0();
  /* 12730f46 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730f49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12730f4b jne 0x12730f52 */
  if (!C.zf) goto L_12730f52;
  /* 12730f4d jmp 0x127310a2 */
  goto L_127310a2;
L_12730f52:;
  /* 12730f52 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12730f55 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12730f5a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12730f5d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12730f60 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12730f67 jmp 0x12730f72 */
  goto L_12730f72;
L_12730f69:;
  /* 12730f69 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12730f6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730f6f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12730f72:;
  /* 12730f72 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730f79 jge 0x12730f90 */
  if ((C.sf==C.of)) goto L_12730f90;
  /* 12730f7b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12730f7e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12730f82 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12730f85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12730f88 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730f8b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12730f8e jmp 0x12730f69 */
  goto L_12730f69;
L_12730f90:;
  /* 12730f90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12730f92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12730f94 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12730f97 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730f9a push edx */
  push32((uint32_t)(EDX));
  /* 12730f9b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12730fa0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12730fa3 push eax */
  push32((uint32_t)(EAX));
  /* 12730fa4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12730fa6 call 0x12733910 */
  push32(0x12730fabu); f_12733910();
  /* 12730fab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12730fae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12730fb0 jne 0x12730fb7 */
  if (!C.zf) goto L_12730fb7;
  /* 12730fb2 jmp 0x127310a2 */
  goto L_127310a2;
L_12730fb7:;
  /* 12730fb7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12730fba mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12730fbf cmp dword ptr [0x1274fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1274fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12730fc6 jle 0x12731023 */
  if ((C.zf||C.sf!=C.of)) goto L_12731023;
  /* 12730fc8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12730fcb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12730fce jmp 0x12730fd9 */
  goto L_12730fd9;
L_12730fd0:;
  /* 12730fd0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12730fd3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12730fd6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12730fd9:;
  /* 12730fd9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12730fdc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12730fde mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12730fe0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12730fe2 je 0x12731023 */
  if (C.zf) goto L_12731023;
  /* 12730fe4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12730fe7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12730fe9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12730fec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12730fee je 0x12731023 */
  if (C.zf) goto L_12731023;
  /* 12730ff0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12730ff3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12730ff5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12730ff7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12730ffa jmp 0x12731005 */
  goto L_12731005;
L_12730ffc:;
  /* 12730ffc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12730fff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731002 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12731005:;
  /* 12731005 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12731008 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1273100a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1273100d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731010 jg 0x12731021 */
  if ((!C.zf&&C.sf==C.of)) goto L_12731021;
  /* 12731012 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12731015 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12731018 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1273101f jmp 0x12730ffc */
  goto L_12730ffc;
L_12731021:;
  /* 12731021 jmp 0x12730fd0 */
  goto L_12730fd0;
L_12731023:;
  /* 12731023 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12731026 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731029 mov dword ptr [0x1274fc98], eax */
  w32((uint32_t)(0x1274fc98), (EAX));
  /* 1273102e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12731031 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731034 mov dword ptr [0x1274fc9c], ecx */
  w32((uint32_t)(0x1274fc9c), (ECX));
  /* 1273103a cmp dword ptr [0x127518b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731041 je 0x12731054 */
  if (C.zf) goto L_12731054;
  /* 12731043 push 2 */
  push32((uint32_t)(0x2u));
  /* 12731045 mov edx, dword ptr [0x127518b8] */
  EDX = (r32((uint32_t)(0x127518b8)));
  /* 1273104b push edx */
  push32((uint32_t)(EDX));
  /* 1273104c call 0x12725f40 */
  push32(0x12731051u); f_12725f40();
  /* 12731051 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12731054:;
  /* 12731054 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12731057 mov dword ptr [0x127518b8], eax */
  w32((uint32_t)(0x127518b8), (EAX));
  /* 1273105c cmp dword ptr [0x127518bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731063 je 0x12731076 */
  if (C.zf) goto L_12731076;
  /* 12731065 push 2 */
  push32((uint32_t)(0x2u));
  /* 12731067 mov ecx, dword ptr [0x127518bc] */
  ECX = (r32((uint32_t)(0x127518bc)));
  /* 1273106d push ecx */
  push32((uint32_t)(ECX));
  /* 1273106e call 0x12725f40 */
  push32(0x12731073u); f_12725f40();
  /* 12731073 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12731076:;
  /* 12731076 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12731079 mov dword ptr [0x127518bc], edx */
  w32((uint32_t)(0x127518bc), (EDX));
  /* 1273107f push 2 */
  push32((uint32_t)(0x2u));
  /* 12731081 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12731084 push eax */
  push32((uint32_t)(EAX));
  /* 12731085 call 0x12725f40 */
  push32(0x1273108au); f_12725f40();
  /* 1273108a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273108d push 2 */
  push32((uint32_t)(0x2u));
  /* 1273108f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12731092 push ecx */
  push32((uint32_t)(ECX));
  /* 12731093 call 0x12725f40 */
  push32(0x12731098u); f_12725f40();
  /* 12731098 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273109b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1273109d jmp 0x1273112c */
  goto L_1273112c;
L_127310a2:;
  /* 127310a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 127310a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127310a7 push edx */
  push32((uint32_t)(EDX));
  /* 127310a8 call 0x12725f40 */
  push32(0x127310adu); f_12725f40();
  /* 127310ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127310b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 127310b2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127310b5 push eax */
  push32((uint32_t)(EAX));
  /* 127310b6 call 0x12725f40 */
  push32(0x127310bbu); f_12725f40();
  /* 127310bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127310be push 2 */
  push32((uint32_t)(0x2u));
  /* 127310c0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127310c3 push ecx */
  push32((uint32_t)(ECX));
  /* 127310c4 call 0x12725f40 */
  push32(0x127310c9u); f_12725f40();
  /* 127310c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127310cc push 2 */
  push32((uint32_t)(0x2u));
  /* 127310ce mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127310d1 push edx */
  push32((uint32_t)(EDX));
  /* 127310d2 call 0x12725f40 */
  push32(0x127310d7u); f_12725f40();
  /* 127310d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127310da mov eax, 1 */
  EAX = (0x1u);
  /* 127310df jmp 0x1273112c */
  goto L_1273112c;
L_127310e1:;
  /* 127310e1 mov dword ptr [0x1274fc98], 0x1274fca2 */
  w32((uint32_t)(0x1274fc98), (0x1274fca2u));
  /* 127310eb mov dword ptr [0x1274fc9c], 0x1274fca2 */
  w32((uint32_t)(0x1274fc9c), (0x1274fca2u));
  /* 127310f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 127310f7 mov eax, dword ptr [0x127518b8] */
  EAX = (r32((uint32_t)(0x127518b8)));
  /* 127310fc push eax */
  push32((uint32_t)(EAX));
  /* 127310fd call 0x12725f40 */
  push32(0x12731102u); f_12725f40();
  /* 12731102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731105 push 2 */
  push32((uint32_t)(0x2u));
  /* 12731107 mov ecx, dword ptr [0x127518bc] */
  ECX = (r32((uint32_t)(0x127518bc)));
  /* 1273110d push ecx */
  push32((uint32_t)(ECX));
  /* 1273110e call 0x12725f40 */
  push32(0x12731113u); f_12725f40();
  /* 12731113 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731116 mov dword ptr [0x127518b8], 0 */
  w32((uint32_t)(0x127518b8), (0x0u));
  /* 12731120 mov dword ptr [0x127518bc], 0 */
  w32((uint32_t)(0x127518bc), (0x0u));
  /* 1273112a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1273112c:;
  /* 1273112c mov esp, ebp */
  ESP = (EBP);
  /* 1273112e pop ebp */
  EBP = (pop32());
  /* 1273112f ret  */
  ESPCHK(0x12730d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011130 @ 0x12731130 (7 bytes, 5 insns) */
void f_12731130(void) {
  FTRACE(0x12731130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731130 push ebp */
  push32((uint32_t)(EBP));
  /* 12731131 mov ebp, esp */
  EBP = (ESP);
  /* 12731133 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12731135 pop ebp */
  EBP = (pop32());
  /* 12731136 ret  */
  ESPCHK(0x12731130u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12731140 (129 bytes, 56 insns) */
void f_12731140(void) {
  FTRACE(0x12731140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731140 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12731144 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12731148 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1273114e jne 0x1273118c */
  if (!C.zf) goto L_1273118c;
L_12731150:;
  /* 12731150 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12731152 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12731154 jne 0x12731184 */
  if (!C.zf) goto L_12731184;
  /* 12731156 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12731158 je 0x12731180 */
  if (C.zf) goto L_12731180;
  /* 1273115a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1273115d jne 0x12731184 */
  if (!C.zf) goto L_12731184;
  /* 1273115f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12731161 je 0x12731180 */
  if (C.zf) goto L_12731180;
  /* 12731163 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12731166 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12731169 jne 0x12731184 */
  if (!C.zf) goto L_12731184;
  /* 1273116b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1273116d je 0x12731180 */
  if (C.zf) goto L_12731180;
  /* 1273116f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12731172 jne 0x12731184 */
  if (!C.zf) goto L_12731184;
  /* 12731174 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731177 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273117a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1273117c jne 0x12731150 */
  if (!C.zf) goto L_12731150;
  /* 1273117e mov edi, edi */
  EDI = (EDI);
L_12731180:;
  /* 12731180 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12731182 ret  */
  ESPCHK(0x12731140u, _esp0);
  ESP += 4; return;
  /* 12731183 nop  */
  /* nop */
L_12731184:;
  /* 12731184 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731186 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12731188 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12731189 ret  */
  ESPCHK(0x12731140u, _esp0);
  ESP += 4; return;
  /* 1273118a mov edi, edi */
  EDI = (EDI);
L_1273118c:;
  /* 1273118c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12731192 je 0x127311a8 */
  if (C.zf) goto L_127311a8;
  /* 12731194 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12731196 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12731197 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12731199 jne 0x12731184 */
  if (!C.zf) goto L_12731184;
  /* 1273119b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1273119c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1273119e je 0x12731180 */
  if (C.zf) goto L_12731180;
  /* 127311a0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 127311a6 je 0x12731150 */
  if (C.zf) goto L_12731150;
L_127311a8:;
  /* 127311a8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 127311ab add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127311ae cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127311b0 jne 0x12731184 */
  if (!C.zf) goto L_12731184;
  /* 127311b2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127311b4 je 0x12731180 */
  if (C.zf) goto L_12731180;
  /* 127311b6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127311b9 jne 0x12731184 */
  if (!C.zf) goto L_12731184;
  /* 127311bb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 127311bd je 0x12731180 */
  if (C.zf) goto L_12731180;
  /* 127311bf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127311c2 jmp 0x12731150 */
  goto L_12731150;
}

/* FUN_100111d0 @ 0x127311d0 (62 bytes, 35 insns) */
void f_127311d0(void) {
  FTRACE(0x127311d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127311d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127311d1 mov ebp, esp */
  EBP = (ESP);
  /* 127311d3 push esi */
  push32((uint32_t)(ESI));
  /* 127311d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127311d6 push eax */
  push32((uint32_t)(EAX));
  /* 127311d7 push eax */
  push32((uint32_t)(EAX));
  /* 127311d8 push eax */
  push32((uint32_t)(EAX));
  /* 127311d9 push eax */
  push32((uint32_t)(EAX));
  /* 127311da push eax */
  push32((uint32_t)(EAX));
  /* 127311db push eax */
  push32((uint32_t)(EAX));
  /* 127311dc push eax */
  push32((uint32_t)(EAX));
  /* 127311dd push eax */
  push32((uint32_t)(EAX));
  /* 127311de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127311e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127311e4:;
  /* 127311e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127311e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127311e8 je 0x127311f1 */
  if (C.zf) goto L_127311f1;
  /* 127311ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 127311eb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x127311eb");
  /* 127311ef jmp 0x127311e4 */
  goto L_127311e4;
L_127311f1:;
  /* 127311f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 127311f4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127311f7 nop  */
  /* nop */
L_127311f8:;
  /* 127311f8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 127311f9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127311fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127311fd je 0x12731206 */
  if (C.zf) goto L_12731206;
  /* 127311ff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12731200 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12731200");
  /* 12731204 jae 0x127311f8 */
  if (!C.cf) goto L_127311f8;
L_12731206:;
  /* 12731206 mov eax, ecx */
  EAX = (ECX);
  /* 12731208 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273120b pop esi */
  ESI = (pop32());
  /* 1273120c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1273120d ret  */
  ESPCHK(0x127311d0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12731210 (56 bytes, 31 insns) */
void f_12731210(void) {
  FTRACE(0x12731210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731210 push ebp */
  push32((uint32_t)(EBP));
  /* 12731211 mov ebp, esp */
  EBP = (ESP);
  /* 12731213 push edi */
  push32((uint32_t)(EDI));
  /* 12731214 push esi */
  push32((uint32_t)(ESI));
  /* 12731215 push ebx */
  push32((uint32_t)(EBX));
  /* 12731216 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12731219 jecxz 0x12731241 */
  x86_unimpl("jecxz @ 0x12731219");
  /* 1273121b mov ebx, ecx */
  EBX = (ECX);
  /* 1273121d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12731220 mov esi, edi */
  ESI = (EDI);
  /* 12731222 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12731224 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12731226 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12731228 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273122a mov edi, esi */
  EDI = (ESI);
  /* 1273122c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1273122f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12731231 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12731234 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12731236 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12731239 ja 0x1273123f */
  if ((!C.cf&&!C.zf)) goto L_1273123f;
  /* 1273123b je 0x12731241 */
  if (C.zf) goto L_12731241;
  /* 1273123d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1273123e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1273123f:;
  /* 1273123f not ecx */
  ECX = (~(ECX));
L_12731241:;
  /* 12731241 mov eax, ecx */
  EAX = (ECX);
  /* 12731243 pop ebx */
  EBX = (pop32());
  /* 12731244 pop esi */
  ESI = (pop32());
  /* 12731245 pop edi */
  EDI = (pop32());
  /* 12731246 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12731247 ret  */
  ESPCHK(0x12731210u, _esp0);
  ESP += 4; return;
}

/* FUN_10011250 @ 0x12731250 (58 bytes, 32 insns) */
void f_12731250(void) {
  FTRACE(0x12731250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731250 push ebp */
  push32((uint32_t)(EBP));
  /* 12731251 mov ebp, esp */
  EBP = (ESP);
  /* 12731253 push esi */
  push32((uint32_t)(ESI));
  /* 12731254 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12731256 push eax */
  push32((uint32_t)(EAX));
  /* 12731257 push eax */
  push32((uint32_t)(EAX));
  /* 12731258 push eax */
  push32((uint32_t)(EAX));
  /* 12731259 push eax */
  push32((uint32_t)(EAX));
  /* 1273125a push eax */
  push32((uint32_t)(EAX));
  /* 1273125b push eax */
  push32((uint32_t)(EAX));
  /* 1273125c push eax */
  push32((uint32_t)(EAX));
  /* 1273125d push eax */
  push32((uint32_t)(EAX));
  /* 1273125e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12731261 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12731264:;
  /* 12731264 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12731266 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12731268 je 0x12731271 */
  if (C.zf) goto L_12731271;
  /* 1273126a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1273126b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1273126b");
  /* 1273126f jmp 0x12731264 */
  goto L_12731264;
L_12731271:;
  /* 12731271 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12731274:;
  /* 12731274 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12731276 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12731278 je 0x12731284 */
  if (C.zf) goto L_12731284;
  /* 1273127a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1273127b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1273127b");
  /* 1273127f jae 0x12731274 */
  if (!C.cf) goto L_12731274;
  /* 12731281 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12731284:;
  /* 12731284 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731287 pop esi */
  ESI = (pop32());
  /* 12731288 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12731289 ret  */
  ESPCHK(0x12731250u, _esp0);
  ESP += 4; return;
}

/* FUN_10011290 @ 0x12731290 (512 bytes, 147 insns) */
void f_12731290(void) {
  FTRACE(0x12731290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731290 push ebp */
  push32((uint32_t)(EBP));
  /* 12731291 mov ebp, esp */
  EBP = (ESP);
  /* 12731293 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731296 cmp dword ptr [0x12751904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273129d jne 0x127312c2 */
  if (!C.zf) goto L_127312c2;
  /* 1273129f call 0x12731d60 */
  push32(0x127312a4u); f_12731d60();
  /* 127312a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127312a6 je 0x127312b2 */
  if (C.zf) goto L_127312b2;
  /* 127312a8 mov eax, dword ptr [0x127542d4] */
  EAX = (r32((uint32_t)(0x127542d4)));
  /* 127312ad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127312b0 jmp 0x127312b9 */
  goto L_127312b9;
L_127312b2:;
  /* 127312b2 mov dword ptr [ebp - 8], 0x12731db0 */
  w32((uint32_t)(EBP + -0x8), (0x12731db0u));
L_127312b9:;
  /* 127312b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127312bc mov dword ptr [0x12751904], ecx */
  w32((uint32_t)(0x12751904), (ECX));
L_127312c2:;
  /* 127312c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127312c6 jne 0x127312d2 */
  if (!C.zf) goto L_127312d2;
  /* 127312c8 call 0x12731bb0 */
  push32(0x127312cdu); f_12731bb0();
  /* 127312cd jmp 0x1273139e */
  goto L_1273139e;
L_127312d2:;
  /* 127312d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127312d5 mov dword ptr [0x127518f4], edx */
  w32((uint32_t)(0x127518f4), (EDX));
  /* 127312db cmp dword ptr [0x127518f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127312e2 je 0x12731304 */
  if (C.zf) goto L_12731304;
  /* 127312e4 mov eax, dword ptr [0x127518f4] */
  EAX = (r32((uint32_t)(0x127518f4)));
  /* 127312e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127312ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127312ee je 0x12731304 */
  if (C.zf) goto L_12731304;
  /* 127312f0 push 0x127518f4 */
  push32((uint32_t)(0x127518f4u));
  /* 127312f5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 127312f7 push 0x12750a90 */
  push32((uint32_t)(0x12750a90u));
  /* 127312fc call 0x12731490 */
  push32(0x12731301u); f_12731490();
  /* 12731301 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12731304:;
  /* 12731304 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12731307 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273130a mov dword ptr [0x127518f8], edx */
  w32((uint32_t)(0x127518f8), (EDX));
  /* 12731310 cmp dword ptr [0x127518f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731317 je 0x12731339 */
  if (C.zf) goto L_12731339;
  /* 12731319 mov eax, dword ptr [0x127518f8] */
  EAX = (r32((uint32_t)(0x127518f8)));
  /* 1273131e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12731321 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12731323 je 0x12731339 */
  if (C.zf) goto L_12731339;
  /* 12731325 push 0x127518f8 */
  push32((uint32_t)(0x127518f8u));
  /* 1273132a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1273132c push 0x127509d8 */
  push32((uint32_t)(0x127509d8u));
  /* 12731331 call 0x12731490 */
  push32(0x12731336u); f_12731490();
  /* 12731336 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12731339:;
  /* 12731339 mov dword ptr [0x127518fc], 0 */
  w32((uint32_t)(0x127518fc), (0x0u));
  /* 12731343 cmp dword ptr [0x127518f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273134a je 0x1273137d */
  if (C.zf) goto L_1273137d;
  /* 1273134c mov edx, dword ptr [0x127518f4] */
  EDX = (r32((uint32_t)(0x127518f4)));
  /* 12731352 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12731355 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12731357 je 0x1273137d */
  if (C.zf) goto L_1273137d;
  /* 12731359 cmp dword ptr [0x127518f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731360 je 0x12731376 */
  if (C.zf) goto L_12731376;
  /* 12731362 mov ecx, dword ptr [0x127518f8] */
  ECX = (r32((uint32_t)(0x127518f8)));
  /* 12731368 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1273136b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1273136d je 0x12731376 */
  if (C.zf) goto L_12731376;
  /* 1273136f call 0x12731520 */
  push32(0x12731374u); f_12731520();
  /* 12731374 jmp 0x1273137b */
  goto L_1273137b;
L_12731376:;
  /* 12731376 call 0x12731910 */
  push32(0x1273137bu); f_12731910();
L_1273137b:;
  /* 1273137b jmp 0x1273139e */
  goto L_1273139e;
L_1273137d:;
  /* 1273137d cmp dword ptr [0x127518f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731384 je 0x12731399 */
  if (C.zf) goto L_12731399;
  /* 12731386 mov eax, dword ptr [0x127518f8] */
  EAX = (r32((uint32_t)(0x127518f8)));
  /* 1273138b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1273138e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12731390 je 0x12731399 */
  if (C.zf) goto L_12731399;
  /* 12731392 call 0x12731ab0 */
  push32(0x12731397u); f_12731ab0();
  /* 12731397 jmp 0x1273139e */
  goto L_1273139e;
L_12731399:;
  /* 12731399 call 0x12731bb0 */
  push32(0x1273139eu); f_12731bb0();
L_1273139e:;
  /* 1273139e cmp dword ptr [0x127518fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127313a5 jne 0x127313ae */
  if (!C.zf) goto L_127313ae;
  /* 127313a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127313a9 jmp 0x1273148c */
  goto L_1273148c;
L_127313ae:;
  /* 127313ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127313b1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127313b7 push edx */
  push32((uint32_t)(EDX));
  /* 127313b8 call 0x12731be0 */
  push32(0x127313bdu); f_12731be0();
  /* 127313bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127313c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127313c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127313c7 je 0x127313dc */
  if (C.zf) goto L_127313dc;
  /* 127313c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127313cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127313d1 push eax */
  push32((uint32_t)(EAX));
  /* 127313d2 call dword ptr [0x127542d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542d8))), 0x127313d8u);
  /* 127313d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127313da jne 0x127313e3 */
  if (!C.zf) goto L_127313e3;
L_127313dc:;
  /* 127313dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127313de jmp 0x1273148c */
  goto L_1273148c;
L_127313e3:;
  /* 127313e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127313e5 mov ecx, dword ptr [0x127518e4] */
  ECX = (r32((uint32_t)(0x127518e4)));
  /* 127313eb push ecx */
  push32((uint32_t)(ECX));
  /* 127313ec call dword ptr [0x127542dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542dc))), 0x127313f2u);
  /* 127313f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127313f4 jne 0x127313fd */
  if (!C.zf) goto L_127313fd;
  /* 127313f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127313f8 jmp 0x1273148c */
  goto L_1273148c;
L_127313fd:;
  /* 127313fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731401 je 0x12731428 */
  if (C.zf) goto L_12731428;
  /* 12731403 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12731406 mov ax, word ptr [0x127518e4] */
  AX = (r16((uint32_t)(0x127518e4)));
  /* 1273140c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1273140f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12731412 mov dx, word ptr [0x12751900] */
  DX = (r16((uint32_t)(0x12751900)));
  /* 12731419 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1273141d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12731420 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12731424 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12731428:;
  /* 12731428 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273142c je 0x12731487 */
  if (C.zf) goto L_12731487;
  /* 1273142e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12731430 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12731433 push edx */
  push32((uint32_t)(EDX));
  /* 12731434 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12731439 mov eax, dword ptr [0x127518e4] */
  EAX = (r32((uint32_t)(0x127518e4)));
  /* 1273143e push eax */
  push32((uint32_t)(EAX));
  /* 1273143f call dword ptr [0x12751904] */
  call_ind((uint32_t)(r32((uint32_t)(0x12751904))), 0x12731445u);
  /* 12731445 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12731447 jne 0x1273144d */
  if (!C.zf) goto L_1273144d;
  /* 12731449 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1273144b jmp 0x1273148c */
  goto L_1273148c;
L_1273144d:;
  /* 1273144d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1273144f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12731452 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731455 push ecx */
  push32((uint32_t)(ECX));
  /* 12731456 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1273145b mov edx, dword ptr [0x12751900] */
  EDX = (r32((uint32_t)(0x12751900)));
  /* 12731461 push edx */
  push32((uint32_t)(EDX));
  /* 12731462 call dword ptr [0x12751904] */
  call_ind((uint32_t)(r32((uint32_t)(0x12751904))), 0x12731468u);
  /* 12731468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1273146a jne 0x12731470 */
  if (!C.zf) goto L_12731470;
  /* 1273146c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1273146e jmp 0x1273148c */
  goto L_1273148c;
L_12731470:;
  /* 12731470 push 0xa */
  push32((uint32_t)(0xau));
  /* 12731472 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12731475 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273147a push eax */
  push32((uint32_t)(EAX));
  /* 1273147b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273147e push ecx */
  push32((uint32_t)(ECX));
  /* 1273147f call 0x12727ff0 */
  push32(0x12731484u); f_12727ff0();
  /* 12731484 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12731487:;
  /* 12731487 mov eax, 1 */
  EAX = (0x1u);
L_1273148c:;
  /* 1273148c mov esp, ebp */
  ESP = (EBP);
  /* 1273148e pop ebp */
  EBP = (pop32());
  /* 1273148f ret  */
  ESPCHK(0x12731290u, _esp0);
  ESP += 4; return;
}

/* FUN_10011490 @ 0x12731490 (130 bytes, 47 insns) */
void f_12731490(void) {
  FTRACE(0x12731490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731490 push ebp */
  push32((uint32_t)(EBP));
  /* 12731491 mov ebp, esp */
  EBP = (ESP);
  /* 12731493 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731496 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1273149d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_127314a4:;
  /* 127314a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127314a7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127314aa jg 0x1273150e */
  if ((!C.zf&&C.sf==C.of)) goto L_1273150e;
  /* 127314ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127314b0 je 0x1273150e */
  if (C.zf) goto L_1273150e;
  /* 127314b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127314b5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127314b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127314b9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127314bb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127314bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127314c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127314c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127314c6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 127314c9 push eax */
  push32((uint32_t)(EAX));
  /* 127314ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127314cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127314cf push edx */
  push32((uint32_t)(EDX));
  /* 127314d0 call 0x12733b80 */
  push32(0x127314d5u); f_12733b80();
  /* 127314d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127314d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127314db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127314df jne 0x127314f2 */
  if (!C.zf) goto L_127314f2;
  /* 127314e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127314e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127314e7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 127314eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127314ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127314f0 jmp 0x1273150c */
  goto L_1273150c;
L_127314f2:;
  /* 127314f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127314f6 jge 0x12731503 */
  if ((C.sf==C.of)) goto L_12731503;
  /* 127314f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127314fb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127314fe mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12731501 jmp 0x1273150c */
  goto L_1273150c;
L_12731503:;
  /* 12731503 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12731506 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731509 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1273150c:;
  /* 1273150c jmp 0x127314a4 */
  goto L_127314a4;
L_1273150e:;
  /* 1273150e mov esp, ebp */
  ESP = (EBP);
  /* 12731510 pop ebp */
  EBP = (pop32());
  /* 12731511 ret  */
  ESPCHK(0x12731490u, _esp0);
  ESP += 4; return;
}

/* FUN_10011520 @ 0x12731520 (186 bytes, 50 insns) */
void f_12731520(void) {
  FTRACE(0x12731520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731520 push ebp */
  push32((uint32_t)(EBP));
  /* 12731521 mov ebp, esp */
  EBP = (ESP);
  /* 12731523 push ecx */
  push32((uint32_t)(ECX));
  /* 12731524 mov eax, dword ptr [0x127518f4] */
  EAX = (r32((uint32_t)(0x127518f4)));
  /* 12731529 push eax */
  push32((uint32_t)(EAX));
  /* 1273152a call 0x127282e0 */
  push32(0x1273152fu); f_127282e0();
  /* 1273152f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731532 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12731534 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731537 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1273153a mov dword ptr [0x127518f0], ecx */
  w32((uint32_t)(0x127518f0), (ECX));
  /* 12731540 mov edx, dword ptr [0x127518f8] */
  EDX = (r32((uint32_t)(0x127518f8)));
  /* 12731546 push edx */
  push32((uint32_t)(EDX));
  /* 12731547 call 0x127282e0 */
  push32(0x1273154cu); f_127282e0();
  /* 1273154c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273154f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12731551 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731554 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12731557 mov dword ptr [0x127518e8], ecx */
  w32((uint32_t)(0x127518e8), (ECX));
  /* 1273155d mov dword ptr [0x127518e4], 0 */
  w32((uint32_t)(0x127518e4), (0x0u));
  /* 12731567 cmp dword ptr [0x127518f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273156e je 0x12731579 */
  if (C.zf) goto L_12731579;
  /* 12731570 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12731577 jmp 0x1273158b */
  goto L_1273158b;
L_12731579:;
  /* 12731579 mov edx, dword ptr [0x127518f4] */
  EDX = (r32((uint32_t)(0x127518f4)));
  /* 1273157f push edx */
  push32((uint32_t)(EDX));
  /* 12731580 call 0x12731fc0 */
  push32(0x12731585u); f_12731fc0();
  /* 12731585 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731588 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1273158b:;
  /* 1273158b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273158e mov dword ptr [0x127518ec], eax */
  w32((uint32_t)(0x127518ec), (EAX));
  /* 12731593 push 1 */
  push32((uint32_t)(0x1u));
  /* 12731595 push 0x127315e0 */
  push32((uint32_t)(0x127315e0u));
  /* 1273159a call dword ptr [0x127542d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542d0))), 0x127315a0u);
  /* 127315a0 mov ecx, dword ptr [0x127518fc] */
  ECX = (r32((uint32_t)(0x127518fc)));
  /* 127315a6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 127315ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127315ae je 0x127315cc */
  if (C.zf) goto L_127315cc;
  /* 127315b0 mov edx, dword ptr [0x127518fc] */
  EDX = (r32((uint32_t)(0x127518fc)));
  /* 127315b6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 127315bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127315be je 0x127315cc */
  if (C.zf) goto L_127315cc;
  /* 127315c0 mov eax, dword ptr [0x127518fc] */
  EAX = (r32((uint32_t)(0x127518fc)));
  /* 127315c5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 127315c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127315ca jne 0x127315d6 */
  if (!C.zf) goto L_127315d6;
L_127315cc:;
  /* 127315cc mov dword ptr [0x127518fc], 0 */
  w32((uint32_t)(0x127518fc), (0x0u));
L_127315d6:;
  /* 127315d6 mov esp, ebp */
  ESP = (EBP);
  /* 127315d8 pop ebp */
  EBP = (pop32());
  /* 127315d9 ret  */
  ESPCHK(0x12731520u, _esp0);
  ESP += 4; return;
}

/* FUN_100115e0 @ 0x127315e0 (804 bytes, 220 insns) */
void f_127315e0(void) {
  FTRACE(0x127315e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127315e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127315e1 mov ebp, esp */
  EBP = (ESP);
  /* 127315e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127315e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127315e9 push eax */
  push32((uint32_t)(EAX));
  /* 127315ea call 0x12731f40 */
  push32(0x127315efu); f_12731f40();
  /* 127315ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127315f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 127315f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 127315f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127315fa push ecx */
  push32((uint32_t)(ECX));
  /* 127315fb mov edx, dword ptr [0x127518e8] */
  EDX = (r32((uint32_t)(0x127518e8)));
  /* 12731601 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12731603 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731605 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1273160b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731611 push edx */
  push32((uint32_t)(EDX));
  /* 12731612 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12731615 push eax */
  push32((uint32_t)(EAX));
  /* 12731616 call dword ptr [0x12751904] */
  call_ind((uint32_t)(r32((uint32_t)(0x12751904))), 0x1273161cu);
  /* 1273161c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1273161e jne 0x12731634 */
  if (!C.zf) goto L_12731634;
  /* 12731620 mov dword ptr [0x127518fc], 0 */
  w32((uint32_t)(0x127518fc), (0x0u));
  /* 1273162a mov eax, 1 */
  EAX = (0x1u);
  /* 1273162f jmp 0x127318fe */
  goto L_127318fe;
L_12731634:;
  /* 12731634 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12731637 push ecx */
  push32((uint32_t)(ECX));
  /* 12731638 mov edx, dword ptr [0x127518f8] */
  EDX = (r32((uint32_t)(0x127518f8)));
  /* 1273163e push edx */
  push32((uint32_t)(EDX));
  /* 1273163f call 0x12733b80 */
  push32(0x12731644u); f_12733b80();
  /* 12731644 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12731649 jne 0x1273176f */
  if (!C.zf) goto L_1273176f;
  /* 1273164f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12731651 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12731654 push eax */
  push32((uint32_t)(EAX));
  /* 12731655 mov ecx, dword ptr [0x127518f0] */
  ECX = (r32((uint32_t)(0x127518f0)));
  /* 1273165b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1273165d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1273165f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12731665 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273166b push ecx */
  push32((uint32_t)(ECX));
  /* 1273166c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1273166f push edx */
  push32((uint32_t)(EDX));
  /* 12731670 call dword ptr [0x12751904] */
  call_ind((uint32_t)(r32((uint32_t)(0x12751904))), 0x12731676u);
  /* 12731676 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12731678 jne 0x1273168e */
  if (!C.zf) goto L_1273168e;
  /* 1273167a mov dword ptr [0x127518fc], 0 */
  w32((uint32_t)(0x127518fc), (0x0u));
  /* 12731684 mov eax, 1 */
  EAX = (0x1u);
  /* 12731689 jmp 0x127318fe */
  goto L_127318fe;
L_1273168e:;
  /* 1273168e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12731691 push eax */
  push32((uint32_t)(EAX));
  /* 12731692 mov ecx, dword ptr [0x127518f4] */
  ECX = (r32((uint32_t)(0x127518f4)));
  /* 12731698 push ecx */
  push32((uint32_t)(ECX));
  /* 12731699 call 0x12733b80 */
  push32(0x1273169eu); f_12733b80();
  /* 1273169e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127316a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127316a3 jne 0x127316d0 */
  if (!C.zf) goto L_127316d0;
  /* 127316a5 mov edx, dword ptr [0x127518fc] */
  EDX = (r32((uint32_t)(0x127518fc)));
  /* 127316ab or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 127316b1 mov dword ptr [0x127518fc], edx */
  w32((uint32_t)(0x127518fc), (EDX));
  /* 127316b7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127316ba mov dword ptr [0x12751900], eax */
  w32((uint32_t)(0x12751900), (EAX));
  /* 127316bf mov ecx, dword ptr [0x12751900] */
  ECX = (r32((uint32_t)(0x12751900)));
  /* 127316c5 mov dword ptr [0x127518e4], ecx */
  w32((uint32_t)(0x127518e4), (ECX));
  /* 127316cb jmp 0x1273176f */
  goto L_1273176f;
L_127316d0:;
  /* 127316d0 mov edx, dword ptr [0x127518fc] */
  EDX = (r32((uint32_t)(0x127518fc)));
  /* 127316d6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 127316d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127316db jne 0x1273176f */
  if (!C.zf) goto L_1273176f;
  /* 127316e1 cmp dword ptr [0x127518ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127316e8 je 0x1273173d */
  if (C.zf) goto L_1273173d;
  /* 127316ea mov eax, dword ptr [0x127518ec] */
  EAX = (r32((uint32_t)(0x127518ec)));
  /* 127316ef push eax */
  push32((uint32_t)(EAX));
  /* 127316f0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127316f3 push ecx */
  push32((uint32_t)(ECX));
  /* 127316f4 mov edx, dword ptr [0x127518f4] */
  EDX = (r32((uint32_t)(0x127518f4)));
  /* 127316fa push edx */
  push32((uint32_t)(EDX));
  /* 127316fb call 0x12733c50 */
  push32(0x12731700u); f_12733c50();
  /* 12731700 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731703 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12731705 jne 0x1273173d */
  if (!C.zf) goto L_1273173d;
  /* 12731707 mov eax, dword ptr [0x127518fc] */
  EAX = (r32((uint32_t)(0x127518fc)));
  /* 1273170c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1273170e mov dword ptr [0x127518fc], eax */
  w32((uint32_t)(0x127518fc), (EAX));
  /* 12731713 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12731716 mov dword ptr [0x12751900], ecx */
  w32((uint32_t)(0x12751900), (ECX));
  /* 1273171c mov edx, dword ptr [0x127518f4] */
  EDX = (r32((uint32_t)(0x127518f4)));
  /* 12731722 push edx */
  push32((uint32_t)(EDX));
  /* 12731723 call 0x127282e0 */
  push32(0x12731728u); f_127282e0();
  /* 12731728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273172b cmp eax, dword ptr [0x127518ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127518ec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731731 jne 0x1273173b */
  if (!C.zf) goto L_1273173b;
  /* 12731733 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12731736 mov dword ptr [0x127518e4], eax */
  w32((uint32_t)(0x127518e4), (EAX));
L_1273173b:;
  /* 1273173b jmp 0x1273176f */
  goto L_1273176f;
L_1273173d:;
  /* 1273173d mov ecx, dword ptr [0x127518fc] */
  ECX = (r32((uint32_t)(0x127518fc)));
  /* 12731743 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12731746 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12731748 jne 0x1273176f */
  if (!C.zf) goto L_1273176f;
  /* 1273174a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1273174d push edx */
  push32((uint32_t)(EDX));
  /* 1273174e call 0x12731c80 */
  push32(0x12731753u); f_12731c80();
  /* 12731753 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731756 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12731758 je 0x1273176f */
  if (C.zf) goto L_1273176f;
  /* 1273175a mov eax, dword ptr [0x127518fc] */
  EAX = (r32((uint32_t)(0x127518fc)));
  /* 1273175f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12731761 mov dword ptr [0x127518fc], eax */
  w32((uint32_t)(0x127518fc), (EAX));
  /* 12731766 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12731769 mov dword ptr [0x12751900], ecx */
  w32((uint32_t)(0x12751900), (ECX));
L_1273176f:;
  /* 1273176f mov edx, dword ptr [0x127518fc] */
  EDX = (r32((uint32_t)(0x127518fc)));
  /* 12731775 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1273177b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731781 je 0x127318f1 */
  if (C.zf) goto L_127318f1;
  /* 12731787 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12731789 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1273178c push eax */
  push32((uint32_t)(EAX));
  /* 1273178d mov ecx, dword ptr [0x127518f0] */
  ECX = (r32((uint32_t)(0x127518f0)));
  /* 12731793 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12731795 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731797 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1273179d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127317a3 push ecx */
  push32((uint32_t)(ECX));
  /* 127317a4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127317a7 push edx */
  push32((uint32_t)(EDX));
  /* 127317a8 call dword ptr [0x12751904] */
  call_ind((uint32_t)(r32((uint32_t)(0x12751904))), 0x127317aeu);
  /* 127317ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127317b0 jne 0x127317c6 */
  if (!C.zf) goto L_127317c6;
  /* 127317b2 mov dword ptr [0x127518fc], 0 */
  w32((uint32_t)(0x127518fc), (0x0u));
  /* 127317bc mov eax, 1 */
  EAX = (0x1u);
  /* 127317c1 jmp 0x127318fe */
  goto L_127318fe;
L_127317c6:;
  /* 127317c6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 127317c9 push eax */
  push32((uint32_t)(EAX));
  /* 127317ca mov ecx, dword ptr [0x127518f4] */
  ECX = (r32((uint32_t)(0x127518f4)));
  /* 127317d0 push ecx */
  push32((uint32_t)(ECX));
  /* 127317d1 call 0x12733b80 */
  push32(0x127317d6u); f_12733b80();
  /* 127317d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127317d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127317db jne 0x12731890 */
  if (!C.zf) goto L_12731890;
  /* 127317e1 mov edx, dword ptr [0x127518fc] */
  EDX = (r32((uint32_t)(0x127518fc)));
  /* 127317e7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 127317ea mov dword ptr [0x127518fc], edx */
  w32((uint32_t)(0x127518fc), (EDX));
  /* 127317f0 cmp dword ptr [0x127518f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127317f7 je 0x1273181a */
  if (C.zf) goto L_1273181a;
  /* 127317f9 mov eax, dword ptr [0x127518fc] */
  EAX = (r32((uint32_t)(0x127518fc)));
  /* 127317fe or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12731801 mov dword ptr [0x127518fc], eax */
  w32((uint32_t)(0x127518fc), (EAX));
  /* 12731806 cmp dword ptr [0x127518e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273180d jne 0x12731818 */
  if (!C.zf) goto L_12731818;
  /* 1273180f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12731812 mov dword ptr [0x127518e4], ecx */
  w32((uint32_t)(0x127518e4), (ECX));
L_12731818:;
  /* 12731818 jmp 0x1273188e */
  goto L_1273188e;
L_1273181a:;
  /* 1273181a cmp dword ptr [0x127518ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731821 je 0x1273186f */
  if (C.zf) goto L_1273186f;
  /* 12731823 mov edx, dword ptr [0x127518f4] */
  EDX = (r32((uint32_t)(0x127518f4)));
  /* 12731829 push edx */
  push32((uint32_t)(EDX));
  /* 1273182a call 0x127282e0 */
  push32(0x1273182fu); f_127282e0();
  /* 1273182f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731832 cmp eax, dword ptr [0x127518ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127518ec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731838 jne 0x1273186f */
  if (!C.zf) goto L_1273186f;
  /* 1273183a push 1 */
  push32((uint32_t)(0x1u));
  /* 1273183c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1273183f push eax */
  push32((uint32_t)(EAX));
  /* 12731840 call 0x12731cd0 */
  push32(0x12731845u); f_12731cd0();
  /* 12731845 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1273184a je 0x1273186d */
  if (C.zf) goto L_1273186d;
  /* 1273184c mov ecx, dword ptr [0x127518fc] */
  ECX = (r32((uint32_t)(0x127518fc)));
  /* 12731852 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12731855 mov dword ptr [0x127518fc], ecx */
  w32((uint32_t)(0x127518fc), (ECX));
  /* 1273185b cmp dword ptr [0x127518e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731862 jne 0x1273186d */
  if (!C.zf) goto L_1273186d;
  /* 12731864 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12731867 mov dword ptr [0x127518e4], edx */
  w32((uint32_t)(0x127518e4), (EDX));
L_1273186d:;
  /* 1273186d jmp 0x1273188e */
  goto L_1273188e;
L_1273186f:;
  /* 1273186f mov eax, dword ptr [0x127518fc] */
  EAX = (r32((uint32_t)(0x127518fc)));
  /* 12731874 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12731877 mov dword ptr [0x127518fc], eax */
  w32((uint32_t)(0x127518fc), (EAX));
  /* 1273187c cmp dword ptr [0x127518e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731883 jne 0x1273188e */
  if (!C.zf) goto L_1273188e;
  /* 12731885 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12731888 mov dword ptr [0x127518e4], ecx */
  w32((uint32_t)(0x127518e4), (ECX));
L_1273188e:;
  /* 1273188e jmp 0x127318f1 */
  goto L_127318f1;
L_12731890:;
  /* 12731890 cmp dword ptr [0x127518f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731897 jne 0x127318f1 */
  if (!C.zf) goto L_127318f1;
  /* 12731899 cmp dword ptr [0x127518ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127318a0 je 0x127318f1 */
  if (C.zf) goto L_127318f1;
  /* 127318a2 mov edx, dword ptr [0x127518ec] */
  EDX = (r32((uint32_t)(0x127518ec)));
  /* 127318a8 push edx */
  push32((uint32_t)(EDX));
  /* 127318a9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 127318ac push eax */
  push32((uint32_t)(EAX));
  /* 127318ad mov ecx, dword ptr [0x127518f4] */
  ECX = (r32((uint32_t)(0x127518f4)));
  /* 127318b3 push ecx */
  push32((uint32_t)(ECX));
  /* 127318b4 call 0x12733c50 */
  push32(0x127318b9u); f_12733c50();
  /* 127318b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127318bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127318be jne 0x127318f1 */
  if (!C.zf) goto L_127318f1;
  /* 127318c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127318c2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127318c5 push edx */
  push32((uint32_t)(EDX));
  /* 127318c6 call 0x12731cd0 */
  push32(0x127318cbu); f_12731cd0();
  /* 127318cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127318ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127318d0 je 0x127318f1 */
  if (C.zf) goto L_127318f1;
  /* 127318d2 mov eax, dword ptr [0x127518fc] */
  EAX = (r32((uint32_t)(0x127518fc)));
  /* 127318d7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 127318da mov dword ptr [0x127518fc], eax */
  w32((uint32_t)(0x127518fc), (EAX));
  /* 127318df cmp dword ptr [0x127518e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127318e6 jne 0x127318f1 */
  if (!C.zf) goto L_127318f1;
  /* 127318e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127318eb mov dword ptr [0x127518e4], ecx */
  w32((uint32_t)(0x127518e4), (ECX));
L_127318f1:;
  /* 127318f1 mov eax, dword ptr [0x127518fc] */
  EAX = (r32((uint32_t)(0x127518fc)));
  /* 127318f6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127318f9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127318fb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127318fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_127318fe:;
  /* 127318fe mov esp, ebp */
  ESP = (EBP);
  /* 12731900 pop ebp */
  EBP = (pop32());
  /* 12731901 ret 4 */
  ESPCHK(0x127315e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10011910 @ 0x12731910 (116 bytes, 33 insns) */
void f_12731910(void) {
  FTRACE(0x12731910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731910 push ebp */
  push32((uint32_t)(EBP));
  /* 12731911 mov ebp, esp */
  EBP = (ESP);
  /* 12731913 push ecx */
  push32((uint32_t)(ECX));
  /* 12731914 mov eax, dword ptr [0x127518f4] */
  EAX = (r32((uint32_t)(0x127518f4)));
  /* 12731919 push eax */
  push32((uint32_t)(EAX));
  /* 1273191a call 0x127282e0 */
  push32(0x1273191fu); f_127282e0();
  /* 1273191f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731922 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12731924 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731927 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1273192a mov dword ptr [0x127518f0], ecx */
  w32((uint32_t)(0x127518f0), (ECX));
  /* 12731930 cmp dword ptr [0x127518f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731937 je 0x12731942 */
  if (C.zf) goto L_12731942;
  /* 12731939 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12731940 jmp 0x12731954 */
  goto L_12731954;
L_12731942:;
  /* 12731942 mov edx, dword ptr [0x127518f4] */
  EDX = (r32((uint32_t)(0x127518f4)));
  /* 12731948 push edx */
  push32((uint32_t)(EDX));
  /* 12731949 call 0x12731fc0 */
  push32(0x1273194eu); f_12731fc0();
  /* 1273194e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731951 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12731954:;
  /* 12731954 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12731957 mov dword ptr [0x127518ec], eax */
  w32((uint32_t)(0x127518ec), (EAX));
  /* 1273195c push 1 */
  push32((uint32_t)(0x1u));
  /* 1273195e push 0x12731990 */
  push32((uint32_t)(0x12731990u));
  /* 12731963 call dword ptr [0x127542d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542d0))), 0x12731969u);
  /* 12731969 mov ecx, dword ptr [0x127518fc] */
  ECX = (r32((uint32_t)(0x127518fc)));
  /* 1273196f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12731972 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12731974 jne 0x12731980 */
  if (!C.zf) goto L_12731980;
  /* 12731976 mov dword ptr [0x127518fc], 0 */
  w32((uint32_t)(0x127518fc), (0x0u));
L_12731980:;
  /* 12731980 mov esp, ebp */
  ESP = (EBP);
  /* 12731982 pop ebp */
  EBP = (pop32());
  /* 12731983 ret  */
  ESPCHK(0x12731910u, _esp0);
  ESP += 4; return;
}

/* FUN_10011990 @ 0x12731990 (287 bytes, 86 insns) */
void f_12731990(void) {
  FTRACE(0x12731990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731990 push ebp */
  push32((uint32_t)(EBP));
  /* 12731991 mov ebp, esp */
  EBP = (ESP);
  /* 12731993 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731996 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12731999 push eax */
  push32((uint32_t)(EAX));
  /* 1273199a call 0x12731f40 */
  push32(0x1273199fu); f_12731f40();
  /* 1273199f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127319a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 127319a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 127319a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127319aa push ecx */
  push32((uint32_t)(ECX));
  /* 127319ab mov edx, dword ptr [0x127518f0] */
  EDX = (r32((uint32_t)(0x127518f0)));
  /* 127319b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127319b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127319b5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 127319bb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127319c1 push edx */
  push32((uint32_t)(EDX));
  /* 127319c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127319c5 push eax */
  push32((uint32_t)(EAX));
  /* 127319c6 call dword ptr [0x12751904] */
  call_ind((uint32_t)(r32((uint32_t)(0x12751904))), 0x127319ccu);
  /* 127319cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127319ce jne 0x127319e4 */
  if (!C.zf) goto L_127319e4;
  /* 127319d0 mov dword ptr [0x127518fc], 0 */
  w32((uint32_t)(0x127518fc), (0x0u));
  /* 127319da mov eax, 1 */
  EAX = (0x1u);
  /* 127319df jmp 0x12731aa9 */
  goto L_12731aa9;
L_127319e4:;
  /* 127319e4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127319e7 push ecx */
  push32((uint32_t)(ECX));
  /* 127319e8 mov edx, dword ptr [0x127518f4] */
  EDX = (r32((uint32_t)(0x127518f4)));
  /* 127319ee push edx */
  push32((uint32_t)(EDX));
  /* 127319ef call 0x12733b80 */
  push32(0x127319f4u); f_12733b80();
  /* 127319f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127319f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127319f9 jne 0x12731a39 */
  if (!C.zf) goto L_12731a39;
  /* 127319fb cmp dword ptr [0x127518f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731a02 jne 0x12731a16 */
  if (!C.zf) goto L_12731a16;
  /* 12731a04 push 1 */
  push32((uint32_t)(0x1u));
  /* 12731a06 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12731a09 push eax */
  push32((uint32_t)(EAX));
  /* 12731a0a call 0x12731cd0 */
  push32(0x12731a0fu); f_12731cd0();
  /* 12731a0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731a12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12731a14 je 0x12731a37 */
  if (C.zf) goto L_12731a37;
L_12731a16:;
  /* 12731a16 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12731a19 mov dword ptr [0x12751900], ecx */
  w32((uint32_t)(0x12751900), (ECX));
  /* 12731a1f mov edx, dword ptr [0x12751900] */
  EDX = (r32((uint32_t)(0x12751900)));
  /* 12731a25 mov dword ptr [0x127518e4], edx */
  w32((uint32_t)(0x127518e4), (EDX));
  /* 12731a2b mov eax, dword ptr [0x127518fc] */
  EAX = (r32((uint32_t)(0x127518fc)));
  /* 12731a30 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12731a32 mov dword ptr [0x127518fc], eax */
  w32((uint32_t)(0x127518fc), (EAX));
L_12731a37:;
  /* 12731a37 jmp 0x12731a9c */
  goto L_12731a9c;
L_12731a39:;
  /* 12731a39 cmp dword ptr [0x127518f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731a40 jne 0x12731a9c */
  if (!C.zf) goto L_12731a9c;
  /* 12731a42 cmp dword ptr [0x127518ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127518ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731a49 je 0x12731a9c */
  if (C.zf) goto L_12731a9c;
  /* 12731a4b mov ecx, dword ptr [0x127518ec] */
  ECX = (r32((uint32_t)(0x127518ec)));
  /* 12731a51 push ecx */
  push32((uint32_t)(ECX));
  /* 12731a52 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12731a55 push edx */
  push32((uint32_t)(EDX));
  /* 12731a56 mov eax, dword ptr [0x127518f4] */
  EAX = (r32((uint32_t)(0x127518f4)));
  /* 12731a5b push eax */
  push32((uint32_t)(EAX));
  /* 12731a5c call 0x12733c50 */
  push32(0x12731a61u); f_12733c50();
  /* 12731a61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731a64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12731a66 jne 0x12731a9c */
  if (!C.zf) goto L_12731a9c;
  /* 12731a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12731a6a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12731a6d push ecx */
  push32((uint32_t)(ECX));
  /* 12731a6e call 0x12731cd0 */
  push32(0x12731a73u); f_12731cd0();
  /* 12731a73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731a76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12731a78 je 0x12731a9c */
  if (C.zf) goto L_12731a9c;
  /* 12731a7a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12731a7d mov dword ptr [0x12751900], edx */
  w32((uint32_t)(0x12751900), (EDX));
  /* 12731a83 mov eax, dword ptr [0x12751900] */
  EAX = (r32((uint32_t)(0x12751900)));
  /* 12731a88 mov dword ptr [0x127518e4], eax */
  w32((uint32_t)(0x127518e4), (EAX));
  /* 12731a8d mov ecx, dword ptr [0x127518fc] */
  ECX = (r32((uint32_t)(0x127518fc)));
  /* 12731a93 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12731a96 mov dword ptr [0x127518fc], ecx */
  w32((uint32_t)(0x127518fc), (ECX));
L_12731a9c:;
  /* 12731a9c mov eax, dword ptr [0x127518fc] */
  EAX = (r32((uint32_t)(0x127518fc)));
  /* 12731aa1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12731aa4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12731aa6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731aa8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12731aa9:;
  /* 12731aa9 mov esp, ebp */
  ESP = (EBP);
  /* 12731aab pop ebp */
  EBP = (pop32());
  /* 12731aac ret 4 */
  ESPCHK(0x12731990u, _esp0);
  ESP += 8; return;
}

/* FUN_10011ab0 @ 0x12731ab0 (69 bytes, 20 insns) */
void f_12731ab0(void) {
  FTRACE(0x12731ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12731ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12731ab3 mov eax, dword ptr [0x127518f8] */
  EAX = (r32((uint32_t)(0x127518f8)));
  /* 12731ab8 push eax */
  push32((uint32_t)(EAX));
  /* 12731ab9 call 0x127282e0 */
  push32(0x12731abeu); f_127282e0();
  /* 12731abe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731ac1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12731ac3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731ac6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12731ac9 mov dword ptr [0x127518e8], ecx */
  w32((uint32_t)(0x127518e8), (ECX));
  /* 12731acf push 1 */
  push32((uint32_t)(0x1u));
  /* 12731ad1 push 0x12731b00 */
  push32((uint32_t)(0x12731b00u));
  /* 12731ad6 call dword ptr [0x127542d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542d0))), 0x12731adcu);
  /* 12731adc mov edx, dword ptr [0x127518fc] */
  EDX = (r32((uint32_t)(0x127518fc)));
  /* 12731ae2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12731ae5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12731ae7 jne 0x12731af3 */
  if (!C.zf) goto L_12731af3;
  /* 12731ae9 mov dword ptr [0x127518fc], 0 */
  w32((uint32_t)(0x127518fc), (0x0u));
L_12731af3:;
  /* 12731af3 pop ebp */
  EBP = (pop32());
  /* 12731af4 ret  */
  ESPCHK(0x12731ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b00 @ 0x12731b00 (172 bytes, 54 insns) */
void f_12731b00(void) {
  FTRACE(0x12731b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12731b01 mov ebp, esp */
  EBP = (ESP);
  /* 12731b03 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731b06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12731b09 push eax */
  push32((uint32_t)(EAX));
  /* 12731b0a call 0x12731f40 */
  push32(0x12731b0fu); f_12731f40();
  /* 12731b0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731b12 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12731b15 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12731b17 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12731b1a push ecx */
  push32((uint32_t)(ECX));
  /* 12731b1b mov edx, dword ptr [0x127518e8] */
  EDX = (r32((uint32_t)(0x127518e8)));
  /* 12731b21 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12731b23 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731b25 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12731b2b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731b31 push edx */
  push32((uint32_t)(EDX));
  /* 12731b32 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12731b35 push eax */
  push32((uint32_t)(EAX));
  /* 12731b36 call dword ptr [0x12751904] */
  call_ind((uint32_t)(r32((uint32_t)(0x12751904))), 0x12731b3cu);
  /* 12731b3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12731b3e jne 0x12731b51 */
  if (!C.zf) goto L_12731b51;
  /* 12731b40 mov dword ptr [0x127518fc], 0 */
  w32((uint32_t)(0x127518fc), (0x0u));
  /* 12731b4a mov eax, 1 */
  EAX = (0x1u);
  /* 12731b4f jmp 0x12731ba6 */
  goto L_12731ba6;
L_12731b51:;
  /* 12731b51 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12731b54 push ecx */
  push32((uint32_t)(ECX));
  /* 12731b55 mov edx, dword ptr [0x127518f8] */
  EDX = (r32((uint32_t)(0x127518f8)));
  /* 12731b5b push edx */
  push32((uint32_t)(EDX));
  /* 12731b5c call 0x12733b80 */
  push32(0x12731b61u); f_12733b80();
  /* 12731b61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731b64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12731b66 jne 0x12731b99 */
  if (!C.zf) goto L_12731b99;
  /* 12731b68 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12731b6b push eax */
  push32((uint32_t)(EAX));
  /* 12731b6c call 0x12731c80 */
  push32(0x12731b71u); f_12731c80();
  /* 12731b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731b74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12731b76 je 0x12731b99 */
  if (C.zf) goto L_12731b99;
  /* 12731b78 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12731b7b mov dword ptr [0x12751900], ecx */
  w32((uint32_t)(0x12751900), (ECX));
  /* 12731b81 mov edx, dword ptr [0x12751900] */
  EDX = (r32((uint32_t)(0x12751900)));
  /* 12731b87 mov dword ptr [0x127518e4], edx */
  w32((uint32_t)(0x127518e4), (EDX));
  /* 12731b8d mov eax, dword ptr [0x127518fc] */
  EAX = (r32((uint32_t)(0x127518fc)));
  /* 12731b92 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12731b94 mov dword ptr [0x127518fc], eax */
  w32((uint32_t)(0x127518fc), (EAX));
L_12731b99:;
  /* 12731b99 mov eax, dword ptr [0x127518fc] */
  EAX = (r32((uint32_t)(0x127518fc)));
  /* 12731b9e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12731ba1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12731ba3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731ba5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12731ba6:;
  /* 12731ba6 mov esp, ebp */
  ESP = (EBP);
  /* 12731ba8 pop ebp */
  EBP = (pop32());
  /* 12731ba9 ret 4 */
  ESPCHK(0x12731b00u, _esp0);
  ESP += 8; return;
}

/* FUN_10011bb0 @ 0x12731bb0 (43 bytes, 11 insns) */
void f_12731bb0(void) {
  FTRACE(0x12731bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12731bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12731bb3 mov eax, dword ptr [0x127518fc] */
  EAX = (r32((uint32_t)(0x127518fc)));
  /* 12731bb8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12731bbd mov dword ptr [0x127518fc], eax */
  w32((uint32_t)(0x127518fc), (EAX));
  /* 12731bc2 call dword ptr [0x127542cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542cc))), 0x12731bc8u);
  /* 12731bc8 mov dword ptr [0x12751900], eax */
  w32((uint32_t)(0x12751900), (EAX));
  /* 12731bcd mov ecx, dword ptr [0x12751900] */
  ECX = (r32((uint32_t)(0x12751900)));
  /* 12731bd3 mov dword ptr [0x127518e4], ecx */
  w32((uint32_t)(0x127518e4), (ECX));
  /* 12731bd9 pop ebp */
  EBP = (pop32());
  /* 12731bda ret  */
  ESPCHK(0x12731bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011be0 @ 0x12731be0 (155 bytes, 57 insns) */
void f_12731be0(void) {
  FTRACE(0x12731be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12731be1 mov ebp, esp */
  EBP = (ESP);
  /* 12731be3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731be6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731bea je 0x12731c0b */
  if (C.zf) goto L_12731c0b;
  /* 12731bec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12731bef movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12731bf2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12731bf4 je 0x12731c0b */
  if (C.zf) goto L_12731c0b;
  /* 12731bf6 push 0x1274daf4 */
  push32((uint32_t)(0x1274daf4u));
  /* 12731bfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12731bfe push edx */
  push32((uint32_t)(EDX));
  /* 12731bff call 0x12731140 */
  push32(0x12731c04u); f_12731140();
  /* 12731c04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731c07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12731c09 jne 0x12731c33 */
  if (!C.zf) goto L_12731c33;
L_12731c0b:;
  /* 12731c0b push 8 */
  push32((uint32_t)(0x8u));
  /* 12731c0d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12731c10 push eax */
  push32((uint32_t)(EAX));
  /* 12731c11 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12731c16 mov ecx, dword ptr [0x12751900] */
  ECX = (r32((uint32_t)(0x12751900)));
  /* 12731c1c push ecx */
  push32((uint32_t)(ECX));
  /* 12731c1d call dword ptr [0x12751904] */
  call_ind((uint32_t)(r32((uint32_t)(0x12751904))), 0x12731c23u);
  /* 12731c23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12731c25 jne 0x12731c2b */
  if (!C.zf) goto L_12731c2b;
  /* 12731c27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12731c29 jmp 0x12731c77 */
  goto L_12731c77;
L_12731c2b:;
  /* 12731c2b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12731c2e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12731c31 jmp 0x12731c6b */
  goto L_12731c6b;
L_12731c33:;
  /* 12731c33 push 0x1274daf0 */
  push32((uint32_t)(0x1274daf0u));
  /* 12731c38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12731c3b push eax */
  push32((uint32_t)(EAX));
  /* 12731c3c call 0x12731140 */
  push32(0x12731c41u); f_12731140();
  /* 12731c41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731c44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12731c46 jne 0x12731c6b */
  if (!C.zf) goto L_12731c6b;
  /* 12731c48 push 8 */
  push32((uint32_t)(0x8u));
  /* 12731c4a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12731c4d push ecx */
  push32((uint32_t)(ECX));
  /* 12731c4e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12731c50 mov edx, dword ptr [0x12751900] */
  EDX = (r32((uint32_t)(0x12751900)));
  /* 12731c56 push edx */
  push32((uint32_t)(EDX));
  /* 12731c57 call dword ptr [0x12751904] */
  call_ind((uint32_t)(r32((uint32_t)(0x12751904))), 0x12731c5du);
  /* 12731c5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12731c5f jne 0x12731c65 */
  if (!C.zf) goto L_12731c65;
  /* 12731c61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12731c63 jmp 0x12731c77 */
  goto L_12731c77;
L_12731c65:;
  /* 12731c65 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12731c68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12731c6b:;
  /* 12731c6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12731c6e push ecx */
  push32((uint32_t)(ECX));
  /* 12731c6f call 0x12733d60 */
  push32(0x12731c74u); f_12733d60();
  /* 12731c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12731c77:;
  /* 12731c77 mov esp, ebp */
  ESP = (EBP);
  /* 12731c79 pop ebp */
  EBP = (pop32());
  /* 12731c7a ret  */
  ESPCHK(0x12731be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c80 @ 0x12731c80 (79 bytes, 26 insns) */
void f_12731c80(void) {
  FTRACE(0x12731c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731c80 push ebp */
  push32((uint32_t)(EBP));
  /* 12731c81 mov ebp, esp */
  EBP = (ESP);
  /* 12731c83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731c86 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12731c8a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12731c8e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12731c95 jmp 0x12731ca0 */
  goto L_12731ca0;
L_12731c97:;
  /* 12731c97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12731c9a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731c9d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12731ca0:;
  /* 12731ca0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731ca4 jae 0x12731cc6 */
  if (!C.cf) goto L_12731cc6;
  /* 12731ca6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12731ca9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12731caf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12731cb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12731cb4 mov cx, word ptr [eax*2 + 0x127509c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x127509c4)));
  /* 12731cbc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731cbe jne 0x12731cc4 */
  if (!C.zf) goto L_12731cc4;
  /* 12731cc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12731cc2 jmp 0x12731ccb */
  goto L_12731ccb;
L_12731cc4:;
  /* 12731cc4 jmp 0x12731c97 */
  goto L_12731c97;
L_12731cc6:;
  /* 12731cc6 mov eax, 1 */
  EAX = (0x1u);
L_12731ccb:;
  /* 12731ccb mov esp, ebp */
  ESP = (EBP);
  /* 12731ccd pop ebp */
  EBP = (pop32());
  /* 12731cce ret  */
  ESPCHK(0x12731c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cd0 @ 0x12731cd0 (135 bytes, 48 insns) */
void f_12731cd0(void) {
  FTRACE(0x12731cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12731cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12731cd3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731cd6 push esi */
  push32((uint32_t)(ESI));
  /* 12731cd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12731cda and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12731cdf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12731ce4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12731ce9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12731cec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12731cf1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12731cf4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12731cf6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12731cf9 push ecx */
  push32((uint32_t)(ECX));
  /* 12731cfa push 1 */
  push32((uint32_t)(0x1u));
  /* 12731cfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12731cff push edx */
  push32((uint32_t)(EDX));
  /* 12731d00 call dword ptr [0x12751904] */
  call_ind((uint32_t)(r32((uint32_t)(0x12751904))), 0x12731d06u);
  /* 12731d06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12731d08 jne 0x12731d0e */
  if (!C.zf) goto L_12731d0e;
  /* 12731d0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12731d0c jmp 0x12731d52 */
  goto L_12731d52;
L_12731d0e:;
  /* 12731d0e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12731d11 push eax */
  push32((uint32_t)(EAX));
  /* 12731d12 call 0x12731f40 */
  push32(0x12731d17u); f_12731f40();
  /* 12731d17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731d1a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731d1d je 0x12731d4d */
  if (C.zf) goto L_12731d4d;
  /* 12731d1f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731d23 je 0x12731d4d */
  if (C.zf) goto L_12731d4d;
  /* 12731d25 mov ecx, dword ptr [0x127518f4] */
  ECX = (r32((uint32_t)(0x127518f4)));
  /* 12731d2b push ecx */
  push32((uint32_t)(ECX));
  /* 12731d2c call 0x12731fc0 */
  push32(0x12731d31u); f_12731fc0();
  /* 12731d31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731d34 mov esi, eax */
  ESI = (EAX);
  /* 12731d36 mov edx, dword ptr [0x127518f4] */
  EDX = (r32((uint32_t)(0x127518f4)));
  /* 12731d3c push edx */
  push32((uint32_t)(EDX));
  /* 12731d3d call 0x127282e0 */
  push32(0x12731d42u); f_127282e0();
  /* 12731d42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731d45 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731d47 jne 0x12731d4d */
  if (!C.zf) goto L_12731d4d;
  /* 12731d49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12731d4b jmp 0x12731d52 */
  goto L_12731d52;
L_12731d4d:;
  /* 12731d4d mov eax, 1 */
  EAX = (0x1u);
L_12731d52:;
  /* 12731d52 pop esi */
  ESI = (pop32());
  /* 12731d53 mov esp, ebp */
  ESP = (EBP);
  /* 12731d55 pop ebp */
  EBP = (pop32());
  /* 12731d56 ret  */
  ESPCHK(0x12731cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d60 @ 0x12731d60 (77 bytes, 18 insns) */
void f_12731d60(void) {
  FTRACE(0x12731d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12731d61 mov ebp, esp */
  EBP = (ESP);
  /* 12731d63 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731d69 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12731d73 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12731d79 push eax */
  push32((uint32_t)(EAX));
  /* 12731d7a call dword ptr [0x127542c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542c8))), 0x12731d80u);
  /* 12731d80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12731d82 je 0x12731d99 */
  if (C.zf) goto L_12731d99;
  /* 12731d84 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731d8b jne 0x12731d99 */
  if (!C.zf) goto L_12731d99;
  /* 12731d8d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12731d97 jmp 0x12731da3 */
  goto L_12731da3;
L_12731d99:;
  /* 12731d99 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12731da3:;
  /* 12731da3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12731da9 mov esp, ebp */
  ESP = (EBP);
  /* 12731dab pop ebp */
  EBP = (pop32());
  /* 12731dac ret  */
  ESPCHK(0x12731d60u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12731db0 (388 bytes, 118 insns) */
void f_12731db0(void) {
  FTRACE(0x12731db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12731db1 mov ebp, esp */
  EBP = (ESP);
  /* 12731db3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731db6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12731dbd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12731dc4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12731dcb:;
  /* 12731dcb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12731dce cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731dd1 jg 0x12731f18 */
  if ((!C.zf&&C.sf==C.of)) goto L_12731f18;
  /* 12731dd7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12731dda add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731ddd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12731dde sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731de0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12731de2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12731de5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12731de8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12731deb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12731dee cmp edx, dword ptr [ecx + 0x12750520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12750520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731df4 jne 0x12731eee */
  if (!C.zf) goto L_12731eee;
  /* 12731dfa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12731dfd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12731e00 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731e04 ja 0x12731e27 */
  if ((!C.cf&&!C.zf)) goto L_12731e27;
  /* 12731e06 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731e0a je 0x12731e99 */
  if (C.zf) goto L_12731e99;
  /* 12731e10 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731e14 je 0x12731e44 */
  if (C.zf) goto L_12731e44;
  /* 12731e16 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731e1a je 0x12731e66 */
  if (C.zf) goto L_12731e66;
  /* 12731e1c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731e20 je 0x12731e88 */
  if (C.zf) goto L_12731e88;
  /* 12731e22 jmp 0x12731eb8 */
  goto L_12731eb8;
L_12731e27:;
  /* 12731e27 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731e2e je 0x12731e55 */
  if (C.zf) goto L_12731e55;
  /* 12731e30 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731e37 je 0x12731e77 */
  if (C.zf) goto L_12731e77;
  /* 12731e39 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731e40 je 0x12731eaa */
  if (C.zf) goto L_12731eaa;
  /* 12731e42 jmp 0x12731eb8 */
  goto L_12731eb8;
L_12731e44:;
  /* 12731e44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12731e47 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12731e4a add ecx, 0x12750524 */
  { uint32_t _a=(ECX),_b=(0x12750524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731e50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12731e53 jmp 0x12731eb8 */
  goto L_12731eb8;
L_12731e55:;
  /* 12731e55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12731e58 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12731e5b mov eax, dword ptr [edx + 0x1275052c] */
  EAX = (r32((uint32_t)(EDX + 0x1275052c)));
  /* 12731e61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12731e64 jmp 0x12731eb8 */
  goto L_12731eb8;
L_12731e66:;
  /* 12731e66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12731e69 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12731e6c add ecx, 0x12750530 */
  { uint32_t _a=(ECX),_b=(0x12750530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731e72 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12731e75 jmp 0x12731eb8 */
  goto L_12731eb8;
L_12731e77:;
  /* 12731e77 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12731e7a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12731e7d mov eax, dword ptr [edx + 0x12750534] */
  EAX = (r32((uint32_t)(EDX + 0x12750534)));
  /* 12731e83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12731e86 jmp 0x12731eb8 */
  goto L_12731eb8;
L_12731e88:;
  /* 12731e88 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12731e8b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12731e8e add ecx, 0x12750538 */
  { uint32_t _a=(ECX),_b=(0x12750538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731e94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12731e97 jmp 0x12731eb8 */
  goto L_12731eb8;
L_12731e99:;
  /* 12731e99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12731e9c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12731e9f add edx, 0x1275053c */
  { uint32_t _a=(EDX),_b=(0x1275053cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731ea5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12731ea8 jmp 0x12731eb8 */
  goto L_12731eb8;
L_12731eaa:;
  /* 12731eaa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12731ead imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12731eb0 add eax, 0x12750544 */
  { uint32_t _a=(EAX),_b=(0x12750544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731eb5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12731eb8:;
  /* 12731eb8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731ebc je 0x12731ec4 */
  if (C.zf) goto L_12731ec4;
  /* 12731ebe cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731ec2 jge 0x12731ec6 */
  if ((C.sf==C.of)) goto L_12731ec6;
L_12731ec4:;
  /* 12731ec4 jmp 0x12731f18 */
  goto L_12731f18;
L_12731ec6:;
  /* 12731ec6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12731ec9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731ecc push ecx */
  push32((uint32_t)(ECX));
  /* 12731ecd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12731ed0 push edx */
  push32((uint32_t)(EDX));
  /* 12731ed1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12731ed4 push eax */
  push32((uint32_t)(EAX));
  /* 12731ed5 call 0x12728cd0 */
  push32(0x12731edau); f_12728cd0();
  /* 12731eda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12731edd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12731ee0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731ee3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12731ee7 mov eax, 1 */
  EAX = (0x1u);
  /* 12731eec jmp 0x12731f2e */
  goto L_12731f2e;
L_12731eee:;
  /* 12731eee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12731ef1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12731ef4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12731ef7 cmp eax, dword ptr [edx + 0x12750520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12750520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731efd jae 0x12731f0a */
  if (!C.cf) goto L_12731f0a;
  /* 12731eff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12731f02 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731f05 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12731f08 jmp 0x12731f13 */
  goto L_12731f13;
L_12731f0a:;
  /* 12731f0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12731f0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731f10 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12731f13:;
  /* 12731f13 jmp 0x12731dcb */
  goto L_12731dcb;
L_12731f18:;
  /* 12731f18 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12731f1b push eax */
  push32((uint32_t)(EAX));
  /* 12731f1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12731f1f push ecx */
  push32((uint32_t)(ECX));
  /* 12731f20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12731f23 push edx */
  push32((uint32_t)(EDX));
  /* 12731f24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12731f27 push eax */
  push32((uint32_t)(EAX));
  /* 12731f28 call dword ptr [0x127542d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542d4))), 0x12731f2eu);
L_12731f2e:;
  /* 12731f2e mov esp, ebp */
  ESP = (EBP);
  /* 12731f30 pop ebp */
  EBP = (pop32());
  /* 12731f31 ret 0x10 */
  ESPCHK(0x12731db0u, _esp0);
  ESP += 20; return;
}

/* FUN_10011f40 @ 0x12731f40 (118 bytes, 42 insns) */
void f_12731f40(void) {
  FTRACE(0x12731f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12731f41 mov ebp, esp */
  EBP = (ESP);
  /* 12731f43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731f46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12731f4d:;
  /* 12731f4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12731f50 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12731f52 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12731f55 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12731f59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12731f5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731f5f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12731f62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12731f64 je 0x12731faf */
  if (C.zf) goto L_12731faf;
  /* 12731f66 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12731f6a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731f6d jl 0x12731f82 */
  if ((C.sf!=C.of)) goto L_12731f82;
  /* 12731f6f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12731f73 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731f76 jg 0x12731f82 */
  if ((!C.zf&&C.sf==C.of)) goto L_12731f82;
  /* 12731f78 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12731f7b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12731f7d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12731f80 jmp 0x12731f9c */
  goto L_12731f9c;
L_12731f82:;
  /* 12731f82 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12731f86 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731f89 jl 0x12731f9c */
  if ((C.sf!=C.of)) goto L_12731f9c;
  /* 12731f8b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12731f8f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731f92 jg 0x12731f9c */
  if ((!C.zf&&C.sf==C.of)) goto L_12731f9c;
  /* 12731f94 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12731f97 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12731f99 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12731f9c:;
  /* 12731f9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12731f9f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12731fa2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12731fa6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12731faa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12731fad jmp 0x12731f4d */
  goto L_12731f4d;
L_12731faf:;
  /* 12731faf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12731fb2 mov esp, ebp */
  ESP = (EBP);
  /* 12731fb4 pop ebp */
  EBP = (pop32());
  /* 12731fb5 ret  */
  ESPCHK(0x12731f40u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12731fc0 (101 bytes, 36 insns) */
void f_12731fc0(void) {
  FTRACE(0x12731fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12731fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12731fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12731fc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12731fc6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12731fcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12731fd0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12731fd2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12731fd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12731fd8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12731fdb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12731fde:;
  /* 12731fde movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12731fe2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731fe5 jl 0x12731ff0 */
  if ((C.sf!=C.of)) goto L_12731ff0;
  /* 12731fe7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12731feb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731fee jle 0x12732002 */
  if ((C.zf||C.sf!=C.of)) goto L_12732002;
L_12731ff0:;
  /* 12731ff0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12731ff4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12731ff7 jl 0x1273201e */
  if ((C.sf!=C.of)) goto L_1273201e;
  /* 12731ff9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12731ffd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732000 jg 0x1273201e */
  if ((!C.zf&&C.sf==C.of)) goto L_1273201e;
L_12732002:;
  /* 12732002 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12732005 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732008 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1273200b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273200e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12732010 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12732013 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12732016 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732019 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1273201c jmp 0x12731fde */
  goto L_12731fde;
L_1273201e:;
  /* 1273201e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12732021 mov esp, ebp */
  ESP = (EBP);
  /* 12732023 pop ebp */
  EBP = (pop32());
  /* 12732024 ret  */
  ESPCHK(0x12731fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012030 @ 0x12732030 (122 bytes, 39 insns) */
void f_12732030(void) {
  FTRACE(0x12732030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12732030 push ebp */
  push32((uint32_t)(EBP));
  /* 12732031 mov ebp, esp */
  EBP = (ESP);
  /* 12732033 push ecx */
  push32((uint32_t)(ECX));
  /* 12732034 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12732037 cmp eax, dword ptr [0x1275319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1275319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273203d jae 0x12732061 */
  if (!C.cf) goto L_12732061;
  /* 1273203f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12732042 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12732045 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12732048 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1273204b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1273204e mov eax, dword ptr [ecx*4 + 0x12753060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12753060)));
  /* 12732055 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1273205a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1273205d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1273205f jne 0x1273207c */
  if (!C.zf) goto L_1273207c;
L_12732061:;
  /* 12732061 call 0x1272d380 */
  push32(0x12732066u); f_1272d380();
  /* 12732066 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1273206c call 0x1272d390 */
  push32(0x12732071u); f_1272d390();
  /* 12732071 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12732077 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1273207a jmp 0x127320a6 */
  goto L_127320a6;
L_1273207c:;
  /* 1273207c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273207f push edx */
  push32((uint32_t)(EDX));
  /* 12732080 call 0x1272eba0 */
  push32(0x12732085u); f_1272eba0();
  /* 12732085 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732088 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273208b push eax */
  push32((uint32_t)(EAX));
  /* 1273208c call 0x127320b0 */
  push32(0x12732091u); f_127320b0();
  /* 12732091 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732094 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12732097 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273209a push ecx */
  push32((uint32_t)(ECX));
  /* 1273209b call 0x1272ec30 */
  push32(0x127320a0u); f_1272ec30();
  /* 127320a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127320a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127320a6:;
  /* 127320a6 mov esp, ebp */
  ESP = (EBP);
  /* 127320a8 pop ebp */
  EBP = (pop32());
  /* 127320a9 ret  */
  ESPCHK(0x12732030u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x127320b0 (170 bytes, 59 insns) */
void f_127320b0(void) {
  FTRACE(0x127320b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127320b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127320b1 mov ebp, esp */
  EBP = (ESP);
  /* 127320b3 push ecx */
  push32((uint32_t)(ECX));
  /* 127320b4 push esi */
  push32((uint32_t)(ESI));
  /* 127320b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127320b8 push eax */
  push32((uint32_t)(EAX));
  /* 127320b9 call 0x1272ea20 */
  push32(0x127320beu); f_1272ea20();
  /* 127320be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127320c1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127320c4 je 0x12732103 */
  if (C.zf) goto L_12732103;
  /* 127320c6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127320ca je 0x127320d2 */
  if (C.zf) goto L_127320d2;
  /* 127320cc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127320d0 jne 0x127320ec */
  if (!C.zf) goto L_127320ec;
L_127320d2:;
  /* 127320d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 127320d4 call 0x1272ea20 */
  push32(0x127320d9u); f_1272ea20();
  /* 127320d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127320dc mov esi, eax */
  ESI = (EAX);
  /* 127320de push 2 */
  push32((uint32_t)(0x2u));
  /* 127320e0 call 0x1272ea20 */
  push32(0x127320e5u); f_1272ea20();
  /* 127320e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127320e8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127320ea je 0x12732103 */
  if (C.zf) goto L_12732103;
L_127320ec:;
  /* 127320ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127320ef push ecx */
  push32((uint32_t)(ECX));
  /* 127320f0 call 0x1272ea20 */
  push32(0x127320f5u); f_1272ea20();
  /* 127320f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127320f8 push eax */
  push32((uint32_t)(EAX));
  /* 127320f9 call dword ptr [0x127542c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542c4))), 0x127320ffu);
  /* 127320ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12732101 je 0x1273210c */
  if (C.zf) goto L_1273210c;
L_12732103:;
  /* 12732103 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1273210a jmp 0x12732115 */
  goto L_12732115;
L_1273210c:;
  /* 1273210c call dword ptr [0x1275439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275439c))), 0x12732112u);
  /* 12732112 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12732115:;
  /* 12732115 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12732118 push edx */
  push32((uint32_t)(EDX));
  /* 12732119 call 0x1272e940 */
  push32(0x1273211eu); f_1272e940();
  /* 1273211e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732121 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12732124 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12732127 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273212a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1273212d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12732130 mov edx, dword ptr [eax*4 + 0x12753060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12753060)));
  /* 12732137 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1273213c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732140 je 0x12732153 */
  if (C.zf) goto L_12732153;
  /* 12732142 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12732145 push eax */
  push32((uint32_t)(EAX));
  /* 12732146 call 0x1272d2e0 */
  push32(0x1273214bu); f_1272d2e0();
  /* 1273214b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273214e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12732151 jmp 0x12732155 */
  goto L_12732155;
L_12732153:;
  /* 12732153 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12732155:;
  /* 12732155 pop esi */
  ESI = (pop32());
  /* 12732156 mov esp, ebp */
  ESP = (EBP);
  /* 12732158 pop ebp */
  EBP = (pop32());
  /* 12732159 ret  */
  ESPCHK(0x127320b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012160 @ 0x12732160 (146 bytes, 52 insns) */
void f_12732160(void) {
  FTRACE(0x12732160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12732160 push ebp */
  push32((uint32_t)(EBP));
  /* 12732161 mov ebp, esp */
  EBP = (ESP);
  /* 12732163 push ebx */
  push32((uint32_t)(EBX));
  /* 12732164 push esi */
  push32((uint32_t)(ESI));
  /* 12732165 push edi */
  push32((uint32_t)(EDI));
L_12732166:;
  /* 12732166 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273216a jne 0x1273218a */
  if (!C.zf) goto L_1273218a;
  /* 1273216c push 0x1274d430 */
  push32((uint32_t)(0x1274d430u));
  /* 12732171 push 0 */
  push32((uint32_t)(0x0u));
  /* 12732173 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12732175 push 0x1274daf8 */
  push32((uint32_t)(0x1274daf8u));
  /* 1273217a push 2 */
  push32((uint32_t)(0x2u));
  /* 1273217c call 0x12724570 */
  push32(0x12732181u); f_12724570();
  /* 12732181 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732184 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732187 jne 0x1273218a */
  if (!C.zf) goto L_1273218a;
  /* 12732189 int3  */
  x86_unimpl("int3 @ 0x12732189");
L_1273218a:;
  /* 1273218a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1273218c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1273218e jne 0x12732166 */
  if (!C.zf) goto L_12732166;
  /* 12732190 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12732193 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12732196 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1273219c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1273219e je 0x127321ed */
  if (C.zf) goto L_127321ed;
  /* 127321a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127321a3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127321a6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 127321a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127321ab je 0x127321ed */
  if (C.zf) goto L_127321ed;
  /* 127321ad push 2 */
  push32((uint32_t)(0x2u));
  /* 127321af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127321b2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127321b5 push eax */
  push32((uint32_t)(EAX));
  /* 127321b6 call 0x12725f40 */
  push32(0x127321bbu); f_12725f40();
  /* 127321bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127321be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127321c1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127321c4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 127321ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127321cd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 127321d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127321d3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 127321d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127321dc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 127321e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127321e6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_127321ed:;
  /* 127321ed pop edi */
  EDI = (pop32());
  /* 127321ee pop esi */
  ESI = (pop32());
  /* 127321ef pop ebx */
  EBX = (pop32());
  /* 127321f0 pop ebp */
  EBP = (pop32());
  /* 127321f1 ret  */
  ESPCHK(0x12732160u, _esp0);
  ESP += 4; return;
}

/* FUN_10012200 @ 0x12732200 (289 bytes, 97 insns) */
void f_12732200(void) {
  FTRACE(0x12732200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12732200 push ebp */
  push32((uint32_t)(EBP));
  /* 12732201 mov ebp, esp */
  EBP = (ESP);
  /* 12732203 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12732206 push esi */
  push32((uint32_t)(ESI));
  /* 12732207 mov eax, dword ptr [0x12750c98] */
  EAX = (r32((uint32_t)(0x12750c98)));
  /* 1273220c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1273220f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12732216 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1273221d jmp 0x12732228 */
  goto L_12732228;
L_1273221f:;
  /* 1273221f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12732222 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732225 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12732228:;
  /* 12732228 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273222c jae 0x12732261 */
  if (!C.cf) goto L_12732261;
  /* 1273222e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12732231 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12732234 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12732237 push ecx */
  push32((uint32_t)(ECX));
  /* 12732238 call 0x127282e0 */
  push32(0x1273223du); f_127282e0();
  /* 1273223d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732240 mov esi, eax */
  ESI = (EAX);
  /* 12732242 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12732245 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12732248 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1273224c push ecx */
  push32((uint32_t)(ECX));
  /* 1273224d call 0x127282e0 */
  push32(0x12732252u); f_127282e0();
  /* 12732252 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732255 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732258 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1273225c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1273225f jmp 0x1273221f */
  goto L_1273221f;
L_12732261:;
  /* 12732261 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12732264 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732267 push eax */
  push32((uint32_t)(EAX));
  /* 12732268 call 0x12725490 */
  push32(0x1273226du); f_12725490();
  /* 1273226d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732270 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12732273 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732277 je 0x12732319 */
  if (C.zf) goto L_12732319;
  /* 1273227d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12732280 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12732283 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1273228a jmp 0x12732295 */
  goto L_12732295;
L_1273228c:;
  /* 1273228c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1273228f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732292 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12732295:;
  /* 12732295 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732299 jae 0x1273230a */
  if (!C.cf) goto L_1273230a;
  /* 1273229b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1273229e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 127322a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127322a4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127322a7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127322aa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127322ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127322b0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 127322b3 push ecx */
  push32((uint32_t)(ECX));
  /* 127322b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127322b7 push edx */
  push32((uint32_t)(EDX));
  /* 127322b8 call 0x12728460 */
  push32(0x127322bdu); f_12728460();
  /* 127322bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127322c0 push eax */
  push32((uint32_t)(EAX));
  /* 127322c1 call 0x127282e0 */
  push32(0x127322c6u); f_127282e0();
  /* 127322c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127322c9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127322cc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127322ce mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127322d1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127322d4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 127322d7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127322da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127322dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127322e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127322e3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127322e6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 127322ea push eax */
  push32((uint32_t)(EAX));
  /* 127322eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127322ee push ecx */
  push32((uint32_t)(ECX));
  /* 127322ef call 0x12728460 */
  push32(0x127322f4u); f_12728460();
  /* 127322f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127322f7 push eax */
  push32((uint32_t)(EAX));
  /* 127322f8 call 0x127282e0 */
  push32(0x127322fdu); f_127282e0();
  /* 127322fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732300 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12732303 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732305 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12732308 jmp 0x1273228c */
  goto L_1273228c;
L_1273230a:;
  /* 1273230a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1273230d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12732310 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12732313 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732316 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12732319:;
  /* 12732319 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273231c pop esi */
  ESI = (pop32());
  /* 1273231d mov esp, ebp */
  ESP = (EBP);
  /* 1273231f pop ebp */
  EBP = (pop32());
  /* 12732320 ret  */
  ESPCHK(0x12732200u, _esp0);
  ESP += 4; return;
}

/* FUN_10012330 @ 0x12732330 (291 bytes, 97 insns) */
void f_12732330(void) {
  FTRACE(0x12732330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12732330 push ebp */
  push32((uint32_t)(EBP));
  /* 12732331 mov ebp, esp */
  EBP = (ESP);
  /* 12732333 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12732336 push esi */
  push32((uint32_t)(ESI));
  /* 12732337 mov eax, dword ptr [0x12750c98] */
  EAX = (r32((uint32_t)(0x12750c98)));
  /* 1273233c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1273233f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12732346 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1273234d jmp 0x12732358 */
  goto L_12732358;
L_1273234f:;
  /* 1273234f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12732352 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732355 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12732358:;
  /* 12732358 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273235c jae 0x12732392 */
  if (!C.cf) goto L_12732392;
  /* 1273235e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12732361 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12732364 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12732368 push ecx */
  push32((uint32_t)(ECX));
  /* 12732369 call 0x127282e0 */
  push32(0x1273236eu); f_127282e0();
  /* 1273236e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732371 mov esi, eax */
  ESI = (EAX);
  /* 12732373 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12732376 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12732379 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1273237d push ecx */
  push32((uint32_t)(ECX));
  /* 1273237e call 0x127282e0 */
  push32(0x12732383u); f_127282e0();
  /* 12732383 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732386 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732389 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1273238d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12732390 jmp 0x1273234f */
  goto L_1273234f;
L_12732392:;
  /* 12732392 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12732395 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732398 push eax */
  push32((uint32_t)(EAX));
  /* 12732399 call 0x12725490 */
  push32(0x1273239eu); f_12725490();
  /* 1273239e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127323a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127323a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127323a8 je 0x1273244b */
  if (C.zf) goto L_1273244b;
  /* 127323ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127323b1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127323b4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127323bb jmp 0x127323c6 */
  goto L_127323c6;
L_127323bd:;
  /* 127323bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127323c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127323c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_127323c6:;
  /* 127323c6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127323ca jae 0x1273243c */
  if (!C.cf) goto L_1273243c;
  /* 127323cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127323cf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 127323d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127323d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127323d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127323db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127323de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127323e1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 127323e5 push ecx */
  push32((uint32_t)(ECX));
  /* 127323e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127323e9 push edx */
  push32((uint32_t)(EDX));
  /* 127323ea call 0x12728460 */
  push32(0x127323efu); f_12728460();
  /* 127323ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127323f2 push eax */
  push32((uint32_t)(EAX));
  /* 127323f3 call 0x127282e0 */
  push32(0x127323f8u); f_127282e0();
  /* 127323f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127323fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127323fe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732400 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12732403 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12732406 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12732409 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1273240c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273240f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12732412 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12732415 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12732418 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1273241c push eax */
  push32((uint32_t)(EAX));
  /* 1273241d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12732420 push ecx */
  push32((uint32_t)(ECX));
  /* 12732421 call 0x12728460 */
  push32(0x12732426u); f_12728460();
  /* 12732426 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732429 push eax */
  push32((uint32_t)(EAX));
  /* 1273242a call 0x127282e0 */
  push32(0x1273242fu); f_127282e0();
  /* 1273242f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732432 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12732435 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732437 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1273243a jmp 0x127323bd */
  goto L_127323bd;
L_1273243c:;
  /* 1273243c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1273243f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12732442 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12732445 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732448 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1273244b:;
  /* 1273244b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273244e pop esi */
  ESI = (pop32());
  /* 1273244f mov esp, ebp */
  ESP = (EBP);
  /* 12732451 pop ebp */
  EBP = (pop32());
  /* 12732452 ret  */
  ESPCHK(0x12732330u, _esp0);
  ESP += 4; return;
}

/* FUN_10012460 @ 0x12732460 (878 bytes, 273 insns) */
void f_12732460(void) {
  FTRACE(0x12732460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12732460 push ebp */
  push32((uint32_t)(EBP));
  /* 12732461 mov ebp, esp */
  EBP = (ESP);
  /* 12732463 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12732466 push esi */
  push32((uint32_t)(ESI));
  /* 12732467 mov eax, dword ptr [0x12750c98] */
  EAX = (r32((uint32_t)(0x12750c98)));
  /* 1273246c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1273246f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12732476 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1273247d jmp 0x12732488 */
  goto L_12732488;
L_1273247f:;
  /* 1273247f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12732482 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732485 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12732488:;
  /* 12732488 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273248c jae 0x127324c1 */
  if (!C.cf) goto L_127324c1;
  /* 1273248e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12732491 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12732494 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12732497 push ecx */
  push32((uint32_t)(ECX));
  /* 12732498 call 0x127282e0 */
  push32(0x1273249du); f_127282e0();
  /* 1273249d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127324a0 mov esi, eax */
  ESI = (EAX);
  /* 127324a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127324a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127324a8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 127324ac push ecx */
  push32((uint32_t)(ECX));
  /* 127324ad call 0x127282e0 */
  push32(0x127324b2u); f_127282e0();
  /* 127324b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127324b5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127324b8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 127324bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127324bf jmp 0x1273247f */
  goto L_1273247f;
L_127324c1:;
  /* 127324c1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127324c8 jmp 0x127324d3 */
  goto L_127324d3;
L_127324ca:;
  /* 127324ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127324cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127324d0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_127324d3:;
  /* 127324d3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127324d7 jae 0x1273250d */
  if (!C.cf) goto L_1273250d;
  /* 127324d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127324dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127324df mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 127324e3 push eax */
  push32((uint32_t)(EAX));
  /* 127324e4 call 0x127282e0 */
  push32(0x127324e9u); f_127282e0();
  /* 127324e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127324ec mov esi, eax */
  ESI = (EAX);
  /* 127324ee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127324f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127324f4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 127324f8 push eax */
  push32((uint32_t)(EAX));
  /* 127324f9 call 0x127282e0 */
  push32(0x127324feu); f_127282e0();
  /* 127324fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732501 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732504 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12732508 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1273250b jmp 0x127324ca */
  goto L_127324ca;
L_1273250d:;
  /* 1273250d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12732510 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12732516 push eax */
  push32((uint32_t)(EAX));
  /* 12732517 call 0x127282e0 */
  push32(0x1273251cu); f_127282e0();
  /* 1273251c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273251f mov esi, eax */
  ESI = (EAX);
  /* 12732521 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12732524 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1273252a push edx */
  push32((uint32_t)(EDX));
  /* 1273252b call 0x127282e0 */
  push32(0x12732530u); f_127282e0();
  /* 12732530 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732533 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732536 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1273253a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1273253d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12732540 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12732546 push edx */
  push32((uint32_t)(EDX));
  /* 12732547 call 0x127282e0 */
  push32(0x1273254cu); f_127282e0();
  /* 1273254c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273254f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12732552 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12732556 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12732559 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273255c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12732562 push ecx */
  push32((uint32_t)(ECX));
  /* 12732563 call 0x127282e0 */
  push32(0x12732568u); f_127282e0();
  /* 12732568 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273256b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1273256e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12732572 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12732575 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12732578 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1273257e push edx */
  push32((uint32_t)(EDX));
  /* 1273257f call 0x127282e0 */
  push32(0x12732584u); f_127282e0();
  /* 12732584 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732587 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1273258a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1273258e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12732591 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12732594 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732599 push eax */
  push32((uint32_t)(EAX));
  /* 1273259a call 0x12725490 */
  push32(0x1273259fu); f_12725490();
  /* 1273259f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127325a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127325a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127325a9 je 0x127327c6 */
  if (C.zf) goto L_127327c6;
  /* 127325af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127325b2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 127325b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127325b8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127325be mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127325c1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 127325c6 mov eax, dword ptr [0x12750c98] */
  EAX = (r32((uint32_t)(0x12750c98)));
  /* 127325cb push eax */
  push32((uint32_t)(EAX));
  /* 127325cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127325cf push ecx */
  push32((uint32_t)(ECX));
  /* 127325d0 call 0x1272bd90 */
  push32(0x127325d5u); f_1272bd90();
  /* 127325d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127325d8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127325df jmp 0x127325ea */
  goto L_127325ea;
L_127325e1:;
  /* 127325e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127325e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127325e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_127325ea:;
  /* 127325ea cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127325ee jae 0x1273265e */
  if (!C.cf) goto L_1273265e;
  /* 127325f0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127325f3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127325f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127325f9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 127325fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127325ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12732602 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12732605 push edx */
  push32((uint32_t)(EDX));
  /* 12732606 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12732609 push eax */
  push32((uint32_t)(EAX));
  /* 1273260a call 0x12728460 */
  push32(0x1273260fu); f_12728460();
  /* 1273260f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732612 push eax */
  push32((uint32_t)(EAX));
  /* 12732613 call 0x127282e0 */
  push32(0x12732618u); f_127282e0();
  /* 12732618 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273261b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1273261e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12732622 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12732625 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12732628 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1273262b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1273262e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12732632 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12732635 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12732638 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1273263c push edx */
  push32((uint32_t)(EDX));
  /* 1273263d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12732640 push eax */
  push32((uint32_t)(EAX));
  /* 12732641 call 0x12728460 */
  push32(0x12732646u); f_12728460();
  /* 12732646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732649 push eax */
  push32((uint32_t)(EAX));
  /* 1273264a call 0x127282e0 */
  push32(0x1273264fu); f_127282e0();
  /* 1273264f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732652 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12732655 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12732659 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1273265c jmp 0x127325e1 */
  goto L_127325e1;
L_1273265e:;
  /* 1273265e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12732665 jmp 0x12732670 */
  goto L_12732670;
L_12732667:;
  /* 12732667 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1273266a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273266d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12732670:;
  /* 12732670 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732674 jae 0x127326e6 */
  if (!C.cf) goto L_127326e6;
  /* 12732676 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12732679 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1273267c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1273267f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12732683 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12732686 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12732689 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1273268d push eax */
  push32((uint32_t)(EAX));
  /* 1273268e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12732691 push ecx */
  push32((uint32_t)(ECX));
  /* 12732692 call 0x12728460 */
  push32(0x12732697u); f_12728460();
  /* 12732697 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273269a push eax */
  push32((uint32_t)(EAX));
  /* 1273269b call 0x127282e0 */
  push32(0x127326a0u); f_127282e0();
  /* 127326a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127326a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127326a6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 127326aa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127326ad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127326b0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127326b3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127326b6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 127326ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127326bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127326c0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 127326c4 push eax */
  push32((uint32_t)(EAX));
  /* 127326c5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127326c8 push ecx */
  push32((uint32_t)(ECX));
  /* 127326c9 call 0x12728460 */
  push32(0x127326ceu); f_12728460();
  /* 127326ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127326d1 push eax */
  push32((uint32_t)(EAX));
  /* 127326d2 call 0x127282e0 */
  push32(0x127326d7u); f_127282e0();
  /* 127326d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127326da mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127326dd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 127326e1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127326e4 jmp 0x12732667 */
  goto L_12732667;
L_127326e6:;
  /* 127326e6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127326e9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127326ec mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 127326f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127326f5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 127326fb push ecx */
  push32((uint32_t)(ECX));
  /* 127326fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127326ff push edx */
  push32((uint32_t)(EDX));
  /* 12732700 call 0x12728460 */
  push32(0x12732705u); f_12728460();
  /* 12732705 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732708 push eax */
  push32((uint32_t)(EAX));
  /* 12732709 call 0x127282e0 */
  push32(0x1273270eu); f_127282e0();
  /* 1273270e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732711 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12732714 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12732718 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1273271b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1273271e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12732721 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12732727 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273272a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12732730 push eax */
  push32((uint32_t)(EAX));
  /* 12732731 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12732734 push ecx */
  push32((uint32_t)(ECX));
  /* 12732735 call 0x12728460 */
  push32(0x1273273au); f_12728460();
  /* 1273273a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273273d push eax */
  push32((uint32_t)(EAX));
  /* 1273273e call 0x127282e0 */
  push32(0x12732743u); f_127282e0();
  /* 12732743 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732746 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12732749 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1273274d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12732750 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12732753 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12732756 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1273275c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273275f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12732765 push ecx */
  push32((uint32_t)(ECX));
  /* 12732766 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12732769 push edx */
  push32((uint32_t)(EDX));
  /* 1273276a call 0x12728460 */
  push32(0x1273276fu); f_12728460();
  /* 1273276f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732772 push eax */
  push32((uint32_t)(EAX));
  /* 12732773 call 0x127282e0 */
  push32(0x12732778u); f_127282e0();
  /* 12732778 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273277b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1273277e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12732782 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12732785 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12732788 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1273278b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12732791 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12732794 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1273279a push eax */
  push32((uint32_t)(EAX));
  /* 1273279b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1273279e push ecx */
  push32((uint32_t)(ECX));
  /* 1273279f call 0x12728460 */
  push32(0x127327a4u); f_12728460();
  /* 127327a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127327a7 push eax */
  push32((uint32_t)(EAX));
  /* 127327a8 call 0x127282e0 */
  push32(0x127327adu); f_127282e0();
  /* 127327ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127327b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127327b3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 127327b7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127327ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127327bd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127327c0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_127327c6:;
  /* 127327c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127327c9 pop esi */
  ESI = (pop32());
  /* 127327ca mov esp, ebp */
  ESP = (EBP);
  /* 127327cc pop ebp */
  EBP = (pop32());
  /* 127327cd ret  */
  ESPCHK(0x12732460u, _esp0);
  ESP += 4; return;
}

/* FUN_100127d0 @ 0x127327d0 (31 bytes, 15 insns) */
void f_127327d0(void) {
  FTRACE(0x127327d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127327d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127327d1 mov ebp, esp */
  EBP = (ESP);
  /* 127327d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127327d5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127327d8 push eax */
  push32((uint32_t)(EAX));
  /* 127327d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127327dc push ecx */
  push32((uint32_t)(ECX));
  /* 127327dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127327e0 push edx */
  push32((uint32_t)(EDX));
  /* 127327e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127327e4 push eax */
  push32((uint32_t)(EAX));
  /* 127327e5 call 0x127327f0 */
  push32(0x127327eau); f_127327f0();
  /* 127327ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127327ed pop ebp */
  EBP = (pop32());
  /* 127327ee ret  */
  ESPCHK(0x127327d0u, _esp0);
  ESP += 4; return;
}

