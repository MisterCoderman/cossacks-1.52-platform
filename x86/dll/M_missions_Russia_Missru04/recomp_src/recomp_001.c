#include "recomp.h"

/* FUN_10008700 @ 0x10a48700 (116 bytes, 34 insns) */
void f_10a48700(void) {
  FTRACE(0x10a48700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a48700 push ebp */
  push32((uint32_t)(EBP));
  /* 10a48701 mov ebp, esp */
  EBP = (ESP);
  /* 10a48703 push ecx */
  push32((uint32_t)(ECX));
  /* 10a48704 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10a4870b push 9 */
  push32((uint32_t)(0x9u));
  /* 10a4870d call 0x10a47f20 */
  push32(0x10a48712u); f_10a47f20();
  /* 10a48712 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48715 call 0x10a49e10 */
  push32(0x10a4871au); f_10a49e10();
  /* 10a4871a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4871c jge 0x10a48725 */
  if ((C.sf==C.of)) goto L_10a48725;
  /* 10a4871e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10a48725:;
  /* 10a48725 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a48727 call 0x10a47fc0 */
  push32(0x10a4872cu); f_10a47fc0();
  /* 10a4872c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4872f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a48731 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a48733 mov eax, dword ptr [0x10a71fac] */
  EAX = (r32((uint32_t)(0x10a71fac)));
  /* 10a48738 push eax */
  push32((uint32_t)(EAX));
  /* 10a48739 call dword ptr [0x10a73348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73348))), 0x10a4873fu);
  /* 10a4873f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a48741 jne 0x10a4876d */
  if (!C.zf) goto L_10a4876d;
  /* 10a48743 call dword ptr [0x10a73328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73328))), 0x10a48749u);
  /* 10a48749 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4874c jne 0x10a48766 */
  if (!C.zf) goto L_10a48766;
  /* 10a4874e call 0x10a4c400 */
  push32(0x10a48753u); f_10a4c400();
  /* 10a48753 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10a48759 call 0x10a4c3f0 */
  push32(0x10a4875eu); f_10a4c3f0();
  /* 10a4875e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10a48764 jmp 0x10a4876d */
  goto L_10a4876d;
L_10a48766:;
  /* 10a48766 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10a4876d:;
  /* 10a4876d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a48770 mov esp, ebp */
  ESP = (EBP);
  /* 10a48772 pop ebp */
  EBP = (pop32());
  /* 10a48773 ret  */
  ESPCHK(0x10a48700u, _esp0);
  ESP += 4; return;
}

/* FUN_10008780 @ 0x10a48780 (10 bytes, 5 insns) */
void f_10a48780(void) {
  FTRACE(0x10a48780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a48780 push ebp */
  push32((uint32_t)(EBP));
  /* 10a48781 mov ebp, esp */
  EBP = (ESP);
  /* 10a48783 call 0x10a48700 */
  push32(0x10a48788u); f_10a48700();
  /* 10a48788 pop ebp */
  EBP = (pop32());
  /* 10a48789 ret  */
  ESPCHK(0x10a48780u, _esp0);
  ESP += 4; return;
}

/* FUN_10008790 @ 0x10a48790 (10 bytes, 5 insns) */
void f_10a48790(void) {
  FTRACE(0x10a48790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a48790 push ebp */
  push32((uint32_t)(EBP));
  /* 10a48791 mov ebp, esp */
  EBP = (ESP);
  /* 10a48793 mov eax, dword ptr [0x10a6ec94] */
  EAX = (r32((uint32_t)(0x10a6ec94)));
  /* 10a48798 pop ebp */
  EBP = (pop32());
  /* 10a48799 ret  */
  ESPCHK(0x10a48790u, _esp0);
  ESP += 4; return;
}

/* FUN_100087a0 @ 0x10a487a0 (31 bytes, 11 insns) */
void f_10a487a0(void) {
  FTRACE(0x10a487a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a487a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a487a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a487a3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a487aa jbe 0x10a487b0 */
  if ((C.cf||C.zf)) goto L_10a487b0;
  /* 10a487ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a487ae jmp 0x10a487bd */
  goto L_10a487bd;
L_10a487b0:;
  /* 10a487b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a487b3 mov dword ptr [0x10a6ec94], eax */
  w32((uint32_t)(0x10a6ec94), (EAX));
  /* 10a487b8 mov eax, 1 */
  EAX = (0x1u);
L_10a487bd:;
  /* 10a487bd pop ebp */
  EBP = (pop32());
  /* 10a487be ret  */
  ESPCHK(0x10a487a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100087c0 @ 0x10a487c0 (89 bytes, 20 insns) */
void f_10a487c0(void) {
  FTRACE(0x10a487c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a487c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a487c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a487c3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10a487c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a487ca mov eax, dword ptr [0x10a71fac] */
  EAX = (r32((uint32_t)(0x10a71fac)));
  /* 10a487cf push eax */
  push32((uint32_t)(EAX));
  /* 10a487d0 call dword ptr [0x10a73384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73384))), 0x10a487d6u);
  /* 10a487d6 mov dword ptr [0x10a71fa8], eax */
  w32((uint32_t)(0x10a71fa8), (EAX));
  /* 10a487db cmp dword ptr [0x10a71fa8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a71fa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a487e2 jne 0x10a487e8 */
  if (!C.zf) goto L_10a487e8;
  /* 10a487e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a487e6 jmp 0x10a48817 */
  goto L_10a48817;
L_10a487e8:;
  /* 10a487e8 mov ecx, dword ptr [0x10a71fa8] */
  ECX = (r32((uint32_t)(0x10a71fa8)));
  /* 10a487ee mov dword ptr [0x10a71f9c], ecx */
  w32((uint32_t)(0x10a71f9c), (ECX));
  /* 10a487f4 mov dword ptr [0x10a71fa0], 0 */
  w32((uint32_t)(0x10a71fa0), (0x0u));
  /* 10a487fe mov dword ptr [0x10a71fa4], 0 */
  w32((uint32_t)(0x10a71fa4), (0x0u));
  /* 10a48808 mov dword ptr [0x10a71f88], 0x10 */
  w32((uint32_t)(0x10a71f88), (0x10u));
  /* 10a48812 mov eax, 1 */
  EAX = (0x1u);
L_10a48817:;
  /* 10a48817 pop ebp */
  EBP = (pop32());
  /* 10a48818 ret  */
  ESPCHK(0x10a487c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008820 @ 0x10a48820 (85 bytes, 29 insns) */
void f_10a48820(void) {
  FTRACE(0x10a48820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a48820 push ebp */
  push32((uint32_t)(EBP));
  /* 10a48821 mov ebp, esp */
  EBP = (ESP);
  /* 10a48823 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48826 mov eax, dword ptr [0x10a71fa4] */
  EAX = (r32((uint32_t)(0x10a71fa4)));
  /* 10a4882b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4882e mov ecx, dword ptr [0x10a71fa8] */
  ECX = (r32((uint32_t)(0x10a71fa8)));
  /* 10a48834 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48836 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a48839 mov edx, dword ptr [0x10a71fa8] */
  EDX = (r32((uint32_t)(0x10a71fa8)));
  /* 10a4883f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a48842:;
  /* 10a48842 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a48845 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48848 jae 0x10a4886f */
  if (!C.cf) goto L_10a4886f;
  /* 10a4884a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4884d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48850 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48853 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a48856 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4885d jae 0x10a48864 */
  if (!C.cf) goto L_10a48864;
  /* 10a4885f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a48862 jmp 0x10a48871 */
  goto L_10a48871;
L_10a48864:;
  /* 10a48864 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a48867 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4886a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a4886d jmp 0x10a48842 */
  goto L_10a48842;
L_10a4886f:;
  /* 10a4886f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a48871:;
  /* 10a48871 mov esp, ebp */
  ESP = (EBP);
  /* 10a48873 pop ebp */
  EBP = (pop32());
  /* 10a48874 ret  */
  ESPCHK(0x10a48820u, _esp0);
  ESP += 4; return;
}

/* FUN_10008880 @ 0x10a48880 (95 bytes, 33 insns) */
void f_10a48880(void) {
  FTRACE(0x10a48880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a48880 push ebp */
  push32((uint32_t)(EBP));
  /* 10a48881 mov ebp, esp */
  EBP = (ESP);
  /* 10a48883 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48886 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48889 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4888c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4888f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a48892 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a48895 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10a48898 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a4889b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a488a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a488a3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a488a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a488a8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a488ab and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a488ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a488af jne 0x10a488d1 */
  if (!C.zf) goto L_10a488d1;
  /* 10a488b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a488b4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10a488b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a488b9 jne 0x10a488d1 */
  if (!C.zf) goto L_10a488d1;
  /* 10a488bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a488be and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a488c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a488c6 je 0x10a488d1 */
  if (C.zf) goto L_10a488d1;
  /* 10a488c8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10a488cf jmp 0x10a488d8 */
  goto L_10a488d8;
L_10a488d1:;
  /* 10a488d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10a488d8:;
  /* 10a488d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a488db mov esp, ebp */
  ESP = (EBP);
  /* 10a488dd pop ebp */
  EBP = (pop32());
  /* 10a488de ret  */
  ESPCHK(0x10a48880u, _esp0);
  ESP += 4; return;
}

/* FUN_100088e0 @ 0x10a488e0 (1485 bytes, 453 insns) */
void f_10a488e0(void) {
  FTRACE(0x10a488e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a488e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a488e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a488e3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a488e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a488e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a488ec mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10a488ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a488f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a488f5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a488f8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a488fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a488fe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10a48901 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a48904 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a48907 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4890d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48910 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10a48917 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4891a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4891d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48920 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a48923 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a48926 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a48928 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4892b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10a4892e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a48931 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48934 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10a48937 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a4893a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a4893c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a4893f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a48942 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10a48945 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a48948 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a4894b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4894e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a48950 jne 0x10a48a78 */
  if (!C.zf) goto L_10a48a78;
  /* 10a48956 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a48959 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10a4895c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4895f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10a48962 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48966 jbe 0x10a4896f */
  if ((C.cf||C.zf)) goto L_10a4896f;
  /* 10a48968 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10a4896f:;
  /* 10a4896f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a48972 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a48975 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a48978 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4897b jne 0x10a48a51 */
  if (!C.zf) goto L_10a48a51;
  /* 10a48981 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48985 jae 0x10a489e6 */
  if (!C.cf) goto L_10a489e6;
  /* 10a48987 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a4898c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4898f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a48991 not eax */
  EAX = (~(EAX));
  /* 10a48993 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a48996 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48999 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10a4899d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4899f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a489a2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a489a5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10a489a9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a489ac add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a489af mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10a489b2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a489b5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a489b8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a489bb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10a489be mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a489c1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a489c4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a489c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a489ca jne 0x10a489e4 */
  if (!C.zf) goto L_10a489e4;
  /* 10a489cc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a489d1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a489d4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a489d6 not eax */
  EAX = (~(EAX));
  /* 10a489d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a489db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a489dd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a489df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a489e2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a489e4:;
  /* 10a489e4 jmp 0x10a48a51 */
  goto L_10a48a51;
L_10a489e6:;
  /* 10a489e6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a489e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a489ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a489f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a489f3 not edx */
  EDX = (~(EDX));
  /* 10a489f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a489f8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a489fb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10a48a02 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a48a04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a48a07 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48a0a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10a48a11 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48a14 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48a17 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a48a1a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a48a1d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48a20 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48a23 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10a48a26 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48a29 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48a2c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a48a30 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a48a32 jne 0x10a48a51 */
  if (!C.zf) goto L_10a48a51;
  /* 10a48a34 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a48a37 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48a3a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a48a3f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a48a41 not edx */
  EDX = (~(EDX));
  /* 10a48a43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48a46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a48a49 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a48a4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48a4e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10a48a51:;
  /* 10a48a51 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a48a54 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a48a57 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a48a5a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a48a5d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10a48a60 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a48a63 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a48a66 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a48a69 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a48a6c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a48a6f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a48a72 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48a75 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10a48a78:;
  /* 10a48a78 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a48a7b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10a48a7e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48a81 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a48a84 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48a88 jbe 0x10a48a91 */
  if ((C.cf||C.zf)) goto L_10a48a91;
  /* 10a48a8a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10a48a91:;
  /* 10a48a91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a48a94 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a48a97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a48a99 jne 0x10a48bf5 */
  if (!C.zf) goto L_10a48bf5;
  /* 10a48a9f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a48aa2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48aa5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10a48aa8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a48aab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10a48aae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48ab1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10a48ab4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48ab8 jbe 0x10a48ac1 */
  if ((C.cf||C.zf)) goto L_10a48ac1;
  /* 10a48aba mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10a48ac1:;
  /* 10a48ac1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a48ac4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48ac7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10a48aca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a48acd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10a48ad0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48ad3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10a48ad6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48ada jbe 0x10a48ae3 */
  if ((C.cf||C.zf)) goto L_10a48ae3;
  /* 10a48adc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10a48ae3:;
  /* 10a48ae3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a48ae6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48ae9 je 0x10a48bef */
  if (C.zf) goto L_10a48bef;
  /* 10a48aef mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a48af2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a48af5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a48af8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48afb jne 0x10a48bd1 */
  if (!C.zf) goto L_10a48bd1;
  /* 10a48b01 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48b05 jae 0x10a48b66 */
  if (!C.cf) goto L_10a48b66;
  /* 10a48b07 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a48b0c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a48b0f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a48b11 not edx */
  EDX = (~(EDX));
  /* 10a48b13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a48b16 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48b19 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10a48b1d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a48b1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a48b22 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48b25 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10a48b29 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48b2c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48b2f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a48b32 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a48b35 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48b38 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48b3b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10a48b3e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48b41 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48b44 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a48b48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a48b4a jne 0x10a48b64 */
  if (!C.zf) goto L_10a48b64;
  /* 10a48b4c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a48b51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a48b54 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a48b56 not edx */
  EDX = (~(EDX));
  /* 10a48b58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48b5b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a48b5d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a48b5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48b62 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a48b64:;
  /* 10a48b64 jmp 0x10a48bd1 */
  goto L_10a48bd1;
L_10a48b66:;
  /* 10a48b66 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a48b69 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48b6c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a48b71 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a48b73 not eax */
  EAX = (~(EAX));
  /* 10a48b75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a48b78 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48b7b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10a48b82 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a48b84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a48b87 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48b8a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10a48b91 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48b94 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48b97 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10a48b9a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a48b9d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48ba0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48ba3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10a48ba6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48ba9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48bac movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a48bb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a48bb2 jne 0x10a48bd1 */
  if (!C.zf) goto L_10a48bd1;
  /* 10a48bb4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a48bb7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48bba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a48bbf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a48bc1 not eax */
  EAX = (~(EAX));
  /* 10a48bc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48bc6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a48bc9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a48bcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48bce mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10a48bd1:;
  /* 10a48bd1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a48bd4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a48bd7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a48bda mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a48bdd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10a48be0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a48be3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a48be6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a48be9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a48bec mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10a48bef:;
  /* 10a48bef mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a48bf2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10a48bf5:;
  /* 10a48bf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a48bf8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a48bfb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a48bfd jne 0x10a48c0b */
  if (!C.zf) goto L_10a48c0b;
  /* 10a48bff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a48c02 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48c05 je 0x10a48d1b */
  if (C.zf) goto L_10a48d1b;
L_10a48c0b:;
  /* 10a48c0b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a48c0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a48c11 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10a48c14 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a48c17 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a48c1a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a48c1d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a48c20 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a48c23 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a48c26 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a48c29 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10a48c2c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a48c2f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a48c32 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10a48c35 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a48c38 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a48c3b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a48c3e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a48c41 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a48c44 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a48c47 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a48c4a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48c4d jne 0x10a48d1b */
  if (!C.zf) goto L_10a48d1b;
  /* 10a48c53 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48c57 jae 0x10a48cb4 */
  if (!C.cf) goto L_10a48cb4;
  /* 10a48c59 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48c5c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48c5f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a48c63 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48c66 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48c69 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a48c6c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a48c6f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48c72 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48c75 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10a48c78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a48c7a jne 0x10a48c92 */
  if (!C.zf) goto L_10a48c92;
  /* 10a48c7c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a48c81 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a48c84 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a48c86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48c89 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a48c8b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a48c8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48c90 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a48c92:;
  /* 10a48c92 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a48c97 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a48c9a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a48c9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a48c9f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48ca2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10a48ca6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a48ca8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a48cab mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48cae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10a48cb2 jmp 0x10a48d1b */
  goto L_10a48d1b;
L_10a48cb4:;
  /* 10a48cb4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48cb7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48cba movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a48cbe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48cc1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48cc4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a48cc7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a48cca mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48ccd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48cd0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10a48cd3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a48cd5 jne 0x10a48cf2 */
  if (!C.zf) goto L_10a48cf2;
  /* 10a48cd7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a48cda sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48cdd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a48ce2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a48ce4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48ce7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a48cea or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a48cec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48cef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10a48cf2:;
  /* 10a48cf2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a48cf5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48cf8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a48cfd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a48cff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a48d02 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48d05 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10a48d0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a48d0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a48d11 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a48d14 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10a48d1b:;
  /* 10a48d1b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a48d1e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a48d21 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a48d23 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a48d26 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48d29 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a48d2c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10a48d2f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a48d32 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a48d34 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48d37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a48d3a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a48d3c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a48d3f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48d42 jne 0x10a48ea9 */
  if (!C.zf) goto L_10a48ea9;
  /* 10a48d48 cmp dword ptr [0x10a71fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a71fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48d4f je 0x10a48e98 */
  if (C.zf) goto L_10a48e98;
  /* 10a48d55 mov eax, dword ptr [0x10a71f98] */
  EAX = (r32((uint32_t)(0x10a71f98)));
  /* 10a48d5a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10a48d5d mov ecx, dword ptr [0x10a71fa0] */
  ECX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a48d63 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a48d66 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48d68 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a48d6b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10a48d70 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10a48d75 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48d78 push eax */
  push32((uint32_t)(EAX));
  /* 10a48d79 call dword ptr [0x10a7336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7336c))), 0x10a48d7fu);
  /* 10a48d7f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a48d84 mov ecx, dword ptr [0x10a71f98] */
  ECX = (r32((uint32_t)(0x10a71f98)));
  /* 10a48d8a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a48d8c mov eax, dword ptr [0x10a71fa0] */
  EAX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a48d91 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a48d94 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a48d96 mov edx, dword ptr [0x10a71fa0] */
  EDX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a48d9c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a48d9f mov eax, dword ptr [0x10a71fa0] */
  EAX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a48da4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a48da7 mov edx, dword ptr [0x10a71f98] */
  EDX = (r32((uint32_t)(0x10a71f98)));
  /* 10a48dad mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10a48db8 mov eax, dword ptr [0x10a71fa0] */
  EAX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a48dbd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a48dc0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10a48dc3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a48dc6 mov eax, dword ptr [0x10a71fa0] */
  EAX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a48dcb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a48dce mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10a48dd1 mov edx, dword ptr [0x10a71fa0] */
  EDX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a48dd7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a48dda movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10a48dde test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a48de0 jne 0x10a48df6 */
  if (!C.zf) goto L_10a48df6;
  /* 10a48de2 mov edx, dword ptr [0x10a71fa0] */
  EDX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a48de8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a48deb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10a48ded mov ecx, dword ptr [0x10a71fa0] */
  ECX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a48df3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10a48df6:;
  /* 10a48df6 mov edx, dword ptr [0x10a71fa0] */
  EDX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a48dfc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48e00 jne 0x10a48e98 */
  if (!C.zf) goto L_10a48e98;
  /* 10a48e06 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10a48e0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a48e0d mov eax, dword ptr [0x10a71fa0] */
  EAX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a48e12 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a48e15 push ecx */
  push32((uint32_t)(ECX));
  /* 10a48e16 call dword ptr [0x10a7336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7336c))), 0x10a48e1cu);
  /* 10a48e1c mov edx, dword ptr [0x10a71fa0] */
  EDX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a48e22 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a48e25 push eax */
  push32((uint32_t)(EAX));
  /* 10a48e26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a48e28 mov ecx, dword ptr [0x10a71fac] */
  ECX = (r32((uint32_t)(0x10a71fac)));
  /* 10a48e2e push ecx */
  push32((uint32_t)(ECX));
  /* 10a48e2f call dword ptr [0x10a73368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73368))), 0x10a48e35u);
  /* 10a48e35 mov edx, dword ptr [0x10a71fa4] */
  EDX = (r32((uint32_t)(0x10a71fa4)));
  /* 10a48e3b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a48e3e mov eax, dword ptr [0x10a71fa8] */
  EAX = (r32((uint32_t)(0x10a71fa8)));
  /* 10a48e43 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48e45 mov ecx, dword ptr [0x10a71fa0] */
  ECX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a48e4b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48e4e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48e50 push eax */
  push32((uint32_t)(EAX));
  /* 10a48e51 mov edx, dword ptr [0x10a71fa0] */
  EDX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a48e57 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48e5a push edx */
  push32((uint32_t)(EDX));
  /* 10a48e5b mov eax, dword ptr [0x10a71fa0] */
  EAX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a48e60 push eax */
  push32((uint32_t)(EAX));
  /* 10a48e61 call 0x10a4c410 */
  push32(0x10a48e66u); f_10a4c410();
  /* 10a48e66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48e69 mov ecx, dword ptr [0x10a71fa4] */
  ECX = (r32((uint32_t)(0x10a71fa4)));
  /* 10a48e6f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48e72 mov dword ptr [0x10a71fa4], ecx */
  w32((uint32_t)(0x10a71fa4), (ECX));
  /* 10a48e78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48e7b cmp edx, dword ptr [0x10a71fa0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a71fa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48e81 jbe 0x10a48e8c */
  if ((C.cf||C.zf)) goto L_10a48e8c;
  /* 10a48e83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48e86 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48e89 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a48e8c:;
  /* 10a48e8c mov ecx, dword ptr [0x10a71fa8] */
  ECX = (r32((uint32_t)(0x10a71fa8)));
  /* 10a48e92 mov dword ptr [0x10a71f9c], ecx */
  w32((uint32_t)(0x10a71f9c), (ECX));
L_10a48e98:;
  /* 10a48e98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48e9b mov dword ptr [0x10a71fa0], edx */
  w32((uint32_t)(0x10a71fa0), (EDX));
  /* 10a48ea1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a48ea4 mov dword ptr [0x10a71f98], eax */
  w32((uint32_t)(0x10a71f98), (EAX));
L_10a48ea9:;
  /* 10a48ea9 mov esp, ebp */
  ESP = (EBP);
  /* 10a48eab pop ebp */
  EBP = (pop32());
  /* 10a48eac ret  */
  ESPCHK(0x10a488e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008eb0 @ 0x10a48eb0 (1334 bytes, 427 insns) */
void f_10a48eb0(void) {
  FTRACE(0x10a48eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a48eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a48eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10a48eb3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48eb6 push esi */
  push32((uint32_t)(ESI));
  /* 10a48eb7 mov eax, dword ptr [0x10a71fa4] */
  EAX = (r32((uint32_t)(0x10a71fa4)));
  /* 10a48ebc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a48ebf mov ecx, dword ptr [0x10a71fa8] */
  ECX = (r32((uint32_t)(0x10a71fa8)));
  /* 10a48ec5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48ec7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10a48eca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48ecd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48ed0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10a48ed3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10a48ed6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a48ed9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10a48edc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48edf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a48ee2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48ee6 jge 0x10a48efc */
  if ((C.sf==C.of)) goto L_10a48efc;
  /* 10a48ee8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a48eeb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a48eee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a48ef0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10a48ef3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10a48efa jmp 0x10a48f11 */
  goto L_10a48f11;
L_10a48efc:;
  /* 10a48efc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a48f03 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a48f06 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48f09 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a48f0c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a48f0e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10a48f11:;
  /* 10a48f11 mov ecx, dword ptr [0x10a71f9c] */
  ECX = (r32((uint32_t)(0x10a71f9c)));
  /* 10a48f17 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10a48f1a:;
  /* 10a48f1a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48f1d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48f20 jae 0x10a48f46 */
  if (!C.cf) goto L_10a48f46;
  /* 10a48f22 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48f25 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a48f28 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10a48f2a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48f2d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a48f30 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10a48f33 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a48f35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a48f37 je 0x10a48f3b */
  if (C.zf) goto L_10a48f3b;
  /* 10a48f39 jmp 0x10a48f46 */
  goto L_10a48f46;
L_10a48f3b:;
  /* 10a48f3b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48f3e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48f41 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a48f44 jmp 0x10a48f1a */
  goto L_10a48f1a;
L_10a48f46:;
  /* 10a48f46 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48f49 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48f4c jne 0x10a4902d */
  if (!C.zf) goto L_10a4902d;
  /* 10a48f52 mov eax, dword ptr [0x10a71fa8] */
  EAX = (r32((uint32_t)(0x10a71fa8)));
  /* 10a48f57 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10a48f5a:;
  /* 10a48f5a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48f5d cmp ecx, dword ptr [0x10a71f9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a71f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48f63 jae 0x10a48f89 */
  if (!C.cf) goto L_10a48f89;
  /* 10a48f65 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48f68 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a48f6b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10a48f6d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48f70 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a48f73 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10a48f76 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a48f78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a48f7a je 0x10a48f7e */
  if (C.zf) goto L_10a48f7e;
  /* 10a48f7c jmp 0x10a48f89 */
  goto L_10a48f89;
L_10a48f7e:;
  /* 10a48f7e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48f81 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48f84 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a48f87 jmp 0x10a48f5a */
  goto L_10a48f5a;
L_10a48f89:;
  /* 10a48f89 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48f8c cmp ecx, dword ptr [0x10a71f9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a71f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48f92 jne 0x10a4902d */
  if (!C.zf) goto L_10a4902d;
L_10a48f98:;
  /* 10a48f98 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48f9b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48f9e jae 0x10a48fb6 */
  if (!C.cf) goto L_10a48fb6;
  /* 10a48fa0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48fa3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48fa7 je 0x10a48fab */
  if (C.zf) goto L_10a48fab;
  /* 10a48fa9 jmp 0x10a48fb6 */
  goto L_10a48fb6;
L_10a48fab:;
  /* 10a48fab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48fae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48fb1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a48fb4 jmp 0x10a48f98 */
  goto L_10a48f98;
L_10a48fb6:;
  /* 10a48fb6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48fb9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48fbc jne 0x10a49007 */
  if (!C.zf) goto L_10a49007;
  /* 10a48fbe mov eax, dword ptr [0x10a71fa8] */
  EAX = (r32((uint32_t)(0x10a71fa8)));
  /* 10a48fc3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10a48fc6:;
  /* 10a48fc6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48fc9 cmp ecx, dword ptr [0x10a71f9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a71f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48fcf jae 0x10a48fe7 */
  if (!C.cf) goto L_10a48fe7;
  /* 10a48fd1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48fd4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48fd8 je 0x10a48fdc */
  if (C.zf) goto L_10a48fdc;
  /* 10a48fda jmp 0x10a48fe7 */
  goto L_10a48fe7;
L_10a48fdc:;
  /* 10a48fdc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48fdf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48fe2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a48fe5 jmp 0x10a48fc6 */
  goto L_10a48fc6;
L_10a48fe7:;
  /* 10a48fe7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a48fea cmp ecx, dword ptr [0x10a71f9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a71f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48ff0 jne 0x10a49007 */
  if (!C.zf) goto L_10a49007;
  /* 10a48ff2 call 0x10a493f0 */
  push32(0x10a48ff7u); f_10a493f0();
  /* 10a48ff7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a48ffa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48ffe jne 0x10a49007 */
  if (!C.zf) goto L_10a49007;
  /* 10a49000 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a49002 jmp 0x10a493e1 */
  goto L_10a493e1;
L_10a49007:;
  /* 10a49007 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4900a push edx */
  push32((uint32_t)(EDX));
  /* 10a4900b call 0x10a49500 */
  push32(0x10a49010u); f_10a49500();
  /* 10a49010 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49013 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a49016 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a49019 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a4901b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4901e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a49021 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49024 jne 0x10a4902d */
  if (!C.zf) goto L_10a4902d;
  /* 10a49026 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a49028 jmp 0x10a493e1 */
  goto L_10a493e1;
L_10a4902d:;
  /* 10a4902d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a49030 mov dword ptr [0x10a71f9c], edx */
  w32((uint32_t)(0x10a71f9c), (EDX));
  /* 10a49036 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a49039 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a4903c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10a4903f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a49042 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a49044 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10a49047 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4904b je 0x10a49070 */
  if (C.zf) goto L_10a49070;
  /* 10a4904d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49050 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a49053 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a49056 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10a4905a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a4905d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a49060 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10a49063 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10a4906a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10a4906c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4906e jne 0x10a490a5 */
  if (!C.zf) goto L_10a490a5;
L_10a49070:;
  /* 10a49070 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10a49077:;
  /* 10a49077 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a4907a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a4907d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a49080 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10a49084 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49087 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a4908a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10a4908d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10a49094 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10a49096 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a49098 jne 0x10a490a5 */
  if (!C.zf) goto L_10a490a5;
  /* 10a4909a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a4909d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a490a0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10a490a3 jmp 0x10a49077 */
  goto L_10a49077;
L_10a490a5:;
  /* 10a490a5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a490a8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a490ae mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a490b1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10a490b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a490bb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a490c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a490c5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a490c8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a490cb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10a490cf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a490d2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a490d6 jne 0x10a490f2 */
  if (!C.zf) goto L_10a490f2;
  /* 10a490d8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10a490df mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a490e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a490e5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a490e8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10a490ef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10a490f2:;
  /* 10a490f2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a490f6 jl 0x10a4910b */
  if ((C.sf!=C.of)) goto L_10a4910b;
  /* 10a490f8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a490fb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a490fd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a49100 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a49103 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49106 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a49109 jmp 0x10a490f2 */
  goto L_10a490f2;
L_10a4910b:;
  /* 10a4910b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4910e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a49111 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10a49115 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a49118 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4911b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a4911d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49120 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a49123 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a49126 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10a49129 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4912c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a4912f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49133 jle 0x10a4913c */
  if ((C.zf||C.sf!=C.of)) goto L_10a4913c;
  /* 10a49135 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10a4913c:;
  /* 10a4913c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a4913f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49142 je 0x10a49360 */
  if (C.zf) goto L_10a49360;
  /* 10a49148 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4914b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4914e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a49151 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49154 jne 0x10a4922a */
  if (!C.zf) goto L_10a4922a;
  /* 10a4915a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4915e jge 0x10a491bf */
  if ((C.sf==C.of)) goto L_10a491bf;
  /* 10a49160 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a49165 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a49168 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a4916a not eax */
  EAX = (~(EAX));
  /* 10a4916c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a4916f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a49172 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10a49176 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a49178 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a4917b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a4917e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10a49182 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a49185 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49188 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10a4918b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a4918e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a49191 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49194 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10a49197 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a4919a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4919d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a491a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a491a3 jne 0x10a491bd */
  if (!C.zf) goto L_10a491bd;
  /* 10a491a5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a491aa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a491ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a491af not eax */
  EAX = (~(EAX));
  /* 10a491b1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a491b4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a491b6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a491b8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a491bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a491bd:;
  /* 10a491bd jmp 0x10a4922a */
  goto L_10a4922a;
L_10a491bf:;
  /* 10a491bf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a491c2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a491c5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a491ca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a491cc not edx */
  EDX = (~(EDX));
  /* 10a491ce mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a491d1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a491d4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10a491db and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a491dd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a491e0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a491e3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10a491ea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a491ed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a491f0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a491f3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a491f6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a491f9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a491fc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10a491ff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a49202 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49205 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a49209 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4920b jne 0x10a4922a */
  if (!C.zf) goto L_10a4922a;
  /* 10a4920d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a49210 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49213 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a49218 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a4921a not edx */
  EDX = (~(EDX));
  /* 10a4921c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4921f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a49222 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a49224 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a49227 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10a4922a:;
  /* 10a4922a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4922d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a49230 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a49233 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a49236 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10a49239 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4923c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a4923f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a49242 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a49245 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a49248 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4924c je 0x10a49360 */
  if (C.zf) goto L_10a49360;
  /* 10a49252 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a49258 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10a4925b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4925e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a49261 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a49264 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a49267 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10a4926a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4926d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a49270 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a49273 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a49276 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a49279 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10a4927c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4927f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a49282 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a49285 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10a49288 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4928b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4928e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a49291 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49294 jne 0x10a49360 */
  if (!C.zf) goto L_10a49360;
  /* 10a4929a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4929e jge 0x10a492fa */
  if ((C.sf==C.of)) goto L_10a492fa;
  /* 10a492a0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a492a3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a492a6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a492aa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a492ad add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a492b0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10a492b3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a492b5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a492b8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a492bb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10a492be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a492c0 jne 0x10a492d8 */
  if (!C.zf) goto L_10a492d8;
  /* 10a492c2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a492c7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a492ca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a492cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a492cf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a492d1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a492d3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a492d6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a492d8:;
  /* 10a492d8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a492dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a492e0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a492e2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a492e5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a492e8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10a492ec or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a492ee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a492f1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a492f4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10a492f8 jmp 0x10a49360 */
  goto L_10a49360;
L_10a492fa:;
  /* 10a492fa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a492fd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49300 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a49304 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a49307 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4930a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10a4930d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a4930f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a49312 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49315 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10a49318 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4931a jne 0x10a49337 */
  if (!C.zf) goto L_10a49337;
  /* 10a4931c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a4931f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49322 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a49327 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a49329 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4932c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a4932f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a49331 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a49334 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10a49337:;
  /* 10a49337 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a4933a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4933d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a49342 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a49344 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49347 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a4934a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10a49351 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a49353 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49356 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a49359 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10a49360:;
  /* 10a49360 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49364 je 0x10a4937a */
  if (C.zf) goto L_10a4937a;
  /* 10a49366 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a49369 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4936c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a4936e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a49371 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49374 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a49377 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10a4937a:;
  /* 10a4937a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4937d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49380 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a49383 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a49386 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49389 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4938c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a4938e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a49391 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49394 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a49397 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4939a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10a4939d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a493a0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a493a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a493a5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a493a7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a493aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a493ad mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a493af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a493b1 jne 0x10a493d3 */
  if (!C.zf) goto L_10a493d3;
  /* 10a493b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a493b6 cmp eax, dword ptr [0x10a71fa0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a71fa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a493bc jne 0x10a493d3 */
  if (!C.zf) goto L_10a493d3;
  /* 10a493be mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a493c1 cmp ecx, dword ptr [0x10a71f98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a71f98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a493c7 jne 0x10a493d3 */
  if (!C.zf) goto L_10a493d3;
  /* 10a493c9 mov dword ptr [0x10a71fa0], 0 */
  w32((uint32_t)(0x10a71fa0), (0x0u));
L_10a493d3:;
  /* 10a493d3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a493d6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a493d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a493db mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a493de add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10a493e1:;
  /* 10a493e1 pop esi */
  ESI = (pop32());
  /* 10a493e2 mov esp, ebp */
  ESP = (EBP);
  /* 10a493e4 pop ebp */
  EBP = (pop32());
  /* 10a493e5 ret  */
  ESPCHK(0x10a48eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093f0 @ 0x10a493f0 (271 bytes, 78 insns) */
void f_10a493f0(void) {
  FTRACE(0x10a493f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a493f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a493f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a493f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a493f4 mov eax, dword ptr [0x10a71fa4] */
  EAX = (r32((uint32_t)(0x10a71fa4)));
  /* 10a493f9 cmp eax, dword ptr [0x10a71f88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a71f88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a493ff jne 0x10a4944b */
  if (!C.zf) goto L_10a4944b;
  /* 10a49401 mov ecx, dword ptr [0x10a71f88] */
  ECX = (r32((uint32_t)(0x10a71f88)));
  /* 10a49407 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4940a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4940d push ecx */
  push32((uint32_t)(ECX));
  /* 10a4940e mov edx, dword ptr [0x10a71fa8] */
  EDX = (r32((uint32_t)(0x10a71fa8)));
  /* 10a49414 push edx */
  push32((uint32_t)(EDX));
  /* 10a49415 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a49417 mov eax, dword ptr [0x10a71fac] */
  EAX = (r32((uint32_t)(0x10a71fac)));
  /* 10a4941c push eax */
  push32((uint32_t)(EAX));
  /* 10a4941d call dword ptr [0x10a73388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73388))), 0x10a49423u);
  /* 10a49423 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a49426 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4942a jne 0x10a49433 */
  if (!C.zf) goto L_10a49433;
  /* 10a4942c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4942e jmp 0x10a494fb */
  goto L_10a494fb;
L_10a49433:;
  /* 10a49433 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a49436 mov dword ptr [0x10a71fa8], ecx */
  w32((uint32_t)(0x10a71fa8), (ECX));
  /* 10a4943c mov edx, dword ptr [0x10a71f88] */
  EDX = (r32((uint32_t)(0x10a71f88)));
  /* 10a49442 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49445 mov dword ptr [0x10a71f88], edx */
  w32((uint32_t)(0x10a71f88), (EDX));
L_10a4944b:;
  /* 10a4944b mov eax, dword ptr [0x10a71fa4] */
  EAX = (r32((uint32_t)(0x10a71fa4)));
  /* 10a49450 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a49453 mov ecx, dword ptr [0x10a71fa8] */
  ECX = (r32((uint32_t)(0x10a71fa8)));
  /* 10a49459 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4945b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a4945e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10a49463 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a49465 mov edx, dword ptr [0x10a71fac] */
  EDX = (r32((uint32_t)(0x10a71fac)));
  /* 10a4946b push edx */
  push32((uint32_t)(EDX));
  /* 10a4946c call dword ptr [0x10a73384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73384))), 0x10a49472u);
  /* 10a49472 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a49475 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10a49478 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4947b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4947f jne 0x10a49485 */
  if (!C.zf) goto L_10a49485;
  /* 10a49481 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a49483 jmp 0x10a494fb */
  goto L_10a494fb;
L_10a49485:;
  /* 10a49485 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a49487 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10a4948c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10a49491 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a49493 call dword ptr [0x10a732d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732d4))), 0x10a49499u);
  /* 10a49499 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4949c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10a4949f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a494a2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a494a6 jne 0x10a494c2 */
  if (!C.zf) goto L_10a494c2;
  /* 10a494a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a494ab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a494ae push ecx */
  push32((uint32_t)(ECX));
  /* 10a494af push 0 */
  push32((uint32_t)(0x0u));
  /* 10a494b1 mov edx, dword ptr [0x10a71fac] */
  EDX = (r32((uint32_t)(0x10a71fac)));
  /* 10a494b7 push edx */
  push32((uint32_t)(EDX));
  /* 10a494b8 call dword ptr [0x10a73368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73368))), 0x10a494beu);
  /* 10a494be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a494c0 jmp 0x10a494fb */
  goto L_10a494fb;
L_10a494c2:;
  /* 10a494c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a494c5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a494cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a494ce mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10a494d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a494d8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10a494df mov eax, dword ptr [0x10a71fa4] */
  EAX = (r32((uint32_t)(0x10a71fa4)));
  /* 10a494e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a494e7 mov dword ptr [0x10a71fa4], eax */
  w32((uint32_t)(0x10a71fa4), (EAX));
  /* 10a494ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a494ef mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a494f2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10a494f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a494fb:;
  /* 10a494fb mov esp, ebp */
  ESP = (EBP);
  /* 10a494fd pop ebp */
  EBP = (pop32());
  /* 10a494fe ret  */
  ESPCHK(0x10a493f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009500 @ 0x10a49500 (494 bytes, 149 insns) */
void f_10a49500(void) {
  FTRACE(0x10a49500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a49500 push ebp */
  push32((uint32_t)(EBP));
  /* 10a49501 mov ebp, esp */
  EBP = (ESP);
  /* 10a49503 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49506 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a49509 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a4950c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10a4950f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a49512 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a49515 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a49518 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10a4951f:;
  /* 10a4951f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49523 jl 0x10a49538 */
  if ((C.sf!=C.of)) goto L_10a49538;
  /* 10a49525 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a49528 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10a4952a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4952d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a49530 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49533 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10a49536 jmp 0x10a4951f */
  goto L_10a4951f;
L_10a49538:;
  /* 10a49538 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a4953b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a49541 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a49544 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10a4954b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a4954e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a49555 jmp 0x10a49560 */
  goto L_10a49560;
L_10a49557:;
  /* 10a49557 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4955a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4955d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10a49560:;
  /* 10a49560 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49564 jge 0x10a49586 */
  if ((C.sf==C.of)) goto L_10a49586;
  /* 10a49566 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a49569 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4956c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10a4956f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a49572 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a49575 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a49578 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10a4957b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4957e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a49581 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10a49584 jmp 0x10a49557 */
  goto L_10a49557;
L_10a49586:;
  /* 10a49586 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a49589 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10a4958c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4958f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a49592 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49594 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a49597 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a49599 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10a4959e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10a495a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a495a6 push edx */
  push32((uint32_t)(EDX));
  /* 10a495a7 call dword ptr [0x10a732d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732d4))), 0x10a495adu);
  /* 10a495ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a495af jne 0x10a495b9 */
  if (!C.zf) goto L_10a495b9;
  /* 10a495b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a495b4 jmp 0x10a496ea */
  goto L_10a496ea;
L_10a495b9:;
  /* 10a495b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a495bc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a495c1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a495c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a495c7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a495ca jmp 0x10a495d8 */
  goto L_10a495d8;
L_10a495cc:;
  /* 10a495cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a495cf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a495d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a495d8:;
  /* 10a495d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a495db cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a495de ja 0x10a4963d */
  if ((!C.cf&&!C.zf)) goto L_10a4963d;
  /* 10a495e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a495e3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10a495ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a495ed mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10a495f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a495fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a495fd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a49600 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a49603 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10a49609 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4960c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49612 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a49615 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a49618 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4961b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49621 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a49624 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a49627 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4962a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4962f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a49632 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a49635 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10a4963b jmp 0x10a495cc */
  goto L_10a495cc;
L_10a4963d:;
  /* 10a4963d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a49640 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49646 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a49649 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4964c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4964f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49652 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10a49655 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49658 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a4965b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a4965e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a49661 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49664 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10a49667 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a4966a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4966d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49670 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10a49673 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49676 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a49679 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a4967c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4967f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49682 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10a49685 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a49688 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a4968b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10a49693 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a49696 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a49699 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10a496a4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a496a7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10a496ab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a496ae mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10a496b1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a496b4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a496b7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10a496ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a496bc jne 0x10a496cd */
  if (!C.zf) goto L_10a496cd;
  /* 10a496be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a496c1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a496c4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a496c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a496ca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10a496cd:;
  /* 10a496cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a496d2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a496d5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a496d7 not edx */
  EDX = (~(EDX));
  /* 10a496d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a496dc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a496df and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a496e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a496e4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a496e7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10a496ea:;
  /* 10a496ea mov esp, ebp */
  ESP = (EBP);
  /* 10a496ec pop ebp */
  EBP = (pop32());
  /* 10a496ed ret  */
  ESPCHK(0x10a49500u, _esp0);
  ESP += 4; return;
}

/* FUN_100096f0 @ 0x10a496f0 (1515 bytes, 489 insns) */
void f_10a496f0(void) {
  FTRACE(0x10a496f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a496f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a496f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a496f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a496f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a496f9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a496fc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10a496fe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a49701 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a49704 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a49707 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10a4970a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4970d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a49710 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49713 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a49716 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a49719 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10a4971c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a4971f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a49722 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a49728 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a4972b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10a49732 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a49735 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a49738 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4973b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a4973e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49741 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a49743 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49746 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10a49749 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a4974c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4974f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10a49752 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a49755 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a49757 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a4975a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a4975d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49760 jle 0x10a49a16 */
  if ((C.zf||C.sf!=C.of)) goto L_10a49a16;
  /* 10a49766 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a49769 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4976c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4976e jne 0x10a4977b */
  if (!C.zf) goto L_10a4977b;
  /* 10a49770 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a49773 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49776 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49779 jle 0x10a49782 */
  if ((C.zf||C.sf!=C.of)) goto L_10a49782;
L_10a4977b:;
  /* 10a4977b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4977d jmp 0x10a49cd7 */
  goto L_10a49cd7;
L_10a49782:;
  /* 10a49782 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a49785 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10a49788 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4978b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a4978e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49792 jbe 0x10a4979b */
  if ((C.cf||C.zf)) goto L_10a4979b;
  /* 10a49794 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10a4979b:;
  /* 10a4979b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a4979e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a497a1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a497a4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a497a7 jne 0x10a4987d */
  if (!C.zf) goto L_10a4987d;
  /* 10a497ad cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a497b1 jae 0x10a49812 */
  if (!C.cf) goto L_10a49812;
  /* 10a497b3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a497b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a497bb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a497bd not edx */
  EDX = (~(EDX));
  /* 10a497bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a497c2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a497c5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10a497c9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a497cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a497ce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a497d1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10a497d5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a497d8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a497db mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a497de sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a497e1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a497e4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a497e7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10a497ea mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a497ed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a497f0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a497f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a497f6 jne 0x10a49810 */
  if (!C.zf) goto L_10a49810;
  /* 10a497f8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a497fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a49800 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a49802 not edx */
  EDX = (~(EDX));
  /* 10a49804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a49807 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a49809 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4980b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4980e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a49810:;
  /* 10a49810 jmp 0x10a4987d */
  goto L_10a4987d;
L_10a49812:;
  /* 10a49812 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a49815 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49818 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a4981d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a4981f not eax */
  EAX = (~(EAX));
  /* 10a49821 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a49824 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49827 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10a4982e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a49830 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a49833 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49836 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10a4983d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49840 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49843 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10a49846 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a49849 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a4984c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4984f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10a49852 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49855 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49858 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a4985c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4985e jne 0x10a4987d */
  if (!C.zf) goto L_10a4987d;
  /* 10a49860 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a49863 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49866 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a4986b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a4986d not eax */
  EAX = (~(EAX));
  /* 10a4986f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a49872 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a49875 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a49877 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4987a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10a4987d:;
  /* 10a4987d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a49880 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a49883 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a49886 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a49889 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10a4988c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a4988f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a49892 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a49895 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a49898 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10a4989b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a4989e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a498a1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a498a4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a498a7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a498ab jle 0x10a499f7 */
  if ((C.zf||C.sf!=C.of)) goto L_10a499f7;
  /* 10a498b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a498b4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a498b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10a498ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a498bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10a498c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a498c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a498c6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a498ca jbe 0x10a498d3 */
  if ((C.cf||C.zf)) goto L_10a498d3;
  /* 10a498cc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10a498d3:;
  /* 10a498d3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a498d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a498d9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10a498dc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a498df mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a498e2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a498e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a498e8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a498eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a498ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a498f1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10a498f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a498f7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a498fa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10a498fd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a49900 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a49903 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a49906 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a49909 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a4990c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a4990f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a49912 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49915 jne 0x10a499e3 */
  if (!C.zf) goto L_10a499e3;
  /* 10a4991b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4991f jae 0x10a4997c */
  if (!C.cf) goto L_10a4997c;
  /* 10a49921 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49924 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49927 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a4992b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a4992e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49931 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a49934 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a49937 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a4993a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4993d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10a49940 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a49942 jne 0x10a4995a */
  if (!C.zf) goto L_10a4995a;
  /* 10a49944 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a49949 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4994c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a4994e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a49951 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a49953 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a49955 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a49958 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a4995a:;
  /* 10a4995a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a4995f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a49962 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a49964 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a49967 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a4996a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10a4996e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a49970 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a49973 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49976 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10a4997a jmp 0x10a499e3 */
  goto L_10a499e3;
L_10a4997c:;
  /* 10a4997c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a4997f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49982 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a49986 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49989 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4998c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a4998f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a49992 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49995 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49998 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10a4999b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4999d jne 0x10a499ba */
  if (!C.zf) goto L_10a499ba;
  /* 10a4999f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a499a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a499a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a499aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a499ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a499af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a499b2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a499b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a499b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10a499ba:;
  /* 10a499ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a499bd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a499c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a499c5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a499c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a499ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a499cd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10a499d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a499d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a499d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a499dc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10a499e3:;
  /* 10a499e3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a499e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a499e9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a499eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a499ee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a499f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a499f4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10a499f7:;
  /* 10a499f7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a499fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a499fd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49a00 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a49a02 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a49a05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49a08 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49a0b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49a0e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10a49a11 jmp 0x10a49cd2 */
  goto L_10a49cd2;
L_10a49a16:;
  /* 10a49a16 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a49a19 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49a1c jge 0x10a49cd2 */
  if ((C.sf==C.of)) goto L_10a49cd2;
  /* 10a49a22 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a49a25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49a28 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49a2b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a49a2d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a49a30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49a33 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49a36 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49a39 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10a49a3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49a3f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49a42 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a49a45 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a49a48 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49a4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a49a4e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a49a51 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10a49a54 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49a57 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a49a5a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49a5e jbe 0x10a49a67 */
  if ((C.cf||C.zf)) goto L_10a49a67;
  /* 10a49a60 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10a49a67:;
  /* 10a49a67 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a49a6a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a49a6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a49a6f jne 0x10a49bb0 */
  if (!C.zf) goto L_10a49bb0;
  /* 10a49a75 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a49a78 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10a49a7b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49a7e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a49a81 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49a85 jbe 0x10a49a8e */
  if ((C.cf||C.zf)) goto L_10a49a8e;
  /* 10a49a87 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10a49a8e:;
  /* 10a49a8e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a49a91 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a49a94 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a49a97 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49a9a jne 0x10a49b70 */
  if (!C.zf) goto L_10a49b70;
  /* 10a49aa0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49aa4 jae 0x10a49b05 */
  if (!C.cf) goto L_10a49b05;
  /* 10a49aa6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a49aab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a49aae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a49ab0 not edx */
  EDX = (~(EDX));
  /* 10a49ab2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a49ab5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49ab8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10a49abc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a49abe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a49ac1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49ac4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10a49ac8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49acb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49ace mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a49ad1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a49ad4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49ad7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49ada mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10a49add mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49ae0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49ae3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a49ae7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a49ae9 jne 0x10a49b03 */
  if (!C.zf) goto L_10a49b03;
  /* 10a49aeb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a49af0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a49af3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a49af5 not edx */
  EDX = (~(EDX));
  /* 10a49af7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a49afa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a49afc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a49afe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a49b01 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a49b03:;
  /* 10a49b03 jmp 0x10a49b70 */
  goto L_10a49b70;
L_10a49b05:;
  /* 10a49b05 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a49b08 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49b0b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a49b10 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a49b12 not eax */
  EAX = (~(EAX));
  /* 10a49b14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a49b17 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49b1a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10a49b21 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a49b23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a49b26 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49b29 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10a49b30 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49b33 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49b36 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10a49b39 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a49b3c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49b3f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49b42 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10a49b45 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49b48 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49b4b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a49b4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a49b51 jne 0x10a49b70 */
  if (!C.zf) goto L_10a49b70;
  /* 10a49b53 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a49b56 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49b59 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a49b5e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a49b60 not eax */
  EAX = (~(EAX));
  /* 10a49b62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a49b65 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a49b68 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a49b6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a49b6d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10a49b70:;
  /* 10a49b70 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a49b73 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a49b76 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a49b79 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a49b7c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10a49b7f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a49b82 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a49b85 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a49b88 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a49b8b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10a49b8e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a49b91 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49b94 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a49b97 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a49b9a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10a49b9d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49ba0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a49ba3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49ba7 jbe 0x10a49bb0 */
  if ((C.cf||C.zf)) goto L_10a49bb0;
  /* 10a49ba9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10a49bb0:;
  /* 10a49bb0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a49bb3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a49bb6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10a49bb9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a49bbc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49bbf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a49bc2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a49bc5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10a49bc8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49bcb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a49bce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a49bd1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a49bd4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49bd7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10a49bda mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49bdd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a49be0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49be3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10a49be6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49be9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49bec mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a49bef cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49bf2 jne 0x10a49cbe */
  if (!C.zf) goto L_10a49cbe;
  /* 10a49bf8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49bfc jae 0x10a49c58 */
  if (!C.cf) goto L_10a49c58;
  /* 10a49bfe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49c01 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49c04 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a49c08 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49c0b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49c0e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10a49c11 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a49c13 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49c16 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49c19 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10a49c1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a49c1e jne 0x10a49c36 */
  if (!C.zf) goto L_10a49c36;
  /* 10a49c20 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a49c25 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a49c28 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a49c2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a49c2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a49c2f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a49c31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a49c34 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a49c36:;
  /* 10a49c36 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a49c3b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a49c3e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a49c40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a49c43 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49c46 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10a49c4a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a49c4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a49c4f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49c52 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10a49c56 jmp 0x10a49cbe */
  goto L_10a49cbe;
L_10a49c58:;
  /* 10a49c58 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49c5b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49c5e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a49c62 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49c65 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49c68 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10a49c6b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a49c6d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49c70 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49c73 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10a49c76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a49c78 jne 0x10a49c95 */
  if (!C.zf) goto L_10a49c95;
  /* 10a49c7a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a49c7d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49c80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a49c85 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a49c87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a49c8a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a49c8d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a49c8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a49c92 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10a49c95:;
  /* 10a49c95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a49c98 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49c9b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a49ca0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a49ca2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a49ca5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49ca8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10a49caf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a49cb1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a49cb4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a49cb7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10a49cbe:;
  /* 10a49cbe mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49cc1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a49cc4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a49cc6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a49cc9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49ccc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a49ccf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10a49cd2:;
  /* 10a49cd2 mov eax, 1 */
  EAX = (0x1u);
L_10a49cd7:;
  /* 10a49cd7 mov esp, ebp */
  ESP = (EBP);
  /* 10a49cd9 pop ebp */
  EBP = (pop32());
  /* 10a49cda ret  */
  ESPCHK(0x10a496f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ce0 @ 0x10a49ce0 (304 bytes, 79 insns) */
void f_10a49ce0(void) {
  FTRACE(0x10a49ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a49ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a49ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10a49ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a49ce4 cmp dword ptr [0x10a71fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a71fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49ceb je 0x10a49e0c */
  if (C.zf) goto L_10a49e0c;
  /* 10a49cf1 mov eax, dword ptr [0x10a71f98] */
  EAX = (r32((uint32_t)(0x10a71f98)));
  /* 10a49cf6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10a49cf9 mov ecx, dword ptr [0x10a71fa0] */
  ECX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a49cff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a49d02 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49d04 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a49d07 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10a49d0c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10a49d11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a49d14 push eax */
  push32((uint32_t)(EAX));
  /* 10a49d15 call dword ptr [0x10a7336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7336c))), 0x10a49d1bu);
  /* 10a49d1b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a49d20 mov ecx, dword ptr [0x10a71f98] */
  ECX = (r32((uint32_t)(0x10a71f98)));
  /* 10a49d26 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a49d28 mov eax, dword ptr [0x10a71fa0] */
  EAX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a49d2d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a49d30 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a49d32 mov edx, dword ptr [0x10a71fa0] */
  EDX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a49d38 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a49d3b mov eax, dword ptr [0x10a71fa0] */
  EAX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a49d40 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a49d43 mov edx, dword ptr [0x10a71f98] */
  EDX = (r32((uint32_t)(0x10a71f98)));
  /* 10a49d49 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10a49d54 mov eax, dword ptr [0x10a71fa0] */
  EAX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a49d59 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a49d5c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10a49d5f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a49d62 mov eax, dword ptr [0x10a71fa0] */
  EAX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a49d67 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a49d6a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10a49d6d mov edx, dword ptr [0x10a71fa0] */
  EDX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a49d73 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a49d76 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10a49d7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a49d7c jne 0x10a49d92 */
  if (!C.zf) goto L_10a49d92;
  /* 10a49d7e mov edx, dword ptr [0x10a71fa0] */
  EDX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a49d84 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a49d87 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10a49d89 mov ecx, dword ptr [0x10a71fa0] */
  ECX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a49d8f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10a49d92:;
  /* 10a49d92 mov edx, dword ptr [0x10a71fa0] */
  EDX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a49d98 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49d9c jne 0x10a49e02 */
  if (!C.zf) goto L_10a49e02;
  /* 10a49d9e cmp dword ptr [0x10a71fa4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a71fa4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49da5 jle 0x10a49e02 */
  if ((C.zf||C.sf!=C.of)) goto L_10a49e02;
  /* 10a49da7 mov eax, dword ptr [0x10a71fa0] */
  EAX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a49dac mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a49daf push ecx */
  push32((uint32_t)(ECX));
  /* 10a49db0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a49db2 mov edx, dword ptr [0x10a71fac] */
  EDX = (r32((uint32_t)(0x10a71fac)));
  /* 10a49db8 push edx */
  push32((uint32_t)(EDX));
  /* 10a49db9 call dword ptr [0x10a73368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73368))), 0x10a49dbfu);
  /* 10a49dbf mov eax, dword ptr [0x10a71fa4] */
  EAX = (r32((uint32_t)(0x10a71fa4)));
  /* 10a49dc4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a49dc7 mov ecx, dword ptr [0x10a71fa8] */
  ECX = (r32((uint32_t)(0x10a71fa8)));
  /* 10a49dcd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49dcf mov edx, dword ptr [0x10a71fa0] */
  EDX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a49dd5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49dd8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49dda push ecx */
  push32((uint32_t)(ECX));
  /* 10a49ddb mov eax, dword ptr [0x10a71fa0] */
  EAX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a49de0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49de3 push eax */
  push32((uint32_t)(EAX));
  /* 10a49de4 mov ecx, dword ptr [0x10a71fa0] */
  ECX = (r32((uint32_t)(0x10a71fa0)));
  /* 10a49dea push ecx */
  push32((uint32_t)(ECX));
  /* 10a49deb call 0x10a4c410 */
  push32(0x10a49df0u); f_10a4c410();
  /* 10a49df0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49df3 mov edx, dword ptr [0x10a71fa4] */
  EDX = (r32((uint32_t)(0x10a71fa4)));
  /* 10a49df9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49dfc mov dword ptr [0x10a71fa4], edx */
  w32((uint32_t)(0x10a71fa4), (EDX));
L_10a49e02:;
  /* 10a49e02 mov dword ptr [0x10a71fa0], 0 */
  w32((uint32_t)(0x10a71fa0), (0x0u));
L_10a49e0c:;
  /* 10a49e0c mov esp, ebp */
  ESP = (EBP);
  /* 10a49e0e pop ebp */
  EBP = (pop32());
  /* 10a49e0f ret  */
  ESPCHK(0x10a49ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e10 @ 0x10a49e10 (1565 bytes, 343 insns) */
void f_10a49e10(void) {
  FTRACE(0x10a49e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a49e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10a49e11 mov ebp, esp */
  EBP = (ESP);
  /* 10a49e13 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a49e19 mov eax, dword ptr [0x10a71fa4] */
  EAX = (r32((uint32_t)(0x10a71fa4)));
  /* 10a49e1e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a49e21 push eax */
  push32((uint32_t)(EAX));
  /* 10a49e22 mov ecx, dword ptr [0x10a71fa8] */
  ECX = (r32((uint32_t)(0x10a71fa8)));
  /* 10a49e28 push ecx */
  push32((uint32_t)(ECX));
  /* 10a49e29 call dword ptr [0x10a73340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73340))), 0x10a49e2fu);
  /* 10a49e2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a49e31 je 0x10a49e3b */
  if (C.zf) goto L_10a49e3b;
  /* 10a49e33 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a49e36 jmp 0x10a4a429 */
  goto L_10a4a429;
L_10a49e3b:;
  /* 10a49e3b mov edx, dword ptr [0x10a71fa8] */
  EDX = (r32((uint32_t)(0x10a71fa8)));
  /* 10a49e41 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10a49e47 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10a49e51 jmp 0x10a49e62 */
  goto L_10a49e62;
L_10a49e53:;
  /* 10a49e53 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10a49e59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49e5c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10a49e62:;
  /* 10a49e62 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10a49e68 cmp ecx, dword ptr [0x10a71fa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a71fa4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49e6e jge 0x10a4a427 */
  if ((C.sf==C.of)) goto L_10a4a427;
  /* 10a49e74 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10a49e7a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a49e7d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10a49e83 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10a49e88 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10a49e8e push ecx */
  push32((uint32_t)(ECX));
  /* 10a49e8f call dword ptr [0x10a73340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73340))), 0x10a49e95u);
  /* 10a49e95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a49e97 je 0x10a49ea3 */
  if (C.zf) goto L_10a49ea3;
  /* 10a49e99 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10a49e9e jmp 0x10a4a429 */
  goto L_10a4a429;
L_10a49ea3:;
  /* 10a49ea3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10a49ea9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a49eac mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10a49eb2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10a49eb8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49ebe mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a49ec1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10a49ec7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a49eca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a49ecd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10a49ed7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10a49ee1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a49ee8 jmp 0x10a49ef3 */
  goto L_10a49ef3;
L_10a49eea:;
  /* 10a49eea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a49eed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49ef0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10a49ef3:;
  /* 10a49ef3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49ef7 jge 0x10a4a3eb */
  if ((C.sf==C.of)) goto L_10a4a3eb;
  /* 10a49efd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10a49f07 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10a49f11 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10a49f1b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10a49f25 jmp 0x10a49f36 */
  goto L_10a49f36;
L_10a49f27:;
  /* 10a49f27 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10a49f2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49f30 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10a49f36:;
  /* 10a49f36 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49f3d jge 0x10a49f52 */
  if ((C.sf==C.of)) goto L_10a49f52;
  /* 10a49f3f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10a49f45 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10a49f50 jmp 0x10a49f27 */
  goto L_10a49f27;
L_10a49f52:;
  /* 10a49f52 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49f56 jl 0x10a4a38d */
  if ((C.sf!=C.of)) goto L_10a4a38d;
  /* 10a49f5c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10a49f61 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10a49f67 push ecx */
  push32((uint32_t)(ECX));
  /* 10a49f68 call dword ptr [0x10a73340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73340))), 0x10a49f6eu);
  /* 10a49f6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a49f70 je 0x10a49f7c */
  if (C.zf) goto L_10a49f7c;
  /* 10a49f72 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10a49f77 jmp 0x10a4a429 */
  goto L_10a4a429;
L_10a49f7c:;
  /* 10a49f7c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10a49f82 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a49f85 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10a49f8f jmp 0x10a49fa0 */
  goto L_10a49fa0;
L_10a49f91:;
  /* 10a49f91 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10a49f97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49f9a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10a49fa0:;
  /* 10a49fa0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49fa7 jge 0x10a4a124 */
  if ((C.sf==C.of)) goto L_10a4a124;
  /* 10a49fad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a49fb0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49fb3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10a49fb9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a49fbf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a49fc5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10a49fcb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a49fd1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49fd5 jne 0x10a49fe2 */
  if (!C.zf) goto L_10a49fe2;
  /* 10a49fd7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10a49fdd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a49fe0 je 0x10a49fec */
  if (C.zf) goto L_10a49fec;
L_10a49fe2:;
  /* 10a49fe2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10a49fe7 jmp 0x10a4a429 */
  goto L_10a4a429;
L_10a49fec:;
  /* 10a49fec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a49ff2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a49ff4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10a49ffa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10a4a000 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10a4a006 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10a4a00c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4a00f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4a011 je 0x10a4a049 */
  if (C.zf) goto L_10a4a049;
  /* 10a4a013 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10a4a019 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4a01c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10a4a022 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a02c jle 0x10a4a038 */
  if ((C.zf||C.sf!=C.of)) goto L_10a4a038;
  /* 10a4a02e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10a4a033 jmp 0x10a4a429 */
  goto L_10a4a429;
L_10a4a038:;
  /* 10a4a038 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10a4a03e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a041 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10a4a047 jmp 0x10a4a08b */
  goto L_10a4a08b;
L_10a4a049:;
  /* 10a4a049 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10a4a04f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10a4a052 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4a055 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10a4a05b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a062 jle 0x10a4a06e */
  if ((C.zf||C.sf!=C.of)) goto L_10a4a06e;
  /* 10a4a064 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10a4a06e:;
  /* 10a4a06e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10a4a074 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10a4a07b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a07e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10a4a084 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10a4a08b:;
  /* 10a4a08b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a092 jl 0x10a4a0ad */
  if ((C.sf!=C.of)) goto L_10a4a0ad;
  /* 10a4a094 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10a4a09a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a09d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4a09f jne 0x10a4a0ad */
  if (!C.zf) goto L_10a4a0ad;
  /* 10a4a0a1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a0ab jle 0x10a4a0b7 */
  if ((C.zf||C.sf!=C.of)) goto L_10a4a0b7;
L_10a4a0ad:;
  /* 10a4a0ad mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10a4a0b2 jmp 0x10a4a429 */
  goto L_10a4a429;
L_10a4a0b7:;
  /* 10a4a0b7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a4a0bd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a0c3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10a4a0c6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a0cc je 0x10a4a0d8 */
  if (C.zf) goto L_10a4a0d8;
  /* 10a4a0ce mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10a4a0d3 jmp 0x10a4a429 */
  goto L_10a4a429;
L_10a4a0d8:;
  /* 10a4a0d8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a4a0de add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a0e4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10a4a0ea mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a4a0f0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a0f6 jb 0x10a49fec */
  if (C.cf) goto L_10a49fec;
  /* 10a4a0fc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a4a102 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a108 je 0x10a4a114 */
  if (C.zf) goto L_10a4a114;
  /* 10a4a10a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10a4a10f jmp 0x10a4a429 */
  goto L_10a4a429;
L_10a4a114:;
  /* 10a4a114 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4a117 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a11c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a4a11f jmp 0x10a49f91 */
  goto L_10a49f91;
L_10a4a124:;
  /* 10a4a124 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4a127 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a4a129 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a12f je 0x10a4a13b */
  if (C.zf) goto L_10a4a13b;
  /* 10a4a131 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10a4a136 jmp 0x10a4a429 */
  goto L_10a4a429;
L_10a4a13b:;
  /* 10a4a13b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4a13e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10a4a144 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10a4a14b jmp 0x10a4a156 */
  goto L_10a4a156;
L_10a4a14d:;
  /* 10a4a14d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a4a150 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a153 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10a4a156:;
  /* 10a4a156 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a15a jge 0x10a4a38d */
  if ((C.sf==C.of)) goto L_10a4a38d;
  /* 10a4a160 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10a4a16a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10a4a170 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10a4a176:;
  /* 10a4a176 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a4a17c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a4a17f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10a4a185 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10a4a18b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a191 je 0x10a4a2ba */
  if (C.zf) goto L_10a4a2ba;
  /* 10a4a197 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a4a19a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10a4a1a0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a1a7 je 0x10a4a2ba */
  if (C.zf) goto L_10a4a2ba;
  /* 10a4a1ad mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10a4a1b3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a1b9 jb 0x10a4a1ce */
  if (C.cf) goto L_10a4a1ce;
  /* 10a4a1bb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10a4a1c1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a1c6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a1cc jb 0x10a4a1d8 */
  if (C.cf) goto L_10a4a1d8;
L_10a4a1ce:;
  /* 10a4a1ce mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10a4a1d3 jmp 0x10a4a429 */
  goto L_10a4a429;
L_10a4a1d8:;
  /* 10a4a1d8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10a4a1de and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4a1e4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10a4a1ea mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10a4a1f0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a1f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a4a1f6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4a1f9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a1fe mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10a4a204:;
  /* 10a4a204 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4a207 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a20d je 0x10a4a22e */
  if (C.zf) goto L_10a4a22e;
  /* 10a4a20f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4a212 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a218 jne 0x10a4a21c */
  if (!C.zf) goto L_10a4a21c;
  /* 10a4a21a jmp 0x10a4a22e */
  goto L_10a4a22e;
L_10a4a21c:;
  /* 10a4a21c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4a21f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a4a221 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4a224 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4a227 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a229 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a4a22c jmp 0x10a4a204 */
  goto L_10a4a204;
L_10a4a22e:;
  /* 10a4a22e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4a231 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a237 jne 0x10a4a243 */
  if (!C.zf) goto L_10a4a243;
  /* 10a4a239 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10a4a23e jmp 0x10a4a429 */
  goto L_10a4a429;
L_10a4a243:;
  /* 10a4a243 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10a4a249 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a4a24b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10a4a24e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4a251 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10a4a257 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a25e jle 0x10a4a26a */
  if ((C.zf||C.sf!=C.of)) goto L_10a4a26a;
  /* 10a4a260 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10a4a26a:;
  /* 10a4a26a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10a4a270 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a273 je 0x10a4a27f */
  if (C.zf) goto L_10a4a27f;
  /* 10a4a275 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10a4a27a jmp 0x10a4a429 */
  goto L_10a4a429;
L_10a4a27f:;
  /* 10a4a27f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10a4a285 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a4a288 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a28e je 0x10a4a29a */
  if (C.zf) goto L_10a4a29a;
  /* 10a4a290 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10a4a295 jmp 0x10a4a429 */
  goto L_10a4a429;
L_10a4a29a:;
  /* 10a4a29a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10a4a2a0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10a4a2a6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10a4a2ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a2af mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10a4a2b5 jmp 0x10a4a176 */
  goto L_10a4a176;
L_10a4a2ba:;
  /* 10a4a2ba cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a2c1 je 0x10a4a331 */
  if (C.zf) goto L_10a4a331;
  /* 10a4a2c3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a2c7 jge 0x10a4a2fb */
  if ((C.sf==C.of)) goto L_10a4a2fb;
  /* 10a4a2c9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a4a2ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a4a2d1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a4a2d3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10a4a2d9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a2db mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10a4a2e1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a4a2e6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a4a2e9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a4a2eb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10a4a2f1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a2f3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10a4a2f9 jmp 0x10a4a331 */
  goto L_10a4a331;
L_10a4a2fb:;
  /* 10a4a2fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a4a2fe sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4a301 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a4a306 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a4a308 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10a4a30e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a310 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10a4a316 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a4a319 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4a31c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a4a321 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a4a323 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10a4a329 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a32b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10a4a331:;
  /* 10a4a331 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a4a337 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a4a33a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a340 jne 0x10a4a354 */
  if (!C.zf) goto L_10a4a354;
  /* 10a4a342 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a4a345 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10a4a34b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a352 je 0x10a4a35e */
  if (C.zf) goto L_10a4a35e;
L_10a4a354:;
  /* 10a4a354 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10a4a359 jmp 0x10a4a429 */
  goto L_10a4a429;
L_10a4a35e:;
  /* 10a4a35e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10a4a364 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a4a367 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a36d je 0x10a4a379 */
  if (C.zf) goto L_10a4a379;
  /* 10a4a36f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10a4a374 jmp 0x10a4a429 */
  goto L_10a4a429;
L_10a4a379:;
  /* 10a4a379 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10a4a37f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a382 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10a4a388 jmp 0x10a4a14d */
  goto L_10a4a14d;
L_10a4a38d:;
  /* 10a4a38d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4a390 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10a4a396 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10a4a39c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a3a0 jne 0x10a4a3ba */
  if (!C.zf) goto L_10a4a3ba;
  /* 10a4a3a2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4a3a5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10a4a3ab mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10a4a3b1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a3b8 je 0x10a4a3c1 */
  if (C.zf) goto L_10a4a3c1;
L_10a4a3ba:;
  /* 10a4a3ba mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10a4a3bf jmp 0x10a4a429 */
  goto L_10a4a429;
L_10a4a3c1:;
  /* 10a4a3c1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10a4a3c7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a3cd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10a4a3d3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4a3d6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a3db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a4a3de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4a3e1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10a4a3e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a4a3e6 jmp 0x10a49eea */
  goto L_10a49eea;
L_10a4a3eb:;
  /* 10a4a3eb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10a4a3f1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10a4a3f7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a3f9 jne 0x10a4a40c */
  if (!C.zf) goto L_10a4a40c;
  /* 10a4a3fb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10a4a401 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10a4a407 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a40a je 0x10a4a413 */
  if (C.zf) goto L_10a4a413;
L_10a4a40c:;
  /* 10a4a40c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10a4a411 jmp 0x10a4a429 */
  goto L_10a4a429;
L_10a4a413:;
  /* 10a4a413 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10a4a419 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a41c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10a4a422 jmp 0x10a49e53 */
  goto L_10a49e53;
L_10a4a427:;
  /* 10a4a427 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a4a429:;
  /* 10a4a429 mov esp, ebp */
  ESP = (EBP);
  /* 10a4a42b pop ebp */
  EBP = (pop32());
  /* 10a4a42c ret  */
  ESPCHK(0x10a49e10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a430 @ 0x10a4a430 (250 bytes, 92 insns) */
void f_10a4a430(void) {
  FTRACE(0x10a4a430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4a430 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4a431 mov ebp, esp */
  EBP = (ESP);
  /* 10a4a433 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4a436 push ebx */
  push32((uint32_t)(EBX));
  /* 10a4a437 push esi */
  push32((uint32_t)(ESI));
  /* 10a4a438 push edi */
  push32((uint32_t)(EDI));
  /* 10a4a439 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10a4a43c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a4a43f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10a4a442 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10a4a445:;
  /* 10a4a445 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a449 jne 0x10a4a469 */
  if (!C.zf) goto L_10a4a469;
  /* 10a4a44b push 0x10a6c3f8 */
  push32((uint32_t)(0x10a6c3f8u));
  /* 10a4a450 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4a452 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10a4a454 push 0x10a6c3ec */
  push32((uint32_t)(0x10a6c3ecu));
  /* 10a4a459 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4a45b call 0x10a435e0 */
  push32(0x10a4a460u); f_10a435e0();
  /* 10a4a460 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a463 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a466 jne 0x10a4a469 */
  if (!C.zf) goto L_10a4a469;
  /* 10a4a468 int3  */
  x86_unimpl("int3 @ 0x10a4a468");
L_10a4a469:;
  /* 10a4a469 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4a46b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4a46d jne 0x10a4a445 */
  if (!C.zf) goto L_10a4a445;
L_10a4a46f:;
  /* 10a4a46f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a473 jne 0x10a4a493 */
  if (!C.zf) goto L_10a4a493;
  /* 10a4a475 push 0x10a6c3dc */
  push32((uint32_t)(0x10a6c3dcu));
  /* 10a4a47a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4a47c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10a4a47e push 0x10a6c3ec */
  push32((uint32_t)(0x10a6c3ecu));
  /* 10a4a483 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4a485 call 0x10a435e0 */
  push32(0x10a4a48au); f_10a435e0();
  /* 10a4a48a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a48d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a490 jne 0x10a4a493 */
  if (!C.zf) goto L_10a4a493;
  /* 10a4a492 int3  */
  x86_unimpl("int3 @ 0x10a4a492");
L_10a4a493:;
  /* 10a4a493 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a495 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4a497 jne 0x10a4a46f */
  if (!C.zf) goto L_10a4a46f;
  /* 10a4a499 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a49c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10a4a4a3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a4a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4a4a9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a4a4ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a4af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4a4b2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a4a4b4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a4b7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10a4a4be mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a4a4c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4a4c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4a4c5 push edx */
  push32((uint32_t)(EDX));
  /* 10a4a4c6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a4c9 push eax */
  push32((uint32_t)(EAX));
  /* 10a4a4ca call 0x10a4b4b0 */
  push32(0x10a4a4cfu); f_10a4b4b0();
  /* 10a4a4cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a4d2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a4a4d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a4d8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a4a4db sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4a4de mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a4e1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a4a4e4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a4e7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a4eb jl 0x10a4a50f */
  if ((C.sf!=C.of)) goto L_10a4a50f;
  /* 10a4a4ed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a4f0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a4a4f2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a4a4f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4a4f7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4a4fd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10a4a500 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a503 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a4a505 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a508 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a50b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a4a50d jmp 0x10a4a520 */
  goto L_10a4a520;
L_10a4a50f:;
  /* 10a4a50f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a512 push edx */
  push32((uint32_t)(EDX));
  /* 10a4a513 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4a515 call 0x10a4b230 */
  push32(0x10a4a51au); f_10a4b230();
  /* 10a4a51a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a51d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10a4a520:;
  /* 10a4a520 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a4a523 pop edi */
  EDI = (pop32());
  /* 10a4a524 pop esi */
  ESI = (pop32());
  /* 10a4a525 pop ebx */
  EBX = (pop32());
  /* 10a4a526 mov esp, ebp */
  ESP = (EBP);
  /* 10a4a528 pop ebp */
  EBP = (pop32());
  /* 10a4a529 ret  */
  ESPCHK(0x10a4a430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a530 @ 0x10a4a530 (183 bytes, 58 insns) */
void f_10a4a530(void) {
  FTRACE(0x10a4a530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4a530 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4a531 mov ebp, esp */
  EBP = (ESP);
  /* 10a4a533 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4a536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4a539 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a53c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a541 ja 0x10a4a55a */
  if ((!C.cf&&!C.zf)) goto L_10a4a55a;
  /* 10a4a543 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4a546 mov edx, dword ptr [0x10a6ec98] */
  EDX = (r32((uint32_t)(0x10a6ec98)));
  /* 10a4a54c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a54e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10a4a552 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a555 jmp 0x10a4a5e3 */
  goto L_10a4a5e3;
L_10a4a55a:;
  /* 10a4a55a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4a55d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10a4a560 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4a566 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4a56c mov edx, dword ptr [0x10a6ec98] */
  EDX = (r32((uint32_t)(0x10a6ec98)));
  /* 10a4a572 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a574 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10a4a578 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a57d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4a57f je 0x10a4a5a3 */
  if (C.zf) goto L_10a4a5a3;
  /* 10a4a581 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4a584 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10a4a587 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4a58d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10a4a590 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10a4a593 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10a4a596 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10a4a59a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10a4a5a1 jmp 0x10a4a5b4 */
  goto L_10a4a5b4;
L_10a4a5a3:;
  /* 10a4a5a3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10a4a5a6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10a4a5a9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10a4a5ad mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10a4a5b4:;
  /* 10a4a5b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4a5b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4a5b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4a5ba lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10a4a5bd push ecx */
  push32((uint32_t)(ECX));
  /* 10a4a5be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4a5c1 push edx */
  push32((uint32_t)(EDX));
  /* 10a4a5c2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10a4a5c5 push eax */
  push32((uint32_t)(EAX));
  /* 10a4a5c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4a5c8 call 0x10a4c750 */
  push32(0x10a4a5cdu); f_10a4c750();
  /* 10a4a5cd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a5d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4a5d2 jne 0x10a4a5d8 */
  if (!C.zf) goto L_10a4a5d8;
  /* 10a4a5d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a5d6 jmp 0x10a4a5e3 */
  goto L_10a4a5e3;
L_10a4a5d8:;
  /* 10a4a5d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4a5db and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a5e0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10a4a5e3:;
  /* 10a4a5e3 mov esp, ebp */
  ESP = (EBP);
  /* 10a4a5e5 pop ebp */
  EBP = (pop32());
  /* 10a4a5e6 ret  */
  ESPCHK(0x10a4a530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5f0 @ 0x10a4a5f0 (836 bytes, 238 insns) */
void f_10a4a5f0(void) {
  FTRACE(0x10a4a5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4a5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4a5f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4a5f3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4a5f6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a4a5f8 call 0x10a47f20 */
  push32(0x10a4a5fdu); f_10a47f20();
  /* 10a4a5fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a600 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4a603 push eax */
  push32((uint32_t)(EAX));
  /* 10a4a604 call 0x10a4a940 */
  push32(0x10a4a609u); f_10a4a940();
  /* 10a4a609 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a60c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a4a60f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4a612 cmp ecx, dword ptr [0x10a71ce4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a71ce4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a618 jne 0x10a4a62b */
  if (!C.zf) goto L_10a4a62b;
  /* 10a4a61a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a4a61c call 0x10a47fc0 */
  push32(0x10a4a621u); f_10a47fc0();
  /* 10a4a621 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a624 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a626 jmp 0x10a4a930 */
  goto L_10a4a930;
L_10a4a62b:;
  /* 10a4a62b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a62f jne 0x10a4a64c */
  if (!C.zf) goto L_10a4a64c;
  /* 10a4a631 call 0x10a4aa20 */
  push32(0x10a4a636u); f_10a4aa20();
  /* 10a4a636 call 0x10a4aaa0 */
  push32(0x10a4a63bu); f_10a4aaa0();
  /* 10a4a63b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a4a63d call 0x10a47fc0 */
  push32(0x10a4a642u); f_10a47fc0();
  /* 10a4a642 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a645 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a647 jmp 0x10a4a930 */
  goto L_10a4a930;
L_10a4a64c:;
  /* 10a4a64c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a4a653 jmp 0x10a4a65e */
  goto L_10a4a65e;
L_10a4a655:;
  /* 10a4a655 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4a658 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a65b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a4a65e:;
  /* 10a4a65e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a662 jae 0x10a4a7af */
  if (!C.cf) goto L_10a4a7af;
  /* 10a4a668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4a66b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4a66e mov ecx, dword ptr [eax + 0x10a6eeb8] */
  ECX = (r32((uint32_t)(EAX + 0x10a6eeb8)));
  /* 10a4a674 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a677 jne 0x10a4a7aa */
  if (!C.zf) goto L_10a4a7aa;
  /* 10a4a67d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a4a684 jmp 0x10a4a68f */
  goto L_10a4a68f;
L_10a4a686:;
  /* 10a4a686 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a689 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a68c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10a4a68f:;
  /* 10a4a68f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a696 jae 0x10a4a6a4 */
  if (!C.cf) goto L_10a4a6a4;
  /* 10a4a698 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a69b mov byte ptr [eax + 0x10a71e80], 0 */
  w8((uint32_t)(EAX + 0x10a71e80), (0x0u));
  /* 10a4a6a2 jmp 0x10a4a686 */
  goto L_10a4a686;
L_10a4a6a4:;
  /* 10a4a6a4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a4a6ab jmp 0x10a4a6b6 */
  goto L_10a4a6b6;
L_10a4a6ad:;
  /* 10a4a6ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4a6b0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a6b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10a4a6b6:;
  /* 10a4a6b6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a6ba jae 0x10a4a737 */
  if (!C.cf) goto L_10a4a737;
  /* 10a4a6bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4a6bf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4a6c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4a6c5 lea ecx, [edx + eax*8 + 0x10a6eec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10a6eec8));
  /* 10a4a6cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4a6cf jmp 0x10a4a6da */
  goto L_10a4a6da;
L_10a4a6d1:;
  /* 10a4a6d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4a6d4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a6d7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a4a6da:;
  /* 10a4a6da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4a6dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4a6df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a4a6e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4a6e3 je 0x10a4a732 */
  if (C.zf) goto L_10a4a732;
  /* 10a4a6e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4a6e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a6ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10a4a6ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4a6ef je 0x10a4a732 */
  if (C.zf) goto L_10a4a732;
  /* 10a4a6f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4a6f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4a6f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a4a6f8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10a4a6fb jmp 0x10a4a706 */
  goto L_10a4a706;
L_10a4a6fd:;
  /* 10a4a6fd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a700 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a703 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a4a706:;
  /* 10a4a706 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4a709 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4a70b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10a4a70e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a711 ja 0x10a4a730 */
  if ((!C.cf&&!C.zf)) goto L_10a4a730;
  /* 10a4a713 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a716 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4a719 mov dl, byte ptr [eax + 0x10a71e81] */
  DL = (r8((uint32_t)(EAX + 0x10a71e81)));
  /* 10a4a71f or dl, byte ptr [ecx + 0x10a6eeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10a6eeb0))); DL = (_r); fl_logic(_r,8); }
  /* 10a4a725 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a728 mov byte ptr [eax + 0x10a71e81], dl */
  w8((uint32_t)(EAX + 0x10a71e81), (DL));
  /* 10a4a72e jmp 0x10a4a6fd */
  goto L_10a4a6fd;
L_10a4a730:;
  /* 10a4a730 jmp 0x10a4a6d1 */
  goto L_10a4a6d1;
L_10a4a732:;
  /* 10a4a732 jmp 0x10a4a6ad */
  goto L_10a4a6ad;
L_10a4a737:;
  /* 10a4a737 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4a73a mov dword ptr [0x10a71ce4], ecx */
  w32((uint32_t)(0x10a71ce4), (ECX));
  /* 10a4a740 mov dword ptr [0x10a71d6c], 1 */
  w32((uint32_t)(0x10a71d6c), (0x1u));
  /* 10a4a74a mov edx, dword ptr [0x10a71ce4] */
  EDX = (r32((uint32_t)(0x10a71ce4)));
  /* 10a4a750 push edx */
  push32((uint32_t)(EDX));
  /* 10a4a751 call 0x10a4a9a0 */
  push32(0x10a4a756u); f_10a4a9a0();
  /* 10a4a756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a759 mov dword ptr [0x10a71f84], eax */
  w32((uint32_t)(0x10a71f84), (EAX));
  /* 10a4a75e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a4a765 jmp 0x10a4a770 */
  goto L_10a4a770;
L_10a4a767:;
  /* 10a4a767 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4a76a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a76d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a4a770:;
  /* 10a4a770 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a774 jae 0x10a4a794 */
  if (!C.cf) goto L_10a4a794;
  /* 10a4a776 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4a779 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4a77c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4a77f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4a782 mov cx, word ptr [ecx + eax*2 + 0x10a6eebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10a6eebc)));
  /* 10a4a78a mov word ptr [edx*2 + 0x10a71d60], cx */
  w16((uint32_t)(EDX*2 + 0x10a71d60), (CX));
  /* 10a4a792 jmp 0x10a4a767 */
  goto L_10a4a767;
L_10a4a794:;
  /* 10a4a794 call 0x10a4aaa0 */
  push32(0x10a4a799u); f_10a4aaa0();
  /* 10a4a799 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a4a79b call 0x10a47fc0 */
  push32(0x10a4a7a0u); f_10a47fc0();
  /* 10a4a7a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a7a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a7a5 jmp 0x10a4a930 */
  goto L_10a4a930;
L_10a4a7aa:;
  /* 10a4a7aa jmp 0x10a4a655 */
  goto L_10a4a655;
L_10a4a7af:;
  /* 10a4a7af lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10a4a7b2 push edx */
  push32((uint32_t)(EDX));
  /* 10a4a7b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4a7b6 push eax */
  push32((uint32_t)(EAX));
  /* 10a4a7b7 call dword ptr [0x10a732d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732d0))), 0x10a4a7bdu);
  /* 10a4a7bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a7c0 jne 0x10a4a902 */
  if (!C.zf) goto L_10a4a902;
  /* 10a4a7c6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a4a7cd jmp 0x10a4a7d8 */
  goto L_10a4a7d8;
L_10a4a7cf:;
  /* 10a4a7cf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a7d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a7d5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10a4a7d8:;
  /* 10a4a7d8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a7df jae 0x10a4a7ed */
  if (!C.cf) goto L_10a4a7ed;
  /* 10a4a7e1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a7e4 mov byte ptr [edx + 0x10a71e80], 0 */
  w8((uint32_t)(EDX + 0x10a71e80), (0x0u));
  /* 10a4a7eb jmp 0x10a4a7cf */
  goto L_10a4a7cf;
L_10a4a7ed:;
  /* 10a4a7ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4a7f0 mov dword ptr [0x10a71ce4], eax */
  w32((uint32_t)(0x10a71ce4), (EAX));
  /* 10a4a7f5 mov dword ptr [0x10a71f84], 0 */
  w32((uint32_t)(0x10a71f84), (0x0u));
  /* 10a4a7ff cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a803 jbe 0x10a4a8be */
  if ((C.cf||C.zf)) goto L_10a4a8be;
  /* 10a4a809 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10a4a80c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10a4a80f jmp 0x10a4a81a */
  goto L_10a4a81a;
L_10a4a811:;
  /* 10a4a811 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a4a814 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a817 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10a4a81a:;
  /* 10a4a81a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a4a81d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4a81f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a4a821 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4a823 je 0x10a4a86c */
  if (C.zf) goto L_10a4a86c;
  /* 10a4a825 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a4a828 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a82a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10a4a82d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4a82f je 0x10a4a86c */
  if (C.zf) goto L_10a4a86c;
  /* 10a4a831 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a4a834 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4a836 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a4a838 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10a4a83b jmp 0x10a4a846 */
  goto L_10a4a846;
L_10a4a83d:;
  /* 10a4a83d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a840 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a843 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a4a846:;
  /* 10a4a846 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a4a849 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4a84b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10a4a84e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a851 ja 0x10a4a86a */
  if ((!C.cf&&!C.zf)) goto L_10a4a86a;
  /* 10a4a853 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a856 mov cl, byte ptr [eax + 0x10a71e81] */
  CL = (r8((uint32_t)(EAX + 0x10a71e81)));
  /* 10a4a85c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10a4a85f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a862 mov byte ptr [edx + 0x10a71e81], cl */
  w8((uint32_t)(EDX + 0x10a71e81), (CL));
  /* 10a4a868 jmp 0x10a4a83d */
  goto L_10a4a83d;
L_10a4a86a:;
  /* 10a4a86a jmp 0x10a4a811 */
  goto L_10a4a811;
L_10a4a86c:;
  /* 10a4a86c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10a4a873 jmp 0x10a4a87e */
  goto L_10a4a87e;
L_10a4a875:;
  /* 10a4a875 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a878 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a87b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a4a87e:;
  /* 10a4a87e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a885 jae 0x10a4a89e */
  if (!C.cf) goto L_10a4a89e;
  /* 10a4a887 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a88a mov dl, byte ptr [ecx + 0x10a71e81] */
  DL = (r8((uint32_t)(ECX + 0x10a71e81)));
  /* 10a4a890 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10a4a893 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4a896 mov byte ptr [eax + 0x10a71e81], dl */
  w8((uint32_t)(EAX + 0x10a71e81), (DL));
  /* 10a4a89c jmp 0x10a4a875 */
  goto L_10a4a875;
L_10a4a89e:;
  /* 10a4a89e mov ecx, dword ptr [0x10a71ce4] */
  ECX = (r32((uint32_t)(0x10a71ce4)));
  /* 10a4a8a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4a8a5 call 0x10a4a9a0 */
  push32(0x10a4a8aau); f_10a4a9a0();
  /* 10a4a8aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a8ad mov dword ptr [0x10a71f84], eax */
  w32((uint32_t)(0x10a71f84), (EAX));
  /* 10a4a8b2 mov dword ptr [0x10a71d6c], 1 */
  w32((uint32_t)(0x10a71d6c), (0x1u));
  /* 10a4a8bc jmp 0x10a4a8c8 */
  goto L_10a4a8c8;
L_10a4a8be:;
  /* 10a4a8be mov dword ptr [0x10a71d6c], 0 */
  w32((uint32_t)(0x10a71d6c), (0x0u));
L_10a4a8c8:;
  /* 10a4a8c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a4a8cf jmp 0x10a4a8da */
  goto L_10a4a8da;
L_10a4a8d1:;
  /* 10a4a8d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4a8d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a8d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a4a8da:;
  /* 10a4a8da cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a8de jae 0x10a4a8ef */
  if (!C.cf) goto L_10a4a8ef;
  /* 10a4a8e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4a8e3 mov word ptr [eax*2 + 0x10a71d60], 0 */
  w16((uint32_t)(EAX*2 + 0x10a71d60), (0x0u));
  /* 10a4a8ed jmp 0x10a4a8d1 */
  goto L_10a4a8d1;
L_10a4a8ef:;
  /* 10a4a8ef call 0x10a4aaa0 */
  push32(0x10a4a8f4u); f_10a4aaa0();
  /* 10a4a8f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a4a8f6 call 0x10a47fc0 */
  push32(0x10a4a8fbu); f_10a47fc0();
  /* 10a4a8fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a8fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a900 jmp 0x10a4a930 */
  goto L_10a4a930;
L_10a4a902:;
  /* 10a4a902 cmp dword ptr [0x10a707f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a707f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a909 je 0x10a4a923 */
  if (C.zf) goto L_10a4a923;
  /* 10a4a90b call 0x10a4aa20 */
  push32(0x10a4a910u); f_10a4aa20();
  /* 10a4a910 call 0x10a4aaa0 */
  push32(0x10a4a915u); f_10a4aaa0();
  /* 10a4a915 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a4a917 call 0x10a47fc0 */
  push32(0x10a4a91cu); f_10a47fc0();
  /* 10a4a91c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a91f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4a921 jmp 0x10a4a930 */
  goto L_10a4a930;
L_10a4a923:;
  /* 10a4a923 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a4a925 call 0x10a47fc0 */
  push32(0x10a4a92au); f_10a47fc0();
  /* 10a4a92a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4a92d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a4a930:;
  /* 10a4a930 mov esp, ebp */
  ESP = (EBP);
  /* 10a4a932 pop ebp */
  EBP = (pop32());
  /* 10a4a933 ret  */
  ESPCHK(0x10a4a5f0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10a4a940 (89 bytes, 21 insns) */
void f_10a4a940(void) {
  FTRACE(0x10a4a940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4a940 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4a941 mov ebp, esp */
  EBP = (ESP);
  /* 10a4a943 mov dword ptr [0x10a707f0], 0 */
  w32((uint32_t)(0x10a707f0), (0x0u));
  /* 10a4a94d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a951 jne 0x10a4a965 */
  if (!C.zf) goto L_10a4a965;
  /* 10a4a953 mov dword ptr [0x10a707f0], 1 */
  w32((uint32_t)(0x10a707f0), (0x1u));
  /* 10a4a95d call dword ptr [0x10a732c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732c8))), 0x10a4a963u);
  /* 10a4a963 jmp 0x10a4a997 */
  goto L_10a4a997;
L_10a4a965:;
  /* 10a4a965 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a969 jne 0x10a4a97d */
  if (!C.zf) goto L_10a4a97d;
  /* 10a4a96b mov dword ptr [0x10a707f0], 1 */
  w32((uint32_t)(0x10a707f0), (0x1u));
  /* 10a4a975 call dword ptr [0x10a73334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73334))), 0x10a4a97bu);
  /* 10a4a97b jmp 0x10a4a997 */
  goto L_10a4a997;
L_10a4a97d:;
  /* 10a4a97d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a981 jne 0x10a4a994 */
  if (!C.zf) goto L_10a4a994;
  /* 10a4a983 mov dword ptr [0x10a707f0], 1 */
  w32((uint32_t)(0x10a707f0), (0x1u));
  /* 10a4a98d mov eax, dword ptr [0x10a70810] */
  EAX = (r32((uint32_t)(0x10a70810)));
  /* 10a4a992 jmp 0x10a4a997 */
  goto L_10a4a997;
L_10a4a994:;
  /* 10a4a994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10a4a997:;
  /* 10a4a997 pop ebp */
  EBP = (pop32());
  /* 10a4a998 ret  */
  ESPCHK(0x10a4a940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9a0 @ 0x10a4a9a0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10a4a9a0(void) {
  FTRACE(0x10a4a9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4a9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4a9a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4a9a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4a9a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4a9a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4a9aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4a9ad sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4a9b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a4a9b6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4a9ba ja 0x10a4a9ea */
  if ((!C.cf&&!C.zf)) goto L_10a4a9ea;
  /* 10a4a9bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4a9bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4a9c1 mov dl, byte ptr [eax + 0x10a4aa04] */
  DL = (r8((uint32_t)(EAX + 0x10a4aa04)));
  /* 10a4a9c7 jmp dword ptr [edx*4 + 0x10a4a9f0] */
  switch (EDX) {
    case 0: goto L_10a4a9ce;
    case 1: goto L_10a4a9d5;
    case 2: goto L_10a4a9dc;
    case 3: goto L_10a4a9e3;
    case 4: goto L_10a4a9ea;
    default: x86_unimpl("switch@0x10a4a9c7 out of table"); return;
  }
L_10a4a9ce:;
  /* 10a4a9ce mov eax, 0x411 */
  EAX = (0x411u);
  /* 10a4a9d3 jmp 0x10a4a9ec */
  goto L_10a4a9ec;
L_10a4a9d5:;
  /* 10a4a9d5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10a4a9da jmp 0x10a4a9ec */
  goto L_10a4a9ec;
L_10a4a9dc:;
  /* 10a4a9dc mov eax, 0x412 */
  EAX = (0x412u);
  /* 10a4a9e1 jmp 0x10a4a9ec */
  goto L_10a4a9ec;
L_10a4a9e3:;
  /* 10a4a9e3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10a4a9e8 jmp 0x10a4a9ec */
  goto L_10a4a9ec;
L_10a4a9ea:;
  /* 10a4a9ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a4a9ec:;
  /* 10a4a9ec mov esp, ebp */
  ESP = (EBP);
  /* 10a4a9ee pop ebp */
  EBP = (pop32());
  /* 10a4a9ef ret  */
  ESPCHK(0x10a4a9a0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10a4aa20 (116 bytes, 29 insns) */
void f_10a4aa20(void) {
  FTRACE(0x10a4aa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4aa20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4aa21 mov ebp, esp */
  EBP = (ESP);
  /* 10a4aa23 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4aa24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a4aa2b jmp 0x10a4aa36 */
  goto L_10a4aa36;
L_10a4aa2d:;
  /* 10a4aa2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4aa30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4aa33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a4aa36:;
  /* 10a4aa36 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4aa3d jge 0x10a4aa4b */
  if ((C.sf==C.of)) goto L_10a4aa4b;
  /* 10a4aa3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4aa42 mov byte ptr [ecx + 0x10a71e80], 0 */
  w8((uint32_t)(ECX + 0x10a71e80), (0x0u));
  /* 10a4aa49 jmp 0x10a4aa2d */
  goto L_10a4aa2d;
L_10a4aa4b:;
  /* 10a4aa4b mov dword ptr [0x10a71ce4], 0 */
  w32((uint32_t)(0x10a71ce4), (0x0u));
  /* 10a4aa55 mov dword ptr [0x10a71d6c], 0 */
  w32((uint32_t)(0x10a71d6c), (0x0u));
  /* 10a4aa5f mov dword ptr [0x10a71f84], 0 */
  w32((uint32_t)(0x10a71f84), (0x0u));
  /* 10a4aa69 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a4aa70 jmp 0x10a4aa7b */
  goto L_10a4aa7b;
L_10a4aa72:;
  /* 10a4aa72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4aa75 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4aa78 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a4aa7b:;
  /* 10a4aa7b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4aa7f jge 0x10a4aa90 */
  if ((C.sf==C.of)) goto L_10a4aa90;
  /* 10a4aa81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4aa84 mov word ptr [eax*2 + 0x10a71d60], 0 */
  w16((uint32_t)(EAX*2 + 0x10a71d60), (0x0u));
  /* 10a4aa8e jmp 0x10a4aa72 */
  goto L_10a4aa72;
L_10a4aa90:;
  /* 10a4aa90 mov esp, ebp */
  ESP = (EBP);
  /* 10a4aa92 pop ebp */
  EBP = (pop32());
  /* 10a4aa93 ret  */
  ESPCHK(0x10a4aa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aaa0 @ 0x10a4aaa0 (770 bytes, 175 insns) */
void f_10a4aaa0(void) {
  FTRACE(0x10a4aaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4aaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4aaa1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4aaa3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4aaa9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10a4aaaf push eax */
  push32((uint32_t)(EAX));
  /* 10a4aab0 mov ecx, dword ptr [0x10a71ce4] */
  ECX = (r32((uint32_t)(0x10a71ce4)));
  /* 10a4aab6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4aab7 call dword ptr [0x10a732d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732d0))), 0x10a4aabdu);
  /* 10a4aabd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4aac0 jne 0x10a4acd9 */
  if (!C.zf) goto L_10a4acd9;
  /* 10a4aac6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10a4aad0 jmp 0x10a4aae1 */
  goto L_10a4aae1;
L_10a4aad2:;
  /* 10a4aad2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4aad8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4aadb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10a4aae1:;
  /* 10a4aae1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4aaeb jae 0x10a4ab02 */
  if (!C.cf) goto L_10a4ab02;
  /* 10a4aaed mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4aaf3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10a4aaf9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10a4ab00 jmp 0x10a4aad2 */
  goto L_10a4aad2;
L_10a4ab02:;
  /* 10a4ab02 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10a4ab09 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10a4ab0f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a4ab12 jmp 0x10a4ab1d */
  goto L_10a4ab1d;
L_10a4ab14:;
  /* 10a4ab14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ab17 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ab1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a4ab1d:;
  /* 10a4ab1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ab20 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4ab22 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a4ab24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4ab26 je 0x10a4ab68 */
  if (C.zf) goto L_10a4ab68;
  /* 10a4ab28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ab2b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ab2d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a4ab2f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10a4ab35 jmp 0x10a4ab46 */
  goto L_10a4ab46;
L_10a4ab37:;
  /* 10a4ab37 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ab3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ab40 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10a4ab46:;
  /* 10a4ab46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ab49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ab4b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10a4ab4e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ab54 ja 0x10a4ab66 */
  if ((!C.cf&&!C.zf)) goto L_10a4ab66;
  /* 10a4ab56 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ab5c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10a4ab64 jmp 0x10a4ab37 */
  goto L_10a4ab37;
L_10a4ab66:;
  /* 10a4ab66 jmp 0x10a4ab14 */
  goto L_10a4ab14;
L_10a4ab68:;
  /* 10a4ab68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4ab6a mov eax, dword ptr [0x10a71f84] */
  EAX = (r32((uint32_t)(0x10a71f84)));
  /* 10a4ab6f push eax */
  push32((uint32_t)(EAX));
  /* 10a4ab70 mov ecx, dword ptr [0x10a71ce4] */
  ECX = (r32((uint32_t)(0x10a71ce4)));
  /* 10a4ab76 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ab77 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10a4ab7d push edx */
  push32((uint32_t)(EDX));
  /* 10a4ab7e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a4ab83 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10a4ab89 push eax */
  push32((uint32_t)(EAX));
  /* 10a4ab8a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4ab8c call 0x10a4c750 */
  push32(0x10a4ab91u); f_10a4c750();
  /* 10a4ab91 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ab94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4ab96 mov ecx, dword ptr [0x10a71ce4] */
  ECX = (r32((uint32_t)(0x10a71ce4)));
  /* 10a4ab9c push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ab9d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a4aba2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10a4aba8 push edx */
  push32((uint32_t)(EDX));
  /* 10a4aba9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a4abae lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10a4abb4 push eax */
  push32((uint32_t)(EAX));
  /* 10a4abb5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a4abba mov ecx, dword ptr [0x10a71f84] */
  ECX = (r32((uint32_t)(0x10a71f84)));
  /* 10a4abc0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4abc1 call 0x10a4c910 */
  push32(0x10a4abc6u); f_10a4c910();
  /* 10a4abc6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4abc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4abcb mov edx, dword ptr [0x10a71ce4] */
  EDX = (r32((uint32_t)(0x10a71ce4)));
  /* 10a4abd1 push edx */
  push32((uint32_t)(EDX));
  /* 10a4abd2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a4abd7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10a4abdd push eax */
  push32((uint32_t)(EAX));
  /* 10a4abde push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a4abe3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10a4abe9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4abea push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10a4abef mov edx, dword ptr [0x10a71f84] */
  EDX = (r32((uint32_t)(0x10a71f84)));
  /* 10a4abf5 push edx */
  push32((uint32_t)(EDX));
  /* 10a4abf6 call 0x10a4c910 */
  push32(0x10a4abfbu); f_10a4c910();
  /* 10a4abfb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4abfe mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10a4ac08 jmp 0x10a4ac19 */
  goto L_10a4ac19;
L_10a4ac0a:;
  /* 10a4ac0a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ac10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ac13 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10a4ac19:;
  /* 10a4ac19 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ac23 jae 0x10a4acd4 */
  if (!C.cf) goto L_10a4acd4;
  /* 10a4ac29 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ac2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4ac31 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10a4ac39 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4ac3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4ac3e je 0x10a4ac76 */
  if (C.zf) goto L_10a4ac76;
  /* 10a4ac40 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ac46 mov cl, byte ptr [eax + 0x10a71e81] */
  CL = (r8((uint32_t)(EAX + 0x10a71e81)));
  /* 10a4ac4c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10a4ac4f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ac55 mov byte ptr [edx + 0x10a71e81], cl */
  w8((uint32_t)(EDX + 0x10a71e81), (CL));
  /* 10a4ac5b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ac61 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ac67 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10a4ac6e mov byte ptr [eax + 0x10a71d80], dl */
  w8((uint32_t)(EAX + 0x10a71d80), (DL));
  /* 10a4ac74 jmp 0x10a4accf */
  goto L_10a4accf;
L_10a4ac76:;
  /* 10a4ac76 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ac7c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ac7e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10a4ac86 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ac89 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4ac8b je 0x10a4acc2 */
  if (C.zf) goto L_10a4acc2;
  /* 10a4ac8d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ac93 mov al, byte ptr [edx + 0x10a71e81] */
  AL = (r8((uint32_t)(EDX + 0x10a71e81)));
  /* 10a4ac99 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10a4ac9b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4aca1 mov byte ptr [ecx + 0x10a71e81], al */
  w8((uint32_t)(ECX + 0x10a71e81), (AL));
  /* 10a4aca7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4acad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4acb3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10a4acba mov byte ptr [edx + 0x10a71d80], cl */
  w8((uint32_t)(EDX + 0x10a71d80), (CL));
  /* 10a4acc0 jmp 0x10a4accf */
  goto L_10a4accf;
L_10a4acc2:;
  /* 10a4acc2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4acc8 mov byte ptr [edx + 0x10a71d80], 0 */
  w8((uint32_t)(EDX + 0x10a71d80), (0x0u));
L_10a4accf:;
  /* 10a4accf jmp 0x10a4ac0a */
  goto L_10a4ac0a;
L_10a4acd4:;
  /* 10a4acd4 jmp 0x10a4ad9e */
  goto L_10a4ad9e;
L_10a4acd9:;
  /* 10a4acd9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10a4ace3 jmp 0x10a4acf4 */
  goto L_10a4acf4;
L_10a4ace5:;
  /* 10a4ace5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4aceb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4acee mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10a4acf4:;
  /* 10a4acf4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4acfe jae 0x10a4ad9e */
  if (!C.cf) goto L_10a4ad9e;
  /* 10a4ad04 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ad0b jb 0x10a4ad48 */
  if (C.cf) goto L_10a4ad48;
  /* 10a4ad0d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ad14 ja 0x10a4ad48 */
  if ((!C.cf&&!C.zf)) goto L_10a4ad48;
  /* 10a4ad16 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ad1c mov dl, byte ptr [ecx + 0x10a71e81] */
  DL = (r8((uint32_t)(ECX + 0x10a71e81)));
  /* 10a4ad22 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10a4ad25 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ad2b mov byte ptr [eax + 0x10a71e81], dl */
  w8((uint32_t)(EAX + 0x10a71e81), (DL));
  /* 10a4ad31 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ad37 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ad3a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ad40 mov byte ptr [edx + 0x10a71d80], cl */
  w8((uint32_t)(EDX + 0x10a71d80), (CL));
  /* 10a4ad46 jmp 0x10a4ad99 */
  goto L_10a4ad99;
L_10a4ad48:;
  /* 10a4ad48 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ad4f jb 0x10a4ad8c */
  if (C.cf) goto L_10a4ad8c;
  /* 10a4ad51 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ad58 ja 0x10a4ad8c */
  if ((!C.cf&&!C.zf)) goto L_10a4ad8c;
  /* 10a4ad5a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ad60 mov cl, byte ptr [eax + 0x10a71e81] */
  CL = (r8((uint32_t)(EAX + 0x10a71e81)));
  /* 10a4ad66 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10a4ad69 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ad6f mov byte ptr [edx + 0x10a71e81], cl */
  w8((uint32_t)(EDX + 0x10a71e81), (CL));
  /* 10a4ad75 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ad7b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4ad7e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ad84 mov byte ptr [ecx + 0x10a71d80], al */
  w8((uint32_t)(ECX + 0x10a71d80), (AL));
  /* 10a4ad8a jmp 0x10a4ad99 */
  goto L_10a4ad99;
L_10a4ad8c:;
  /* 10a4ad8c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a4ad92 mov byte ptr [edx + 0x10a71d80], 0 */
  w8((uint32_t)(EDX + 0x10a71d80), (0x0u));
L_10a4ad99:;
  /* 10a4ad99 jmp 0x10a4ace5 */
  goto L_10a4ace5;
L_10a4ad9e:;
  /* 10a4ad9e mov esp, ebp */
  ESP = (EBP);
  /* 10a4ada0 pop ebp */
  EBP = (pop32());
  /* 10a4ada1 ret  */
  ESPCHK(0x10a4aaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000adb0 @ 0x10a4adb0 (23 bytes, 9 insns) */
void f_10a4adb0(void) {
  FTRACE(0x10a4adb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4adb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4adb1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4adb3 cmp dword ptr [0x10a71d6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a71d6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4adba je 0x10a4adc3 */
  if (C.zf) goto L_10a4adc3;
  /* 10a4adbc mov eax, dword ptr [0x10a71ce4] */
  EAX = (r32((uint32_t)(0x10a71ce4)));
  /* 10a4adc1 jmp 0x10a4adc5 */
  goto L_10a4adc5;
L_10a4adc3:;
  /* 10a4adc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a4adc5:;
  /* 10a4adc5 pop ebp */
  EBP = (pop32());
  /* 10a4adc6 ret  */
  ESPCHK(0x10a4adb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000add0 @ 0x10a4add0 (34 bytes, 10 insns) */
void f_10a4add0(void) {
  FTRACE(0x10a4add0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4add0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4add1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4add3 cmp dword ptr [0x10a72130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a72130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4adda jne 0x10a4adf0 */
  if (!C.zf) goto L_10a4adf0;
  /* 10a4addc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10a4adde call 0x10a4a5f0 */
  push32(0x10a4ade3u); f_10a4a5f0();
  /* 10a4ade3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ade6 mov dword ptr [0x10a72130], 1 */
  w32((uint32_t)(0x10a72130), (0x1u));
L_10a4adf0:;
  /* 10a4adf0 pop ebp */
  EBP = (pop32());
  /* 10a4adf1 ret  */
  ESPCHK(0x10a4add0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae00 @ 0x10a4ae00 (664 bytes, 259 insns) [15 switch table(s)] */
void f_10a4ae00(void) {
  FTRACE(0x10a4ae00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4ae00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4ae01 mov ebp, esp */
  EBP = (ESP);
  /* 10a4ae03 push edi */
  push32((uint32_t)(EDI));
  /* 10a4ae04 push esi */
  push32((uint32_t)(ESI));
  /* 10a4ae05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4ae08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4ae0b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ae0e mov eax, ecx */
  EAX = (ECX);
  /* 10a4ae10 mov edx, ecx */
  EDX = (ECX);
  /* 10a4ae12 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ae14 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ae16 jbe 0x10a4ae20 */
  if ((C.cf||C.zf)) goto L_10a4ae20;
  /* 10a4ae18 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ae1a jb 0x10a4af98 */
  if (C.cf) goto L_10a4af98;
L_10a4ae20:;
  /* 10a4ae20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10a4ae26 jne 0x10a4ae3c */
  if (!C.zf) goto L_10a4ae3c;
  /* 10a4ae28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a4ae2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4ae2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ae31 jb 0x10a4ae5c */
  if (C.cf) goto L_10a4ae5c;
  /* 10a4ae33 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a4ae35 jmp dword ptr [edx*4 + 0x10a4af48] */
  switch (EDX) {
    case 0: goto L_10a4af58;
    case 1: goto L_10a4af60;
    case 2: goto L_10a4af6c;
    case 3: goto L_10a4af80;
    default: x86_unimpl("switch@0x10a4ae35 out of table"); return;
  }
L_10a4ae3c:;
  /* 10a4ae3c mov eax, edi */
  EAX = (EDI);
  /* 10a4ae3e mov edx, 3 */
  EDX = (0x3u);
  /* 10a4ae43 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4ae46 jb 0x10a4ae54 */
  if (C.cf) goto L_10a4ae54;
  /* 10a4ae48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4ae4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ae4d jmp dword ptr [eax*4 + 0x10a4ae60] */
  switch (EAX) {
    case 1: goto L_10a4ae70;
    case 2: goto L_10a4ae9c;
    case 3: goto L_10a4aec0;
    default: x86_unimpl("switch@0x10a4ae4d out of table"); return;
  }
L_10a4ae54:;
  /* 10a4ae54 jmp dword ptr [ecx*4 + 0x10a4af58] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10a4af58)))); return;
  /* 10a4ae5b nop  */
  /* nop */
L_10a4ae5c:;
  /* 10a4ae5c jmp dword ptr [ecx*4 + 0x10a4aedc] */
  switch (ECX) {
    case 0: goto L_10a4af3f;
    case 1: goto L_10a4af2c;
    case 2: goto L_10a4af24;
    case 3: goto L_10a4af1c;
    case 4: goto L_10a4af14;
    case 5: goto L_10a4af0c;
    case 6: goto L_10a4af04;
    case 7: goto L_10a4aefc;
    default: x86_unimpl("switch@0x10a4ae5c out of table"); return;
  }
  /* 10a4ae63 nop  */
  /* nop */
L_10a4ae70:;
  /* 10a4ae70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4ae72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a4ae74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a4ae76 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a4ae79 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a4ae7c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a4ae7f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a4ae82 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a4ae85 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ae88 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ae8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ae8e jb 0x10a4ae5c */
  if (C.cf) goto L_10a4ae5c;
  /* 10a4ae90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a4ae92 jmp dword ptr [edx*4 + 0x10a4af48] */
  switch (EDX) {
    case 0: goto L_10a4af58;
    case 1: goto L_10a4af60;
    case 2: goto L_10a4af6c;
    case 3: goto L_10a4af80;
    default: x86_unimpl("switch@0x10a4ae92 out of table"); return;
  }
  /* 10a4ae99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a4ae9c:;
  /* 10a4ae9c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4ae9e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a4aea0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a4aea2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a4aea5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a4aea8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a4aeab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4aeae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4aeb1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4aeb4 jb 0x10a4ae5c */
  if (C.cf) goto L_10a4ae5c;
  /* 10a4aeb6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a4aeb8 jmp dword ptr [edx*4 + 0x10a4af48] */
  switch (EDX) {
    case 0: goto L_10a4af58;
    case 1: goto L_10a4af60;
    case 2: goto L_10a4af6c;
    case 3: goto L_10a4af80;
    default: x86_unimpl("switch@0x10a4aeb8 out of table"); return;
  }
  /* 10a4aebf nop  */
  /* nop */
L_10a4aec0:;
  /* 10a4aec0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4aec2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a4aec4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a4aec6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a4aec7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a4aeca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a4aecb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4aece jb 0x10a4ae5c */
  if (C.cf) goto L_10a4ae5c;
  /* 10a4aed0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a4aed2 jmp dword ptr [edx*4 + 0x10a4af48] */
  switch (EDX) {
    case 0: goto L_10a4af58;
    case 1: goto L_10a4af60;
    case 2: goto L_10a4af6c;
    case 3: goto L_10a4af80;
    default: x86_unimpl("switch@0x10a4aed2 out of table"); return;
  }
  /* 10a4aed9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a4aefc:;
  /* 10a4aefc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10a4af00 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10a4af04:;
  /* 10a4af04 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10a4af08 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10a4af0c:;
  /* 10a4af0c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10a4af10 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10a4af14:;
  /* 10a4af14 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10a4af18 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10a4af1c:;
  /* 10a4af1c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10a4af20 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10a4af24:;
  /* 10a4af24 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10a4af28 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10a4af2c:;
  /* 10a4af2c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10a4af30 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10a4af34 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10a4af3b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4af3d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10a4af3f:;
  /* 10a4af3f jmp dword ptr [edx*4 + 0x10a4af48] */
  switch (EDX) {
    case 0: goto L_10a4af58;
    case 1: goto L_10a4af60;
    case 2: goto L_10a4af6c;
    case 3: goto L_10a4af80;
    default: x86_unimpl("switch@0x10a4af3f out of table"); return;
  }
  /* 10a4af46 mov edi, edi */
  EDI = (EDI);
L_10a4af58:;
  /* 10a4af58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4af5b pop esi */
  ESI = (pop32());
  /* 10a4af5c pop edi */
  EDI = (pop32());
  /* 10a4af5d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a4af5e ret  */
  ESPCHK(0x10a4ae00u, _esp0);
  ESP += 4; return;
  /* 10a4af5f nop  */
  /* nop */
L_10a4af60:;
  /* 10a4af60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a4af62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a4af64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4af67 pop esi */
  ESI = (pop32());
  /* 10a4af68 pop edi */
  EDI = (pop32());
  /* 10a4af69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a4af6a ret  */
  ESPCHK(0x10a4ae00u, _esp0);
  ESP += 4; return;
  /* 10a4af6b nop  */
  /* nop */
L_10a4af6c:;
  /* 10a4af6c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a4af6e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a4af70 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a4af73 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a4af76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4af79 pop esi */
  ESI = (pop32());
  /* 10a4af7a pop edi */
  EDI = (pop32());
  /* 10a4af7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a4af7c ret  */
  ESPCHK(0x10a4ae00u, _esp0);
  ESP += 4; return;
  /* 10a4af7d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a4af80:;
  /* 10a4af80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a4af82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a4af84 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a4af87 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a4af8a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a4af8d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a4af90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4af93 pop esi */
  ESI = (pop32());
  /* 10a4af94 pop edi */
  EDI = (pop32());
  /* 10a4af95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a4af96 ret  */
  ESPCHK(0x10a4ae00u, _esp0);
  ESP += 4; return;
  /* 10a4af97 nop  */
  /* nop */
L_10a4af98:;
  /* 10a4af98 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10a4af9c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10a4afa0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10a4afa6 jne 0x10a4afcc */
  if (!C.zf) goto L_10a4afcc;
  /* 10a4afa8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a4afab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4afae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4afb1 jb 0x10a4afc0 */
  if (C.cf) goto L_10a4afc0;
  /* 10a4afb3 std  */
  C.df=1;
  /* 10a4afb4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a4afb6 cld  */
  C.df=0;
  /* 10a4afb7 jmp dword ptr [edx*4 + 0x10a4b0e0] */
  switch (EDX) {
    case 0: goto L_10a4b0f0;
    case 1: goto L_10a4b0f8;
    case 2: goto L_10a4b108;
    case 3: goto L_10a4b11c;
    default: x86_unimpl("switch@0x10a4afb7 out of table"); return;
  }
  /* 10a4afbe mov edi, edi */
  EDI = (EDI);
L_10a4afc0:;
  /* 10a4afc0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a4afc2 jmp dword ptr [ecx*4 + 0x10a4b090] */
  switch (ECX) {
    case 0: goto L_10a4b0d7;
    default: x86_unimpl("switch@0x10a4afc2 out of table"); return;
  }
  /* 10a4afc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a4afcc:;
  /* 10a4afcc mov eax, edi */
  EAX = (EDI);
  /* 10a4afce mov edx, 3 */
  EDX = (0x3u);
  /* 10a4afd3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4afd6 jb 0x10a4afe4 */
  if (C.cf) goto L_10a4afe4;
  /* 10a4afd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4afdb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4afdd jmp dword ptr [eax*4 + 0x10a4afe8] */
  switch (EAX) {
    case 1: goto L_10a4aff8;
    case 2: goto L_10a4b018;
    case 3: goto L_10a4b040;
    default: x86_unimpl("switch@0x10a4afdd out of table"); return;
  }
L_10a4afe4:;
  /* 10a4afe4 jmp dword ptr [ecx*4 + 0x10a4b0e0] */
  switch (ECX) {
    case 0: goto L_10a4b0f0;
    case 1: goto L_10a4b0f8;
    case 2: goto L_10a4b108;
    case 3: goto L_10a4b11c;
    default: x86_unimpl("switch@0x10a4afe4 out of table"); return;
  }
  /* 10a4afeb nop  */
  /* nop */
L_10a4aff8:;
  /* 10a4aff8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a4affb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4affd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a4b000 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10a4b001 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a4b004 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10a4b005 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b008 jb 0x10a4afc0 */
  if (C.cf) goto L_10a4afc0;
  /* 10a4b00a std  */
  C.df=1;
  /* 10a4b00b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a4b00d cld  */
  C.df=0;
  /* 10a4b00e jmp dword ptr [edx*4 + 0x10a4b0e0] */
  switch (EDX) {
    case 0: goto L_10a4b0f0;
    case 1: goto L_10a4b0f8;
    case 2: goto L_10a4b108;
    case 3: goto L_10a4b11c;
    default: x86_unimpl("switch@0x10a4b00e out of table"); return;
  }
  /* 10a4b015 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a4b018:;
  /* 10a4b018 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a4b01b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4b01d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a4b020 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a4b023 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a4b026 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a4b029 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4b02c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4b02f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b032 jb 0x10a4afc0 */
  if (C.cf) goto L_10a4afc0;
  /* 10a4b034 std  */
  C.df=1;
  /* 10a4b035 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a4b037 cld  */
  C.df=0;
  /* 10a4b038 jmp dword ptr [edx*4 + 0x10a4b0e0] */
  switch (EDX) {
    case 0: goto L_10a4b0f0;
    case 1: goto L_10a4b0f8;
    case 2: goto L_10a4b108;
    case 3: goto L_10a4b11c;
    default: x86_unimpl("switch@0x10a4b038 out of table"); return;
  }
  /* 10a4b03f nop  */
  /* nop */
L_10a4b040:;
  /* 10a4b040 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a4b043 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4b045 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a4b048 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a4b04b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a4b04e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a4b051 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a4b054 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a4b057 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4b05a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4b05d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b060 jb 0x10a4afc0 */
  if (C.cf) goto L_10a4afc0;
  /* 10a4b066 std  */
  C.df=1;
  /* 10a4b067 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a4b069 cld  */
  C.df=0;
  /* 10a4b06a jmp dword ptr [edx*4 + 0x10a4b0e0] */
  switch (EDX) {
    case 0: goto L_10a4b0f0;
    case 1: goto L_10a4b0f8;
    case 2: goto L_10a4b108;
    case 3: goto L_10a4b11c;
    default: x86_unimpl("switch@0x10a4b06a out of table"); return;
  }
  /* 10a4b071 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10a4b074 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10a4b075 mov al, 0xa4 */
  AL = (0xa4u);
  /* 10a4b077 adc byte ptr [eax + esi*4 - 0x4f5bef5c], bl */
  { uint32_t _a=(r8((uint32_t)(EAX + ESI*4 + -0x4f5bef5c))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + ESI*4 + -0x4f5bef5c), (_r)); fl_add(_a,_b,_r,8); }
  /* 10a4b07e movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10a4b07f adc byte ptr [eax + esi*4 - 0x4f4bef5c], ch */
  { uint32_t _a=(r8((uint32_t)(EAX + ESI*4 + -0x4f4bef5c))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EAX + ESI*4 + -0x4f4bef5c), (_r)); fl_add(_a,_b,_r,8); }
  /* 10a4b086 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10a4b087 adc byte ptr [eax + esi*4 - 0x4f3bef5c], bh */
  { uint32_t _a=(r8((uint32_t)(EAX + ESI*4 + -0x4f3bef5c))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EAX + ESI*4 + -0x4f3bef5c), (_r)); fl_add(_a,_b,_r,8); }
  /* 10a4b08e movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10a4b094 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10a4b098 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10a4b09c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10a4b0a0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10a4b0a4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10a4b0a8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10a4b0ac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10a4b0b0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10a4b0b4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10a4b0b8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10a4b0bc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10a4b0c0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10a4b0c4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10a4b0c8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10a4b0cc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10a4b0d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b0d5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10a4b0d7:;
  /* 10a4b0d7 jmp dword ptr [edx*4 + 0x10a4b0e0] */
  switch (EDX) {
    case 0: goto L_10a4b0f0;
    case 1: goto L_10a4b0f8;
    case 2: goto L_10a4b108;
    case 3: goto L_10a4b11c;
    default: x86_unimpl("switch@0x10a4b0d7 out of table"); return;
  }
  /* 10a4b0de mov edi, edi */
  EDI = (EDI);
L_10a4b0f0:;
  /* 10a4b0f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4b0f3 pop esi */
  ESI = (pop32());
  /* 10a4b0f4 pop edi */
  EDI = (pop32());
  /* 10a4b0f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a4b0f6 ret  */
  ESPCHK(0x10a4ae00u, _esp0);
  ESP += 4; return;
  /* 10a4b0f7 nop  */
  /* nop */
L_10a4b0f8:;
  /* 10a4b0f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a4b0fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a4b0fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4b101 pop esi */
  ESI = (pop32());
  /* 10a4b102 pop edi */
  EDI = (pop32());
  /* 10a4b103 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a4b104 ret  */
  ESPCHK(0x10a4ae00u, _esp0);
  ESP += 4; return;
  /* 10a4b105 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a4b108:;
  /* 10a4b108 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a4b10b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a4b10e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a4b111 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a4b114 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4b117 pop esi */
  ESI = (pop32());
  /* 10a4b118 pop edi */
  EDI = (pop32());
  /* 10a4b119 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a4b11a ret  */
  ESPCHK(0x10a4ae00u, _esp0);
  ESP += 4; return;
  /* 10a4b11b nop  */
  /* nop */
L_10a4b11c:;
  /* 10a4b11c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a4b11f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a4b122 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a4b125 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a4b128 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a4b12b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a4b12e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4b131 pop esi */
  ESI = (pop32());
  /* 10a4b132 pop edi */
  EDI = (pop32());
  /* 10a4b133 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a4b134 ret  */
  ESPCHK(0x10a4ae00u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10a4b140 (104 bytes, 43 insns) */
void f_10a4b140(void) {
  FTRACE(0x10a4b140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4b140 push ebx */
  push32((uint32_t)(EBX));
  /* 10a4b141 push esi */
  push32((uint32_t)(ESI));
  /* 10a4b142 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10a4b146 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4b148 jne 0x10a4b162 */
  if (!C.zf) goto L_10a4b162;
  /* 10a4b14a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10a4b14e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a4b152 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4b154 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a4b156 mov ebx, eax */
  EBX = (EAX);
  /* 10a4b158 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a4b15c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a4b15e mov edx, ebx */
  EDX = (EBX);
  /* 10a4b160 jmp 0x10a4b1a3 */
  goto L_10a4b1a3;
L_10a4b162:;
  /* 10a4b162 mov ecx, eax */
  ECX = (EAX);
  /* 10a4b164 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10a4b168 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a4b16c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10a4b170:;
  /* 10a4b170 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10a4b172 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10a4b174 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10a4b176 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10a4b178 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4b17a jne 0x10a4b170 */
  if (!C.zf) goto L_10a4b170;
  /* 10a4b17c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a4b17e mov esi, eax */
  ESI = (EAX);
  /* 10a4b180 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a4b184 mov ecx, eax */
  ECX = (EAX);
  /* 10a4b186 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10a4b18a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a4b18c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b18e jb 0x10a4b19e */
  if (C.cf) goto L_10a4b19e;
  /* 10a4b190 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b194 ja 0x10a4b19e */
  if ((!C.cf&&!C.zf)) goto L_10a4b19e;
  /* 10a4b196 jb 0x10a4b19f */
  if (C.cf) goto L_10a4b19f;
  /* 10a4b198 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b19c jbe 0x10a4b19f */
  if ((C.cf||C.zf)) goto L_10a4b19f;
L_10a4b19e:;
  /* 10a4b19e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10a4b19f:;
  /* 10a4b19f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4b1a1 mov eax, esi */
  EAX = (ESI);
L_10a4b1a3:;
  /* 10a4b1a3 pop esi */
  ESI = (pop32());
  /* 10a4b1a4 pop ebx */
  EBX = (pop32());
  /* 10a4b1a5 ret 0x10 */
  ESPCHK(0x10a4b140u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10a4b1b0 (117 bytes, 44 insns) */
void f_10a4b1b0(void) {
  FTRACE(0x10a4b1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4b1b0 push ebx */
  push32((uint32_t)(EBX));
  /* 10a4b1b1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10a4b1b5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4b1b7 jne 0x10a4b1d1 */
  if (!C.zf) goto L_10a4b1d1;
  /* 10a4b1b9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a4b1bd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a4b1c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4b1c3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a4b1c5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a4b1c9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a4b1cb mov eax, edx */
  EAX = (EDX);
  /* 10a4b1cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4b1cf jmp 0x10a4b221 */
  goto L_10a4b221;
L_10a4b1d1:;
  /* 10a4b1d1 mov ecx, eax */
  ECX = (EAX);
  /* 10a4b1d3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a4b1d7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a4b1db mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10a4b1df:;
  /* 10a4b1df shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10a4b1e1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10a4b1e3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10a4b1e5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10a4b1e7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4b1e9 jne 0x10a4b1df */
  if (!C.zf) goto L_10a4b1df;
  /* 10a4b1eb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a4b1ed mov ecx, eax */
  ECX = (EAX);
  /* 10a4b1ef mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a4b1f3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10a4b1f4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a4b1f8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b1fa jb 0x10a4b20a */
  if (C.cf) goto L_10a4b20a;
  /* 10a4b1fc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b200 ja 0x10a4b20a */
  if ((!C.cf&&!C.zf)) goto L_10a4b20a;
  /* 10a4b202 jb 0x10a4b212 */
  if (C.cf) goto L_10a4b212;
  /* 10a4b204 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b208 jbe 0x10a4b212 */
  if ((C.cf||C.zf)) goto L_10a4b212;
L_10a4b20a:;
  /* 10a4b20a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4b20e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10a4b212:;
  /* 10a4b212 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4b216 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4b21a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a4b21c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a4b21e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10a4b221:;
  /* 10a4b221 pop ebx */
  EBX = (pop32());
  /* 10a4b222 ret 0x10 */
  ESPCHK(0x10a4b1b0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000b230 @ 0x10a4b230 (628 bytes, 214 insns) */
void f_10a4b230(void) {
  FTRACE(0x10a4b230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4b230 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4b231 mov ebp, esp */
  EBP = (ESP);
  /* 10a4b233 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4b236 push ebx */
  push32((uint32_t)(EBX));
  /* 10a4b237 push esi */
  push32((uint32_t)(ESI));
  /* 10a4b238 push edi */
  push32((uint32_t)(EDI));
L_10a4b239:;
  /* 10a4b239 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b23d jne 0x10a4b25d */
  if (!C.zf) goto L_10a4b25d;
  /* 10a4b23f push 0x10a6c4a4 */
  push32((uint32_t)(0x10a6c4a4u));
  /* 10a4b244 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4b246 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10a4b248 push 0x10a6c498 */
  push32((uint32_t)(0x10a6c498u));
  /* 10a4b24d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4b24f call 0x10a435e0 */
  push32(0x10a4b254u); f_10a435e0();
  /* 10a4b254 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b257 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b25a jne 0x10a4b25d */
  if (!C.zf) goto L_10a4b25d;
  /* 10a4b25c int3  */
  x86_unimpl("int3 @ 0x10a4b25c");
L_10a4b25d:;
  /* 10a4b25d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4b25f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4b261 jne 0x10a4b239 */
  if (!C.zf) goto L_10a4b239;
  /* 10a4b263 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4b266 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4b269 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b26c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a4b26f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a4b272 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b275 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a4b278 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4b27e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4b280 je 0x10a4b28f */
  if (C.zf) goto L_10a4b28f;
  /* 10a4b282 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b285 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a4b288 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4b28b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4b28d je 0x10a4b2a5 */
  if (C.zf) goto L_10a4b2a5;
L_10a4b28f:;
  /* 10a4b28f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b292 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a4b295 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10a4b297 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b29a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10a4b29d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4b2a0 jmp 0x10a4b49d */
  goto L_10a4b49d;
L_10a4b2a5:;
  /* 10a4b2a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b2a8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a4b2ab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4b2ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4b2b0 je 0x10a4b2fc */
  if (C.zf) goto L_10a4b2fc;
  /* 10a4b2b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b2b5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10a4b2bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b2bf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a4b2c2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4b2c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4b2c7 je 0x10a4b2e5 */
  if (C.zf) goto L_10a4b2e5;
  /* 10a4b2c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b2cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b2cf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a4b2d2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a4b2d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b2d7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a4b2da and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4b2dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b2e0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10a4b2e3 jmp 0x10a4b2fc */
  goto L_10a4b2fc;
L_10a4b2e5:;
  /* 10a4b2e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b2e8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a4b2eb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4b2ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b2f1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10a4b2f4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4b2f7 jmp 0x10a4b49d */
  goto L_10a4b49d;
L_10a4b2fc:;
  /* 10a4b2fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b2ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a4b302 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4b305 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b308 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10a4b30b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b30e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a4b311 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4b314 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b317 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10a4b31a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b31d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10a4b324 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a4b32b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b32e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a4b331 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b334 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a4b337 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4b33d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4b33f jne 0x10a4b36f */
  if (!C.zf) goto L_10a4b36f;
  /* 10a4b341 cmp dword ptr [ebp - 8], 0x10a6f140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10a6f140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b348 je 0x10a4b353 */
  if (C.zf) goto L_10a4b353;
  /* 10a4b34a cmp dword ptr [ebp - 8], 0x10a6f160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10a6f160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b351 jne 0x10a4b363 */
  if (!C.zf) goto L_10a4b363;
L_10a4b353:;
  /* 10a4b353 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4b356 push edx */
  push32((uint32_t)(EDX));
  /* 10a4b357 call 0x10a4d1a0 */
  push32(0x10a4b35cu); f_10a4d1a0();
  /* 10a4b35c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b35f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4b361 jne 0x10a4b36f */
  if (!C.zf) goto L_10a4b36f;
L_10a4b363:;
  /* 10a4b363 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b366 push eax */
  push32((uint32_t)(EAX));
  /* 10a4b367 call 0x10a4d0d0 */
  push32(0x10a4b36cu); f_10a4d0d0();
  /* 10a4b36c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4b36f:;
  /* 10a4b36f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b372 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a4b375 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4b37b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4b37d je 0x10a4b45b */
  if (C.zf) goto L_10a4b45b;
L_10a4b383:;
  /* 10a4b383 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b386 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b389 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10a4b38b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4b38e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4b390 jge 0x10a4b3b3 */
  if ((C.sf==C.of)) goto L_10a4b3b3;
  /* 10a4b392 push 0x10a6c458 */
  push32((uint32_t)(0x10a6c458u));
  /* 10a4b397 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4b399 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10a4b39e push 0x10a6c498 */
  push32((uint32_t)(0x10a6c498u));
  /* 10a4b3a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4b3a5 call 0x10a435e0 */
  push32(0x10a4b3aau); f_10a435e0();
  /* 10a4b3aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b3ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b3b0 jne 0x10a4b3b3 */
  if (!C.zf) goto L_10a4b3b3;
  /* 10a4b3b2 int3  */
  x86_unimpl("int3 @ 0x10a4b3b2");
L_10a4b3b3:;
  /* 10a4b3b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4b3b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4b3b7 jne 0x10a4b383 */
  if (!C.zf) goto L_10a4b383;
  /* 10a4b3b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b3bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b3bf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10a4b3c1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4b3c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4b3c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b3ca mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a4b3cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b3d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b3d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a4b3d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b3d8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a4b3db sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4b3de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b3e1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a4b3e4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b3e8 jle 0x10a4b406 */
  if ((C.zf||C.sf!=C.of)) goto L_10a4b406;
  /* 10a4b3ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b3ed push ecx */
  push32((uint32_t)(ECX));
  /* 10a4b3ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b3f1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a4b3f4 push eax */
  push32((uint32_t)(EAX));
  /* 10a4b3f5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4b3f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4b3f9 call 0x10a4cdc0 */
  push32(0x10a4b3feu); f_10a4cdc0();
  /* 10a4b3fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b401 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a4b404 jmp 0x10a4b44e */
  goto L_10a4b44e;
L_10a4b406:;
  /* 10a4b406 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b40a je 0x10a4b429 */
  if (C.zf) goto L_10a4b429;
  /* 10a4b40c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4b40f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10a4b412 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4b415 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4b418 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4b41b mov ecx, dword ptr [edx*4 + 0x10a71fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10a71fe0)));
  /* 10a4b422 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b424 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a4b427 jmp 0x10a4b430 */
  goto L_10a4b430;
L_10a4b429:;
  /* 10a4b429 mov dword ptr [ebp - 0x14], 0x10a6ea60 */
  w32((uint32_t)(EBP + -0x14), (0x10a6ea60u));
L_10a4b430:;
  /* 10a4b430 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a4b433 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10a4b437 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4b43a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4b43c je 0x10a4b44e */
  if (C.zf) goto L_10a4b44e;
  /* 10a4b43e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4b440 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4b442 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4b445 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4b446 call 0x10a4cc70 */
  push32(0x10a4b44bu); f_10a4cc70();
  /* 10a4b44b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4b44e:;
  /* 10a4b44e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b451 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a4b454 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10a4b457 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10a4b459 jmp 0x10a4b479 */
  goto L_10a4b479;
L_10a4b45b:;
  /* 10a4b45b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a4b462 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b465 push edx */
  push32((uint32_t)(EDX));
  /* 10a4b466 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10a4b469 push eax */
  push32((uint32_t)(EAX));
  /* 10a4b46a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4b46d push ecx */
  push32((uint32_t)(ECX));
  /* 10a4b46e call 0x10a4cdc0 */
  push32(0x10a4b473u); f_10a4cdc0();
  /* 10a4b473 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b476 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a4b479:;
  /* 10a4b479 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4b47c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b47f je 0x10a4b495 */
  if (C.zf) goto L_10a4b495;
  /* 10a4b481 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b484 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a4b487 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4b48a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b48d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10a4b490 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4b493 jmp 0x10a4b49d */
  goto L_10a4b49d;
L_10a4b495:;
  /* 10a4b495 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4b498 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10a4b49d:;
  /* 10a4b49d pop edi */
  EDI = (pop32());
  /* 10a4b49e pop esi */
  ESI = (pop32());
  /* 10a4b49f pop ebx */
  EBX = (pop32());
  /* 10a4b4a0 mov esp, ebp */
  ESP = (EBP);
  /* 10a4b4a2 pop ebp */
  EBP = (pop32());
  /* 10a4b4a3 ret  */
  ESPCHK(0x10a4b230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4b0 @ 0x10a4b4b0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10a4b4b0(void) {
  FTRACE(0x10a4b4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4b4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4b4b1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4b4b3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4b4b9 push ebx */
  push32((uint32_t)(EBX));
  /* 10a4b4ba push esi */
  push32((uint32_t)(ESI));
  /* 10a4b4bb push edi */
  push32((uint32_t)(EDI));
  /* 10a4b4bc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a4b4c3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10a4b4cd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10a4b4d4:;
  /* 10a4b4d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4b4d7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a4b4d9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10a4b4dc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a4b4e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4b4e3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b4e6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10a4b4e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4b4eb je 0x10a4c0c7 */
  if (C.zf) goto L_10a4c0c7;
  /* 10a4b4f1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b4f8 jl 0x10a4c0c7 */
  if ((C.sf!=C.of)) goto L_10a4c0c7;
  /* 10a4b4fe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a4b502 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b505 jl 0x10a4b526 */
  if ((C.sf!=C.of)) goto L_10a4b526;
  /* 10a4b507 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a4b50b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b50e jg 0x10a4b526 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a4b526;
  /* 10a4b510 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a4b514 movsx ecx, byte ptr [eax + 0x10a6c490] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10a6c490))));
  /* 10a4b51b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4b51e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10a4b524 jmp 0x10a4b530 */
  goto L_10a4b530;
L_10a4b526:;
  /* 10a4b526 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10a4b530:;
  /* 10a4b530 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10a4b536 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a4b539 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4b53c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4b53f movsx edx, byte ptr [ecx + eax*8 + 0x10a6c4b0] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10a6c4b0))));
  /* 10a4b547 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10a4b54a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a4b54d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4b550 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10a4b556 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b55d ja 0x10a4c0c2 */
  if ((!C.cf&&!C.zf)) goto L_10a4c0c2;
  /* 10a4b563 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10a4b569 jmp dword ptr [ecx*4 + 0x10a4c0d4] */
  switch (ECX) {
    case 0: goto L_10a4b570;
    case 1: goto L_10a4b60a;
    case 2: goto L_10a4b64c;
    case 3: goto L_10a4b6bb;
    case 4: goto L_10a4b713;
    case 5: goto L_10a4b722;
    case 6: goto L_10a4b76e;
    case 7: goto L_10a4b801;
    case 8: goto L_10a4b698;
    case 9: goto L_10a4b6a3;
    case 10: goto L_10a4b68e;
    case 11: goto L_10a4b683;
    case 12: goto L_10a4b6ae;
    case 13: goto L_10a4b6b6;
    default: x86_unimpl("switch@0x10a4b569 out of table"); return;
  }
L_10a4b570:;
  /* 10a4b570 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10a4b577 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a4b57a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4b580 mov eax, dword ptr [0x10a6ec98] */
  EAX = (r32((uint32_t)(0x10a6ec98)));
  /* 10a4b585 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4b587 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10a4b58b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4b591 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4b593 je 0x10a4b5ed */
  if (C.zf) goto L_10a4b5ed;
  /* 10a4b595 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10a4b59b push edx */
  push32((uint32_t)(EDX));
  /* 10a4b59c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4b59f push eax */
  push32((uint32_t)(EAX));
  /* 10a4b5a0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a4b5a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4b5a5 call 0x10a4c1e0 */
  push32(0x10a4b5aau); f_10a4c1e0();
  /* 10a4b5aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b5ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4b5b0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a4b5b2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10a4b5b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4b5b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b5bb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10a4b5be:;
  /* 10a4b5be movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a4b5c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4b5c4 jne 0x10a4b5e7 */
  if (!C.zf) goto L_10a4b5e7;
  /* 10a4b5c6 push 0x10a6c530 */
  push32((uint32_t)(0x10a6c530u));
  /* 10a4b5cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4b5cd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10a4b5d2 push 0x10a6c524 */
  push32((uint32_t)(0x10a6c524u));
  /* 10a4b5d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4b5d9 call 0x10a435e0 */
  push32(0x10a4b5deu); f_10a435e0();
  /* 10a4b5de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b5e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b5e4 jne 0x10a4b5e7 */
  if (!C.zf) goto L_10a4b5e7;
  /* 10a4b5e6 int3  */
  x86_unimpl("int3 @ 0x10a4b5e6");
L_10a4b5e7:;
  /* 10a4b5e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4b5e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4b5eb jne 0x10a4b5be */
  if (!C.zf) goto L_10a4b5be;
L_10a4b5ed:;
  /* 10a4b5ed lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10a4b5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4b5f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4b5f7 push edx */
  push32((uint32_t)(EDX));
  /* 10a4b5f8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a4b5fc push eax */
  push32((uint32_t)(EAX));
  /* 10a4b5fd call 0x10a4c1e0 */
  push32(0x10a4b602u); f_10a4c1e0();
  /* 10a4b602 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b605 jmp 0x10a4c0c2 */
  goto L_10a4c0c2;
L_10a4b60a:;
  /* 10a4b60a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a4b611 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4b614 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10a4b61a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10a4b620 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10a4b626 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10a4b62c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a4b62f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a4b636 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10a4b640 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10a4b647 jmp 0x10a4c0c2 */
  goto L_10a4c0c2;
L_10a4b64c:;
  /* 10a4b64c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a4b650 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10a4b656 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10a4b65c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4b65f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10a4b665 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b66c ja 0x10a4b6b6 */
  if ((!C.cf&&!C.zf)) goto L_10a4b6b6;
  /* 10a4b66e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10a4b674 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4b676 mov al, byte ptr [ecx + 0x10a4c10c] */
  AL = (r8((uint32_t)(ECX + 0x10a4c10c)));
  /* 10a4b67c jmp dword ptr [eax*4 + 0x10a4c0f4] */
  switch (EAX) {
    case 0: goto L_10a4b698;
    case 1: goto L_10a4b6a3;
    case 2: goto L_10a4b68e;
    case 3: goto L_10a4b683;
    case 4: goto L_10a4b6ae;
    case 5: goto L_10a4b6b6;
    default: x86_unimpl("switch@0x10a4b67c out of table"); return;
  }
L_10a4b683:;
  /* 10a4b683 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b686 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4b689 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a4b68c jmp 0x10a4b6b6 */
  goto L_10a4b6b6;
L_10a4b68e:;
  /* 10a4b68e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b691 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10a4b693 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4b696 jmp 0x10a4b6b6 */
  goto L_10a4b6b6;
L_10a4b698:;
  /* 10a4b698 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b69b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4b69e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a4b6a1 jmp 0x10a4b6b6 */
  goto L_10a4b6b6;
L_10a4b6a3:;
  /* 10a4b6a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b6a6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10a4b6a9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a4b6ac jmp 0x10a4b6b6 */
  goto L_10a4b6b6;
L_10a4b6ae:;
  /* 10a4b6ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b6b1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10a4b6b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a4b6b6:;
  /* 10a4b6b6 jmp 0x10a4c0c2 */
  goto L_10a4c0c2;
L_10a4b6bb:;
  /* 10a4b6bb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a4b6bf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b6c2 jne 0x10a4b6f7 */
  if (!C.zf) goto L_10a4b6f7;
  /* 10a4b6c4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10a4b6c7 push edx */
  push32((uint32_t)(EDX));
  /* 10a4b6c8 call 0x10a4c2f0 */
  push32(0x10a4b6cdu); f_10a4c2f0();
  /* 10a4b6cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b6d0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10a4b6d6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b6dd jge 0x10a4b6f5 */
  if ((C.sf==C.of)) goto L_10a4b6f5;
  /* 10a4b6df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b6e2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10a4b6e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4b6e7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10a4b6ed neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a4b6ef mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10a4b6f5:;
  /* 10a4b6f5 jmp 0x10a4b70e */
  goto L_10a4b70e;
L_10a4b6f7:;
  /* 10a4b6f7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10a4b6fd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4b700 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a4b704 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10a4b708 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10a4b70e:;
  /* 10a4b70e jmp 0x10a4c0c2 */
  goto L_10a4c0c2;
L_10a4b713:;
  /* 10a4b713 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10a4b71d jmp 0x10a4c0c2 */
  goto L_10a4c0c2;
L_10a4b722:;
  /* 10a4b722 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a4b726 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b729 jne 0x10a4b752 */
  if (!C.zf) goto L_10a4b752;
  /* 10a4b72b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10a4b72e push eax */
  push32((uint32_t)(EAX));
  /* 10a4b72f call 0x10a4c2f0 */
  push32(0x10a4b734u); f_10a4c2f0();
  /* 10a4b734 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b737 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10a4b73d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b744 jge 0x10a4b750 */
  if ((C.sf==C.of)) goto L_10a4b750;
  /* 10a4b746 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10a4b750:;
  /* 10a4b750 jmp 0x10a4b769 */
  goto L_10a4b769;
L_10a4b752:;
  /* 10a4b752 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10a4b758 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4b75b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a4b75f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10a4b763 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10a4b769:;
  /* 10a4b769 jmp 0x10a4c0c2 */
  goto L_10a4c0c2;
L_10a4b76e:;
  /* 10a4b76e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a4b772 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10a4b778 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10a4b77e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4b781 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10a4b787 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b78e ja 0x10a4b7fc */
  if ((!C.cf&&!C.zf)) goto L_10a4b7fc;
  /* 10a4b790 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10a4b796 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4b798 mov al, byte ptr [ecx + 0x10a4c131] */
  AL = (r8((uint32_t)(ECX + 0x10a4c131)));
  /* 10a4b79e jmp dword ptr [eax*4 + 0x10a4c11d] */
  switch (EAX) {
    case 0: goto L_10a4b7b0;
    case 1: goto L_10a4b7e9;
    case 2: goto L_10a4b7a5;
    case 3: goto L_10a4b7f3;
    case 4: goto L_10a4b7fc;
    default: x86_unimpl("switch@0x10a4b79e out of table"); return;
  }
L_10a4b7a5:;
  /* 10a4b7a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b7a8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4b7ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a4b7ae jmp 0x10a4b7fc */
  goto L_10a4b7fc;
L_10a4b7b0:;
  /* 10a4b7b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4b7b3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a4b7b6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b7b9 jne 0x10a4b7db */
  if (!C.zf) goto L_10a4b7db;
  /* 10a4b7bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4b7be movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10a4b7c2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b7c5 jne 0x10a4b7db */
  if (!C.zf) goto L_10a4b7db;
  /* 10a4b7c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4b7ca add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b7cd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10a4b7d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b7d3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10a4b7d6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a4b7d9 jmp 0x10a4b7e7 */
  goto L_10a4b7e7;
L_10a4b7db:;
  /* 10a4b7db mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10a4b7e2 jmp 0x10a4b570 */
  goto L_10a4b570;
L_10a4b7e7:;
  /* 10a4b7e7 jmp 0x10a4b7fc */
  goto L_10a4b7fc;
L_10a4b7e9:;
  /* 10a4b7e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b7ec or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10a4b7ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4b7f1 jmp 0x10a4b7fc */
  goto L_10a4b7fc;
L_10a4b7f3:;
  /* 10a4b7f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b7f6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10a4b7f9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a4b7fc:;
  /* 10a4b7fc jmp 0x10a4c0c2 */
  goto L_10a4c0c2;
L_10a4b801:;
  /* 10a4b801 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a4b805 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10a4b80b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10a4b811 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4b814 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10a4b81a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b821 ja 0x10a4bee7 */
  if ((!C.cf&&!C.zf)) goto L_10a4bee7;
  /* 10a4b827 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10a4b82d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4b82f mov cl, byte ptr [edx + 0x10a4c19c] */
  CL = (r8((uint32_t)(EDX + 0x10a4c19c)));
  /* 10a4b835 jmp dword ptr [ecx*4 + 0x10a4c160] */
  switch (ECX) {
    case 0: goto L_10a4b83c;
    case 1: goto L_10a4bad0;
    case 2: goto L_10a4b960;
    case 3: goto L_10a4bc09;
    case 4: goto L_10a4b8cb;
    case 5: goto L_10a4b851;
    case 6: goto L_10a4bbdb;
    case 7: goto L_10a4bae0;
    case 8: goto L_10a4ba85;
    case 9: goto L_10a4bc55;
    case 10: goto L_10a4bbff;
    case 11: goto L_10a4b976;
    case 12: goto L_10a4bbf3;
    case 13: goto L_10a4bc15;
    case 14: goto L_10a4bee7;
    default: x86_unimpl("switch@0x10a4b835 out of table"); return;
  }
L_10a4b83c:;
  /* 10a4b83c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b83f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4b844 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4b846 jne 0x10a4b851 */
  if (!C.zf) goto L_10a4b851;
  /* 10a4b848 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b84b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10a4b84e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a4b851:;
  /* 10a4b851 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b854 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4b85a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4b85c je 0x10a4b897 */
  if (C.zf) goto L_10a4b897;
  /* 10a4b85e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10a4b861 push eax */
  push32((uint32_t)(EAX));
  /* 10a4b862 call 0x10a4c330 */
  push32(0x10a4b867u); f_10a4c330();
  /* 10a4b867 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b86a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10a4b86e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10a4b872 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4b873 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10a4b879 push edx */
  push32((uint32_t)(EDX));
  /* 10a4b87a call 0x10a4d410 */
  push32(0x10a4b87fu); f_10a4d410();
  /* 10a4b87f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b882 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a4b885 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b889 jge 0x10a4b895 */
  if ((C.sf==C.of)) goto L_10a4b895;
  /* 10a4b88b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10a4b895:;
  /* 10a4b895 jmp 0x10a4b8bd */
  goto L_10a4b8bd;
L_10a4b897:;
  /* 10a4b897 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10a4b89a push eax */
  push32((uint32_t)(EAX));
  /* 10a4b89b call 0x10a4c2f0 */
  push32(0x10a4b8a0u); f_10a4c2f0();
  /* 10a4b8a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b8a3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10a4b8aa mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10a4b8b0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10a4b8b6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10a4b8bd:;
  /* 10a4b8bd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10a4b8c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a4b8c6 jmp 0x10a4bee7 */
  goto L_10a4bee7;
L_10a4b8cb:;
  /* 10a4b8cb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10a4b8ce push eax */
  push32((uint32_t)(EAX));
  /* 10a4b8cf call 0x10a4c2f0 */
  push32(0x10a4b8d4u); f_10a4c2f0();
  /* 10a4b8d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b8d7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10a4b8dd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b8e4 je 0x10a4b8f2 */
  if (C.zf) goto L_10a4b8f2;
  /* 10a4b8e6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10a4b8ec cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b8f0 jne 0x10a4b90c */
  if (!C.zf) goto L_10a4b90c;
L_10a4b8f2:;
  /* 10a4b8f2 mov edx, dword ptr [0x10a6efb0] */
  EDX = (r32((uint32_t)(0x10a6efb0)));
  /* 10a4b8f8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a4b8fb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4b8fe push eax */
  push32((uint32_t)(EAX));
  /* 10a4b8ff call 0x10a47350 */
  push32(0x10a4b904u); f_10a47350();
  /* 10a4b904 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b907 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a4b90a jmp 0x10a4b95b */
  goto L_10a4b95b;
L_10a4b90c:;
  /* 10a4b90c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b90f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4b915 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4b917 je 0x10a4b93c */
  if (C.zf) goto L_10a4b93c;
  /* 10a4b919 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10a4b91f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a4b922 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a4b925 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10a4b92b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10a4b92e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10a4b930 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10a4b933 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10a4b93a jmp 0x10a4b95b */
  goto L_10a4b95b;
L_10a4b93c:;
  /* 10a4b93c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10a4b943 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10a4b949 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a4b94c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a4b94f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10a4b955 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10a4b958 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a4b95b:;
  /* 10a4b95b jmp 0x10a4bee7 */
  goto L_10a4bee7;
L_10a4b960:;
  /* 10a4b960 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b963 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4b969 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4b96b jne 0x10a4b976 */
  if (!C.zf) goto L_10a4b976;
  /* 10a4b96d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b970 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10a4b973 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a4b976:;
  /* 10a4b976 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b97d jne 0x10a4b98b */
  if (!C.zf) goto L_10a4b98b;
  /* 10a4b97f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10a4b989 jmp 0x10a4b997 */
  goto L_10a4b997;
L_10a4b98b:;
  /* 10a4b98b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10a4b991 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10a4b997:;
  /* 10a4b997 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10a4b99d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10a4b9a3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10a4b9a6 push edx */
  push32((uint32_t)(EDX));
  /* 10a4b9a7 call 0x10a4c2f0 */
  push32(0x10a4b9acu); f_10a4c2f0();
  /* 10a4b9ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4b9af mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a4b9b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4b9b5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4b9ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4b9bc je 0x10a4ba26 */
  if (C.zf) goto L_10a4ba26;
  /* 10a4b9be cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4b9c2 jne 0x10a4b9cd */
  if (!C.zf) goto L_10a4b9cd;
  /* 10a4b9c4 mov ecx, dword ptr [0x10a6efb4] */
  ECX = (r32((uint32_t)(0x10a6efb4)));
  /* 10a4b9ca mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10a4b9cd:;
  /* 10a4b9cd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10a4b9d4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4b9d7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10a4b9dd:;
  /* 10a4b9dd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10a4b9e3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10a4b9e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4b9ec mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10a4b9f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4b9f4 je 0x10a4ba16 */
  if (C.zf) goto L_10a4ba16;
  /* 10a4b9f6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10a4b9fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4b9fe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10a4ba01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4ba03 je 0x10a4ba16 */
  if (C.zf) goto L_10a4ba16;
  /* 10a4ba05 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10a4ba0b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ba0e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10a4ba14 jmp 0x10a4b9dd */
  goto L_10a4b9dd;
L_10a4ba16:;
  /* 10a4ba16 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10a4ba1c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4ba1f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10a4ba21 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10a4ba24 jmp 0x10a4ba80 */
  goto L_10a4ba80;
L_10a4ba26:;
  /* 10a4ba26 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ba2a jne 0x10a4ba34 */
  if (!C.zf) goto L_10a4ba34;
  /* 10a4ba2c mov eax, dword ptr [0x10a6efb0] */
  EAX = (r32((uint32_t)(0x10a6efb0)));
  /* 10a4ba31 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10a4ba34:;
  /* 10a4ba34 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4ba37 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10a4ba3d:;
  /* 10a4ba3d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10a4ba43 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10a4ba49 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4ba4c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10a4ba52 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4ba54 je 0x10a4ba74 */
  if (C.zf) goto L_10a4ba74;
  /* 10a4ba56 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10a4ba5c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a4ba5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4ba61 je 0x10a4ba74 */
  if (C.zf) goto L_10a4ba74;
  /* 10a4ba63 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10a4ba69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ba6c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10a4ba72 jmp 0x10a4ba3d */
  goto L_10a4ba3d;
L_10a4ba74:;
  /* 10a4ba74 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10a4ba7a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4ba7d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10a4ba80:;
  /* 10a4ba80 jmp 0x10a4bee7 */
  goto L_10a4bee7;
L_10a4ba85:;
  /* 10a4ba85 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10a4ba88 push edx */
  push32((uint32_t)(EDX));
  /* 10a4ba89 call 0x10a4c2f0 */
  push32(0x10a4ba8eu); f_10a4c2f0();
  /* 10a4ba8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ba91 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10a4ba97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ba9a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4ba9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4ba9f je 0x10a4bab3 */
  if (C.zf) goto L_10a4bab3;
  /* 10a4baa1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10a4baa7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10a4baae mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10a4bab1 jmp 0x10a4bac1 */
  goto L_10a4bac1;
L_10a4bab3:;
  /* 10a4bab3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10a4bab9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10a4babf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10a4bac1:;
  /* 10a4bac1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10a4bacb jmp 0x10a4bee7 */
  goto L_10a4bee7;
L_10a4bad0:;
  /* 10a4bad0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10a4bad7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10a4bada add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a4badd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10a4bae0:;
  /* 10a4bae0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bae3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10a4bae5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4bae8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10a4baee mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a4baf1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4baf8 jge 0x10a4bb06 */
  if ((C.sf==C.of)) goto L_10a4bb06;
  /* 10a4bafa mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10a4bb04 jmp 0x10a4bb22 */
  goto L_10a4bb22;
L_10a4bb06:;
  /* 10a4bb06 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4bb0d jne 0x10a4bb22 */
  if (!C.zf) goto L_10a4bb22;
  /* 10a4bb0f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a4bb13 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4bb16 jne 0x10a4bb22 */
  if (!C.zf) goto L_10a4bb22;
  /* 10a4bb18 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10a4bb22:;
  /* 10a4bb22 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4bb25 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4bb28 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10a4bb2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4bb2e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4bb31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a4bb33 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a4bb36 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10a4bb3c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10a4bb42 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4bb45 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4bb46 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10a4bb4c push edx */
  push32((uint32_t)(EDX));
  /* 10a4bb4d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a4bb51 push eax */
  push32((uint32_t)(EAX));
  /* 10a4bb52 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4bb55 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4bb56 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10a4bb5c push edx */
  push32((uint32_t)(EDX));
  /* 10a4bb5d call dword ptr [0x10a6f3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a6f3a0))), 0x10a4bb63u);
  /* 10a4bb63 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4bb66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bb69 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4bb6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4bb70 je 0x10a4bb88 */
  if (C.zf) goto L_10a4bb88;
  /* 10a4bb72 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4bb79 jne 0x10a4bb88 */
  if (!C.zf) goto L_10a4bb88;
  /* 10a4bb7b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4bb7e push ecx */
  push32((uint32_t)(ECX));
  /* 10a4bb7f call dword ptr [0x10a6f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a6f3ac))), 0x10a4bb85u);
  /* 10a4bb85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4bb88:;
  /* 10a4bb88 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a4bb8c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4bb8f jne 0x10a4bbaa */
  if (!C.zf) goto L_10a4bbaa;
  /* 10a4bb91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bb94 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4bb99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4bb9b jne 0x10a4bbaa */
  if (!C.zf) goto L_10a4bbaa;
  /* 10a4bb9d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4bba0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4bba1 call dword ptr [0x10a6f3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a6f3a4))), 0x10a4bba7u);
  /* 10a4bba7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4bbaa:;
  /* 10a4bbaa mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4bbad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a4bbb0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4bbb3 jne 0x10a4bbc7 */
  if (!C.zf) goto L_10a4bbc7;
  /* 10a4bbb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bbb8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10a4bbbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a4bbbe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4bbc1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4bbc4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10a4bbc7:;
  /* 10a4bbc7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4bbca push eax */
  push32((uint32_t)(EAX));
  /* 10a4bbcb call 0x10a47350 */
  push32(0x10a4bbd0u); f_10a47350();
  /* 10a4bbd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4bbd3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a4bbd6 jmp 0x10a4bee7 */
  goto L_10a4bee7;
L_10a4bbdb:;
  /* 10a4bbdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bbde or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4bbe1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a4bbe4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10a4bbee jmp 0x10a4bc75 */
  goto L_10a4bc75;
L_10a4bbf3:;
  /* 10a4bbf3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10a4bbfd jmp 0x10a4bc75 */
  goto L_10a4bc75;
L_10a4bbff:;
  /* 10a4bbff mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10a4bc09:;
  /* 10a4bc09 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10a4bc13 jmp 0x10a4bc1f */
  goto L_10a4bc1f;
L_10a4bc15:;
  /* 10a4bc15 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10a4bc1f:;
  /* 10a4bc1f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10a4bc29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bc2c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4bc32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4bc34 je 0x10a4bc53 */
  if (C.zf) goto L_10a4bc53;
  /* 10a4bc36 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10a4bc3d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10a4bc43 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4bc46 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10a4bc4c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10a4bc53:;
  /* 10a4bc53 jmp 0x10a4bc75 */
  goto L_10a4bc75;
L_10a4bc55:;
  /* 10a4bc55 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10a4bc5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bc62 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4bc68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4bc6a je 0x10a4bc75 */
  if (C.zf) goto L_10a4bc75;
  /* 10a4bc6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bc6f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10a4bc72 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a4bc75:;
  /* 10a4bc75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bc78 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4bc7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4bc7f je 0x10a4bc9e */
  if (C.zf) goto L_10a4bc9e;
  /* 10a4bc81 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10a4bc84 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4bc85 call 0x10a4c310 */
  push32(0x10a4bc8au); f_10a4c310();
  /* 10a4bc8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4bc8d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10a4bc93 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10a4bc99 jmp 0x10a4bd2f */
  goto L_10a4bd2f;
L_10a4bc9e:;
  /* 10a4bc9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bca1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4bca4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4bca6 je 0x10a4bcf0 */
  if (C.zf) goto L_10a4bcf0;
  /* 10a4bca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bcab and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4bcae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4bcb0 je 0x10a4bcd0 */
  if (C.zf) goto L_10a4bcd0;
  /* 10a4bcb2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10a4bcb5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4bcb6 call 0x10a4c2f0 */
  push32(0x10a4bcbbu); f_10a4c2f0();
  /* 10a4bcbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4bcbe movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10a4bcc1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a4bcc2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10a4bcc8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10a4bcce jmp 0x10a4bcee */
  goto L_10a4bcee;
L_10a4bcd0:;
  /* 10a4bcd0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10a4bcd3 push edx */
  push32((uint32_t)(EDX));
  /* 10a4bcd4 call 0x10a4c2f0 */
  push32(0x10a4bcd9u); f_10a4c2f0();
  /* 10a4bcd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4bcdc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4bce1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a4bce2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10a4bce8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10a4bcee:;
  /* 10a4bcee jmp 0x10a4bd2f */
  goto L_10a4bd2f;
L_10a4bcf0:;
  /* 10a4bcf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bcf3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4bcf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4bcf8 je 0x10a4bd15 */
  if (C.zf) goto L_10a4bd15;
  /* 10a4bcfa lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10a4bcfd push ecx */
  push32((uint32_t)(ECX));
  /* 10a4bcfe call 0x10a4c2f0 */
  push32(0x10a4bd03u); f_10a4c2f0();
  /* 10a4bd03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4bd06 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a4bd07 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10a4bd0d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10a4bd13 jmp 0x10a4bd2f */
  goto L_10a4bd2f;
L_10a4bd15:;
  /* 10a4bd15 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10a4bd18 push edx */
  push32((uint32_t)(EDX));
  /* 10a4bd19 call 0x10a4c2f0 */
  push32(0x10a4bd1eu); f_10a4c2f0();
  /* 10a4bd1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4bd21 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4bd23 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10a4bd29 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10a4bd2f:;
  /* 10a4bd2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bd32 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4bd35 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4bd37 je 0x10a4bd77 */
  if (C.zf) goto L_10a4bd77;
  /* 10a4bd39 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4bd40 jg 0x10a4bd77 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a4bd77;
  /* 10a4bd42 jl 0x10a4bd4d */
  if ((C.sf!=C.of)) goto L_10a4bd4d;
  /* 10a4bd44 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4bd4b jae 0x10a4bd77 */
  if (!C.cf) goto L_10a4bd77;
L_10a4bd4d:;
  /* 10a4bd4d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10a4bd53 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a4bd55 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10a4bd5b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4bd5e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a4bd60 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10a4bd66 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10a4bd6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bd6f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10a4bd72 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a4bd75 jmp 0x10a4bd8f */
  goto L_10a4bd8f;
L_10a4bd77:;
  /* 10a4bd77 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10a4bd7d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10a4bd83 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10a4bd89 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10a4bd8f:;
  /* 10a4bd8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bd92 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4bd98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4bd9a jne 0x10a4bdb7 */
  if (!C.zf) goto L_10a4bdb7;
  /* 10a4bd9c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10a4bda2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10a4bda8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4bdab mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10a4bdb1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10a4bdb7:;
  /* 10a4bdb7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4bdbe jge 0x10a4bdcc */
  if ((C.sf==C.of)) goto L_10a4bdcc;
  /* 10a4bdc0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10a4bdca jmp 0x10a4bdd5 */
  goto L_10a4bdd5;
L_10a4bdcc:;
  /* 10a4bdcc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bdcf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4bdd2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a4bdd5:;
  /* 10a4bdd5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10a4bddb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10a4bde1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4bde3 jne 0x10a4bdec */
  if (!C.zf) goto L_10a4bdec;
  /* 10a4bde5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10a4bdec:;
  /* 10a4bdec lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10a4bdef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10a4bdf2:;
  /* 10a4bdf2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10a4bdf8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10a4bdfe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4be01 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10a4be07 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4be09 jg 0x10a4be1f */
  if ((!C.zf&&C.sf==C.of)) goto L_10a4be1f;
  /* 10a4be0b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10a4be11 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10a4be17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4be19 je 0x10a4bea0 */
  if (C.zf) goto L_10a4bea0;
L_10a4be1f:;
  /* 10a4be1f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10a4be25 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a4be26 push edx */
  push32((uint32_t)(EDX));
  /* 10a4be27 push eax */
  push32((uint32_t)(EAX));
  /* 10a4be28 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10a4be2e push edx */
  push32((uint32_t)(EDX));
  /* 10a4be2f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10a4be35 push eax */
  push32((uint32_t)(EAX));
  /* 10a4be36 call 0x10a4b1b0 */
  push32(0x10a4be3bu); f_10a4b1b0();
  /* 10a4be3b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4be3e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10a4be44 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10a4be4a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a4be4b push edx */
  push32((uint32_t)(EDX));
  /* 10a4be4c push eax */
  push32((uint32_t)(EAX));
  /* 10a4be4d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10a4be53 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4be54 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10a4be5a push edx */
  push32((uint32_t)(EDX));
  /* 10a4be5b call 0x10a4b140 */
  push32(0x10a4be60u); f_10a4b140();
  /* 10a4be60 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10a4be66 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10a4be6c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4be73 jle 0x10a4be87 */
  if ((C.zf||C.sf!=C.of)) goto L_10a4be87;
  /* 10a4be75 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10a4be7b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4be81 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10a4be87:;
  /* 10a4be87 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4be8a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10a4be90 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10a4be92 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4be95 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4be98 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a4be9b jmp 0x10a4bdf2 */
  goto L_10a4bdf2;
L_10a4bea0:;
  /* 10a4bea0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10a4bea3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4bea6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a4bea9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4beac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4beaf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a4beb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4beb5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4beba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4bebc je 0x10a4bee7 */
  if (C.zf) goto L_10a4bee7;
  /* 10a4bebe mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4bec1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a4bec4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4bec7 jne 0x10a4becf */
  if (!C.zf) goto L_10a4becf;
  /* 10a4bec9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4becd jne 0x10a4bee7 */
  if (!C.zf) goto L_10a4bee7;
L_10a4becf:;
  /* 10a4becf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4bed2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4bed5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a4bed8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4bedb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10a4bede mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4bee1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4bee4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10a4bee7:;
  /* 10a4bee7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4beee jne 0x10a4c0c2 */
  if (!C.zf) goto L_10a4c0c2;
  /* 10a4bef4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bef7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4befa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4befc je 0x10a4bf4d */
  if (C.zf) goto L_10a4bf4d;
  /* 10a4befe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bf01 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4bf07 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4bf09 je 0x10a4bf1b */
  if (C.zf) goto L_10a4bf1b;
  /* 10a4bf0b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10a4bf12 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10a4bf19 jmp 0x10a4bf4d */
  goto L_10a4bf4d;
L_10a4bf1b:;
  /* 10a4bf1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bf1e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4bf21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4bf23 je 0x10a4bf35 */
  if (C.zf) goto L_10a4bf35;
  /* 10a4bf25 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10a4bf2c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10a4bf33 jmp 0x10a4bf4d */
  goto L_10a4bf4d;
L_10a4bf35:;
  /* 10a4bf35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bf38 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4bf3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4bf3d je 0x10a4bf4d */
  if (C.zf) goto L_10a4bf4d;
  /* 10a4bf3f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10a4bf46 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10a4bf4d:;
  /* 10a4bf4d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10a4bf53 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4bf56 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4bf59 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10a4bf5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bf62 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4bf65 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4bf67 jne 0x10a4bf85 */
  if (!C.zf) goto L_10a4bf85;
  /* 10a4bf69 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10a4bf6f push eax */
  push32((uint32_t)(EAX));
  /* 10a4bf70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4bf73 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4bf74 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10a4bf7a push edx */
  push32((uint32_t)(EDX));
  /* 10a4bf7b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10a4bf7d call 0x10a4c260 */
  push32(0x10a4bf82u); f_10a4c260();
  /* 10a4bf82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4bf85:;
  /* 10a4bf85 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10a4bf8b push eax */
  push32((uint32_t)(EAX));
  /* 10a4bf8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4bf8f push ecx */
  push32((uint32_t)(ECX));
  /* 10a4bf90 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4bf93 push edx */
  push32((uint32_t)(EDX));
  /* 10a4bf94 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10a4bf9a push eax */
  push32((uint32_t)(EAX));
  /* 10a4bf9b call 0x10a4c2a0 */
  push32(0x10a4bfa0u); f_10a4c2a0();
  /* 10a4bfa0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4bfa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bfa6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4bfa9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4bfab je 0x10a4bfd3 */
  if (C.zf) goto L_10a4bfd3;
  /* 10a4bfad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4bfb0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4bfb3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4bfb5 jne 0x10a4bfd3 */
  if (!C.zf) goto L_10a4bfd3;
  /* 10a4bfb7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10a4bfbd push eax */
  push32((uint32_t)(EAX));
  /* 10a4bfbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4bfc1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4bfc2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10a4bfc8 push edx */
  push32((uint32_t)(EDX));
  /* 10a4bfc9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10a4bfcb call 0x10a4c260 */
  push32(0x10a4bfd0u); f_10a4c260();
  /* 10a4bfd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4bfd3:;
  /* 10a4bfd3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4bfd7 je 0x10a4c081 */
  if (C.zf) goto L_10a4c081;
  /* 10a4bfdd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4bfe1 jle 0x10a4c081 */
  if ((C.zf||C.sf!=C.of)) goto L_10a4c081;
  /* 10a4bfe7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4bfea mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10a4bff0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4bff3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10a4bff9:;
  /* 10a4bff9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10a4bfff mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10a4c005 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4c008 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10a4c00e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4c010 je 0x10a4c07f */
  if (C.zf) goto L_10a4c07f;
  /* 10a4c012 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10a4c018 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10a4c01b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10a4c022 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10a4c029 push eax */
  push32((uint32_t)(EAX));
  /* 10a4c02a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10a4c030 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4c031 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10a4c037 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c03a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10a4c040 call 0x10a4d410 */
  push32(0x10a4c045u); f_10a4d410();
  /* 10a4c045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c048 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10a4c04e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c055 jg 0x10a4c059 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a4c059;
  /* 10a4c057 jmp 0x10a4c07f */
  goto L_10a4c07f;
L_10a4c059:;
  /* 10a4c059 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10a4c05f push eax */
  push32((uint32_t)(EAX));
  /* 10a4c060 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c063 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4c064 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10a4c06a push edx */
  push32((uint32_t)(EDX));
  /* 10a4c06b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10a4c071 push eax */
  push32((uint32_t)(EAX));
  /* 10a4c072 call 0x10a4c2a0 */
  push32(0x10a4c077u); f_10a4c2a0();
  /* 10a4c077 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c07a jmp 0x10a4bff9 */
  goto L_10a4bff9;
L_10a4c07f:;
  /* 10a4c07f jmp 0x10a4c09c */
  goto L_10a4c09c;
L_10a4c081:;
  /* 10a4c081 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10a4c087 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4c088 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c08b push edx */
  push32((uint32_t)(EDX));
  /* 10a4c08c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4c08f push eax */
  push32((uint32_t)(EAX));
  /* 10a4c090 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4c093 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4c094 call 0x10a4c2a0 */
  push32(0x10a4c099u); f_10a4c2a0();
  /* 10a4c099 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4c09c:;
  /* 10a4c09c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4c09f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4c0a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4c0a4 je 0x10a4c0c2 */
  if (C.zf) goto L_10a4c0c2;
  /* 10a4c0a6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10a4c0ac push eax */
  push32((uint32_t)(EAX));
  /* 10a4c0ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c0b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4c0b1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10a4c0b7 push edx */
  push32((uint32_t)(EDX));
  /* 10a4c0b8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10a4c0ba call 0x10a4c260 */
  push32(0x10a4c0bfu); f_10a4c260();
  /* 10a4c0bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4c0c2:;
  /* 10a4c0c2 jmp 0x10a4b4d4 */
  goto L_10a4b4d4;
L_10a4c0c7:;
  /* 10a4c0c7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10a4c0cd pop edi */
  EDI = (pop32());
  /* 10a4c0ce pop esi */
  ESI = (pop32());
  /* 10a4c0cf pop ebx */
  EBX = (pop32());
  /* 10a4c0d0 mov esp, ebp */
  ESP = (EBP);
  /* 10a4c0d2 pop ebp */
  EBP = (pop32());
  /* 10a4c0d3 ret  */
  ESPCHK(0x10a4b4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1e0 @ 0x10a4c1e0 (119 bytes, 44 insns) */
void f_10a4c1e0(void) {
  FTRACE(0x10a4c1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4c1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4c1e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4c1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4c1e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4c1e7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a4c1ea sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4c1ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4c1f0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10a4c1f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4c1f6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c1fa jl 0x10a4c222 */
  if ((C.sf!=C.of)) goto L_10a4c222;
  /* 10a4c1fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4c1ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a4c201 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10a4c204 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10a4c206 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10a4c20a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4c210 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a4c213 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4c216 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a4c218 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c21b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4c21e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a4c220 jmp 0x10a4c235 */
  goto L_10a4c235;
L_10a4c222:;
  /* 10a4c222 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4c225 push edx */
  push32((uint32_t)(EDX));
  /* 10a4c226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c229 push eax */
  push32((uint32_t)(EAX));
  /* 10a4c22a call 0x10a4b230 */
  push32(0x10a4c22fu); f_10a4b230();
  /* 10a4c22f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c232 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a4c235:;
  /* 10a4c235 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c239 jne 0x10a4c246 */
  if (!C.zf) goto L_10a4c246;
  /* 10a4c23b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4c23e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10a4c244 jmp 0x10a4c253 */
  goto L_10a4c253;
L_10a4c246:;
  /* 10a4c246 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4c249 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a4c24b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c24e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4c251 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10a4c253:;
  /* 10a4c253 mov esp, ebp */
  ESP = (EBP);
  /* 10a4c255 pop ebp */
  EBP = (pop32());
  /* 10a4c256 ret  */
  ESPCHK(0x10a4c1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c260 @ 0x10a4c260 (53 bytes, 23 insns) */
void f_10a4c260(void) {
  FTRACE(0x10a4c260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4c260 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4c261 mov ebp, esp */
  EBP = (ESP);
L_10a4c263:;
  /* 10a4c263 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4c266 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4c269 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4c26c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10a4c26f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4c271 jle 0x10a4c293 */
  if ((C.zf||C.sf!=C.of)) goto L_10a4c293;
  /* 10a4c273 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a4c276 push edx */
  push32((uint32_t)(EDX));
  /* 10a4c277 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4c27a push eax */
  push32((uint32_t)(EAX));
  /* 10a4c27b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c27e push ecx */
  push32((uint32_t)(ECX));
  /* 10a4c27f call 0x10a4c1e0 */
  push32(0x10a4c284u); f_10a4c1e0();
  /* 10a4c284 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c287 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a4c28a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c28d jne 0x10a4c291 */
  if (!C.zf) goto L_10a4c291;
  /* 10a4c28f jmp 0x10a4c293 */
  goto L_10a4c293;
L_10a4c291:;
  /* 10a4c291 jmp 0x10a4c263 */
  goto L_10a4c263;
L_10a4c293:;
  /* 10a4c293 pop ebp */
  EBP = (pop32());
  /* 10a4c294 ret  */
  ESPCHK(0x10a4c260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2a0 @ 0x10a4c2a0 (74 bytes, 31 insns) */
void f_10a4c2a0(void) {
  FTRACE(0x10a4c2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4c2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4c2a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4c2a3 push ecx */
  push32((uint32_t)(ECX));
L_10a4c2a4:;
  /* 10a4c2a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4c2a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4c2aa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4c2ad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10a4c2b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4c2b2 jle 0x10a4c2e6 */
  if ((C.zf||C.sf!=C.of)) goto L_10a4c2e6;
  /* 10a4c2b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a4c2b7 push edx */
  push32((uint32_t)(EDX));
  /* 10a4c2b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4c2bb push eax */
  push32((uint32_t)(EAX));
  /* 10a4c2bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c2bf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a4c2c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a4c2c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4c2c8 push eax */
  push32((uint32_t)(EAX));
  /* 10a4c2c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c2cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c2cf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10a4c2d2 call 0x10a4c1e0 */
  push32(0x10a4c2d7u); f_10a4c1e0();
  /* 10a4c2d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c2da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a4c2dd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c2e0 jne 0x10a4c2e4 */
  if (!C.zf) goto L_10a4c2e4;
  /* 10a4c2e2 jmp 0x10a4c2e6 */
  goto L_10a4c2e6;
L_10a4c2e4:;
  /* 10a4c2e4 jmp 0x10a4c2a4 */
  goto L_10a4c2a4;
L_10a4c2e6:;
  /* 10a4c2e6 mov esp, ebp */
  ESP = (EBP);
  /* 10a4c2e8 pop ebp */
  EBP = (pop32());
  /* 10a4c2e9 ret  */
  ESPCHK(0x10a4c2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2f0 @ 0x10a4c2f0 (26 bytes, 12 insns) */
void f_10a4c2f0(void) {
  FTRACE(0x10a4c2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4c2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4c2f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4c2f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c2f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a4c2f8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c2fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c2fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a4c300 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c303 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a4c305 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10a4c308 pop ebp */
  EBP = (pop32());
  /* 10a4c309 ret  */
  ESPCHK(0x10a4c2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c310 @ 0x10a4c310 (31 bytes, 14 insns) */
void f_10a4c310(void) {
  FTRACE(0x10a4c310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4c310 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4c311 mov ebp, esp */
  EBP = (ESP);
  /* 10a4c313 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c316 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a4c318 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c31b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c31e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a4c320 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c323 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a4c325 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4c328 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10a4c32a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a4c32d pop ebp */
  EBP = (pop32());
  /* 10a4c32e ret  */
  ESPCHK(0x10a4c310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c330 @ 0x10a4c330 (27 bytes, 12 insns) */
void f_10a4c330(void) {
  FTRACE(0x10a4c330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4c330 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4c331 mov ebp, esp */
  EBP = (ESP);
  /* 10a4c333 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c336 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a4c338 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c33b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c33e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a4c340 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c343 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a4c345 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10a4c349 pop ebp */
  EBP = (pop32());
  /* 10a4c34a ret  */
  ESPCHK(0x10a4c330u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10a4c350 (145 bytes, 42 insns) */
void f_10a4c350(void) {
  FTRACE(0x10a4c350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4c350 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4c351 mov ebp, esp */
  EBP = (ESP);
  /* 10a4c353 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4c354 call 0x10a4c400 */
  push32(0x10a4c359u); f_10a4c400();
  /* 10a4c359 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c35c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a4c35e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a4c365 jmp 0x10a4c370 */
  goto L_10a4c370;
L_10a4c367:;
  /* 10a4c367 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4c36a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c36d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a4c370:;
  /* 10a4c370 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c374 jae 0x10a4c39a */
  if (!C.cf) goto L_10a4c39a;
  /* 10a4c376 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4c379 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c37c cmp ecx, dword ptr [eax*8 + 0x10a6efb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10a6efb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c383 jne 0x10a4c398 */
  if (!C.zf) goto L_10a4c398;
  /* 10a4c385 call 0x10a4c3f0 */
  push32(0x10a4c38au); f_10a4c3f0();
  /* 10a4c38a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4c38d mov ecx, dword ptr [edx*8 + 0x10a6efbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10a6efbc)));
  /* 10a4c394 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a4c396 jmp 0x10a4c3dd */
  goto L_10a4c3dd;
L_10a4c398:;
  /* 10a4c398 jmp 0x10a4c367 */
  goto L_10a4c367;
L_10a4c39a:;
  /* 10a4c39a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c39e jb 0x10a4c3b3 */
  if (C.cf) goto L_10a4c3b3;
  /* 10a4c3a0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c3a4 ja 0x10a4c3b3 */
  if ((!C.cf&&!C.zf)) goto L_10a4c3b3;
  /* 10a4c3a6 call 0x10a4c3f0 */
  push32(0x10a4c3abu); f_10a4c3f0();
  /* 10a4c3ab mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10a4c3b1 jmp 0x10a4c3dd */
  goto L_10a4c3dd;
L_10a4c3b3:;
  /* 10a4c3b3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c3ba jb 0x10a4c3d2 */
  if (C.cf) goto L_10a4c3d2;
  /* 10a4c3bc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c3c3 ja 0x10a4c3d2 */
  if ((!C.cf&&!C.zf)) goto L_10a4c3d2;
  /* 10a4c3c5 call 0x10a4c3f0 */
  push32(0x10a4c3cau); f_10a4c3f0();
  /* 10a4c3ca mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10a4c3d0 jmp 0x10a4c3dd */
  goto L_10a4c3dd;
L_10a4c3d2:;
  /* 10a4c3d2 call 0x10a4c3f0 */
  push32(0x10a4c3d7u); f_10a4c3f0();
  /* 10a4c3d7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10a4c3dd:;
  /* 10a4c3dd mov esp, ebp */
  ESP = (EBP);
  /* 10a4c3df pop ebp */
  EBP = (pop32());
  /* 10a4c3e0 ret  */
  ESPCHK(0x10a4c350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3f0 @ 0x10a4c3f0 (13 bytes, 6 insns) */
void f_10a4c3f0(void) {
  FTRACE(0x10a4c3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4c3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4c3f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4c3f3 call 0x10a43f60 */
  push32(0x10a4c3f8u); f_10a43f60();
  /* 10a4c3f8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c3fb pop ebp */
  EBP = (pop32());
  /* 10a4c3fc ret  */
  ESPCHK(0x10a4c3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c400 @ 0x10a4c400 (13 bytes, 6 insns) */
void f_10a4c400(void) {
  FTRACE(0x10a4c400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4c400 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4c401 mov ebp, esp */
  EBP = (ESP);
  /* 10a4c403 call 0x10a43f60 */
  push32(0x10a4c408u); f_10a43f60();
  /* 10a4c408 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c40b pop ebp */
  EBP = (pop32());
  /* 10a4c40c ret  */
  ESPCHK(0x10a4c400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c410 @ 0x10a4c410 (664 bytes, 261 insns) [15 switch table(s)] */
void f_10a4c410(void) {
  FTRACE(0x10a4c410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4c410 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4c411 mov ebp, esp */
  EBP = (ESP);
  /* 10a4c413 push edi */
  push32((uint32_t)(EDI));
  /* 10a4c414 push esi */
  push32((uint32_t)(ESI));
  /* 10a4c415 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4c418 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4c41b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c41e mov eax, ecx */
  EAX = (ECX);
  /* 10a4c420 mov edx, ecx */
  EDX = (ECX);
  /* 10a4c422 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c424 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c426 jbe 0x10a4c430 */
  if ((C.cf||C.zf)) goto L_10a4c430;
  /* 10a4c428 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c42a jb 0x10a4c5a8 */
  if (C.cf) goto L_10a4c5a8;
L_10a4c430:;
  /* 10a4c430 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10a4c436 jne 0x10a4c44c */
  if (!C.zf) goto L_10a4c44c;
  /* 10a4c438 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a4c43b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4c43e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c441 jb 0x10a4c46c */
  if (C.cf) goto L_10a4c46c;
  /* 10a4c443 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a4c445 jmp dword ptr [edx*4 + 0x10a4c558] */
  switch (EDX) {
    case 0: goto L_10a4c568;
    case 1: goto L_10a4c570;
    case 2: goto L_10a4c57c;
    case 3: goto L_10a4c590;
    default: x86_unimpl("switch@0x10a4c445 out of table"); return;
  }
L_10a4c44c:;
  /* 10a4c44c mov eax, edi */
  EAX = (EDI);
  /* 10a4c44e mov edx, 3 */
  EDX = (0x3u);
  /* 10a4c453 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4c456 jb 0x10a4c464 */
  if (C.cf) goto L_10a4c464;
  /* 10a4c458 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4c45b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c45d jmp dword ptr [eax*4 + 0x10a4c470] */
  switch (EAX) {
    case 1: goto L_10a4c480;
    case 2: goto L_10a4c4ac;
    case 3: goto L_10a4c4d0;
    default: x86_unimpl("switch@0x10a4c45d out of table"); return;
  }
L_10a4c464:;
  /* 10a4c464 jmp dword ptr [ecx*4 + 0x10a4c568] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10a4c568)))); return;
  /* 10a4c46b nop  */
  /* nop */
L_10a4c46c:;
  /* 10a4c46c jmp dword ptr [ecx*4 + 0x10a4c4ec] */
  switch (ECX) {
    case 0: goto L_10a4c54f;
    case 1: goto L_10a4c53c;
    case 2: goto L_10a4c534;
    case 3: goto L_10a4c52c;
    case 4: goto L_10a4c524;
    case 5: goto L_10a4c51c;
    case 6: goto L_10a4c514;
    case 7: goto L_10a4c50c;
    default: x86_unimpl("switch@0x10a4c46c out of table"); return;
  }
  /* 10a4c473 nop  */
  /* nop */
L_10a4c480:;
  /* 10a4c480 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4c482 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a4c484 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a4c486 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a4c489 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a4c48c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a4c48f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a4c492 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a4c495 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c498 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c49b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c49e jb 0x10a4c46c */
  if (C.cf) goto L_10a4c46c;
  /* 10a4c4a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a4c4a2 jmp dword ptr [edx*4 + 0x10a4c558] */
  switch (EDX) {
    case 0: goto L_10a4c568;
    case 1: goto L_10a4c570;
    case 2: goto L_10a4c57c;
    case 3: goto L_10a4c590;
    default: x86_unimpl("switch@0x10a4c4a2 out of table"); return;
  }
  /* 10a4c4a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a4c4ac:;
  /* 10a4c4ac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4c4ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a4c4b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a4c4b2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a4c4b5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a4c4b8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a4c4bb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c4be add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c4c1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c4c4 jb 0x10a4c46c */
  if (C.cf) goto L_10a4c46c;
  /* 10a4c4c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a4c4c8 jmp dword ptr [edx*4 + 0x10a4c558] */
  switch (EDX) {
    case 0: goto L_10a4c568;
    case 1: goto L_10a4c570;
    case 2: goto L_10a4c57c;
    case 3: goto L_10a4c590;
    default: x86_unimpl("switch@0x10a4c4c8 out of table"); return;
  }
  /* 10a4c4cf nop  */
  /* nop */
L_10a4c4d0:;
  /* 10a4c4d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4c4d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a4c4d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a4c4d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a4c4d7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a4c4da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a4c4db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c4de jb 0x10a4c46c */
  if (C.cf) goto L_10a4c46c;
  /* 10a4c4e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a4c4e2 jmp dword ptr [edx*4 + 0x10a4c558] */
  switch (EDX) {
    case 0: goto L_10a4c568;
    case 1: goto L_10a4c570;
    case 2: goto L_10a4c57c;
    case 3: goto L_10a4c590;
    default: x86_unimpl("switch@0x10a4c4e2 out of table"); return;
  }
  /* 10a4c4e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a4c50c:;
  /* 10a4c50c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10a4c510 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10a4c514:;
  /* 10a4c514 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10a4c518 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10a4c51c:;
  /* 10a4c51c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10a4c520 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10a4c524:;
  /* 10a4c524 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10a4c528 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10a4c52c:;
  /* 10a4c52c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10a4c530 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10a4c534:;
  /* 10a4c534 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10a4c538 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10a4c53c:;
  /* 10a4c53c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10a4c540 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10a4c544 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10a4c54b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c54d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10a4c54f:;
  /* 10a4c54f jmp dword ptr [edx*4 + 0x10a4c558] */
  switch (EDX) {
    case 0: goto L_10a4c568;
    case 1: goto L_10a4c570;
    case 2: goto L_10a4c57c;
    case 3: goto L_10a4c590;
    default: x86_unimpl("switch@0x10a4c54f out of table"); return;
  }
  /* 10a4c556 mov edi, edi */
  EDI = (EDI);
L_10a4c568:;
  /* 10a4c568 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c56b pop esi */
  ESI = (pop32());
  /* 10a4c56c pop edi */
  EDI = (pop32());
  /* 10a4c56d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a4c56e ret  */
  ESPCHK(0x10a4c410u, _esp0);
  ESP += 4; return;
  /* 10a4c56f nop  */
  /* nop */
L_10a4c570:;
  /* 10a4c570 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a4c572 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a4c574 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c577 pop esi */
  ESI = (pop32());
  /* 10a4c578 pop edi */
  EDI = (pop32());
  /* 10a4c579 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a4c57a ret  */
  ESPCHK(0x10a4c410u, _esp0);
  ESP += 4; return;
  /* 10a4c57b nop  */
  /* nop */
L_10a4c57c:;
  /* 10a4c57c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a4c57e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a4c580 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a4c583 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a4c586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c589 pop esi */
  ESI = (pop32());
  /* 10a4c58a pop edi */
  EDI = (pop32());
  /* 10a4c58b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a4c58c ret  */
  ESPCHK(0x10a4c410u, _esp0);
  ESP += 4; return;
  /* 10a4c58d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a4c590:;
  /* 10a4c590 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a4c592 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a4c594 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a4c597 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a4c59a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a4c59d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a4c5a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c5a3 pop esi */
  ESI = (pop32());
  /* 10a4c5a4 pop edi */
  EDI = (pop32());
  /* 10a4c5a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a4c5a6 ret  */
  ESPCHK(0x10a4c410u, _esp0);
  ESP += 4; return;
  /* 10a4c5a7 nop  */
  /* nop */
L_10a4c5a8:;
  /* 10a4c5a8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10a4c5ac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10a4c5b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10a4c5b6 jne 0x10a4c5dc */
  if (!C.zf) goto L_10a4c5dc;
  /* 10a4c5b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a4c5bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4c5be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c5c1 jb 0x10a4c5d0 */
  if (C.cf) goto L_10a4c5d0;
  /* 10a4c5c3 std  */
  C.df=1;
  /* 10a4c5c4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a4c5c6 cld  */
  C.df=0;
  /* 10a4c5c7 jmp dword ptr [edx*4 + 0x10a4c6f0] */
  switch (EDX) {
    case 0: goto L_10a4c700;
    case 1: goto L_10a4c708;
    case 2: goto L_10a4c718;
    case 3: goto L_10a4c72c;
    default: x86_unimpl("switch@0x10a4c5c7 out of table"); return;
  }
  /* 10a4c5ce mov edi, edi */
  EDI = (EDI);
L_10a4c5d0:;
  /* 10a4c5d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a4c5d2 jmp dword ptr [ecx*4 + 0x10a4c6a0] */
  switch (ECX) {
    case 0: goto L_10a4c6e7;
    default: x86_unimpl("switch@0x10a4c5d2 out of table"); return;
  }
  /* 10a4c5d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a4c5dc:;
  /* 10a4c5dc mov eax, edi */
  EAX = (EDI);
  /* 10a4c5de mov edx, 3 */
  EDX = (0x3u);
  /* 10a4c5e3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c5e6 jb 0x10a4c5f4 */
  if (C.cf) goto L_10a4c5f4;
  /* 10a4c5e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4c5eb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4c5ed jmp dword ptr [eax*4 + 0x10a4c5f8] */
  switch (EAX) {
    case 1: goto L_10a4c608;
    case 2: goto L_10a4c628;
    case 3: goto L_10a4c650;
    default: x86_unimpl("switch@0x10a4c5ed out of table"); return;
  }
L_10a4c5f4:;
  /* 10a4c5f4 jmp dword ptr [ecx*4 + 0x10a4c6f0] */
  switch (ECX) {
    case 0: goto L_10a4c700;
    case 1: goto L_10a4c708;
    case 2: goto L_10a4c718;
    case 3: goto L_10a4c72c;
    default: x86_unimpl("switch@0x10a4c5f4 out of table"); return;
  }
  /* 10a4c5fb nop  */
  /* nop */
L_10a4c608:;
  /* 10a4c608 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a4c60b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4c60d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a4c610 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10a4c611 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a4c614 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10a4c615 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c618 jb 0x10a4c5d0 */
  if (C.cf) goto L_10a4c5d0;
  /* 10a4c61a std  */
  C.df=1;
  /* 10a4c61b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a4c61d cld  */
  C.df=0;
  /* 10a4c61e jmp dword ptr [edx*4 + 0x10a4c6f0] */
  switch (EDX) {
    case 0: goto L_10a4c700;
    case 1: goto L_10a4c708;
    case 2: goto L_10a4c718;
    case 3: goto L_10a4c72c;
    default: x86_unimpl("switch@0x10a4c61e out of table"); return;
  }
  /* 10a4c625 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a4c628:;
  /* 10a4c628 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a4c62b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4c62d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a4c630 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a4c633 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a4c636 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a4c639 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4c63c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4c63f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c642 jb 0x10a4c5d0 */
  if (C.cf) goto L_10a4c5d0;
  /* 10a4c644 std  */
  C.df=1;
  /* 10a4c645 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a4c647 cld  */
  C.df=0;
  /* 10a4c648 jmp dword ptr [edx*4 + 0x10a4c6f0] */
  switch (EDX) {
    case 0: goto L_10a4c700;
    case 1: goto L_10a4c708;
    case 2: goto L_10a4c718;
    case 3: goto L_10a4c72c;
    default: x86_unimpl("switch@0x10a4c648 out of table"); return;
  }
  /* 10a4c64f nop  */
  /* nop */
L_10a4c650:;
  /* 10a4c650 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a4c653 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4c655 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a4c658 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a4c65b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a4c65e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a4c661 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a4c664 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a4c667 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4c66a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4c66d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c670 jb 0x10a4c5d0 */
  if (C.cf) goto L_10a4c5d0;
  /* 10a4c676 std  */
  C.df=1;
  /* 10a4c677 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a4c679 cld  */
  C.df=0;
  /* 10a4c67a jmp dword ptr [edx*4 + 0x10a4c6f0] */
  switch (EDX) {
    case 0: goto L_10a4c700;
    case 1: goto L_10a4c708;
    case 2: goto L_10a4c718;
    case 3: goto L_10a4c72c;
    default: x86_unimpl("switch@0x10a4c67a out of table"); return;
  }
  /* 10a4c681 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10a4c684 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10a4c686 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10a4c687 adc byte ptr [esi + eax*8 - 0x394bef5c], ch */
  { uint32_t _a=(r8((uint32_t)(ESI + EAX*8 + -0x394bef5c))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESI + EAX*8 + -0x394bef5c), (_r)); fl_add(_a,_b,_r,8); }
  /* 10a4c68e movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10a4c68f adc byte ptr [esi + eax*8 - 0x393bef5c], bh */
  { uint32_t _a=(r8((uint32_t)(ESI + EAX*8 + -0x393bef5c))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESI + EAX*8 + -0x393bef5c), (_r)); fl_add(_a,_b,_r,8); }
  /* 10a4c696 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10a4c697 adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10a4c69a movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10a4c69b adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10a4c69e movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10a4c6a4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10a4c6a8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10a4c6ac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10a4c6b0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10a4c6b4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10a4c6b8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10a4c6bc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10a4c6c0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10a4c6c4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10a4c6c8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10a4c6cc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10a4c6d0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10a4c6d4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10a4c6d8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10a4c6dc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10a4c6e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c6e5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10a4c6e7:;
  /* 10a4c6e7 jmp dword ptr [edx*4 + 0x10a4c6f0] */
  switch (EDX) {
    case 0: goto L_10a4c700;
    case 1: goto L_10a4c708;
    case 2: goto L_10a4c718;
    case 3: goto L_10a4c72c;
    default: x86_unimpl("switch@0x10a4c6e7 out of table"); return;
  }
  /* 10a4c6ee mov edi, edi */
  EDI = (EDI);
L_10a4c700:;
  /* 10a4c700 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c703 pop esi */
  ESI = (pop32());
  /* 10a4c704 pop edi */
  EDI = (pop32());
  /* 10a4c705 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a4c706 ret  */
  ESPCHK(0x10a4c410u, _esp0);
  ESP += 4; return;
  /* 10a4c707 nop  */
  /* nop */
L_10a4c708:;
  /* 10a4c708 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a4c70b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a4c70e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c711 pop esi */
  ESI = (pop32());
  /* 10a4c712 pop edi */
  EDI = (pop32());
  /* 10a4c713 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a4c714 ret  */
  ESPCHK(0x10a4c410u, _esp0);
  ESP += 4; return;
  /* 10a4c715 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a4c718:;
  /* 10a4c718 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a4c71b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a4c71e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a4c721 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a4c724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c727 pop esi */
  ESI = (pop32());
  /* 10a4c728 pop edi */
  EDI = (pop32());
  /* 10a4c729 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a4c72a ret  */
  ESPCHK(0x10a4c410u, _esp0);
  ESP += 4; return;
  /* 10a4c72b nop  */
  /* nop */
L_10a4c72c:;
  /* 10a4c72c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a4c72f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a4c732 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a4c735 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a4c738 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a4c73b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a4c73e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c741 pop esi */
  ESI = (pop32());
  /* 10a4c742 pop edi */
  EDI = (pop32());
  /* 10a4c743 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a4c744 ret  */
  ESPCHK(0x10a4c410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c750 @ 0x10a4c750 (421 bytes, 148 insns) */
void f_10a4c750(void) {
  FTRACE(0x10a4c750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4c750 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4c751 mov ebp, esp */
  EBP = (ESP);
  /* 10a4c753 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a4c755 push 0x10a6c548 */
  push32((uint32_t)(0x10a6c548u));
  /* 10a4c75a push 0x10a4d628 */
  push32((uint32_t)(0x10a4d628u));
  /* 10a4c75f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10a4c765 push eax */
  push32((uint32_t)(EAX));
  /* 10a4c766 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10a4c76d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c770 push ebx */
  push32((uint32_t)(EBX));
  /* 10a4c771 push esi */
  push32((uint32_t)(ESI));
  /* 10a4c772 push edi */
  push32((uint32_t)(EDI));
  /* 10a4c773 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a4c776 cmp dword ptr [0x10a707f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a707f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c77d jne 0x10a4c7ce */
  if (!C.zf) goto L_10a4c7ce;
  /* 10a4c77f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10a4c782 push eax */
  push32((uint32_t)(EAX));
  /* 10a4c783 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4c785 push 0x10a6c544 */
  push32((uint32_t)(0x10a6c544u));
  /* 10a4c78a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4c78c call dword ptr [0x10a732bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732bc))), 0x10a4c792u);
  /* 10a4c792 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4c794 je 0x10a4c7a2 */
  if (C.zf) goto L_10a4c7a2;
  /* 10a4c796 mov dword ptr [0x10a707f4], 1 */
  w32((uint32_t)(0x10a707f4), (0x1u));
  /* 10a4c7a0 jmp 0x10a4c7ce */
  goto L_10a4c7ce;
L_10a4c7a2:;
  /* 10a4c7a2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10a4c7a5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4c7a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4c7a8 push 0x10a6c540 */
  push32((uint32_t)(0x10a6c540u));
  /* 10a4c7ad push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4c7af push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4c7b1 call dword ptr [0x10a732cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732cc))), 0x10a4c7b7u);
  /* 10a4c7b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4c7b9 je 0x10a4c7c7 */
  if (C.zf) goto L_10a4c7c7;
  /* 10a4c7bb mov dword ptr [0x10a707f4], 2 */
  w32((uint32_t)(0x10a707f4), (0x2u));
  /* 10a4c7c5 jmp 0x10a4c7ce */
  goto L_10a4c7ce;
L_10a4c7c7:;
  /* 10a4c7c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4c7c9 jmp 0x10a4c8f8 */
  goto L_10a4c8f8;
L_10a4c7ce:;
  /* 10a4c7ce cmp dword ptr [0x10a707f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10a707f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c7d5 jne 0x10a4c805 */
  if (!C.zf) goto L_10a4c805;
  /* 10a4c7d7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c7db jne 0x10a4c7e6 */
  if (!C.zf) goto L_10a4c7e6;
  /* 10a4c7dd mov edx, dword ptr [0x10a70800] */
  EDX = (r32((uint32_t)(0x10a70800)));
  /* 10a4c7e3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10a4c7e6:;
  /* 10a4c7e6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a4c7e9 push eax */
  push32((uint32_t)(EAX));
  /* 10a4c7ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4c7ed push ecx */
  push32((uint32_t)(ECX));
  /* 10a4c7ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4c7f1 push edx */
  push32((uint32_t)(EDX));
  /* 10a4c7f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c7f5 push eax */
  push32((uint32_t)(EAX));
  /* 10a4c7f6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a4c7f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4c7fa call dword ptr [0x10a732cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732cc))), 0x10a4c800u);
  /* 10a4c800 jmp 0x10a4c8f8 */
  goto L_10a4c8f8;
L_10a4c805:;
  /* 10a4c805 cmp dword ptr [0x10a707f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a707f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c80c jne 0x10a4c8f6 */
  if (!C.zf) goto L_10a4c8f6;
  /* 10a4c812 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c816 jne 0x10a4c821 */
  if (!C.zf) goto L_10a4c821;
  /* 10a4c818 mov edx, dword ptr [0x10a70810] */
  EDX = (r32((uint32_t)(0x10a70810)));
  /* 10a4c81e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10a4c821:;
  /* 10a4c821 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4c823 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4c825 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4c828 push eax */
  push32((uint32_t)(EAX));
  /* 10a4c829 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4c82c push ecx */
  push32((uint32_t)(ECX));
  /* 10a4c82d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a4c830 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a4c832 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4c834 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4c837 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c83a push edx */
  push32((uint32_t)(EDX));
  /* 10a4c83b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a4c83e push eax */
  push32((uint32_t)(EAX));
  /* 10a4c83f call dword ptr [0x10a732c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732c4))), 0x10a4c845u);
  /* 10a4c845 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a4c848 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c84c jne 0x10a4c855 */
  if (!C.zf) goto L_10a4c855;
  /* 10a4c84e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4c850 jmp 0x10a4c8f8 */
  goto L_10a4c8f8;
L_10a4c855:;
  /* 10a4c855 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a4c85c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4c85f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a4c861 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c864 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a4c866 call 0x10a476c0 */
  push32(0x10a4c86bu); f_10a476c0();
  /* 10a4c86b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10a4c86e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a4c871 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a4c874 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a4c877 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4c87a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10a4c87c push edx */
  push32((uint32_t)(EDX));
  /* 10a4c87d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4c87f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4c882 push eax */
  push32((uint32_t)(EAX));
  /* 10a4c883 call 0x10a48290 */
  push32(0x10a4c888u); f_10a48290();
  /* 10a4c888 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c88b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a4c892 jmp 0x10a4c8ab */
  goto L_10a4c8ab;
  /* 10a4c894 mov eax, 1 */
  EAX = (0x1u);
  /* 10a4c899 ret  */
  ESPCHK(0x10a4c750u, _esp0);
  ESP += 4; return;
  /* 10a4c89a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4c89d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a4c8a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a4c8ab:;
  /* 10a4c8ab cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c8af jne 0x10a4c8b5 */
  if (!C.zf) goto L_10a4c8b5;
  /* 10a4c8b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4c8b3 jmp 0x10a4c8f8 */
  goto L_10a4c8f8;
L_10a4c8b5:;
  /* 10a4c8b5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4c8b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4c8b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4c8bc push edx */
  push32((uint32_t)(EDX));
  /* 10a4c8bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4c8c0 push eax */
  push32((uint32_t)(EAX));
  /* 10a4c8c1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4c8c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4c8c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4c8c7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a4c8ca push edx */
  push32((uint32_t)(EDX));
  /* 10a4c8cb call dword ptr [0x10a732c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732c4))), 0x10a4c8d1u);
  /* 10a4c8d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a4c8d4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c8d8 jne 0x10a4c8de */
  if (!C.zf) goto L_10a4c8de;
  /* 10a4c8da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4c8dc jmp 0x10a4c8f8 */
  goto L_10a4c8f8;
L_10a4c8de:;
  /* 10a4c8de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a4c8e1 push eax */
  push32((uint32_t)(EAX));
  /* 10a4c8e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a4c8e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4c8e6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4c8e9 push edx */
  push32((uint32_t)(EDX));
  /* 10a4c8ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c8ed push eax */
  push32((uint32_t)(EAX));
  /* 10a4c8ee call dword ptr [0x10a732bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732bc))), 0x10a4c8f4u);
  /* 10a4c8f4 jmp 0x10a4c8f8 */
  goto L_10a4c8f8;
L_10a4c8f6:;
  /* 10a4c8f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a4c8f8:;
  /* 10a4c8f8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10a4c8fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4c8fe mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10a4c905 pop edi */
  EDI = (pop32());
  /* 10a4c906 pop esi */
  ESI = (pop32());
  /* 10a4c907 pop ebx */
  EBX = (pop32());
  /* 10a4c908 mov esp, ebp */
  ESP = (EBP);
  /* 10a4c90a pop ebp */
  EBP = (pop32());
  /* 10a4c90b ret  */
  ESPCHK(0x10a4c750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c910 @ 0x10a4c910 (727 bytes, 263 insns) */
void f_10a4c910(void) {
  FTRACE(0x10a4c910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4c910 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4c911 mov ebp, esp */
  EBP = (ESP);
  /* 10a4c913 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a4c915 push 0x10a6c558 */
  push32((uint32_t)(0x10a6c558u));
  /* 10a4c91a push 0x10a4d628 */
  push32((uint32_t)(0x10a4d628u));
  /* 10a4c91f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10a4c925 push eax */
  push32((uint32_t)(EAX));
  /* 10a4c926 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10a4c92d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c930 push ebx */
  push32((uint32_t)(EBX));
  /* 10a4c931 push esi */
  push32((uint32_t)(ESI));
  /* 10a4c932 push edi */
  push32((uint32_t)(EDI));
  /* 10a4c933 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a4c936 cmp dword ptr [0x10a70818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c93d jne 0x10a4c996 */
  if (!C.zf) goto L_10a4c996;
  /* 10a4c93f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4c941 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4c943 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4c945 push 0x10a6c544 */
  push32((uint32_t)(0x10a6c544u));
  /* 10a4c94a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a4c94f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4c951 call dword ptr [0x10a732c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732c0))), 0x10a4c957u);
  /* 10a4c957 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4c959 je 0x10a4c967 */
  if (C.zf) goto L_10a4c967;
  /* 10a4c95b mov dword ptr [0x10a70818], 1 */
  w32((uint32_t)(0x10a70818), (0x1u));
  /* 10a4c965 jmp 0x10a4c996 */
  goto L_10a4c996;
L_10a4c967:;
  /* 10a4c967 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4c969 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4c96b push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4c96d push 0x10a6c540 */
  push32((uint32_t)(0x10a6c540u));
  /* 10a4c972 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a4c977 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4c979 call dword ptr [0x10a732b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732b8))), 0x10a4c97fu);
  /* 10a4c97f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4c981 je 0x10a4c98f */
  if (C.zf) goto L_10a4c98f;
  /* 10a4c983 mov dword ptr [0x10a70818], 2 */
  w32((uint32_t)(0x10a70818), (0x2u));
  /* 10a4c98d jmp 0x10a4c996 */
  goto L_10a4c996;
L_10a4c98f:;
  /* 10a4c98f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4c991 jmp 0x10a4cc01 */
  goto L_10a4cc01;
L_10a4c996:;
  /* 10a4c996 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c99a jle 0x10a4c9af */
  if ((C.zf||C.sf!=C.of)) goto L_10a4c9af;
  /* 10a4c99c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a4c99f push eax */
  push32((uint32_t)(EAX));
  /* 10a4c9a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4c9a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4c9a4 call 0x10a4cc20 */
  push32(0x10a4c9a9u); f_10a4cc20();
  /* 10a4c9a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4c9ac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10a4c9af:;
  /* 10a4c9af cmp dword ptr [0x10a70818], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10a70818))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c9b6 jne 0x10a4c9db */
  if (!C.zf) goto L_10a4c9db;
  /* 10a4c9b8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a4c9bb push edx */
  push32((uint32_t)(EDX));
  /* 10a4c9bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a4c9bf push eax */
  push32((uint32_t)(EAX));
  /* 10a4c9c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a4c9c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4c9c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4c9c7 push edx */
  push32((uint32_t)(EDX));
  /* 10a4c9c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4c9cb push eax */
  push32((uint32_t)(EAX));
  /* 10a4c9cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4c9cf push ecx */
  push32((uint32_t)(ECX));
  /* 10a4c9d0 call dword ptr [0x10a732b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732b8))), 0x10a4c9d6u);
  /* 10a4c9d6 jmp 0x10a4cc01 */
  goto L_10a4cc01;
L_10a4c9db:;
  /* 10a4c9db cmp dword ptr [0x10a70818], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a70818))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c9e2 jne 0x10a4cbff */
  if (!C.zf) goto L_10a4cbff;
  /* 10a4c9e8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4c9ec jne 0x10a4c9f7 */
  if (!C.zf) goto L_10a4c9f7;
  /* 10a4c9ee mov edx, dword ptr [0x10a70810] */
  EDX = (r32((uint32_t)(0x10a70810)));
  /* 10a4c9f4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10a4c9f7:;
  /* 10a4c9f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4c9f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4c9fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a4c9fe push eax */
  push32((uint32_t)(EAX));
  /* 10a4c9ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4ca02 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ca03 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10a4ca06 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a4ca08 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4ca0a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4ca0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ca10 push edx */
  push32((uint32_t)(EDX));
  /* 10a4ca11 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a4ca14 push eax */
  push32((uint32_t)(EAX));
  /* 10a4ca15 call dword ptr [0x10a732c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732c4))), 0x10a4ca1bu);
  /* 10a4ca1b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a4ca1e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ca22 jne 0x10a4ca2b */
  if (!C.zf) goto L_10a4ca2b;
  /* 10a4ca24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4ca26 jmp 0x10a4cc01 */
  goto L_10a4cc01;
L_10a4ca2b:;
  /* 10a4ca2b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a4ca32 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a4ca35 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a4ca37 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ca3a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a4ca3c call 0x10a476c0 */
  push32(0x10a4ca41u); f_10a476c0();
  /* 10a4ca41 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10a4ca44 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a4ca47 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a4ca4a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a4ca4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a4ca54 jmp 0x10a4ca6d */
  goto L_10a4ca6d;
  /* 10a4ca56 mov eax, 1 */
  EAX = (0x1u);
  /* 10a4ca5b ret  */
  ESPCHK(0x10a4c910u, _esp0);
  ESP += 4; return;
  /* 10a4ca5c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4ca5f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a4ca66 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a4ca6d:;
  /* 10a4ca6d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ca71 jne 0x10a4ca7a */
  if (!C.zf) goto L_10a4ca7a;
  /* 10a4ca73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4ca75 jmp 0x10a4cc01 */
  goto L_10a4cc01;
L_10a4ca7a:;
  /* 10a4ca7a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a4ca7d push edx */
  push32((uint32_t)(EDX));
  /* 10a4ca7e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4ca81 push eax */
  push32((uint32_t)(EAX));
  /* 10a4ca82 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a4ca85 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ca86 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4ca89 push edx */
  push32((uint32_t)(EDX));
  /* 10a4ca8a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4ca8c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a4ca8f push eax */
  push32((uint32_t)(EAX));
  /* 10a4ca90 call dword ptr [0x10a732c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732c4))), 0x10a4ca96u);
  /* 10a4ca96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4ca98 jne 0x10a4caa1 */
  if (!C.zf) goto L_10a4caa1;
  /* 10a4ca9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4ca9c jmp 0x10a4cc01 */
  goto L_10a4cc01;
L_10a4caa1:;
  /* 10a4caa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4caa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4caa5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a4caa8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4caa9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4caac push edx */
  push32((uint32_t)(EDX));
  /* 10a4caad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4cab0 push eax */
  push32((uint32_t)(EAX));
  /* 10a4cab1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cab4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4cab5 call dword ptr [0x10a732c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732c0))), 0x10a4cabbu);
  /* 10a4cabb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a4cabe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4cac2 jne 0x10a4cacb */
  if (!C.zf) goto L_10a4cacb;
  /* 10a4cac4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4cac6 jmp 0x10a4cc01 */
  goto L_10a4cc01;
L_10a4cacb:;
  /* 10a4cacb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4cace and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4cad4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4cad6 je 0x10a4cb1b */
  if (C.zf) goto L_10a4cb1b;
  /* 10a4cad8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4cadc je 0x10a4cb16 */
  if (C.zf) goto L_10a4cb16;
  /* 10a4cade mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a4cae1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4cae4 jle 0x10a4caed */
  if ((C.zf||C.sf!=C.of)) goto L_10a4caed;
  /* 10a4cae6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4cae8 jmp 0x10a4cc01 */
  goto L_10a4cc01;
L_10a4caed:;
  /* 10a4caed mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a4caf0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4caf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a4caf4 push edx */
  push32((uint32_t)(EDX));
  /* 10a4caf5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a4caf8 push eax */
  push32((uint32_t)(EAX));
  /* 10a4caf9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4cafc push ecx */
  push32((uint32_t)(ECX));
  /* 10a4cafd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4cb00 push edx */
  push32((uint32_t)(EDX));
  /* 10a4cb01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cb04 push eax */
  push32((uint32_t)(EAX));
  /* 10a4cb05 call dword ptr [0x10a732c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732c0))), 0x10a4cb0bu);
  /* 10a4cb0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4cb0d jne 0x10a4cb16 */
  if (!C.zf) goto L_10a4cb16;
  /* 10a4cb0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4cb11 jmp 0x10a4cc01 */
  goto L_10a4cc01;
L_10a4cb16:;
  /* 10a4cb16 jmp 0x10a4cbfa */
  goto L_10a4cbfa;
L_10a4cb1b:;
  /* 10a4cb1b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a4cb1e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10a4cb21 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a4cb28 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a4cb2b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a4cb2d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4cb30 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a4cb32 call 0x10a476c0 */
  push32(0x10a4cb37u); f_10a476c0();
  /* 10a4cb37 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10a4cb3a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a4cb3d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a4cb40 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a4cb43 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a4cb4a jmp 0x10a4cb63 */
  goto L_10a4cb63;
  /* 10a4cb4c mov eax, 1 */
  EAX = (0x1u);
  /* 10a4cb51 ret  */
  ESPCHK(0x10a4c910u, _esp0);
  ESP += 4; return;
  /* 10a4cb52 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4cb55 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a4cb5c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a4cb63:;
  /* 10a4cb63 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4cb67 jne 0x10a4cb70 */
  if (!C.zf) goto L_10a4cb70;
  /* 10a4cb69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4cb6b jmp 0x10a4cc01 */
  goto L_10a4cc01;
L_10a4cb70:;
  /* 10a4cb70 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a4cb73 push eax */
  push32((uint32_t)(EAX));
  /* 10a4cb74 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4cb77 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4cb78 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a4cb7b push edx */
  push32((uint32_t)(EDX));
  /* 10a4cb7c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4cb7f push eax */
  push32((uint32_t)(EAX));
  /* 10a4cb80 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4cb83 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4cb84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cb87 push edx */
  push32((uint32_t)(EDX));
  /* 10a4cb88 call dword ptr [0x10a732c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732c0))), 0x10a4cb8eu);
  /* 10a4cb8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4cb90 jne 0x10a4cb96 */
  if (!C.zf) goto L_10a4cb96;
  /* 10a4cb92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4cb94 jmp 0x10a4cc01 */
  goto L_10a4cc01;
L_10a4cb96:;
  /* 10a4cb96 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4cb9a jne 0x10a4cbca */
  if (!C.zf) goto L_10a4cbca;
  /* 10a4cb9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4cb9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4cba0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4cba2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4cba4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a4cba7 push eax */
  push32((uint32_t)(EAX));
  /* 10a4cba8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4cbab push ecx */
  push32((uint32_t)(ECX));
  /* 10a4cbac push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a4cbb1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a4cbb4 push edx */
  push32((uint32_t)(EDX));
  /* 10a4cbb5 call dword ptr [0x10a73354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73354))), 0x10a4cbbbu);
  /* 10a4cbbb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a4cbbe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4cbc2 jne 0x10a4cbc8 */
  if (!C.zf) goto L_10a4cbc8;
  /* 10a4cbc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4cbc6 jmp 0x10a4cc01 */
  goto L_10a4cc01;
L_10a4cbc8:;
  /* 10a4cbc8 jmp 0x10a4cbfa */
  goto L_10a4cbfa;
L_10a4cbca:;
  /* 10a4cbca push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4cbcc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4cbce mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a4cbd1 push eax */
  push32((uint32_t)(EAX));
  /* 10a4cbd2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a4cbd5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4cbd6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a4cbd9 push edx */
  push32((uint32_t)(EDX));
  /* 10a4cbda mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4cbdd push eax */
  push32((uint32_t)(EAX));
  /* 10a4cbde push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a4cbe3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a4cbe6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4cbe7 call dword ptr [0x10a73354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73354))), 0x10a4cbedu);
  /* 10a4cbed mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a4cbf0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4cbf4 jne 0x10a4cbfa */
  if (!C.zf) goto L_10a4cbfa;
  /* 10a4cbf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4cbf8 jmp 0x10a4cc01 */
  goto L_10a4cc01;
L_10a4cbfa:;
  /* 10a4cbfa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a4cbfd jmp 0x10a4cc01 */
  goto L_10a4cc01;
L_10a4cbff:;
  /* 10a4cbff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a4cc01:;
  /* 10a4cc01 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10a4cc04 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4cc07 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10a4cc0e pop edi */
  EDI = (pop32());
  /* 10a4cc0f pop esi */
  ESI = (pop32());
  /* 10a4cc10 pop ebx */
  EBX = (pop32());
  /* 10a4cc11 mov esp, ebp */
  ESP = (EBP);
  /* 10a4cc13 pop ebp */
  EBP = (pop32());
  /* 10a4cc14 ret  */
  ESPCHK(0x10a4c910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc20 @ 0x10a4cc20 (80 bytes, 32 insns) */
void f_10a4cc20(void) {
  FTRACE(0x10a4cc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4cc20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4cc21 mov ebp, esp */
  EBP = (ESP);
  /* 10a4cc23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4cc26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4cc29 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a4cc2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cc2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a4cc32:;
  /* 10a4cc32 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4cc35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4cc38 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4cc3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a4cc3e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4cc40 je 0x10a4cc57 */
  if (C.zf) goto L_10a4cc57;
  /* 10a4cc42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4cc45 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a4cc48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4cc4a je 0x10a4cc57 */
  if (C.zf) goto L_10a4cc57;
  /* 10a4cc4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4cc4f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4cc52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4cc55 jmp 0x10a4cc32 */
  goto L_10a4cc32;
L_10a4cc57:;
  /* 10a4cc57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4cc5a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a4cc5d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4cc5f jne 0x10a4cc69 */
  if (!C.zf) goto L_10a4cc69;
  /* 10a4cc61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4cc64 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4cc67 jmp 0x10a4cc6c */
  goto L_10a4cc6c;
L_10a4cc69:;
  /* 10a4cc69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10a4cc6c:;
  /* 10a4cc6c mov esp, ebp */
  ESP = (EBP);
  /* 10a4cc6e pop ebp */
  EBP = (pop32());
  /* 10a4cc6f ret  */
  ESPCHK(0x10a4cc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc70 @ 0x10a4cc70 (130 bytes, 43 insns) */
void f_10a4cc70(void) {
  FTRACE(0x10a4cc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4cc70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4cc71 mov ebp, esp */
  EBP = (ESP);
  /* 10a4cc73 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4cc74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cc77 cmp eax, dword ptr [0x10a7211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a7211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4cc7d jae 0x10a4cca1 */
  if (!C.cf) goto L_10a4cca1;
  /* 10a4cc7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cc82 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a4cc85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cc88 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4cc8b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4cc8e mov eax, dword ptr [ecx*4 + 0x10a71fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a71fe0)));
  /* 10a4cc95 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a4cc9a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4cc9d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4cc9f jne 0x10a4ccbc */
  if (!C.zf) goto L_10a4ccbc;
L_10a4cca1:;
  /* 10a4cca1 call 0x10a4c3f0 */
  push32(0x10a4cca6u); f_10a4c3f0();
  /* 10a4cca6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a4ccac call 0x10a4c400 */
  push32(0x10a4ccb1u); f_10a4c400();
  /* 10a4ccb1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a4ccb7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4ccba jmp 0x10a4ccee */
  goto L_10a4ccee;
L_10a4ccbc:;
  /* 10a4ccbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ccbf push edx */
  push32((uint32_t)(EDX));
  /* 10a4ccc0 call 0x10a4dc10 */
  push32(0x10a4ccc5u); f_10a4dc10();
  /* 10a4ccc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ccc8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4cccb push eax */
  push32((uint32_t)(EAX));
  /* 10a4cccc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4cccf push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ccd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ccd3 push edx */
  push32((uint32_t)(EDX));
  /* 10a4ccd4 call 0x10a4cd00 */
  push32(0x10a4ccd9u); f_10a4cd00();
  /* 10a4ccd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ccdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4ccdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cce2 push eax */
  push32((uint32_t)(EAX));
  /* 10a4cce3 call 0x10a4dca0 */
  push32(0x10a4cce8u); f_10a4dca0();
  /* 10a4cce8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4cceb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a4ccee:;
  /* 10a4ccee mov esp, ebp */
  ESP = (EBP);
  /* 10a4ccf0 pop ebp */
  EBP = (pop32());
  /* 10a4ccf1 ret  */
  ESPCHK(0x10a4cc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd00 @ 0x10a4cd00 (178 bytes, 56 insns) */
void f_10a4cd00(void) {
  FTRACE(0x10a4cd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4cd00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4cd01 mov ebp, esp */
  EBP = (ESP);
  /* 10a4cd03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4cd06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cd09 push eax */
  push32((uint32_t)(EAX));
  /* 10a4cd0a call 0x10a4da90 */
  push32(0x10a4cd0fu); f_10a4da90();
  /* 10a4cd0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4cd12 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a4cd15 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4cd19 jne 0x10a4cd2e */
  if (!C.zf) goto L_10a4cd2e;
  /* 10a4cd1b call 0x10a4c3f0 */
  push32(0x10a4cd20u); f_10a4c3f0();
  /* 10a4cd20 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a4cd26 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4cd29 jmp 0x10a4cdae */
  goto L_10a4cdae;
L_10a4cd2e:;
  /* 10a4cd2e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4cd31 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4cd32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4cd34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4cd37 push edx */
  push32((uint32_t)(EDX));
  /* 10a4cd38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4cd3b push eax */
  push32((uint32_t)(EAX));
  /* 10a4cd3c call dword ptr [0x10a732b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732b0))), 0x10a4cd42u);
  /* 10a4cd42 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a4cd45 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4cd49 jne 0x10a4cd56 */
  if (!C.zf) goto L_10a4cd56;
  /* 10a4cd4b call dword ptr [0x10a73328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73328))), 0x10a4cd51u);
  /* 10a4cd51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4cd54 jmp 0x10a4cd5d */
  goto L_10a4cd5d;
L_10a4cd56:;
  /* 10a4cd56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a4cd5d:;
  /* 10a4cd5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4cd61 je 0x10a4cd74 */
  if (C.zf) goto L_10a4cd74;
  /* 10a4cd63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4cd66 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4cd67 call 0x10a4c350 */
  push32(0x10a4cd6cu); f_10a4c350();
  /* 10a4cd6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4cd6f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4cd72 jmp 0x10a4cdae */
  goto L_10a4cdae;
L_10a4cd74:;
  /* 10a4cd74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cd77 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10a4cd7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cd7d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4cd80 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4cd83 mov ecx, dword ptr [edx*4 + 0x10a71fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10a71fe0)));
  /* 10a4cd8a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10a4cd8e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10a4cd91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cd94 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a4cd97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cd9a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4cd9d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4cda0 mov eax, dword ptr [eax*4 + 0x10a71fe0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10a71fe0)));
  /* 10a4cda7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10a4cdab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a4cdae:;
  /* 10a4cdae mov esp, ebp */
  ESP = (EBP);
  /* 10a4cdb0 pop ebp */
  EBP = (pop32());
  /* 10a4cdb1 ret  */
  ESPCHK(0x10a4cd00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdc0 @ 0x10a4cdc0 (130 bytes, 43 insns) */
void f_10a4cdc0(void) {
  FTRACE(0x10a4cdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4cdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4cdc1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4cdc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4cdc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cdc7 cmp eax, dword ptr [0x10a7211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a7211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4cdcd jae 0x10a4cdf1 */
  if (!C.cf) goto L_10a4cdf1;
  /* 10a4cdcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cdd2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a4cdd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cdd8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4cddb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4cdde mov eax, dword ptr [ecx*4 + 0x10a71fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a71fe0)));
  /* 10a4cde5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a4cdea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4cded test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4cdef jne 0x10a4ce0c */
  if (!C.zf) goto L_10a4ce0c;
L_10a4cdf1:;
  /* 10a4cdf1 call 0x10a4c3f0 */
  push32(0x10a4cdf6u); f_10a4c3f0();
  /* 10a4cdf6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a4cdfc call 0x10a4c400 */
  push32(0x10a4ce01u); f_10a4c400();
  /* 10a4ce01 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a4ce07 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4ce0a jmp 0x10a4ce3e */
  goto L_10a4ce3e;
L_10a4ce0c:;
  /* 10a4ce0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ce0f push edx */
  push32((uint32_t)(EDX));
  /* 10a4ce10 call 0x10a4dc10 */
  push32(0x10a4ce15u); f_10a4dc10();
  /* 10a4ce15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ce18 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4ce1b push eax */
  push32((uint32_t)(EAX));
  /* 10a4ce1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4ce1f push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ce20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ce23 push edx */
  push32((uint32_t)(EDX));
  /* 10a4ce24 call 0x10a4ce50 */
  push32(0x10a4ce29u); f_10a4ce50();
  /* 10a4ce29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ce2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4ce2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ce32 push eax */
  push32((uint32_t)(EAX));
  /* 10a4ce33 call 0x10a4dca0 */
  push32(0x10a4ce38u); f_10a4dca0();
  /* 10a4ce38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ce3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a4ce3e:;
  /* 10a4ce3e mov esp, ebp */
  ESP = (EBP);
  /* 10a4ce40 pop ebp */
  EBP = (pop32());
  /* 10a4ce41 ret  */
  ESPCHK(0x10a4cdc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce50 @ 0x10a4ce50 (627 bytes, 182 insns) */
void f_10a4ce50(void) {
  FTRACE(0x10a4ce50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4ce50 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4ce51 mov ebp, esp */
  EBP = (ESP);
  /* 10a4ce53 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4ce59 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a4ce60 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4ce63 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10a4ce69 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ce6d jne 0x10a4ce76 */
  if (!C.zf) goto L_10a4ce76;
  /* 10a4ce6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4ce71 jmp 0x10a4d0bf */
  goto L_10a4d0bf;
L_10a4ce76:;
  /* 10a4ce76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ce79 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a4ce7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ce7f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4ce82 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4ce85 mov eax, dword ptr [ecx*4 + 0x10a71fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a71fe0)));
  /* 10a4ce8c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a4ce91 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ce94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4ce96 je 0x10a4cea8 */
  if (C.zf) goto L_10a4cea8;
  /* 10a4ce98 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4ce9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4ce9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ce9f push edx */
  push32((uint32_t)(EDX));
  /* 10a4cea0 call 0x10a4cd00 */
  push32(0x10a4cea5u); f_10a4cd00();
  /* 10a4cea5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4cea8:;
  /* 10a4cea8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ceab sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a4ceae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ceb1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ceb4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4ceb7 mov edx, dword ptr [eax*4 + 0x10a71fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a71fe0)));
  /* 10a4cebe movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10a4cec3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4cec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4ceca je 0x10a4cfdc */
  if (C.zf) goto L_10a4cfdc;
  /* 10a4ced0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4ced3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a4ced6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10a4cedd:;
  /* 10a4cedd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4cee0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4cee3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4cee6 jae 0x10a4cfda */
  if (!C.cf) goto L_10a4cfda;
  /* 10a4ceec lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10a4cef2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a4cef5:;
  /* 10a4cef5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4cef8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10a4cefe sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4cf00 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4cf06 jge 0x10a4cf67 */
  if ((C.sf==C.of)) goto L_10a4cf67;
  /* 10a4cf08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4cf0b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4cf0e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4cf11 jae 0x10a4cf67 */
  if (!C.cf) goto L_10a4cf67;
  /* 10a4cf13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4cf16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a4cf18 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10a4cf1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4cf21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4cf24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4cf27 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10a4cf2e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4cf31 jne 0x10a4cf51 */
  if (!C.zf) goto L_10a4cf51;
  /* 10a4cf33 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10a4cf39 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4cf3c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10a4cf42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4cf45 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10a4cf48 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4cf4b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4cf4e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a4cf51:;
  /* 10a4cf51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4cf54 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10a4cf5a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10a4cf5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4cf5f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4cf62 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4cf65 jmp 0x10a4cef5 */
  goto L_10a4cef5;
L_10a4cf67:;
  /* 10a4cf67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4cf69 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10a4cf6f push edx */
  push32((uint32_t)(EDX));
  /* 10a4cf70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4cf73 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10a4cf79 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4cf7b push eax */
  push32((uint32_t)(EAX));
  /* 10a4cf7c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10a4cf82 push edx */
  push32((uint32_t)(EDX));
  /* 10a4cf83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cf86 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a4cf89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cf8c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4cf8f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4cf92 mov edx, dword ptr [eax*4 + 0x10a71fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a71fe0)));
  /* 10a4cf99 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10a4cf9c push eax */
  push32((uint32_t)(EAX));
  /* 10a4cf9d call dword ptr [0x10a732e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732e8))), 0x10a4cfa3u);
  /* 10a4cfa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4cfa5 je 0x10a4cfca */
  if (C.zf) goto L_10a4cfca;
  /* 10a4cfa7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4cfaa add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4cfb0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a4cfb3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4cfb6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10a4cfbc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4cfbe cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4cfc4 jge 0x10a4cfc8 */
  if ((C.sf==C.of)) goto L_10a4cfc8;
  /* 10a4cfc6 jmp 0x10a4cfda */
  goto L_10a4cfda;
L_10a4cfc8:;
  /* 10a4cfc8 jmp 0x10a4cfd5 */
  goto L_10a4cfd5;
L_10a4cfca:;
  /* 10a4cfca call dword ptr [0x10a73328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73328))), 0x10a4cfd0u);
  /* 10a4cfd0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a4cfd3 jmp 0x10a4cfda */
  goto L_10a4cfda;
L_10a4cfd5:;
  /* 10a4cfd5 jmp 0x10a4cedd */
  goto L_10a4cedd;
L_10a4cfda:;
  /* 10a4cfda jmp 0x10a4d02c */
  goto L_10a4d02c;
L_10a4cfdc:;
  /* 10a4cfdc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4cfde lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10a4cfe4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4cfe5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4cfe8 push edx */
  push32((uint32_t)(EDX));
  /* 10a4cfe9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4cfec push eax */
  push32((uint32_t)(EAX));
  /* 10a4cfed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cff0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a4cff3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4cff6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4cff9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4cffc mov eax, dword ptr [ecx*4 + 0x10a71fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a71fe0)));
  /* 10a4d003 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10a4d006 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4d007 call dword ptr [0x10a732e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732e8))), 0x10a4d00du);
  /* 10a4d00d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4d00f je 0x10a4d023 */
  if (C.zf) goto L_10a4d023;
  /* 10a4d011 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a4d018 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10a4d01e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a4d021 jmp 0x10a4d02c */
  goto L_10a4d02c;
L_10a4d023:;
  /* 10a4d023 call dword ptr [0x10a73328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73328))), 0x10a4d029u);
  /* 10a4d029 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a4d02c:;
  /* 10a4d02c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d030 jne 0x10a4d0b6 */
  if (!C.zf) goto L_10a4d0b6;
  /* 10a4d036 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d03a je 0x10a4d06a */
  if (C.zf) goto L_10a4d06a;
  /* 10a4d03c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d040 jne 0x10a4d059 */
  if (!C.zf) goto L_10a4d059;
  /* 10a4d042 call 0x10a4c3f0 */
  push32(0x10a4d047u); f_10a4c3f0();
  /* 10a4d047 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a4d04d call 0x10a4c400 */
  push32(0x10a4d052u); f_10a4c400();
  /* 10a4d052 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4d055 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a4d057 jmp 0x10a4d065 */
  goto L_10a4d065;
L_10a4d059:;
  /* 10a4d059 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4d05c push edx */
  push32((uint32_t)(EDX));
  /* 10a4d05d call 0x10a4c350 */
  push32(0x10a4d062u); f_10a4c350();
  /* 10a4d062 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4d065:;
  /* 10a4d065 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4d068 jmp 0x10a4d0bf */
  goto L_10a4d0bf;
L_10a4d06a:;
  /* 10a4d06a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d06d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a4d070 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d073 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4d076 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4d079 mov edx, dword ptr [eax*4 + 0x10a71fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a71fe0)));
  /* 10a4d080 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10a4d085 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4d088 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4d08a je 0x10a4d09b */
  if (C.zf) goto L_10a4d09b;
  /* 10a4d08c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4d08f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a4d092 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d095 jne 0x10a4d09b */
  if (!C.zf) goto L_10a4d09b;
  /* 10a4d097 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4d099 jmp 0x10a4d0bf */
  goto L_10a4d0bf;
L_10a4d09b:;
  /* 10a4d09b call 0x10a4c3f0 */
  push32(0x10a4d0a0u); f_10a4c3f0();
  /* 10a4d0a0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10a4d0a6 call 0x10a4c400 */
  push32(0x10a4d0abu); f_10a4c400();
  /* 10a4d0ab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a4d0b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4d0b4 jmp 0x10a4d0bf */
  goto L_10a4d0bf;
L_10a4d0b6:;
  /* 10a4d0b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4d0b9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10a4d0bf:;
  /* 10a4d0bf mov esp, ebp */
  ESP = (EBP);
  /* 10a4d0c1 pop ebp */
  EBP = (pop32());
  /* 10a4d0c2 ret  */
  ESPCHK(0x10a4ce50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0d0 @ 0x10a4d0d0 (199 bytes, 68 insns) */
void f_10a4d0d0(void) {
  FTRACE(0x10a4d0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4d0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4d0d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4d0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4d0d4 push ebx */
  push32((uint32_t)(EBX));
  /* 10a4d0d5 push esi */
  push32((uint32_t)(ESI));
  /* 10a4d0d6 push edi */
  push32((uint32_t)(EDI));
L_10a4d0d7:;
  /* 10a4d0d7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d0db jne 0x10a4d0fb */
  if (!C.zf) goto L_10a4d0fb;
  /* 10a4d0dd push 0x10a6c4a4 */
  push32((uint32_t)(0x10a6c4a4u));
  /* 10a4d0e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4d0e4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10a4d0e6 push 0x10a6c570 */
  push32((uint32_t)(0x10a6c570u));
  /* 10a4d0eb push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4d0ed call 0x10a435e0 */
  push32(0x10a4d0f2u); f_10a435e0();
  /* 10a4d0f2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d0f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d0f8 jne 0x10a4d0fb */
  if (!C.zf) goto L_10a4d0fb;
  /* 10a4d0fa int3  */
  x86_unimpl("int3 @ 0x10a4d0fa");
L_10a4d0fb:;
  /* 10a4d0fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4d0fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4d0ff jne 0x10a4d0d7 */
  if (!C.zf) goto L_10a4d0d7;
  /* 10a4d101 mov ecx, dword ptr [0x10a7081c] */
  ECX = (r32((uint32_t)(0x10a7081c)));
  /* 10a4d107 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d10a mov dword ptr [0x10a7081c], ecx */
  w32((uint32_t)(0x10a7081c), (ECX));
  /* 10a4d110 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d113 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a4d116 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10a4d118 push 0x10a6c570 */
  push32((uint32_t)(0x10a6c570u));
  /* 10a4d11d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4d11f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10a4d124 call 0x10a44520 */
  push32(0x10a4d129u); f_10a44520();
  /* 10a4d129 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d12c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d12f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10a4d132 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d135 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d139 je 0x10a4d156 */
  if (C.zf) goto L_10a4d156;
  /* 10a4d13b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d13e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a4d141 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4d144 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d147 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10a4d14a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d14d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10a4d154 jmp 0x10a4d17b */
  goto L_10a4d17b;
L_10a4d156:;
  /* 10a4d156 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d159 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a4d15c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4d15f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d162 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10a4d165 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d168 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d16b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d16e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a4d171 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d174 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10a4d17b:;
  /* 10a4d17b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d17e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d181 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a4d184 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a4d186 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d189 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10a4d190 pop edi */
  EDI = (pop32());
  /* 10a4d191 pop esi */
  ESI = (pop32());
  /* 10a4d192 pop ebx */
  EBX = (pop32());
  /* 10a4d193 mov esp, ebp */
  ESP = (EBP);
  /* 10a4d195 pop ebp */
  EBP = (pop32());
  /* 10a4d196 ret  */
  ESPCHK(0x10a4d0d0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10a4d1a0 (50 bytes, 17 insns) */
void f_10a4d1a0(void) {
  FTRACE(0x10a4d1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4d1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4d1a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4d1a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d1a6 cmp eax, dword ptr [0x10a7211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a7211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d1ac jb 0x10a4d1b2 */
  if (C.cf) goto L_10a4d1b2;
  /* 10a4d1ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4d1b0 jmp 0x10a4d1d0 */
  goto L_10a4d1d0;
L_10a4d1b2:;
  /* 10a4d1b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d1b5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a4d1b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d1bb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4d1be imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4d1c1 mov eax, dword ptr [ecx*4 + 0x10a71fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a71fe0)));
  /* 10a4d1c8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a4d1cd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10a4d1d0:;
  /* 10a4d1d0 pop ebp */
  EBP = (pop32());
  /* 10a4d1d1 ret  */
  ESPCHK(0x10a4d1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1e0 @ 0x10a4d1e0 (300 bytes, 80 insns) */
void f_10a4d1e0(void) {
  FTRACE(0x10a4d1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4d1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4d1e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4d1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4d1e4 cmp dword ptr [0x10a71ce0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a71ce0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d1eb jne 0x10a4d1f9 */
  if (!C.zf) goto L_10a4d1f9;
  /* 10a4d1ed mov dword ptr [0x10a71ce0], 0x200 */
  w32((uint32_t)(0x10a71ce0), (0x200u));
  /* 10a4d1f7 jmp 0x10a4d20c */
  goto L_10a4d20c;
L_10a4d1f9:;
  /* 10a4d1f9 cmp dword ptr [0x10a71ce0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10a71ce0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d200 jge 0x10a4d20c */
  if ((C.sf==C.of)) goto L_10a4d20c;
  /* 10a4d202 mov dword ptr [0x10a71ce0], 0x14 */
  w32((uint32_t)(0x10a71ce0), (0x14u));
L_10a4d20c:;
  /* 10a4d20c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10a4d211 push 0x10a6c57c */
  push32((uint32_t)(0x10a6c57cu));
  /* 10a4d216 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4d218 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a4d21a mov eax, dword ptr [0x10a71ce0] */
  EAX = (r32((uint32_t)(0x10a71ce0)));
  /* 10a4d21f push eax */
  push32((uint32_t)(EAX));
  /* 10a4d220 call 0x10a44930 */
  push32(0x10a4d225u); f_10a44930();
  /* 10a4d225 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d228 mov dword ptr [0x10a70990], eax */
  w32((uint32_t)(0x10a70990), (EAX));
  /* 10a4d22d cmp dword ptr [0x10a70990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d234 jne 0x10a4d275 */
  if (!C.zf) goto L_10a4d275;
  /* 10a4d236 mov dword ptr [0x10a71ce0], 0x14 */
  w32((uint32_t)(0x10a71ce0), (0x14u));
  /* 10a4d240 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10a4d245 push 0x10a6c57c */
  push32((uint32_t)(0x10a6c57cu));
  /* 10a4d24a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4d24c push 4 */
  push32((uint32_t)(0x4u));
  /* 10a4d24e mov ecx, dword ptr [0x10a71ce0] */
  ECX = (r32((uint32_t)(0x10a71ce0)));
  /* 10a4d254 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4d255 call 0x10a44930 */
  push32(0x10a4d25au); f_10a44930();
  /* 10a4d25a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d25d mov dword ptr [0x10a70990], eax */
  w32((uint32_t)(0x10a70990), (EAX));
  /* 10a4d262 cmp dword ptr [0x10a70990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d269 jne 0x10a4d275 */
  if (!C.zf) goto L_10a4d275;
  /* 10a4d26b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10a4d26d call 0x10a43490 */
  push32(0x10a4d272u); f_10a43490();
  /* 10a4d272 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4d275:;
  /* 10a4d275 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a4d27c jmp 0x10a4d287 */
  goto L_10a4d287;
L_10a4d27e:;
  /* 10a4d27e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d281 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d284 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a4d287:;
  /* 10a4d287 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d28b jge 0x10a4d2a6 */
  if ((C.sf==C.of)) goto L_10a4d2a6;
  /* 10a4d28d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d290 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a4d293 add eax, 0x10a6f120 */
  { uint32_t _a=(EAX),_b=(0x10a6f120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d298 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d29b mov edx, dword ptr [0x10a70990] */
  EDX = (r32((uint32_t)(0x10a70990)));
  /* 10a4d2a1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10a4d2a4 jmp 0x10a4d27e */
  goto L_10a4d27e;
L_10a4d2a6:;
  /* 10a4d2a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a4d2ad jmp 0x10a4d2b8 */
  goto L_10a4d2b8;
L_10a4d2af:;
  /* 10a4d2af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d2b2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d2b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a4d2b8:;
  /* 10a4d2b8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d2bc jge 0x10a4d308 */
  if ((C.sf==C.of)) goto L_10a4d308;
  /* 10a4d2be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d2c1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a4d2c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d2c7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4d2ca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4d2cd mov eax, dword ptr [ecx*4 + 0x10a71fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a71fe0)));
  /* 10a4d2d4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d2d8 je 0x10a4d2f6 */
  if (C.zf) goto L_10a4d2f6;
  /* 10a4d2da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d2dd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a4d2e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d2e3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4d2e6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4d2e9 mov eax, dword ptr [ecx*4 + 0x10a71fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a71fe0)));
  /* 10a4d2f0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d2f4 jne 0x10a4d306 */
  if (!C.zf) goto L_10a4d306;
L_10a4d2f6:;
  /* 10a4d2f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d2f9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a4d2fc mov dword ptr [ecx + 0x10a6f130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10a6f130), (0xffffffffu));
L_10a4d306:;
  /* 10a4d306 jmp 0x10a4d2af */
  goto L_10a4d2af;
L_10a4d308:;
  /* 10a4d308 mov esp, ebp */
  ESP = (EBP);
  /* 10a4d30a pop ebp */
  EBP = (pop32());
  /* 10a4d30b ret  */
  ESPCHK(0x10a4d1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d310 @ 0x10a4d310 (26 bytes, 9 insns) */
void f_10a4d310(void) {
  FTRACE(0x10a4d310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4d310 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4d311 mov ebp, esp */
  EBP = (ESP);
  /* 10a4d313 call 0x10a4df10 */
  push32(0x10a4d318u); f_10a4df10();
  /* 10a4d318 movsx eax, byte ptr [0x10a70634] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10a70634))));
  /* 10a4d31f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4d321 je 0x10a4d328 */
  if (C.zf) goto L_10a4d328;
  /* 10a4d323 call 0x10a4dcd0 */
  push32(0x10a4d328u); f_10a4dcd0();
L_10a4d328:;
  /* 10a4d328 pop ebp */
  EBP = (pop32());
  /* 10a4d329 ret  */
  ESPCHK(0x10a4d310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d330 @ 0x10a4d330 (61 bytes, 20 insns) */
void f_10a4d330(void) {
  FTRACE(0x10a4d330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4d330 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4d331 mov ebp, esp */
  EBP = (ESP);
  /* 10a4d333 cmp dword ptr [ebp + 8], 0x10a6f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10a6f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d33a jb 0x10a4d35e */
  if (C.cf) goto L_10a4d35e;
  /* 10a4d33c cmp dword ptr [ebp + 8], 0x10a6f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10a6f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d343 ja 0x10a4d35e */
  if ((!C.cf&&!C.zf)) goto L_10a4d35e;
  /* 10a4d345 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d348 sub eax, 0x10a6f120 */
  { uint32_t _a=(EAX),_b=(0x10a6f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4d34d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a4d350 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d353 push eax */
  push32((uint32_t)(EAX));
  /* 10a4d354 call 0x10a47f20 */
  push32(0x10a4d359u); f_10a47f20();
  /* 10a4d359 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d35c jmp 0x10a4d36b */
  goto L_10a4d36b;
L_10a4d35e:;
  /* 10a4d35e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d361 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d364 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4d365 call dword ptr [0x10a73360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73360))), 0x10a4d36bu);
L_10a4d36b:;
  /* 10a4d36b pop ebp */
  EBP = (pop32());
  /* 10a4d36c ret  */
  ESPCHK(0x10a4d330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d370 @ 0x10a4d370 (41 bytes, 16 insns) */
void f_10a4d370(void) {
  FTRACE(0x10a4d370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4d370 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4d371 mov ebp, esp */
  EBP = (ESP);
  /* 10a4d373 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d377 jge 0x10a4d38a */
  if ((C.sf==C.of)) goto L_10a4d38a;
  /* 10a4d379 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d37c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d37f push eax */
  push32((uint32_t)(EAX));
  /* 10a4d380 call 0x10a47f20 */
  push32(0x10a4d385u); f_10a47f20();
  /* 10a4d385 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d388 jmp 0x10a4d397 */
  goto L_10a4d397;
L_10a4d38a:;
  /* 10a4d38a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4d38d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d390 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4d391 call dword ptr [0x10a73360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73360))), 0x10a4d397u);
L_10a4d397:;
  /* 10a4d397 pop ebp */
  EBP = (pop32());
  /* 10a4d398 ret  */
  ESPCHK(0x10a4d370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3a0 @ 0x10a4d3a0 (61 bytes, 20 insns) */
void f_10a4d3a0(void) {
  FTRACE(0x10a4d3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4d3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4d3a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4d3a3 cmp dword ptr [ebp + 8], 0x10a6f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10a6f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d3aa jb 0x10a4d3ce */
  if (C.cf) goto L_10a4d3ce;
  /* 10a4d3ac cmp dword ptr [ebp + 8], 0x10a6f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10a6f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d3b3 ja 0x10a4d3ce */
  if ((!C.cf&&!C.zf)) goto L_10a4d3ce;
  /* 10a4d3b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d3b8 sub eax, 0x10a6f120 */
  { uint32_t _a=(EAX),_b=(0x10a6f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4d3bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a4d3c0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d3c3 push eax */
  push32((uint32_t)(EAX));
  /* 10a4d3c4 call 0x10a47fc0 */
  push32(0x10a4d3c9u); f_10a47fc0();
  /* 10a4d3c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d3cc jmp 0x10a4d3db */
  goto L_10a4d3db;
L_10a4d3ce:;
  /* 10a4d3ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d3d1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d3d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4d3d5 call dword ptr [0x10a73378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73378))), 0x10a4d3dbu);
L_10a4d3db:;
  /* 10a4d3db pop ebp */
  EBP = (pop32());
  /* 10a4d3dc ret  */
  ESPCHK(0x10a4d3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3e0 @ 0x10a4d3e0 (41 bytes, 16 insns) */
void f_10a4d3e0(void) {
  FTRACE(0x10a4d3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4d3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4d3e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4d3e3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d3e7 jge 0x10a4d3fa */
  if ((C.sf==C.of)) goto L_10a4d3fa;
  /* 10a4d3e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d3ec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d3ef push eax */
  push32((uint32_t)(EAX));
  /* 10a4d3f0 call 0x10a47fc0 */
  push32(0x10a4d3f5u); f_10a47fc0();
  /* 10a4d3f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d3f8 jmp 0x10a4d407 */
  goto L_10a4d407;
L_10a4d3fa:;
  /* 10a4d3fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4d3fd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d400 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4d401 call dword ptr [0x10a73378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73378))), 0x10a4d407u);
L_10a4d407:;
  /* 10a4d407 pop ebp */
  EBP = (pop32());
  /* 10a4d408 ret  */
  ESPCHK(0x10a4d3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d410 @ 0x10a4d410 (119 bytes, 34 insns) */
void f_10a4d410(void) {
  FTRACE(0x10a4d410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4d410 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4d411 mov ebp, esp */
  EBP = (ESP);
  /* 10a4d413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4d416 push 0x10a7098c */
  push32((uint32_t)(0x10a7098cu));
  /* 10a4d41b call dword ptr [0x10a732fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732fc))), 0x10a4d421u);
  /* 10a4d421 cmp dword ptr [0x10a7097c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7097c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d428 je 0x10a4d448 */
  if (C.zf) goto L_10a4d448;
  /* 10a4d42a push 0x10a7098c */
  push32((uint32_t)(0x10a7098cu));
  /* 10a4d42f call dword ptr [0x10a732ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732ec))), 0x10a4d435u);
  /* 10a4d435 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a4d437 call 0x10a47f20 */
  push32(0x10a4d43cu); f_10a47f20();
  /* 10a4d43c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d43f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a4d446 jmp 0x10a4d44f */
  goto L_10a4d44f;
L_10a4d448:;
  /* 10a4d448 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a4d44f:;
  /* 10a4d44f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10a4d453 push eax */
  push32((uint32_t)(EAX));
  /* 10a4d454 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d457 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4d458 call 0x10a4d490 */
  push32(0x10a4d45du); f_10a4d490();
  /* 10a4d45d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d460 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a4d463 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d467 je 0x10a4d475 */
  if (C.zf) goto L_10a4d475;
  /* 10a4d469 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a4d46b call 0x10a47fc0 */
  push32(0x10a4d470u); f_10a47fc0();
  /* 10a4d470 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d473 jmp 0x10a4d480 */
  goto L_10a4d480;
L_10a4d475:;
  /* 10a4d475 push 0x10a7098c */
  push32((uint32_t)(0x10a7098cu));
  /* 10a4d47a call dword ptr [0x10a732ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732ec))), 0x10a4d480u);
L_10a4d480:;
  /* 10a4d480 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4d483 mov esp, ebp */
  ESP = (EBP);
  /* 10a4d485 pop ebp */
  EBP = (pop32());
  /* 10a4d486 ret  */
  ESPCHK(0x10a4d410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d490 @ 0x10a4d490 (160 bytes, 50 insns) */
void f_10a4d490(void) {
  FTRACE(0x10a4d490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4d490 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4d491 mov ebp, esp */
  EBP = (ESP);
  /* 10a4d493 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4d496 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d49a jne 0x10a4d4a3 */
  if (!C.zf) goto L_10a4d4a3;
  /* 10a4d49c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4d49e jmp 0x10a4d52c */
  goto L_10a4d52c;
L_10a4d4a3:;
  /* 10a4d4a3 cmp dword ptr [0x10a70800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d4aa jne 0x10a4d4da */
  if (!C.zf) goto L_10a4d4da;
  /* 10a4d4ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4d4af and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4d4b4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d4b9 jle 0x10a4d4cb */
  if ((C.zf||C.sf!=C.of)) goto L_10a4d4cb;
  /* 10a4d4bb call 0x10a4c3f0 */
  push32(0x10a4d4c0u); f_10a4c3f0();
  /* 10a4d4c0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10a4d4c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4d4c9 jmp 0x10a4d52c */
  goto L_10a4d52c;
L_10a4d4cb:;
  /* 10a4d4cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d4ce mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10a4d4d1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10a4d4d3 mov eax, 1 */
  EAX = (0x1u);
  /* 10a4d4d8 jmp 0x10a4d52c */
  goto L_10a4d52c;
L_10a4d4da:;
  /* 10a4d4da mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a4d4e1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10a4d4e4 push eax */
  push32((uint32_t)(EAX));
  /* 10a4d4e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4d4e7 mov ecx, dword ptr [0x10a6eea4] */
  ECX = (r32((uint32_t)(0x10a6eea4)));
  /* 10a4d4ed push ecx */
  push32((uint32_t)(ECX));
  /* 10a4d4ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d4f1 push edx */
  push32((uint32_t)(EDX));
  /* 10a4d4f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4d4f4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10a4d4f7 push eax */
  push32((uint32_t)(EAX));
  /* 10a4d4f8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a4d4fd mov ecx, dword ptr [0x10a70810] */
  ECX = (r32((uint32_t)(0x10a70810)));
  /* 10a4d503 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4d504 call dword ptr [0x10a73354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73354))), 0x10a4d50au);
  /* 10a4d50a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4d50d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d511 je 0x10a4d519 */
  if (C.zf) goto L_10a4d519;
  /* 10a4d513 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d517 je 0x10a4d529 */
  if (C.zf) goto L_10a4d529;
L_10a4d519:;
  /* 10a4d519 call 0x10a4c3f0 */
  push32(0x10a4d51eu); f_10a4c3f0();
  /* 10a4d51e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10a4d524 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4d527 jmp 0x10a4d52c */
  goto L_10a4d52c;
L_10a4d529:;
  /* 10a4d529 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a4d52c:;
  /* 10a4d52c mov esp, ebp */
  ESP = (EBP);
  /* 10a4d52e pop ebp */
  EBP = (pop32());
  /* 10a4d52f ret  */
  ESPCHK(0x10a4d490u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10a4d530 (32 bytes, 18 insns) */
void f_10a4d530(void) {
  FTRACE(0x10a4d530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4d530 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4d531 mov ebp, esp */
  EBP = (ESP);
  /* 10a4d533 push ebx */
  push32((uint32_t)(EBX));
  /* 10a4d534 push esi */
  push32((uint32_t)(ESI));
  /* 10a4d535 push edi */
  push32((uint32_t)(EDI));
  /* 10a4d536 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4d537 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4d539 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4d53b push 0x10a4d548 */
  push32((uint32_t)(0x10a4d548u));
  /* 10a4d540 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10a4d543 call 0x10a54c7c */
  push32(0x10a4d548u); f_10a54c7c();
  /* 10a4d548 pop ebp */
  EBP = (pop32());
  /* 10a4d549 pop edi */
  EDI = (pop32());
  /* 10a4d54a pop esi */
  ESI = (pop32());
  /* 10a4d54b pop ebx */
  EBX = (pop32());
  /* 10a4d54c mov esp, ebp */
  ESP = (EBP);
  /* 10a4d54e pop ebp */
  EBP = (pop32());
  /* 10a4d54f ret  */
  ESPCHK(0x10a4d530u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10a4d572 (104 bytes, 33 insns) */
void f_10a4d572(void) {
  FTRACE(0x10a4d572u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4d572 push ebx */
  push32((uint32_t)(EBX));
  /* 10a4d573 push esi */
  push32((uint32_t)(ESI));
  /* 10a4d574 push edi */
  push32((uint32_t)(EDI));
  /* 10a4d575 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a4d579 push eax */
  push32((uint32_t)(EAX));
  /* 10a4d57a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10a4d57c push 0x10a4d550 */
  push32((uint32_t)(0x10a4d550u));
  /* 10a4d581 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10a4d588 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10a4d58f:;
  /* 10a4d58f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10a4d593 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a4d596 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10a4d599 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d59c je 0x10a4d5cc */
  if (C.zf) goto L_10a4d5cc;
  /* 10a4d59e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d5a2 je 0x10a4d5cc */
  if (C.zf) goto L_10a4d5cc;
  /* 10a4d5a4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10a4d5a7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10a4d5aa mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10a4d5ae mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10a4d5b1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d5b6 jne 0x10a4d5ca */
  if (!C.zf) goto L_10a4d5ca;
  /* 10a4d5b8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10a4d5bd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10a4d5c1 call 0x10a4d606 */
  push32(0x10a4d5c6u); f_10a4d606();
  /* 10a4d5c6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10a4d5cau);
L_10a4d5ca:;
  /* 10a4d5ca jmp 0x10a4d58f */
  goto L_10a4d58f;
L_10a4d5cc:;
  /* 10a4d5cc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10a4d5d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d5d6 pop edi */
  EDI = (pop32());
  /* 10a4d5d7 pop esi */
  ESI = (pop32());
  /* 10a4d5d8 pop ebx */
  EBX = (pop32());
  /* 10a4d5d9 ret  */
  ESPCHK(0x10a4d572u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d606 @ 0x10a4d606 (24 bytes, 10 insns) */
void f_10a4d606(void) {
  FTRACE(0x10a4d606u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4d606 push ebx */
  push32((uint32_t)(EBX));
  /* 10a4d607 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4d608 mov ebx, 0x10a6f3b8 */
  EBX = (0x10a6f3b8u);
  /* 10a4d60d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d610 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10a4d613 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10a4d616 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10a4d619 pop ecx */
  ECX = (pop32());
  /* 10a4d61a pop ebx */
  EBX = (pop32());
  /* 10a4d61b ret 4 */
  ESPCHK(0x10a4d606u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d6e5 @ 0x10a4d6e5 (27 bytes, 11 insns) */
void f_10a4d6e5(void) {
  FTRACE(0x10a4d6e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4d6e5 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4d6e6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a4d6ea mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10a4d6ec mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10a4d6ef push eax */
  push32((uint32_t)(EAX));
  /* 10a4d6f0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a4d6f3 push eax */
  push32((uint32_t)(EAX));
  /* 10a4d6f4 call 0x10a4d572 */
  push32(0x10a4d6f9u); f_10a4d572();
  /* 10a4d6f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d6fc pop ebp */
  EBP = (pop32());
  /* 10a4d6fd ret 4 */
  ESPCHK(0x10a4d6e5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d700 @ 0x10a4d700 (482 bytes, 138 insns) */
void f_10a4d700(void) {
  FTRACE(0x10a4d700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4d700 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4d701 mov ebp, esp */
  EBP = (ESP);
  /* 10a4d703 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4d706 push esi */
  push32((uint32_t)(ESI));
  /* 10a4d707 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10a4d70e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10a4d710 call 0x10a47f20 */
  push32(0x10a4d715u); f_10a47f20();
  /* 10a4d715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d718 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a4d71f jmp 0x10a4d72a */
  goto L_10a4d72a;
L_10a4d721:;
  /* 10a4d721 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4d724 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d727 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a4d72a:;
  /* 10a4d72a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d72e jge 0x10a4d8d0 */
  if ((C.sf==C.of)) goto L_10a4d8d0;
  /* 10a4d734 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4d737 cmp dword ptr [ecx*4 + 0x10a71fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10a71fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d73f je 0x10a4d836 */
  if (C.zf) goto L_10a4d836;
  /* 10a4d745 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4d748 mov eax, dword ptr [edx*4 + 0x10a71fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a71fe0)));
  /* 10a4d74f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4d752 jmp 0x10a4d75d */
  goto L_10a4d75d;
L_10a4d754:;
  /* 10a4d754 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d757 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d75a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a4d75d:;
  /* 10a4d75d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4d760 mov eax, dword ptr [edx*4 + 0x10a71fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a71fe0)));
  /* 10a4d767 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d76c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d76f jae 0x10a4d826 */
  if (!C.cf) goto L_10a4d826;
  /* 10a4d775 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d778 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a4d77c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4d77f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4d781 jne 0x10a4d821 */
  if (!C.zf) goto L_10a4d821;
  /* 10a4d787 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d78a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d78e jne 0x10a4d7c9 */
  if (!C.zf) goto L_10a4d7c9;
  /* 10a4d790 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a4d792 call 0x10a47f20 */
  push32(0x10a4d797u); f_10a47f20();
  /* 10a4d797 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d79a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d79d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d7a1 jne 0x10a4d7bf */
  if (!C.zf) goto L_10a4d7bf;
  /* 10a4d7a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d7a6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d7a9 push edx */
  push32((uint32_t)(EDX));
  /* 10a4d7aa call dword ptr [0x10a73374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73374))), 0x10a4d7b0u);
  /* 10a4d7b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d7b3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a4d7b6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d7b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d7bc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10a4d7bf:;
  /* 10a4d7bf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a4d7c1 call 0x10a47fc0 */
  push32(0x10a4d7c6u); f_10a47fc0();
  /* 10a4d7c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4d7c9:;
  /* 10a4d7c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d7cc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d7cf push eax */
  push32((uint32_t)(EAX));
  /* 10a4d7d0 call dword ptr [0x10a73360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73360))), 0x10a4d7d6u);
  /* 10a4d7d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d7d9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a4d7dd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4d7e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4d7e2 je 0x10a4d7f6 */
  if (C.zf) goto L_10a4d7f6;
  /* 10a4d7e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d7e7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d7ea push eax */
  push32((uint32_t)(EAX));
  /* 10a4d7eb call dword ptr [0x10a73378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73378))), 0x10a4d7f1u);
  /* 10a4d7f1 jmp 0x10a4d754 */
  goto L_10a4d754;
L_10a4d7f6:;
  /* 10a4d7f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d7f9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10a4d7ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4d802 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a4d805 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4d808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d80b sub eax, dword ptr [edx*4 + 0x10a71fe0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10a71fe0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4d812 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a4d813 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10a4d818 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a4d81a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d81c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4d81f jmp 0x10a4d826 */
  goto L_10a4d826;
L_10a4d821:;
  /* 10a4d821 jmp 0x10a4d754 */
  goto L_10a4d754;
L_10a4d826:;
  /* 10a4d826 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d82a je 0x10a4d831 */
  if (C.zf) goto L_10a4d831;
  /* 10a4d82c jmp 0x10a4d8d0 */
  goto L_10a4d8d0;
L_10a4d831:;
  /* 10a4d831 jmp 0x10a4d8cb */
  goto L_10a4d8cb;
L_10a4d836:;
  /* 10a4d836 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10a4d838 push 0x10a6c584 */
  push32((uint32_t)(0x10a6c584u));
  /* 10a4d83d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4d83f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10a4d844 call 0x10a44520 */
  push32(0x10a4d849u); f_10a44520();
  /* 10a4d849 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d84c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4d84f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d853 je 0x10a4d8c9 */
  if (C.zf) goto L_10a4d8c9;
  /* 10a4d855 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4d858 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d85b mov dword ptr [eax*4 + 0x10a71fe0], ecx */
  w32((uint32_t)(EAX*4 + 0x10a71fe0), (ECX));
  /* 10a4d862 mov edx, dword ptr [0x10a7211c] */
  EDX = (r32((uint32_t)(0x10a7211c)));
  /* 10a4d868 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d86b mov dword ptr [0x10a7211c], edx */
  w32((uint32_t)(0x10a7211c), (EDX));
  /* 10a4d871 jmp 0x10a4d87c */
  goto L_10a4d87c;
L_10a4d873:;
  /* 10a4d873 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d876 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d879 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a4d87c:;
  /* 10a4d87c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4d87f mov edx, dword ptr [ecx*4 + 0x10a71fe0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a71fe0)));
  /* 10a4d886 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d88c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d88f jae 0x10a4d8b4 */
  if (!C.cf) goto L_10a4d8b4;
  /* 10a4d891 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d894 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10a4d898 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d89b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10a4d8a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d8a4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10a4d8a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4d8ab mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10a4d8b2 jmp 0x10a4d873 */
  goto L_10a4d873;
L_10a4d8b4:;
  /* 10a4d8b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4d8b7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a4d8ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4d8bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4d8c0 push edx */
  push32((uint32_t)(EDX));
  /* 10a4d8c1 call 0x10a4dc10 */
  push32(0x10a4d8c6u); f_10a4dc10();
  /* 10a4d8c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4d8c9:;
  /* 10a4d8c9 jmp 0x10a4d8d0 */
  goto L_10a4d8d0;
L_10a4d8cb:;
  /* 10a4d8cb jmp 0x10a4d721 */
  goto L_10a4d721;
L_10a4d8d0:;
  /* 10a4d8d0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10a4d8d2 call 0x10a47fc0 */
  push32(0x10a4d8d7u); f_10a47fc0();
  /* 10a4d8d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4d8da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4d8dd pop esi */
  ESI = (pop32());
  /* 10a4d8de mov esp, ebp */
  ESP = (EBP);
  /* 10a4d8e0 pop ebp */
  EBP = (pop32());
  /* 10a4d8e1 ret  */
  ESPCHK(0x10a4d700u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10a4d8f0 (183 bytes, 57 insns) */
void f_10a4d8f0(void) {
  FTRACE(0x10a4d8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4d8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4d8f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4d8f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4d8f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d8f7 cmp eax, dword ptr [0x10a7211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a7211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d8fd jae 0x10a4d98a */
  if (!C.cf) goto L_10a4d98a;
  /* 10a4d903 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d906 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a4d909 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d90c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4d90f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4d912 mov eax, dword ptr [ecx*4 + 0x10a71fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a71fe0)));
  /* 10a4d919 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d91d jne 0x10a4d98a */
  if (!C.zf) goto L_10a4d98a;
  /* 10a4d91f cmp dword ptr [0x10a705f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a705f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d926 jne 0x10a4d96a */
  if (!C.zf) goto L_10a4d96a;
  /* 10a4d928 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d92b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a4d92e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d932 je 0x10a4d942 */
  if (C.zf) goto L_10a4d942;
  /* 10a4d934 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d938 je 0x10a4d950 */
  if (C.zf) goto L_10a4d950;
  /* 10a4d93a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d93e je 0x10a4d95e */
  if (C.zf) goto L_10a4d95e;
  /* 10a4d940 jmp 0x10a4d96a */
  goto L_10a4d96a;
L_10a4d942:;
  /* 10a4d942 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4d945 push edx */
  push32((uint32_t)(EDX));
  /* 10a4d946 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10a4d948 call dword ptr [0x10a732b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732b4))), 0x10a4d94eu);
  /* 10a4d94e jmp 0x10a4d96a */
  goto L_10a4d96a;
L_10a4d950:;
  /* 10a4d950 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4d953 push eax */
  push32((uint32_t)(EAX));
  /* 10a4d954 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10a4d956 call dword ptr [0x10a732b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732b4))), 0x10a4d95cu);
  /* 10a4d95c jmp 0x10a4d96a */
  goto L_10a4d96a;
L_10a4d95e:;
  /* 10a4d95e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4d961 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4d962 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10a4d964 call dword ptr [0x10a732b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732b4))), 0x10a4d96au);
L_10a4d96a:;
  /* 10a4d96a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d96d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10a4d970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d973 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4d976 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4d979 mov ecx, dword ptr [edx*4 + 0x10a71fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10a71fe0)));
  /* 10a4d980 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4d983 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10a4d986 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4d988 jmp 0x10a4d9a3 */
  goto L_10a4d9a3;
L_10a4d98a:;
  /* 10a4d98a call 0x10a4c3f0 */
  push32(0x10a4d98fu); f_10a4c3f0();
  /* 10a4d98f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a4d995 call 0x10a4c400 */
  push32(0x10a4d99au); f_10a4c400();
  /* 10a4d99a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a4d9a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a4d9a3:;
  /* 10a4d9a3 mov esp, ebp */
  ESP = (EBP);
  /* 10a4d9a5 pop ebp */
  EBP = (pop32());
  /* 10a4d9a6 ret  */
  ESPCHK(0x10a4d8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9b0 @ 0x10a4d9b0 (216 bytes, 63 insns) */
void f_10a4d9b0(void) {
  FTRACE(0x10a4d9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4d9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4d9b1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4d9b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4d9b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d9b7 cmp eax, dword ptr [0x10a7211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a7211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4d9bd jae 0x10a4da6b */
  if (!C.cf) goto L_10a4da6b;
  /* 10a4d9c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d9c6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a4d9c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d9cc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4d9cf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4d9d2 mov eax, dword ptr [ecx*4 + 0x10a71fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a71fe0)));
  /* 10a4d9d9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a4d9de and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4d9e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4d9e3 je 0x10a4da6b */
  if (C.zf) goto L_10a4da6b;
  /* 10a4d9e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d9ec sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10a4d9ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4d9f2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4d9f5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4d9f8 mov ecx, dword ptr [edx*4 + 0x10a71fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10a71fe0)));
  /* 10a4d9ff cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4da03 je 0x10a4da6b */
  if (C.zf) goto L_10a4da6b;
  /* 10a4da05 cmp dword ptr [0x10a705f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a705f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4da0c jne 0x10a4da4a */
  if (!C.zf) goto L_10a4da4a;
  /* 10a4da0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4da11 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a4da14 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4da18 je 0x10a4da28 */
  if (C.zf) goto L_10a4da28;
  /* 10a4da1a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4da1e je 0x10a4da34 */
  if (C.zf) goto L_10a4da34;
  /* 10a4da20 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4da24 je 0x10a4da40 */
  if (C.zf) goto L_10a4da40;
  /* 10a4da26 jmp 0x10a4da4a */
  goto L_10a4da4a;
L_10a4da28:;
  /* 10a4da28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4da2a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10a4da2c call dword ptr [0x10a732b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732b4))), 0x10a4da32u);
  /* 10a4da32 jmp 0x10a4da4a */
  goto L_10a4da4a;
L_10a4da34:;
  /* 10a4da34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4da36 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10a4da38 call dword ptr [0x10a732b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732b4))), 0x10a4da3eu);
  /* 10a4da3e jmp 0x10a4da4a */
  goto L_10a4da4a;
L_10a4da40:;
  /* 10a4da40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4da42 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10a4da44 call dword ptr [0x10a732b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732b4))), 0x10a4da4au);
L_10a4da4a:;
  /* 10a4da4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4da4d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a4da50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4da53 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4da56 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4da59 mov edx, dword ptr [eax*4 + 0x10a71fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a71fe0)));
  /* 10a4da60 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10a4da67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4da69 jmp 0x10a4da84 */
  goto L_10a4da84;
L_10a4da6b:;
  /* 10a4da6b call 0x10a4c3f0 */
  push32(0x10a4da70u); f_10a4c3f0();
  /* 10a4da70 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a4da76 call 0x10a4c400 */
  push32(0x10a4da7bu); f_10a4c400();
  /* 10a4da7b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a4da81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a4da84:;
  /* 10a4da84 mov esp, ebp */
  ESP = (EBP);
  /* 10a4da86 pop ebp */
  EBP = (pop32());
  /* 10a4da87 ret  */
  ESPCHK(0x10a4d9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da90 @ 0x10a4da90 (102 bytes, 30 insns) */
void f_10a4da90(void) {
  FTRACE(0x10a4da90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4da90 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4da91 mov ebp, esp */
  EBP = (ESP);
  /* 10a4da93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4da96 cmp eax, dword ptr [0x10a7211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a7211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4da9c jae 0x10a4dadb */
  if (!C.cf) goto L_10a4dadb;
  /* 10a4da9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4daa1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a4daa4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4daa7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4daaa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4daad mov eax, dword ptr [ecx*4 + 0x10a71fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a71fe0)));
  /* 10a4dab4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a4dab9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4dabc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4dabe je 0x10a4dadb */
  if (C.zf) goto L_10a4dadb;
  /* 10a4dac0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4dac3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10a4dac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4dac9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4dacc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4dacf mov ecx, dword ptr [edx*4 + 0x10a71fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10a71fe0)));
  /* 10a4dad6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10a4dad9 jmp 0x10a4daf4 */
  goto L_10a4daf4;
L_10a4dadb:;
  /* 10a4dadb call 0x10a4c3f0 */
  push32(0x10a4dae0u); f_10a4c3f0();
  /* 10a4dae0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a4dae6 call 0x10a4c400 */
  push32(0x10a4daebu); f_10a4c400();
  /* 10a4daeb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a4daf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a4daf4:;
  /* 10a4daf4 pop ebp */
  EBP = (pop32());
  /* 10a4daf5 ret  */
  ESPCHK(0x10a4da90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db00 @ 0x10a4db00 (260 bytes, 83 insns) */
void f_10a4db00(void) {
  FTRACE(0x10a4db00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4db00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4db01 mov ebp, esp */
  EBP = (ESP);
  /* 10a4db03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4db06 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a4db0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4db0d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4db10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4db12 je 0x10a4db1d */
  if (C.zf) goto L_10a4db1d;
  /* 10a4db14 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a4db17 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10a4db1a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10a4db1d:;
  /* 10a4db1d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4db20 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4db26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4db28 je 0x10a4db32 */
  if (C.zf) goto L_10a4db32;
  /* 10a4db2a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a4db2d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10a4db2f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10a4db32:;
  /* 10a4db32 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4db35 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4db3b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4db3d je 0x10a4db48 */
  if (C.zf) goto L_10a4db48;
  /* 10a4db3f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a4db42 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10a4db45 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10a4db48:;
  /* 10a4db48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4db4b push eax */
  push32((uint32_t)(EAX));
  /* 10a4db4c call dword ptr [0x10a73270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73270))), 0x10a4db52u);
  /* 10a4db52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4db55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4db59 jne 0x10a4db72 */
  if (!C.zf) goto L_10a4db72;
  /* 10a4db5b call dword ptr [0x10a73328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73328))), 0x10a4db61u);
  /* 10a4db61 push eax */
  push32((uint32_t)(EAX));
  /* 10a4db62 call 0x10a4c350 */
  push32(0x10a4db67u); f_10a4c350();
  /* 10a4db67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4db6a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4db6d jmp 0x10a4dc00 */
  goto L_10a4dc00;
L_10a4db72:;
  /* 10a4db72 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4db76 jne 0x10a4db83 */
  if (!C.zf) goto L_10a4db83;
  /* 10a4db78 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a4db7b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10a4db7e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10a4db81 jmp 0x10a4db92 */
  goto L_10a4db92;
L_10a4db83:;
  /* 10a4db83 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4db87 jne 0x10a4db92 */
  if (!C.zf) goto L_10a4db92;
  /* 10a4db89 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a4db8c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10a4db8f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10a4db92:;
  /* 10a4db92 call 0x10a4d700 */
  push32(0x10a4db97u); f_10a4d700();
  /* 10a4db97 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a4db9a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4db9e jne 0x10a4dbbb */
  if (!C.zf) goto L_10a4dbbb;
  /* 10a4dba0 call 0x10a4c3f0 */
  push32(0x10a4dba5u); f_10a4c3f0();
  /* 10a4dba5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10a4dbab call 0x10a4c400 */
  push32(0x10a4dbb0u); f_10a4c400();
  /* 10a4dbb0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a4dbb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4dbb9 jmp 0x10a4dc00 */
  goto L_10a4dc00;
L_10a4dbbb:;
  /* 10a4dbbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4dbbe push eax */
  push32((uint32_t)(EAX));
  /* 10a4dbbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4dbc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4dbc3 call 0x10a4d8f0 */
  push32(0x10a4dbc8u); f_10a4d8f0();
  /* 10a4dbc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4dbcb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a4dbce or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10a4dbd1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10a4dbd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4dbd7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a4dbda mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4dbdd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4dbe0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4dbe3 mov edx, dword ptr [eax*4 + 0x10a71fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a71fe0)));
  /* 10a4dbea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a4dbed mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10a4dbf1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4dbf4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4dbf5 call 0x10a4dca0 */
  push32(0x10a4dbfau); f_10a4dca0();
  /* 10a4dbfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4dbfd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a4dc00:;
  /* 10a4dc00 mov esp, ebp */
  ESP = (EBP);
  /* 10a4dc02 pop ebp */
  EBP = (pop32());
  /* 10a4dc03 ret  */
  ESPCHK(0x10a4db00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc10 @ 0x10a4dc10 (134 bytes, 44 insns) */
void f_10a4dc10(void) {
  FTRACE(0x10a4dc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4dc10 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4dc11 mov ebp, esp */
  EBP = (ESP);
  /* 10a4dc13 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4dc14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4dc17 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a4dc1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4dc1d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4dc20 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4dc23 mov edx, dword ptr [eax*4 + 0x10a71fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a71fe0)));
  /* 10a4dc2a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4dc2c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a4dc2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4dc32 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4dc36 jne 0x10a4dc71 */
  if (!C.zf) goto L_10a4dc71;
  /* 10a4dc38 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a4dc3a call 0x10a47f20 */
  push32(0x10a4dc3fu); f_10a47f20();
  /* 10a4dc3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4dc42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4dc45 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4dc49 jne 0x10a4dc67 */
  if (!C.zf) goto L_10a4dc67;
  /* 10a4dc4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4dc4e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4dc51 push edx */
  push32((uint32_t)(EDX));
  /* 10a4dc52 call dword ptr [0x10a73374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73374))), 0x10a4dc58u);
  /* 10a4dc58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4dc5b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a4dc5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4dc61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4dc64 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10a4dc67:;
  /* 10a4dc67 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a4dc69 call 0x10a47fc0 */
  push32(0x10a4dc6eu); f_10a47fc0();
  /* 10a4dc6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4dc71:;
  /* 10a4dc71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4dc74 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a4dc77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4dc7a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4dc7d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4dc80 mov edx, dword ptr [eax*4 + 0x10a71fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a71fe0)));
  /* 10a4dc87 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10a4dc8b push eax */
  push32((uint32_t)(EAX));
  /* 10a4dc8c call dword ptr [0x10a73360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73360))), 0x10a4dc92u);
  /* 10a4dc92 mov esp, ebp */
  ESP = (EBP);
  /* 10a4dc94 pop ebp */
  EBP = (pop32());
  /* 10a4dc95 ret  */
  ESPCHK(0x10a4dc10u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10a4dca0 (38 bytes, 13 insns) */
void f_10a4dca0(void) {
  FTRACE(0x10a4dca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4dca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4dca1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4dca3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4dca6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a4dca9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4dcac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4dcaf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4dcb2 mov edx, dword ptr [eax*4 + 0x10a71fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a71fe0)));
  /* 10a4dcb9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10a4dcbd push eax */
  push32((uint32_t)(EAX));
  /* 10a4dcbe call dword ptr [0x10a73378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73378))), 0x10a4dcc4u);
  /* 10a4dcc4 pop ebp */
  EBP = (pop32());
  /* 10a4dcc5 ret  */
  ESPCHK(0x10a4dca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcd0 @ 0x10a4dcd0 (218 bytes, 63 insns) */
void f_10a4dcd0(void) {
  FTRACE(0x10a4dcd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4dcd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4dcd1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4dcd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4dcd6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a4dcdd push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4dcdf call 0x10a47f20 */
  push32(0x10a4dce4u); f_10a47f20();
  /* 10a4dce4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4dce7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10a4dcee jmp 0x10a4dcf9 */
  goto L_10a4dcf9;
L_10a4dcf0:;
  /* 10a4dcf0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4dcf3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4dcf6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a4dcf9:;
  /* 10a4dcf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4dcfc cmp ecx, dword ptr [0x10a71ce0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a71ce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4dd02 jge 0x10a4dd99 */
  if ((C.sf==C.of)) goto L_10a4dd99;
  /* 10a4dd08 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4dd0b mov eax, dword ptr [0x10a70990] */
  EAX = (r32((uint32_t)(0x10a70990)));
  /* 10a4dd10 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4dd14 je 0x10a4dd94 */
  if (C.zf) goto L_10a4dd94;
  /* 10a4dd16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4dd19 mov edx, dword ptr [0x10a70990] */
  EDX = (r32((uint32_t)(0x10a70990)));
  /* 10a4dd1f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10a4dd22 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a4dd25 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4dd2b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4dd2d je 0x10a4dd51 */
  if (C.zf) goto L_10a4dd51;
  /* 10a4dd2f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4dd32 mov eax, dword ptr [0x10a70990] */
  EAX = (r32((uint32_t)(0x10a70990)));
  /* 10a4dd37 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10a4dd3a push ecx */
  push32((uint32_t)(ECX));
  /* 10a4dd3b call 0x10a4eac0 */
  push32(0x10a4dd40u); f_10a4eac0();
  /* 10a4dd40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4dd43 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4dd46 je 0x10a4dd51 */
  if (C.zf) goto L_10a4dd51;
  /* 10a4dd48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4dd4b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4dd4e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a4dd51:;
  /* 10a4dd51 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4dd55 jl 0x10a4dd94 */
  if ((C.sf!=C.of)) goto L_10a4dd94;
  /* 10a4dd57 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4dd5a mov ecx, dword ptr [0x10a70990] */
  ECX = (r32((uint32_t)(0x10a70990)));
  /* 10a4dd60 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a4dd63 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4dd66 push edx */
  push32((uint32_t)(EDX));
  /* 10a4dd67 call dword ptr [0x10a7333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7333c))), 0x10a4dd6du);
  /* 10a4dd6d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4dd6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4dd72 mov ecx, dword ptr [0x10a70990] */
  ECX = (r32((uint32_t)(0x10a70990)));
  /* 10a4dd78 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a4dd7b push edx */
  push32((uint32_t)(EDX));
  /* 10a4dd7c call 0x10a44fb0 */
  push32(0x10a4dd81u); f_10a44fb0();
  /* 10a4dd81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4dd84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4dd87 mov ecx, dword ptr [0x10a70990] */
  ECX = (r32((uint32_t)(0x10a70990)));
  /* 10a4dd8d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10a4dd94:;
  /* 10a4dd94 jmp 0x10a4dcf0 */
  goto L_10a4dcf0;
L_10a4dd99:;
  /* 10a4dd99 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4dd9b call 0x10a47fc0 */
  push32(0x10a4dda0u); f_10a47fc0();
  /* 10a4dda0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4dda3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4dda6 mov esp, ebp */
  ESP = (EBP);
  /* 10a4dda8 pop ebp */
  EBP = (pop32());
  /* 10a4dda9 ret  */
  ESPCHK(0x10a4dcd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddb0 @ 0x10a4ddb0 (68 bytes, 26 insns) */
void f_10a4ddb0(void) {
  FTRACE(0x10a4ddb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4ddb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4ddb1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4ddb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ddb4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ddb8 jne 0x10a4ddc6 */
  if (!C.zf) goto L_10a4ddc6;
  /* 10a4ddba push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4ddbc call 0x10a4df20 */
  push32(0x10a4ddc1u); f_10a4df20();
  /* 10a4ddc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ddc4 jmp 0x10a4ddf0 */
  goto L_10a4ddf0;
L_10a4ddc6:;
  /* 10a4ddc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ddc9 push eax */
  push32((uint32_t)(EAX));
  /* 10a4ddca call 0x10a4d330 */
  push32(0x10a4ddcfu); f_10a4d330();
  /* 10a4ddcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ddd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ddd5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ddd6 call 0x10a4de00 */
  push32(0x10a4dddbu); f_10a4de00();
  /* 10a4dddb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ddde mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4dde1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4dde4 push edx */
  push32((uint32_t)(EDX));
  /* 10a4dde5 call 0x10a4d3a0 */
  push32(0x10a4ddeau); f_10a4d3a0();
  /* 10a4ddea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4dded mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a4ddf0:;
  /* 10a4ddf0 mov esp, ebp */
  ESP = (EBP);
  /* 10a4ddf2 pop ebp */
  EBP = (pop32());
  /* 10a4ddf3 ret  */
  ESPCHK(0x10a4ddb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de00 @ 0x10a4de00 (65 bytes, 26 insns) */
void f_10a4de00(void) {
  FTRACE(0x10a4de00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4de00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4de01 mov ebp, esp */
  EBP = (ESP);
  /* 10a4de03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4de06 push eax */
  push32((uint32_t)(EAX));
  /* 10a4de07 call 0x10a4de50 */
  push32(0x10a4de0cu); f_10a4de50();
  /* 10a4de0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4de0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4de11 je 0x10a4de18 */
  if (C.zf) goto L_10a4de18;
  /* 10a4de13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4de16 jmp 0x10a4de3f */
  goto L_10a4de3f;
L_10a4de18:;
  /* 10a4de18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4de1b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a4de1e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4de24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4de26 je 0x10a4de3d */
  if (C.zf) goto L_10a4de3d;
  /* 10a4de28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4de2b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a4de2e push ecx */
  push32((uint32_t)(ECX));
  /* 10a4de2f call 0x10a4ec10 */
  push32(0x10a4de34u); f_10a4ec10();
  /* 10a4de34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4de37 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a4de39 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4de3b jmp 0x10a4de3f */
  goto L_10a4de3f;
L_10a4de3d:;
  /* 10a4de3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a4de3f:;
  /* 10a4de3f pop ebp */
  EBP = (pop32());
  /* 10a4de40 ret  */
  ESPCHK(0x10a4de00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de50 @ 0x10a4de50 (183 bytes, 62 insns) */
void f_10a4de50(void) {
  FTRACE(0x10a4de50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4de50 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4de51 mov ebp, esp */
  EBP = (ESP);
  /* 10a4de53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4de56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a4de5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4de60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a4de63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4de66 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a4de69 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4de6c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4de6f jne 0x10a4deeb */
  if (!C.zf) goto L_10a4deeb;
  /* 10a4de71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4de74 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a4de77 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4de7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4de7f je 0x10a4deeb */
  if (C.zf) goto L_10a4deeb;
  /* 10a4de81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4de84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4de87 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10a4de89 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4de8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4de8f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4de93 jle 0x10a4deeb */
  if ((C.zf||C.sf!=C.of)) goto L_10a4deeb;
  /* 10a4de95 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4de98 push edx */
  push32((uint32_t)(EDX));
  /* 10a4de99 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4de9c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a4de9f push ecx */
  push32((uint32_t)(ECX));
  /* 10a4dea0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4dea3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a4dea6 push eax */
  push32((uint32_t)(EAX));
  /* 10a4dea7 call 0x10a4cdc0 */
  push32(0x10a4deacu); f_10a4cdc0();
  /* 10a4deac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4deaf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4deb2 jne 0x10a4ded5 */
  if (!C.zf) goto L_10a4ded5;
  /* 10a4deb4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4deb7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a4deba and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4dec0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4dec2 je 0x10a4ded3 */
  if (C.zf) goto L_10a4ded3;
  /* 10a4dec4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4dec7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a4deca and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4decd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4ded0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10a4ded3:;
  /* 10a4ded3 jmp 0x10a4deeb */
  goto L_10a4deeb;
L_10a4ded5:;
  /* 10a4ded5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4ded8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a4dedb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4dede mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4dee1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10a4dee4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a4deeb:;
  /* 10a4deeb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4deee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4def1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a4def4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a4def6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4def9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10a4df00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4df03 mov esp, ebp */
  ESP = (EBP);
  /* 10a4df05 pop ebp */
  EBP = (pop32());
  /* 10a4df06 ret  */
  ESPCHK(0x10a4de50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df10 @ 0x10a4df10 (15 bytes, 7 insns) */
void f_10a4df10(void) {
  FTRACE(0x10a4df10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4df10 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4df11 mov ebp, esp */
  EBP = (ESP);
  /* 10a4df13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4df15 call 0x10a4df20 */
  push32(0x10a4df1au); f_10a4df20();
  /* 10a4df1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4df1d pop ebp */
  EBP = (pop32());
  /* 10a4df1e ret  */
  ESPCHK(0x10a4df10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df20 @ 0x10a4df20 (319 bytes, 94 insns) */
void f_10a4df20(void) {
  FTRACE(0x10a4df20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4df20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4df21 mov ebp, esp */
  EBP = (ESP);
  /* 10a4df23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4df26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a4df2d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a4df34 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4df36 call 0x10a47f20 */
  push32(0x10a4df3bu); f_10a47f20();
  /* 10a4df3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4df3e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a4df45 jmp 0x10a4df50 */
  goto L_10a4df50;
L_10a4df47:;
  /* 10a4df47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4df4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4df4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a4df50:;
  /* 10a4df50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4df53 cmp ecx, dword ptr [0x10a71ce0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a71ce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4df59 jge 0x10a4e043 */
  if ((C.sf==C.of)) goto L_10a4e043;
  /* 10a4df5f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4df62 mov eax, dword ptr [0x10a70990] */
  EAX = (r32((uint32_t)(0x10a70990)));
  /* 10a4df67 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4df6b je 0x10a4e03e */
  if (C.zf) goto L_10a4e03e;
  /* 10a4df71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4df74 mov edx, dword ptr [0x10a70990] */
  EDX = (r32((uint32_t)(0x10a70990)));
  /* 10a4df7a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10a4df7d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a4df80 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4df86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4df88 je 0x10a4e03e */
  if (C.zf) goto L_10a4e03e;
  /* 10a4df8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4df91 mov eax, dword ptr [0x10a70990] */
  EAX = (r32((uint32_t)(0x10a70990)));
  /* 10a4df96 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10a4df99 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4df9a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4df9d push edx */
  push32((uint32_t)(EDX));
  /* 10a4df9e call 0x10a4d370 */
  push32(0x10a4dfa3u); f_10a4d370();
  /* 10a4dfa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4dfa6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4dfa9 mov ecx, dword ptr [0x10a70990] */
  ECX = (r32((uint32_t)(0x10a70990)));
  /* 10a4dfaf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a4dfb2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a4dfb5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4dfba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4dfbc je 0x10a4e025 */
  if (C.zf) goto L_10a4e025;
  /* 10a4dfbe cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4dfc2 jne 0x10a4dfe9 */
  if (!C.zf) goto L_10a4dfe9;
  /* 10a4dfc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4dfc7 mov edx, dword ptr [0x10a70990] */
  EDX = (r32((uint32_t)(0x10a70990)));
  /* 10a4dfcd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10a4dfd0 push eax */
  push32((uint32_t)(EAX));
  /* 10a4dfd1 call 0x10a4de00 */
  push32(0x10a4dfd6u); f_10a4de00();
  /* 10a4dfd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4dfd9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4dfdc je 0x10a4dfe7 */
  if (C.zf) goto L_10a4dfe7;
  /* 10a4dfde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4dfe1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4dfe4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a4dfe7:;
  /* 10a4dfe7 jmp 0x10a4e025 */
  goto L_10a4e025;
L_10a4dfe9:;
  /* 10a4dfe9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4dfed jne 0x10a4e025 */
  if (!C.zf) goto L_10a4e025;
  /* 10a4dfef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4dff2 mov eax, dword ptr [0x10a70990] */
  EAX = (r32((uint32_t)(0x10a70990)));
  /* 10a4dff7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10a4dffa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a4dffd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4e000 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4e002 je 0x10a4e025 */
  if (C.zf) goto L_10a4e025;
  /* 10a4e004 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4e007 mov ecx, dword ptr [0x10a70990] */
  ECX = (r32((uint32_t)(0x10a70990)));
  /* 10a4e00d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a4e010 push edx */
  push32((uint32_t)(EDX));
  /* 10a4e011 call 0x10a4de00 */
  push32(0x10a4e016u); f_10a4de00();
  /* 10a4e016 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e019 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e01c jne 0x10a4e025 */
  if (!C.zf) goto L_10a4e025;
  /* 10a4e01e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10a4e025:;
  /* 10a4e025 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4e028 mov ecx, dword ptr [0x10a70990] */
  ECX = (r32((uint32_t)(0x10a70990)));
  /* 10a4e02e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a4e031 push edx */
  push32((uint32_t)(EDX));
  /* 10a4e032 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4e035 push eax */
  push32((uint32_t)(EAX));
  /* 10a4e036 call 0x10a4d3e0 */
  push32(0x10a4e03bu); f_10a4d3e0();
  /* 10a4e03b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4e03e:;
  /* 10a4e03e jmp 0x10a4df47 */
  goto L_10a4df47;
L_10a4e043:;
  /* 10a4e043 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4e045 call 0x10a47fc0 */
  push32(0x10a4e04au); f_10a47fc0();
  /* 10a4e04a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e04d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e051 jne 0x10a4e058 */
  if (!C.zf) goto L_10a4e058;
  /* 10a4e053 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4e056 jmp 0x10a4e05b */
  goto L_10a4e05b;
L_10a4e058:;
  /* 10a4e058 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a4e05b:;
  /* 10a4e05b mov esp, ebp */
  ESP = (EBP);
  /* 10a4e05d pop ebp */
  EBP = (pop32());
  /* 10a4e05e ret  */
  ESPCHK(0x10a4df20u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10a4e060 (15 bytes, 7 insns) */
void f_10a4e060(void) {
  FTRACE(0x10a4e060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4e060 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4e061 mov ebp, esp */
  EBP = (ESP);
  /* 10a4e063 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4e065 call 0x10a43490 */
  push32(0x10a4e06au); f_10a43490();
  /* 10a4e06a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e06d pop ebp */
  EBP = (pop32());
  /* 10a4e06e ret  */
  ESPCHK(0x10a4e060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e070 @ 0x10a4e070 (1007 bytes, 269 insns) */
void f_10a4e070(void) {
  FTRACE(0x10a4e070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4e070 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4e071 mov ebp, esp */
  EBP = (ESP);
  /* 10a4e073 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4e079 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e07d jl 0x10a4e085 */
  if ((C.sf!=C.of)) goto L_10a4e085;
  /* 10a4e07f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e083 jle 0x10a4e08c */
  if ((C.zf||C.sf!=C.of)) goto L_10a4e08c;
L_10a4e085:;
  /* 10a4e085 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4e087 jmp 0x10a4e45b */
  goto L_10a4e45b;
L_10a4e08c:;
  /* 10a4e08c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a4e08e call 0x10a47f20 */
  push32(0x10a4e093u); f_10a47f20();
  /* 10a4e093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e096 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a4e09d mov eax, dword ptr [0x10a7097c] */
  EAX = (r32((uint32_t)(0x10a7097c)));
  /* 10a4e0a2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e0a5 mov dword ptr [0x10a7097c], eax */
  w32((uint32_t)(0x10a7097c), (EAX));
L_10a4e0aa:;
  /* 10a4e0aa cmp dword ptr [0x10a7098c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7098c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e0b1 je 0x10a4e0bd */
  if (C.zf) goto L_10a4e0bd;
  /* 10a4e0b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4e0b5 call dword ptr [0x10a732a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732a4))), 0x10a4e0bbu);
  /* 10a4e0bb jmp 0x10a4e0aa */
  goto L_10a4e0aa;
L_10a4e0bd:;
  /* 10a4e0bd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e0c1 je 0x10a4e101 */
  if (C.zf) goto L_10a4e101;
  /* 10a4e0c3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e0c7 je 0x10a4e0e1 */
  if (C.zf) goto L_10a4e0e1;
  /* 10a4e0c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e0cc push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e0cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e0d0 push edx */
  push32((uint32_t)(EDX));
  /* 10a4e0d1 call 0x10a4e460 */
  push32(0x10a4e0d6u); f_10a4e460();
  /* 10a4e0d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e0d9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10a4e0df jmp 0x10a4e0f3 */
  goto L_10a4e0f3;
L_10a4e0e1:;
  /* 10a4e0e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e0e4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4e0e7 mov ecx, dword ptr [eax + 0x10a6f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10a6f4dc)));
  /* 10a4e0ed mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10a4e0f3:;
  /* 10a4e0f3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10a4e0f9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a4e0fc jmp 0x10a4e43b */
  goto L_10a4e43b;
L_10a4e101:;
  /* 10a4e101 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10a4e108 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a4e10f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e113 je 0x10a4e433 */
  if (C.zf) goto L_10a4e433;
  /* 10a4e119 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e11c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a4e11f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e122 jne 0x10a4e344 */
  if (!C.zf) goto L_10a4e344;
  /* 10a4e128 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e12b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10a4e12f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e132 jne 0x10a4e344 */
  if (!C.zf) goto L_10a4e344;
  /* 10a4e138 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e13b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10a4e13f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e142 jne 0x10a4e344 */
  if (!C.zf) goto L_10a4e344;
  /* 10a4e148 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e14b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10a4e151:;
  /* 10a4e151 push 0x10a6c5d4 */
  push32((uint32_t)(0x10a6c5d4u));
  /* 10a4e156 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a4e15c push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e15d call 0x10a502c0 */
  push32(0x10a4e162u); f_10a502c0();
  /* 10a4e162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e165 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10a4e16b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e172 je 0x10a4e19d */
  if (C.zf) goto L_10a4e19d;
  /* 10a4e174 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a4e17a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4e180 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10a4e186 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e18d je 0x10a4e19d */
  if (C.zf) goto L_10a4e19d;
  /* 10a4e18f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a4e195 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a4e198 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e19b jne 0x10a4e1c3 */
  if (!C.zf) goto L_10a4e1c3;
L_10a4e19d:;
  /* 10a4e19d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e1a1 je 0x10a4e1bc */
  if (C.zf) goto L_10a4e1bc;
  /* 10a4e1a3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a4e1a5 call 0x10a47fc0 */
  push32(0x10a4e1aau); f_10a47fc0();
  /* 10a4e1aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e1ad mov edx, dword ptr [0x10a7097c] */
  EDX = (r32((uint32_t)(0x10a7097c)));
  /* 10a4e1b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4e1b6 mov dword ptr [0x10a7097c], edx */
  w32((uint32_t)(0x10a7097c), (EDX));
L_10a4e1bc:;
  /* 10a4e1bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4e1be jmp 0x10a4e45b */
  goto L_10a4e45b;
L_10a4e1c3:;
  /* 10a4e1c3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10a4e1ca jmp 0x10a4e1d5 */
  goto L_10a4e1d5;
L_10a4e1cc:;
  /* 10a4e1cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4e1cf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e1d2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10a4e1d5:;
  /* 10a4e1d5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e1d9 jg 0x10a4e223 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a4e223;
  /* 10a4e1db mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10a4e1e1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e1e2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a4e1e8 push edx */
  push32((uint32_t)(EDX));
  /* 10a4e1e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4e1ec imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4e1ef mov ecx, dword ptr [eax + 0x10a6f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x10a6f4d8)));
  /* 10a4e1f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e1f6 call 0x10a50280 */
  push32(0x10a4e1fbu); f_10a50280();
  /* 10a4e1fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e1fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4e200 jne 0x10a4e221 */
  if (!C.zf) goto L_10a4e221;
  /* 10a4e202 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4e205 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4e208 mov eax, dword ptr [edx + 0x10a6f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x10a6f4d8)));
  /* 10a4e20e push eax */
  push32((uint32_t)(EAX));
  /* 10a4e20f call 0x10a47350 */
  push32(0x10a4e214u); f_10a47350();
  /* 10a4e214 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e217 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e21d jne 0x10a4e221 */
  if (!C.zf) goto L_10a4e221;
  /* 10a4e21f jmp 0x10a4e223 */
  goto L_10a4e223;
L_10a4e221:;
  /* 10a4e221 jmp 0x10a4e1cc */
  goto L_10a4e1cc;
L_10a4e223:;
  /* 10a4e223 push 0x10a6c5d0 */
  push32((uint32_t)(0x10a6c5d0u));
  /* 10a4e228 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a4e22e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e231 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10a4e237 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a4e23d push edx */
  push32((uint32_t)(EDX));
  /* 10a4e23e call 0x10a50240 */
  push32(0x10a4e243u); f_10a50240();
  /* 10a4e243 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e246 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10a4e24c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e253 jne 0x10a4e289 */
  if (!C.zf) goto L_10a4e289;
  /* 10a4e255 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a4e25b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a4e25e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e261 je 0x10a4e289 */
  if (C.zf) goto L_10a4e289;
  /* 10a4e263 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e267 je 0x10a4e282 */
  if (C.zf) goto L_10a4e282;
  /* 10a4e269 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a4e26b call 0x10a47fc0 */
  push32(0x10a4e270u); f_10a47fc0();
  /* 10a4e270 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e273 mov edx, dword ptr [0x10a7097c] */
  EDX = (r32((uint32_t)(0x10a7097c)));
  /* 10a4e279 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4e27c mov dword ptr [0x10a7097c], edx */
  w32((uint32_t)(0x10a7097c), (EDX));
L_10a4e282:;
  /* 10a4e282 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4e284 jmp 0x10a4e45b */
  goto L_10a4e45b;
L_10a4e289:;
  /* 10a4e289 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e28d jg 0x10a4e2da */
  if ((!C.zf&&C.sf==C.of)) goto L_10a4e2da;
  /* 10a4e28f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10a4e295 push eax */
  push32((uint32_t)(EAX));
  /* 10a4e296 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a4e29c push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e29d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10a4e2a3 push edx */
  push32((uint32_t)(EDX));
  /* 10a4e2a4 call 0x10a47d40 */
  push32(0x10a4e2a9u); f_10a47d40();
  /* 10a4e2a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e2ac mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10a4e2b2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10a4e2ba lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10a4e2c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e2c1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4e2c4 push edx */
  push32((uint32_t)(EDX));
  /* 10a4e2c5 call 0x10a4e460 */
  push32(0x10a4e2cau); f_10a4e460();
  /* 10a4e2ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e2cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4e2cf je 0x10a4e2da */
  if (C.zf) goto L_10a4e2da;
  /* 10a4e2d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4e2d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e2d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a4e2da:;
  /* 10a4e2da mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a4e2e0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e2e6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10a4e2ec mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a4e2f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a4e2f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4e2f7 je 0x10a4e308 */
  if (C.zf) goto L_10a4e308;
  /* 10a4e2f9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a4e2ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e302 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10a4e308:;
  /* 10a4e308 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a4e30e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a4e311 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4e313 jne 0x10a4e151 */
  if (!C.zf) goto L_10a4e151;
  /* 10a4e319 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e31d je 0x10a4e32c */
  if (C.zf) goto L_10a4e32c;
  /* 10a4e31f call 0x10a4e600 */
  push32(0x10a4e324u); f_10a4e600();
  /* 10a4e324 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10a4e32a jmp 0x10a4e336 */
  goto L_10a4e336;
L_10a4e32c:;
  /* 10a4e32c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10a4e336:;
  /* 10a4e336 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10a4e33c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4e33f jmp 0x10a4e431 */
  goto L_10a4e431;
L_10a4e344:;
  /* 10a4e344 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e347 push edx */
  push32((uint32_t)(EDX));
  /* 10a4e348 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4e34a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4e34c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10a4e352 push eax */
  push32((uint32_t)(EAX));
  /* 10a4e353 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e356 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e357 call 0x10a4e700 */
  push32(0x10a4e35cu); f_10a4e700();
  /* 10a4e35c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e35f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a4e362 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e366 je 0x10a4e431 */
  if (C.zf) goto L_10a4e431;
  /* 10a4e36c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a4e373 jmp 0x10a4e37e */
  goto L_10a4e37e;
L_10a4e375:;
  /* 10a4e375 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4e378 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e37b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a4e37e:;
  /* 10a4e37e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e382 jg 0x10a4e3e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a4e3e0;
  /* 10a4e384 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e388 je 0x10a4e3de */
  if (C.zf) goto L_10a4e3de;
  /* 10a4e38a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4e38d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4e390 mov ecx, dword ptr [eax + 0x10a6f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10a6f4dc)));
  /* 10a4e396 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e397 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10a4e39d push edx */
  push32((uint32_t)(EDX));
  /* 10a4e39e call 0x10a501b0 */
  push32(0x10a4e3a3u); f_10a501b0();
  /* 10a4e3a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e3a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4e3a8 je 0x10a4e3d5 */
  if (C.zf) goto L_10a4e3d5;
  /* 10a4e3aa lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10a4e3b0 push eax */
  push32((uint32_t)(EAX));
  /* 10a4e3b1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4e3b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e3b5 call 0x10a4e460 */
  push32(0x10a4e3bau); f_10a4e460();
  /* 10a4e3ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e3bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4e3bf je 0x10a4e3cc */
  if (C.zf) goto L_10a4e3cc;
  /* 10a4e3c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4e3c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e3c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a4e3ca jmp 0x10a4e3d3 */
  goto L_10a4e3d3;
L_10a4e3cc:;
  /* 10a4e3cc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10a4e3d3:;
  /* 10a4e3d3 jmp 0x10a4e3de */
  goto L_10a4e3de;
L_10a4e3d5:;
  /* 10a4e3d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4e3d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e3db mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a4e3de:;
  /* 10a4e3de jmp 0x10a4e375 */
  goto L_10a4e375;
L_10a4e3e0:;
  /* 10a4e3e0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e3e4 je 0x10a4e40b */
  if (C.zf) goto L_10a4e40b;
  /* 10a4e3e6 call 0x10a4e600 */
  push32(0x10a4e3ebu); f_10a4e600();
  /* 10a4e3eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a4e3ee push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4e3f0 mov ecx, dword ptr [0x10a6f4dc] */
  ECX = (r32((uint32_t)(0x10a6f4dc)));
  /* 10a4e3f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e3f7 call 0x10a44fb0 */
  push32(0x10a4e3fcu); f_10a44fb0();
  /* 10a4e3fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e3ff mov dword ptr [0x10a6f4dc], 0 */
  w32((uint32_t)(0x10a6f4dc), (0x0u));
  /* 10a4e409 jmp 0x10a4e431 */
  goto L_10a4e431;
L_10a4e40b:;
  /* 10a4e40b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e40f je 0x10a4e41e */
  if (C.zf) goto L_10a4e41e;
  /* 10a4e411 call 0x10a4e600 */
  push32(0x10a4e416u); f_10a4e600();
  /* 10a4e416 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10a4e41c jmp 0x10a4e428 */
  goto L_10a4e428;
L_10a4e41e:;
  /* 10a4e41e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10a4e428:;
  /* 10a4e428 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10a4e42e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a4e431:;
  /* 10a4e431 jmp 0x10a4e43b */
  goto L_10a4e43b;
L_10a4e433:;
  /* 10a4e433 call 0x10a4e600 */
  push32(0x10a4e438u); f_10a4e600();
  /* 10a4e438 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a4e43b:;
  /* 10a4e43b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e43f je 0x10a4e458 */
  if (C.zf) goto L_10a4e458;
  /* 10a4e441 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a4e443 call 0x10a47fc0 */
  push32(0x10a4e448u); f_10a47fc0();
  /* 10a4e448 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e44b mov eax, dword ptr [0x10a7097c] */
  EAX = (r32((uint32_t)(0x10a7097c)));
  /* 10a4e450 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4e453 mov dword ptr [0x10a7097c], eax */
  w32((uint32_t)(0x10a7097c), (EAX));
L_10a4e458:;
  /* 10a4e458 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a4e45b:;
  /* 10a4e45b mov esp, ebp */
  ESP = (EBP);
  /* 10a4e45d pop ebp */
  EBP = (pop32());
  /* 10a4e45e ret  */
  ESPCHK(0x10a4e070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e460 @ 0x10a4e460 (403 bytes, 117 insns) */
void f_10a4e460(void) {
  FTRACE(0x10a4e460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4e460 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4e461 mov ebp, esp */
  EBP = (ESP);
  /* 10a4e463 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4e469 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e46c push eax */
  push32((uint32_t)(EAX));
  /* 10a4e46d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10a4e473 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e474 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10a4e47a push edx */
  push32((uint32_t)(EDX));
  /* 10a4e47b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10a4e481 push eax */
  push32((uint32_t)(EAX));
  /* 10a4e482 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e485 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e486 call 0x10a4e700 */
  push32(0x10a4e48bu); f_10a4e700();
  /* 10a4e48b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e48e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4e490 jne 0x10a4e499 */
  if (!C.zf) goto L_10a4e499;
  /* 10a4e492 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4e494 jmp 0x10a4e5ef */
  goto L_10a4e5ef;
L_10a4e499:;
  /* 10a4e499 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10a4e49e push 0x10a6c5d8 */
  push32((uint32_t)(0x10a6c5d8u));
  /* 10a4e4a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4e4a5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10a4e4ab push edx */
  push32((uint32_t)(EDX));
  /* 10a4e4ac call 0x10a47350 */
  push32(0x10a4e4b1u); f_10a47350();
  /* 10a4e4b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e4b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e4b7 push eax */
  push32((uint32_t)(EAX));
  /* 10a4e4b8 call 0x10a44520 */
  push32(0x10a4e4bdu); f_10a44520();
  /* 10a4e4bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e4c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a4e4c3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e4c7 jne 0x10a4e4d0 */
  if (!C.zf) goto L_10a4e4d0;
  /* 10a4e4c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4e4cb jmp 0x10a4e5ef */
  goto L_10a4e5ef;
L_10a4e4d0:;
  /* 10a4e4d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e4d3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4e4d6 mov ecx, dword ptr [eax + 0x10a6f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10a6f4dc)));
  /* 10a4e4dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4e4df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e4e2 mov eax, dword ptr [edx*4 + 0x10a707f8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a707f8)));
  /* 10a4e4e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4e4ec push 6 */
  push32((uint32_t)(0x6u));
  /* 10a4e4ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e4f1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4e4f4 add ecx, 0x10a70848 */
  { uint32_t _a=(ECX),_b=(0x10a70848u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e4fa push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e4fb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10a4e4fe push edx */
  push32((uint32_t)(EDX));
  /* 10a4e4ff call 0x10a4ae00 */
  push32(0x10a4e504u); f_10a4ae00();
  /* 10a4e504 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e507 mov eax, dword ptr [0x10a70810] */
  EAX = (r32((uint32_t)(0x10a70810)));
  /* 10a4e50c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a4e50f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10a4e515 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e516 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4e519 push edx */
  push32((uint32_t)(EDX));
  /* 10a4e51a call 0x10a474d0 */
  push32(0x10a4e51fu); f_10a474d0();
  /* 10a4e51f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e522 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e525 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4e528 mov dword ptr [ecx + 0x10a6f4dc], eax */
  w32((uint32_t)(ECX + 0x10a6f4dc), (EAX));
  /* 10a4e52e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10a4e534 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4e53a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e53d mov dword ptr [eax*4 + 0x10a707f8], edx */
  w32((uint32_t)(EAX*4 + 0x10a707f8), (EDX));
  /* 10a4e544 push 6 */
  push32((uint32_t)(0x6u));
  /* 10a4e546 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10a4e54c push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e54d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e550 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4e553 add edx, 0x10a70848 */
  { uint32_t _a=(EDX),_b=(0x10a70848u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e559 push edx */
  push32((uint32_t)(EDX));
  /* 10a4e55a call 0x10a4ae00 */
  push32(0x10a4e55fu); f_10a4ae00();
  /* 10a4e55f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e562 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e566 jne 0x10a4e573 */
  if (!C.zf) goto L_10a4e573;
  /* 10a4e568 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a4e56e mov dword ptr [0x10a70810], eax */
  w32((uint32_t)(0x10a70810), (EAX));
L_10a4e573:;
  /* 10a4e573 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e577 jne 0x10a4e585 */
  if (!C.zf) goto L_10a4e585;
  /* 10a4e579 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a4e57f mov dword ptr [0x10a70814], ecx */
  w32((uint32_t)(0x10a70814), (ECX));
L_10a4e585:;
  /* 10a4e585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e588 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4e58b call dword ptr [edx + 0x10a6f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10a6f4e0))), 0x10a4e591u);
  /* 10a4e591 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4e593 je 0x10a4e5cc */
  if (C.zf) goto L_10a4e5cc;
  /* 10a4e595 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e598 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4e59b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4e59e mov dword ptr [eax + 0x10a6f4dc], ecx */
  w32((uint32_t)(EAX + 0x10a6f4dc), (ECX));
  /* 10a4e5a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4e5a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4e5a9 push edx */
  push32((uint32_t)(EDX));
  /* 10a4e5aa call 0x10a44fb0 */
  push32(0x10a4e5afu); f_10a44fb0();
  /* 10a4e5af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e5b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e5b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4e5b8 mov dword ptr [eax*4 + 0x10a707f8], ecx */
  w32((uint32_t)(EAX*4 + 0x10a707f8), (ECX));
  /* 10a4e5bf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4e5c2 mov dword ptr [0x10a70810], edx */
  w32((uint32_t)(0x10a70810), (EDX));
  /* 10a4e5c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4e5ca jmp 0x10a4e5ef */
  goto L_10a4e5ef;
L_10a4e5cc:;
  /* 10a4e5cc cmp dword ptr [ebp - 0xc], 0x10a6f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10a6f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e5d3 je 0x10a4e5e3 */
  if (C.zf) goto L_10a4e5e3;
  /* 10a4e5d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4e5d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4e5da push eax */
  push32((uint32_t)(EAX));
  /* 10a4e5db call 0x10a44fb0 */
  push32(0x10a4e5e0u); f_10a44fb0();
  /* 10a4e5e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4e5e3:;
  /* 10a4e5e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e5e6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4e5e9 mov eax, dword ptr [ecx + 0x10a6f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x10a6f4dc)));
L_10a4e5ef:;
  /* 10a4e5ef mov esp, ebp */
  ESP = (EBP);
  /* 10a4e5f1 pop ebp */
  EBP = (pop32());
  /* 10a4e5f2 ret  */
  ESPCHK(0x10a4e460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e600 @ 0x10a4e600 (256 bytes, 72 insns) */
void f_10a4e600(void) {
  FTRACE(0x10a4e600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4e600 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4e601 mov ebp, esp */
  EBP = (ESP);
  /* 10a4e603 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4e606 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10a4e60d cmp dword ptr [0x10a6f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a6f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e614 jne 0x10a4e634 */
  if (!C.zf) goto L_10a4e634;
  /* 10a4e616 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10a4e61b push 0x10a6c5d8 */
  push32((uint32_t)(0x10a6c5d8u));
  /* 10a4e620 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4e622 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10a4e627 call 0x10a44520 */
  push32(0x10a4e62cu); f_10a44520();
  /* 10a4e62c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e62f mov dword ptr [0x10a6f4dc], eax */
  w32((uint32_t)(0x10a6f4dc), (EAX));
L_10a4e634:;
  /* 10a4e634 mov eax, dword ptr [0x10a6f4dc] */
  EAX = (r32((uint32_t)(0x10a6f4dc)));
  /* 10a4e639 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a4e63c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a4e643 jmp 0x10a4e64e */
  goto L_10a4e64e;
L_10a4e645:;
  /* 10a4e645 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4e648 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e64b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a4e64e:;
  /* 10a4e64e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4e651 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4e654 mov eax, dword ptr [edx + 0x10a6f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10a6f4dc)));
  /* 10a4e65a push eax */
  push32((uint32_t)(EAX));
  /* 10a4e65b push 0x10a6c5e4 */
  push32((uint32_t)(0x10a6c5e4u));
  /* 10a4e660 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4e663 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4e666 mov edx, dword ptr [ecx + 0x10a6f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x10a6f4d8)));
  /* 10a4e66c push edx */
  push32((uint32_t)(EDX));
  /* 10a4e66d push 3 */
  push32((uint32_t)(0x3u));
  /* 10a4e66f mov eax, dword ptr [0x10a6f4dc] */
  EAX = (r32((uint32_t)(0x10a6f4dc)));
  /* 10a4e674 push eax */
  push32((uint32_t)(EAX));
  /* 10a4e675 call 0x10a4e8a0 */
  push32(0x10a4e67au); f_10a4e8a0();
  /* 10a4e67a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e67d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e681 jge 0x10a4e6c9 */
  if ((C.sf==C.of)) goto L_10a4e6c9;
  /* 10a4e683 push 0x10a6c5d0 */
  push32((uint32_t)(0x10a6c5d0u));
  /* 10a4e688 mov ecx, dword ptr [0x10a6f4dc] */
  ECX = (r32((uint32_t)(0x10a6f4dc)));
  /* 10a4e68e push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e68f call 0x10a474e0 */
  push32(0x10a4e694u); f_10a474e0();
  /* 10a4e694 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e697 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4e69a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e69d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4e6a0 mov eax, dword ptr [edx + 0x10a6f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10a6f4dc)));
  /* 10a4e6a6 push eax */
  push32((uint32_t)(EAX));
  /* 10a4e6a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4e6aa imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4e6ad mov edx, dword ptr [ecx + 0x10a6f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x10a6f4dc)));
  /* 10a4e6b3 push edx */
  push32((uint32_t)(EDX));
  /* 10a4e6b4 call 0x10a501b0 */
  push32(0x10a4e6b9u); f_10a501b0();
  /* 10a4e6b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e6bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4e6be je 0x10a4e6c7 */
  if (C.zf) goto L_10a4e6c7;
  /* 10a4e6c0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a4e6c7:;
  /* 10a4e6c7 jmp 0x10a4e6f7 */
  goto L_10a4e6f7;
L_10a4e6c9:;
  /* 10a4e6c9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e6cd jne 0x10a4e6d6 */
  if (!C.zf) goto L_10a4e6d6;
  /* 10a4e6cf mov eax, dword ptr [0x10a6f4dc] */
  EAX = (r32((uint32_t)(0x10a6f4dc)));
  /* 10a4e6d4 jmp 0x10a4e6fc */
  goto L_10a4e6fc;
L_10a4e6d6:;
  /* 10a4e6d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4e6d8 mov eax, dword ptr [0x10a6f4dc] */
  EAX = (r32((uint32_t)(0x10a6f4dc)));
  /* 10a4e6dd push eax */
  push32((uint32_t)(EAX));
  /* 10a4e6de call 0x10a44fb0 */
  push32(0x10a4e6e3u); f_10a44fb0();
  /* 10a4e6e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e6e6 mov dword ptr [0x10a6f4dc], 0 */
  w32((uint32_t)(0x10a6f4dc), (0x0u));
  /* 10a4e6f0 mov eax, dword ptr [0x10a6f4f4] */
  EAX = (r32((uint32_t)(0x10a6f4f4)));
  /* 10a4e6f5 jmp 0x10a4e6fc */
  goto L_10a4e6fc;
L_10a4e6f7:;
  /* 10a4e6f7 jmp 0x10a4e645 */
  goto L_10a4e645;
L_10a4e6fc:;
  /* 10a4e6fc mov esp, ebp */
  ESP = (EBP);
  /* 10a4e6fe pop ebp */
  EBP = (pop32());
  /* 10a4e6ff ret  */
  ESPCHK(0x10a4e600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e700 @ 0x10a4e700 (388 bytes, 115 insns) */
void f_10a4e700(void) {
  FTRACE(0x10a4e700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4e700 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4e701 mov ebp, esp */
  EBP = (ESP);
  /* 10a4e703 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4e709 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e70d jne 0x10a4e716 */
  if (!C.zf) goto L_10a4e716;
  /* 10a4e70f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4e711 jmp 0x10a4e880 */
  goto L_10a4e880;
L_10a4e716:;
  /* 10a4e716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e719 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a4e71c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e71f jne 0x10a4e770 */
  if (!C.zf) goto L_10a4e770;
  /* 10a4e721 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e724 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10a4e728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4e72a jne 0x10a4e770 */
  if (!C.zf) goto L_10a4e770;
  /* 10a4e72c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e72f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10a4e732 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e735 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10a4e739 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e73d je 0x10a4e759 */
  if (C.zf) goto L_10a4e759;
  /* 10a4e73f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4e742 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10a4e747 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4e74a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10a4e750 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4e753 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10a4e759:;
  /* 10a4e759 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e75d je 0x10a4e768 */
  if (C.zf) goto L_10a4e768;
  /* 10a4e75f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a4e762 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10a4e768:;
  /* 10a4e768 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e76b jmp 0x10a4e880 */
  goto L_10a4e880;
L_10a4e770:;
  /* 10a4e770 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e773 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e774 push 0x10a6f450 */
  push32((uint32_t)(0x10a6f450u));
  /* 10a4e779 call 0x10a501b0 */
  push32(0x10a4e77eu); f_10a501b0();
  /* 10a4e77e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e781 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4e783 je 0x10a4e838 */
  if (C.zf) goto L_10a4e838;
  /* 10a4e789 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e78c push edx */
  push32((uint32_t)(EDX));
  /* 10a4e78d push 0x10a6f3cc */
  push32((uint32_t)(0x10a6f3ccu));
  /* 10a4e792 call 0x10a501b0 */
  push32(0x10a4e797u); f_10a501b0();
  /* 10a4e797 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e79a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4e79c je 0x10a4e838 */
  if (C.zf) goto L_10a4e838;
  /* 10a4e7a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e7a5 push eax */
  push32((uint32_t)(EAX));
  /* 10a4e7a6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10a4e7ac push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e7ad call 0x10a4e8f0 */
  push32(0x10a4e7b2u); f_10a4e8f0();
  /* 10a4e7b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e7b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4e7b7 je 0x10a4e7c0 */
  if (C.zf) goto L_10a4e7c0;
  /* 10a4e7b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4e7bb jmp 0x10a4e880 */
  goto L_10a4e880;
L_10a4e7c0:;
  /* 10a4e7c0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10a4e7c6 push edx */
  push32((uint32_t)(EDX));
  /* 10a4e7c7 push 0x10a70820 */
  push32((uint32_t)(0x10a70820u));
  /* 10a4e7cc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10a4e7d2 push eax */
  push32((uint32_t)(EAX));
  /* 10a4e7d3 call 0x10a50300 */
  push32(0x10a4e7d8u); f_10a50300();
  /* 10a4e7d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e7db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4e7dd jne 0x10a4e7e6 */
  if (!C.zf) goto L_10a4e7e6;
  /* 10a4e7df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4e7e1 jmp 0x10a4e880 */
  goto L_10a4e880;
L_10a4e7e6:;
  /* 10a4e7e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4e7e8 mov cx, word ptr [0x10a70824] */
  CX = (r16((uint32_t)(0x10a70824)));
  /* 10a4e7ef mov dword ptr [0x10a70828], ecx */
  w32((uint32_t)(0x10a70828), (ECX));
  /* 10a4e7f5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10a4e7fb push edx */
  push32((uint32_t)(EDX));
  /* 10a4e7fc push 0x10a6f450 */
  push32((uint32_t)(0x10a6f450u));
  /* 10a4e801 call 0x10a4ea50 */
  push32(0x10a4e806u); f_10a4ea50();
  /* 10a4e806 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e809 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e80c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a4e80f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4e811 je 0x10a4e826 */
  if (C.zf) goto L_10a4e826;
  /* 10a4e813 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e816 push edx */
  push32((uint32_t)(EDX));
  /* 10a4e817 push 0x10a6f3cc */
  push32((uint32_t)(0x10a6f3ccu));
  /* 10a4e81c call 0x10a474d0 */
  push32(0x10a4e821u); f_10a474d0();
  /* 10a4e821 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e824 jmp 0x10a4e838 */
  goto L_10a4e838;
L_10a4e826:;
  /* 10a4e826 push 0x10a6f450 */
  push32((uint32_t)(0x10a6f450u));
  /* 10a4e82b push 0x10a6f3cc */
  push32((uint32_t)(0x10a6f3ccu));
  /* 10a4e830 call 0x10a474d0 */
  push32(0x10a4e835u); f_10a474d0();
  /* 10a4e835 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4e838:;
  /* 10a4e838 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e83c je 0x10a4e851 */
  if (C.zf) goto L_10a4e851;
  /* 10a4e83e push 6 */
  push32((uint32_t)(0x6u));
  /* 10a4e840 push 0x10a70820 */
  push32((uint32_t)(0x10a70820u));
  /* 10a4e845 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4e848 push eax */
  push32((uint32_t)(EAX));
  /* 10a4e849 call 0x10a4ae00 */
  push32(0x10a4e84eu); f_10a4ae00();
  /* 10a4e84e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4e851:;
  /* 10a4e851 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e855 je 0x10a4e86a */
  if (C.zf) goto L_10a4e86a;
  /* 10a4e857 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a4e859 push 0x10a70828 */
  push32((uint32_t)(0x10a70828u));
  /* 10a4e85e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a4e861 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e862 call 0x10a4ae00 */
  push32(0x10a4e867u); f_10a4ae00();
  /* 10a4e867 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4e86a:;
  /* 10a4e86a push 0x10a6f450 */
  push32((uint32_t)(0x10a6f450u));
  /* 10a4e86f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e872 push edx */
  push32((uint32_t)(EDX));
  /* 10a4e873 call 0x10a474d0 */
  push32(0x10a4e878u); f_10a474d0();
  /* 10a4e878 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e87b mov eax, 0x10a6f450 */
  EAX = (0x10a6f450u);
L_10a4e880:;
  /* 10a4e880 mov esp, ebp */
  ESP = (EBP);
  /* 10a4e882 pop ebp */
  EBP = (pop32());
  /* 10a4e883 ret  */
  ESPCHK(0x10a4e700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e890 @ 0x10a4e890 (7 bytes, 5 insns) */
void f_10a4e890(void) {
  FTRACE(0x10a4e890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4e890 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4e891 mov ebp, esp */
  EBP = (ESP);
  /* 10a4e893 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4e895 pop ebp */
  EBP = (pop32());
  /* 10a4e896 ret  */
  ESPCHK(0x10a4e890u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10a4e8a0 (79 bytes, 28 insns) */
void f_10a4e8a0(void) {
  FTRACE(0x10a4e8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4e8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4e8a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4e8a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4e8a6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10a4e8a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4e8ac mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a4e8b3 jmp 0x10a4e8be */
  goto L_10a4e8be;
L_10a4e8b5:;
  /* 10a4e8b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4e8b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e8bb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a4e8be:;
  /* 10a4e8be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4e8c1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e8c4 jge 0x10a4e8e4 */
  if ((C.sf==C.of)) goto L_10a4e8e4;
  /* 10a4e8c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4e8c9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e8cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4e8cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4e8d2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10a4e8d5 push edx */
  push32((uint32_t)(EDX));
  /* 10a4e8d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e8d9 push eax */
  push32((uint32_t)(EAX));
  /* 10a4e8da call 0x10a474e0 */
  push32(0x10a4e8dfu); f_10a474e0();
  /* 10a4e8df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e8e2 jmp 0x10a4e8b5 */
  goto L_10a4e8b5;
L_10a4e8e4:;
  /* 10a4e8e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a4e8eb mov esp, ebp */
  ESP = (EBP);
  /* 10a4e8ed pop ebp */
  EBP = (pop32());
  /* 10a4e8ee ret  */
  ESPCHK(0x10a4e8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8f0 @ 0x10a4e8f0 (349 bytes, 122 insns) */
void f_10a4e8f0(void) {
  FTRACE(0x10a4e8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4e8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4e8f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4e8f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4e8f6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10a4e8fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4e8fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e900 push eax */
  push32((uint32_t)(EAX));
  /* 10a4e901 call 0x10a48290 */
  push32(0x10a4e906u); f_10a48290();
  /* 10a4e906 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e909 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e90c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a4e90f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4e911 jne 0x10a4e91a */
  if (!C.zf) goto L_10a4e91a;
  /* 10a4e913 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4e915 jmp 0x10a4ea49 */
  goto L_10a4ea49;
L_10a4e91a:;
  /* 10a4e91a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e91d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a4e920 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e923 jne 0x10a4e950 */
  if (!C.zf) goto L_10a4e950;
  /* 10a4e925 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e928 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10a4e92c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4e92e je 0x10a4e950 */
  if (C.zf) goto L_10a4e950;
  /* 10a4e930 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e933 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e936 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e937 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e93a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e940 push edx */
  push32((uint32_t)(EDX));
  /* 10a4e941 call 0x10a474d0 */
  push32(0x10a4e946u); f_10a474d0();
  /* 10a4e946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e949 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4e94b jmp 0x10a4ea49 */
  goto L_10a4ea49;
L_10a4e950:;
  /* 10a4e950 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a4e957 jmp 0x10a4e962 */
  goto L_10a4e962;
L_10a4e959:;
  /* 10a4e959 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4e95c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e95f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a4e962:;
  /* 10a4e962 push 0x10a6c5e8 */
  push32((uint32_t)(0x10a6c5e8u));
  /* 10a4e967 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e96a push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e96b call 0x10a50240 */
  push32(0x10a4e970u); f_10a50240();
  /* 10a4e970 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e973 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a4e976 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e97a jne 0x10a4e984 */
  if (!C.zf) goto L_10a4e984;
  /* 10a4e97c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4e97f jmp 0x10a4ea49 */
  goto L_10a4ea49;
L_10a4e984:;
  /* 10a4e984 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e987 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e98a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a4e98c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10a4e98f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e993 jne 0x10a4e9ba */
  if (!C.zf) goto L_10a4e9ba;
  /* 10a4e995 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e999 jge 0x10a4e9ba */
  if ((C.sf==C.of)) goto L_10a4e9ba;
  /* 10a4e99b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a4e99f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e9a2 je 0x10a4e9ba */
  if (C.zf) goto L_10a4e9ba;
  /* 10a4e9a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4e9a7 push edx */
  push32((uint32_t)(EDX));
  /* 10a4e9a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e9ab push eax */
  push32((uint32_t)(EAX));
  /* 10a4e9ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e9af push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e9b0 call 0x10a47d40 */
  push32(0x10a4e9b5u); f_10a47d40();
  /* 10a4e9b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e9b8 jmp 0x10a4ea20 */
  goto L_10a4ea20;
L_10a4e9ba:;
  /* 10a4e9ba cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e9be jne 0x10a4e9e8 */
  if (!C.zf) goto L_10a4e9e8;
  /* 10a4e9c0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e9c4 jge 0x10a4e9e8 */
  if ((C.sf==C.of)) goto L_10a4e9e8;
  /* 10a4e9c6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a4e9ca cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e9cd je 0x10a4e9e8 */
  if (C.zf) goto L_10a4e9e8;
  /* 10a4e9cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4e9d2 push eax */
  push32((uint32_t)(EAX));
  /* 10a4e9d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4e9d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4e9d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4e9da add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e9dd push edx */
  push32((uint32_t)(EDX));
  /* 10a4e9de call 0x10a47d40 */
  push32(0x10a4e9e3u); f_10a47d40();
  /* 10a4e9e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4e9e6 jmp 0x10a4ea20 */
  goto L_10a4ea20;
L_10a4e9e8:;
  /* 10a4e9e8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e9ec jne 0x10a4ea1b */
  if (!C.zf) goto L_10a4ea1b;
  /* 10a4e9ee movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a4e9f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4e9f4 je 0x10a4e9ff */
  if (C.zf) goto L_10a4e9ff;
  /* 10a4e9f6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a4e9fa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4e9fd jne 0x10a4ea1b */
  if (!C.zf) goto L_10a4ea1b;
L_10a4e9ff:;
  /* 10a4e9ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4ea02 push edx */
  push32((uint32_t)(EDX));
  /* 10a4ea03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4ea06 push eax */
  push32((uint32_t)(EAX));
  /* 10a4ea07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ea0a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ea10 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ea11 call 0x10a47d40 */
  push32(0x10a4ea16u); f_10a47d40();
  /* 10a4ea16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ea19 jmp 0x10a4ea20 */
  goto L_10a4ea20;
L_10a4ea1b:;
  /* 10a4ea1b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4ea1e jmp 0x10a4ea49 */
  goto L_10a4ea49;
L_10a4ea20:;
  /* 10a4ea20 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a4ea24 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ea27 jne 0x10a4ea2b */
  if (!C.zf) goto L_10a4ea2b;
  /* 10a4ea29 jmp 0x10a4ea47 */
  goto L_10a4ea47;
L_10a4ea2b:;
  /* 10a4ea2b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a4ea2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4ea31 jne 0x10a4ea35 */
  if (!C.zf) goto L_10a4ea35;
  /* 10a4ea33 jmp 0x10a4ea47 */
  goto L_10a4ea47;
L_10a4ea35:;
  /* 10a4ea35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4ea38 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4ea3b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10a4ea3f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10a4ea42 jmp 0x10a4e959 */
  goto L_10a4e959;
L_10a4ea47:;
  /* 10a4ea47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a4ea49:;
  /* 10a4ea49 mov esp, ebp */
  ESP = (EBP);
  /* 10a4ea4b pop ebp */
  EBP = (pop32());
  /* 10a4ea4c ret  */
  ESPCHK(0x10a4e8f0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10a4ea50 (101 bytes, 36 insns) */
void f_10a4ea50(void) {
  FTRACE(0x10a4ea50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4ea50 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4ea51 mov ebp, esp */
  EBP = (ESP);
  /* 10a4ea53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4ea56 push eax */
  push32((uint32_t)(EAX));
  /* 10a4ea57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ea5a push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ea5b call 0x10a474d0 */
  push32(0x10a4ea60u); f_10a474d0();
  /* 10a4ea60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ea63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4ea66 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10a4ea6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4ea6c je 0x10a4ea88 */
  if (C.zf) goto L_10a4ea88;
  /* 10a4ea6e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4ea71 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ea74 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ea75 push 0x10a6c5f0 */
  push32((uint32_t)(0x10a6c5f0u));
  /* 10a4ea7a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4ea7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ea7f push edx */
  push32((uint32_t)(EDX));
  /* 10a4ea80 call 0x10a4e8a0 */
  push32(0x10a4ea85u); f_10a4e8a0();
  /* 10a4ea85 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4ea88:;
  /* 10a4ea88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4ea8b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10a4ea92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4ea94 je 0x10a4eab3 */
  if (C.zf) goto L_10a4eab3;
  /* 10a4ea96 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4ea99 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ea9f push edx */
  push32((uint32_t)(EDX));
  /* 10a4eaa0 push 0x10a6c5ec */
  push32((uint32_t)(0x10a6c5ecu));
  /* 10a4eaa5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4eaa7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4eaaa push eax */
  push32((uint32_t)(EAX));
  /* 10a4eaab call 0x10a4e8a0 */
  push32(0x10a4eab0u); f_10a4e8a0();
  /* 10a4eab0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4eab3:;
  /* 10a4eab3 pop ebp */
  EBP = (pop32());
  /* 10a4eab4 ret  */
  ESPCHK(0x10a4ea50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eac0 @ 0x10a4eac0 (130 bytes, 50 insns) */
void f_10a4eac0(void) {
  FTRACE(0x10a4eac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4eac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4eac1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4eac3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4eac4 push ebx */
  push32((uint32_t)(EBX));
  /* 10a4eac5 push esi */
  push32((uint32_t)(ESI));
  /* 10a4eac6 push edi */
  push32((uint32_t)(EDI));
  /* 10a4eac7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a4eace:;
  /* 10a4eace cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ead2 jne 0x10a4eaf2 */
  if (!C.zf) goto L_10a4eaf2;
  /* 10a4ead4 push 0x10a6c600 */
  push32((uint32_t)(0x10a6c600u));
  /* 10a4ead9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4eadb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10a4eadd push 0x10a6c5f4 */
  push32((uint32_t)(0x10a6c5f4u));
  /* 10a4eae2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4eae4 call 0x10a435e0 */
  push32(0x10a4eae9u); f_10a435e0();
  /* 10a4eae9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4eaec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4eaef jne 0x10a4eaf2 */
  if (!C.zf) goto L_10a4eaf2;
  /* 10a4eaf1 int3  */
  x86_unimpl("int3 @ 0x10a4eaf1");
L_10a4eaf2:;
  /* 10a4eaf2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4eaf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4eaf6 jne 0x10a4eace */
  if (!C.zf) goto L_10a4eace;
  /* 10a4eaf8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4eafb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a4eafe and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4eb01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4eb03 je 0x10a4eb11 */
  if (C.zf) goto L_10a4eb11;
  /* 10a4eb05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4eb08 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10a4eb0f jmp 0x10a4eb38 */
  goto L_10a4eb38;
L_10a4eb11:;
  /* 10a4eb11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4eb14 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4eb15 call 0x10a4d330 */
  push32(0x10a4eb1au); f_10a4d330();
  /* 10a4eb1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4eb1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4eb20 push edx */
  push32((uint32_t)(EDX));
  /* 10a4eb21 call 0x10a4eb50 */
  push32(0x10a4eb26u); f_10a4eb50();
  /* 10a4eb26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4eb29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4eb2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4eb2f push eax */
  push32((uint32_t)(EAX));
  /* 10a4eb30 call 0x10a4d3a0 */
  push32(0x10a4eb35u); f_10a4d3a0();
  /* 10a4eb35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4eb38:;
  /* 10a4eb38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4eb3b pop edi */
  EDI = (pop32());
  /* 10a4eb3c pop esi */
  ESI = (pop32());
  /* 10a4eb3d pop ebx */
  EBX = (pop32());
  /* 10a4eb3e mov esp, ebp */
  ESP = (EBP);
  /* 10a4eb40 pop ebp */
  EBP = (pop32());
  /* 10a4eb41 ret  */
  ESPCHK(0x10a4eac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb50 @ 0x10a4eb50 (190 bytes, 67 insns) */
void f_10a4eb50(void) {
  FTRACE(0x10a4eb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4eb50 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4eb51 mov ebp, esp */
  EBP = (ESP);
  /* 10a4eb53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4eb56 push ebx */
  push32((uint32_t)(EBX));
  /* 10a4eb57 push esi */
  push32((uint32_t)(ESI));
  /* 10a4eb58 push edi */
  push32((uint32_t)(EDI));
  /* 10a4eb59 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a4eb60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4eb63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a4eb66:;
  /* 10a4eb66 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4eb6a jne 0x10a4eb8a */
  if (!C.zf) goto L_10a4eb8a;
  /* 10a4eb6c push 0x10a6c4a4 */
  push32((uint32_t)(0x10a6c4a4u));
  /* 10a4eb71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4eb73 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10a4eb75 push 0x10a6c5f4 */
  push32((uint32_t)(0x10a6c5f4u));
  /* 10a4eb7a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4eb7c call 0x10a435e0 */
  push32(0x10a4eb81u); f_10a435e0();
  /* 10a4eb81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4eb84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4eb87 jne 0x10a4eb8a */
  if (!C.zf) goto L_10a4eb8a;
  /* 10a4eb89 int3  */
  x86_unimpl("int3 @ 0x10a4eb89");
L_10a4eb8a:;
  /* 10a4eb8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4eb8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4eb8e jne 0x10a4eb66 */
  if (!C.zf) goto L_10a4eb66;
  /* 10a4eb90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4eb93 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a4eb96 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4eb9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4eb9d je 0x10a4ebfa */
  if (C.zf) goto L_10a4ebfa;
  /* 10a4eb9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4eba2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4eba3 call 0x10a4de50 */
  push32(0x10a4eba8u); f_10a4de50();
  /* 10a4eba8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ebab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4ebae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4ebb1 push edx */
  push32((uint32_t)(EDX));
  /* 10a4ebb2 call 0x10a511d0 */
  push32(0x10a4ebb7u); f_10a511d0();
  /* 10a4ebb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ebba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4ebbd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a4ebc0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ebc1 call 0x10a510a0 */
  push32(0x10a4ebc6u); f_10a510a0();
  /* 10a4ebc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ebc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4ebcb jge 0x10a4ebd6 */
  if ((C.sf==C.of)) goto L_10a4ebd6;
  /* 10a4ebcd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a4ebd4 jmp 0x10a4ebfa */
  goto L_10a4ebfa;
L_10a4ebd6:;
  /* 10a4ebd6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4ebd9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ebdd je 0x10a4ebfa */
  if (C.zf) goto L_10a4ebfa;
  /* 10a4ebdf push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4ebe1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4ebe4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10a4ebe7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ebe8 call 0x10a44fb0 */
  push32(0x10a4ebedu); f_10a44fb0();
  /* 10a4ebed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ebf0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4ebf3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10a4ebfa:;
  /* 10a4ebfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4ebfd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10a4ec04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ec07 pop edi */
  EDI = (pop32());
  /* 10a4ec08 pop esi */
  ESI = (pop32());
  /* 10a4ec09 pop ebx */
  EBX = (pop32());
  /* 10a4ec0a mov esp, ebp */
  ESP = (EBP);
  /* 10a4ec0c pop ebp */
  EBP = (pop32());
  /* 10a4ec0d ret  */
  ESPCHK(0x10a4eb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec10 @ 0x10a4ec10 (210 bytes, 63 insns) */
void f_10a4ec10(void) {
  FTRACE(0x10a4ec10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4ec10 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4ec11 mov ebp, esp */
  EBP = (ESP);
  /* 10a4ec13 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ec14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ec17 cmp eax, dword ptr [0x10a7211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a7211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ec1d jae 0x10a4ec41 */
  if (!C.cf) goto L_10a4ec41;
  /* 10a4ec1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ec22 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a4ec25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ec28 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4ec2b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4ec2e mov eax, dword ptr [ecx*4 + 0x10a71fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a71fe0)));
  /* 10a4ec35 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a4ec3a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ec3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4ec3f jne 0x10a4ec54 */
  if (!C.zf) goto L_10a4ec54;
L_10a4ec41:;
  /* 10a4ec41 call 0x10a4c3f0 */
  push32(0x10a4ec46u); f_10a4c3f0();
  /* 10a4ec46 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a4ec4c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4ec4f jmp 0x10a4ecde */
  goto L_10a4ecde;
L_10a4ec54:;
  /* 10a4ec54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ec57 push edx */
  push32((uint32_t)(EDX));
  /* 10a4ec58 call 0x10a4dc10 */
  push32(0x10a4ec5du); f_10a4dc10();
  /* 10a4ec5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ec60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ec63 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a4ec66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ec69 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ec6c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4ec6f mov edx, dword ptr [eax*4 + 0x10a71fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a71fe0)));
  /* 10a4ec76 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10a4ec7b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4ec7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4ec80 je 0x10a4ecbd */
  if (C.zf) goto L_10a4ecbd;
  /* 10a4ec82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ec85 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ec86 call 0x10a4da90 */
  push32(0x10a4ec8bu); f_10a4da90();
  /* 10a4ec8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ec8e push eax */
  push32((uint32_t)(EAX));
  /* 10a4ec8f call dword ptr [0x10a732a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732a0))), 0x10a4ec95u);
  /* 10a4ec95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4ec97 jne 0x10a4eca4 */
  if (!C.zf) goto L_10a4eca4;
  /* 10a4ec99 call dword ptr [0x10a73328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73328))), 0x10a4ec9fu);
  /* 10a4ec9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4eca2 jmp 0x10a4ecab */
  goto L_10a4ecab;
L_10a4eca4:;
  /* 10a4eca4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a4ecab:;
  /* 10a4ecab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ecaf jne 0x10a4ecb3 */
  if (!C.zf) goto L_10a4ecb3;
  /* 10a4ecb1 jmp 0x10a4eccf */
  goto L_10a4eccf;
L_10a4ecb3:;
  /* 10a4ecb3 call 0x10a4c400 */
  push32(0x10a4ecb8u); f_10a4c400();
  /* 10a4ecb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ecbb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a4ecbd:;
  /* 10a4ecbd call 0x10a4c3f0 */
  push32(0x10a4ecc2u); f_10a4c3f0();
  /* 10a4ecc2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a4ecc8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a4eccf:;
  /* 10a4eccf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ecd2 push eax */
  push32((uint32_t)(EAX));
  /* 10a4ecd3 call 0x10a4dca0 */
  push32(0x10a4ecd8u); f_10a4dca0();
  /* 10a4ecd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ecdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a4ecde:;
  /* 10a4ecde mov esp, ebp */
  ESP = (EBP);
  /* 10a4ece0 pop ebp */
  EBP = (pop32());
  /* 10a4ece1 ret  */
  ESPCHK(0x10a4ec10u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10a4ecf0 (219 bytes, 64 insns) */
void f_10a4ecf0(void) {
  FTRACE(0x10a4ecf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4ecf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4ecf1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4ecf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ecf4 cmp dword ptr [0x10a7080c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7080c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ecfb je 0x10a4ed91 */
  if (C.zf) goto L_10a4ed91;
  /* 10a4ed01 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10a4ed03 push 0x10a6c610 */
  push32((uint32_t)(0x10a6c610u));
  /* 10a4ed08 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4ed0a push 0xac */
  push32((uint32_t)(0xacu));
  /* 10a4ed0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4ed11 call 0x10a44930 */
  push32(0x10a4ed16u); f_10a44930();
  /* 10a4ed16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ed19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4ed1c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ed20 jne 0x10a4ed2c */
  if (!C.zf) goto L_10a4ed2c;
  /* 10a4ed22 mov eax, 1 */
  EAX = (0x1u);
  /* 10a4ed27 jmp 0x10a4edc7 */
  goto L_10a4edc7;
L_10a4ed2c:;
  /* 10a4ed2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ed2f push eax */
  push32((uint32_t)(EAX));
  /* 10a4ed30 call 0x10a4edd0 */
  push32(0x10a4ed35u); f_10a4edd0();
  /* 10a4ed35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ed38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4ed3a je 0x10a4ed5d */
  if (C.zf) goto L_10a4ed5d;
  /* 10a4ed3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ed3f push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ed40 call 0x10a4f360 */
  push32(0x10a4ed45u); f_10a4f360();
  /* 10a4ed45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ed48 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4ed4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ed4d push edx */
  push32((uint32_t)(EDX));
  /* 10a4ed4e call 0x10a44fb0 */
  push32(0x10a4ed53u); f_10a44fb0();
  /* 10a4ed53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ed56 mov eax, 1 */
  EAX = (0x1u);
  /* 10a4ed5b jmp 0x10a4edc7 */
  goto L_10a4edc7;
L_10a4ed5d:;
  /* 10a4ed5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ed60 mov dword ptr [0x10a6fc98], eax */
  w32((uint32_t)(0x10a6fc98), (EAX));
  /* 10a4ed65 mov ecx, dword ptr [0x10a7082c] */
  ECX = (r32((uint32_t)(0x10a7082c)));
  /* 10a4ed6b push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ed6c call 0x10a4f360 */
  push32(0x10a4ed71u); f_10a4f360();
  /* 10a4ed71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ed74 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4ed76 mov edx, dword ptr [0x10a7082c] */
  EDX = (r32((uint32_t)(0x10a7082c)));
  /* 10a4ed7c push edx */
  push32((uint32_t)(EDX));
  /* 10a4ed7d call 0x10a44fb0 */
  push32(0x10a4ed82u); f_10a44fb0();
  /* 10a4ed82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ed85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ed88 mov dword ptr [0x10a7082c], eax */
  w32((uint32_t)(0x10a7082c), (EAX));
  /* 10a4ed8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4ed8f jmp 0x10a4edc7 */
  goto L_10a4edc7;
L_10a4ed91:;
  /* 10a4ed91 mov dword ptr [0x10a6fc98], 0x10a6fca0 */
  w32((uint32_t)(0x10a6fc98), (0x10a6fca0u));
  /* 10a4ed9b mov ecx, dword ptr [0x10a7082c] */
  ECX = (r32((uint32_t)(0x10a7082c)));
  /* 10a4eda1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4eda2 call 0x10a4f360 */
  push32(0x10a4eda7u); f_10a4f360();
  /* 10a4eda7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4edaa push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4edac mov edx, dword ptr [0x10a7082c] */
  EDX = (r32((uint32_t)(0x10a7082c)));
  /* 10a4edb2 push edx */
  push32((uint32_t)(EDX));
  /* 10a4edb3 call 0x10a44fb0 */
  push32(0x10a4edb8u); f_10a44fb0();
  /* 10a4edb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4edbb mov dword ptr [0x10a7082c], 0 */
  w32((uint32_t)(0x10a7082c), (0x0u));
  /* 10a4edc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a4edc7:;
  /* 10a4edc7 mov esp, ebp */
  ESP = (EBP);
  /* 10a4edc9 pop ebp */
  EBP = (pop32());
  /* 10a4edca ret  */
  ESPCHK(0x10a4ecf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000edd0 @ 0x10a4edd0 (1423 bytes, 533 insns) */
void f_10a4edd0(void) {
  FTRACE(0x10a4edd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4edd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4edd1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4edd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4edd6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a4eddd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4eddf mov ax, word ptr [0x10a70866] */
  AX = (r16((uint32_t)(0x10a70866)));
  /* 10a4ede5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4ede8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4edea mov cx, word ptr [0x10a70868] */
  CX = (r16((uint32_t)(0x10a70868)));
  /* 10a4edf1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4edf4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4edf8 jne 0x10a4ee02 */
  if (!C.zf) goto L_10a4ee02;
  /* 10a4edfa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4edfd jmp 0x10a4f35b */
  goto L_10a4f35b;
L_10a4ee02:;
  /* 10a4ee02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ee05 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ee08 push edx */
  push32((uint32_t)(EDX));
  /* 10a4ee09 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10a4ee0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ee0e push eax */
  push32((uint32_t)(EAX));
  /* 10a4ee0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4ee11 call 0x10a526e0 */
  push32(0x10a4ee16u); f_10a526e0();
  /* 10a4ee16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ee19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4ee1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ee1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4ee21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ee24 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ee27 push edx */
  push32((uint32_t)(EDX));
  /* 10a4ee28 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10a4ee2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ee2d push eax */
  push32((uint32_t)(EAX));
  /* 10a4ee2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4ee30 call 0x10a526e0 */
  push32(0x10a4ee35u); f_10a526e0();
  /* 10a4ee35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ee38 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4ee3b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ee3d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4ee40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ee43 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ee46 push edx */
  push32((uint32_t)(EDX));
  /* 10a4ee47 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10a4ee49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ee4c push eax */
  push32((uint32_t)(EAX));
  /* 10a4ee4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4ee4f call 0x10a526e0 */
  push32(0x10a4ee54u); f_10a526e0();
  /* 10a4ee54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ee57 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4ee5a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ee5c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4ee5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ee62 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ee65 push edx */
  push32((uint32_t)(EDX));
  /* 10a4ee66 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10a4ee68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ee6b push eax */
  push32((uint32_t)(EAX));
  /* 10a4ee6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4ee6e call 0x10a526e0 */
  push32(0x10a4ee73u); f_10a526e0();
  /* 10a4ee73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ee76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4ee79 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ee7b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4ee7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ee81 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ee84 push edx */
  push32((uint32_t)(EDX));
  /* 10a4ee85 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10a4ee87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ee8a push eax */
  push32((uint32_t)(EAX));
  /* 10a4ee8b push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4ee8d call 0x10a526e0 */
  push32(0x10a4ee92u); f_10a526e0();
  /* 10a4ee92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ee95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4ee98 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ee9a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4ee9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4eea0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4eea3 push edx */
  push32((uint32_t)(EDX));
  /* 10a4eea4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10a4eea6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4eea9 push eax */
  push32((uint32_t)(EAX));
  /* 10a4eeaa push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4eeac call 0x10a526e0 */
  push32(0x10a4eeb1u); f_10a526e0();
  /* 10a4eeb1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4eeb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4eeb7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4eeb9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4eebc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4eebf push edx */
  push32((uint32_t)(EDX));
  /* 10a4eec0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10a4eec2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4eec5 push eax */
  push32((uint32_t)(EAX));
  /* 10a4eec6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4eec8 call 0x10a526e0 */
  push32(0x10a4eecdu); f_10a526e0();
  /* 10a4eecd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4eed0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4eed3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4eed5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4eed8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4eedb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4eede push edx */
  push32((uint32_t)(EDX));
  /* 10a4eedf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10a4eee1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4eee4 push eax */
  push32((uint32_t)(EAX));
  /* 10a4eee5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4eee7 call 0x10a526e0 */
  push32(0x10a4eeecu); f_10a526e0();
  /* 10a4eeec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4eeef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4eef2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4eef4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4eef7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4eefa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4eefd push edx */
  push32((uint32_t)(EDX));
  /* 10a4eefe push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10a4ef00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ef03 push eax */
  push32((uint32_t)(EAX));
  /* 10a4ef04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4ef06 call 0x10a526e0 */
  push32(0x10a4ef0bu); f_10a526e0();
  /* 10a4ef0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ef0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4ef11 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ef13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4ef16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ef19 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ef1c push edx */
  push32((uint32_t)(EDX));
  /* 10a4ef1d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10a4ef1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ef22 push eax */
  push32((uint32_t)(EAX));
  /* 10a4ef23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4ef25 call 0x10a526e0 */
  push32(0x10a4ef2au); f_10a526e0();
  /* 10a4ef2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ef2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4ef30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ef32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4ef35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ef38 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ef3b push edx */
  push32((uint32_t)(EDX));
  /* 10a4ef3c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10a4ef3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ef41 push eax */
  push32((uint32_t)(EAX));
  /* 10a4ef42 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4ef44 call 0x10a526e0 */
  push32(0x10a4ef49u); f_10a526e0();
  /* 10a4ef49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ef4c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4ef4f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ef51 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4ef54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ef57 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ef5a push edx */
  push32((uint32_t)(EDX));
  /* 10a4ef5b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10a4ef5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ef60 push eax */
  push32((uint32_t)(EAX));
  /* 10a4ef61 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4ef63 call 0x10a526e0 */
  push32(0x10a4ef68u); f_10a526e0();
  /* 10a4ef68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ef6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4ef6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ef70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4ef73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ef76 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ef79 push edx */
  push32((uint32_t)(EDX));
  /* 10a4ef7a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10a4ef7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ef7f push eax */
  push32((uint32_t)(EAX));
  /* 10a4ef80 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4ef82 call 0x10a526e0 */
  push32(0x10a4ef87u); f_10a526e0();
  /* 10a4ef87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ef8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4ef8d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ef8f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4ef92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4ef95 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ef98 push edx */
  push32((uint32_t)(EDX));
  /* 10a4ef99 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10a4ef9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4ef9e push eax */
  push32((uint32_t)(EAX));
  /* 10a4ef9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4efa1 call 0x10a526e0 */
  push32(0x10a4efa6u); f_10a526e0();
  /* 10a4efa6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4efa9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4efac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4efae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4efb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4efb4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4efb7 push edx */
  push32((uint32_t)(EDX));
  /* 10a4efb8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10a4efba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4efbd push eax */
  push32((uint32_t)(EAX));
  /* 10a4efbe push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4efc0 call 0x10a526e0 */
  push32(0x10a4efc5u); f_10a526e0();
  /* 10a4efc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4efc8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4efcb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4efcd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4efd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4efd3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4efd6 push edx */
  push32((uint32_t)(EDX));
  /* 10a4efd7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10a4efd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4efdc push eax */
  push32((uint32_t)(EAX));
  /* 10a4efdd push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4efdf call 0x10a526e0 */
  push32(0x10a4efe4u); f_10a526e0();
  /* 10a4efe4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4efe7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4efea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4efec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4efef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4eff2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4eff5 push edx */
  push32((uint32_t)(EDX));
  /* 10a4eff6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10a4eff8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4effb push eax */
  push32((uint32_t)(EAX));
  /* 10a4effc push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4effe call 0x10a526e0 */
  push32(0x10a4f003u); f_10a526e0();
  /* 10a4f003 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f006 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f009 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f00b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f00e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f011 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f014 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f015 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10a4f017 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f01a push eax */
  push32((uint32_t)(EAX));
  /* 10a4f01b push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f01d call 0x10a526e0 */
  push32(0x10a4f022u); f_10a526e0();
  /* 10a4f022 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f025 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f028 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f02a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f02d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f030 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f033 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f034 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10a4f036 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f039 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f03a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f03c call 0x10a526e0 */
  push32(0x10a4f041u); f_10a526e0();
  /* 10a4f041 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f044 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f047 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f049 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f04c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f04f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f052 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f053 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10a4f055 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f058 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f059 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f05b call 0x10a526e0 */
  push32(0x10a4f060u); f_10a526e0();
  /* 10a4f060 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f063 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f066 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f068 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f06b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f06e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f071 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f072 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10a4f074 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f077 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f078 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f07a call 0x10a526e0 */
  push32(0x10a4f07fu); f_10a526e0();
  /* 10a4f07f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f082 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f085 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f087 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f08a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f08d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f090 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f091 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10a4f093 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f096 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f097 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f099 call 0x10a526e0 */
  push32(0x10a4f09eu); f_10a526e0();
  /* 10a4f09e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f0a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f0a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f0a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f0a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f0ac add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f0af push edx */
  push32((uint32_t)(EDX));
  /* 10a4f0b0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10a4f0b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f0b5 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f0b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f0b8 call 0x10a526e0 */
  push32(0x10a4f0bdu); f_10a526e0();
  /* 10a4f0bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f0c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f0c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f0c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f0c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f0cb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f0ce push edx */
  push32((uint32_t)(EDX));
  /* 10a4f0cf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10a4f0d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f0d4 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f0d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f0d7 call 0x10a526e0 */
  push32(0x10a4f0dcu); f_10a526e0();
  /* 10a4f0dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f0df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f0e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f0e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f0e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f0ea add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f0ed push edx */
  push32((uint32_t)(EDX));
  /* 10a4f0ee push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10a4f0f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f0f3 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f0f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f0f6 call 0x10a526e0 */
  push32(0x10a4f0fbu); f_10a526e0();
  /* 10a4f0fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f0fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f101 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f103 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f106 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f109 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f10c push edx */
  push32((uint32_t)(EDX));
  /* 10a4f10d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10a4f10f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f112 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f113 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f115 call 0x10a526e0 */
  push32(0x10a4f11au); f_10a526e0();
  /* 10a4f11a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f11d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f120 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f122 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f125 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f128 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f12b push edx */
  push32((uint32_t)(EDX));
  /* 10a4f12c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10a4f12e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f131 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f132 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f134 call 0x10a526e0 */
  push32(0x10a4f139u); f_10a526e0();
  /* 10a4f139 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f13c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f13f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f141 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f144 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f147 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f14a push edx */
  push32((uint32_t)(EDX));
  /* 10a4f14b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10a4f14d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f150 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f151 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f153 call 0x10a526e0 */
  push32(0x10a4f158u); f_10a526e0();
  /* 10a4f158 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f15b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f15e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f160 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f163 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f166 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f169 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f16a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10a4f16c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f16f push eax */
  push32((uint32_t)(EAX));
  /* 10a4f170 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f172 call 0x10a526e0 */
  push32(0x10a4f177u); f_10a526e0();
  /* 10a4f177 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f17a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f17d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f17f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f182 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f185 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f188 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f189 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10a4f18b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f18e push eax */
  push32((uint32_t)(EAX));
  /* 10a4f18f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f191 call 0x10a526e0 */
  push32(0x10a4f196u); f_10a526e0();
  /* 10a4f196 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f199 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f19c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f19e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f1a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f1a4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f1a7 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f1a8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10a4f1aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f1ad push eax */
  push32((uint32_t)(EAX));
  /* 10a4f1ae push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f1b0 call 0x10a526e0 */
  push32(0x10a4f1b5u); f_10a526e0();
  /* 10a4f1b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f1b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f1bb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f1bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f1c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f1c3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f1c6 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f1c7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10a4f1c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f1cc push eax */
  push32((uint32_t)(EAX));
  /* 10a4f1cd push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f1cf call 0x10a526e0 */
  push32(0x10a4f1d4u); f_10a526e0();
  /* 10a4f1d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f1d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f1da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f1dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f1df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f1e2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f1e8 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f1e9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10a4f1eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f1ee push eax */
  push32((uint32_t)(EAX));
  /* 10a4f1ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f1f1 call 0x10a526e0 */
  push32(0x10a4f1f6u); f_10a526e0();
  /* 10a4f1f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f1f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f1fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f1fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f201 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f204 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f20a push edx */
  push32((uint32_t)(EDX));
  /* 10a4f20b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10a4f20d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f210 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f211 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f213 call 0x10a526e0 */
  push32(0x10a4f218u); f_10a526e0();
  /* 10a4f218 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f21b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f21e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f220 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f223 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f226 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f22c push edx */
  push32((uint32_t)(EDX));
  /* 10a4f22d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10a4f22f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f232 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f233 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f235 call 0x10a526e0 */
  push32(0x10a4f23au); f_10a526e0();
  /* 10a4f23a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f23d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f240 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f242 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f245 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f248 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f24e push edx */
  push32((uint32_t)(EDX));
  /* 10a4f24f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10a4f251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f254 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f255 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f257 call 0x10a526e0 */
  push32(0x10a4f25cu); f_10a526e0();
  /* 10a4f25c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f25f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f262 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f264 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f267 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f26a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f270 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f271 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10a4f273 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f276 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f277 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f279 call 0x10a526e0 */
  push32(0x10a4f27eu); f_10a526e0();
  /* 10a4f27e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f281 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f284 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f286 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f289 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f28c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f292 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f293 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10a4f295 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f298 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f299 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f29b call 0x10a526e0 */
  push32(0x10a4f2a0u); f_10a526e0();
  /* 10a4f2a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f2a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f2a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f2a8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f2ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f2ae add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f2b4 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f2b5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10a4f2b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f2ba push eax */
  push32((uint32_t)(EAX));
  /* 10a4f2bb push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f2bd call 0x10a526e0 */
  push32(0x10a4f2c2u); f_10a526e0();
  /* 10a4f2c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f2c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f2c8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f2ca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f2cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f2d0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f2d6 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f2d7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10a4f2d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f2dc push eax */
  push32((uint32_t)(EAX));
  /* 10a4f2dd push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f2df call 0x10a526e0 */
  push32(0x10a4f2e4u); f_10a526e0();
  /* 10a4f2e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f2e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f2ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f2ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f2ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f2f2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f2f8 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f2f9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10a4f2fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4f2fe push eax */
  push32((uint32_t)(EAX));
  /* 10a4f2ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f301 call 0x10a526e0 */
  push32(0x10a4f306u); f_10a526e0();
  /* 10a4f306 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f309 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f30c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f30e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f311 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f314 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f31a push edx */
  push32((uint32_t)(EDX));
  /* 10a4f31b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10a4f31d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4f320 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f321 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f323 call 0x10a526e0 */
  push32(0x10a4f328u); f_10a526e0();
  /* 10a4f328 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f32b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f32e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f330 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f333 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f336 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f33c push edx */
  push32((uint32_t)(EDX));
  /* 10a4f33d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10a4f342 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4f345 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f346 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f348 call 0x10a526e0 */
  push32(0x10a4f34du); f_10a526e0();
  /* 10a4f34d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f350 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4f353 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f355 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a4f358 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10a4f35b:;
  /* 10a4f35b mov esp, ebp */
  ESP = (EBP);
  /* 10a4f35d pop ebp */
  EBP = (pop32());
  /* 10a4f35e ret  */
  ESPCHK(0x10a4edd0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10a4f360 (779 bytes, 265 insns) */
void f_10a4f360(void) {
  FTRACE(0x10a4f360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4f360 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4f361 mov ebp, esp */
  EBP = (ESP);
  /* 10a4f363 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4f367 jne 0x10a4f36e */
  if (!C.zf) goto L_10a4f36e;
  /* 10a4f369 jmp 0x10a4f669 */
  goto L_10a4f669;
L_10a4f36e:;
  /* 10a4f36e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f370 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f373 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a4f376 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f377 call 0x10a44fb0 */
  push32(0x10a4f37cu); f_10a44fb0();
  /* 10a4f37c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f37f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f381 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f384 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a4f387 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f388 call 0x10a44fb0 */
  push32(0x10a4f38du); f_10a44fb0();
  /* 10a4f38d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f390 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f392 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f395 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a4f398 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f399 call 0x10a44fb0 */
  push32(0x10a4f39eu); f_10a44fb0();
  /* 10a4f39e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f3a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f3a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f3a6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a4f3a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f3aa call 0x10a44fb0 */
  push32(0x10a4f3afu); f_10a44fb0();
  /* 10a4f3af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f3b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f3b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f3b7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a4f3ba push eax */
  push32((uint32_t)(EAX));
  /* 10a4f3bb call 0x10a44fb0 */
  push32(0x10a4f3c0u); f_10a44fb0();
  /* 10a4f3c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f3c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f3c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f3c8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a4f3cb push edx */
  push32((uint32_t)(EDX));
  /* 10a4f3cc call 0x10a44fb0 */
  push32(0x10a4f3d1u); f_10a44fb0();
  /* 10a4f3d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f3d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f3d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f3d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a4f3db push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f3dc call 0x10a44fb0 */
  push32(0x10a4f3e1u); f_10a44fb0();
  /* 10a4f3e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f3e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f3e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f3e9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10a4f3ec push eax */
  push32((uint32_t)(EAX));
  /* 10a4f3ed call 0x10a44fb0 */
  push32(0x10a4f3f2u); f_10a44fb0();
  /* 10a4f3f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f3f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f3f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f3fa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10a4f3fd push edx */
  push32((uint32_t)(EDX));
  /* 10a4f3fe call 0x10a44fb0 */
  push32(0x10a4f403u); f_10a44fb0();
  /* 10a4f403 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f406 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f408 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f40b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10a4f40e push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f40f call 0x10a44fb0 */
  push32(0x10a4f414u); f_10a44fb0();
  /* 10a4f414 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f417 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f419 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f41c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10a4f41f push eax */
  push32((uint32_t)(EAX));
  /* 10a4f420 call 0x10a44fb0 */
  push32(0x10a4f425u); f_10a44fb0();
  /* 10a4f425 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f428 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f42a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f42d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10a4f430 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f431 call 0x10a44fb0 */
  push32(0x10a4f436u); f_10a44fb0();
  /* 10a4f436 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f439 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f43b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f43e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10a4f441 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f442 call 0x10a44fb0 */
  push32(0x10a4f447u); f_10a44fb0();
  /* 10a4f447 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f44a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f44c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f44f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a4f452 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f453 call 0x10a44fb0 */
  push32(0x10a4f458u); f_10a44fb0();
  /* 10a4f458 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f45b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f45d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f460 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10a4f463 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f464 call 0x10a44fb0 */
  push32(0x10a4f469u); f_10a44fb0();
  /* 10a4f469 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f46c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f46e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f471 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10a4f474 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f475 call 0x10a44fb0 */
  push32(0x10a4f47au); f_10a44fb0();
  /* 10a4f47a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f47d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f47f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f482 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10a4f485 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f486 call 0x10a44fb0 */
  push32(0x10a4f48bu); f_10a44fb0();
  /* 10a4f48b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f48e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f490 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f493 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10a4f496 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f497 call 0x10a44fb0 */
  push32(0x10a4f49cu); f_10a44fb0();
  /* 10a4f49c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f49f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f4a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f4a4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10a4f4a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f4a8 call 0x10a44fb0 */
  push32(0x10a4f4adu); f_10a44fb0();
  /* 10a4f4ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f4b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f4b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f4b5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10a4f4b8 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f4b9 call 0x10a44fb0 */
  push32(0x10a4f4beu); f_10a44fb0();
  /* 10a4f4be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f4c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f4c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f4c6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10a4f4c9 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f4ca call 0x10a44fb0 */
  push32(0x10a4f4cfu); f_10a44fb0();
  /* 10a4f4cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f4d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f4d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f4d7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10a4f4da push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f4db call 0x10a44fb0 */
  push32(0x10a4f4e0u); f_10a44fb0();
  /* 10a4f4e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f4e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f4e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f4e8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10a4f4eb push eax */
  push32((uint32_t)(EAX));
  /* 10a4f4ec call 0x10a44fb0 */
  push32(0x10a4f4f1u); f_10a44fb0();
  /* 10a4f4f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f4f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f4f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f4f9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10a4f4fc push edx */
  push32((uint32_t)(EDX));
  /* 10a4f4fd call 0x10a44fb0 */
  push32(0x10a4f502u); f_10a44fb0();
  /* 10a4f502 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f505 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f507 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f50a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10a4f50d push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f50e call 0x10a44fb0 */
  push32(0x10a4f513u); f_10a44fb0();
  /* 10a4f513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f516 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f518 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f51b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10a4f51e push eax */
  push32((uint32_t)(EAX));
  /* 10a4f51f call 0x10a44fb0 */
  push32(0x10a4f524u); f_10a44fb0();
  /* 10a4f524 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f527 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f529 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f52c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10a4f52f push edx */
  push32((uint32_t)(EDX));
  /* 10a4f530 call 0x10a44fb0 */
  push32(0x10a4f535u); f_10a44fb0();
  /* 10a4f535 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f538 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f53a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f53d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10a4f540 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f541 call 0x10a44fb0 */
  push32(0x10a4f546u); f_10a44fb0();
  /* 10a4f546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f549 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f54b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f54e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10a4f551 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f552 call 0x10a44fb0 */
  push32(0x10a4f557u); f_10a44fb0();
  /* 10a4f557 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f55a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f55c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f55f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10a4f562 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f563 call 0x10a44fb0 */
  push32(0x10a4f568u); f_10a44fb0();
  /* 10a4f568 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f56b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f56d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f570 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10a4f573 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f574 call 0x10a44fb0 */
  push32(0x10a4f579u); f_10a44fb0();
  /* 10a4f579 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f57c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f57e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f581 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10a4f584 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f585 call 0x10a44fb0 */
  push32(0x10a4f58au); f_10a44fb0();
  /* 10a4f58a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f58d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f58f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f592 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10a4f598 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f599 call 0x10a44fb0 */
  push32(0x10a4f59eu); f_10a44fb0();
  /* 10a4f59e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f5a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f5a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f5a6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10a4f5ac push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f5ad call 0x10a44fb0 */
  push32(0x10a4f5b2u); f_10a44fb0();
  /* 10a4f5b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f5b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f5b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f5ba mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10a4f5c0 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f5c1 call 0x10a44fb0 */
  push32(0x10a4f5c6u); f_10a44fb0();
  /* 10a4f5c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f5c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f5cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f5ce mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10a4f5d4 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f5d5 call 0x10a44fb0 */
  push32(0x10a4f5dau); f_10a44fb0();
  /* 10a4f5da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f5dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f5df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f5e2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10a4f5e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f5e9 call 0x10a44fb0 */
  push32(0x10a4f5eeu); f_10a44fb0();
  /* 10a4f5ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f5f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f5f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f5f6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10a4f5fc push eax */
  push32((uint32_t)(EAX));
  /* 10a4f5fd call 0x10a44fb0 */
  push32(0x10a4f602u); f_10a44fb0();
  /* 10a4f602 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f605 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f607 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f60a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10a4f610 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f611 call 0x10a44fb0 */
  push32(0x10a4f616u); f_10a44fb0();
  /* 10a4f616 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f619 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f61b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f61e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10a4f624 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f625 call 0x10a44fb0 */
  push32(0x10a4f62au); f_10a44fb0();
  /* 10a4f62a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f62d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f62f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f632 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10a4f638 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f639 call 0x10a44fb0 */
  push32(0x10a4f63eu); f_10a44fb0();
  /* 10a4f63e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f641 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f643 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f646 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10a4f64c push edx */
  push32((uint32_t)(EDX));
  /* 10a4f64d call 0x10a44fb0 */
  push32(0x10a4f652u); f_10a44fb0();
  /* 10a4f652 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f655 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f657 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f65a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10a4f660 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f661 call 0x10a44fb0 */
  push32(0x10a4f666u); f_10a44fb0();
  /* 10a4f666 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4f669:;
  /* 10a4f669 pop ebp */
  EBP = (pop32());
  /* 10a4f66a ret  */
  ESPCHK(0x10a4f360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f670 @ 0x10a4f670 (678 bytes, 180 insns) */
void f_10a4f670(void) {
  FTRACE(0x10a4f670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4f670 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4f671 mov ebp, esp */
  EBP = (ESP);
  /* 10a4f673 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4f676 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a4f67d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4f67f mov ax, word ptr [0x10a70862] */
  AX = (r16((uint32_t)(0x10a70862)));
  /* 10a4f685 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4f688 cmp dword ptr [0x10a70808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4f68f je 0x10a4f7ea */
  if (C.zf) goto L_10a4f7ea;
  /* 10a4f695 push 0x10a70830 */
  push32((uint32_t)(0x10a70830u));
  /* 10a4f69a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10a4f69c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f69f push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f6a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f6a2 call 0x10a526e0 */
  push32(0x10a4f6a7u); f_10a526e0();
  /* 10a4f6a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f6aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4f6ad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4f6af mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a4f6b2 push 0x10a70834 */
  push32((uint32_t)(0x10a70834u));
  /* 10a4f6b7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10a4f6b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f6bc push eax */
  push32((uint32_t)(EAX));
  /* 10a4f6bd push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f6bf call 0x10a526e0 */
  push32(0x10a4f6c4u); f_10a526e0();
  /* 10a4f6c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f6c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4f6ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f6cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4f6cf push 0x10a70838 */
  push32((uint32_t)(0x10a70838u));
  /* 10a4f6d4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10a4f6d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f6d9 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f6da push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f6dc call 0x10a526e0 */
  push32(0x10a4f6e1u); f_10a526e0();
  /* 10a4f6e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f6e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4f6e7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4f6e9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4f6ec mov edx, dword ptr [0x10a70838] */
  EDX = (r32((uint32_t)(0x10a70838)));
  /* 10a4f6f2 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f6f3 call 0x10a4f920 */
  push32(0x10a4f6f8u); f_10a4f920();
  /* 10a4f6f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f6fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4f6ff je 0x10a4f759 */
  if (C.zf) goto L_10a4f759;
  /* 10a4f701 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f703 mov eax, dword ptr [0x10a70830] */
  EAX = (r32((uint32_t)(0x10a70830)));
  /* 10a4f708 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f709 call 0x10a44fb0 */
  push32(0x10a4f70eu); f_10a44fb0();
  /* 10a4f70e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f711 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f713 mov ecx, dword ptr [0x10a70834] */
  ECX = (r32((uint32_t)(0x10a70834)));
  /* 10a4f719 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f71a call 0x10a44fb0 */
  push32(0x10a4f71fu); f_10a44fb0();
  /* 10a4f71f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f722 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f724 mov edx, dword ptr [0x10a70838] */
  EDX = (r32((uint32_t)(0x10a70838)));
  /* 10a4f72a push edx */
  push32((uint32_t)(EDX));
  /* 10a4f72b call 0x10a44fb0 */
  push32(0x10a4f730u); f_10a44fb0();
  /* 10a4f730 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f733 mov dword ptr [0x10a70830], 0 */
  w32((uint32_t)(0x10a70830), (0x0u));
  /* 10a4f73d mov dword ptr [0x10a70834], 0 */
  w32((uint32_t)(0x10a70834), (0x0u));
  /* 10a4f747 mov dword ptr [0x10a70838], 0 */
  w32((uint32_t)(0x10a70838), (0x0u));
  /* 10a4f751 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4f754 jmp 0x10a4f912 */
  goto L_10a4f912;
L_10a4f759:;
  /* 10a4f759 mov eax, dword ptr [0x10a6fd88] */
  EAX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4f75e cmp dword ptr [eax], 0x10a6fd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10a6fd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4f764 je 0x10a4f7a0 */
  if (C.zf) goto L_10a4f7a0;
  /* 10a4f766 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f768 mov ecx, dword ptr [0x10a6fd88] */
  ECX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4f76e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a4f770 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f771 call 0x10a44fb0 */
  push32(0x10a4f776u); f_10a44fb0();
  /* 10a4f776 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f779 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f77b mov eax, dword ptr [0x10a6fd88] */
  EAX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4f780 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a4f783 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f784 call 0x10a44fb0 */
  push32(0x10a4f789u); f_10a44fb0();
  /* 10a4f789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f78c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f78e mov edx, dword ptr [0x10a6fd88] */
  EDX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4f794 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a4f797 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f798 call 0x10a44fb0 */
  push32(0x10a4f79du); f_10a44fb0();
  /* 10a4f79d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4f7a0:;
  /* 10a4f7a0 mov ecx, dword ptr [0x10a6fd88] */
  ECX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4f7a6 mov edx, dword ptr [0x10a70830] */
  EDX = (r32((uint32_t)(0x10a70830)));
  /* 10a4f7ac mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a4f7ae mov eax, dword ptr [0x10a6fd88] */
  EAX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4f7b3 mov ecx, dword ptr [0x10a70834] */
  ECX = (r32((uint32_t)(0x10a70834)));
  /* 10a4f7b9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10a4f7bc mov edx, dword ptr [0x10a6fd88] */
  EDX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4f7c2 mov eax, dword ptr [0x10a70838] */
  EAX = (r32((uint32_t)(0x10a70838)));
  /* 10a4f7c7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a4f7ca mov ecx, dword ptr [0x10a6fd88] */
  ECX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4f7d0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a4f7d2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a4f7d4 mov byte ptr [0x10a6eea8], al */
  w8((uint32_t)(0x10a6eea8), (AL));
  /* 10a4f7d9 mov dword ptr [0x10a6eeac], 1 */
  w32((uint32_t)(0x10a6eeac), (0x1u));
  /* 10a4f7e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4f7e5 jmp 0x10a4f912 */
  goto L_10a4f912;
L_10a4f7ea:;
  /* 10a4f7ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f7ec mov ecx, dword ptr [0x10a70830] */
  ECX = (r32((uint32_t)(0x10a70830)));
  /* 10a4f7f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f7f3 call 0x10a44fb0 */
  push32(0x10a4f7f8u); f_10a44fb0();
  /* 10a4f7f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f7fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f7fd mov edx, dword ptr [0x10a70834] */
  EDX = (r32((uint32_t)(0x10a70834)));
  /* 10a4f803 push edx */
  push32((uint32_t)(EDX));
  /* 10a4f804 call 0x10a44fb0 */
  push32(0x10a4f809u); f_10a44fb0();
  /* 10a4f809 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f80c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f80e mov eax, dword ptr [0x10a70838] */
  EAX = (r32((uint32_t)(0x10a70838)));
  /* 10a4f813 push eax */
  push32((uint32_t)(EAX));
  /* 10a4f814 call 0x10a44fb0 */
  push32(0x10a4f819u); f_10a44fb0();
  /* 10a4f819 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f81c mov dword ptr [0x10a70830], 0 */
  w32((uint32_t)(0x10a70830), (0x0u));
  /* 10a4f826 mov dword ptr [0x10a70834], 0 */
  w32((uint32_t)(0x10a70834), (0x0u));
  /* 10a4f830 mov dword ptr [0x10a70838], 0 */
  w32((uint32_t)(0x10a70838), (0x0u));
  /* 10a4f83a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10a4f83f push 0x10a6c61c */
  push32((uint32_t)(0x10a6c61cu));
  /* 10a4f844 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f846 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f848 call 0x10a44520 */
  push32(0x10a4f84du); f_10a44520();
  /* 10a4f84d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f850 mov ecx, dword ptr [0x10a6fd88] */
  ECX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4f856 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a4f858 mov edx, dword ptr [0x10a6fd88] */
  EDX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4f85e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4f861 jne 0x10a4f86b */
  if (!C.zf) goto L_10a4f86b;
  /* 10a4f863 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4f866 jmp 0x10a4f912 */
  goto L_10a4f912;
L_10a4f86b:;
  /* 10a4f86b push 0x10a6c5ec */
  push32((uint32_t)(0x10a6c5ecu));
  /* 10a4f870 mov eax, dword ptr [0x10a6fd88] */
  EAX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4f875 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a4f877 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f878 call 0x10a474d0 */
  push32(0x10a4f87du); f_10a474d0();
  /* 10a4f87d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f880 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10a4f885 push 0x10a6c61c */
  push32((uint32_t)(0x10a6c61cu));
  /* 10a4f88a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f88c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f88e call 0x10a44520 */
  push32(0x10a4f893u); f_10a44520();
  /* 10a4f893 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f896 mov edx, dword ptr [0x10a6fd88] */
  EDX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4f89c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10a4f89f mov eax, dword ptr [0x10a6fd88] */
  EAX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4f8a4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4f8a8 jne 0x10a4f8af */
  if (!C.zf) goto L_10a4f8af;
  /* 10a4f8aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4f8ad jmp 0x10a4f912 */
  goto L_10a4f912;
L_10a4f8af:;
  /* 10a4f8af mov ecx, dword ptr [0x10a6fd88] */
  ECX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4f8b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a4f8b8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10a4f8bb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10a4f8c0 push 0x10a6c61c */
  push32((uint32_t)(0x10a6c61cu));
  /* 10a4f8c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f8c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f8c9 call 0x10a44520 */
  push32(0x10a4f8ceu); f_10a44520();
  /* 10a4f8ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f8d1 mov ecx, dword ptr [0x10a6fd88] */
  ECX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4f8d7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10a4f8da mov edx, dword ptr [0x10a6fd88] */
  EDX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4f8e0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4f8e4 jne 0x10a4f8eb */
  if (!C.zf) goto L_10a4f8eb;
  /* 10a4f8e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4f8e9 jmp 0x10a4f912 */
  goto L_10a4f912;
L_10a4f8eb:;
  /* 10a4f8eb mov eax, dword ptr [0x10a6fd88] */
  EAX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4f8f0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a4f8f3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10a4f8f6 mov edx, dword ptr [0x10a6fd88] */
  EDX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4f8fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a4f8fe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a4f900 mov byte ptr [0x10a6eea8], cl */
  w8((uint32_t)(0x10a6eea8), (CL));
  /* 10a4f906 mov dword ptr [0x10a6eeac], 1 */
  w32((uint32_t)(0x10a6eeac), (0x1u));
  /* 10a4f910 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a4f912:;
  /* 10a4f912 mov esp, ebp */
  ESP = (EBP);
  /* 10a4f914 pop ebp */
  EBP = (pop32());
  /* 10a4f915 ret  */
  ESPCHK(0x10a4f670u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10a4f920 (125 bytes, 49 insns) */
void f_10a4f920(void) {
  FTRACE(0x10a4f920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4f920 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4f921 mov ebp, esp */
  EBP = (ESP);
  /* 10a4f923 push ecx */
  push32((uint32_t)(ECX));
L_10a4f924:;
  /* 10a4f924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f927 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a4f92a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4f92c je 0x10a4f999 */
  if (C.zf) goto L_10a4f999;
  /* 10a4f92e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f931 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a4f934 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4f937 jl 0x10a4f95d */
  if ((C.sf!=C.of)) goto L_10a4f95d;
  /* 10a4f939 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f93c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a4f93f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4f942 jg 0x10a4f95d */
  if ((!C.zf&&C.sf==C.of)) goto L_10a4f95d;
  /* 10a4f944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f947 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a4f94a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4f94d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f950 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10a4f952 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f955 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f958 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a4f95b jmp 0x10a4f997 */
  goto L_10a4f997;
L_10a4f95d:;
  /* 10a4f95d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f960 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a4f963 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4f966 jne 0x10a4f98e */
  if (!C.zf) goto L_10a4f98e;
  /* 10a4f968 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f96b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a4f96e:;
  /* 10a4f96e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f971 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f974 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10a4f977 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a4f979 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f97c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f97f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a4f982 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f985 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a4f988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4f98a jne 0x10a4f96e */
  if (!C.zf) goto L_10a4f96e;
  /* 10a4f98c jmp 0x10a4f997 */
  goto L_10a4f997;
L_10a4f98e:;
  /* 10a4f98e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4f991 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f994 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10a4f997:;
  /* 10a4f997 jmp 0x10a4f924 */
  goto L_10a4f924;
L_10a4f999:;
  /* 10a4f999 mov esp, ebp */
  ESP = (EBP);
  /* 10a4f99b pop ebp */
  EBP = (pop32());
  /* 10a4f99c ret  */
  ESPCHK(0x10a4f920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9a0 @ 0x10a4f9a0 (304 bytes, 85 insns) */
void f_10a4f9a0(void) {
  FTRACE(0x10a4f9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4f9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4f9a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4f9a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f9a4 cmp dword ptr [0x10a70804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4f9ab je 0x10a4fa6c */
  if (C.zf) goto L_10a4fa6c;
  /* 10a4f9b1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10a4f9b3 push 0x10a6c628 */
  push32((uint32_t)(0x10a6c628u));
  /* 10a4f9b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f9ba push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10a4f9bc push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4f9be call 0x10a44930 */
  push32(0x10a4f9c3u); f_10a44930();
  /* 10a4f9c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f9c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4f9c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4f9cd jne 0x10a4f9d9 */
  if (!C.zf) goto L_10a4f9d9;
  /* 10a4f9cf mov eax, 1 */
  EAX = (0x1u);
  /* 10a4f9d4 jmp 0x10a4facc */
  goto L_10a4facc;
L_10a4f9d9:;
  /* 10a4f9d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f9dc push eax */
  push32((uint32_t)(EAX));
  /* 10a4f9dd call 0x10a4fad0 */
  push32(0x10a4f9e2u); f_10a4fad0();
  /* 10a4f9e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f9e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4f9e7 je 0x10a4fa0d */
  if (C.zf) goto L_10a4fa0d;
  /* 10a4f9e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f9ec push ecx */
  push32((uint32_t)(ECX));
  /* 10a4f9ed call 0x10a4fd60 */
  push32(0x10a4f9f2u); f_10a4fd60();
  /* 10a4f9f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4f9f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4f9f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4f9fa push edx */
  push32((uint32_t)(EDX));
  /* 10a4f9fb call 0x10a44fb0 */
  push32(0x10a4fa00u); f_10a44fb0();
  /* 10a4fa00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fa03 mov eax, 1 */
  EAX = (0x1u);
  /* 10a4fa08 jmp 0x10a4facc */
  goto L_10a4facc;
L_10a4fa0d:;
  /* 10a4fa0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fa10 mov ecx, dword ptr [0x10a6fd88] */
  ECX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4fa16 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a4fa18 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a4fa1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fa1d mov ecx, dword ptr [0x10a6fd88] */
  ECX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4fa23 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a4fa26 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a4fa29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fa2c mov ecx, dword ptr [0x10a6fd88] */
  ECX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4fa32 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a4fa35 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10a4fa38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fa3b mov dword ptr [0x10a6fd88], eax */
  w32((uint32_t)(0x10a6fd88), (EAX));
  /* 10a4fa40 mov ecx, dword ptr [0x10a7083c] */
  ECX = (r32((uint32_t)(0x10a7083c)));
  /* 10a4fa46 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4fa47 call 0x10a4fd60 */
  push32(0x10a4fa4cu); f_10a4fd60();
  /* 10a4fa4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fa4f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4fa51 mov edx, dword ptr [0x10a7083c] */
  EDX = (r32((uint32_t)(0x10a7083c)));
  /* 10a4fa57 push edx */
  push32((uint32_t)(EDX));
  /* 10a4fa58 call 0x10a44fb0 */
  push32(0x10a4fa5du); f_10a44fb0();
  /* 10a4fa5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fa60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fa63 mov dword ptr [0x10a7083c], eax */
  w32((uint32_t)(0x10a7083c), (EAX));
  /* 10a4fa68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4fa6a jmp 0x10a4facc */
  goto L_10a4facc;
L_10a4fa6c:;
  /* 10a4fa6c mov ecx, dword ptr [0x10a6fd88] */
  ECX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4fa72 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a4fa74 mov dword ptr [0x10a6fd58], edx */
  w32((uint32_t)(0x10a6fd58), (EDX));
  /* 10a4fa7a mov eax, dword ptr [0x10a6fd88] */
  EAX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4fa7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a4fa82 mov dword ptr [0x10a6fd5c], ecx */
  w32((uint32_t)(0x10a6fd5c), (ECX));
  /* 10a4fa88 mov edx, dword ptr [0x10a6fd88] */
  EDX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a4fa8e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a4fa91 mov dword ptr [0x10a6fd60], eax */
  w32((uint32_t)(0x10a6fd60), (EAX));
  /* 10a4fa96 mov dword ptr [0x10a6fd88], 0x10a6fd58 */
  w32((uint32_t)(0x10a6fd88), (0x10a6fd58u));
  /* 10a4faa0 mov ecx, dword ptr [0x10a7083c] */
  ECX = (r32((uint32_t)(0x10a7083c)));
  /* 10a4faa6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4faa7 call 0x10a4fd60 */
  push32(0x10a4faacu); f_10a4fd60();
  /* 10a4faac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4faaf push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4fab1 mov edx, dword ptr [0x10a7083c] */
  EDX = (r32((uint32_t)(0x10a7083c)));
  /* 10a4fab7 push edx */
  push32((uint32_t)(EDX));
  /* 10a4fab8 call 0x10a44fb0 */
  push32(0x10a4fabdu); f_10a44fb0();
  /* 10a4fabd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fac0 mov dword ptr [0x10a7083c], 0 */
  w32((uint32_t)(0x10a7083c), (0x0u));
  /* 10a4faca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a4facc:;
  /* 10a4facc mov esp, ebp */
  ESP = (EBP);
  /* 10a4face pop ebp */
  EBP = (pop32());
  /* 10a4facf ret  */
  ESPCHK(0x10a4f9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fad0 @ 0x10a4fad0 (525 bytes, 200 insns) */
void f_10a4fad0(void) {
  FTRACE(0x10a4fad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4fad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4fad1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4fad3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4fad6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a4fadd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4fadf mov ax, word ptr [0x10a7085c] */
  AX = (r16((uint32_t)(0x10a7085c)));
  /* 10a4fae5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4fae8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4faec jne 0x10a4faf6 */
  if (!C.zf) goto L_10a4faf6;
  /* 10a4faee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4faf1 jmp 0x10a4fcd9 */
  goto L_10a4fcd9;
L_10a4faf6:;
  /* 10a4faf6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4faf9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fafc push ecx */
  push32((uint32_t)(ECX));
  /* 10a4fafd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10a4faff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fb02 push edx */
  push32((uint32_t)(EDX));
  /* 10a4fb03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4fb05 call 0x10a526e0 */
  push32(0x10a4fb0au); f_10a526e0();
  /* 10a4fb0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fb0d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4fb10 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4fb12 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4fb15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fb18 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fb1b push edx */
  push32((uint32_t)(EDX));
  /* 10a4fb1c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10a4fb1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fb21 push eax */
  push32((uint32_t)(EAX));
  /* 10a4fb22 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4fb24 call 0x10a526e0 */
  push32(0x10a4fb29u); f_10a526e0();
  /* 10a4fb29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fb2c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4fb2f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4fb31 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4fb34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fb37 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fb3a push edx */
  push32((uint32_t)(EDX));
  /* 10a4fb3b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10a4fb3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fb40 push eax */
  push32((uint32_t)(EAX));
  /* 10a4fb41 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4fb43 call 0x10a526e0 */
  push32(0x10a4fb48u); f_10a526e0();
  /* 10a4fb48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fb4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4fb4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4fb50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4fb53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fb56 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fb59 push edx */
  push32((uint32_t)(EDX));
  /* 10a4fb5a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10a4fb5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fb5f push eax */
  push32((uint32_t)(EAX));
  /* 10a4fb60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4fb62 call 0x10a526e0 */
  push32(0x10a4fb67u); f_10a526e0();
  /* 10a4fb67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fb6a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4fb6d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4fb6f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4fb72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fb75 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fb78 push edx */
  push32((uint32_t)(EDX));
  /* 10a4fb79 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10a4fb7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fb7e push eax */
  push32((uint32_t)(EAX));
  /* 10a4fb7f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4fb81 call 0x10a526e0 */
  push32(0x10a4fb86u); f_10a526e0();
  /* 10a4fb86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fb89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4fb8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4fb8e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4fb91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fb94 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a4fb97 push eax */
  push32((uint32_t)(EAX));
  /* 10a4fb98 call 0x10a4fce0 */
  push32(0x10a4fb9du); f_10a4fce0();
  /* 10a4fb9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fba0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fba3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fba6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4fba7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10a4fba9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fbac push edx */
  push32((uint32_t)(EDX));
  /* 10a4fbad push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4fbaf call 0x10a526e0 */
  push32(0x10a4fbb4u); f_10a526e0();
  /* 10a4fbb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fbb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4fbba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4fbbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4fbbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fbc2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fbc5 push edx */
  push32((uint32_t)(EDX));
  /* 10a4fbc6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10a4fbc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fbcb push eax */
  push32((uint32_t)(EAX));
  /* 10a4fbcc push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4fbce call 0x10a526e0 */
  push32(0x10a4fbd3u); f_10a526e0();
  /* 10a4fbd3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fbd6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4fbd9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4fbdb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4fbde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fbe1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fbe4 push edx */
  push32((uint32_t)(EDX));
  /* 10a4fbe5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10a4fbe7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fbea push eax */
  push32((uint32_t)(EAX));
  /* 10a4fbeb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4fbed call 0x10a526e0 */
  push32(0x10a4fbf2u); f_10a526e0();
  /* 10a4fbf2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fbf5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4fbf8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4fbfa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4fbfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fc00 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fc03 push edx */
  push32((uint32_t)(EDX));
  /* 10a4fc04 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a4fc06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fc09 push eax */
  push32((uint32_t)(EAX));
  /* 10a4fc0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4fc0c call 0x10a526e0 */
  push32(0x10a4fc11u); f_10a526e0();
  /* 10a4fc11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fc14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4fc17 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4fc19 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4fc1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fc1f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fc22 push edx */
  push32((uint32_t)(EDX));
  /* 10a4fc23 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10a4fc25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fc28 push eax */
  push32((uint32_t)(EAX));
  /* 10a4fc29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4fc2b call 0x10a526e0 */
  push32(0x10a4fc30u); f_10a526e0();
  /* 10a4fc30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fc33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4fc36 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4fc38 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4fc3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fc3e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fc41 push edx */
  push32((uint32_t)(EDX));
  /* 10a4fc42 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10a4fc44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fc47 push eax */
  push32((uint32_t)(EAX));
  /* 10a4fc48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4fc4a call 0x10a526e0 */
  push32(0x10a4fc4fu); f_10a526e0();
  /* 10a4fc4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fc52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4fc55 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4fc57 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4fc5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fc5d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fc60 push edx */
  push32((uint32_t)(EDX));
  /* 10a4fc61 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10a4fc63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fc66 push eax */
  push32((uint32_t)(EAX));
  /* 10a4fc67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4fc69 call 0x10a526e0 */
  push32(0x10a4fc6eu); f_10a526e0();
  /* 10a4fc6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fc71 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4fc74 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4fc76 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4fc79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fc7c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fc7f push edx */
  push32((uint32_t)(EDX));
  /* 10a4fc80 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10a4fc82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fc85 push eax */
  push32((uint32_t)(EAX));
  /* 10a4fc86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4fc88 call 0x10a526e0 */
  push32(0x10a4fc8du); f_10a526e0();
  /* 10a4fc8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fc90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4fc93 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4fc95 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4fc98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fc9b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fc9e push edx */
  push32((uint32_t)(EDX));
  /* 10a4fc9f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10a4fca1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fca4 push eax */
  push32((uint32_t)(EAX));
  /* 10a4fca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4fca7 call 0x10a526e0 */
  push32(0x10a4fcacu); f_10a526e0();
  /* 10a4fcac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fcaf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4fcb2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4fcb4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4fcb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fcba add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fcbd push edx */
  push32((uint32_t)(EDX));
  /* 10a4fcbe push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10a4fcc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fcc3 push eax */
  push32((uint32_t)(EAX));
  /* 10a4fcc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4fcc6 call 0x10a526e0 */
  push32(0x10a4fccbu); f_10a526e0();
  /* 10a4fccb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fcce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4fcd1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4fcd3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a4fcd6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a4fcd9:;
  /* 10a4fcd9 mov esp, ebp */
  ESP = (EBP);
  /* 10a4fcdb pop ebp */
  EBP = (pop32());
  /* 10a4fcdc ret  */
  ESPCHK(0x10a4fad0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10a4fce0 (125 bytes, 49 insns) */
void f_10a4fce0(void) {
  FTRACE(0x10a4fce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4fce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4fce1 mov ebp, esp */
  EBP = (ESP);
  /* 10a4fce3 push ecx */
  push32((uint32_t)(ECX));
L_10a4fce4:;
  /* 10a4fce4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fce7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a4fcea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4fcec je 0x10a4fd59 */
  if (C.zf) goto L_10a4fd59;
  /* 10a4fcee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fcf1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a4fcf4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4fcf7 jl 0x10a4fd1d */
  if ((C.sf!=C.of)) goto L_10a4fd1d;
  /* 10a4fcf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fcfc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a4fcff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4fd02 jg 0x10a4fd1d */
  if ((!C.zf&&C.sf==C.of)) goto L_10a4fd1d;
  /* 10a4fd04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fd07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a4fd0a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4fd0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fd10 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10a4fd12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fd15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fd18 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a4fd1b jmp 0x10a4fd57 */
  goto L_10a4fd57;
L_10a4fd1d:;
  /* 10a4fd1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fd20 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a4fd23 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4fd26 jne 0x10a4fd4e */
  if (!C.zf) goto L_10a4fd4e;
  /* 10a4fd28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fd2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a4fd2e:;
  /* 10a4fd2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fd31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fd34 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10a4fd37 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a4fd39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fd3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fd3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a4fd42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4fd45 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a4fd48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4fd4a jne 0x10a4fd2e */
  if (!C.zf) goto L_10a4fd2e;
  /* 10a4fd4c jmp 0x10a4fd57 */
  goto L_10a4fd57;
L_10a4fd4e:;
  /* 10a4fd4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fd51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fd54 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10a4fd57:;
  /* 10a4fd57 jmp 0x10a4fce4 */
  goto L_10a4fce4;
L_10a4fd59:;
  /* 10a4fd59 mov esp, ebp */
  ESP = (EBP);
  /* 10a4fd5b pop ebp */
  EBP = (pop32());
  /* 10a4fd5c ret  */
  ESPCHK(0x10a4fce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd60 @ 0x10a4fd60 (147 bytes, 52 insns) */
void f_10a4fd60(void) {
  FTRACE(0x10a4fd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4fd60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4fd61 mov ebp, esp */
  EBP = (ESP);
  /* 10a4fd63 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4fd67 jne 0x10a4fd6e */
  if (!C.zf) goto L_10a4fd6e;
  /* 10a4fd69 jmp 0x10a4fdf1 */
  goto L_10a4fdf1;
L_10a4fd6e:;
  /* 10a4fd6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fd71 cmp dword ptr [eax + 0xc], 0x10a70898 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10a70898u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4fd78 je 0x10a4fdf1 */
  if (C.zf) goto L_10a4fdf1;
  /* 10a4fd7a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4fd7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fd7f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a4fd82 push edx */
  push32((uint32_t)(EDX));
  /* 10a4fd83 call 0x10a44fb0 */
  push32(0x10a4fd88u); f_10a44fb0();
  /* 10a4fd88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fd8b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4fd8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fd90 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a4fd93 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4fd94 call 0x10a44fb0 */
  push32(0x10a4fd99u); f_10a44fb0();
  /* 10a4fd99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fd9c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4fd9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fda1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a4fda4 push eax */
  push32((uint32_t)(EAX));
  /* 10a4fda5 call 0x10a44fb0 */
  push32(0x10a4fdaau); f_10a44fb0();
  /* 10a4fdaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fdad push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4fdaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fdb2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a4fdb5 push edx */
  push32((uint32_t)(EDX));
  /* 10a4fdb6 call 0x10a44fb0 */
  push32(0x10a4fdbbu); f_10a44fb0();
  /* 10a4fdbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fdbe push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4fdc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fdc3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10a4fdc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4fdc7 call 0x10a44fb0 */
  push32(0x10a4fdccu); f_10a44fb0();
  /* 10a4fdcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fdcf push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4fdd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fdd4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10a4fdd7 push eax */
  push32((uint32_t)(EAX));
  /* 10a4fdd8 call 0x10a44fb0 */
  push32(0x10a4fdddu); f_10a44fb0();
  /* 10a4fddd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fde0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4fde2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4fde5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10a4fde8 push edx */
  push32((uint32_t)(EDX));
  /* 10a4fde9 call 0x10a44fb0 */
  push32(0x10a4fdeeu); f_10a44fb0();
  /* 10a4fdee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4fdf1:;
  /* 10a4fdf1 pop ebp */
  EBP = (pop32());
  /* 10a4fdf2 ret  */
  ESPCHK(0x10a4fd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe00 @ 0x10a4fe00 (928 bytes, 284 insns) */
void f_10a4fe00(void) {
  FTRACE(0x10a4fe00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4fe00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a4fe01 mov ebp, esp */
  EBP = (ESP);
  /* 10a4fe03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4fe06 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10a4fe0d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10a4fe14 cmp dword ptr [0x10a70800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4fe1b je 0x10a50151 */
  if (C.zf) goto L_10a50151;
  /* 10a4fe21 cmp dword ptr [0x10a70810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4fe28 jne 0x10a4fe50 */
  if (!C.zf) goto L_10a4fe50;
  /* 10a4fe2a push 0x10a70810 */
  push32((uint32_t)(0x10a70810u));
  /* 10a4fe2f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10a4fe34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4fe36 mov ax, word ptr [0x10a70854] */
  AX = (r16((uint32_t)(0x10a70854)));
  /* 10a4fe3c push eax */
  push32((uint32_t)(EAX));
  /* 10a4fe3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4fe3f call 0x10a526e0 */
  push32(0x10a4fe44u); f_10a526e0();
  /* 10a4fe44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fe47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4fe49 je 0x10a4fe50 */
  if (C.zf) goto L_10a4fe50;
  /* 10a4fe4b jmp 0x10a50112 */
  goto L_10a50112;
L_10a4fe50:;
  /* 10a4fe50 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10a4fe52 push 0x10a6c634 */
  push32((uint32_t)(0x10a6c634u));
  /* 10a4fe57 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4fe59 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10a4fe5e call 0x10a44520 */
  push32(0x10a4fe63u); f_10a44520();
  /* 10a4fe63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fe66 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10a4fe69 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10a4fe6b push 0x10a6c634 */
  push32((uint32_t)(0x10a6c634u));
  /* 10a4fe70 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4fe72 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10a4fe77 call 0x10a44520 */
  push32(0x10a4fe7cu); f_10a44520();
  /* 10a4fe7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fe7f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a4fe82 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10a4fe84 push 0x10a6c634 */
  push32((uint32_t)(0x10a6c634u));
  /* 10a4fe89 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4fe8b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10a4fe90 call 0x10a44520 */
  push32(0x10a4fe95u); f_10a44520();
  /* 10a4fe95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fe98 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10a4fe9b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10a4fe9d push 0x10a6c634 */
  push32((uint32_t)(0x10a6c634u));
  /* 10a4fea2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4fea4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10a4fea9 call 0x10a44520 */
  push32(0x10a4feaeu); f_10a44520();
  /* 10a4feae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4feb1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a4feb4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4feb8 je 0x10a4fecc */
  if (C.zf) goto L_10a4fecc;
  /* 10a4feba cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4febe je 0x10a4fecc */
  if (C.zf) goto L_10a4fecc;
  /* 10a4fec0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4fec4 je 0x10a4fecc */
  if (C.zf) goto L_10a4fecc;
  /* 10a4fec6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4feca jne 0x10a4fed1 */
  if (!C.zf) goto L_10a4fed1;
L_10a4fecc:;
  /* 10a4fecc jmp 0x10a50112 */
  goto L_10a50112;
L_10a4fed1:;
  /* 10a4fed1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a4fed4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a4fed7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a4fede jmp 0x10a4fee9 */
  goto L_10a4fee9;
L_10a4fee0:;
  /* 10a4fee0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4fee3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fee6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10a4fee9:;
  /* 10a4fee9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4fef0 jge 0x10a4ff05 */
  if ((C.sf==C.of)) goto L_10a4ff05;
  /* 10a4fef2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4fef5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10a4fef8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10a4fefa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4fefd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ff00 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a4ff03 jmp 0x10a4fee0 */
  goto L_10a4fee0;
L_10a4ff05:;
  /* 10a4ff05 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10a4ff08 push eax */
  push32((uint32_t)(EAX));
  /* 10a4ff09 mov ecx, dword ptr [0x10a70810] */
  ECX = (r32((uint32_t)(0x10a70810)));
  /* 10a4ff0f push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ff10 call dword ptr [0x10a732d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732d0))), 0x10a4ff16u);
  /* 10a4ff16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4ff18 jne 0x10a4ff1f */
  if (!C.zf) goto L_10a4ff1f;
  /* 10a4ff1a jmp 0x10a50112 */
  goto L_10a50112;
L_10a4ff1f:;
  /* 10a4ff1f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ff23 jbe 0x10a4ff2a */
  if ((C.cf||C.zf)) goto L_10a4ff2a;
  /* 10a4ff25 jmp 0x10a50112 */
  goto L_10a50112;
L_10a4ff2a:;
  /* 10a4ff2a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a4ff2d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4ff33 mov dword ptr [0x10a6eea4], edx */
  w32((uint32_t)(0x10a6eea4), (EDX));
  /* 10a4ff39 cmp dword ptr [0x10a6eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a6eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ff40 jle 0x10a4ff99 */
  if ((C.zf||C.sf!=C.of)) goto L_10a4ff99;
  /* 10a4ff42 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10a4ff45 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a4ff48 jmp 0x10a4ff53 */
  goto L_10a4ff53;
L_10a4ff4a:;
  /* 10a4ff4a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4ff4d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ff50 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10a4ff53:;
  /* 10a4ff53 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4ff56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4ff58 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a4ff5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4ff5c je 0x10a4ff99 */
  if (C.zf) goto L_10a4ff99;
  /* 10a4ff5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4ff61 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4ff63 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10a4ff66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4ff68 je 0x10a4ff99 */
  if (C.zf) goto L_10a4ff99;
  /* 10a4ff6a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4ff6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ff6f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a4ff71 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a4ff74 jmp 0x10a4ff7f */
  goto L_10a4ff7f;
L_10a4ff76:;
  /* 10a4ff76 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4ff79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ff7c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10a4ff7f:;
  /* 10a4ff7f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a4ff82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4ff84 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10a4ff87 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ff8a jg 0x10a4ff97 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a4ff97;
  /* 10a4ff8c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a4ff8f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ff92 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10a4ff95 jmp 0x10a4ff76 */
  goto L_10a4ff76;
L_10a4ff97:;
  /* 10a4ff97 jmp 0x10a4ff4a */
  goto L_10a4ff4a;
L_10a4ff99:;
  /* 10a4ff99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4ff9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4ff9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4ff9f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a4ffa2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ffa5 push eax */
  push32((uint32_t)(EAX));
  /* 10a4ffa6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a4ffab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a4ffae push ecx */
  push32((uint32_t)(ECX));
  /* 10a4ffaf push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4ffb1 call 0x10a4c750 */
  push32(0x10a4ffb6u); f_10a4c750();
  /* 10a4ffb6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ffb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4ffbb jne 0x10a4ffc2 */
  if (!C.zf) goto L_10a4ffc2;
  /* 10a4ffbd jmp 0x10a50112 */
  goto L_10a50112;
L_10a4ffc2:;
  /* 10a4ffc2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a4ffc5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10a4ffca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a4ffcd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a4ffd0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a4ffd7 jmp 0x10a4ffe2 */
  goto L_10a4ffe2;
L_10a4ffd9:;
  /* 10a4ffd9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a4ffdc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4ffdf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10a4ffe2:;
  /* 10a4ffe2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4ffe9 jge 0x10a50000 */
  if ((C.sf==C.of)) goto L_10a50000;
  /* 10a4ffeb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4ffee mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10a4fff2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10a4fff5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4fff8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4fffb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a4fffe jmp 0x10a4ffd9 */
  goto L_10a4ffd9;
L_10a50000:;
  /* 10a50000 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a50002 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a50004 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a50007 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5000a push edx */
  push32((uint32_t)(EDX));
  /* 10a5000b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a50010 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a50013 push eax */
  push32((uint32_t)(EAX));
  /* 10a50014 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a50016 call 0x10a52980 */
  push32(0x10a5001bu); f_10a52980();
  /* 10a5001b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5001e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50020 jne 0x10a50027 */
  if (!C.zf) goto L_10a50027;
  /* 10a50022 jmp 0x10a50112 */
  goto L_10a50112;
L_10a50027:;
  /* 10a50027 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a5002a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10a5002f cmp dword ptr [0x10a6eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a6eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50036 jle 0x10a50093 */
  if ((C.zf||C.sf!=C.of)) goto L_10a50093;
  /* 10a50038 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10a5003b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a5003e jmp 0x10a50049 */
  goto L_10a50049;
L_10a50040:;
  /* 10a50040 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a50043 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50046 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10a50049:;
  /* 10a50049 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a5004c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a5004e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a50050 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a50052 je 0x10a50093 */
  if (C.zf) goto L_10a50093;
  /* 10a50054 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a50057 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a50059 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10a5005c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a5005e je 0x10a50093 */
  if (C.zf) goto L_10a50093;
  /* 10a50060 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a50063 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a50065 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a50067 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a5006a jmp 0x10a50075 */
  goto L_10a50075;
L_10a5006c:;
  /* 10a5006c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a5006f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50072 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10a50075:;
  /* 10a50075 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a50078 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a5007a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10a5007d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50080 jg 0x10a50091 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a50091;
  /* 10a50082 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a50085 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a50088 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10a5008f jmp 0x10a5006c */
  goto L_10a5006c;
L_10a50091:;
  /* 10a50091 jmp 0x10a50040 */
  goto L_10a50040;
L_10a50093:;
  /* 10a50093 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a50096 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50099 mov dword ptr [0x10a6ec98], eax */
  w32((uint32_t)(0x10a6ec98), (EAX));
  /* 10a5009e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a500a1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a500a4 mov dword ptr [0x10a6ec9c], ecx */
  w32((uint32_t)(0x10a6ec9c), (ECX));
  /* 10a500aa cmp dword ptr [0x10a70840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a500b1 je 0x10a500c4 */
  if (C.zf) goto L_10a500c4;
  /* 10a500b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a500b5 mov edx, dword ptr [0x10a70840] */
  EDX = (r32((uint32_t)(0x10a70840)));
  /* 10a500bb push edx */
  push32((uint32_t)(EDX));
  /* 10a500bc call 0x10a44fb0 */
  push32(0x10a500c1u); f_10a44fb0();
  /* 10a500c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a500c4:;
  /* 10a500c4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a500c7 mov dword ptr [0x10a70840], eax */
  w32((uint32_t)(0x10a70840), (EAX));
  /* 10a500cc cmp dword ptr [0x10a70844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a500d3 je 0x10a500e6 */
  if (C.zf) goto L_10a500e6;
  /* 10a500d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a500d7 mov ecx, dword ptr [0x10a70844] */
  ECX = (r32((uint32_t)(0x10a70844)));
  /* 10a500dd push ecx */
  push32((uint32_t)(ECX));
  /* 10a500de call 0x10a44fb0 */
  push32(0x10a500e3u); f_10a44fb0();
  /* 10a500e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a500e6:;
  /* 10a500e6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a500e9 mov dword ptr [0x10a70844], edx */
  w32((uint32_t)(0x10a70844), (EDX));
  /* 10a500ef push 2 */
  push32((uint32_t)(0x2u));
  /* 10a500f1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a500f4 push eax */
  push32((uint32_t)(EAX));
  /* 10a500f5 call 0x10a44fb0 */
  push32(0x10a500fau); f_10a44fb0();
  /* 10a500fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a500fd push 2 */
  push32((uint32_t)(0x2u));
  /* 10a500ff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a50102 push ecx */
  push32((uint32_t)(ECX));
  /* 10a50103 call 0x10a44fb0 */
  push32(0x10a50108u); f_10a44fb0();
  /* 10a50108 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5010b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a5010d jmp 0x10a5019c */
  goto L_10a5019c;
L_10a50112:;
  /* 10a50112 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a50114 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a50117 push edx */
  push32((uint32_t)(EDX));
  /* 10a50118 call 0x10a44fb0 */
  push32(0x10a5011du); f_10a44fb0();
  /* 10a5011d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50120 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a50122 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a50125 push eax */
  push32((uint32_t)(EAX));
  /* 10a50126 call 0x10a44fb0 */
  push32(0x10a5012bu); f_10a44fb0();
  /* 10a5012b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5012e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a50130 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a50133 push ecx */
  push32((uint32_t)(ECX));
  /* 10a50134 call 0x10a44fb0 */
  push32(0x10a50139u); f_10a44fb0();
  /* 10a50139 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5013c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a5013e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a50141 push edx */
  push32((uint32_t)(EDX));
  /* 10a50142 call 0x10a44fb0 */
  push32(0x10a50147u); f_10a44fb0();
  /* 10a50147 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5014a mov eax, 1 */
  EAX = (0x1u);
  /* 10a5014f jmp 0x10a5019c */
  goto L_10a5019c;
L_10a50151:;
  /* 10a50151 mov dword ptr [0x10a6ec98], 0x10a6eca2 */
  w32((uint32_t)(0x10a6ec98), (0x10a6eca2u));
  /* 10a5015b mov dword ptr [0x10a6ec9c], 0x10a6eca2 */
  w32((uint32_t)(0x10a6ec9c), (0x10a6eca2u));
  /* 10a50165 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a50167 mov eax, dword ptr [0x10a70840] */
  EAX = (r32((uint32_t)(0x10a70840)));
  /* 10a5016c push eax */
  push32((uint32_t)(EAX));
  /* 10a5016d call 0x10a44fb0 */
  push32(0x10a50172u); f_10a44fb0();
  /* 10a50172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50175 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a50177 mov ecx, dword ptr [0x10a70844] */
  ECX = (r32((uint32_t)(0x10a70844)));
  /* 10a5017d push ecx */
  push32((uint32_t)(ECX));
  /* 10a5017e call 0x10a44fb0 */
  push32(0x10a50183u); f_10a44fb0();
  /* 10a50183 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50186 mov dword ptr [0x10a70840], 0 */
  w32((uint32_t)(0x10a70840), (0x0u));
  /* 10a50190 mov dword ptr [0x10a70844], 0 */
  w32((uint32_t)(0x10a70844), (0x0u));
  /* 10a5019a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a5019c:;
  /* 10a5019c mov esp, ebp */
  ESP = (EBP);
  /* 10a5019e pop ebp */
  EBP = (pop32());
  /* 10a5019f ret  */
  ESPCHK(0x10a4fe00u, _esp0);
  ESP += 4; return;
}

/* FUN_100101a0 @ 0x10a501a0 (7 bytes, 5 insns) */
void f_10a501a0(void) {
  FTRACE(0x10a501a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a501a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a501a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a501a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a501a5 pop ebp */
  EBP = (pop32());
  /* 10a501a6 ret  */
  ESPCHK(0x10a501a0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10a501b0 (129 bytes, 56 insns) */
void f_10a501b0(void) {
  FTRACE(0x10a501b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a501b0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a501b4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a501b8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10a501be jne 0x10a501fc */
  if (!C.zf) goto L_10a501fc;
L_10a501c0:;
  /* 10a501c0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a501c2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a501c4 jne 0x10a501f4 */
  if (!C.zf) goto L_10a501f4;
  /* 10a501c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a501c8 je 0x10a501f0 */
  if (C.zf) goto L_10a501f0;
  /* 10a501ca cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a501cd jne 0x10a501f4 */
  if (!C.zf) goto L_10a501f4;
  /* 10a501cf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10a501d1 je 0x10a501f0 */
  if (C.zf) goto L_10a501f0;
  /* 10a501d3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10a501d6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a501d9 jne 0x10a501f4 */
  if (!C.zf) goto L_10a501f4;
  /* 10a501db or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a501dd je 0x10a501f0 */
  if (C.zf) goto L_10a501f0;
  /* 10a501df cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a501e2 jne 0x10a501f4 */
  if (!C.zf) goto L_10a501f4;
  /* 10a501e4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a501e7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a501ea or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10a501ec jne 0x10a501c0 */
  if (!C.zf) goto L_10a501c0;
  /* 10a501ee mov edi, edi */
  EDI = (EDI);
L_10a501f0:;
  /* 10a501f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a501f2 ret  */
  ESPCHK(0x10a501b0u, _esp0);
  ESP += 4; return;
  /* 10a501f3 nop  */
  /* nop */
L_10a501f4:;
  /* 10a501f4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a501f6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a501f8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10a501f9 ret  */
  ESPCHK(0x10a501b0u, _esp0);
  ESP += 4; return;
  /* 10a501fa mov edi, edi */
  EDI = (EDI);
L_10a501fc:;
  /* 10a501fc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10a50202 je 0x10a50218 */
  if (C.zf) goto L_10a50218;
  /* 10a50204 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a50206 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10a50207 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a50209 jne 0x10a501f4 */
  if (!C.zf) goto L_10a501f4;
  /* 10a5020b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10a5020c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a5020e je 0x10a501f0 */
  if (C.zf) goto L_10a501f0;
  /* 10a50210 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10a50216 je 0x10a501c0 */
  if (C.zf) goto L_10a501c0;
L_10a50218:;
  /* 10a50218 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10a5021b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5021e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a50220 jne 0x10a501f4 */
  if (!C.zf) goto L_10a501f4;
  /* 10a50222 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a50224 je 0x10a501f0 */
  if (C.zf) goto L_10a501f0;
  /* 10a50226 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a50229 jne 0x10a501f4 */
  if (!C.zf) goto L_10a501f4;
  /* 10a5022b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10a5022d je 0x10a501f0 */
  if (C.zf) goto L_10a501f0;
  /* 10a5022f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50232 jmp 0x10a501c0 */
  goto L_10a501c0;
}

/* FUN_10010240 @ 0x10a50240 (62 bytes, 35 insns) */
void f_10a50240(void) {
  FTRACE(0x10a50240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a50240 push ebp */
  push32((uint32_t)(EBP));
  /* 10a50241 mov ebp, esp */
  EBP = (ESP);
  /* 10a50243 push esi */
  push32((uint32_t)(ESI));
  /* 10a50244 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a50246 push eax */
  push32((uint32_t)(EAX));
  /* 10a50247 push eax */
  push32((uint32_t)(EAX));
  /* 10a50248 push eax */
  push32((uint32_t)(EAX));
  /* 10a50249 push eax */
  push32((uint32_t)(EAX));
  /* 10a5024a push eax */
  push32((uint32_t)(EAX));
  /* 10a5024b push eax */
  push32((uint32_t)(EAX));
  /* 10a5024c push eax */
  push32((uint32_t)(EAX));
  /* 10a5024d push eax */
  push32((uint32_t)(EAX));
  /* 10a5024e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a50251 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a50254:;
  /* 10a50254 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a50256 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a50258 je 0x10a50261 */
  if (C.zf) goto L_10a50261;
  /* 10a5025a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10a5025b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10a5025b");
  /* 10a5025f jmp 0x10a50254 */
  goto L_10a50254;
L_10a50261:;
  /* 10a50261 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50264 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a50267 nop  */
  /* nop */
L_10a50268:;
  /* 10a50268 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10a50269 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a5026b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a5026d je 0x10a50276 */
  if (C.zf) goto L_10a50276;
  /* 10a5026f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a50270 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10a50270");
  /* 10a50274 jae 0x10a50268 */
  if (!C.cf) goto L_10a50268;
L_10a50276:;
  /* 10a50276 mov eax, ecx */
  EAX = (ECX);
  /* 10a50278 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5027b pop esi */
  ESI = (pop32());
  /* 10a5027c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a5027d ret  */
  ESPCHK(0x10a50240u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10a50280 (56 bytes, 31 insns) */
void f_10a50280(void) {
  FTRACE(0x10a50280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a50280 push ebp */
  push32((uint32_t)(EBP));
  /* 10a50281 mov ebp, esp */
  EBP = (ESP);
  /* 10a50283 push edi */
  push32((uint32_t)(EDI));
  /* 10a50284 push esi */
  push32((uint32_t)(ESI));
  /* 10a50285 push ebx */
  push32((uint32_t)(EBX));
  /* 10a50286 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a50289 jecxz 0x10a502b1 */
  x86_unimpl("jecxz @ 0x10a50289");
  /* 10a5028b mov ebx, ecx */
  EBX = (ECX);
  /* 10a5028d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50290 mov esi, edi */
  ESI = (EDI);
  /* 10a50292 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a50294 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10a50296 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a50298 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5029a mov edi, esi */
  EDI = (ESI);
  /* 10a5029c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a5029f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10a502a1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10a502a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a502a6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a502a9 ja 0x10a502af */
  if ((!C.cf&&!C.zf)) goto L_10a502af;
  /* 10a502ab je 0x10a502b1 */
  if (C.zf) goto L_10a502b1;
  /* 10a502ad dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a502ae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10a502af:;
  /* 10a502af not ecx */
  ECX = (~(ECX));
L_10a502b1:;
  /* 10a502b1 mov eax, ecx */
  EAX = (ECX);
  /* 10a502b3 pop ebx */
  EBX = (pop32());
  /* 10a502b4 pop esi */
  ESI = (pop32());
  /* 10a502b5 pop edi */
  EDI = (pop32());
  /* 10a502b6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a502b7 ret  */
  ESPCHK(0x10a50280u, _esp0);
  ESP += 4; return;
}

/* FUN_100102c0 @ 0x10a502c0 (58 bytes, 32 insns) */
void f_10a502c0(void) {
  FTRACE(0x10a502c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a502c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a502c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a502c3 push esi */
  push32((uint32_t)(ESI));
  /* 10a502c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a502c6 push eax */
  push32((uint32_t)(EAX));
  /* 10a502c7 push eax */
  push32((uint32_t)(EAX));
  /* 10a502c8 push eax */
  push32((uint32_t)(EAX));
  /* 10a502c9 push eax */
  push32((uint32_t)(EAX));
  /* 10a502ca push eax */
  push32((uint32_t)(EAX));
  /* 10a502cb push eax */
  push32((uint32_t)(EAX));
  /* 10a502cc push eax */
  push32((uint32_t)(EAX));
  /* 10a502cd push eax */
  push32((uint32_t)(EAX));
  /* 10a502ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a502d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a502d4:;
  /* 10a502d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a502d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a502d8 je 0x10a502e1 */
  if (C.zf) goto L_10a502e1;
  /* 10a502da inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10a502db bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10a502db");
  /* 10a502df jmp 0x10a502d4 */
  goto L_10a502d4;
L_10a502e1:;
  /* 10a502e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10a502e4:;
  /* 10a502e4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a502e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a502e8 je 0x10a502f4 */
  if (C.zf) goto L_10a502f4;
  /* 10a502ea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a502eb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10a502eb");
  /* 10a502ef jae 0x10a502e4 */
  if (!C.cf) goto L_10a502e4;
  /* 10a502f1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10a502f4:;
  /* 10a502f4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a502f7 pop esi */
  ESI = (pop32());
  /* 10a502f8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a502f9 ret  */
  ESPCHK(0x10a502c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010300 @ 0x10a50300 (512 bytes, 147 insns) */
void f_10a50300(void) {
  FTRACE(0x10a50300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a50300 push ebp */
  push32((uint32_t)(EBP));
  /* 10a50301 mov ebp, esp */
  EBP = (ESP);
  /* 10a50303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50306 cmp dword ptr [0x10a7088c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7088c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5030d jne 0x10a50332 */
  if (!C.zf) goto L_10a50332;
  /* 10a5030f call 0x10a50dd0 */
  push32(0x10a50314u); f_10a50dd0();
  /* 10a50314 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50316 je 0x10a50322 */
  if (C.zf) goto L_10a50322;
  /* 10a50318 mov eax, dword ptr [0x10a73294] */
  EAX = (r32((uint32_t)(0x10a73294)));
  /* 10a5031d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a50320 jmp 0x10a50329 */
  goto L_10a50329;
L_10a50322:;
  /* 10a50322 mov dword ptr [ebp - 8], 0x10a50e20 */
  w32((uint32_t)(EBP + -0x8), (0x10a50e20u));
L_10a50329:;
  /* 10a50329 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a5032c mov dword ptr [0x10a7088c], ecx */
  w32((uint32_t)(0x10a7088c), (ECX));
L_10a50332:;
  /* 10a50332 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50336 jne 0x10a50342 */
  if (!C.zf) goto L_10a50342;
  /* 10a50338 call 0x10a50c20 */
  push32(0x10a5033du); f_10a50c20();
  /* 10a5033d jmp 0x10a5040e */
  goto L_10a5040e;
L_10a50342:;
  /* 10a50342 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50345 mov dword ptr [0x10a7087c], edx */
  w32((uint32_t)(0x10a7087c), (EDX));
  /* 10a5034b cmp dword ptr [0x10a7087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50352 je 0x10a50374 */
  if (C.zf) goto L_10a50374;
  /* 10a50354 mov eax, dword ptr [0x10a7087c] */
  EAX = (r32((uint32_t)(0x10a7087c)));
  /* 10a50359 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a5035c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a5035e je 0x10a50374 */
  if (C.zf) goto L_10a50374;
  /* 10a50360 push 0x10a7087c */
  push32((uint32_t)(0x10a7087cu));
  /* 10a50365 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10a50367 push 0x10a6fa90 */
  push32((uint32_t)(0x10a6fa90u));
  /* 10a5036c call 0x10a50500 */
  push32(0x10a50371u); f_10a50500();
  /* 10a50371 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a50374:;
  /* 10a50374 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50377 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5037a mov dword ptr [0x10a70880], edx */
  w32((uint32_t)(0x10a70880), (EDX));
  /* 10a50380 cmp dword ptr [0x10a70880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50387 je 0x10a503a9 */
  if (C.zf) goto L_10a503a9;
  /* 10a50389 mov eax, dword ptr [0x10a70880] */
  EAX = (r32((uint32_t)(0x10a70880)));
  /* 10a5038e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a50391 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a50393 je 0x10a503a9 */
  if (C.zf) goto L_10a503a9;
  /* 10a50395 push 0x10a70880 */
  push32((uint32_t)(0x10a70880u));
  /* 10a5039a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10a5039c push 0x10a6f9d8 */
  push32((uint32_t)(0x10a6f9d8u));
  /* 10a503a1 call 0x10a50500 */
  push32(0x10a503a6u); f_10a50500();
  /* 10a503a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a503a9:;
  /* 10a503a9 mov dword ptr [0x10a70884], 0 */
  w32((uint32_t)(0x10a70884), (0x0u));
  /* 10a503b3 cmp dword ptr [0x10a7087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a503ba je 0x10a503ed */
  if (C.zf) goto L_10a503ed;
  /* 10a503bc mov edx, dword ptr [0x10a7087c] */
  EDX = (r32((uint32_t)(0x10a7087c)));
  /* 10a503c2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a503c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a503c7 je 0x10a503ed */
  if (C.zf) goto L_10a503ed;
  /* 10a503c9 cmp dword ptr [0x10a70880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a503d0 je 0x10a503e6 */
  if (C.zf) goto L_10a503e6;
  /* 10a503d2 mov ecx, dword ptr [0x10a70880] */
  ECX = (r32((uint32_t)(0x10a70880)));
  /* 10a503d8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a503db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a503dd je 0x10a503e6 */
  if (C.zf) goto L_10a503e6;
  /* 10a503df call 0x10a50590 */
  push32(0x10a503e4u); f_10a50590();
  /* 10a503e4 jmp 0x10a503eb */
  goto L_10a503eb;
L_10a503e6:;
  /* 10a503e6 call 0x10a50980 */
  push32(0x10a503ebu); f_10a50980();
L_10a503eb:;
  /* 10a503eb jmp 0x10a5040e */
  goto L_10a5040e;
L_10a503ed:;
  /* 10a503ed cmp dword ptr [0x10a70880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a503f4 je 0x10a50409 */
  if (C.zf) goto L_10a50409;
  /* 10a503f6 mov eax, dword ptr [0x10a70880] */
  EAX = (r32((uint32_t)(0x10a70880)));
  /* 10a503fb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a503fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a50400 je 0x10a50409 */
  if (C.zf) goto L_10a50409;
  /* 10a50402 call 0x10a50b20 */
  push32(0x10a50407u); f_10a50b20();
  /* 10a50407 jmp 0x10a5040e */
  goto L_10a5040e;
L_10a50409:;
  /* 10a50409 call 0x10a50c20 */
  push32(0x10a5040eu); f_10a50c20();
L_10a5040e:;
  /* 10a5040e cmp dword ptr [0x10a70884], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70884))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50415 jne 0x10a5041e */
  if (!C.zf) goto L_10a5041e;
  /* 10a50417 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a50419 jmp 0x10a504fc */
  goto L_10a504fc;
L_10a5041e:;
  /* 10a5041e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50421 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50427 push edx */
  push32((uint32_t)(EDX));
  /* 10a50428 call 0x10a50c50 */
  push32(0x10a5042du); f_10a50c50();
  /* 10a5042d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50430 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a50433 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50437 je 0x10a5044c */
  if (C.zf) goto L_10a5044c;
  /* 10a50439 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a5043c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a50441 push eax */
  push32((uint32_t)(EAX));
  /* 10a50442 call dword ptr [0x10a73298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73298))), 0x10a50448u);
  /* 10a50448 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a5044a jne 0x10a50453 */
  if (!C.zf) goto L_10a50453;
L_10a5044c:;
  /* 10a5044c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a5044e jmp 0x10a504fc */
  goto L_10a504fc;
L_10a50453:;
  /* 10a50453 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a50455 mov ecx, dword ptr [0x10a7086c] */
  ECX = (r32((uint32_t)(0x10a7086c)));
  /* 10a5045b push ecx */
  push32((uint32_t)(ECX));
  /* 10a5045c call dword ptr [0x10a732a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732a8))), 0x10a50462u);
  /* 10a50462 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50464 jne 0x10a5046d */
  if (!C.zf) goto L_10a5046d;
  /* 10a50466 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a50468 jmp 0x10a504fc */
  goto L_10a504fc;
L_10a5046d:;
  /* 10a5046d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50471 je 0x10a50498 */
  if (C.zf) goto L_10a50498;
  /* 10a50473 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a50476 mov ax, word ptr [0x10a7086c] */
  AX = (r16((uint32_t)(0x10a7086c)));
  /* 10a5047c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10a5047f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a50482 mov dx, word ptr [0x10a70888] */
  DX = (r16((uint32_t)(0x10a70888)));
  /* 10a50489 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10a5048d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a50490 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10a50494 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10a50498:;
  /* 10a50498 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5049c je 0x10a504f7 */
  if (C.zf) goto L_10a504f7;
  /* 10a5049e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10a504a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a504a3 push edx */
  push32((uint32_t)(EDX));
  /* 10a504a4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10a504a9 mov eax, dword ptr [0x10a7086c] */
  EAX = (r32((uint32_t)(0x10a7086c)));
  /* 10a504ae push eax */
  push32((uint32_t)(EAX));
  /* 10a504af call dword ptr [0x10a7088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7088c))), 0x10a504b5u);
  /* 10a504b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a504b7 jne 0x10a504bd */
  if (!C.zf) goto L_10a504bd;
  /* 10a504b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a504bb jmp 0x10a504fc */
  goto L_10a504fc;
L_10a504bd:;
  /* 10a504bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10a504bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a504c2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a504c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a504c6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10a504cb mov edx, dword ptr [0x10a70888] */
  EDX = (r32((uint32_t)(0x10a70888)));
  /* 10a504d1 push edx */
  push32((uint32_t)(EDX));
  /* 10a504d2 call dword ptr [0x10a7088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7088c))), 0x10a504d8u);
  /* 10a504d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a504da jne 0x10a504e0 */
  if (!C.zf) goto L_10a504e0;
  /* 10a504dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a504de jmp 0x10a504fc */
  goto L_10a504fc;
L_10a504e0:;
  /* 10a504e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10a504e2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a504e5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a504ea push eax */
  push32((uint32_t)(EAX));
  /* 10a504eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a504ee push ecx */
  push32((uint32_t)(ECX));
  /* 10a504ef call 0x10a47060 */
  push32(0x10a504f4u); f_10a47060();
  /* 10a504f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a504f7:;
  /* 10a504f7 mov eax, 1 */
  EAX = (0x1u);
L_10a504fc:;
  /* 10a504fc mov esp, ebp */
  ESP = (EBP);
  /* 10a504fe pop ebp */
  EBP = (pop32());
  /* 10a504ff ret  */
  ESPCHK(0x10a50300u, _esp0);
  ESP += 4; return;
}

/* FUN_10010500 @ 0x10a50500 (130 bytes, 47 insns) */
void f_10a50500(void) {
  FTRACE(0x10a50500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a50500 push ebp */
  push32((uint32_t)(EBP));
  /* 10a50501 mov ebp, esp */
  EBP = (ESP);
  /* 10a50503 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50506 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10a5050d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10a50514:;
  /* 10a50514 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a50517 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5051a jg 0x10a5057e */
  if ((!C.zf&&C.sf==C.of)) goto L_10a5057e;
  /* 10a5051c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50520 je 0x10a5057e */
  if (C.zf) goto L_10a5057e;
  /* 10a50522 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a50525 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50528 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a50529 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a5052b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a5052d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a50530 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a50533 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50536 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10a50539 push eax */
  push32((uint32_t)(EAX));
  /* 10a5053a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5053d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a5053f push edx */
  push32((uint32_t)(EDX));
  /* 10a50540 call 0x10a52bf0 */
  push32(0x10a50545u); f_10a52bf0();
  /* 10a50545 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50548 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a5054b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5054f jne 0x10a50562 */
  if (!C.zf) goto L_10a50562;
  /* 10a50551 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a50554 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50557 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10a5055b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5055e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a50560 jmp 0x10a5057c */
  goto L_10a5057c;
L_10a50562:;
  /* 10a50562 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50566 jge 0x10a50573 */
  if ((C.sf==C.of)) goto L_10a50573;
  /* 10a50568 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a5056b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a5056e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10a50571 jmp 0x10a5057c */
  goto L_10a5057c;
L_10a50573:;
  /* 10a50573 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a50576 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50579 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a5057c:;
  /* 10a5057c jmp 0x10a50514 */
  goto L_10a50514;
L_10a5057e:;
  /* 10a5057e mov esp, ebp */
  ESP = (EBP);
  /* 10a50580 pop ebp */
  EBP = (pop32());
  /* 10a50581 ret  */
  ESPCHK(0x10a50500u, _esp0);
  ESP += 4; return;
}

/* FUN_10010590 @ 0x10a50590 (186 bytes, 50 insns) */
void f_10a50590(void) {
  FTRACE(0x10a50590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a50590 push ebp */
  push32((uint32_t)(EBP));
  /* 10a50591 mov ebp, esp */
  EBP = (ESP);
  /* 10a50593 push ecx */
  push32((uint32_t)(ECX));
  /* 10a50594 mov eax, dword ptr [0x10a7087c] */
  EAX = (r32((uint32_t)(0x10a7087c)));
  /* 10a50599 push eax */
  push32((uint32_t)(EAX));
  /* 10a5059a call 0x10a47350 */
  push32(0x10a5059fu); f_10a47350();
  /* 10a5059f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a505a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a505a4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a505a7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10a505aa mov dword ptr [0x10a70878], ecx */
  w32((uint32_t)(0x10a70878), (ECX));
  /* 10a505b0 mov edx, dword ptr [0x10a70880] */
  EDX = (r32((uint32_t)(0x10a70880)));
  /* 10a505b6 push edx */
  push32((uint32_t)(EDX));
  /* 10a505b7 call 0x10a47350 */
  push32(0x10a505bcu); f_10a47350();
  /* 10a505bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a505bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a505c1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a505c4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10a505c7 mov dword ptr [0x10a70870], ecx */
  w32((uint32_t)(0x10a70870), (ECX));
  /* 10a505cd mov dword ptr [0x10a7086c], 0 */
  w32((uint32_t)(0x10a7086c), (0x0u));
  /* 10a505d7 cmp dword ptr [0x10a70878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a505de je 0x10a505e9 */
  if (C.zf) goto L_10a505e9;
  /* 10a505e0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10a505e7 jmp 0x10a505fb */
  goto L_10a505fb;
L_10a505e9:;
  /* 10a505e9 mov edx, dword ptr [0x10a7087c] */
  EDX = (r32((uint32_t)(0x10a7087c)));
  /* 10a505ef push edx */
  push32((uint32_t)(EDX));
  /* 10a505f0 call 0x10a51030 */
  push32(0x10a505f5u); f_10a51030();
  /* 10a505f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a505f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a505fb:;
  /* 10a505fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a505fe mov dword ptr [0x10a70874], eax */
  w32((uint32_t)(0x10a70874), (EAX));
  /* 10a50603 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a50605 push 0x10a50650 */
  push32((uint32_t)(0x10a50650u));
  /* 10a5060a call dword ptr [0x10a7329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7329c))), 0x10a50610u);
  /* 10a50610 mov ecx, dword ptr [0x10a70884] */
  ECX = (r32((uint32_t)(0x10a70884)));
  /* 10a50616 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10a5061c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a5061e je 0x10a5063c */
  if (C.zf) goto L_10a5063c;
  /* 10a50620 mov edx, dword ptr [0x10a70884] */
  EDX = (r32((uint32_t)(0x10a70884)));
  /* 10a50626 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10a5062c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a5062e je 0x10a5063c */
  if (C.zf) goto L_10a5063c;
  /* 10a50630 mov eax, dword ptr [0x10a70884] */
  EAX = (r32((uint32_t)(0x10a70884)));
  /* 10a50635 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10a50638 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a5063a jne 0x10a50646 */
  if (!C.zf) goto L_10a50646;
L_10a5063c:;
  /* 10a5063c mov dword ptr [0x10a70884], 0 */
  w32((uint32_t)(0x10a70884), (0x0u));
L_10a50646:;
  /* 10a50646 mov esp, ebp */
  ESP = (EBP);
  /* 10a50648 pop ebp */
  EBP = (pop32());
  /* 10a50649 ret  */
  ESPCHK(0x10a50590u, _esp0);
  ESP += 4; return;
}

/* FUN_10010650 @ 0x10a50650 (804 bytes, 220 insns) */
void f_10a50650(void) {
  FTRACE(0x10a50650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a50650 push ebp */
  push32((uint32_t)(EBP));
  /* 10a50651 mov ebp, esp */
  EBP = (ESP);
  /* 10a50653 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50656 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50659 push eax */
  push32((uint32_t)(EAX));
  /* 10a5065a call 0x10a50fb0 */
  push32(0x10a5065fu); f_10a50fb0();
  /* 10a5065f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50662 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10a50665 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10a50667 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a5066a push ecx */
  push32((uint32_t)(ECX));
  /* 10a5066b mov edx, dword ptr [0x10a70870] */
  EDX = (r32((uint32_t)(0x10a70870)));
  /* 10a50671 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a50673 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50675 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10a5067b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50681 push edx */
  push32((uint32_t)(EDX));
  /* 10a50682 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a50685 push eax */
  push32((uint32_t)(EAX));
  /* 10a50686 call dword ptr [0x10a7088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7088c))), 0x10a5068cu);
  /* 10a5068c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a5068e jne 0x10a506a4 */
  if (!C.zf) goto L_10a506a4;
  /* 10a50690 mov dword ptr [0x10a70884], 0 */
  w32((uint32_t)(0x10a70884), (0x0u));
  /* 10a5069a mov eax, 1 */
  EAX = (0x1u);
  /* 10a5069f jmp 0x10a5096e */
  goto L_10a5096e;
L_10a506a4:;
  /* 10a506a4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a506a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a506a8 mov edx, dword ptr [0x10a70880] */
  EDX = (r32((uint32_t)(0x10a70880)));
  /* 10a506ae push edx */
  push32((uint32_t)(EDX));
  /* 10a506af call 0x10a52bf0 */
  push32(0x10a506b4u); f_10a52bf0();
  /* 10a506b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a506b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a506b9 jne 0x10a507df */
  if (!C.zf) goto L_10a507df;
  /* 10a506bf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10a506c1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10a506c4 push eax */
  push32((uint32_t)(EAX));
  /* 10a506c5 mov ecx, dword ptr [0x10a70878] */
  ECX = (r32((uint32_t)(0x10a70878)));
  /* 10a506cb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a506cd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a506cf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10a506d5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a506db push ecx */
  push32((uint32_t)(ECX));
  /* 10a506dc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a506df push edx */
  push32((uint32_t)(EDX));
  /* 10a506e0 call dword ptr [0x10a7088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7088c))), 0x10a506e6u);
  /* 10a506e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a506e8 jne 0x10a506fe */
  if (!C.zf) goto L_10a506fe;
  /* 10a506ea mov dword ptr [0x10a70884], 0 */
  w32((uint32_t)(0x10a70884), (0x0u));
  /* 10a506f4 mov eax, 1 */
  EAX = (0x1u);
  /* 10a506f9 jmp 0x10a5096e */
  goto L_10a5096e;
L_10a506fe:;
  /* 10a506fe lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10a50701 push eax */
  push32((uint32_t)(EAX));
  /* 10a50702 mov ecx, dword ptr [0x10a7087c] */
  ECX = (r32((uint32_t)(0x10a7087c)));
  /* 10a50708 push ecx */
  push32((uint32_t)(ECX));
  /* 10a50709 call 0x10a52bf0 */
  push32(0x10a5070eu); f_10a52bf0();
  /* 10a5070e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50711 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50713 jne 0x10a50740 */
  if (!C.zf) goto L_10a50740;
  /* 10a50715 mov edx, dword ptr [0x10a70884] */
  EDX = (r32((uint32_t)(0x10a70884)));
  /* 10a5071b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10a50721 mov dword ptr [0x10a70884], edx */
  w32((uint32_t)(0x10a70884), (EDX));
  /* 10a50727 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a5072a mov dword ptr [0x10a70888], eax */
  w32((uint32_t)(0x10a70888), (EAX));
  /* 10a5072f mov ecx, dword ptr [0x10a70888] */
  ECX = (r32((uint32_t)(0x10a70888)));
  /* 10a50735 mov dword ptr [0x10a7086c], ecx */
  w32((uint32_t)(0x10a7086c), (ECX));
  /* 10a5073b jmp 0x10a507df */
  goto L_10a507df;
L_10a50740:;
  /* 10a50740 mov edx, dword ptr [0x10a70884] */
  EDX = (r32((uint32_t)(0x10a70884)));
  /* 10a50746 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10a50749 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a5074b jne 0x10a507df */
  if (!C.zf) goto L_10a507df;
  /* 10a50751 cmp dword ptr [0x10a70874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50758 je 0x10a507ad */
  if (C.zf) goto L_10a507ad;
  /* 10a5075a mov eax, dword ptr [0x10a70874] */
  EAX = (r32((uint32_t)(0x10a70874)));
  /* 10a5075f push eax */
  push32((uint32_t)(EAX));
  /* 10a50760 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a50763 push ecx */
  push32((uint32_t)(ECX));
  /* 10a50764 mov edx, dword ptr [0x10a7087c] */
  EDX = (r32((uint32_t)(0x10a7087c)));
  /* 10a5076a push edx */
  push32((uint32_t)(EDX));
  /* 10a5076b call 0x10a52cc0 */
  push32(0x10a50770u); f_10a52cc0();
  /* 10a50770 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50773 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50775 jne 0x10a507ad */
  if (!C.zf) goto L_10a507ad;
  /* 10a50777 mov eax, dword ptr [0x10a70884] */
  EAX = (r32((uint32_t)(0x10a70884)));
  /* 10a5077c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10a5077e mov dword ptr [0x10a70884], eax */
  w32((uint32_t)(0x10a70884), (EAX));
  /* 10a50783 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a50786 mov dword ptr [0x10a70888], ecx */
  w32((uint32_t)(0x10a70888), (ECX));
  /* 10a5078c mov edx, dword ptr [0x10a7087c] */
  EDX = (r32((uint32_t)(0x10a7087c)));
  /* 10a50792 push edx */
  push32((uint32_t)(EDX));
  /* 10a50793 call 0x10a47350 */
  push32(0x10a50798u); f_10a47350();
  /* 10a50798 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5079b cmp eax, dword ptr [0x10a70874] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a70874))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a507a1 jne 0x10a507ab */
  if (!C.zf) goto L_10a507ab;
  /* 10a507a3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a507a6 mov dword ptr [0x10a7086c], eax */
  w32((uint32_t)(0x10a7086c), (EAX));
L_10a507ab:;
  /* 10a507ab jmp 0x10a507df */
  goto L_10a507df;
L_10a507ad:;
  /* 10a507ad mov ecx, dword ptr [0x10a70884] */
  ECX = (r32((uint32_t)(0x10a70884)));
  /* 10a507b3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a507b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a507b8 jne 0x10a507df */
  if (!C.zf) goto L_10a507df;
  /* 10a507ba mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a507bd push edx */
  push32((uint32_t)(EDX));
  /* 10a507be call 0x10a50cf0 */
  push32(0x10a507c3u); f_10a50cf0();
  /* 10a507c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a507c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a507c8 je 0x10a507df */
  if (C.zf) goto L_10a507df;
  /* 10a507ca mov eax, dword ptr [0x10a70884] */
  EAX = (r32((uint32_t)(0x10a70884)));
  /* 10a507cf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10a507d1 mov dword ptr [0x10a70884], eax */
  w32((uint32_t)(0x10a70884), (EAX));
  /* 10a507d6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a507d9 mov dword ptr [0x10a70888], ecx */
  w32((uint32_t)(0x10a70888), (ECX));
L_10a507df:;
  /* 10a507df mov edx, dword ptr [0x10a70884] */
  EDX = (r32((uint32_t)(0x10a70884)));
  /* 10a507e5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10a507eb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a507f1 je 0x10a50961 */
  if (C.zf) goto L_10a50961;
  /* 10a507f7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10a507f9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10a507fc push eax */
  push32((uint32_t)(EAX));
  /* 10a507fd mov ecx, dword ptr [0x10a70878] */
  ECX = (r32((uint32_t)(0x10a70878)));
  /* 10a50803 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a50805 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50807 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10a5080d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50813 push ecx */
  push32((uint32_t)(ECX));
  /* 10a50814 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a50817 push edx */
  push32((uint32_t)(EDX));
  /* 10a50818 call dword ptr [0x10a7088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7088c))), 0x10a5081eu);
  /* 10a5081e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50820 jne 0x10a50836 */
  if (!C.zf) goto L_10a50836;
  /* 10a50822 mov dword ptr [0x10a70884], 0 */
  w32((uint32_t)(0x10a70884), (0x0u));
  /* 10a5082c mov eax, 1 */
  EAX = (0x1u);
  /* 10a50831 jmp 0x10a5096e */
  goto L_10a5096e;
L_10a50836:;
  /* 10a50836 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10a50839 push eax */
  push32((uint32_t)(EAX));
  /* 10a5083a mov ecx, dword ptr [0x10a7087c] */
  ECX = (r32((uint32_t)(0x10a7087c)));
  /* 10a50840 push ecx */
  push32((uint32_t)(ECX));
  /* 10a50841 call 0x10a52bf0 */
  push32(0x10a50846u); f_10a52bf0();
  /* 10a50846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50849 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a5084b jne 0x10a50900 */
  if (!C.zf) goto L_10a50900;
  /* 10a50851 mov edx, dword ptr [0x10a70884] */
  EDX = (r32((uint32_t)(0x10a70884)));
  /* 10a50857 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10a5085a mov dword ptr [0x10a70884], edx */
  w32((uint32_t)(0x10a70884), (EDX));
  /* 10a50860 cmp dword ptr [0x10a70878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50867 je 0x10a5088a */
  if (C.zf) goto L_10a5088a;
  /* 10a50869 mov eax, dword ptr [0x10a70884] */
  EAX = (r32((uint32_t)(0x10a70884)));
  /* 10a5086e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10a50871 mov dword ptr [0x10a70884], eax */
  w32((uint32_t)(0x10a70884), (EAX));
  /* 10a50876 cmp dword ptr [0x10a7086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5087d jne 0x10a50888 */
  if (!C.zf) goto L_10a50888;
  /* 10a5087f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a50882 mov dword ptr [0x10a7086c], ecx */
  w32((uint32_t)(0x10a7086c), (ECX));
L_10a50888:;
  /* 10a50888 jmp 0x10a508fe */
  goto L_10a508fe;
L_10a5088a:;
  /* 10a5088a cmp dword ptr [0x10a70874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50891 je 0x10a508df */
  if (C.zf) goto L_10a508df;
  /* 10a50893 mov edx, dword ptr [0x10a7087c] */
  EDX = (r32((uint32_t)(0x10a7087c)));
  /* 10a50899 push edx */
  push32((uint32_t)(EDX));
  /* 10a5089a call 0x10a47350 */
  push32(0x10a5089fu); f_10a47350();
  /* 10a5089f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a508a2 cmp eax, dword ptr [0x10a70874] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a70874))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a508a8 jne 0x10a508df */
  if (!C.zf) goto L_10a508df;
  /* 10a508aa push 1 */
  push32((uint32_t)(0x1u));
  /* 10a508ac mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a508af push eax */
  push32((uint32_t)(EAX));
  /* 10a508b0 call 0x10a50d40 */
  push32(0x10a508b5u); f_10a50d40();
  /* 10a508b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a508b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a508ba je 0x10a508dd */
  if (C.zf) goto L_10a508dd;
  /* 10a508bc mov ecx, dword ptr [0x10a70884] */
  ECX = (r32((uint32_t)(0x10a70884)));
  /* 10a508c2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10a508c5 mov dword ptr [0x10a70884], ecx */
  w32((uint32_t)(0x10a70884), (ECX));
  /* 10a508cb cmp dword ptr [0x10a7086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a508d2 jne 0x10a508dd */
  if (!C.zf) goto L_10a508dd;
  /* 10a508d4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a508d7 mov dword ptr [0x10a7086c], edx */
  w32((uint32_t)(0x10a7086c), (EDX));
L_10a508dd:;
  /* 10a508dd jmp 0x10a508fe */
  goto L_10a508fe;
L_10a508df:;
  /* 10a508df mov eax, dword ptr [0x10a70884] */
  EAX = (r32((uint32_t)(0x10a70884)));
  /* 10a508e4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10a508e7 mov dword ptr [0x10a70884], eax */
  w32((uint32_t)(0x10a70884), (EAX));
  /* 10a508ec cmp dword ptr [0x10a7086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a508f3 jne 0x10a508fe */
  if (!C.zf) goto L_10a508fe;
  /* 10a508f5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a508f8 mov dword ptr [0x10a7086c], ecx */
  w32((uint32_t)(0x10a7086c), (ECX));
L_10a508fe:;
  /* 10a508fe jmp 0x10a50961 */
  goto L_10a50961;
L_10a50900:;
  /* 10a50900 cmp dword ptr [0x10a70878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50907 jne 0x10a50961 */
  if (!C.zf) goto L_10a50961;
  /* 10a50909 cmp dword ptr [0x10a70874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50910 je 0x10a50961 */
  if (C.zf) goto L_10a50961;
  /* 10a50912 mov edx, dword ptr [0x10a70874] */
  EDX = (r32((uint32_t)(0x10a70874)));
  /* 10a50918 push edx */
  push32((uint32_t)(EDX));
  /* 10a50919 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10a5091c push eax */
  push32((uint32_t)(EAX));
  /* 10a5091d mov ecx, dword ptr [0x10a7087c] */
  ECX = (r32((uint32_t)(0x10a7087c)));
  /* 10a50923 push ecx */
  push32((uint32_t)(ECX));
  /* 10a50924 call 0x10a52cc0 */
  push32(0x10a50929u); f_10a52cc0();
  /* 10a50929 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5092c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a5092e jne 0x10a50961 */
  if (!C.zf) goto L_10a50961;
  /* 10a50930 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a50932 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a50935 push edx */
  push32((uint32_t)(EDX));
  /* 10a50936 call 0x10a50d40 */
  push32(0x10a5093bu); f_10a50d40();
  /* 10a5093b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5093e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50940 je 0x10a50961 */
  if (C.zf) goto L_10a50961;
  /* 10a50942 mov eax, dword ptr [0x10a70884] */
  EAX = (r32((uint32_t)(0x10a70884)));
  /* 10a50947 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10a5094a mov dword ptr [0x10a70884], eax */
  w32((uint32_t)(0x10a70884), (EAX));
  /* 10a5094f cmp dword ptr [0x10a7086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50956 jne 0x10a50961 */
  if (!C.zf) goto L_10a50961;
  /* 10a50958 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a5095b mov dword ptr [0x10a7086c], ecx */
  w32((uint32_t)(0x10a7086c), (ECX));
L_10a50961:;
  /* 10a50961 mov eax, dword ptr [0x10a70884] */
  EAX = (r32((uint32_t)(0x10a70884)));
  /* 10a50966 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a50969 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a5096b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a5096d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10a5096e:;
  /* 10a5096e mov esp, ebp */
  ESP = (EBP);
  /* 10a50970 pop ebp */
  EBP = (pop32());
  /* 10a50971 ret 4 */
  ESPCHK(0x10a50650u, _esp0);
  ESP += 8; return;
}

/* FUN_10010980 @ 0x10a50980 (116 bytes, 33 insns) */
void f_10a50980(void) {
  FTRACE(0x10a50980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a50980 push ebp */
  push32((uint32_t)(EBP));
  /* 10a50981 mov ebp, esp */
  EBP = (ESP);
  /* 10a50983 push ecx */
  push32((uint32_t)(ECX));
  /* 10a50984 mov eax, dword ptr [0x10a7087c] */
  EAX = (r32((uint32_t)(0x10a7087c)));
  /* 10a50989 push eax */
  push32((uint32_t)(EAX));
  /* 10a5098a call 0x10a47350 */
  push32(0x10a5098fu); f_10a47350();
  /* 10a5098f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50992 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a50994 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50997 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10a5099a mov dword ptr [0x10a70878], ecx */
  w32((uint32_t)(0x10a70878), (ECX));
  /* 10a509a0 cmp dword ptr [0x10a70878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a509a7 je 0x10a509b2 */
  if (C.zf) goto L_10a509b2;
  /* 10a509a9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10a509b0 jmp 0x10a509c4 */
  goto L_10a509c4;
L_10a509b2:;
  /* 10a509b2 mov edx, dword ptr [0x10a7087c] */
  EDX = (r32((uint32_t)(0x10a7087c)));
  /* 10a509b8 push edx */
  push32((uint32_t)(EDX));
  /* 10a509b9 call 0x10a51030 */
  push32(0x10a509beu); f_10a51030();
  /* 10a509be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a509c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a509c4:;
  /* 10a509c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a509c7 mov dword ptr [0x10a70874], eax */
  w32((uint32_t)(0x10a70874), (EAX));
  /* 10a509cc push 1 */
  push32((uint32_t)(0x1u));
  /* 10a509ce push 0x10a50a00 */
  push32((uint32_t)(0x10a50a00u));
  /* 10a509d3 call dword ptr [0x10a7329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7329c))), 0x10a509d9u);
  /* 10a509d9 mov ecx, dword ptr [0x10a70884] */
  ECX = (r32((uint32_t)(0x10a70884)));
  /* 10a509df and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10a509e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a509e4 jne 0x10a509f0 */
  if (!C.zf) goto L_10a509f0;
  /* 10a509e6 mov dword ptr [0x10a70884], 0 */
  w32((uint32_t)(0x10a70884), (0x0u));
L_10a509f0:;
  /* 10a509f0 mov esp, ebp */
  ESP = (EBP);
  /* 10a509f2 pop ebp */
  EBP = (pop32());
  /* 10a509f3 ret  */
  ESPCHK(0x10a50980u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a00 @ 0x10a50a00 (287 bytes, 86 insns) */
void f_10a50a00(void) {
  FTRACE(0x10a50a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a50a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a50a01 mov ebp, esp */
  EBP = (ESP);
  /* 10a50a03 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50a06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50a09 push eax */
  push32((uint32_t)(EAX));
  /* 10a50a0a call 0x10a50fb0 */
  push32(0x10a50a0fu); f_10a50fb0();
  /* 10a50a0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50a12 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10a50a15 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10a50a17 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a50a1a push ecx */
  push32((uint32_t)(ECX));
  /* 10a50a1b mov edx, dword ptr [0x10a70878] */
  EDX = (r32((uint32_t)(0x10a70878)));
  /* 10a50a21 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a50a23 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50a25 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10a50a2b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50a31 push edx */
  push32((uint32_t)(EDX));
  /* 10a50a32 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a50a35 push eax */
  push32((uint32_t)(EAX));
  /* 10a50a36 call dword ptr [0x10a7088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7088c))), 0x10a50a3cu);
  /* 10a50a3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50a3e jne 0x10a50a54 */
  if (!C.zf) goto L_10a50a54;
  /* 10a50a40 mov dword ptr [0x10a70884], 0 */
  w32((uint32_t)(0x10a70884), (0x0u));
  /* 10a50a4a mov eax, 1 */
  EAX = (0x1u);
  /* 10a50a4f jmp 0x10a50b19 */
  goto L_10a50b19;
L_10a50a54:;
  /* 10a50a54 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a50a57 push ecx */
  push32((uint32_t)(ECX));
  /* 10a50a58 mov edx, dword ptr [0x10a7087c] */
  EDX = (r32((uint32_t)(0x10a7087c)));
  /* 10a50a5e push edx */
  push32((uint32_t)(EDX));
  /* 10a50a5f call 0x10a52bf0 */
  push32(0x10a50a64u); f_10a52bf0();
  /* 10a50a64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50a67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50a69 jne 0x10a50aa9 */
  if (!C.zf) goto L_10a50aa9;
  /* 10a50a6b cmp dword ptr [0x10a70878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50a72 jne 0x10a50a86 */
  if (!C.zf) goto L_10a50a86;
  /* 10a50a74 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a50a76 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a50a79 push eax */
  push32((uint32_t)(EAX));
  /* 10a50a7a call 0x10a50d40 */
  push32(0x10a50a7fu); f_10a50d40();
  /* 10a50a7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50a82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50a84 je 0x10a50aa7 */
  if (C.zf) goto L_10a50aa7;
L_10a50a86:;
  /* 10a50a86 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a50a89 mov dword ptr [0x10a70888], ecx */
  w32((uint32_t)(0x10a70888), (ECX));
  /* 10a50a8f mov edx, dword ptr [0x10a70888] */
  EDX = (r32((uint32_t)(0x10a70888)));
  /* 10a50a95 mov dword ptr [0x10a7086c], edx */
  w32((uint32_t)(0x10a7086c), (EDX));
  /* 10a50a9b mov eax, dword ptr [0x10a70884] */
  EAX = (r32((uint32_t)(0x10a70884)));
  /* 10a50aa0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10a50aa2 mov dword ptr [0x10a70884], eax */
  w32((uint32_t)(0x10a70884), (EAX));
L_10a50aa7:;
  /* 10a50aa7 jmp 0x10a50b0c */
  goto L_10a50b0c;
L_10a50aa9:;
  /* 10a50aa9 cmp dword ptr [0x10a70878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50ab0 jne 0x10a50b0c */
  if (!C.zf) goto L_10a50b0c;
  /* 10a50ab2 cmp dword ptr [0x10a70874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50ab9 je 0x10a50b0c */
  if (C.zf) goto L_10a50b0c;
  /* 10a50abb mov ecx, dword ptr [0x10a70874] */
  ECX = (r32((uint32_t)(0x10a70874)));
  /* 10a50ac1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a50ac2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10a50ac5 push edx */
  push32((uint32_t)(EDX));
  /* 10a50ac6 mov eax, dword ptr [0x10a7087c] */
  EAX = (r32((uint32_t)(0x10a7087c)));
  /* 10a50acb push eax */
  push32((uint32_t)(EAX));
  /* 10a50acc call 0x10a52cc0 */
  push32(0x10a50ad1u); f_10a52cc0();
  /* 10a50ad1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50ad4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50ad6 jne 0x10a50b0c */
  if (!C.zf) goto L_10a50b0c;
  /* 10a50ad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a50ada mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a50add push ecx */
  push32((uint32_t)(ECX));
  /* 10a50ade call 0x10a50d40 */
  push32(0x10a50ae3u); f_10a50d40();
  /* 10a50ae3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50ae6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50ae8 je 0x10a50b0c */
  if (C.zf) goto L_10a50b0c;
  /* 10a50aea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a50aed mov dword ptr [0x10a70888], edx */
  w32((uint32_t)(0x10a70888), (EDX));
  /* 10a50af3 mov eax, dword ptr [0x10a70888] */
  EAX = (r32((uint32_t)(0x10a70888)));
  /* 10a50af8 mov dword ptr [0x10a7086c], eax */
  w32((uint32_t)(0x10a7086c), (EAX));
  /* 10a50afd mov ecx, dword ptr [0x10a70884] */
  ECX = (r32((uint32_t)(0x10a70884)));
  /* 10a50b03 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10a50b06 mov dword ptr [0x10a70884], ecx */
  w32((uint32_t)(0x10a70884), (ECX));
L_10a50b0c:;
  /* 10a50b0c mov eax, dword ptr [0x10a70884] */
  EAX = (r32((uint32_t)(0x10a70884)));
  /* 10a50b11 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a50b14 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a50b16 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50b18 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10a50b19:;
  /* 10a50b19 mov esp, ebp */
  ESP = (EBP);
  /* 10a50b1b pop ebp */
  EBP = (pop32());
  /* 10a50b1c ret 4 */
  ESPCHK(0x10a50a00u, _esp0);
  ESP += 8; return;
}

/* FUN_10010b20 @ 0x10a50b20 (69 bytes, 20 insns) */
void f_10a50b20(void) {
  FTRACE(0x10a50b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a50b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a50b21 mov ebp, esp */
  EBP = (ESP);
  /* 10a50b23 mov eax, dword ptr [0x10a70880] */
  EAX = (r32((uint32_t)(0x10a70880)));
  /* 10a50b28 push eax */
  push32((uint32_t)(EAX));
  /* 10a50b29 call 0x10a47350 */
  push32(0x10a50b2eu); f_10a47350();
  /* 10a50b2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50b31 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a50b33 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50b36 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10a50b39 mov dword ptr [0x10a70870], ecx */
  w32((uint32_t)(0x10a70870), (ECX));
  /* 10a50b3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a50b41 push 0x10a50b70 */
  push32((uint32_t)(0x10a50b70u));
  /* 10a50b46 call dword ptr [0x10a7329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7329c))), 0x10a50b4cu);
  /* 10a50b4c mov edx, dword ptr [0x10a70884] */
  EDX = (r32((uint32_t)(0x10a70884)));
  /* 10a50b52 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a50b55 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a50b57 jne 0x10a50b63 */
  if (!C.zf) goto L_10a50b63;
  /* 10a50b59 mov dword ptr [0x10a70884], 0 */
  w32((uint32_t)(0x10a70884), (0x0u));
L_10a50b63:;
  /* 10a50b63 pop ebp */
  EBP = (pop32());
  /* 10a50b64 ret  */
  ESPCHK(0x10a50b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b70 @ 0x10a50b70 (172 bytes, 54 insns) */
void f_10a50b70(void) {
  FTRACE(0x10a50b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a50b70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a50b71 mov ebp, esp */
  EBP = (ESP);
  /* 10a50b73 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50b76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50b79 push eax */
  push32((uint32_t)(EAX));
  /* 10a50b7a call 0x10a50fb0 */
  push32(0x10a50b7fu); f_10a50fb0();
  /* 10a50b7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50b82 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10a50b85 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10a50b87 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a50b8a push ecx */
  push32((uint32_t)(ECX));
  /* 10a50b8b mov edx, dword ptr [0x10a70870] */
  EDX = (r32((uint32_t)(0x10a70870)));
  /* 10a50b91 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a50b93 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50b95 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10a50b9b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50ba1 push edx */
  push32((uint32_t)(EDX));
  /* 10a50ba2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a50ba5 push eax */
  push32((uint32_t)(EAX));
  /* 10a50ba6 call dword ptr [0x10a7088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7088c))), 0x10a50bacu);
  /* 10a50bac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50bae jne 0x10a50bc1 */
  if (!C.zf) goto L_10a50bc1;
  /* 10a50bb0 mov dword ptr [0x10a70884], 0 */
  w32((uint32_t)(0x10a70884), (0x0u));
  /* 10a50bba mov eax, 1 */
  EAX = (0x1u);
  /* 10a50bbf jmp 0x10a50c16 */
  goto L_10a50c16;
L_10a50bc1:;
  /* 10a50bc1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a50bc4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a50bc5 mov edx, dword ptr [0x10a70880] */
  EDX = (r32((uint32_t)(0x10a70880)));
  /* 10a50bcb push edx */
  push32((uint32_t)(EDX));
  /* 10a50bcc call 0x10a52bf0 */
  push32(0x10a50bd1u); f_10a52bf0();
  /* 10a50bd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50bd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50bd6 jne 0x10a50c09 */
  if (!C.zf) goto L_10a50c09;
  /* 10a50bd8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a50bdb push eax */
  push32((uint32_t)(EAX));
  /* 10a50bdc call 0x10a50cf0 */
  push32(0x10a50be1u); f_10a50cf0();
  /* 10a50be1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50be4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50be6 je 0x10a50c09 */
  if (C.zf) goto L_10a50c09;
  /* 10a50be8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a50beb mov dword ptr [0x10a70888], ecx */
  w32((uint32_t)(0x10a70888), (ECX));
  /* 10a50bf1 mov edx, dword ptr [0x10a70888] */
  EDX = (r32((uint32_t)(0x10a70888)));
  /* 10a50bf7 mov dword ptr [0x10a7086c], edx */
  w32((uint32_t)(0x10a7086c), (EDX));
  /* 10a50bfd mov eax, dword ptr [0x10a70884] */
  EAX = (r32((uint32_t)(0x10a70884)));
  /* 10a50c02 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10a50c04 mov dword ptr [0x10a70884], eax */
  w32((uint32_t)(0x10a70884), (EAX));
L_10a50c09:;
  /* 10a50c09 mov eax, dword ptr [0x10a70884] */
  EAX = (r32((uint32_t)(0x10a70884)));
  /* 10a50c0e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a50c11 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a50c13 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50c15 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10a50c16:;
  /* 10a50c16 mov esp, ebp */
  ESP = (EBP);
  /* 10a50c18 pop ebp */
  EBP = (pop32());
  /* 10a50c19 ret 4 */
  ESPCHK(0x10a50b70u, _esp0);
  ESP += 8; return;
}

/* FUN_10010c20 @ 0x10a50c20 (43 bytes, 11 insns) */
void f_10a50c20(void) {
  FTRACE(0x10a50c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a50c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a50c21 mov ebp, esp */
  EBP = (ESP);
  /* 10a50c23 mov eax, dword ptr [0x10a70884] */
  EAX = (r32((uint32_t)(0x10a70884)));
  /* 10a50c28 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10a50c2d mov dword ptr [0x10a70884], eax */
  w32((uint32_t)(0x10a70884), (EAX));
  /* 10a50c32 call dword ptr [0x10a7328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7328c))), 0x10a50c38u);
  /* 10a50c38 mov dword ptr [0x10a70888], eax */
  w32((uint32_t)(0x10a70888), (EAX));
  /* 10a50c3d mov ecx, dword ptr [0x10a70888] */
  ECX = (r32((uint32_t)(0x10a70888)));
  /* 10a50c43 mov dword ptr [0x10a7086c], ecx */
  w32((uint32_t)(0x10a7086c), (ECX));
  /* 10a50c49 pop ebp */
  EBP = (pop32());
  /* 10a50c4a ret  */
  ESPCHK(0x10a50c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c50 @ 0x10a50c50 (155 bytes, 57 insns) */
void f_10a50c50(void) {
  FTRACE(0x10a50c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a50c50 push ebp */
  push32((uint32_t)(EBP));
  /* 10a50c51 mov ebp, esp */
  EBP = (ESP);
  /* 10a50c53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50c56 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50c5a je 0x10a50c7b */
  if (C.zf) goto L_10a50c7b;
  /* 10a50c5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50c5f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a50c62 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a50c64 je 0x10a50c7b */
  if (C.zf) goto L_10a50c7b;
  /* 10a50c66 push 0x10a6ccc4 */
  push32((uint32_t)(0x10a6ccc4u));
  /* 10a50c6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50c6e push edx */
  push32((uint32_t)(EDX));
  /* 10a50c6f call 0x10a501b0 */
  push32(0x10a50c74u); f_10a501b0();
  /* 10a50c74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50c77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50c79 jne 0x10a50ca3 */
  if (!C.zf) goto L_10a50ca3;
L_10a50c7b:;
  /* 10a50c7b push 8 */
  push32((uint32_t)(0x8u));
  /* 10a50c7d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10a50c80 push eax */
  push32((uint32_t)(EAX));
  /* 10a50c81 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10a50c86 mov ecx, dword ptr [0x10a70888] */
  ECX = (r32((uint32_t)(0x10a70888)));
  /* 10a50c8c push ecx */
  push32((uint32_t)(ECX));
  /* 10a50c8d call dword ptr [0x10a7088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7088c))), 0x10a50c93u);
  /* 10a50c93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50c95 jne 0x10a50c9b */
  if (!C.zf) goto L_10a50c9b;
  /* 10a50c97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a50c99 jmp 0x10a50ce7 */
  goto L_10a50ce7;
L_10a50c9b:;
  /* 10a50c9b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10a50c9e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a50ca1 jmp 0x10a50cdb */
  goto L_10a50cdb;
L_10a50ca3:;
  /* 10a50ca3 push 0x10a6ccc0 */
  push32((uint32_t)(0x10a6ccc0u));
  /* 10a50ca8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50cab push eax */
  push32((uint32_t)(EAX));
  /* 10a50cac call 0x10a501b0 */
  push32(0x10a50cb1u); f_10a501b0();
  /* 10a50cb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50cb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50cb6 jne 0x10a50cdb */
  if (!C.zf) goto L_10a50cdb;
  /* 10a50cb8 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a50cba lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10a50cbd push ecx */
  push32((uint32_t)(ECX));
  /* 10a50cbe push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a50cc0 mov edx, dword ptr [0x10a70888] */
  EDX = (r32((uint32_t)(0x10a70888)));
  /* 10a50cc6 push edx */
  push32((uint32_t)(EDX));
  /* 10a50cc7 call dword ptr [0x10a7088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7088c))), 0x10a50ccdu);
  /* 10a50ccd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50ccf jne 0x10a50cd5 */
  if (!C.zf) goto L_10a50cd5;
  /* 10a50cd1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a50cd3 jmp 0x10a50ce7 */
  goto L_10a50ce7;
L_10a50cd5:;
  /* 10a50cd5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10a50cd8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a50cdb:;
  /* 10a50cdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50cde push ecx */
  push32((uint32_t)(ECX));
  /* 10a50cdf call 0x10a52dd0 */
  push32(0x10a50ce4u); f_10a52dd0();
  /* 10a50ce4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a50ce7:;
  /* 10a50ce7 mov esp, ebp */
  ESP = (EBP);
  /* 10a50ce9 pop ebp */
  EBP = (pop32());
  /* 10a50cea ret  */
  ESPCHK(0x10a50c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010cf0 @ 0x10a50cf0 (79 bytes, 26 insns) */
void f_10a50cf0(void) {
  FTRACE(0x10a50cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a50cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a50cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10a50cf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50cf6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10a50cfa mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10a50cfe mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a50d05 jmp 0x10a50d10 */
  goto L_10a50d10;
L_10a50d07:;
  /* 10a50d07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a50d0a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50d0d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a50d10:;
  /* 10a50d10 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50d14 jae 0x10a50d36 */
  if (!C.cf) goto L_10a50d36;
  /* 10a50d16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a50d19 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a50d1f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a50d22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a50d24 mov cx, word ptr [eax*2 + 0x10a6f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10a6f9c4)));
  /* 10a50d2c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50d2e jne 0x10a50d34 */
  if (!C.zf) goto L_10a50d34;
  /* 10a50d30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a50d32 jmp 0x10a50d3b */
  goto L_10a50d3b;
L_10a50d34:;
  /* 10a50d34 jmp 0x10a50d07 */
  goto L_10a50d07;
L_10a50d36:;
  /* 10a50d36 mov eax, 1 */
  EAX = (0x1u);
L_10a50d3b:;
  /* 10a50d3b mov esp, ebp */
  ESP = (EBP);
  /* 10a50d3d pop ebp */
  EBP = (pop32());
  /* 10a50d3e ret  */
  ESPCHK(0x10a50cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d40 @ 0x10a50d40 (135 bytes, 48 insns) */
void f_10a50d40(void) {
  FTRACE(0x10a50d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a50d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a50d41 mov ebp, esp */
  EBP = (ESP);
  /* 10a50d43 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50d46 push esi */
  push32((uint32_t)(ESI));
  /* 10a50d47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50d4a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a50d4f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a50d54 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a50d59 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10a50d5c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a50d61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a50d64 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10a50d66 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10a50d69 push ecx */
  push32((uint32_t)(ECX));
  /* 10a50d6a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a50d6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a50d6f push edx */
  push32((uint32_t)(EDX));
  /* 10a50d70 call dword ptr [0x10a7088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7088c))), 0x10a50d76u);
  /* 10a50d76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50d78 jne 0x10a50d7e */
  if (!C.zf) goto L_10a50d7e;
  /* 10a50d7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a50d7c jmp 0x10a50dc2 */
  goto L_10a50dc2;
L_10a50d7e:;
  /* 10a50d7e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10a50d81 push eax */
  push32((uint32_t)(EAX));
  /* 10a50d82 call 0x10a50fb0 */
  push32(0x10a50d87u); f_10a50fb0();
  /* 10a50d87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50d8a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50d8d je 0x10a50dbd */
  if (C.zf) goto L_10a50dbd;
  /* 10a50d8f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50d93 je 0x10a50dbd */
  if (C.zf) goto L_10a50dbd;
  /* 10a50d95 mov ecx, dword ptr [0x10a7087c] */
  ECX = (r32((uint32_t)(0x10a7087c)));
  /* 10a50d9b push ecx */
  push32((uint32_t)(ECX));
  /* 10a50d9c call 0x10a51030 */
  push32(0x10a50da1u); f_10a51030();
  /* 10a50da1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50da4 mov esi, eax */
  ESI = (EAX);
  /* 10a50da6 mov edx, dword ptr [0x10a7087c] */
  EDX = (r32((uint32_t)(0x10a7087c)));
  /* 10a50dac push edx */
  push32((uint32_t)(EDX));
  /* 10a50dad call 0x10a47350 */
  push32(0x10a50db2u); f_10a47350();
  /* 10a50db2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50db5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50db7 jne 0x10a50dbd */
  if (!C.zf) goto L_10a50dbd;
  /* 10a50db9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a50dbb jmp 0x10a50dc2 */
  goto L_10a50dc2;
L_10a50dbd:;
  /* 10a50dbd mov eax, 1 */
  EAX = (0x1u);
L_10a50dc2:;
  /* 10a50dc2 pop esi */
  ESI = (pop32());
  /* 10a50dc3 mov esp, ebp */
  ESP = (EBP);
  /* 10a50dc5 pop ebp */
  EBP = (pop32());
  /* 10a50dc6 ret  */
  ESPCHK(0x10a50d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010dd0 @ 0x10a50dd0 (77 bytes, 18 insns) */
void f_10a50dd0(void) {
  FTRACE(0x10a50dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a50dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a50dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10a50dd3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50dd9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10a50de3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10a50de9 push eax */
  push32((uint32_t)(EAX));
  /* 10a50dea call dword ptr [0x10a73288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73288))), 0x10a50df0u);
  /* 10a50df0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a50df2 je 0x10a50e09 */
  if (C.zf) goto L_10a50e09;
  /* 10a50df4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50dfb jne 0x10a50e09 */
  if (!C.zf) goto L_10a50e09;
  /* 10a50dfd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10a50e07 jmp 0x10a50e13 */
  goto L_10a50e13;
L_10a50e09:;
  /* 10a50e09 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10a50e13:;
  /* 10a50e13 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10a50e19 mov esp, ebp */
  ESP = (EBP);
  /* 10a50e1b pop ebp */
  EBP = (pop32());
  /* 10a50e1c ret  */
  ESPCHK(0x10a50dd0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10a50e20 (388 bytes, 118 insns) */
void f_10a50e20(void) {
  FTRACE(0x10a50e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a50e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a50e21 mov ebp, esp */
  EBP = (ESP);
  /* 10a50e23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50e26 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a50e2d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10a50e34 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a50e3b:;
  /* 10a50e3b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a50e3e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50e41 jg 0x10a50f88 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a50f88;
  /* 10a50e47 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a50e4a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50e4d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a50e4e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50e50 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a50e52 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a50e55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a50e58 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a50e5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50e5e cmp edx, dword ptr [ecx + 0x10a6f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10a6f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50e64 jne 0x10a50f5e */
  if (!C.zf) goto L_10a50f5e;
  /* 10a50e6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a50e6d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a50e70 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50e74 ja 0x10a50e97 */
  if ((!C.cf&&!C.zf)) goto L_10a50e97;
  /* 10a50e76 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50e7a je 0x10a50f09 */
  if (C.zf) goto L_10a50f09;
  /* 10a50e80 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50e84 je 0x10a50eb4 */
  if (C.zf) goto L_10a50eb4;
  /* 10a50e86 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50e8a je 0x10a50ed6 */
  if (C.zf) goto L_10a50ed6;
  /* 10a50e8c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50e90 je 0x10a50ef8 */
  if (C.zf) goto L_10a50ef8;
  /* 10a50e92 jmp 0x10a50f28 */
  goto L_10a50f28;
L_10a50e97:;
  /* 10a50e97 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50e9e je 0x10a50ec5 */
  if (C.zf) goto L_10a50ec5;
  /* 10a50ea0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50ea7 je 0x10a50ee7 */
  if (C.zf) goto L_10a50ee7;
  /* 10a50ea9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50eb0 je 0x10a50f1a */
  if (C.zf) goto L_10a50f1a;
  /* 10a50eb2 jmp 0x10a50f28 */
  goto L_10a50f28;
L_10a50eb4:;
  /* 10a50eb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a50eb7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a50eba add ecx, 0x10a6f524 */
  { uint32_t _a=(ECX),_b=(0x10a6f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50ec0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a50ec3 jmp 0x10a50f28 */
  goto L_10a50f28;
L_10a50ec5:;
  /* 10a50ec5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a50ec8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a50ecb mov eax, dword ptr [edx + 0x10a6f52c] */
  EAX = (r32((uint32_t)(EDX + 0x10a6f52c)));
  /* 10a50ed1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a50ed4 jmp 0x10a50f28 */
  goto L_10a50f28;
L_10a50ed6:;
  /* 10a50ed6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a50ed9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a50edc add ecx, 0x10a6f530 */
  { uint32_t _a=(ECX),_b=(0x10a6f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50ee2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a50ee5 jmp 0x10a50f28 */
  goto L_10a50f28;
L_10a50ee7:;
  /* 10a50ee7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a50eea imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a50eed mov eax, dword ptr [edx + 0x10a6f534] */
  EAX = (r32((uint32_t)(EDX + 0x10a6f534)));
  /* 10a50ef3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a50ef6 jmp 0x10a50f28 */
  goto L_10a50f28;
L_10a50ef8:;
  /* 10a50ef8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a50efb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a50efe add ecx, 0x10a6f538 */
  { uint32_t _a=(ECX),_b=(0x10a6f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50f04 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a50f07 jmp 0x10a50f28 */
  goto L_10a50f28;
L_10a50f09:;
  /* 10a50f09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a50f0c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a50f0f add edx, 0x10a6f53c */
  { uint32_t _a=(EDX),_b=(0x10a6f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50f15 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a50f18 jmp 0x10a50f28 */
  goto L_10a50f28;
L_10a50f1a:;
  /* 10a50f1a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a50f1d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a50f20 add eax, 0x10a6f544 */
  { uint32_t _a=(EAX),_b=(0x10a6f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50f25 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a50f28:;
  /* 10a50f28 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50f2c je 0x10a50f34 */
  if (C.zf) goto L_10a50f34;
  /* 10a50f2e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50f32 jge 0x10a50f36 */
  if ((C.sf==C.of)) goto L_10a50f36;
L_10a50f34:;
  /* 10a50f34 jmp 0x10a50f88 */
  goto L_10a50f88;
L_10a50f36:;
  /* 10a50f36 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a50f39 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50f3c push ecx */
  push32((uint32_t)(ECX));
  /* 10a50f3d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a50f40 push edx */
  push32((uint32_t)(EDX));
  /* 10a50f41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a50f44 push eax */
  push32((uint32_t)(EAX));
  /* 10a50f45 call 0x10a47d40 */
  push32(0x10a50f4au); f_10a47d40();
  /* 10a50f4a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50f4d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a50f50 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50f53 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10a50f57 mov eax, 1 */
  EAX = (0x1u);
  /* 10a50f5c jmp 0x10a50f9e */
  goto L_10a50f9e;
L_10a50f5e:;
  /* 10a50f5e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a50f61 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a50f64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50f67 cmp eax, dword ptr [edx + 0x10a6f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10a6f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50f6d jae 0x10a50f7a */
  if (!C.cf) goto L_10a50f7a;
  /* 10a50f6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a50f72 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50f75 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a50f78 jmp 0x10a50f83 */
  goto L_10a50f83;
L_10a50f7a:;
  /* 10a50f7a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a50f7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50f80 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a50f83:;
  /* 10a50f83 jmp 0x10a50e3b */
  goto L_10a50e3b;
L_10a50f88:;
  /* 10a50f88 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a50f8b push eax */
  push32((uint32_t)(EAX));
  /* 10a50f8c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a50f8f push ecx */
  push32((uint32_t)(ECX));
  /* 10a50f90 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a50f93 push edx */
  push32((uint32_t)(EDX));
  /* 10a50f94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50f97 push eax */
  push32((uint32_t)(EAX));
  /* 10a50f98 call dword ptr [0x10a73294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73294))), 0x10a50f9eu);
L_10a50f9e:;
  /* 10a50f9e mov esp, ebp */
  ESP = (EBP);
  /* 10a50fa0 pop ebp */
  EBP = (pop32());
  /* 10a50fa1 ret 0x10 */
  ESPCHK(0x10a50e20u, _esp0);
  ESP += 20; return;
}

/* FUN_10010fb0 @ 0x10a50fb0 (118 bytes, 42 insns) */
void f_10a50fb0(void) {
  FTRACE(0x10a50fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a50fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a50fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10a50fb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a50fb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a50fbd:;
  /* 10a50fbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50fc0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a50fc2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10a50fc5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a50fc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a50fcc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a50fcf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a50fd2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a50fd4 je 0x10a5101f */
  if (C.zf) goto L_10a5101f;
  /* 10a50fd6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a50fda cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50fdd jl 0x10a50ff2 */
  if ((C.sf!=C.of)) goto L_10a50ff2;
  /* 10a50fdf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a50fe3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50fe6 jg 0x10a50ff2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a50ff2;
  /* 10a50fe8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10a50feb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a50fed mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10a50ff0 jmp 0x10a5100c */
  goto L_10a5100c;
L_10a50ff2:;
  /* 10a50ff2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a50ff6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a50ff9 jl 0x10a5100c */
  if ((C.sf!=C.of)) goto L_10a5100c;
  /* 10a50ffb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a50fff cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51002 jg 0x10a5100c */
  if ((!C.zf&&C.sf==C.of)) goto L_10a5100c;
  /* 10a51004 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10a51007 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a51009 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10a5100c:;
  /* 10a5100c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a5100f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10a51012 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a51016 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10a5101a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a5101d jmp 0x10a50fbd */
  goto L_10a50fbd;
L_10a5101f:;
  /* 10a5101f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a51022 mov esp, ebp */
  ESP = (EBP);
  /* 10a51024 pop ebp */
  EBP = (pop32());
  /* 10a51025 ret  */
  ESPCHK(0x10a50fb0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10a51030 (101 bytes, 36 insns) */
void f_10a51030(void) {
  FTRACE(0x10a51030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a51030 push ebp */
  push32((uint32_t)(EBP));
  /* 10a51031 mov ebp, esp */
  EBP = (ESP);
  /* 10a51033 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a51036 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a5103d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a51040 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a51042 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10a51045 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a51048 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5104b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10a5104e:;
  /* 10a5104e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10a51052 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51055 jl 0x10a51060 */
  if ((C.sf!=C.of)) goto L_10a51060;
  /* 10a51057 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10a5105b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5105e jle 0x10a51072 */
  if ((C.zf||C.sf!=C.of)) goto L_10a51072;
L_10a51060:;
  /* 10a51060 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10a51064 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51067 jl 0x10a5108e */
  if ((C.sf!=C.of)) goto L_10a5108e;
  /* 10a51069 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10a5106d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51070 jg 0x10a5108e */
  if ((!C.zf&&C.sf==C.of)) goto L_10a5108e;
L_10a51072:;
  /* 10a51072 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a51075 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51078 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a5107b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5107e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a51080 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10a51083 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a51086 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51089 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10a5108c jmp 0x10a5104e */
  goto L_10a5104e;
L_10a5108e:;
  /* 10a5108e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a51091 mov esp, ebp */
  ESP = (EBP);
  /* 10a51093 pop ebp */
  EBP = (pop32());
  /* 10a51094 ret  */
  ESPCHK(0x10a51030u, _esp0);
  ESP += 4; return;
}

/* FUN_100110a0 @ 0x10a510a0 (122 bytes, 39 insns) */
void f_10a510a0(void) {
  FTRACE(0x10a510a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a510a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a510a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a510a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a510a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a510a7 cmp eax, dword ptr [0x10a7211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a7211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a510ad jae 0x10a510d1 */
  if (!C.cf) goto L_10a510d1;
  /* 10a510af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a510b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a510b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a510b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a510bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a510be mov eax, dword ptr [ecx*4 + 0x10a71fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a71fe0)));
  /* 10a510c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a510ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a510cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a510cf jne 0x10a510ec */
  if (!C.zf) goto L_10a510ec;
L_10a510d1:;
  /* 10a510d1 call 0x10a4c3f0 */
  push32(0x10a510d6u); f_10a4c3f0();
  /* 10a510d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a510dc call 0x10a4c400 */
  push32(0x10a510e1u); f_10a4c400();
  /* 10a510e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a510e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a510ea jmp 0x10a51116 */
  goto L_10a51116;
L_10a510ec:;
  /* 10a510ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a510ef push edx */
  push32((uint32_t)(EDX));
  /* 10a510f0 call 0x10a4dc10 */
  push32(0x10a510f5u); f_10a4dc10();
  /* 10a510f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a510f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a510fb push eax */
  push32((uint32_t)(EAX));
  /* 10a510fc call 0x10a51120 */
  push32(0x10a51101u); f_10a51120();
  /* 10a51101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51104 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a51107 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5110a push ecx */
  push32((uint32_t)(ECX));
  /* 10a5110b call 0x10a4dca0 */
  push32(0x10a51110u); f_10a4dca0();
  /* 10a51110 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51113 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a51116:;
  /* 10a51116 mov esp, ebp */
  ESP = (EBP);
  /* 10a51118 pop ebp */
  EBP = (pop32());
  /* 10a51119 ret  */
  ESPCHK(0x10a510a0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10a51120 (170 bytes, 59 insns) */
void f_10a51120(void) {
  FTRACE(0x10a51120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a51120 push ebp */
  push32((uint32_t)(EBP));
  /* 10a51121 mov ebp, esp */
  EBP = (ESP);
  /* 10a51123 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51124 push esi */
  push32((uint32_t)(ESI));
  /* 10a51125 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a51128 push eax */
  push32((uint32_t)(EAX));
  /* 10a51129 call 0x10a4da90 */
  push32(0x10a5112eu); f_10a4da90();
  /* 10a5112e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51131 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51134 je 0x10a51173 */
  if (C.zf) goto L_10a51173;
  /* 10a51136 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5113a je 0x10a51142 */
  if (C.zf) goto L_10a51142;
  /* 10a5113c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51140 jne 0x10a5115c */
  if (!C.zf) goto L_10a5115c;
L_10a51142:;
  /* 10a51142 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a51144 call 0x10a4da90 */
  push32(0x10a51149u); f_10a4da90();
  /* 10a51149 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5114c mov esi, eax */
  ESI = (EAX);
  /* 10a5114e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a51150 call 0x10a4da90 */
  push32(0x10a51155u); f_10a4da90();
  /* 10a51155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51158 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5115a je 0x10a51173 */
  if (C.zf) goto L_10a51173;
L_10a5115c:;
  /* 10a5115c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5115f push ecx */
  push32((uint32_t)(ECX));
  /* 10a51160 call 0x10a4da90 */
  push32(0x10a51165u); f_10a4da90();
  /* 10a51165 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51168 push eax */
  push32((uint32_t)(EAX));
  /* 10a51169 call dword ptr [0x10a73290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73290))), 0x10a5116fu);
  /* 10a5116f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a51171 je 0x10a5117c */
  if (C.zf) goto L_10a5117c;
L_10a51173:;
  /* 10a51173 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a5117a jmp 0x10a51185 */
  goto L_10a51185;
L_10a5117c:;
  /* 10a5117c call dword ptr [0x10a73328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73328))), 0x10a51182u);
  /* 10a51182 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a51185:;
  /* 10a51185 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a51188 push edx */
  push32((uint32_t)(EDX));
  /* 10a51189 call 0x10a4d9b0 */
  push32(0x10a5118eu); f_10a4d9b0();
  /* 10a5118e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51191 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a51194 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a51197 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5119a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a5119d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a511a0 mov edx, dword ptr [eax*4 + 0x10a71fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a71fe0)));
  /* 10a511a7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10a511ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a511b0 je 0x10a511c3 */
  if (C.zf) goto L_10a511c3;
  /* 10a511b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a511b5 push eax */
  push32((uint32_t)(EAX));
  /* 10a511b6 call 0x10a4c350 */
  push32(0x10a511bbu); f_10a4c350();
  /* 10a511bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a511be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a511c1 jmp 0x10a511c5 */
  goto L_10a511c5;
L_10a511c3:;
  /* 10a511c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a511c5:;
  /* 10a511c5 pop esi */
  ESI = (pop32());
  /* 10a511c6 mov esp, ebp */
  ESP = (EBP);
  /* 10a511c8 pop ebp */
  EBP = (pop32());
  /* 10a511c9 ret  */
  ESPCHK(0x10a51120u, _esp0);
  ESP += 4; return;
}

/* FUN_100111d0 @ 0x10a511d0 (146 bytes, 52 insns) */
void f_10a511d0(void) {
  FTRACE(0x10a511d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a511d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a511d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a511d3 push ebx */
  push32((uint32_t)(EBX));
  /* 10a511d4 push esi */
  push32((uint32_t)(ESI));
  /* 10a511d5 push edi */
  push32((uint32_t)(EDI));
L_10a511d6:;
  /* 10a511d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a511da jne 0x10a511fa */
  if (!C.zf) goto L_10a511fa;
  /* 10a511dc push 0x10a6c600 */
  push32((uint32_t)(0x10a6c600u));
  /* 10a511e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a511e3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10a511e5 push 0x10a6ccc8 */
  push32((uint32_t)(0x10a6ccc8u));
  /* 10a511ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10a511ec call 0x10a435e0 */
  push32(0x10a511f1u); f_10a435e0();
  /* 10a511f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a511f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a511f7 jne 0x10a511fa */
  if (!C.zf) goto L_10a511fa;
  /* 10a511f9 int3  */
  x86_unimpl("int3 @ 0x10a511f9");
L_10a511fa:;
  /* 10a511fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a511fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a511fe jne 0x10a511d6 */
  if (!C.zf) goto L_10a511d6;
  /* 10a51200 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a51203 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a51206 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10a5120c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a5120e je 0x10a5125d */
  if (C.zf) goto L_10a5125d;
  /* 10a51210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a51213 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a51216 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10a51219 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a5121b je 0x10a5125d */
  if (C.zf) goto L_10a5125d;
  /* 10a5121d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a5121f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a51222 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a51225 push eax */
  push32((uint32_t)(EAX));
  /* 10a51226 call 0x10a44fb0 */
  push32(0x10a5122bu); f_10a44fb0();
  /* 10a5122b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5122e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a51231 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a51234 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10a5123a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5123d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10a51240 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a51243 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10a51249 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5124c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10a51253 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a51256 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10a5125d:;
  /* 10a5125d pop edi */
  EDI = (pop32());
  /* 10a5125e pop esi */
  ESI = (pop32());
  /* 10a5125f pop ebx */
  EBX = (pop32());
  /* 10a51260 pop ebp */
  EBP = (pop32());
  /* 10a51261 ret  */
  ESPCHK(0x10a511d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011270 @ 0x10a51270 (289 bytes, 97 insns) */
void f_10a51270(void) {
  FTRACE(0x10a51270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a51270 push ebp */
  push32((uint32_t)(EBP));
  /* 10a51271 mov ebp, esp */
  EBP = (ESP);
  /* 10a51273 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a51276 push esi */
  push32((uint32_t)(ESI));
  /* 10a51277 mov eax, dword ptr [0x10a6fc98] */
  EAX = (r32((uint32_t)(0x10a6fc98)));
  /* 10a5127c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a5127f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a51286 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a5128d jmp 0x10a51298 */
  goto L_10a51298;
L_10a5128f:;
  /* 10a5128f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a51292 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51295 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a51298:;
  /* 10a51298 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5129c jae 0x10a512d1 */
  if (!C.cf) goto L_10a512d1;
  /* 10a5129e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a512a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a512a4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10a512a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a512a8 call 0x10a47350 */
  push32(0x10a512adu); f_10a47350();
  /* 10a512ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a512b0 mov esi, eax */
  ESI = (EAX);
  /* 10a512b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a512b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a512b8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10a512bc push ecx */
  push32((uint32_t)(ECX));
  /* 10a512bd call 0x10a47350 */
  push32(0x10a512c2u); f_10a47350();
  /* 10a512c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a512c5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a512c8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10a512cc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a512cf jmp 0x10a5128f */
  goto L_10a5128f;
L_10a512d1:;
  /* 10a512d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a512d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a512d7 push eax */
  push32((uint32_t)(EAX));
  /* 10a512d8 call 0x10a44500 */
  push32(0x10a512ddu); f_10a44500();
  /* 10a512dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a512e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a512e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a512e7 je 0x10a51389 */
  if (C.zf) goto L_10a51389;
  /* 10a512ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a512f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a512f3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a512fa jmp 0x10a51305 */
  goto L_10a51305;
L_10a512fc:;
  /* 10a512fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a512ff add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51302 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a51305:;
  /* 10a51305 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51309 jae 0x10a5137a */
  if (!C.cf) goto L_10a5137a;
  /* 10a5130b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a5130e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10a51311 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51314 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51317 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a5131a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a5131d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a51320 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10a51323 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51324 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51327 push edx */
  push32((uint32_t)(EDX));
  /* 10a51328 call 0x10a474d0 */
  push32(0x10a5132du); f_10a474d0();
  /* 10a5132d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51330 push eax */
  push32((uint32_t)(EAX));
  /* 10a51331 call 0x10a47350 */
  push32(0x10a51336u); f_10a47350();
  /* 10a51336 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51339 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a5133c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5133e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a51341 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51344 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10a51347 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a5134a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5134d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a51350 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a51353 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a51356 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10a5135a push eax */
  push32((uint32_t)(EAX));
  /* 10a5135b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a5135e push ecx */
  push32((uint32_t)(ECX));
  /* 10a5135f call 0x10a474d0 */
  push32(0x10a51364u); f_10a474d0();
  /* 10a51364 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51367 push eax */
  push32((uint32_t)(EAX));
  /* 10a51368 call 0x10a47350 */
  push32(0x10a5136du); f_10a47350();
  /* 10a5136d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51370 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51373 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51375 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a51378 jmp 0x10a512fc */
  goto L_10a512fc;
L_10a5137a:;
  /* 10a5137a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a5137d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a51380 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51383 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51386 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10a51389:;
  /* 10a51389 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a5138c pop esi */
  ESI = (pop32());
  /* 10a5138d mov esp, ebp */
  ESP = (EBP);
  /* 10a5138f pop ebp */
  EBP = (pop32());
  /* 10a51390 ret  */
  ESPCHK(0x10a51270u, _esp0);
  ESP += 4; return;
}

/* FUN_100113a0 @ 0x10a513a0 (291 bytes, 97 insns) */
void f_10a513a0(void) {
  FTRACE(0x10a513a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a513a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a513a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a513a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a513a6 push esi */
  push32((uint32_t)(ESI));
  /* 10a513a7 mov eax, dword ptr [0x10a6fc98] */
  EAX = (r32((uint32_t)(0x10a6fc98)));
  /* 10a513ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a513af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a513b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a513bd jmp 0x10a513c8 */
  goto L_10a513c8;
L_10a513bf:;
  /* 10a513bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a513c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a513c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a513c8:;
  /* 10a513c8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a513cc jae 0x10a51402 */
  if (!C.cf) goto L_10a51402;
  /* 10a513ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a513d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a513d4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10a513d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a513d9 call 0x10a47350 */
  push32(0x10a513deu); f_10a47350();
  /* 10a513de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a513e1 mov esi, eax */
  ESI = (EAX);
  /* 10a513e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a513e6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a513e9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10a513ed push ecx */
  push32((uint32_t)(ECX));
  /* 10a513ee call 0x10a47350 */
  push32(0x10a513f3u); f_10a47350();
  /* 10a513f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a513f6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a513f9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10a513fd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a51400 jmp 0x10a513bf */
  goto L_10a513bf;
L_10a51402:;
  /* 10a51402 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a51405 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51408 push eax */
  push32((uint32_t)(EAX));
  /* 10a51409 call 0x10a44500 */
  push32(0x10a5140eu); f_10a44500();
  /* 10a5140e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51411 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a51414 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51418 je 0x10a514bb */
  if (C.zf) goto L_10a514bb;
  /* 10a5141e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a51421 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a51424 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a5142b jmp 0x10a51436 */
  goto L_10a51436;
L_10a5142d:;
  /* 10a5142d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a51430 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51433 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a51436:;
  /* 10a51436 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5143a jae 0x10a514ac */
  if (!C.cf) goto L_10a514ac;
  /* 10a5143c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a5143f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10a51442 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51445 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51448 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a5144b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a5144e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a51451 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10a51455 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51456 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51459 push edx */
  push32((uint32_t)(EDX));
  /* 10a5145a call 0x10a474d0 */
  push32(0x10a5145fu); f_10a474d0();
  /* 10a5145f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51462 push eax */
  push32((uint32_t)(EAX));
  /* 10a51463 call 0x10a47350 */
  push32(0x10a51468u); f_10a47350();
  /* 10a51468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5146b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a5146e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51470 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a51473 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51476 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10a51479 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a5147c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5147f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a51482 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a51485 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a51488 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10a5148c push eax */
  push32((uint32_t)(EAX));
  /* 10a5148d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51490 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51491 call 0x10a474d0 */
  push32(0x10a51496u); f_10a474d0();
  /* 10a51496 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51499 push eax */
  push32((uint32_t)(EAX));
  /* 10a5149a call 0x10a47350 */
  push32(0x10a5149fu); f_10a47350();
  /* 10a5149f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a514a2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a514a5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a514a7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a514aa jmp 0x10a5142d */
  goto L_10a5142d;
L_10a514ac:;
  /* 10a514ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a514af mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a514b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a514b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a514b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10a514bb:;
  /* 10a514bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a514be pop esi */
  ESI = (pop32());
  /* 10a514bf mov esp, ebp */
  ESP = (EBP);
  /* 10a514c1 pop ebp */
  EBP = (pop32());
  /* 10a514c2 ret  */
  ESPCHK(0x10a513a0u, _esp0);
  ESP += 4; return;
}

