#include "recomp.h"

/* FUN_10008780 @ 0x10878780 (116 bytes, 34 insns) */
void f_10878780(void) {
  FTRACE(0x10878780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878780 push ebp */
  push32((uint32_t)(EBP));
  /* 10878781 mov ebp, esp */
  EBP = (ESP);
  /* 10878783 push ecx */
  push32((uint32_t)(ECX));
  /* 10878784 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1087878b push 9 */
  push32((uint32_t)(0x9u));
  /* 1087878d call 0x10877fa0 */
  push32(0x10878792u); f_10877fa0();
  /* 10878792 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10878795 call 0x10879e90 */
  push32(0x1087879au); f_10879e90();
  /* 1087879a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087879c jge 0x108787a5 */
  if ((C.sf==C.of)) goto L_108787a5;
  /* 1087879e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_108787a5:;
  /* 108787a5 push 9 */
  push32((uint32_t)(0x9u));
  /* 108787a7 call 0x10878040 */
  push32(0x108787acu); f_10878040();
  /* 108787ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108787af push 0 */
  push32((uint32_t)(0x0u));
  /* 108787b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108787b3 mov eax, dword ptr [0x108a1fec] */
  EAX = (r32((uint32_t)(0x108a1fec)));
  /* 108787b8 push eax */
  push32((uint32_t)(EAX));
  /* 108787b9 call dword ptr [0x108a33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33d0))), 0x108787bfu);
  /* 108787bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108787c1 jne 0x108787ed */
  if (!C.zf) goto L_108787ed;
  /* 108787c3 call dword ptr [0x108a33b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33b4))), 0x108787c9u);
  /* 108787c9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108787cc jne 0x108787e6 */
  if (!C.zf) goto L_108787e6;
  /* 108787ce call 0x1087c480 */
  push32(0x108787d3u); f_1087c480();
  /* 108787d3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 108787d9 call 0x1087c470 */
  push32(0x108787deu); f_1087c470();
  /* 108787de mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 108787e4 jmp 0x108787ed */
  goto L_108787ed;
L_108787e6:;
  /* 108787e6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_108787ed:;
  /* 108787ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108787f0 mov esp, ebp */
  ESP = (EBP);
  /* 108787f2 pop ebp */
  EBP = (pop32());
  /* 108787f3 ret  */
  ESPCHK(0x10878780u, _esp0);
  ESP += 4; return;
}

/* FUN_10008800 @ 0x10878800 (10 bytes, 5 insns) */
void f_10878800(void) {
  FTRACE(0x10878800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878800 push ebp */
  push32((uint32_t)(EBP));
  /* 10878801 mov ebp, esp */
  EBP = (ESP);
  /* 10878803 call 0x10878780 */
  push32(0x10878808u); f_10878780();
  /* 10878808 pop ebp */
  EBP = (pop32());
  /* 10878809 ret  */
  ESPCHK(0x10878800u, _esp0);
  ESP += 4; return;
}

/* FUN_10008810 @ 0x10878810 (10 bytes, 5 insns) */
void f_10878810(void) {
  FTRACE(0x10878810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878810 push ebp */
  push32((uint32_t)(EBP));
  /* 10878811 mov ebp, esp */
  EBP = (ESP);
  /* 10878813 mov eax, dword ptr [0x1089ec94] */
  EAX = (r32((uint32_t)(0x1089ec94)));
  /* 10878818 pop ebp */
  EBP = (pop32());
  /* 10878819 ret  */
  ESPCHK(0x10878810u, _esp0);
  ESP += 4; return;
}

/* FUN_10008820 @ 0x10878820 (31 bytes, 11 insns) */
void f_10878820(void) {
  FTRACE(0x10878820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878820 push ebp */
  push32((uint32_t)(EBP));
  /* 10878821 mov ebp, esp */
  EBP = (ESP);
  /* 10878823 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087882a jbe 0x10878830 */
  if ((C.cf||C.zf)) goto L_10878830;
  /* 1087882c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087882e jmp 0x1087883d */
  goto L_1087883d;
L_10878830:;
  /* 10878830 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878833 mov dword ptr [0x1089ec94], eax */
  w32((uint32_t)(0x1089ec94), (EAX));
  /* 10878838 mov eax, 1 */
  EAX = (0x1u);
L_1087883d:;
  /* 1087883d pop ebp */
  EBP = (pop32());
  /* 1087883e ret  */
  ESPCHK(0x10878820u, _esp0);
  ESP += 4; return;
}

/* FUN_10008840 @ 0x10878840 (89 bytes, 20 insns) */
void f_10878840(void) {
  FTRACE(0x10878840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878840 push ebp */
  push32((uint32_t)(EBP));
  /* 10878841 mov ebp, esp */
  EBP = (ESP);
  /* 10878843 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10878848 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087884a mov eax, dword ptr [0x108a1fec] */
  EAX = (r32((uint32_t)(0x108a1fec)));
  /* 1087884f push eax */
  push32((uint32_t)(EAX));
  /* 10878850 call dword ptr [0x108a3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3328))), 0x10878856u);
  /* 10878856 mov dword ptr [0x108a1fe8], eax */
  w32((uint32_t)(0x108a1fe8), (EAX));
  /* 1087885b cmp dword ptr [0x108a1fe8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a1fe8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878862 jne 0x10878868 */
  if (!C.zf) goto L_10878868;
  /* 10878864 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10878866 jmp 0x10878897 */
  goto L_10878897;
L_10878868:;
  /* 10878868 mov ecx, dword ptr [0x108a1fe8] */
  ECX = (r32((uint32_t)(0x108a1fe8)));
  /* 1087886e mov dword ptr [0x108a1fdc], ecx */
  w32((uint32_t)(0x108a1fdc), (ECX));
  /* 10878874 mov dword ptr [0x108a1fe0], 0 */
  w32((uint32_t)(0x108a1fe0), (0x0u));
  /* 1087887e mov dword ptr [0x108a1fe4], 0 */
  w32((uint32_t)(0x108a1fe4), (0x0u));
  /* 10878888 mov dword ptr [0x108a1fc8], 0x10 */
  w32((uint32_t)(0x108a1fc8), (0x10u));
  /* 10878892 mov eax, 1 */
  EAX = (0x1u);
L_10878897:;
  /* 10878897 pop ebp */
  EBP = (pop32());
  /* 10878898 ret  */
  ESPCHK(0x10878840u, _esp0);
  ESP += 4; return;
}

/* FUN_100088a0 @ 0x108788a0 (85 bytes, 29 insns) */
void f_108788a0(void) {
  FTRACE(0x108788a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108788a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108788a1 mov ebp, esp */
  EBP = (ESP);
  /* 108788a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108788a6 mov eax, dword ptr [0x108a1fe4] */
  EAX = (r32((uint32_t)(0x108a1fe4)));
  /* 108788ab imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108788ae mov ecx, dword ptr [0x108a1fe8] */
  ECX = (r32((uint32_t)(0x108a1fe8)));
  /* 108788b4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108788b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108788b9 mov edx, dword ptr [0x108a1fe8] */
  EDX = (r32((uint32_t)(0x108a1fe8)));
  /* 108788bf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108788c2:;
  /* 108788c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108788c5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108788c8 jae 0x108788ef */
  if (!C.cf) goto L_108788ef;
  /* 108788ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108788cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108788d0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108788d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108788d6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108788dd jae 0x108788e4 */
  if (!C.cf) goto L_108788e4;
  /* 108788df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108788e2 jmp 0x108788f1 */
  goto L_108788f1;
L_108788e4:;
  /* 108788e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108788e7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108788ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108788ed jmp 0x108788c2 */
  goto L_108788c2;
L_108788ef:;
  /* 108788ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108788f1:;
  /* 108788f1 mov esp, ebp */
  ESP = (EBP);
  /* 108788f3 pop ebp */
  EBP = (pop32());
  /* 108788f4 ret  */
  ESPCHK(0x108788a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008900 @ 0x10878900 (95 bytes, 33 insns) */
void f_10878900(void) {
  FTRACE(0x10878900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878900 push ebp */
  push32((uint32_t)(EBP));
  /* 10878901 mov ebp, esp */
  EBP = (ESP);
  /* 10878903 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878909 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087890c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087890f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10878912 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10878915 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10878918 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1087891b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10878920 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878923 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10878925 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878928 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1087892b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1087892d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087892f jne 0x10878951 */
  if (!C.zf) goto L_10878951;
  /* 10878931 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10878934 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10878937 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10878939 jne 0x10878951 */
  if (!C.zf) goto L_10878951;
  /* 1087893b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087893e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10878944 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10878946 je 0x10878951 */
  if (C.zf) goto L_10878951;
  /* 10878948 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1087894f jmp 0x10878958 */
  goto L_10878958;
L_10878951:;
  /* 10878951 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10878958:;
  /* 10878958 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087895b mov esp, ebp */
  ESP = (EBP);
  /* 1087895d pop ebp */
  EBP = (pop32());
  /* 1087895e ret  */
  ESPCHK(0x10878900u, _esp0);
  ESP += 4; return;
}

/* FUN_10008960 @ 0x10878960 (1485 bytes, 453 insns) */
void f_10878960(void) {
  FTRACE(0x10878960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878960 push ebp */
  push32((uint32_t)(EBP));
  /* 10878961 mov ebp, esp */
  EBP = (ESP);
  /* 10878963 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878966 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878969 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1087896c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1087896f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878972 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10878975 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878978 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1087897b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087897e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10878981 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10878984 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878987 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087898d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878990 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10878997 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087899a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087899d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108789a0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108789a3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108789a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108789a8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108789ab mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 108789ae mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108789b1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108789b4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 108789b7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108789ba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108789bc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108789bf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108789c2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 108789c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108789c8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108789cb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108789ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108789d0 jne 0x10878af8 */
  if (!C.zf) goto L_10878af8;
  /* 108789d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108789d9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 108789dc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108789df mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 108789e2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108789e6 jbe 0x108789ef */
  if ((C.cf||C.zf)) goto L_108789ef;
  /* 108789e8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_108789ef:;
  /* 108789ef mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108789f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108789f5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 108789f8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108789fb jne 0x10878ad1 */
  if (!C.zf) goto L_10878ad1;
  /* 10878a01 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878a05 jae 0x10878a66 */
  if (!C.cf) goto L_10878a66;
  /* 10878a07 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10878a0c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10878a0f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10878a11 not eax */
  EAX = (~(EAX));
  /* 10878a13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878a16 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878a19 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10878a1d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10878a1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878a22 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878a25 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10878a29 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878a2c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878a2f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10878a32 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10878a35 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878a38 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878a3b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10878a3e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878a41 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878a44 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10878a48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10878a4a jne 0x10878a64 */
  if (!C.zf) goto L_10878a64;
  /* 10878a4c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10878a51 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10878a54 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10878a56 not eax */
  EAX = (~(EAX));
  /* 10878a58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878a5b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10878a5d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10878a5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878a62 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10878a64:;
  /* 10878a64 jmp 0x10878ad1 */
  goto L_10878ad1;
L_10878a66:;
  /* 10878a66 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10878a69 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878a6c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10878a71 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10878a73 not edx */
  EDX = (~(EDX));
  /* 10878a75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878a78 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878a7b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10878a82 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10878a84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878a87 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878a8a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10878a91 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878a94 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878a97 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10878a9a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10878a9d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878aa0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878aa3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10878aa6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878aa9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878aac movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10878ab0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10878ab2 jne 0x10878ad1 */
  if (!C.zf) goto L_10878ad1;
  /* 10878ab4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10878ab7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878aba mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10878abf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10878ac1 not edx */
  EDX = (~(EDX));
  /* 10878ac3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878ac6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10878ac9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10878acb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878ace mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10878ad1:;
  /* 10878ad1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10878ad4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10878ad7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10878ada mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10878add mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10878ae0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10878ae3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10878ae6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10878ae9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10878aec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10878aef mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10878af2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878af5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10878af8:;
  /* 10878af8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10878afb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10878afe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878b01 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10878b04 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878b08 jbe 0x10878b11 */
  if ((C.cf||C.zf)) goto L_10878b11;
  /* 10878b0a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10878b11:;
  /* 10878b11 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10878b14 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10878b17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10878b19 jne 0x10878c75 */
  if (!C.zf) goto L_10878c75;
  /* 10878b1f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10878b22 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878b25 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10878b28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10878b2b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10878b2e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878b31 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10878b34 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878b38 jbe 0x10878b41 */
  if ((C.cf||C.zf)) goto L_10878b41;
  /* 10878b3a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10878b41:;
  /* 10878b41 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10878b44 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878b47 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10878b4a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10878b4d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10878b50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878b53 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10878b56 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878b5a jbe 0x10878b63 */
  if ((C.cf||C.zf)) goto L_10878b63;
  /* 10878b5c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10878b63:;
  /* 10878b63 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10878b66 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878b69 je 0x10878c6f */
  if (C.zf) goto L_10878c6f;
  /* 10878b6f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10878b72 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10878b75 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10878b78 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878b7b jne 0x10878c51 */
  if (!C.zf) goto L_10878c51;
  /* 10878b81 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878b85 jae 0x10878be6 */
  if (!C.cf) goto L_10878be6;
  /* 10878b87 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10878b8c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10878b8f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10878b91 not edx */
  EDX = (~(EDX));
  /* 10878b93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878b96 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878b99 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10878b9d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10878b9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878ba2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878ba5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10878ba9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878bac add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878baf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10878bb2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10878bb5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878bb8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878bbb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10878bbe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878bc1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878bc4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10878bc8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10878bca jne 0x10878be4 */
  if (!C.zf) goto L_10878be4;
  /* 10878bcc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10878bd1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10878bd4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10878bd6 not edx */
  EDX = (~(EDX));
  /* 10878bd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878bdb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10878bdd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10878bdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878be2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10878be4:;
  /* 10878be4 jmp 0x10878c51 */
  goto L_10878c51;
L_10878be6:;
  /* 10878be6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10878be9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878bec mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10878bf1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10878bf3 not eax */
  EAX = (~(EAX));
  /* 10878bf5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878bf8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878bfb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10878c02 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10878c04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878c07 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878c0a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10878c11 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878c14 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878c17 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10878c1a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10878c1d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878c20 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878c23 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10878c26 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878c29 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878c2c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10878c30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10878c32 jne 0x10878c51 */
  if (!C.zf) goto L_10878c51;
  /* 10878c34 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10878c37 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878c3a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10878c3f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10878c41 not eax */
  EAX = (~(EAX));
  /* 10878c43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878c46 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10878c49 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10878c4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878c4e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10878c51:;
  /* 10878c51 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10878c54 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10878c57 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10878c5a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10878c5d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10878c60 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10878c63 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10878c66 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10878c69 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10878c6c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10878c6f:;
  /* 10878c6f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10878c72 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10878c75:;
  /* 10878c75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10878c78 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10878c7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10878c7d jne 0x10878c8b */
  if (!C.zf) goto L_10878c8b;
  /* 10878c7f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10878c82 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878c85 je 0x10878d9b */
  if (C.zf) goto L_10878d9b;
L_10878c8b:;
  /* 10878c8b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10878c8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10878c91 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10878c94 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10878c97 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10878c9a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10878c9d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10878ca0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10878ca3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10878ca6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10878ca9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10878cac mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10878caf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10878cb2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10878cb5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10878cb8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10878cbb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10878cbe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10878cc1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10878cc4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10878cc7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10878cca cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878ccd jne 0x10878d9b */
  if (!C.zf) goto L_10878d9b;
  /* 10878cd3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878cd7 jae 0x10878d34 */
  if (!C.cf) goto L_10878d34;
  /* 10878cd9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878cdc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878cdf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10878ce3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878ce6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878ce9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10878cec add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10878cef mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878cf2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878cf5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10878cf8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10878cfa jne 0x10878d12 */
  if (!C.zf) goto L_10878d12;
  /* 10878cfc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10878d01 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10878d04 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10878d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878d09 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10878d0b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10878d0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878d10 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10878d12:;
  /* 10878d12 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10878d17 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10878d1a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10878d1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878d1f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878d22 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10878d26 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10878d28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878d2b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878d2e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10878d32 jmp 0x10878d9b */
  goto L_10878d9b;
L_10878d34:;
  /* 10878d34 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878d37 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878d3a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10878d3e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878d41 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878d44 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10878d47 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10878d4a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878d4d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878d50 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10878d53 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10878d55 jne 0x10878d72 */
  if (!C.zf) goto L_10878d72;
  /* 10878d57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10878d5a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878d5d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10878d62 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10878d64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878d67 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10878d6a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10878d6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878d6f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10878d72:;
  /* 10878d72 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10878d75 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878d78 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10878d7d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10878d7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878d82 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878d85 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10878d8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10878d8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878d91 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10878d94 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10878d9b:;
  /* 10878d9b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10878d9e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10878da1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10878da3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10878da6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878da9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10878dac mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10878daf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10878db2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10878db4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878db7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10878dba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10878dbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10878dbf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878dc2 jne 0x10878f29 */
  if (!C.zf) goto L_10878f29;
  /* 10878dc8 cmp dword ptr [0x108a1fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a1fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878dcf je 0x10878f18 */
  if (C.zf) goto L_10878f18;
  /* 10878dd5 mov eax, dword ptr [0x108a1fd8] */
  EAX = (r32((uint32_t)(0x108a1fd8)));
  /* 10878dda shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10878ddd mov ecx, dword ptr [0x108a1fe0] */
  ECX = (r32((uint32_t)(0x108a1fe0)));
  /* 10878de3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10878de6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878de8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10878deb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10878df0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10878df5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10878df8 push eax */
  push32((uint32_t)(EAX));
  /* 10878df9 call dword ptr [0x108a3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3344))), 0x10878dffu);
  /* 10878dff mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10878e04 mov ecx, dword ptr [0x108a1fd8] */
  ECX = (r32((uint32_t)(0x108a1fd8)));
  /* 10878e0a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10878e0c mov eax, dword ptr [0x108a1fe0] */
  EAX = (r32((uint32_t)(0x108a1fe0)));
  /* 10878e11 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10878e14 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10878e16 mov edx, dword ptr [0x108a1fe0] */
  EDX = (r32((uint32_t)(0x108a1fe0)));
  /* 10878e1c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10878e1f mov eax, dword ptr [0x108a1fe0] */
  EAX = (r32((uint32_t)(0x108a1fe0)));
  /* 10878e24 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10878e27 mov edx, dword ptr [0x108a1fd8] */
  EDX = (r32((uint32_t)(0x108a1fd8)));
  /* 10878e2d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10878e38 mov eax, dword ptr [0x108a1fe0] */
  EAX = (r32((uint32_t)(0x108a1fe0)));
  /* 10878e3d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10878e40 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10878e43 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10878e46 mov eax, dword ptr [0x108a1fe0] */
  EAX = (r32((uint32_t)(0x108a1fe0)));
  /* 10878e4b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10878e4e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10878e51 mov edx, dword ptr [0x108a1fe0] */
  EDX = (r32((uint32_t)(0x108a1fe0)));
  /* 10878e57 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10878e5a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10878e5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10878e60 jne 0x10878e76 */
  if (!C.zf) goto L_10878e76;
  /* 10878e62 mov edx, dword ptr [0x108a1fe0] */
  EDX = (r32((uint32_t)(0x108a1fe0)));
  /* 10878e68 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10878e6b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10878e6d mov ecx, dword ptr [0x108a1fe0] */
  ECX = (r32((uint32_t)(0x108a1fe0)));
  /* 10878e73 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10878e76:;
  /* 10878e76 mov edx, dword ptr [0x108a1fe0] */
  EDX = (r32((uint32_t)(0x108a1fe0)));
  /* 10878e7c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878e80 jne 0x10878f18 */
  if (!C.zf) goto L_10878f18;
  /* 10878e86 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10878e8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10878e8d mov eax, dword ptr [0x108a1fe0] */
  EAX = (r32((uint32_t)(0x108a1fe0)));
  /* 10878e92 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10878e95 push ecx */
  push32((uint32_t)(ECX));
  /* 10878e96 call dword ptr [0x108a3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3344))), 0x10878e9cu);
  /* 10878e9c mov edx, dword ptr [0x108a1fe0] */
  EDX = (r32((uint32_t)(0x108a1fe0)));
  /* 10878ea2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10878ea5 push eax */
  push32((uint32_t)(EAX));
  /* 10878ea6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10878ea8 mov ecx, dword ptr [0x108a1fec] */
  ECX = (r32((uint32_t)(0x108a1fec)));
  /* 10878eae push ecx */
  push32((uint32_t)(ECX));
  /* 10878eaf call dword ptr [0x108a3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3354))), 0x10878eb5u);
  /* 10878eb5 mov edx, dword ptr [0x108a1fe4] */
  EDX = (r32((uint32_t)(0x108a1fe4)));
  /* 10878ebb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10878ebe mov eax, dword ptr [0x108a1fe8] */
  EAX = (r32((uint32_t)(0x108a1fe8)));
  /* 10878ec3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878ec5 mov ecx, dword ptr [0x108a1fe0] */
  ECX = (r32((uint32_t)(0x108a1fe0)));
  /* 10878ecb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878ece sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878ed0 push eax */
  push32((uint32_t)(EAX));
  /* 10878ed1 mov edx, dword ptr [0x108a1fe0] */
  EDX = (r32((uint32_t)(0x108a1fe0)));
  /* 10878ed7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878eda push edx */
  push32((uint32_t)(EDX));
  /* 10878edb mov eax, dword ptr [0x108a1fe0] */
  EAX = (r32((uint32_t)(0x108a1fe0)));
  /* 10878ee0 push eax */
  push32((uint32_t)(EAX));
  /* 10878ee1 call 0x1087c490 */
  push32(0x10878ee6u); f_1087c490();
  /* 10878ee6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10878ee9 mov ecx, dword ptr [0x108a1fe4] */
  ECX = (r32((uint32_t)(0x108a1fe4)));
  /* 10878eef sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878ef2 mov dword ptr [0x108a1fe4], ecx */
  w32((uint32_t)(0x108a1fe4), (ECX));
  /* 10878ef8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878efb cmp edx, dword ptr [0x108a1fe0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x108a1fe0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878f01 jbe 0x10878f0c */
  if ((C.cf||C.zf)) goto L_10878f0c;
  /* 10878f03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878f06 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878f09 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10878f0c:;
  /* 10878f0c mov ecx, dword ptr [0x108a1fe8] */
  ECX = (r32((uint32_t)(0x108a1fe8)));
  /* 10878f12 mov dword ptr [0x108a1fdc], ecx */
  w32((uint32_t)(0x108a1fdc), (ECX));
L_10878f18:;
  /* 10878f18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878f1b mov dword ptr [0x108a1fe0], edx */
  w32((uint32_t)(0x108a1fe0), (EDX));
  /* 10878f21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878f24 mov dword ptr [0x108a1fd8], eax */
  w32((uint32_t)(0x108a1fd8), (EAX));
L_10878f29:;
  /* 10878f29 mov esp, ebp */
  ESP = (EBP);
  /* 10878f2b pop ebp */
  EBP = (pop32());
  /* 10878f2c ret  */
  ESPCHK(0x10878960u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f30 @ 0x10878f30 (1334 bytes, 427 insns) */
void f_10878f30(void) {
  FTRACE(0x10878f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10878f31 mov ebp, esp */
  EBP = (ESP);
  /* 10878f33 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878f36 push esi */
  push32((uint32_t)(ESI));
  /* 10878f37 mov eax, dword ptr [0x108a1fe4] */
  EAX = (r32((uint32_t)(0x108a1fe4)));
  /* 10878f3c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10878f3f mov ecx, dword ptr [0x108a1fe8] */
  ECX = (r32((uint32_t)(0x108a1fe8)));
  /* 10878f45 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878f47 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10878f4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878f4d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878f50 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10878f53 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10878f56 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10878f59 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10878f5c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878f5f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10878f62 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878f66 jge 0x10878f7c */
  if ((C.sf==C.of)) goto L_10878f7c;
  /* 10878f68 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10878f6b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10878f6e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10878f70 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10878f73 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10878f7a jmp 0x10878f91 */
  goto L_10878f91;
L_10878f7c:;
  /* 10878f7c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10878f83 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10878f86 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878f89 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10878f8c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10878f8e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10878f91:;
  /* 10878f91 mov ecx, dword ptr [0x108a1fdc] */
  ECX = (r32((uint32_t)(0x108a1fdc)));
  /* 10878f97 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10878f9a:;
  /* 10878f9a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10878f9d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878fa0 jae 0x10878fc6 */
  if (!C.cf) goto L_10878fc6;
  /* 10878fa2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10878fa5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10878fa8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10878faa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10878fad mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10878fb0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10878fb3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10878fb5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10878fb7 je 0x10878fbb */
  if (C.zf) goto L_10878fbb;
  /* 10878fb9 jmp 0x10878fc6 */
  goto L_10878fc6;
L_10878fbb:;
  /* 10878fbb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10878fbe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878fc1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10878fc4 jmp 0x10878f9a */
  goto L_10878f9a;
L_10878fc6:;
  /* 10878fc6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10878fc9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878fcc jne 0x108790ad */
  if (!C.zf) goto L_108790ad;
  /* 10878fd2 mov eax, dword ptr [0x108a1fe8] */
  EAX = (r32((uint32_t)(0x108a1fe8)));
  /* 10878fd7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10878fda:;
  /* 10878fda mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10878fdd cmp ecx, dword ptr [0x108a1fdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108a1fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878fe3 jae 0x10879009 */
  if (!C.cf) goto L_10879009;
  /* 10878fe5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10878fe8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10878feb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10878fed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10878ff0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10878ff3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10878ff6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10878ff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10878ffa je 0x10878ffe */
  if (C.zf) goto L_10878ffe;
  /* 10878ffc jmp 0x10879009 */
  goto L_10879009;
L_10878ffe:;
  /* 10878ffe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10879001 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879004 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10879007 jmp 0x10878fda */
  goto L_10878fda;
L_10879009:;
  /* 10879009 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087900c cmp ecx, dword ptr [0x108a1fdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108a1fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879012 jne 0x108790ad */
  if (!C.zf) goto L_108790ad;
L_10879018:;
  /* 10879018 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087901b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087901e jae 0x10879036 */
  if (!C.cf) goto L_10879036;
  /* 10879020 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10879023 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879027 je 0x1087902b */
  if (C.zf) goto L_1087902b;
  /* 10879029 jmp 0x10879036 */
  goto L_10879036;
L_1087902b:;
  /* 1087902b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087902e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879031 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10879034 jmp 0x10879018 */
  goto L_10879018;
L_10879036:;
  /* 10879036 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10879039 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087903c jne 0x10879087 */
  if (!C.zf) goto L_10879087;
  /* 1087903e mov eax, dword ptr [0x108a1fe8] */
  EAX = (r32((uint32_t)(0x108a1fe8)));
  /* 10879043 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10879046:;
  /* 10879046 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10879049 cmp ecx, dword ptr [0x108a1fdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108a1fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087904f jae 0x10879067 */
  if (!C.cf) goto L_10879067;
  /* 10879051 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10879054 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879058 je 0x1087905c */
  if (C.zf) goto L_1087905c;
  /* 1087905a jmp 0x10879067 */
  goto L_10879067;
L_1087905c:;
  /* 1087905c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087905f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879062 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10879065 jmp 0x10879046 */
  goto L_10879046;
L_10879067:;
  /* 10879067 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087906a cmp ecx, dword ptr [0x108a1fdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108a1fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879070 jne 0x10879087 */
  if (!C.zf) goto L_10879087;
  /* 10879072 call 0x10879470 */
  push32(0x10879077u); f_10879470();
  /* 10879077 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1087907a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087907e jne 0x10879087 */
  if (!C.zf) goto L_10879087;
  /* 10879080 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10879082 jmp 0x10879461 */
  goto L_10879461;
L_10879087:;
  /* 10879087 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087908a push edx */
  push32((uint32_t)(EDX));
  /* 1087908b call 0x10879580 */
  push32(0x10879090u); f_10879580();
  /* 10879090 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10879093 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10879096 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10879099 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1087909b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087909e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108790a1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108790a4 jne 0x108790ad */
  if (!C.zf) goto L_108790ad;
  /* 108790a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108790a8 jmp 0x10879461 */
  goto L_10879461;
L_108790ad:;
  /* 108790ad mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108790b0 mov dword ptr [0x108a1fdc], edx */
  w32((uint32_t)(0x108a1fdc), (EDX));
  /* 108790b6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108790b9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108790bc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 108790bf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108790c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108790c4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 108790c7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108790cb je 0x108790f0 */
  if (C.zf) goto L_108790f0;
  /* 108790cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108790d0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108790d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108790d6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 108790da mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108790dd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108790e0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 108790e3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 108790ea or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 108790ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108790ee jne 0x10879125 */
  if (!C.zf) goto L_10879125;
L_108790f0:;
  /* 108790f0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_108790f7:;
  /* 108790f7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108790fa mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108790fd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10879100 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10879104 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879107 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1087910a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1087910d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10879114 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10879116 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10879118 jne 0x10879125 */
  if (!C.zf) goto L_10879125;
  /* 1087911a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1087911d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879120 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10879123 jmp 0x108790f7 */
  goto L_108790f7;
L_10879125:;
  /* 10879125 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879128 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087912e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10879131 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10879138 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1087913b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10879142 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879145 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10879148 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087914b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1087914f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10879152 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879156 jne 0x10879172 */
  if (!C.zf) goto L_10879172;
  /* 10879158 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1087915f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879162 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10879165 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10879168 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1087916f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10879172:;
  /* 10879172 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879176 jl 0x1087918b */
  if ((C.sf!=C.of)) goto L_1087918b;
  /* 10879178 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1087917b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1087917d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10879180 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10879183 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879186 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10879189 jmp 0x10879172 */
  goto L_10879172;
L_1087918b:;
  /* 1087918b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087918e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879191 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10879195 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10879198 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087919b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1087919d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108791a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108791a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108791a6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 108791a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108791ac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108791af cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108791b3 jle 0x108791bc */
  if ((C.zf||C.sf!=C.of)) goto L_108791bc;
  /* 108791b5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_108791bc:;
  /* 108791bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108791bf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108791c2 je 0x108793e0 */
  if (C.zf) goto L_108793e0;
  /* 108791c8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108791cb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108791ce mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 108791d1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108791d4 jne 0x108792aa */
  if (!C.zf) goto L_108792aa;
  /* 108791da cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108791de jge 0x1087923f */
  if ((C.sf==C.of)) goto L_1087923f;
  /* 108791e0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108791e5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108791e8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108791ea not eax */
  EAX = (~(EAX));
  /* 108791ec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108791ef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108791f2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 108791f6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108791f8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108791fb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108791fe mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10879202 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10879205 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879208 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1087920b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1087920e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10879211 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879214 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10879217 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1087921a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087921d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10879221 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10879223 jne 0x1087923d */
  if (!C.zf) goto L_1087923d;
  /* 10879225 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1087922a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087922d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1087922f not eax */
  EAX = (~(EAX));
  /* 10879231 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10879234 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10879236 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10879238 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087923b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1087923d:;
  /* 1087923d jmp 0x108792aa */
  goto L_108792aa;
L_1087923f:;
  /* 1087923f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10879242 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879245 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1087924a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1087924c not edx */
  EDX = (~(EDX));
  /* 1087924e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879251 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10879254 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1087925b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1087925d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879260 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10879263 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1087926a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1087926d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879270 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10879273 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10879276 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10879279 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087927c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1087927f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10879282 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879285 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10879289 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087928b jne 0x108792aa */
  if (!C.zf) goto L_108792aa;
  /* 1087928d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10879290 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879293 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10879298 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1087929a not edx */
  EDX = (~(EDX));
  /* 1087929c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087929f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108792a2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108792a4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108792a7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_108792aa:;
  /* 108792aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108792ad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108792b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108792b3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108792b6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 108792b9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108792bc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108792bf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108792c2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108792c5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 108792c8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108792cc je 0x108793e0 */
  if (C.zf) goto L_108793e0;
  /* 108792d2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108792d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108792d8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 108792db mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108792de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108792e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108792e4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108792e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 108792ea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108792ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108792f0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108792f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108792f6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108792f9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 108792fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108792ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10879302 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10879305 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10879308 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087930b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087930e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10879311 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879314 jne 0x108793e0 */
  if (!C.zf) goto L_108793e0;
  /* 1087931a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087931e jge 0x1087937a */
  if ((C.sf==C.of)) goto L_1087937a;
  /* 10879320 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10879323 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879326 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1087932a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1087932d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879330 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10879333 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10879335 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10879338 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087933b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1087933e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10879340 jne 0x10879358 */
  if (!C.zf) goto L_10879358;
  /* 10879342 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10879347 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1087934a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1087934c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087934f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10879351 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10879353 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10879356 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10879358:;
  /* 10879358 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1087935d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10879360 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10879362 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879365 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10879368 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1087936c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1087936e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879371 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10879374 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10879378 jmp 0x108793e0 */
  goto L_108793e0;
L_1087937a:;
  /* 1087937a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1087937d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879380 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10879384 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10879387 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087938a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1087938d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1087938f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10879392 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879395 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10879398 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087939a jne 0x108793b7 */
  if (!C.zf) goto L_108793b7;
  /* 1087939c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1087939f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108793a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108793a7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108793a9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108793ac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108793af or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108793b1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108793b4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_108793b7:;
  /* 108793b7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108793ba sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108793bd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108793c2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108793c4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108793c7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108793ca mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 108793d1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108793d3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108793d6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108793d9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_108793e0:;
  /* 108793e0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108793e4 je 0x108793fa */
  if (C.zf) goto L_108793fa;
  /* 108793e6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108793e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108793ec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108793ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108793f1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108793f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108793f7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_108793fa:;
  /* 108793fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108793fd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879400 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10879403 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10879406 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879409 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087940c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1087940e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10879411 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879414 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10879417 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087941a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1087941d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879420 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10879422 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879425 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10879427 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087942a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087942d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1087942f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10879431 jne 0x10879453 */
  if (!C.zf) goto L_10879453;
  /* 10879433 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10879436 cmp eax, dword ptr [0x108a1fe0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108a1fe0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087943c jne 0x10879453 */
  if (!C.zf) goto L_10879453;
  /* 1087943e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879441 cmp ecx, dword ptr [0x108a1fd8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108a1fd8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879447 jne 0x10879453 */
  if (!C.zf) goto L_10879453;
  /* 10879449 mov dword ptr [0x108a1fe0], 0 */
  w32((uint32_t)(0x108a1fe0), (0x0u));
L_10879453:;
  /* 10879453 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10879456 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879459 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1087945b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087945e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10879461:;
  /* 10879461 pop esi */
  ESI = (pop32());
  /* 10879462 mov esp, ebp */
  ESP = (EBP);
  /* 10879464 pop ebp */
  EBP = (pop32());
  /* 10879465 ret  */
  ESPCHK(0x10878f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009470 @ 0x10879470 (271 bytes, 78 insns) */
void f_10879470(void) {
  FTRACE(0x10879470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10879470 push ebp */
  push32((uint32_t)(EBP));
  /* 10879471 mov ebp, esp */
  EBP = (ESP);
  /* 10879473 push ecx */
  push32((uint32_t)(ECX));
  /* 10879474 mov eax, dword ptr [0x108a1fe4] */
  EAX = (r32((uint32_t)(0x108a1fe4)));
  /* 10879479 cmp eax, dword ptr [0x108a1fc8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108a1fc8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087947f jne 0x108794cb */
  if (!C.zf) goto L_108794cb;
  /* 10879481 mov ecx, dword ptr [0x108a1fc8] */
  ECX = (r32((uint32_t)(0x108a1fc8)));
  /* 10879487 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087948a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087948d push ecx */
  push32((uint32_t)(ECX));
  /* 1087948e mov edx, dword ptr [0x108a1fe8] */
  EDX = (r32((uint32_t)(0x108a1fe8)));
  /* 10879494 push edx */
  push32((uint32_t)(EDX));
  /* 10879495 push 0 */
  push32((uint32_t)(0x0u));
  /* 10879497 mov eax, dword ptr [0x108a1fec] */
  EAX = (r32((uint32_t)(0x108a1fec)));
  /* 1087949c push eax */
  push32((uint32_t)(EAX));
  /* 1087949d call dword ptr [0x108a3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3330))), 0x108794a3u);
  /* 108794a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108794a6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108794aa jne 0x108794b3 */
  if (!C.zf) goto L_108794b3;
  /* 108794ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108794ae jmp 0x1087957b */
  goto L_1087957b;
L_108794b3:;
  /* 108794b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108794b6 mov dword ptr [0x108a1fe8], ecx */
  w32((uint32_t)(0x108a1fe8), (ECX));
  /* 108794bc mov edx, dword ptr [0x108a1fc8] */
  EDX = (r32((uint32_t)(0x108a1fc8)));
  /* 108794c2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108794c5 mov dword ptr [0x108a1fc8], edx */
  w32((uint32_t)(0x108a1fc8), (EDX));
L_108794cb:;
  /* 108794cb mov eax, dword ptr [0x108a1fe4] */
  EAX = (r32((uint32_t)(0x108a1fe4)));
  /* 108794d0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108794d3 mov ecx, dword ptr [0x108a1fe8] */
  ECX = (r32((uint32_t)(0x108a1fe8)));
  /* 108794d9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108794db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108794de push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 108794e3 push 8 */
  push32((uint32_t)(0x8u));
  /* 108794e5 mov edx, dword ptr [0x108a1fec] */
  EDX = (r32((uint32_t)(0x108a1fec)));
  /* 108794eb push edx */
  push32((uint32_t)(EDX));
  /* 108794ec call dword ptr [0x108a3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3328))), 0x108794f2u);
  /* 108794f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108794f5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 108794f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108794fb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108794ff jne 0x10879505 */
  if (!C.zf) goto L_10879505;
  /* 10879501 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10879503 jmp 0x1087957b */
  goto L_1087957b;
L_10879505:;
  /* 10879505 push 4 */
  push32((uint32_t)(0x4u));
  /* 10879507 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1087950c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10879511 push 0 */
  push32((uint32_t)(0x0u));
  /* 10879513 call dword ptr [0x108a3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3320))), 0x10879519u);
  /* 10879519 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087951c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1087951f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879522 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879526 jne 0x10879542 */
  if (!C.zf) goto L_10879542;
  /* 10879528 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087952b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1087952e push ecx */
  push32((uint32_t)(ECX));
  /* 1087952f push 0 */
  push32((uint32_t)(0x0u));
  /* 10879531 mov edx, dword ptr [0x108a1fec] */
  EDX = (r32((uint32_t)(0x108a1fec)));
  /* 10879537 push edx */
  push32((uint32_t)(EDX));
  /* 10879538 call dword ptr [0x108a3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3354))), 0x1087953eu);
  /* 1087953e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10879540 jmp 0x1087957b */
  goto L_1087957b;
L_10879542:;
  /* 10879542 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879545 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1087954b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087954e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10879555 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879558 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1087955f mov eax, dword ptr [0x108a1fe4] */
  EAX = (r32((uint32_t)(0x108a1fe4)));
  /* 10879564 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879567 mov dword ptr [0x108a1fe4], eax */
  w32((uint32_t)(0x108a1fe4), (EAX));
  /* 1087956c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087956f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10879572 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10879578 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1087957b:;
  /* 1087957b mov esp, ebp */
  ESP = (EBP);
  /* 1087957d pop ebp */
  EBP = (pop32());
  /* 1087957e ret  */
  ESPCHK(0x10879470u, _esp0);
  ESP += 4; return;
}

/* FUN_10009580 @ 0x10879580 (494 bytes, 149 insns) */
void f_10879580(void) {
  FTRACE(0x10879580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10879580 push ebp */
  push32((uint32_t)(EBP));
  /* 10879581 mov ebp, esp */
  EBP = (ESP);
  /* 10879583 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10879589 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1087958c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1087958f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10879592 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10879595 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10879598 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1087959f:;
  /* 1087959f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108795a3 jl 0x108795b8 */
  if ((C.sf!=C.of)) goto L_108795b8;
  /* 108795a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108795a8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 108795aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108795ad mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108795b0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108795b3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 108795b6 jmp 0x1087959f */
  goto L_1087959f;
L_108795b8:;
  /* 108795b8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108795bb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108795c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108795c4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 108795cb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108795ce mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 108795d5 jmp 0x108795e0 */
  goto L_108795e0;
L_108795d7:;
  /* 108795d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108795da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108795dd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_108795e0:;
  /* 108795e0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108795e4 jge 0x10879606 */
  if ((C.sf==C.of)) goto L_10879606;
  /* 108795e6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108795e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108795ec lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 108795ef mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108795f2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108795f5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108795f8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 108795fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108795fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10879601 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10879604 jmp 0x108795d7 */
  goto L_108795d7;
L_10879606:;
  /* 10879606 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10879609 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1087960c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087960f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10879612 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879614 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10879617 push 4 */
  push32((uint32_t)(0x4u));
  /* 10879619 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1087961e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10879623 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10879626 push edx */
  push32((uint32_t)(EDX));
  /* 10879627 call dword ptr [0x108a3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3320))), 0x1087962du);
  /* 1087962d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087962f jne 0x10879639 */
  if (!C.zf) goto L_10879639;
  /* 10879631 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10879634 jmp 0x1087976a */
  goto L_1087976a;
L_10879639:;
  /* 10879639 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087963c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879641 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10879644 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10879647 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1087964a jmp 0x10879658 */
  goto L_10879658;
L_1087964c:;
  /* 1087964c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087964f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879655 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10879658:;
  /* 10879658 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087965b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087965e ja 0x108796bd */
  if ((!C.cf&&!C.zf)) goto L_108796bd;
  /* 10879660 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879663 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1087966a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087966d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10879677 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087967a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087967d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10879680 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10879683 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10879689 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087968c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879692 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10879695 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10879698 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087969b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108796a1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108796a4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 108796a7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108796aa add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108796af mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108796b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108796b5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 108796bb jmp 0x1087964c */
  goto L_1087964c;
L_108796bd:;
  /* 108796bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108796c0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108796c6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108796c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108796cc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108796cf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108796d2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 108796d5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108796d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108796db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108796de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108796e1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108796e4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 108796e7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108796ea add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108796ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108796f0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 108796f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108796f6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108796f9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108796fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108796ff mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10879702 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10879705 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10879708 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1087970b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10879713 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10879716 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10879719 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10879724 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10879727 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1087972b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1087972e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10879731 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10879734 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10879737 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1087973a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087973c jne 0x1087974d */
  if (!C.zf) goto L_1087974d;
  /* 1087973e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10879741 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10879744 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10879747 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087974a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1087974d:;
  /* 1087974d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10879752 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10879755 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10879757 not edx */
  EDX = (~(EDX));
  /* 10879759 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087975c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1087975f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10879761 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10879764 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10879767 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1087976a:;
  /* 1087976a mov esp, ebp */
  ESP = (EBP);
  /* 1087976c pop ebp */
  EBP = (pop32());
  /* 1087976d ret  */
  ESPCHK(0x10879580u, _esp0);
  ESP += 4; return;
}

/* FUN_10009770 @ 0x10879770 (1515 bytes, 489 insns) */
void f_10879770(void) {
  FTRACE(0x10879770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10879770 push ebp */
  push32((uint32_t)(EBP));
  /* 10879771 mov ebp, esp */
  EBP = (ESP);
  /* 10879773 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879776 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10879779 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087977c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1087977e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10879781 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10879784 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10879787 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1087978a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087978d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10879790 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879793 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10879796 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10879799 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1087979c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1087979f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108797a2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108797a8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108797ab lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 108797b2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108797b5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108797b8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108797bb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108797be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108797c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108797c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108797c6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 108797c9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108797cc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108797cf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 108797d2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108797d5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108797d7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108797da mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108797dd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108797e0 jle 0x10879a96 */
  if ((C.zf||C.sf!=C.of)) goto L_10879a96;
  /* 108797e6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108797e9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108797ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108797ee jne 0x108797fb */
  if (!C.zf) goto L_108797fb;
  /* 108797f0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108797f3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108797f6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108797f9 jle 0x10879802 */
  if ((C.zf||C.sf!=C.of)) goto L_10879802;
L_108797fb:;
  /* 108797fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108797fd jmp 0x10879d57 */
  goto L_10879d57;
L_10879802:;
  /* 10879802 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10879805 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10879808 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087980b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1087980e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879812 jbe 0x1087981b */
  if ((C.cf||C.zf)) goto L_1087981b;
  /* 10879814 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1087981b:;
  /* 1087981b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1087981e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10879821 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10879824 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879827 jne 0x108798fd */
  if (!C.zf) goto L_108798fd;
  /* 1087982d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879831 jae 0x10879892 */
  if (!C.cf) goto L_10879892;
  /* 10879833 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10879838 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087983b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1087983d not edx */
  EDX = (~(EDX));
  /* 1087983f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879842 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879845 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10879849 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1087984b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087984e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879851 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10879855 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879858 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087985b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1087985e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10879861 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879864 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879867 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1087986a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1087986d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879870 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10879874 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10879876 jne 0x10879890 */
  if (!C.zf) goto L_10879890;
  /* 10879878 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1087987d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10879880 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10879882 not edx */
  EDX = (~(EDX));
  /* 10879884 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10879887 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10879889 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1087988b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087988e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10879890:;
  /* 10879890 jmp 0x108798fd */
  goto L_108798fd;
L_10879892:;
  /* 10879892 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10879895 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879898 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1087989d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1087989f not eax */
  EAX = (~(EAX));
  /* 108798a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108798a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108798a7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 108798ae and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108798b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108798b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108798b6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 108798bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108798c0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108798c3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 108798c6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108798c9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108798cc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108798cf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 108798d2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108798d5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108798d8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108798dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108798de jne 0x108798fd */
  if (!C.zf) goto L_108798fd;
  /* 108798e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108798e3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108798e6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108798eb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108798ed not eax */
  EAX = (~(EAX));
  /* 108798ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108798f2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108798f5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108798f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108798fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_108798fd:;
  /* 108798fd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10879900 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10879903 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10879906 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10879909 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1087990c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1087990f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10879912 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10879915 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10879918 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1087991b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1087991e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879921 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879924 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10879927 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087992b jle 0x10879a77 */
  if ((C.zf||C.sf!=C.of)) goto L_10879a77;
  /* 10879931 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10879934 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879937 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1087993a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087993d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10879940 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879943 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10879946 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087994a jbe 0x10879953 */
  if ((C.cf||C.zf)) goto L_10879953;
  /* 1087994c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10879953:;
  /* 10879953 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10879956 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10879959 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1087995c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1087995f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10879962 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10879965 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10879968 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1087996b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1087996e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10879971 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10879974 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10879977 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1087997a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1087997d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10879980 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10879983 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10879986 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10879989 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1087998c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1087998f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10879992 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879995 jne 0x10879a63 */
  if (!C.zf) goto L_10879a63;
  /* 1087999b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087999f jae 0x108799fc */
  if (!C.cf) goto L_108799fc;
  /* 108799a1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108799a4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108799a7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108799ab mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108799ae add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108799b1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108799b4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 108799b7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108799ba add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108799bd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 108799c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108799c2 jne 0x108799da */
  if (!C.zf) goto L_108799da;
  /* 108799c4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108799c9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108799cc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108799ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108799d1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108799d3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108799d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108799d8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108799da:;
  /* 108799da mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108799df mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108799e2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108799e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108799e7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108799ea mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 108799ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108799f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108799f3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108799f6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 108799fa jmp 0x10879a63 */
  goto L_10879a63;
L_108799fc:;
  /* 108799fc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108799ff add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879a02 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10879a06 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879a09 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879a0c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10879a0f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10879a12 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879a15 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879a18 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10879a1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10879a1d jne 0x10879a3a */
  if (!C.zf) goto L_10879a3a;
  /* 10879a1f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10879a22 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879a25 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10879a2a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10879a2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10879a2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10879a32 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10879a34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10879a37 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10879a3a:;
  /* 10879a3a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10879a3d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879a40 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10879a45 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10879a47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879a4a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879a4d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10879a54 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10879a56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879a59 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879a5c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10879a63:;
  /* 10879a63 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10879a66 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10879a69 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10879a6b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10879a6e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879a71 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10879a74 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10879a77:;
  /* 10879a77 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10879a7a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879a7d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10879a80 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10879a82 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10879a85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879a88 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10879a8b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879a8e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10879a91 jmp 0x10879d52 */
  goto L_10879d52;
L_10879a96:;
  /* 10879a96 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10879a99 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879a9c jge 0x10879d52 */
  if ((C.sf==C.of)) goto L_10879d52;
  /* 10879aa2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10879aa5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879aa8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10879aab mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10879aad mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10879ab0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879ab3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10879ab6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879ab9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10879abc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10879abf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879ac2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10879ac5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10879ac8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879acb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10879ace mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10879ad1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10879ad4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879ad7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10879ada cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879ade jbe 0x10879ae7 */
  if ((C.cf||C.zf)) goto L_10879ae7;
  /* 10879ae0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10879ae7:;
  /* 10879ae7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10879aea and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10879aed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10879aef jne 0x10879c30 */
  if (!C.zf) goto L_10879c30;
  /* 10879af5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10879af8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10879afb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879afe mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10879b01 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879b05 jbe 0x10879b0e */
  if ((C.cf||C.zf)) goto L_10879b0e;
  /* 10879b07 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10879b0e:;
  /* 10879b0e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10879b11 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10879b14 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10879b17 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879b1a jne 0x10879bf0 */
  if (!C.zf) goto L_10879bf0;
  /* 10879b20 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879b24 jae 0x10879b85 */
  if (!C.cf) goto L_10879b85;
  /* 10879b26 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10879b2b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10879b2e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10879b30 not edx */
  EDX = (~(EDX));
  /* 10879b32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879b35 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879b38 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10879b3c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10879b3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879b41 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879b44 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10879b48 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879b4b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879b4e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10879b51 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10879b54 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879b57 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879b5a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10879b5d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879b60 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879b63 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10879b67 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10879b69 jne 0x10879b83 */
  if (!C.zf) goto L_10879b83;
  /* 10879b6b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10879b70 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10879b73 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10879b75 not edx */
  EDX = (~(EDX));
  /* 10879b77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10879b7a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10879b7c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10879b7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10879b81 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10879b83:;
  /* 10879b83 jmp 0x10879bf0 */
  goto L_10879bf0;
L_10879b85:;
  /* 10879b85 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10879b88 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879b8b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10879b90 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10879b92 not eax */
  EAX = (~(EAX));
  /* 10879b94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879b97 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879b9a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10879ba1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10879ba3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879ba6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879ba9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10879bb0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879bb3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879bb6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10879bb9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10879bbc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879bbf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879bc2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10879bc5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879bc8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879bcb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10879bcf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10879bd1 jne 0x10879bf0 */
  if (!C.zf) goto L_10879bf0;
  /* 10879bd3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10879bd6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879bd9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10879bde shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10879be0 not eax */
  EAX = (~(EAX));
  /* 10879be2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10879be5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10879be8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10879bea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10879bed mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10879bf0:;
  /* 10879bf0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10879bf3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10879bf6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10879bf9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10879bfc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10879bff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10879c02 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10879c05 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10879c08 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10879c0b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10879c0e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10879c11 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879c14 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10879c17 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10879c1a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10879c1d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879c20 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10879c23 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879c27 jbe 0x10879c30 */
  if ((C.cf||C.zf)) goto L_10879c30;
  /* 10879c29 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10879c30:;
  /* 10879c30 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10879c33 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10879c36 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10879c39 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10879c3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10879c3f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10879c42 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10879c45 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10879c48 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10879c4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10879c4e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10879c51 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10879c54 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10879c57 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10879c5a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10879c5d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10879c60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10879c63 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10879c66 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10879c69 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10879c6c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10879c6f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879c72 jne 0x10879d3e */
  if (!C.zf) goto L_10879d3e;
  /* 10879c78 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879c7c jae 0x10879cd8 */
  if (!C.cf) goto L_10879cd8;
  /* 10879c7e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879c81 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879c84 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10879c88 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879c8b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879c8e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10879c91 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10879c93 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879c96 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879c99 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10879c9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10879c9e jne 0x10879cb6 */
  if (!C.zf) goto L_10879cb6;
  /* 10879ca0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10879ca5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10879ca8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10879caa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10879cad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10879caf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10879cb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10879cb4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10879cb6:;
  /* 10879cb6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10879cbb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10879cbe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10879cc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879cc3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879cc6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10879cca or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10879ccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879ccf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879cd2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10879cd6 jmp 0x10879d3e */
  goto L_10879d3e;
L_10879cd8:;
  /* 10879cd8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879cdb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879cde movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10879ce2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879ce5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879ce8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10879ceb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10879ced mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879cf0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879cf3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10879cf6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10879cf8 jne 0x10879d15 */
  if (!C.zf) goto L_10879d15;
  /* 10879cfa mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10879cfd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879d00 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10879d05 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10879d07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10879d0a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10879d0d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10879d0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10879d12 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10879d15:;
  /* 10879d15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10879d18 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879d1b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10879d20 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10879d22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879d25 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879d28 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10879d2f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10879d31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879d34 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10879d37 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10879d3e:;
  /* 10879d3e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10879d41 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10879d44 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10879d46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10879d49 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879d4c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10879d4f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10879d52:;
  /* 10879d52 mov eax, 1 */
  EAX = (0x1u);
L_10879d57:;
  /* 10879d57 mov esp, ebp */
  ESP = (EBP);
  /* 10879d59 pop ebp */
  EBP = (pop32());
  /* 10879d5a ret  */
  ESPCHK(0x10879770u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d60 @ 0x10879d60 (304 bytes, 79 insns) */
void f_10879d60(void) {
  FTRACE(0x10879d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10879d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10879d61 mov ebp, esp */
  EBP = (ESP);
  /* 10879d63 push ecx */
  push32((uint32_t)(ECX));
  /* 10879d64 cmp dword ptr [0x108a1fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a1fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879d6b je 0x10879e8c */
  if (C.zf) goto L_10879e8c;
  /* 10879d71 mov eax, dword ptr [0x108a1fd8] */
  EAX = (r32((uint32_t)(0x108a1fd8)));
  /* 10879d76 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10879d79 mov ecx, dword ptr [0x108a1fe0] */
  ECX = (r32((uint32_t)(0x108a1fe0)));
  /* 10879d7f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10879d82 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879d84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10879d87 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10879d8c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10879d91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10879d94 push eax */
  push32((uint32_t)(EAX));
  /* 10879d95 call dword ptr [0x108a3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3344))), 0x10879d9bu);
  /* 10879d9b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10879da0 mov ecx, dword ptr [0x108a1fd8] */
  ECX = (r32((uint32_t)(0x108a1fd8)));
  /* 10879da6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10879da8 mov eax, dword ptr [0x108a1fe0] */
  EAX = (r32((uint32_t)(0x108a1fe0)));
  /* 10879dad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10879db0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10879db2 mov edx, dword ptr [0x108a1fe0] */
  EDX = (r32((uint32_t)(0x108a1fe0)));
  /* 10879db8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10879dbb mov eax, dword ptr [0x108a1fe0] */
  EAX = (r32((uint32_t)(0x108a1fe0)));
  /* 10879dc0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10879dc3 mov edx, dword ptr [0x108a1fd8] */
  EDX = (r32((uint32_t)(0x108a1fd8)));
  /* 10879dc9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10879dd4 mov eax, dword ptr [0x108a1fe0] */
  EAX = (r32((uint32_t)(0x108a1fe0)));
  /* 10879dd9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10879ddc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10879ddf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10879de2 mov eax, dword ptr [0x108a1fe0] */
  EAX = (r32((uint32_t)(0x108a1fe0)));
  /* 10879de7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10879dea mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10879ded mov edx, dword ptr [0x108a1fe0] */
  EDX = (r32((uint32_t)(0x108a1fe0)));
  /* 10879df3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10879df6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10879dfa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10879dfc jne 0x10879e12 */
  if (!C.zf) goto L_10879e12;
  /* 10879dfe mov edx, dword ptr [0x108a1fe0] */
  EDX = (r32((uint32_t)(0x108a1fe0)));
  /* 10879e04 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10879e07 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10879e09 mov ecx, dword ptr [0x108a1fe0] */
  ECX = (r32((uint32_t)(0x108a1fe0)));
  /* 10879e0f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10879e12:;
  /* 10879e12 mov edx, dword ptr [0x108a1fe0] */
  EDX = (r32((uint32_t)(0x108a1fe0)));
  /* 10879e18 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879e1c jne 0x10879e82 */
  if (!C.zf) goto L_10879e82;
  /* 10879e1e cmp dword ptr [0x108a1fe4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108a1fe4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879e25 jle 0x10879e82 */
  if ((C.zf||C.sf!=C.of)) goto L_10879e82;
  /* 10879e27 mov eax, dword ptr [0x108a1fe0] */
  EAX = (r32((uint32_t)(0x108a1fe0)));
  /* 10879e2c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10879e2f push ecx */
  push32((uint32_t)(ECX));
  /* 10879e30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10879e32 mov edx, dword ptr [0x108a1fec] */
  EDX = (r32((uint32_t)(0x108a1fec)));
  /* 10879e38 push edx */
  push32((uint32_t)(EDX));
  /* 10879e39 call dword ptr [0x108a3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3354))), 0x10879e3fu);
  /* 10879e3f mov eax, dword ptr [0x108a1fe4] */
  EAX = (r32((uint32_t)(0x108a1fe4)));
  /* 10879e44 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10879e47 mov ecx, dword ptr [0x108a1fe8] */
  ECX = (r32((uint32_t)(0x108a1fe8)));
  /* 10879e4d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879e4f mov edx, dword ptr [0x108a1fe0] */
  EDX = (r32((uint32_t)(0x108a1fe0)));
  /* 10879e55 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879e58 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879e5a push ecx */
  push32((uint32_t)(ECX));
  /* 10879e5b mov eax, dword ptr [0x108a1fe0] */
  EAX = (r32((uint32_t)(0x108a1fe0)));
  /* 10879e60 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879e63 push eax */
  push32((uint32_t)(EAX));
  /* 10879e64 mov ecx, dword ptr [0x108a1fe0] */
  ECX = (r32((uint32_t)(0x108a1fe0)));
  /* 10879e6a push ecx */
  push32((uint32_t)(ECX));
  /* 10879e6b call 0x1087c490 */
  push32(0x10879e70u); f_1087c490();
  /* 10879e70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10879e73 mov edx, dword ptr [0x108a1fe4] */
  EDX = (r32((uint32_t)(0x108a1fe4)));
  /* 10879e79 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879e7c mov dword ptr [0x108a1fe4], edx */
  w32((uint32_t)(0x108a1fe4), (EDX));
L_10879e82:;
  /* 10879e82 mov dword ptr [0x108a1fe0], 0 */
  w32((uint32_t)(0x108a1fe0), (0x0u));
L_10879e8c:;
  /* 10879e8c mov esp, ebp */
  ESP = (EBP);
  /* 10879e8e pop ebp */
  EBP = (pop32());
  /* 10879e8f ret  */
  ESPCHK(0x10879d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e90 @ 0x10879e90 (1565 bytes, 343 insns) */
void f_10879e90(void) {
  FTRACE(0x10879e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10879e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10879e91 mov ebp, esp */
  EBP = (ESP);
  /* 10879e93 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10879e99 mov eax, dword ptr [0x108a1fe4] */
  EAX = (r32((uint32_t)(0x108a1fe4)));
  /* 10879e9e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10879ea1 push eax */
  push32((uint32_t)(EAX));
  /* 10879ea2 mov ecx, dword ptr [0x108a1fe8] */
  ECX = (r32((uint32_t)(0x108a1fe8)));
  /* 10879ea8 push ecx */
  push32((uint32_t)(ECX));
  /* 10879ea9 call dword ptr [0x108a33bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33bc))), 0x10879eafu);
  /* 10879eaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10879eb1 je 0x10879ebb */
  if (C.zf) goto L_10879ebb;
  /* 10879eb3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10879eb6 jmp 0x1087a4a9 */
  goto L_1087a4a9;
L_10879ebb:;
  /* 10879ebb mov edx, dword ptr [0x108a1fe8] */
  EDX = (r32((uint32_t)(0x108a1fe8)));
  /* 10879ec1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10879ec7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10879ed1 jmp 0x10879ee2 */
  goto L_10879ee2;
L_10879ed3:;
  /* 10879ed3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10879ed9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879edc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10879ee2:;
  /* 10879ee2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10879ee8 cmp ecx, dword ptr [0x108a1fe4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108a1fe4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879eee jge 0x1087a4a7 */
  if ((C.sf==C.of)) goto L_1087a4a7;
  /* 10879ef4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10879efa mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10879efd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10879f03 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10879f08 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10879f0e push ecx */
  push32((uint32_t)(ECX));
  /* 10879f0f call dword ptr [0x108a33bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33bc))), 0x10879f15u);
  /* 10879f15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10879f17 je 0x10879f23 */
  if (C.zf) goto L_10879f23;
  /* 10879f19 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10879f1e jmp 0x1087a4a9 */
  goto L_1087a4a9;
L_10879f23:;
  /* 10879f23 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10879f29 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10879f2c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10879f32 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10879f38 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879f3e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10879f41 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10879f47 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10879f4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10879f4d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10879f57 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10879f61 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10879f68 jmp 0x10879f73 */
  goto L_10879f73;
L_10879f6a:;
  /* 10879f6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10879f6d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879f70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10879f73:;
  /* 10879f73 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879f77 jge 0x1087a46b */
  if ((C.sf==C.of)) goto L_1087a46b;
  /* 10879f7d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10879f87 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10879f91 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10879f9b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10879fa5 jmp 0x10879fb6 */
  goto L_10879fb6;
L_10879fa7:;
  /* 10879fa7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10879fad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10879fb0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10879fb6:;
  /* 10879fb6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879fbd jge 0x10879fd2 */
  if ((C.sf==C.of)) goto L_10879fd2;
  /* 10879fbf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10879fc5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10879fd0 jmp 0x10879fa7 */
  goto L_10879fa7;
L_10879fd2:;
  /* 10879fd2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10879fd6 jl 0x1087a40d */
  if ((C.sf!=C.of)) goto L_1087a40d;
  /* 10879fdc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10879fe1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10879fe7 push ecx */
  push32((uint32_t)(ECX));
  /* 10879fe8 call dword ptr [0x108a33bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33bc))), 0x10879feeu);
  /* 10879fee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10879ff0 je 0x10879ffc */
  if (C.zf) goto L_10879ffc;
  /* 10879ff2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10879ff7 jmp 0x1087a4a9 */
  goto L_1087a4a9;
L_10879ffc:;
  /* 10879ffc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1087a002 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1087a005 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1087a00f jmp 0x1087a020 */
  goto L_1087a020;
L_1087a011:;
  /* 1087a011 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1087a017 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a01a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1087a020:;
  /* 1087a020 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a027 jge 0x1087a1a4 */
  if ((C.sf==C.of)) goto L_1087a1a4;
  /* 1087a02d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087a030 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a033 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1087a039 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1087a03f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a045 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1087a04b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1087a051 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a055 jne 0x1087a062 */
  if (!C.zf) goto L_1087a062;
  /* 1087a057 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1087a05d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a060 je 0x1087a06c */
  if (C.zf) goto L_1087a06c;
L_1087a062:;
  /* 1087a062 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1087a067 jmp 0x1087a4a9 */
  goto L_1087a4a9;
L_1087a06c:;
  /* 1087a06c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1087a072 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1087a074 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1087a07a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1087a080 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1087a086 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1087a08c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1087a08f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087a091 je 0x1087a0c9 */
  if (C.zf) goto L_1087a0c9;
  /* 1087a093 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1087a099 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087a09c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1087a0a2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a0ac jle 0x1087a0b8 */
  if ((C.zf||C.sf!=C.of)) goto L_1087a0b8;
  /* 1087a0ae mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1087a0b3 jmp 0x1087a4a9 */
  goto L_1087a4a9;
L_1087a0b8:;
  /* 1087a0b8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1087a0be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a0c1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1087a0c7 jmp 0x1087a10b */
  goto L_1087a10b;
L_1087a0c9:;
  /* 1087a0c9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1087a0cf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1087a0d2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087a0d5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1087a0db cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a0e2 jle 0x1087a0ee */
  if ((C.zf||C.sf!=C.of)) goto L_1087a0ee;
  /* 1087a0e4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1087a0ee:;
  /* 1087a0ee mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1087a0f4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1087a0fb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a0fe mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1087a104 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1087a10b:;
  /* 1087a10b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a112 jl 0x1087a12d */
  if ((C.sf!=C.of)) goto L_1087a12d;
  /* 1087a114 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1087a11a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1087a11d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087a11f jne 0x1087a12d */
  if (!C.zf) goto L_1087a12d;
  /* 1087a121 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a12b jle 0x1087a137 */
  if ((C.zf||C.sf!=C.of)) goto L_1087a137;
L_1087a12d:;
  /* 1087a12d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1087a132 jmp 0x1087a4a9 */
  goto L_1087a4a9;
L_1087a137:;
  /* 1087a137 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1087a13d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a143 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1087a146 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a14c je 0x1087a158 */
  if (C.zf) goto L_1087a158;
  /* 1087a14e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1087a153 jmp 0x1087a4a9 */
  goto L_1087a4a9;
L_1087a158:;
  /* 1087a158 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1087a15e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a164 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1087a16a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1087a170 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a176 jb 0x1087a06c */
  if (C.cf) goto L_1087a06c;
  /* 1087a17c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1087a182 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a188 je 0x1087a194 */
  if (C.zf) goto L_1087a194;
  /* 1087a18a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1087a18f jmp 0x1087a4a9 */
  goto L_1087a4a9;
L_1087a194:;
  /* 1087a194 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087a197 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a19c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1087a19f jmp 0x1087a011 */
  goto L_1087a011;
L_1087a1a4:;
  /* 1087a1a4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087a1a7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1087a1a9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a1af je 0x1087a1bb */
  if (C.zf) goto L_1087a1bb;
  /* 1087a1b1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1087a1b6 jmp 0x1087a4a9 */
  goto L_1087a4a9;
L_1087a1bb:;
  /* 1087a1bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087a1be mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1087a1c4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1087a1cb jmp 0x1087a1d6 */
  goto L_1087a1d6;
L_1087a1cd:;
  /* 1087a1cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1087a1d0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a1d3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1087a1d6:;
  /* 1087a1d6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a1da jge 0x1087a40d */
  if ((C.sf==C.of)) goto L_1087a40d;
  /* 1087a1e0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1087a1ea mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1087a1f0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1087a1f6:;
  /* 1087a1f6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1087a1fc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1087a1ff mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1087a205 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1087a20b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a211 je 0x1087a33a */
  if (C.zf) goto L_1087a33a;
  /* 1087a217 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1087a21a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1087a220 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a227 je 0x1087a33a */
  if (C.zf) goto L_1087a33a;
  /* 1087a22d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1087a233 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a239 jb 0x1087a24e */
  if (C.cf) goto L_1087a24e;
  /* 1087a23b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1087a241 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a246 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a24c jb 0x1087a258 */
  if (C.cf) goto L_1087a258;
L_1087a24e:;
  /* 1087a24e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1087a253 jmp 0x1087a4a9 */
  goto L_1087a4a9;
L_1087a258:;
  /* 1087a258 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1087a25e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1087a264 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1087a26a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1087a270 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a273 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1087a276 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087a279 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a27e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1087a284:;
  /* 1087a284 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087a287 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a28d je 0x1087a2ae */
  if (C.zf) goto L_1087a2ae;
  /* 1087a28f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087a292 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a298 jne 0x1087a29c */
  if (!C.zf) goto L_1087a29c;
  /* 1087a29a jmp 0x1087a2ae */
  goto L_1087a2ae;
L_1087a29c:;
  /* 1087a29c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087a29f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1087a2a1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1087a2a4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087a2a7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a2a9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1087a2ac jmp 0x1087a284 */
  goto L_1087a284;
L_1087a2ae:;
  /* 1087a2ae mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087a2b1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a2b7 jne 0x1087a2c3 */
  if (!C.zf) goto L_1087a2c3;
  /* 1087a2b9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1087a2be jmp 0x1087a4a9 */
  goto L_1087a4a9;
L_1087a2c3:;
  /* 1087a2c3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1087a2c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1087a2cb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1087a2ce sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087a2d1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1087a2d7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a2de jle 0x1087a2ea */
  if ((C.zf||C.sf!=C.of)) goto L_1087a2ea;
  /* 1087a2e0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1087a2ea:;
  /* 1087a2ea mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1087a2f0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a2f3 je 0x1087a2ff */
  if (C.zf) goto L_1087a2ff;
  /* 1087a2f5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1087a2fa jmp 0x1087a4a9 */
  goto L_1087a4a9;
L_1087a2ff:;
  /* 1087a2ff mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1087a305 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1087a308 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a30e je 0x1087a31a */
  if (C.zf) goto L_1087a31a;
  /* 1087a310 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1087a315 jmp 0x1087a4a9 */
  goto L_1087a4a9;
L_1087a31a:;
  /* 1087a31a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1087a320 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1087a326 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1087a32c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a32f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1087a335 jmp 0x1087a1f6 */
  goto L_1087a1f6;
L_1087a33a:;
  /* 1087a33a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a341 je 0x1087a3b1 */
  if (C.zf) goto L_1087a3b1;
  /* 1087a343 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a347 jge 0x1087a37b */
  if ((C.sf==C.of)) goto L_1087a37b;
  /* 1087a349 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1087a34e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1087a351 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1087a353 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1087a359 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1087a35b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1087a361 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1087a366 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1087a369 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1087a36b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1087a371 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1087a373 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1087a379 jmp 0x1087a3b1 */
  goto L_1087a3b1;
L_1087a37b:;
  /* 1087a37b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1087a37e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087a381 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1087a386 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1087a388 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1087a38e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1087a390 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1087a396 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1087a399 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087a39c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1087a3a1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1087a3a3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1087a3a9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1087a3ab mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1087a3b1:;
  /* 1087a3b1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1087a3b7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1087a3ba cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a3c0 jne 0x1087a3d4 */
  if (!C.zf) goto L_1087a3d4;
  /* 1087a3c2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1087a3c5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1087a3cb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a3d2 je 0x1087a3de */
  if (C.zf) goto L_1087a3de;
L_1087a3d4:;
  /* 1087a3d4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1087a3d9 jmp 0x1087a4a9 */
  goto L_1087a4a9;
L_1087a3de:;
  /* 1087a3de mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1087a3e4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1087a3e7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a3ed je 0x1087a3f9 */
  if (C.zf) goto L_1087a3f9;
  /* 1087a3ef mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1087a3f4 jmp 0x1087a4a9 */
  goto L_1087a4a9;
L_1087a3f9:;
  /* 1087a3f9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1087a3ff add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a402 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1087a408 jmp 0x1087a1cd */
  goto L_1087a1cd;
L_1087a40d:;
  /* 1087a40d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087a410 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1087a416 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1087a41c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a420 jne 0x1087a43a */
  if (!C.zf) goto L_1087a43a;
  /* 1087a422 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087a425 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1087a42b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1087a431 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a438 je 0x1087a441 */
  if (C.zf) goto L_1087a441;
L_1087a43a:;
  /* 1087a43a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1087a43f jmp 0x1087a4a9 */
  goto L_1087a4a9;
L_1087a441:;
  /* 1087a441 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1087a447 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a44d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1087a453 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087a456 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a45b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1087a45e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087a461 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1087a463 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1087a466 jmp 0x10879f6a */
  goto L_10879f6a;
L_1087a46b:;
  /* 1087a46b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1087a471 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1087a477 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a479 jne 0x1087a48c */
  if (!C.zf) goto L_1087a48c;
  /* 1087a47b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1087a481 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1087a487 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a48a je 0x1087a493 */
  if (C.zf) goto L_1087a493;
L_1087a48c:;
  /* 1087a48c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1087a491 jmp 0x1087a4a9 */
  goto L_1087a4a9;
L_1087a493:;
  /* 1087a493 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1087a499 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a49c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1087a4a2 jmp 0x10879ed3 */
  goto L_10879ed3;
L_1087a4a7:;
  /* 1087a4a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1087a4a9:;
  /* 1087a4a9 mov esp, ebp */
  ESP = (EBP);
  /* 1087a4ab pop ebp */
  EBP = (pop32());
  /* 1087a4ac ret  */
  ESPCHK(0x10879e90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4b0 @ 0x1087a4b0 (250 bytes, 92 insns) */
void f_1087a4b0(void) {
  FTRACE(0x1087a4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087a4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087a4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1087a4b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087a4b6 push ebx */
  push32((uint32_t)(EBX));
  /* 1087a4b7 push esi */
  push32((uint32_t)(ESI));
  /* 1087a4b8 push edi */
  push32((uint32_t)(EDI));
  /* 1087a4b9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1087a4bc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1087a4bf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1087a4c2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1087a4c5:;
  /* 1087a4c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a4c9 jne 0x1087a4e9 */
  if (!C.zf) goto L_1087a4e9;
  /* 1087a4cb push 0x1089bf78 */
  push32((uint32_t)(0x1089bf78u));
  /* 1087a4d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087a4d2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1087a4d4 push 0x1089bf6c */
  push32((uint32_t)(0x1089bf6cu));
  /* 1087a4d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087a4db call 0x10873660 */
  push32(0x1087a4e0u); f_10873660();
  /* 1087a4e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a4e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a4e6 jne 0x1087a4e9 */
  if (!C.zf) goto L_1087a4e9;
  /* 1087a4e8 int3  */
  x86_unimpl("int3 @ 0x1087a4e8");
L_1087a4e9:;
  /* 1087a4e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087a4eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087a4ed jne 0x1087a4c5 */
  if (!C.zf) goto L_1087a4c5;
L_1087a4ef:;
  /* 1087a4ef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a4f3 jne 0x1087a513 */
  if (!C.zf) goto L_1087a513;
  /* 1087a4f5 push 0x1089bf5c */
  push32((uint32_t)(0x1089bf5cu));
  /* 1087a4fa push 0 */
  push32((uint32_t)(0x0u));
  /* 1087a4fc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1087a4fe push 0x1089bf6c */
  push32((uint32_t)(0x1089bf6cu));
  /* 1087a503 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087a505 call 0x10873660 */
  push32(0x1087a50au); f_10873660();
  /* 1087a50a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a50d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a510 jne 0x1087a513 */
  if (!C.zf) goto L_1087a513;
  /* 1087a512 int3  */
  x86_unimpl("int3 @ 0x1087a512");
L_1087a513:;
  /* 1087a513 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087a515 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087a517 jne 0x1087a4ef */
  if (!C.zf) goto L_1087a4ef;
  /* 1087a519 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a51c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1087a523 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087a529 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1087a52c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a52f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087a532 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1087a534 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a537 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1087a53e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1087a541 push ecx */
  push32((uint32_t)(ECX));
  /* 1087a542 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087a545 push edx */
  push32((uint32_t)(EDX));
  /* 1087a546 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a549 push eax */
  push32((uint32_t)(EAX));
  /* 1087a54a call 0x1087b530 */
  push32(0x1087a54fu); f_1087b530();
  /* 1087a54f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a552 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1087a555 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a558 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1087a55b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087a55e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a561 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1087a564 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a567 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a56b jl 0x1087a58f */
  if ((C.sf!=C.of)) goto L_1087a58f;
  /* 1087a56d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a570 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1087a572 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1087a575 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087a577 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1087a57d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1087a580 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a583 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1087a585 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a588 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a58b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1087a58d jmp 0x1087a5a0 */
  goto L_1087a5a0;
L_1087a58f:;
  /* 1087a58f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a592 push edx */
  push32((uint32_t)(EDX));
  /* 1087a593 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087a595 call 0x1087b2b0 */
  push32(0x1087a59au); f_1087b2b0();
  /* 1087a59a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a59d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1087a5a0:;
  /* 1087a5a0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1087a5a3 pop edi */
  EDI = (pop32());
  /* 1087a5a4 pop esi */
  ESI = (pop32());
  /* 1087a5a5 pop ebx */
  EBX = (pop32());
  /* 1087a5a6 mov esp, ebp */
  ESP = (EBP);
  /* 1087a5a8 pop ebp */
  EBP = (pop32());
  /* 1087a5a9 ret  */
  ESPCHK(0x1087a4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5b0 @ 0x1087a5b0 (183 bytes, 58 insns) */
void f_1087a5b0(void) {
  FTRACE(0x1087a5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087a5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087a5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1087a5b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087a5b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087a5b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a5bc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a5c1 ja 0x1087a5da */
  if ((!C.cf&&!C.zf)) goto L_1087a5da;
  /* 1087a5c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087a5c6 mov edx, dword ptr [0x1089ec98] */
  EDX = (r32((uint32_t)(0x1089ec98)));
  /* 1087a5cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087a5ce mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1087a5d2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1087a5d5 jmp 0x1087a663 */
  goto L_1087a663;
L_1087a5da:;
  /* 1087a5da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087a5dd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1087a5e0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1087a5e6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1087a5ec mov edx, dword ptr [0x1089ec98] */
  EDX = (r32((uint32_t)(0x1089ec98)));
  /* 1087a5f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087a5f4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1087a5f8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1087a5fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087a5ff je 0x1087a623 */
  if (C.zf) goto L_1087a623;
  /* 1087a601 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087a604 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1087a607 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1087a60d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1087a610 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1087a613 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1087a616 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1087a61a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1087a621 jmp 0x1087a634 */
  goto L_1087a634;
L_1087a623:;
  /* 1087a623 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1087a626 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1087a629 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1087a62d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1087a634:;
  /* 1087a634 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087a636 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087a638 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087a63a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1087a63d push ecx */
  push32((uint32_t)(ECX));
  /* 1087a63e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087a641 push edx */
  push32((uint32_t)(EDX));
  /* 1087a642 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1087a645 push eax */
  push32((uint32_t)(EAX));
  /* 1087a646 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087a648 call 0x1087c7d0 */
  push32(0x1087a64du); f_1087c7d0();
  /* 1087a64d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a650 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087a652 jne 0x1087a658 */
  if (!C.zf) goto L_1087a658;
  /* 1087a654 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087a656 jmp 0x1087a663 */
  goto L_1087a663;
L_1087a658:;
  /* 1087a658 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087a65b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087a660 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1087a663:;
  /* 1087a663 mov esp, ebp */
  ESP = (EBP);
  /* 1087a665 pop ebp */
  EBP = (pop32());
  /* 1087a666 ret  */
  ESPCHK(0x1087a5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a670 @ 0x1087a670 (836 bytes, 238 insns) */
void f_1087a670(void) {
  FTRACE(0x1087a670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087a670 push ebp */
  push32((uint32_t)(EBP));
  /* 1087a671 mov ebp, esp */
  EBP = (ESP);
  /* 1087a673 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087a676 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1087a678 call 0x10877fa0 */
  push32(0x1087a67du); f_10877fa0();
  /* 1087a67d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a680 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087a683 push eax */
  push32((uint32_t)(EAX));
  /* 1087a684 call 0x1087a9c0 */
  push32(0x1087a689u); f_1087a9c0();
  /* 1087a689 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a68c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1087a68f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087a692 cmp ecx, dword ptr [0x108a1d24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108a1d24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a698 jne 0x1087a6ab */
  if (!C.zf) goto L_1087a6ab;
  /* 1087a69a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1087a69c call 0x10878040 */
  push32(0x1087a6a1u); f_10878040();
  /* 1087a6a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a6a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087a6a6 jmp 0x1087a9b0 */
  goto L_1087a9b0;
L_1087a6ab:;
  /* 1087a6ab cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a6af jne 0x1087a6cc */
  if (!C.zf) goto L_1087a6cc;
  /* 1087a6b1 call 0x1087aaa0 */
  push32(0x1087a6b6u); f_1087aaa0();
  /* 1087a6b6 call 0x1087ab20 */
  push32(0x1087a6bbu); f_1087ab20();
  /* 1087a6bb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1087a6bd call 0x10878040 */
  push32(0x1087a6c2u); f_10878040();
  /* 1087a6c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a6c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087a6c7 jmp 0x1087a9b0 */
  goto L_1087a9b0;
L_1087a6cc:;
  /* 1087a6cc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1087a6d3 jmp 0x1087a6de */
  goto L_1087a6de;
L_1087a6d5:;
  /* 1087a6d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087a6d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a6db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1087a6de:;
  /* 1087a6de cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a6e2 jae 0x1087a82f */
  if (!C.cf) goto L_1087a82f;
  /* 1087a6e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087a6eb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087a6ee mov ecx, dword ptr [eax + 0x1089eeb8] */
  ECX = (r32((uint32_t)(EAX + 0x1089eeb8)));
  /* 1087a6f4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a6f7 jne 0x1087a82a */
  if (!C.zf) goto L_1087a82a;
  /* 1087a6fd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1087a704 jmp 0x1087a70f */
  goto L_1087a70f;
L_1087a706:;
  /* 1087a706 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a709 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a70c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1087a70f:;
  /* 1087a70f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a716 jae 0x1087a724 */
  if (!C.cf) goto L_1087a724;
  /* 1087a718 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a71b mov byte ptr [eax + 0x108a1ec0], 0 */
  w8((uint32_t)(EAX + 0x108a1ec0), (0x0u));
  /* 1087a722 jmp 0x1087a706 */
  goto L_1087a706;
L_1087a724:;
  /* 1087a724 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1087a72b jmp 0x1087a736 */
  goto L_1087a736;
L_1087a72d:;
  /* 1087a72d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087a730 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a733 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1087a736:;
  /* 1087a736 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a73a jae 0x1087a7b7 */
  if (!C.cf) goto L_1087a7b7;
  /* 1087a73c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087a73f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087a742 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087a745 lea ecx, [edx + eax*8 + 0x1089eec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1089eec8));
  /* 1087a74c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087a74f jmp 0x1087a75a */
  goto L_1087a75a;
L_1087a751:;
  /* 1087a751 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087a754 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a757 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1087a75a:;
  /* 1087a75a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087a75d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087a75f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1087a761 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087a763 je 0x1087a7b2 */
  if (C.zf) goto L_1087a7b2;
  /* 1087a765 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087a768 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087a76a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1087a76d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087a76f je 0x1087a7b2 */
  if (C.zf) goto L_1087a7b2;
  /* 1087a771 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087a774 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087a776 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1087a778 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1087a77b jmp 0x1087a786 */
  goto L_1087a786;
L_1087a77d:;
  /* 1087a77d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a780 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a783 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1087a786:;
  /* 1087a786 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087a789 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087a78b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1087a78e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a791 ja 0x1087a7b0 */
  if ((!C.cf&&!C.zf)) goto L_1087a7b0;
  /* 1087a793 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a796 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087a799 mov dl, byte ptr [eax + 0x108a1ec1] */
  DL = (r8((uint32_t)(EAX + 0x108a1ec1)));
  /* 1087a79f or dl, byte ptr [ecx + 0x1089eeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1089eeb0))); DL = (_r); fl_logic(_r,8); }
  /* 1087a7a5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a7a8 mov byte ptr [eax + 0x108a1ec1], dl */
  w8((uint32_t)(EAX + 0x108a1ec1), (DL));
  /* 1087a7ae jmp 0x1087a77d */
  goto L_1087a77d;
L_1087a7b0:;
  /* 1087a7b0 jmp 0x1087a751 */
  goto L_1087a751;
L_1087a7b2:;
  /* 1087a7b2 jmp 0x1087a72d */
  goto L_1087a72d;
L_1087a7b7:;
  /* 1087a7b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087a7ba mov dword ptr [0x108a1d24], ecx */
  w32((uint32_t)(0x108a1d24), (ECX));
  /* 1087a7c0 mov dword ptr [0x108a1dac], 1 */
  w32((uint32_t)(0x108a1dac), (0x1u));
  /* 1087a7ca mov edx, dword ptr [0x108a1d24] */
  EDX = (r32((uint32_t)(0x108a1d24)));
  /* 1087a7d0 push edx */
  push32((uint32_t)(EDX));
  /* 1087a7d1 call 0x1087aa20 */
  push32(0x1087a7d6u); f_1087aa20();
  /* 1087a7d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a7d9 mov dword ptr [0x108a1fc4], eax */
  w32((uint32_t)(0x108a1fc4), (EAX));
  /* 1087a7de mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1087a7e5 jmp 0x1087a7f0 */
  goto L_1087a7f0;
L_1087a7e7:;
  /* 1087a7e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087a7ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a7ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1087a7f0:;
  /* 1087a7f0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a7f4 jae 0x1087a814 */
  if (!C.cf) goto L_1087a814;
  /* 1087a7f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087a7f9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087a7fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087a7ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087a802 mov cx, word ptr [ecx + eax*2 + 0x1089eebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1089eebc)));
  /* 1087a80a mov word ptr [edx*2 + 0x108a1da0], cx */
  w16((uint32_t)(EDX*2 + 0x108a1da0), (CX));
  /* 1087a812 jmp 0x1087a7e7 */
  goto L_1087a7e7;
L_1087a814:;
  /* 1087a814 call 0x1087ab20 */
  push32(0x1087a819u); f_1087ab20();
  /* 1087a819 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1087a81b call 0x10878040 */
  push32(0x1087a820u); f_10878040();
  /* 1087a820 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a823 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087a825 jmp 0x1087a9b0 */
  goto L_1087a9b0;
L_1087a82a:;
  /* 1087a82a jmp 0x1087a6d5 */
  goto L_1087a6d5;
L_1087a82f:;
  /* 1087a82f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1087a832 push edx */
  push32((uint32_t)(EDX));
  /* 1087a833 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087a836 push eax */
  push32((uint32_t)(EAX));
  /* 1087a837 call dword ptr [0x108a331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a331c))), 0x1087a83du);
  /* 1087a83d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a840 jne 0x1087a982 */
  if (!C.zf) goto L_1087a982;
  /* 1087a846 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1087a84d jmp 0x1087a858 */
  goto L_1087a858;
L_1087a84f:;
  /* 1087a84f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a852 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a855 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1087a858:;
  /* 1087a858 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a85f jae 0x1087a86d */
  if (!C.cf) goto L_1087a86d;
  /* 1087a861 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a864 mov byte ptr [edx + 0x108a1ec0], 0 */
  w8((uint32_t)(EDX + 0x108a1ec0), (0x0u));
  /* 1087a86b jmp 0x1087a84f */
  goto L_1087a84f;
L_1087a86d:;
  /* 1087a86d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087a870 mov dword ptr [0x108a1d24], eax */
  w32((uint32_t)(0x108a1d24), (EAX));
  /* 1087a875 mov dword ptr [0x108a1fc4], 0 */
  w32((uint32_t)(0x108a1fc4), (0x0u));
  /* 1087a87f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a883 jbe 0x1087a93e */
  if ((C.cf||C.zf)) goto L_1087a93e;
  /* 1087a889 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1087a88c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1087a88f jmp 0x1087a89a */
  goto L_1087a89a;
L_1087a891:;
  /* 1087a891 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1087a894 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a897 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1087a89a:;
  /* 1087a89a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1087a89d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087a89f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1087a8a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087a8a3 je 0x1087a8ec */
  if (C.zf) goto L_1087a8ec;
  /* 1087a8a5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1087a8a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087a8aa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1087a8ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087a8af je 0x1087a8ec */
  if (C.zf) goto L_1087a8ec;
  /* 1087a8b1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1087a8b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087a8b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1087a8b8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1087a8bb jmp 0x1087a8c6 */
  goto L_1087a8c6;
L_1087a8bd:;
  /* 1087a8bd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a8c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a8c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1087a8c6:;
  /* 1087a8c6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1087a8c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087a8cb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1087a8ce cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a8d1 ja 0x1087a8ea */
  if ((!C.cf&&!C.zf)) goto L_1087a8ea;
  /* 1087a8d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a8d6 mov cl, byte ptr [eax + 0x108a1ec1] */
  CL = (r8((uint32_t)(EAX + 0x108a1ec1)));
  /* 1087a8dc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1087a8df mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a8e2 mov byte ptr [edx + 0x108a1ec1], cl */
  w8((uint32_t)(EDX + 0x108a1ec1), (CL));
  /* 1087a8e8 jmp 0x1087a8bd */
  goto L_1087a8bd;
L_1087a8ea:;
  /* 1087a8ea jmp 0x1087a891 */
  goto L_1087a891;
L_1087a8ec:;
  /* 1087a8ec mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1087a8f3 jmp 0x1087a8fe */
  goto L_1087a8fe;
L_1087a8f5:;
  /* 1087a8f5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a8f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a8fb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1087a8fe:;
  /* 1087a8fe cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a905 jae 0x1087a91e */
  if (!C.cf) goto L_1087a91e;
  /* 1087a907 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a90a mov dl, byte ptr [ecx + 0x108a1ec1] */
  DL = (r8((uint32_t)(ECX + 0x108a1ec1)));
  /* 1087a910 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1087a913 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087a916 mov byte ptr [eax + 0x108a1ec1], dl */
  w8((uint32_t)(EAX + 0x108a1ec1), (DL));
  /* 1087a91c jmp 0x1087a8f5 */
  goto L_1087a8f5;
L_1087a91e:;
  /* 1087a91e mov ecx, dword ptr [0x108a1d24] */
  ECX = (r32((uint32_t)(0x108a1d24)));
  /* 1087a924 push ecx */
  push32((uint32_t)(ECX));
  /* 1087a925 call 0x1087aa20 */
  push32(0x1087a92au); f_1087aa20();
  /* 1087a92a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a92d mov dword ptr [0x108a1fc4], eax */
  w32((uint32_t)(0x108a1fc4), (EAX));
  /* 1087a932 mov dword ptr [0x108a1dac], 1 */
  w32((uint32_t)(0x108a1dac), (0x1u));
  /* 1087a93c jmp 0x1087a948 */
  goto L_1087a948;
L_1087a93e:;
  /* 1087a93e mov dword ptr [0x108a1dac], 0 */
  w32((uint32_t)(0x108a1dac), (0x0u));
L_1087a948:;
  /* 1087a948 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1087a94f jmp 0x1087a95a */
  goto L_1087a95a;
L_1087a951:;
  /* 1087a951 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087a954 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a957 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1087a95a:;
  /* 1087a95a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a95e jae 0x1087a96f */
  if (!C.cf) goto L_1087a96f;
  /* 1087a960 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087a963 mov word ptr [eax*2 + 0x108a1da0], 0 */
  w16((uint32_t)(EAX*2 + 0x108a1da0), (0x0u));
  /* 1087a96d jmp 0x1087a951 */
  goto L_1087a951;
L_1087a96f:;
  /* 1087a96f call 0x1087ab20 */
  push32(0x1087a974u); f_1087ab20();
  /* 1087a974 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1087a976 call 0x10878040 */
  push32(0x1087a97bu); f_10878040();
  /* 1087a97b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a97e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087a980 jmp 0x1087a9b0 */
  goto L_1087a9b0;
L_1087a982:;
  /* 1087a982 cmp dword ptr [0x108a0828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a989 je 0x1087a9a3 */
  if (C.zf) goto L_1087a9a3;
  /* 1087a98b call 0x1087aaa0 */
  push32(0x1087a990u); f_1087aaa0();
  /* 1087a990 call 0x1087ab20 */
  push32(0x1087a995u); f_1087ab20();
  /* 1087a995 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1087a997 call 0x10878040 */
  push32(0x1087a99cu); f_10878040();
  /* 1087a99c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a99f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087a9a1 jmp 0x1087a9b0 */
  goto L_1087a9b0;
L_1087a9a3:;
  /* 1087a9a3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1087a9a5 call 0x10878040 */
  push32(0x1087a9aau); f_10878040();
  /* 1087a9aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087a9ad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1087a9b0:;
  /* 1087a9b0 mov esp, ebp */
  ESP = (EBP);
  /* 1087a9b2 pop ebp */
  EBP = (pop32());
  /* 1087a9b3 ret  */
  ESPCHK(0x1087a670u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1087a9c0 (89 bytes, 21 insns) */
void f_1087a9c0(void) {
  FTRACE(0x1087a9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087a9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087a9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1087a9c3 mov dword ptr [0x108a0828], 0 */
  w32((uint32_t)(0x108a0828), (0x0u));
  /* 1087a9cd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a9d1 jne 0x1087a9e5 */
  if (!C.zf) goto L_1087a9e5;
  /* 1087a9d3 mov dword ptr [0x108a0828], 1 */
  w32((uint32_t)(0x108a0828), (0x1u));
  /* 1087a9dd call dword ptr [0x108a3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3314))), 0x1087a9e3u);
  /* 1087a9e3 jmp 0x1087aa17 */
  goto L_1087aa17;
L_1087a9e5:;
  /* 1087a9e5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087a9e9 jne 0x1087a9fd */
  if (!C.zf) goto L_1087a9fd;
  /* 1087a9eb mov dword ptr [0x108a0828], 1 */
  w32((uint32_t)(0x108a0828), (0x1u));
  /* 1087a9f5 call dword ptr [0x108a3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3324))), 0x1087a9fbu);
  /* 1087a9fb jmp 0x1087aa17 */
  goto L_1087aa17;
L_1087a9fd:;
  /* 1087a9fd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087aa01 jne 0x1087aa14 */
  if (!C.zf) goto L_1087aa14;
  /* 1087aa03 mov dword ptr [0x108a0828], 1 */
  w32((uint32_t)(0x108a0828), (0x1u));
  /* 1087aa0d mov eax, dword ptr [0x108a0848] */
  EAX = (r32((uint32_t)(0x108a0848)));
  /* 1087aa12 jmp 0x1087aa17 */
  goto L_1087aa17;
L_1087aa14:;
  /* 1087aa14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1087aa17:;
  /* 1087aa17 pop ebp */
  EBP = (pop32());
  /* 1087aa18 ret  */
  ESPCHK(0x1087a9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa20 @ 0x1087aa20 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1087aa20(void) {
  FTRACE(0x1087aa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087aa20 push ebp */
  push32((uint32_t)(EBP));
  /* 1087aa21 mov ebp, esp */
  EBP = (ESP);
  /* 1087aa23 push ecx */
  push32((uint32_t)(ECX));
  /* 1087aa24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087aa27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087aa2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087aa2d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087aa33 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1087aa36 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087aa3a ja 0x1087aa6a */
  if ((!C.cf&&!C.zf)) goto L_1087aa6a;
  /* 1087aa3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087aa3f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087aa41 mov dl, byte ptr [eax + 0x1087aa84] */
  DL = (r8((uint32_t)(EAX + 0x1087aa84)));
  /* 1087aa47 jmp dword ptr [edx*4 + 0x1087aa70] */
  switch (EDX) {
    case 0: goto L_1087aa4e;
    case 1: goto L_1087aa55;
    case 2: goto L_1087aa5c;
    case 3: goto L_1087aa63;
    case 4: goto L_1087aa6a;
    default: x86_unimpl("switch@0x1087aa47 out of table"); return;
  }
L_1087aa4e:;
  /* 1087aa4e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1087aa53 jmp 0x1087aa6c */
  goto L_1087aa6c;
L_1087aa55:;
  /* 1087aa55 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1087aa5a jmp 0x1087aa6c */
  goto L_1087aa6c;
L_1087aa5c:;
  /* 1087aa5c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1087aa61 jmp 0x1087aa6c */
  goto L_1087aa6c;
L_1087aa63:;
  /* 1087aa63 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1087aa68 jmp 0x1087aa6c */
  goto L_1087aa6c;
L_1087aa6a:;
  /* 1087aa6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1087aa6c:;
  /* 1087aa6c mov esp, ebp */
  ESP = (EBP);
  /* 1087aa6e pop ebp */
  EBP = (pop32());
  /* 1087aa6f ret  */
  ESPCHK(0x1087aa20u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1087aaa0 (116 bytes, 29 insns) */
void f_1087aaa0(void) {
  FTRACE(0x1087aaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087aaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087aaa1 mov ebp, esp */
  EBP = (ESP);
  /* 1087aaa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1087aaa4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1087aaab jmp 0x1087aab6 */
  goto L_1087aab6;
L_1087aaad:;
  /* 1087aaad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087aab0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087aab3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1087aab6:;
  /* 1087aab6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087aabd jge 0x1087aacb */
  if ((C.sf==C.of)) goto L_1087aacb;
  /* 1087aabf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087aac2 mov byte ptr [ecx + 0x108a1ec0], 0 */
  w8((uint32_t)(ECX + 0x108a1ec0), (0x0u));
  /* 1087aac9 jmp 0x1087aaad */
  goto L_1087aaad;
L_1087aacb:;
  /* 1087aacb mov dword ptr [0x108a1d24], 0 */
  w32((uint32_t)(0x108a1d24), (0x0u));
  /* 1087aad5 mov dword ptr [0x108a1dac], 0 */
  w32((uint32_t)(0x108a1dac), (0x0u));
  /* 1087aadf mov dword ptr [0x108a1fc4], 0 */
  w32((uint32_t)(0x108a1fc4), (0x0u));
  /* 1087aae9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1087aaf0 jmp 0x1087aafb */
  goto L_1087aafb;
L_1087aaf2:;
  /* 1087aaf2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087aaf5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087aaf8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1087aafb:;
  /* 1087aafb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087aaff jge 0x1087ab10 */
  if ((C.sf==C.of)) goto L_1087ab10;
  /* 1087ab01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087ab04 mov word ptr [eax*2 + 0x108a1da0], 0 */
  w16((uint32_t)(EAX*2 + 0x108a1da0), (0x0u));
  /* 1087ab0e jmp 0x1087aaf2 */
  goto L_1087aaf2;
L_1087ab10:;
  /* 1087ab10 mov esp, ebp */
  ESP = (EBP);
  /* 1087ab12 pop ebp */
  EBP = (pop32());
  /* 1087ab13 ret  */
  ESPCHK(0x1087aaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab20 @ 0x1087ab20 (770 bytes, 175 insns) */
void f_1087ab20(void) {
  FTRACE(0x1087ab20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087ab20 push ebp */
  push32((uint32_t)(EBP));
  /* 1087ab21 mov ebp, esp */
  EBP = (ESP);
  /* 1087ab23 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087ab29 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1087ab2f push eax */
  push32((uint32_t)(EAX));
  /* 1087ab30 mov ecx, dword ptr [0x108a1d24] */
  ECX = (r32((uint32_t)(0x108a1d24)));
  /* 1087ab36 push ecx */
  push32((uint32_t)(ECX));
  /* 1087ab37 call dword ptr [0x108a331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a331c))), 0x1087ab3du);
  /* 1087ab3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ab40 jne 0x1087ad59 */
  if (!C.zf) goto L_1087ad59;
  /* 1087ab46 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1087ab50 jmp 0x1087ab61 */
  goto L_1087ab61;
L_1087ab52:;
  /* 1087ab52 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087ab58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ab5b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1087ab61:;
  /* 1087ab61 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ab6b jae 0x1087ab82 */
  if (!C.cf) goto L_1087ab82;
  /* 1087ab6d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087ab73 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1087ab79 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1087ab80 jmp 0x1087ab52 */
  goto L_1087ab52;
L_1087ab82:;
  /* 1087ab82 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1087ab89 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1087ab8f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1087ab92 jmp 0x1087ab9d */
  goto L_1087ab9d;
L_1087ab94:;
  /* 1087ab94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087ab97 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ab9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1087ab9d:;
  /* 1087ab9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087aba0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087aba2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1087aba4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087aba6 je 0x1087abe8 */
  if (C.zf) goto L_1087abe8;
  /* 1087aba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087abab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087abad mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1087abaf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1087abb5 jmp 0x1087abc6 */
  goto L_1087abc6;
L_1087abb7:;
  /* 1087abb7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087abbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087abc0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1087abc6:;
  /* 1087abc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087abc9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087abcb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1087abce cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087abd4 ja 0x1087abe6 */
  if ((!C.cf&&!C.zf)) goto L_1087abe6;
  /* 1087abd6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087abdc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1087abe4 jmp 0x1087abb7 */
  goto L_1087abb7;
L_1087abe6:;
  /* 1087abe6 jmp 0x1087ab94 */
  goto L_1087ab94;
L_1087abe8:;
  /* 1087abe8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087abea mov eax, dword ptr [0x108a1fc4] */
  EAX = (r32((uint32_t)(0x108a1fc4)));
  /* 1087abef push eax */
  push32((uint32_t)(EAX));
  /* 1087abf0 mov ecx, dword ptr [0x108a1d24] */
  ECX = (r32((uint32_t)(0x108a1d24)));
  /* 1087abf6 push ecx */
  push32((uint32_t)(ECX));
  /* 1087abf7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1087abfd push edx */
  push32((uint32_t)(EDX));
  /* 1087abfe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1087ac03 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1087ac09 push eax */
  push32((uint32_t)(EAX));
  /* 1087ac0a push 1 */
  push32((uint32_t)(0x1u));
  /* 1087ac0c call 0x1087c7d0 */
  push32(0x1087ac11u); f_1087c7d0();
  /* 1087ac11 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ac14 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087ac16 mov ecx, dword ptr [0x108a1d24] */
  ECX = (r32((uint32_t)(0x108a1d24)));
  /* 1087ac1c push ecx */
  push32((uint32_t)(ECX));
  /* 1087ac1d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1087ac22 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1087ac28 push edx */
  push32((uint32_t)(EDX));
  /* 1087ac29 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1087ac2e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1087ac34 push eax */
  push32((uint32_t)(EAX));
  /* 1087ac35 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1087ac3a mov ecx, dword ptr [0x108a1fc4] */
  ECX = (r32((uint32_t)(0x108a1fc4)));
  /* 1087ac40 push ecx */
  push32((uint32_t)(ECX));
  /* 1087ac41 call 0x1087c990 */
  push32(0x1087ac46u); f_1087c990();
  /* 1087ac46 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ac49 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087ac4b mov edx, dword ptr [0x108a1d24] */
  EDX = (r32((uint32_t)(0x108a1d24)));
  /* 1087ac51 push edx */
  push32((uint32_t)(EDX));
  /* 1087ac52 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1087ac57 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1087ac5d push eax */
  push32((uint32_t)(EAX));
  /* 1087ac5e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1087ac63 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1087ac69 push ecx */
  push32((uint32_t)(ECX));
  /* 1087ac6a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1087ac6f mov edx, dword ptr [0x108a1fc4] */
  EDX = (r32((uint32_t)(0x108a1fc4)));
  /* 1087ac75 push edx */
  push32((uint32_t)(EDX));
  /* 1087ac76 call 0x1087c990 */
  push32(0x1087ac7bu); f_1087c990();
  /* 1087ac7b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ac7e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1087ac88 jmp 0x1087ac99 */
  goto L_1087ac99;
L_1087ac8a:;
  /* 1087ac8a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087ac90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ac93 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1087ac99:;
  /* 1087ac99 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087aca3 jae 0x1087ad54 */
  if (!C.cf) goto L_1087ad54;
  /* 1087aca9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087acaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087acb1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1087acb9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1087acbc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087acbe je 0x1087acf6 */
  if (C.zf) goto L_1087acf6;
  /* 1087acc0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087acc6 mov cl, byte ptr [eax + 0x108a1ec1] */
  CL = (r8((uint32_t)(EAX + 0x108a1ec1)));
  /* 1087accc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1087accf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087acd5 mov byte ptr [edx + 0x108a1ec1], cl */
  w8((uint32_t)(EDX + 0x108a1ec1), (CL));
  /* 1087acdb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087ace1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087ace7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1087acee mov byte ptr [eax + 0x108a1dc0], dl */
  w8((uint32_t)(EAX + 0x108a1dc0), (DL));
  /* 1087acf4 jmp 0x1087ad4f */
  goto L_1087ad4f;
L_1087acf6:;
  /* 1087acf6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087acfc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087acfe mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1087ad06 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1087ad09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087ad0b je 0x1087ad42 */
  if (C.zf) goto L_1087ad42;
  /* 1087ad0d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087ad13 mov al, byte ptr [edx + 0x108a1ec1] */
  AL = (r8((uint32_t)(EDX + 0x108a1ec1)));
  /* 1087ad19 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1087ad1b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087ad21 mov byte ptr [ecx + 0x108a1ec1], al */
  w8((uint32_t)(ECX + 0x108a1ec1), (AL));
  /* 1087ad27 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087ad2d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087ad33 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1087ad3a mov byte ptr [edx + 0x108a1dc0], cl */
  w8((uint32_t)(EDX + 0x108a1dc0), (CL));
  /* 1087ad40 jmp 0x1087ad4f */
  goto L_1087ad4f;
L_1087ad42:;
  /* 1087ad42 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087ad48 mov byte ptr [edx + 0x108a1dc0], 0 */
  w8((uint32_t)(EDX + 0x108a1dc0), (0x0u));
L_1087ad4f:;
  /* 1087ad4f jmp 0x1087ac8a */
  goto L_1087ac8a;
L_1087ad54:;
  /* 1087ad54 jmp 0x1087ae1e */
  goto L_1087ae1e;
L_1087ad59:;
  /* 1087ad59 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1087ad63 jmp 0x1087ad74 */
  goto L_1087ad74;
L_1087ad65:;
  /* 1087ad65 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087ad6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ad6e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1087ad74:;
  /* 1087ad74 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ad7e jae 0x1087ae1e */
  if (!C.cf) goto L_1087ae1e;
  /* 1087ad84 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ad8b jb 0x1087adc8 */
  if (C.cf) goto L_1087adc8;
  /* 1087ad8d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ad94 ja 0x1087adc8 */
  if ((!C.cf&&!C.zf)) goto L_1087adc8;
  /* 1087ad96 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087ad9c mov dl, byte ptr [ecx + 0x108a1ec1] */
  DL = (r8((uint32_t)(ECX + 0x108a1ec1)));
  /* 1087ada2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1087ada5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087adab mov byte ptr [eax + 0x108a1ec1], dl */
  w8((uint32_t)(EAX + 0x108a1ec1), (DL));
  /* 1087adb1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087adb7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087adba mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087adc0 mov byte ptr [edx + 0x108a1dc0], cl */
  w8((uint32_t)(EDX + 0x108a1dc0), (CL));
  /* 1087adc6 jmp 0x1087ae19 */
  goto L_1087ae19;
L_1087adc8:;
  /* 1087adc8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087adcf jb 0x1087ae0c */
  if (C.cf) goto L_1087ae0c;
  /* 1087add1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087add8 ja 0x1087ae0c */
  if ((!C.cf&&!C.zf)) goto L_1087ae0c;
  /* 1087adda mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087ade0 mov cl, byte ptr [eax + 0x108a1ec1] */
  CL = (r8((uint32_t)(EAX + 0x108a1ec1)));
  /* 1087ade6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1087ade9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087adef mov byte ptr [edx + 0x108a1ec1], cl */
  w8((uint32_t)(EDX + 0x108a1ec1), (CL));
  /* 1087adf5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087adfb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087adfe mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087ae04 mov byte ptr [ecx + 0x108a1dc0], al */
  w8((uint32_t)(ECX + 0x108a1dc0), (AL));
  /* 1087ae0a jmp 0x1087ae19 */
  goto L_1087ae19;
L_1087ae0c:;
  /* 1087ae0c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1087ae12 mov byte ptr [edx + 0x108a1dc0], 0 */
  w8((uint32_t)(EDX + 0x108a1dc0), (0x0u));
L_1087ae19:;
  /* 1087ae19 jmp 0x1087ad65 */
  goto L_1087ad65;
L_1087ae1e:;
  /* 1087ae1e mov esp, ebp */
  ESP = (EBP);
  /* 1087ae20 pop ebp */
  EBP = (pop32());
  /* 1087ae21 ret  */
  ESPCHK(0x1087ab20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae30 @ 0x1087ae30 (23 bytes, 9 insns) */
void f_1087ae30(void) {
  FTRACE(0x1087ae30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087ae30 push ebp */
  push32((uint32_t)(EBP));
  /* 1087ae31 mov ebp, esp */
  EBP = (ESP);
  /* 1087ae33 cmp dword ptr [0x108a1dac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a1dac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ae3a je 0x1087ae43 */
  if (C.zf) goto L_1087ae43;
  /* 1087ae3c mov eax, dword ptr [0x108a1d24] */
  EAX = (r32((uint32_t)(0x108a1d24)));
  /* 1087ae41 jmp 0x1087ae45 */
  goto L_1087ae45;
L_1087ae43:;
  /* 1087ae43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1087ae45:;
  /* 1087ae45 pop ebp */
  EBP = (pop32());
  /* 1087ae46 ret  */
  ESPCHK(0x1087ae30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae50 @ 0x1087ae50 (34 bytes, 10 insns) */
void f_1087ae50(void) {
  FTRACE(0x1087ae50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087ae50 push ebp */
  push32((uint32_t)(EBP));
  /* 1087ae51 mov ebp, esp */
  EBP = (ESP);
  /* 1087ae53 cmp dword ptr [0x108a2170], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a2170))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ae5a jne 0x1087ae70 */
  if (!C.zf) goto L_1087ae70;
  /* 1087ae5c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1087ae5e call 0x1087a670 */
  push32(0x1087ae63u); f_1087a670();
  /* 1087ae63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ae66 mov dword ptr [0x108a2170], 1 */
  w32((uint32_t)(0x108a2170), (0x1u));
L_1087ae70:;
  /* 1087ae70 pop ebp */
  EBP = (pop32());
  /* 1087ae71 ret  */
  ESPCHK(0x1087ae50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae80 @ 0x1087ae80 (664 bytes, 265 insns) [15 switch table(s)] */
void f_1087ae80(void) {
  FTRACE(0x1087ae80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087ae80 push ebp */
  push32((uint32_t)(EBP));
  /* 1087ae81 mov ebp, esp */
  EBP = (ESP);
  /* 1087ae83 push edi */
  push32((uint32_t)(EDI));
  /* 1087ae84 push esi */
  push32((uint32_t)(ESI));
  /* 1087ae85 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1087ae88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087ae8b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ae8e mov eax, ecx */
  EAX = (ECX);
  /* 1087ae90 mov edx, ecx */
  EDX = (ECX);
  /* 1087ae92 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ae94 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ae96 jbe 0x1087aea0 */
  if ((C.cf||C.zf)) goto L_1087aea0;
  /* 1087ae98 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ae9a jb 0x1087b018 */
  if (C.cf) goto L_1087b018;
L_1087aea0:;
  /* 1087aea0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1087aea6 jne 0x1087aebc */
  if (!C.zf) goto L_1087aebc;
  /* 1087aea8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1087aeab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1087aeae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087aeb1 jb 0x1087aedc */
  if (C.cf) goto L_1087aedc;
  /* 1087aeb3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1087aeb5 jmp dword ptr [edx*4 + 0x1087afc8] */
  switch (EDX) {
    case 0: goto L_1087afd8;
    case 1: goto L_1087afe0;
    case 2: goto L_1087afec;
    case 3: goto L_1087b000;
    default: x86_unimpl("switch@0x1087aeb5 out of table"); return;
  }
L_1087aebc:;
  /* 1087aebc mov eax, edi */
  EAX = (EDI);
  /* 1087aebe mov edx, 3 */
  EDX = (0x3u);
  /* 1087aec3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087aec6 jb 0x1087aed4 */
  if (C.cf) goto L_1087aed4;
  /* 1087aec8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1087aecb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087aecd jmp dword ptr [eax*4 + 0x1087aee0] */
  switch (EAX) {
    case 1: goto L_1087aef0;
    case 2: goto L_1087af1c;
    case 3: goto L_1087af40;
    default: x86_unimpl("switch@0x1087aecd out of table"); return;
  }
L_1087aed4:;
  /* 1087aed4 jmp dword ptr [ecx*4 + 0x1087afd8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1087afd8)))); return;
  /* 1087aedb nop  */
  /* nop */
L_1087aedc:;
  /* 1087aedc jmp dword ptr [ecx*4 + 0x1087af5c] */
  switch (ECX) {
    case 0: goto L_1087afbf;
    case 1: goto L_1087afac;
    case 2: goto L_1087afa4;
    case 3: goto L_1087af9c;
    case 4: goto L_1087af94;
    case 5: goto L_1087af8c;
    case 6: goto L_1087af84;
    case 7: goto L_1087af7c;
    default: x86_unimpl("switch@0x1087aedc out of table"); return;
  }
  /* 1087aee3 nop  */
  /* nop */
L_1087aef0:;
  /* 1087aef0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1087aef2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1087aef4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1087aef6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1087aef9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1087aefc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1087aeff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1087af02 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1087af05 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1087af08 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1087af0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087af0e jb 0x1087aedc */
  if (C.cf) goto L_1087aedc;
  /* 1087af10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1087af12 jmp dword ptr [edx*4 + 0x1087afc8] */
  switch (EDX) {
    case 0: goto L_1087afd8;
    case 1: goto L_1087afe0;
    case 2: goto L_1087afec;
    case 3: goto L_1087b000;
    default: x86_unimpl("switch@0x1087af12 out of table"); return;
  }
  /* 1087af19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1087af1c:;
  /* 1087af1c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1087af1e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1087af20 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1087af22 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1087af25 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1087af28 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1087af2b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1087af2e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1087af31 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087af34 jb 0x1087aedc */
  if (C.cf) goto L_1087aedc;
  /* 1087af36 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1087af38 jmp dword ptr [edx*4 + 0x1087afc8] */
  switch (EDX) {
    case 0: goto L_1087afd8;
    case 1: goto L_1087afe0;
    case 2: goto L_1087afec;
    case 3: goto L_1087b000;
    default: x86_unimpl("switch@0x1087af38 out of table"); return;
  }
  /* 1087af3f nop  */
  /* nop */
L_1087af40:;
  /* 1087af40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1087af42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1087af44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1087af46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1087af47 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1087af4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1087af4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087af4e jb 0x1087aedc */
  if (C.cf) goto L_1087aedc;
  /* 1087af50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1087af52 jmp dword ptr [edx*4 + 0x1087afc8] */
  switch (EDX) {
    case 0: goto L_1087afd8;
    case 1: goto L_1087afe0;
    case 2: goto L_1087afec;
    case 3: goto L_1087b000;
    default: x86_unimpl("switch@0x1087af52 out of table"); return;
  }
  /* 1087af59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1087af7c:;
  /* 1087af7c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1087af80 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1087af84:;
  /* 1087af84 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1087af88 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1087af8c:;
  /* 1087af8c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1087af90 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1087af94:;
  /* 1087af94 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1087af98 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1087af9c:;
  /* 1087af9c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1087afa0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1087afa4:;
  /* 1087afa4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1087afa8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1087afac:;
  /* 1087afac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1087afb0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1087afb4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1087afbb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1087afbd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1087afbf:;
  /* 1087afbf jmp dword ptr [edx*4 + 0x1087afc8] */
  switch (EDX) {
    case 0: goto L_1087afd8;
    case 1: goto L_1087afe0;
    case 2: goto L_1087afec;
    case 3: goto L_1087b000;
    default: x86_unimpl("switch@0x1087afbf out of table"); return;
  }
  /* 1087afc6 mov edi, edi */
  EDI = (EDI);
L_1087afd8:;
  /* 1087afd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087afdb pop esi */
  ESI = (pop32());
  /* 1087afdc pop edi */
  EDI = (pop32());
  /* 1087afdd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1087afde ret  */
  ESPCHK(0x1087ae80u, _esp0);
  ESP += 4; return;
  /* 1087afdf nop  */
  /* nop */
L_1087afe0:;
  /* 1087afe0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1087afe2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1087afe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087afe7 pop esi */
  ESI = (pop32());
  /* 1087afe8 pop edi */
  EDI = (pop32());
  /* 1087afe9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1087afea ret  */
  ESPCHK(0x1087ae80u, _esp0);
  ESP += 4; return;
  /* 1087afeb nop  */
  /* nop */
L_1087afec:;
  /* 1087afec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1087afee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1087aff0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1087aff3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1087aff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087aff9 pop esi */
  ESI = (pop32());
  /* 1087affa pop edi */
  EDI = (pop32());
  /* 1087affb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1087affc ret  */
  ESPCHK(0x1087ae80u, _esp0);
  ESP += 4; return;
  /* 1087affd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1087b000:;
  /* 1087b000 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1087b002 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1087b004 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1087b007 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1087b00a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1087b00d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1087b010 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087b013 pop esi */
  ESI = (pop32());
  /* 1087b014 pop edi */
  EDI = (pop32());
  /* 1087b015 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1087b016 ret  */
  ESPCHK(0x1087ae80u, _esp0);
  ESP += 4; return;
  /* 1087b017 nop  */
  /* nop */
L_1087b018:;
  /* 1087b018 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1087b01c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1087b020 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1087b026 jne 0x1087b04c */
  if (!C.zf) goto L_1087b04c;
  /* 1087b028 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1087b02b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1087b02e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b031 jb 0x1087b040 */
  if (C.cf) goto L_1087b040;
  /* 1087b033 std  */
  C.df=1;
  /* 1087b034 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1087b036 cld  */
  C.df=0;
  /* 1087b037 jmp dword ptr [edx*4 + 0x1087b160] */
  switch (EDX) {
    case 0: goto L_1087b170;
    case 1: goto L_1087b178;
    case 2: goto L_1087b188;
    case 3: goto L_1087b19c;
    default: x86_unimpl("switch@0x1087b037 out of table"); return;
  }
  /* 1087b03e mov edi, edi */
  EDI = (EDI);
L_1087b040:;
  /* 1087b040 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1087b042 jmp dword ptr [ecx*4 + 0x1087b110] */
  switch (ECX) {
    case 0: goto L_1087b157;
    default: x86_unimpl("switch@0x1087b042 out of table"); return;
  }
  /* 1087b049 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1087b04c:;
  /* 1087b04c mov eax, edi */
  EAX = (EDI);
  /* 1087b04e mov edx, 3 */
  EDX = (0x3u);
  /* 1087b053 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b056 jb 0x1087b064 */
  if (C.cf) goto L_1087b064;
  /* 1087b058 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1087b05b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087b05d jmp dword ptr [eax*4 + 0x1087b068] */
  switch (EAX) {
    case 1: goto L_1087b078;
    case 2: goto L_1087b098;
    case 3: goto L_1087b0c0;
    default: x86_unimpl("switch@0x1087b05d out of table"); return;
  }
L_1087b064:;
  /* 1087b064 jmp dword ptr [ecx*4 + 0x1087b160] */
  switch (ECX) {
    case 0: goto L_1087b170;
    case 1: goto L_1087b178;
    case 2: goto L_1087b188;
    case 3: goto L_1087b19c;
    default: x86_unimpl("switch@0x1087b064 out of table"); return;
  }
  /* 1087b06b nop  */
  /* nop */
L_1087b078:;
  /* 1087b078 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1087b07b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1087b07d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1087b080 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1087b081 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1087b084 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1087b085 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b088 jb 0x1087b040 */
  if (C.cf) goto L_1087b040;
  /* 1087b08a std  */
  C.df=1;
  /* 1087b08b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1087b08d cld  */
  C.df=0;
  /* 1087b08e jmp dword ptr [edx*4 + 0x1087b160] */
  switch (EDX) {
    case 0: goto L_1087b170;
    case 1: goto L_1087b178;
    case 2: goto L_1087b188;
    case 3: goto L_1087b19c;
    default: x86_unimpl("switch@0x1087b08e out of table"); return;
  }
  /* 1087b095 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1087b098:;
  /* 1087b098 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1087b09b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1087b09d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1087b0a0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1087b0a3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1087b0a6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1087b0a9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087b0ac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087b0af cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b0b2 jb 0x1087b040 */
  if (C.cf) goto L_1087b040;
  /* 1087b0b4 std  */
  C.df=1;
  /* 1087b0b5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1087b0b7 cld  */
  C.df=0;
  /* 1087b0b8 jmp dword ptr [edx*4 + 0x1087b160] */
  switch (EDX) {
    case 0: goto L_1087b170;
    case 1: goto L_1087b178;
    case 2: goto L_1087b188;
    case 3: goto L_1087b19c;
    default: x86_unimpl("switch@0x1087b0b8 out of table"); return;
  }
  /* 1087b0bf nop  */
  /* nop */
L_1087b0c0:;
  /* 1087b0c0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1087b0c3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1087b0c5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1087b0c8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1087b0cb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1087b0ce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1087b0d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1087b0d4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1087b0d7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087b0da sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087b0dd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b0e0 jb 0x1087b040 */
  if (C.cf) goto L_1087b040;
  /* 1087b0e6 std  */
  C.df=1;
  /* 1087b0e7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1087b0e9 cld  */
  C.df=0;
  /* 1087b0ea jmp dword ptr [edx*4 + 0x1087b160] */
  switch (EDX) {
    case 0: goto L_1087b170;
    case 1: goto L_1087b178;
    case 2: goto L_1087b188;
    case 3: goto L_1087b19c;
    default: x86_unimpl("switch@0x1087b0ea out of table"); return;
  }
  /* 1087b0f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1087b0f4 adc al, 0xb1 */
  { uint32_t _a=(AL),_b=(0xb1u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1087b0f6 xchg dword ptr [eax], edx */
  { uint32_t _t=(r32((uint32_t)(EAX))); w32((uint32_t)(EAX), (EDX)); EDX = (_t); }
  /* 1087b0f8 sbb al, 0xb1 */
  { uint32_t _a=(AL),_b=(0xb1u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1087b0fa xchg dword ptr [eax], edx */
  { uint32_t _t=(r32((uint32_t)(EAX))); w32((uint32_t)(EAX), (EDX)); EDX = (_t); }
  /* 1087b0fc and al, 0xb1 */
  { uint32_t _r=(AL)&(0xb1u); AL = (_r); fl_logic(_r,8); }
  /* 1087b0fe xchg dword ptr [eax], edx */
  { uint32_t _t=(r32((uint32_t)(EAX))); w32((uint32_t)(EAX), (EDX)); EDX = (_t); }
  /* 1087b100 sub al, 0xb1 */
  { uint32_t _a=(AL),_b=(0xb1u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1087b102 xchg dword ptr [eax], edx */
  { uint32_t _t=(r32((uint32_t)(EAX))); w32((uint32_t)(EAX), (EDX)); EDX = (_t); }
  /* 1087b104 xor al, 0xb1 */
  { uint32_t _r=(AL)^(0xb1u); AL = (_r); fl_logic(_r,8); }
  /* 1087b106 xchg dword ptr [eax], edx */
  { uint32_t _t=(r32((uint32_t)(EAX))); w32((uint32_t)(EAX), (EDX)); EDX = (_t); }
  /* 1087b108 cmp al, 0xb1 */
  { uint32_t _a=(AL),_b=(0xb1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1087b10a xchg dword ptr [eax], edx */
  { uint32_t _t=(r32((uint32_t)(EAX))); w32((uint32_t)(EAX), (EDX)); EDX = (_t); }
  /* 1087b10c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1087b10d mov cl, 0x87 */
  CL = (0x87u);
  /* 1087b114 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1087b118 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1087b11c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1087b120 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1087b124 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1087b128 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1087b12c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1087b130 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1087b134 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1087b138 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1087b13c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1087b140 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1087b144 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1087b148 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1087b14c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1087b153 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b155 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1087b157:;
  /* 1087b157 jmp dword ptr [edx*4 + 0x1087b160] */
  switch (EDX) {
    case 0: goto L_1087b170;
    case 1: goto L_1087b178;
    case 2: goto L_1087b188;
    case 3: goto L_1087b19c;
    default: x86_unimpl("switch@0x1087b157 out of table"); return;
  }
  /* 1087b15e mov edi, edi */
  EDI = (EDI);
L_1087b170:;
  /* 1087b170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087b173 pop esi */
  ESI = (pop32());
  /* 1087b174 pop edi */
  EDI = (pop32());
  /* 1087b175 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1087b176 ret  */
  ESPCHK(0x1087ae80u, _esp0);
  ESP += 4; return;
  /* 1087b177 nop  */
  /* nop */
L_1087b178:;
  /* 1087b178 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1087b17b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1087b17e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087b181 pop esi */
  ESI = (pop32());
  /* 1087b182 pop edi */
  EDI = (pop32());
  /* 1087b183 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1087b184 ret  */
  ESPCHK(0x1087ae80u, _esp0);
  ESP += 4; return;
  /* 1087b185 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1087b188:;
  /* 1087b188 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1087b18b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1087b18e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1087b191 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1087b194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087b197 pop esi */
  ESI = (pop32());
  /* 1087b198 pop edi */
  EDI = (pop32());
  /* 1087b199 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1087b19a ret  */
  ESPCHK(0x1087ae80u, _esp0);
  ESP += 4; return;
  /* 1087b19b nop  */
  /* nop */
L_1087b19c:;
  /* 1087b19c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1087b19f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1087b1a2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1087b1a5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1087b1a8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1087b1ab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1087b1ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087b1b1 pop esi */
  ESI = (pop32());
  /* 1087b1b2 pop edi */
  EDI = (pop32());
  /* 1087b1b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1087b1b4 ret  */
  ESPCHK(0x1087ae80u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1087b1c0 (104 bytes, 43 insns) */
void f_1087b1c0(void) {
  FTRACE(0x1087b1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087b1c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1087b1c1 push esi */
  push32((uint32_t)(ESI));
  /* 1087b1c2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1087b1c6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087b1c8 jne 0x1087b1e2 */
  if (!C.zf) goto L_1087b1e2;
  /* 1087b1ca mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1087b1ce mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1087b1d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087b1d4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1087b1d6 mov ebx, eax */
  EBX = (EAX);
  /* 1087b1d8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1087b1dc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1087b1de mov edx, ebx */
  EDX = (EBX);
  /* 1087b1e0 jmp 0x1087b223 */
  goto L_1087b223;
L_1087b1e2:;
  /* 1087b1e2 mov ecx, eax */
  ECX = (EAX);
  /* 1087b1e4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1087b1e8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1087b1ec mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1087b1f0:;
  /* 1087b1f0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1087b1f2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1087b1f4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1087b1f6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1087b1f8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087b1fa jne 0x1087b1f0 */
  if (!C.zf) goto L_1087b1f0;
  /* 1087b1fc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1087b1fe mov esi, eax */
  ESI = (EAX);
  /* 1087b200 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1087b204 mov ecx, eax */
  ECX = (EAX);
  /* 1087b206 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1087b20a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1087b20c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b20e jb 0x1087b21e */
  if (C.cf) goto L_1087b21e;
  /* 1087b210 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b214 ja 0x1087b21e */
  if ((!C.cf&&!C.zf)) goto L_1087b21e;
  /* 1087b216 jb 0x1087b21f */
  if (C.cf) goto L_1087b21f;
  /* 1087b218 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b21c jbe 0x1087b21f */
  if ((C.cf||C.zf)) goto L_1087b21f;
L_1087b21e:;
  /* 1087b21e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1087b21f:;
  /* 1087b21f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087b221 mov eax, esi */
  EAX = (ESI);
L_1087b223:;
  /* 1087b223 pop esi */
  ESI = (pop32());
  /* 1087b224 pop ebx */
  EBX = (pop32());
  /* 1087b225 ret 0x10 */
  ESPCHK(0x1087b1c0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1087b230 (117 bytes, 44 insns) */
void f_1087b230(void) {
  FTRACE(0x1087b230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087b230 push ebx */
  push32((uint32_t)(EBX));
  /* 1087b231 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1087b235 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087b237 jne 0x1087b251 */
  if (!C.zf) goto L_1087b251;
  /* 1087b239 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1087b23d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1087b241 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087b243 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1087b245 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1087b249 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1087b24b mov eax, edx */
  EAX = (EDX);
  /* 1087b24d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087b24f jmp 0x1087b2a1 */
  goto L_1087b2a1;
L_1087b251:;
  /* 1087b251 mov ecx, eax */
  ECX = (EAX);
  /* 1087b253 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1087b257 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1087b25b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1087b25f:;
  /* 1087b25f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1087b261 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1087b263 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1087b265 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1087b267 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087b269 jne 0x1087b25f */
  if (!C.zf) goto L_1087b25f;
  /* 1087b26b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1087b26d mov ecx, eax */
  ECX = (EAX);
  /* 1087b26f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1087b273 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1087b274 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1087b278 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b27a jb 0x1087b28a */
  if (C.cf) goto L_1087b28a;
  /* 1087b27c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b280 ja 0x1087b28a */
  if ((!C.cf&&!C.zf)) goto L_1087b28a;
  /* 1087b282 jb 0x1087b292 */
  if (C.cf) goto L_1087b292;
  /* 1087b284 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b288 jbe 0x1087b292 */
  if ((C.cf||C.zf)) goto L_1087b292;
L_1087b28a:;
  /* 1087b28a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087b28e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1087b292:;
  /* 1087b292 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087b296 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087b29a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1087b29c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1087b29e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1087b2a1:;
  /* 1087b2a1 pop ebx */
  EBX = (pop32());
  /* 1087b2a2 ret 0x10 */
  ESPCHK(0x1087b230u, _esp0);
  ESP += 20; return;
}

/* FUN_1000b2b0 @ 0x1087b2b0 (628 bytes, 214 insns) */
void f_1087b2b0(void) {
  FTRACE(0x1087b2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087b2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087b2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1087b2b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087b2b6 push ebx */
  push32((uint32_t)(EBX));
  /* 1087b2b7 push esi */
  push32((uint32_t)(ESI));
  /* 1087b2b8 push edi */
  push32((uint32_t)(EDI));
L_1087b2b9:;
  /* 1087b2b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b2bd jne 0x1087b2dd */
  if (!C.zf) goto L_1087b2dd;
  /* 1087b2bf push 0x1089c024 */
  push32((uint32_t)(0x1089c024u));
  /* 1087b2c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087b2c6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1087b2c8 push 0x1089c018 */
  push32((uint32_t)(0x1089c018u));
  /* 1087b2cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1087b2cf call 0x10873660 */
  push32(0x1087b2d4u); f_10873660();
  /* 1087b2d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b2d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b2da jne 0x1087b2dd */
  if (!C.zf) goto L_1087b2dd;
  /* 1087b2dc int3  */
  x86_unimpl("int3 @ 0x1087b2dc");
L_1087b2dd:;
  /* 1087b2dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087b2df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087b2e1 jne 0x1087b2b9 */
  if (!C.zf) goto L_1087b2b9;
  /* 1087b2e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087b2e6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087b2e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b2ec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1087b2ef mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1087b2f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b2f5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1087b2f8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1087b2fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087b300 je 0x1087b30f */
  if (C.zf) goto L_1087b30f;
  /* 1087b302 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b305 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1087b308 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1087b30b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087b30d je 0x1087b325 */
  if (C.zf) goto L_1087b325;
L_1087b30f:;
  /* 1087b30f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b312 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1087b315 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1087b317 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b31a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1087b31d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087b320 jmp 0x1087b51d */
  goto L_1087b51d;
L_1087b325:;
  /* 1087b325 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b328 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1087b32b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1087b32e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087b330 je 0x1087b37c */
  if (C.zf) goto L_1087b37c;
  /* 1087b332 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b335 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1087b33c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b33f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1087b342 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1087b345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087b347 je 0x1087b365 */
  if (C.zf) goto L_1087b365;
  /* 1087b349 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b34c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b34f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1087b352 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1087b354 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b357 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1087b35a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1087b35d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b360 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1087b363 jmp 0x1087b37c */
  goto L_1087b37c;
L_1087b365:;
  /* 1087b365 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b368 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1087b36b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1087b36e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b371 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1087b374 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087b377 jmp 0x1087b51d */
  goto L_1087b51d;
L_1087b37c:;
  /* 1087b37c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b37f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1087b382 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1087b385 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b388 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1087b38b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b38e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1087b391 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1087b394 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b397 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1087b39a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b39d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1087b3a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1087b3ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b3ae mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1087b3b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b3b4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1087b3b7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1087b3bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087b3bf jne 0x1087b3ef */
  if (!C.zf) goto L_1087b3ef;
  /* 1087b3c1 cmp dword ptr [ebp - 8], 0x1089f140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1089f140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b3c8 je 0x1087b3d3 */
  if (C.zf) goto L_1087b3d3;
  /* 1087b3ca cmp dword ptr [ebp - 8], 0x1089f160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1089f160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b3d1 jne 0x1087b3e3 */
  if (!C.zf) goto L_1087b3e3;
L_1087b3d3:;
  /* 1087b3d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087b3d6 push edx */
  push32((uint32_t)(EDX));
  /* 1087b3d7 call 0x1087d220 */
  push32(0x1087b3dcu); f_1087d220();
  /* 1087b3dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b3df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087b3e1 jne 0x1087b3ef */
  if (!C.zf) goto L_1087b3ef;
L_1087b3e3:;
  /* 1087b3e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b3e6 push eax */
  push32((uint32_t)(EAX));
  /* 1087b3e7 call 0x1087d150 */
  push32(0x1087b3ecu); f_1087d150();
  /* 1087b3ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087b3ef:;
  /* 1087b3ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b3f2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1087b3f5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1087b3fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087b3fd je 0x1087b4db */
  if (C.zf) goto L_1087b4db;
L_1087b403:;
  /* 1087b403 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b406 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b409 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1087b40b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087b40e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087b410 jge 0x1087b433 */
  if ((C.sf==C.of)) goto L_1087b433;
  /* 1087b412 push 0x1089bfd8 */
  push32((uint32_t)(0x1089bfd8u));
  /* 1087b417 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087b419 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1087b41e push 0x1089c018 */
  push32((uint32_t)(0x1089c018u));
  /* 1087b423 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087b425 call 0x10873660 */
  push32(0x1087b42au); f_10873660();
  /* 1087b42a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b42d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b430 jne 0x1087b433 */
  if (!C.zf) goto L_1087b433;
  /* 1087b432 int3  */
  x86_unimpl("int3 @ 0x1087b432");
L_1087b433:;
  /* 1087b433 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087b435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087b437 jne 0x1087b403 */
  if (!C.zf) goto L_1087b403;
  /* 1087b439 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b43c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b43f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1087b441 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087b444 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087b447 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b44a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1087b44d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b450 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b453 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1087b455 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b458 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1087b45b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087b45e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b461 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1087b464 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b468 jle 0x1087b486 */
  if ((C.zf||C.sf!=C.of)) goto L_1087b486;
  /* 1087b46a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b46d push ecx */
  push32((uint32_t)(ECX));
  /* 1087b46e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b471 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1087b474 push eax */
  push32((uint32_t)(EAX));
  /* 1087b475 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087b478 push ecx */
  push32((uint32_t)(ECX));
  /* 1087b479 call 0x1087ce40 */
  push32(0x1087b47eu); f_1087ce40();
  /* 1087b47e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b481 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1087b484 jmp 0x1087b4ce */
  goto L_1087b4ce;
L_1087b486:;
  /* 1087b486 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b48a je 0x1087b4a9 */
  if (C.zf) goto L_1087b4a9;
  /* 1087b48c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087b48f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1087b492 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087b495 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1087b498 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087b49b mov ecx, dword ptr [edx*4 + 0x108a2020] */
  ECX = (r32((uint32_t)(EDX*4 + 0x108a2020)));
  /* 1087b4a2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b4a4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1087b4a7 jmp 0x1087b4b0 */
  goto L_1087b4b0;
L_1087b4a9:;
  /* 1087b4a9 mov dword ptr [ebp - 0x14], 0x1089ea60 */
  w32((uint32_t)(EBP + -0x14), (0x1089ea60u));
L_1087b4b0:;
  /* 1087b4b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1087b4b3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1087b4b7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1087b4ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087b4bc je 0x1087b4ce */
  if (C.zf) goto L_1087b4ce;
  /* 1087b4be push 2 */
  push32((uint32_t)(0x2u));
  /* 1087b4c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087b4c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087b4c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1087b4c6 call 0x1087ccf0 */
  push32(0x1087b4cbu); f_1087ccf0();
  /* 1087b4cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087b4ce:;
  /* 1087b4ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b4d1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1087b4d4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1087b4d7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1087b4d9 jmp 0x1087b4f9 */
  goto L_1087b4f9;
L_1087b4db:;
  /* 1087b4db mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1087b4e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b4e5 push edx */
  push32((uint32_t)(EDX));
  /* 1087b4e6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1087b4e9 push eax */
  push32((uint32_t)(EAX));
  /* 1087b4ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087b4ed push ecx */
  push32((uint32_t)(ECX));
  /* 1087b4ee call 0x1087ce40 */
  push32(0x1087b4f3u); f_1087ce40();
  /* 1087b4f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b4f6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1087b4f9:;
  /* 1087b4f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087b4fc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b4ff je 0x1087b515 */
  if (C.zf) goto L_1087b515;
  /* 1087b501 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b504 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1087b507 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1087b50a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b50d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1087b510 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087b513 jmp 0x1087b51d */
  goto L_1087b51d;
L_1087b515:;
  /* 1087b515 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087b518 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1087b51d:;
  /* 1087b51d pop edi */
  EDI = (pop32());
  /* 1087b51e pop esi */
  ESI = (pop32());
  /* 1087b51f pop ebx */
  EBX = (pop32());
  /* 1087b520 mov esp, ebp */
  ESP = (EBP);
  /* 1087b522 pop ebp */
  EBP = (pop32());
  /* 1087b523 ret  */
  ESPCHK(0x1087b2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b530 @ 0x1087b530 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1087b530(void) {
  FTRACE(0x1087b530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087b530 push ebp */
  push32((uint32_t)(EBP));
  /* 1087b531 mov ebp, esp */
  EBP = (ESP);
  /* 1087b533 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087b539 push ebx */
  push32((uint32_t)(EBX));
  /* 1087b53a push esi */
  push32((uint32_t)(ESI));
  /* 1087b53b push edi */
  push32((uint32_t)(EDI));
  /* 1087b53c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1087b543 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1087b54d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1087b554:;
  /* 1087b554 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087b557 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1087b559 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1087b55c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1087b560 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087b563 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b566 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1087b569 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087b56b je 0x1087c147 */
  if (C.zf) goto L_1087c147;
  /* 1087b571 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b578 jl 0x1087c147 */
  if ((C.sf!=C.of)) goto L_1087c147;
  /* 1087b57e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1087b582 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b585 jl 0x1087b5a6 */
  if ((C.sf!=C.of)) goto L_1087b5a6;
  /* 1087b587 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1087b58b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b58e jg 0x1087b5a6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1087b5a6;
  /* 1087b590 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1087b594 movsx ecx, byte ptr [eax + 0x1089c010] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1089c010))));
  /* 1087b59b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1087b59e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1087b5a4 jmp 0x1087b5b0 */
  goto L_1087b5b0;
L_1087b5a6:;
  /* 1087b5a6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1087b5b0:;
  /* 1087b5b0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1087b5b6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1087b5b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087b5bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087b5bf movsx edx, byte ptr [ecx + eax*8 + 0x1089c030] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1089c030))));
  /* 1087b5c7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1087b5ca mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1087b5cd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087b5d0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1087b5d6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b5dd ja 0x1087c142 */
  if ((!C.cf&&!C.zf)) goto L_1087c142;
  /* 1087b5e3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1087b5e9 jmp dword ptr [ecx*4 + 0x1087c154] */
  switch (ECX) {
    case 0: goto L_1087b5f0;
    case 1: goto L_1087b68a;
    case 2: goto L_1087b6cc;
    case 3: goto L_1087b73b;
    case 4: goto L_1087b793;
    case 5: goto L_1087b7a2;
    case 6: goto L_1087b7ee;
    case 7: goto L_1087b881;
    case 8: goto L_1087b718;
    case 9: goto L_1087b723;
    case 10: goto L_1087b70e;
    case 11: goto L_1087b703;
    case 12: goto L_1087b72e;
    case 13: goto L_1087b736;
    default: x86_unimpl("switch@0x1087b5e9 out of table"); return;
  }
L_1087b5f0:;
  /* 1087b5f0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1087b5f7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1087b5fa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1087b600 mov eax, dword ptr [0x1089ec98] */
  EAX = (r32((uint32_t)(0x1089ec98)));
  /* 1087b605 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087b607 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1087b60b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1087b611 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087b613 je 0x1087b66d */
  if (C.zf) goto L_1087b66d;
  /* 1087b615 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1087b61b push edx */
  push32((uint32_t)(EDX));
  /* 1087b61c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087b61f push eax */
  push32((uint32_t)(EAX));
  /* 1087b620 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1087b624 push ecx */
  push32((uint32_t)(ECX));
  /* 1087b625 call 0x1087c260 */
  push32(0x1087b62au); f_1087c260();
  /* 1087b62a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b62d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087b630 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1087b632 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1087b635 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087b638 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b63b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1087b63e:;
  /* 1087b63e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1087b642 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087b644 jne 0x1087b667 */
  if (!C.zf) goto L_1087b667;
  /* 1087b646 push 0x1089c0b0 */
  push32((uint32_t)(0x1089c0b0u));
  /* 1087b64b push 0 */
  push32((uint32_t)(0x0u));
  /* 1087b64d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1087b652 push 0x1089c0a4 */
  push32((uint32_t)(0x1089c0a4u));
  /* 1087b657 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087b659 call 0x10873660 */
  push32(0x1087b65eu); f_10873660();
  /* 1087b65e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b661 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b664 jne 0x1087b667 */
  if (!C.zf) goto L_1087b667;
  /* 1087b666 int3  */
  x86_unimpl("int3 @ 0x1087b666");
L_1087b667:;
  /* 1087b667 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087b669 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087b66b jne 0x1087b63e */
  if (!C.zf) goto L_1087b63e;
L_1087b66d:;
  /* 1087b66d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1087b673 push ecx */
  push32((uint32_t)(ECX));
  /* 1087b674 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087b677 push edx */
  push32((uint32_t)(EDX));
  /* 1087b678 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1087b67c push eax */
  push32((uint32_t)(EAX));
  /* 1087b67d call 0x1087c260 */
  push32(0x1087b682u); f_1087c260();
  /* 1087b682 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b685 jmp 0x1087c142 */
  goto L_1087c142;
L_1087b68a:;
  /* 1087b68a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1087b691 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087b694 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1087b69a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1087b6a0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1087b6a6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1087b6ac mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1087b6af mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1087b6b6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1087b6c0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1087b6c7 jmp 0x1087c142 */
  goto L_1087c142;
L_1087b6cc:;
  /* 1087b6cc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1087b6d0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1087b6d6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1087b6dc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087b6df mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1087b6e5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b6ec ja 0x1087b736 */
  if ((!C.cf&&!C.zf)) goto L_1087b736;
  /* 1087b6ee mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1087b6f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087b6f6 mov al, byte ptr [ecx + 0x1087c18c] */
  AL = (r8((uint32_t)(ECX + 0x1087c18c)));
  /* 1087b6fc jmp dword ptr [eax*4 + 0x1087c174] */
  switch (EAX) {
    case 0: goto L_1087b718;
    case 1: goto L_1087b723;
    case 2: goto L_1087b70e;
    case 3: goto L_1087b703;
    case 4: goto L_1087b72e;
    case 5: goto L_1087b736;
    default: x86_unimpl("switch@0x1087b6fc out of table"); return;
  }
L_1087b703:;
  /* 1087b703 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b706 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1087b709 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1087b70c jmp 0x1087b736 */
  goto L_1087b736;
L_1087b70e:;
  /* 1087b70e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b711 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1087b713 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087b716 jmp 0x1087b736 */
  goto L_1087b736;
L_1087b718:;
  /* 1087b718 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b71b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1087b71e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1087b721 jmp 0x1087b736 */
  goto L_1087b736;
L_1087b723:;
  /* 1087b723 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b726 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1087b729 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1087b72c jmp 0x1087b736 */
  goto L_1087b736;
L_1087b72e:;
  /* 1087b72e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b731 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1087b733 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1087b736:;
  /* 1087b736 jmp 0x1087c142 */
  goto L_1087c142;
L_1087b73b:;
  /* 1087b73b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1087b73f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b742 jne 0x1087b777 */
  if (!C.zf) goto L_1087b777;
  /* 1087b744 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1087b747 push edx */
  push32((uint32_t)(EDX));
  /* 1087b748 call 0x1087c370 */
  push32(0x1087b74du); f_1087c370();
  /* 1087b74d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b750 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1087b756 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b75d jge 0x1087b775 */
  if ((C.sf==C.of)) goto L_1087b775;
  /* 1087b75f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b762 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1087b764 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087b767 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1087b76d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1087b76f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1087b775:;
  /* 1087b775 jmp 0x1087b78e */
  goto L_1087b78e;
L_1087b777:;
  /* 1087b777 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1087b77d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087b780 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1087b784 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1087b788 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1087b78e:;
  /* 1087b78e jmp 0x1087c142 */
  goto L_1087c142;
L_1087b793:;
  /* 1087b793 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1087b79d jmp 0x1087c142 */
  goto L_1087c142;
L_1087b7a2:;
  /* 1087b7a2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1087b7a6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b7a9 jne 0x1087b7d2 */
  if (!C.zf) goto L_1087b7d2;
  /* 1087b7ab lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1087b7ae push eax */
  push32((uint32_t)(EAX));
  /* 1087b7af call 0x1087c370 */
  push32(0x1087b7b4u); f_1087c370();
  /* 1087b7b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b7b7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1087b7bd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b7c4 jge 0x1087b7d0 */
  if ((C.sf==C.of)) goto L_1087b7d0;
  /* 1087b7c6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1087b7d0:;
  /* 1087b7d0 jmp 0x1087b7e9 */
  goto L_1087b7e9;
L_1087b7d2:;
  /* 1087b7d2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1087b7d8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087b7db movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1087b7df lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1087b7e3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1087b7e9:;
  /* 1087b7e9 jmp 0x1087c142 */
  goto L_1087c142;
L_1087b7ee:;
  /* 1087b7ee movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1087b7f2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1087b7f8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1087b7fe sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087b801 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1087b807 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b80e ja 0x1087b87c */
  if ((!C.cf&&!C.zf)) goto L_1087b87c;
  /* 1087b810 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1087b816 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087b818 mov al, byte ptr [ecx + 0x1087c1b1] */
  AL = (r8((uint32_t)(ECX + 0x1087c1b1)));
  /* 1087b81e jmp dword ptr [eax*4 + 0x1087c19d] */
  switch (EAX) {
    case 0: goto L_1087b830;
    case 1: goto L_1087b869;
    case 2: goto L_1087b825;
    case 3: goto L_1087b873;
    case 4: goto L_1087b87c;
    default: x86_unimpl("switch@0x1087b81e out of table"); return;
  }
L_1087b825:;
  /* 1087b825 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b828 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1087b82b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1087b82e jmp 0x1087b87c */
  goto L_1087b87c;
L_1087b830:;
  /* 1087b830 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087b833 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1087b836 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b839 jne 0x1087b85b */
  if (!C.zf) goto L_1087b85b;
  /* 1087b83b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087b83e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1087b842 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b845 jne 0x1087b85b */
  if (!C.zf) goto L_1087b85b;
  /* 1087b847 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087b84a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b84d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1087b850 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b853 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1087b856 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1087b859 jmp 0x1087b867 */
  goto L_1087b867;
L_1087b85b:;
  /* 1087b85b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1087b862 jmp 0x1087b5f0 */
  goto L_1087b5f0;
L_1087b867:;
  /* 1087b867 jmp 0x1087b87c */
  goto L_1087b87c;
L_1087b869:;
  /* 1087b869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b86c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1087b86e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087b871 jmp 0x1087b87c */
  goto L_1087b87c;
L_1087b873:;
  /* 1087b873 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b876 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1087b879 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1087b87c:;
  /* 1087b87c jmp 0x1087c142 */
  goto L_1087c142;
L_1087b881:;
  /* 1087b881 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1087b885 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1087b88b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1087b891 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087b894 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1087b89a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b8a1 ja 0x1087bf67 */
  if ((!C.cf&&!C.zf)) goto L_1087bf67;
  /* 1087b8a7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1087b8ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087b8af mov cl, byte ptr [edx + 0x1087c21c] */
  CL = (r8((uint32_t)(EDX + 0x1087c21c)));
  /* 1087b8b5 jmp dword ptr [ecx*4 + 0x1087c1e0] */
  switch (ECX) {
    case 0: goto L_1087b8bc;
    case 1: goto L_1087bb50;
    case 2: goto L_1087b9e0;
    case 3: goto L_1087bc89;
    case 4: goto L_1087b94b;
    case 5: goto L_1087b8d1;
    case 6: goto L_1087bc5b;
    case 7: goto L_1087bb60;
    case 8: goto L_1087bb05;
    case 9: goto L_1087bcd5;
    case 10: goto L_1087bc7f;
    case 11: goto L_1087b9f6;
    case 12: goto L_1087bc73;
    case 13: goto L_1087bc95;
    case 14: goto L_1087bf67;
    default: x86_unimpl("switch@0x1087b8b5 out of table"); return;
  }
L_1087b8bc:;
  /* 1087b8bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b8bf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1087b8c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087b8c6 jne 0x1087b8d1 */
  if (!C.zf) goto L_1087b8d1;
  /* 1087b8c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b8cb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1087b8ce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1087b8d1:;
  /* 1087b8d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b8d4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1087b8da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087b8dc je 0x1087b917 */
  if (C.zf) goto L_1087b917;
  /* 1087b8de lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1087b8e1 push eax */
  push32((uint32_t)(EAX));
  /* 1087b8e2 call 0x1087c3b0 */
  push32(0x1087b8e7u); f_1087c3b0();
  /* 1087b8e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b8ea mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1087b8ee mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1087b8f2 push ecx */
  push32((uint32_t)(ECX));
  /* 1087b8f3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1087b8f9 push edx */
  push32((uint32_t)(EDX));
  /* 1087b8fa call 0x1087d490 */
  push32(0x1087b8ffu); f_1087d490();
  /* 1087b8ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b902 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1087b905 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b909 jge 0x1087b915 */
  if ((C.sf==C.of)) goto L_1087b915;
  /* 1087b90b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1087b915:;
  /* 1087b915 jmp 0x1087b93d */
  goto L_1087b93d;
L_1087b917:;
  /* 1087b917 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1087b91a push eax */
  push32((uint32_t)(EAX));
  /* 1087b91b call 0x1087c370 */
  push32(0x1087b920u); f_1087c370();
  /* 1087b920 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b923 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1087b92a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1087b930 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1087b936 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1087b93d:;
  /* 1087b93d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1087b943 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1087b946 jmp 0x1087bf67 */
  goto L_1087bf67;
L_1087b94b:;
  /* 1087b94b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1087b94e push eax */
  push32((uint32_t)(EAX));
  /* 1087b94f call 0x1087c370 */
  push32(0x1087b954u); f_1087c370();
  /* 1087b954 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b957 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1087b95d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b964 je 0x1087b972 */
  if (C.zf) goto L_1087b972;
  /* 1087b966 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1087b96c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b970 jne 0x1087b98c */
  if (!C.zf) goto L_1087b98c;
L_1087b972:;
  /* 1087b972 mov edx, dword ptr [0x1089efb0] */
  EDX = (r32((uint32_t)(0x1089efb0)));
  /* 1087b978 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1087b97b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087b97e push eax */
  push32((uint32_t)(EAX));
  /* 1087b97f call 0x108773d0 */
  push32(0x1087b984u); f_108773d0();
  /* 1087b984 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087b987 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1087b98a jmp 0x1087b9db */
  goto L_1087b9db;
L_1087b98c:;
  /* 1087b98c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b98f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1087b995 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087b997 je 0x1087b9bc */
  if (C.zf) goto L_1087b9bc;
  /* 1087b999 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1087b99f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1087b9a2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1087b9a5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1087b9ab movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1087b9ae shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1087b9b0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1087b9b3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1087b9ba jmp 0x1087b9db */
  goto L_1087b9db;
L_1087b9bc:;
  /* 1087b9bc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1087b9c3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1087b9c9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1087b9cc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1087b9cf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1087b9d5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1087b9d8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1087b9db:;
  /* 1087b9db jmp 0x1087bf67 */
  goto L_1087bf67;
L_1087b9e0:;
  /* 1087b9e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b9e3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1087b9e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087b9eb jne 0x1087b9f6 */
  if (!C.zf) goto L_1087b9f6;
  /* 1087b9ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087b9f0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1087b9f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1087b9f6:;
  /* 1087b9f6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087b9fd jne 0x1087ba0b */
  if (!C.zf) goto L_1087ba0b;
  /* 1087b9ff mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1087ba09 jmp 0x1087ba17 */
  goto L_1087ba17;
L_1087ba0b:;
  /* 1087ba0b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1087ba11 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1087ba17:;
  /* 1087ba17 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1087ba1d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1087ba23 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1087ba26 push edx */
  push32((uint32_t)(EDX));
  /* 1087ba27 call 0x1087c370 */
  push32(0x1087ba2cu); f_1087c370();
  /* 1087ba2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ba2f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1087ba32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087ba35 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1087ba3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087ba3c je 0x1087baa6 */
  if (C.zf) goto L_1087baa6;
  /* 1087ba3e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ba42 jne 0x1087ba4d */
  if (!C.zf) goto L_1087ba4d;
  /* 1087ba44 mov ecx, dword ptr [0x1089efb4] */
  ECX = (r32((uint32_t)(0x1089efb4)));
  /* 1087ba4a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1087ba4d:;
  /* 1087ba4d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1087ba54 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087ba57 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1087ba5d:;
  /* 1087ba5d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1087ba63 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1087ba69 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087ba6c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1087ba72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087ba74 je 0x1087ba96 */
  if (C.zf) goto L_1087ba96;
  /* 1087ba76 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1087ba7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087ba7e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1087ba81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087ba83 je 0x1087ba96 */
  if (C.zf) goto L_1087ba96;
  /* 1087ba85 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1087ba8b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ba8e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1087ba94 jmp 0x1087ba5d */
  goto L_1087ba5d;
L_1087ba96:;
  /* 1087ba96 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1087ba9c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087ba9f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1087baa1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1087baa4 jmp 0x1087bb00 */
  goto L_1087bb00;
L_1087baa6:;
  /* 1087baa6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087baaa jne 0x1087bab4 */
  if (!C.zf) goto L_1087bab4;
  /* 1087baac mov eax, dword ptr [0x1089efb0] */
  EAX = (r32((uint32_t)(0x1089efb0)));
  /* 1087bab1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1087bab4:;
  /* 1087bab4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087bab7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1087babd:;
  /* 1087babd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1087bac3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1087bac9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087bacc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1087bad2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087bad4 je 0x1087baf4 */
  if (C.zf) goto L_1087baf4;
  /* 1087bad6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1087badc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1087badf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087bae1 je 0x1087baf4 */
  if (C.zf) goto L_1087baf4;
  /* 1087bae3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1087bae9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087baec mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1087baf2 jmp 0x1087babd */
  goto L_1087babd;
L_1087baf4:;
  /* 1087baf4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1087bafa sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087bafd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1087bb00:;
  /* 1087bb00 jmp 0x1087bf67 */
  goto L_1087bf67;
L_1087bb05:;
  /* 1087bb05 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1087bb08 push edx */
  push32((uint32_t)(EDX));
  /* 1087bb09 call 0x1087c370 */
  push32(0x1087bb0eu); f_1087c370();
  /* 1087bb0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087bb11 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1087bb17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bb1a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1087bb1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087bb1f je 0x1087bb33 */
  if (C.zf) goto L_1087bb33;
  /* 1087bb21 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1087bb27 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1087bb2e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1087bb31 jmp 0x1087bb41 */
  goto L_1087bb41;
L_1087bb33:;
  /* 1087bb33 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1087bb39 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1087bb3f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1087bb41:;
  /* 1087bb41 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1087bb4b jmp 0x1087bf67 */
  goto L_1087bf67;
L_1087bb50:;
  /* 1087bb50 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1087bb57 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1087bb5a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1087bb5d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1087bb60:;
  /* 1087bb60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bb63 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1087bb65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087bb68 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1087bb6e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1087bb71 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087bb78 jge 0x1087bb86 */
  if ((C.sf==C.of)) goto L_1087bb86;
  /* 1087bb7a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1087bb84 jmp 0x1087bba2 */
  goto L_1087bba2;
L_1087bb86:;
  /* 1087bb86 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087bb8d jne 0x1087bba2 */
  if (!C.zf) goto L_1087bba2;
  /* 1087bb8f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1087bb93 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087bb96 jne 0x1087bba2 */
  if (!C.zf) goto L_1087bba2;
  /* 1087bb98 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1087bba2:;
  /* 1087bba2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087bba5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087bba8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1087bbab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087bbae sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087bbb1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1087bbb3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1087bbb6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1087bbbc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1087bbc2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087bbc5 push ecx */
  push32((uint32_t)(ECX));
  /* 1087bbc6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1087bbcc push edx */
  push32((uint32_t)(EDX));
  /* 1087bbcd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1087bbd1 push eax */
  push32((uint32_t)(EAX));
  /* 1087bbd2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087bbd5 push ecx */
  push32((uint32_t)(ECX));
  /* 1087bbd6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1087bbdc push edx */
  push32((uint32_t)(EDX));
  /* 1087bbdd call dword ptr [0x1089f3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1089f3a0))), 0x1087bbe3u);
  /* 1087bbe3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087bbe6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bbe9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1087bbee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087bbf0 je 0x1087bc08 */
  if (C.zf) goto L_1087bc08;
  /* 1087bbf2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087bbf9 jne 0x1087bc08 */
  if (!C.zf) goto L_1087bc08;
  /* 1087bbfb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087bbfe push ecx */
  push32((uint32_t)(ECX));
  /* 1087bbff call dword ptr [0x1089f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1089f3ac))), 0x1087bc05u);
  /* 1087bc05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087bc08:;
  /* 1087bc08 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1087bc0c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087bc0f jne 0x1087bc2a */
  if (!C.zf) goto L_1087bc2a;
  /* 1087bc11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bc14 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1087bc19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087bc1b jne 0x1087bc2a */
  if (!C.zf) goto L_1087bc2a;
  /* 1087bc1d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087bc20 push ecx */
  push32((uint32_t)(ECX));
  /* 1087bc21 call dword ptr [0x1089f3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1089f3a4))), 0x1087bc27u);
  /* 1087bc27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087bc2a:;
  /* 1087bc2a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087bc2d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1087bc30 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087bc33 jne 0x1087bc47 */
  if (!C.zf) goto L_1087bc47;
  /* 1087bc35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bc38 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1087bc3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1087bc3e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087bc41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087bc44 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1087bc47:;
  /* 1087bc47 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087bc4a push eax */
  push32((uint32_t)(EAX));
  /* 1087bc4b call 0x108773d0 */
  push32(0x1087bc50u); f_108773d0();
  /* 1087bc50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087bc53 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1087bc56 jmp 0x1087bf67 */
  goto L_1087bf67;
L_1087bc5b:;
  /* 1087bc5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bc5e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1087bc61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1087bc64 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1087bc6e jmp 0x1087bcf5 */
  goto L_1087bcf5;
L_1087bc73:;
  /* 1087bc73 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1087bc7d jmp 0x1087bcf5 */
  goto L_1087bcf5;
L_1087bc7f:;
  /* 1087bc7f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1087bc89:;
  /* 1087bc89 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1087bc93 jmp 0x1087bc9f */
  goto L_1087bc9f;
L_1087bc95:;
  /* 1087bc95 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1087bc9f:;
  /* 1087bc9f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1087bca9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bcac and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1087bcb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087bcb4 je 0x1087bcd3 */
  if (C.zf) goto L_1087bcd3;
  /* 1087bcb6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1087bcbd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1087bcc3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087bcc6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1087bccc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1087bcd3:;
  /* 1087bcd3 jmp 0x1087bcf5 */
  goto L_1087bcf5;
L_1087bcd5:;
  /* 1087bcd5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1087bcdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bce2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1087bce8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087bcea je 0x1087bcf5 */
  if (C.zf) goto L_1087bcf5;
  /* 1087bcec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bcef or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1087bcf2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1087bcf5:;
  /* 1087bcf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bcf8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1087bcfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087bcff je 0x1087bd1e */
  if (C.zf) goto L_1087bd1e;
  /* 1087bd01 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1087bd04 push ecx */
  push32((uint32_t)(ECX));
  /* 1087bd05 call 0x1087c390 */
  push32(0x1087bd0au); f_1087c390();
  /* 1087bd0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087bd0d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1087bd13 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1087bd19 jmp 0x1087bdaf */
  goto L_1087bdaf;
L_1087bd1e:;
  /* 1087bd1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bd21 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1087bd24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087bd26 je 0x1087bd70 */
  if (C.zf) goto L_1087bd70;
  /* 1087bd28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bd2b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1087bd2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087bd30 je 0x1087bd50 */
  if (C.zf) goto L_1087bd50;
  /* 1087bd32 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1087bd35 push ecx */
  push32((uint32_t)(ECX));
  /* 1087bd36 call 0x1087c370 */
  push32(0x1087bd3bu); f_1087c370();
  /* 1087bd3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087bd3e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1087bd41 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1087bd42 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1087bd48 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1087bd4e jmp 0x1087bd6e */
  goto L_1087bd6e;
L_1087bd50:;
  /* 1087bd50 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1087bd53 push edx */
  push32((uint32_t)(EDX));
  /* 1087bd54 call 0x1087c370 */
  push32(0x1087bd59u); f_1087c370();
  /* 1087bd59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087bd5c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087bd61 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1087bd62 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1087bd68 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1087bd6e:;
  /* 1087bd6e jmp 0x1087bdaf */
  goto L_1087bdaf;
L_1087bd70:;
  /* 1087bd70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bd73 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1087bd76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087bd78 je 0x1087bd95 */
  if (C.zf) goto L_1087bd95;
  /* 1087bd7a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1087bd7d push ecx */
  push32((uint32_t)(ECX));
  /* 1087bd7e call 0x1087c370 */
  push32(0x1087bd83u); f_1087c370();
  /* 1087bd83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087bd86 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1087bd87 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1087bd8d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1087bd93 jmp 0x1087bdaf */
  goto L_1087bdaf;
L_1087bd95:;
  /* 1087bd95 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1087bd98 push edx */
  push32((uint32_t)(EDX));
  /* 1087bd99 call 0x1087c370 */
  push32(0x1087bd9eu); f_1087c370();
  /* 1087bd9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087bda1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087bda3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1087bda9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1087bdaf:;
  /* 1087bdaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bdb2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1087bdb5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087bdb7 je 0x1087bdf7 */
  if (C.zf) goto L_1087bdf7;
  /* 1087bdb9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087bdc0 jg 0x1087bdf7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1087bdf7;
  /* 1087bdc2 jl 0x1087bdcd */
  if ((C.sf!=C.of)) goto L_1087bdcd;
  /* 1087bdc4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087bdcb jae 0x1087bdf7 */
  if (!C.cf) goto L_1087bdf7;
L_1087bdcd:;
  /* 1087bdcd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1087bdd3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1087bdd5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1087bddb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087bdde neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1087bde0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1087bde6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1087bdec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bdef or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1087bdf2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1087bdf5 jmp 0x1087be0f */
  goto L_1087be0f;
L_1087bdf7:;
  /* 1087bdf7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1087bdfd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1087be03 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1087be09 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1087be0f:;
  /* 1087be0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087be12 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1087be18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087be1a jne 0x1087be37 */
  if (!C.zf) goto L_1087be37;
  /* 1087be1c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1087be22 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1087be28 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1087be2b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1087be31 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1087be37:;
  /* 1087be37 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087be3e jge 0x1087be4c */
  if ((C.sf==C.of)) goto L_1087be4c;
  /* 1087be40 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1087be4a jmp 0x1087be55 */
  goto L_1087be55;
L_1087be4c:;
  /* 1087be4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087be4f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1087be52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1087be55:;
  /* 1087be55 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1087be5b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1087be61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087be63 jne 0x1087be6c */
  if (!C.zf) goto L_1087be6c;
  /* 1087be65 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1087be6c:;
  /* 1087be6c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1087be6f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1087be72:;
  /* 1087be72 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1087be78 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1087be7e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087be81 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1087be87 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087be89 jg 0x1087be9f */
  if ((!C.zf&&C.sf==C.of)) goto L_1087be9f;
  /* 1087be8b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1087be91 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1087be97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087be99 je 0x1087bf20 */
  if (C.zf) goto L_1087bf20;
L_1087be9f:;
  /* 1087be9f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1087bea5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1087bea6 push edx */
  push32((uint32_t)(EDX));
  /* 1087bea7 push eax */
  push32((uint32_t)(EAX));
  /* 1087bea8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1087beae push edx */
  push32((uint32_t)(EDX));
  /* 1087beaf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1087beb5 push eax */
  push32((uint32_t)(EAX));
  /* 1087beb6 call 0x1087b230 */
  push32(0x1087bebbu); f_1087b230();
  /* 1087bebb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087bebe mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1087bec4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1087beca cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1087becb push edx */
  push32((uint32_t)(EDX));
  /* 1087becc push eax */
  push32((uint32_t)(EAX));
  /* 1087becd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1087bed3 push ecx */
  push32((uint32_t)(ECX));
  /* 1087bed4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1087beda push edx */
  push32((uint32_t)(EDX));
  /* 1087bedb call 0x1087b1c0 */
  push32(0x1087bee0u); f_1087b1c0();
  /* 1087bee0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1087bee6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1087beec cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087bef3 jle 0x1087bf07 */
  if ((C.zf||C.sf!=C.of)) goto L_1087bf07;
  /* 1087bef5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1087befb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087bf01 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1087bf07:;
  /* 1087bf07 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087bf0a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1087bf10 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1087bf12 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087bf15 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087bf18 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1087bf1b jmp 0x1087be72 */
  goto L_1087be72;
L_1087bf20:;
  /* 1087bf20 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1087bf23 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087bf26 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1087bf29 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087bf2c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087bf2f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1087bf32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bf35 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1087bf3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087bf3c je 0x1087bf67 */
  if (C.zf) goto L_1087bf67;
  /* 1087bf3e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087bf41 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1087bf44 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087bf47 jne 0x1087bf4f */
  if (!C.zf) goto L_1087bf4f;
  /* 1087bf49 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087bf4d jne 0x1087bf67 */
  if (!C.zf) goto L_1087bf67;
L_1087bf4f:;
  /* 1087bf4f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087bf52 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087bf55 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1087bf58 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087bf5b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1087bf5e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087bf61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087bf64 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1087bf67:;
  /* 1087bf67 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087bf6e jne 0x1087c142 */
  if (!C.zf) goto L_1087c142;
  /* 1087bf74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bf77 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1087bf7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087bf7c je 0x1087bfcd */
  if (C.zf) goto L_1087bfcd;
  /* 1087bf7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bf81 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1087bf87 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087bf89 je 0x1087bf9b */
  if (C.zf) goto L_1087bf9b;
  /* 1087bf8b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1087bf92 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1087bf99 jmp 0x1087bfcd */
  goto L_1087bfcd;
L_1087bf9b:;
  /* 1087bf9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bf9e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1087bfa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087bfa3 je 0x1087bfb5 */
  if (C.zf) goto L_1087bfb5;
  /* 1087bfa5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1087bfac mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1087bfb3 jmp 0x1087bfcd */
  goto L_1087bfcd;
L_1087bfb5:;
  /* 1087bfb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bfb8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1087bfbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087bfbd je 0x1087bfcd */
  if (C.zf) goto L_1087bfcd;
  /* 1087bfbf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1087bfc6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1087bfcd:;
  /* 1087bfcd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1087bfd3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087bfd6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087bfd9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1087bfdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087bfe2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1087bfe5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087bfe7 jne 0x1087c005 */
  if (!C.zf) goto L_1087c005;
  /* 1087bfe9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1087bfef push eax */
  push32((uint32_t)(EAX));
  /* 1087bff0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087bff3 push ecx */
  push32((uint32_t)(ECX));
  /* 1087bff4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1087bffa push edx */
  push32((uint32_t)(EDX));
  /* 1087bffb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1087bffd call 0x1087c2e0 */
  push32(0x1087c002u); f_1087c2e0();
  /* 1087c002 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087c005:;
  /* 1087c005 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1087c00b push eax */
  push32((uint32_t)(EAX));
  /* 1087c00c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c00f push ecx */
  push32((uint32_t)(ECX));
  /* 1087c010 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087c013 push edx */
  push32((uint32_t)(EDX));
  /* 1087c014 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1087c01a push eax */
  push32((uint32_t)(EAX));
  /* 1087c01b call 0x1087c320 */
  push32(0x1087c020u); f_1087c320();
  /* 1087c020 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c023 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087c026 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1087c029 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087c02b je 0x1087c053 */
  if (C.zf) goto L_1087c053;
  /* 1087c02d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087c030 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1087c033 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087c035 jne 0x1087c053 */
  if (!C.zf) goto L_1087c053;
  /* 1087c037 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1087c03d push eax */
  push32((uint32_t)(EAX));
  /* 1087c03e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c041 push ecx */
  push32((uint32_t)(ECX));
  /* 1087c042 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1087c048 push edx */
  push32((uint32_t)(EDX));
  /* 1087c049 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1087c04b call 0x1087c2e0 */
  push32(0x1087c050u); f_1087c2e0();
  /* 1087c050 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087c053:;
  /* 1087c053 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c057 je 0x1087c101 */
  if (C.zf) goto L_1087c101;
  /* 1087c05d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c061 jle 0x1087c101 */
  if ((C.zf||C.sf!=C.of)) goto L_1087c101;
  /* 1087c067 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087c06a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1087c070 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087c073 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1087c079:;
  /* 1087c079 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1087c07f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1087c085 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087c088 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1087c08e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087c090 je 0x1087c0ff */
  if (C.zf) goto L_1087c0ff;
  /* 1087c092 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1087c098 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1087c09b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1087c0a2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1087c0a9 push eax */
  push32((uint32_t)(EAX));
  /* 1087c0aa lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1087c0b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1087c0b1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1087c0b7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c0ba mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1087c0c0 call 0x1087d490 */
  push32(0x1087c0c5u); f_1087d490();
  /* 1087c0c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c0c8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1087c0ce cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c0d5 jg 0x1087c0d9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1087c0d9;
  /* 1087c0d7 jmp 0x1087c0ff */
  goto L_1087c0ff;
L_1087c0d9:;
  /* 1087c0d9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1087c0df push eax */
  push32((uint32_t)(EAX));
  /* 1087c0e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c0e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1087c0e4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1087c0ea push edx */
  push32((uint32_t)(EDX));
  /* 1087c0eb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1087c0f1 push eax */
  push32((uint32_t)(EAX));
  /* 1087c0f2 call 0x1087c320 */
  push32(0x1087c0f7u); f_1087c320();
  /* 1087c0f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c0fa jmp 0x1087c079 */
  goto L_1087c079;
L_1087c0ff:;
  /* 1087c0ff jmp 0x1087c11c */
  goto L_1087c11c;
L_1087c101:;
  /* 1087c101 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1087c107 push ecx */
  push32((uint32_t)(ECX));
  /* 1087c108 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c10b push edx */
  push32((uint32_t)(EDX));
  /* 1087c10c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087c10f push eax */
  push32((uint32_t)(EAX));
  /* 1087c110 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087c113 push ecx */
  push32((uint32_t)(ECX));
  /* 1087c114 call 0x1087c320 */
  push32(0x1087c119u); f_1087c320();
  /* 1087c119 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087c11c:;
  /* 1087c11c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087c11f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1087c122 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087c124 je 0x1087c142 */
  if (C.zf) goto L_1087c142;
  /* 1087c126 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1087c12c push eax */
  push32((uint32_t)(EAX));
  /* 1087c12d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c130 push ecx */
  push32((uint32_t)(ECX));
  /* 1087c131 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1087c137 push edx */
  push32((uint32_t)(EDX));
  /* 1087c138 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1087c13a call 0x1087c2e0 */
  push32(0x1087c13fu); f_1087c2e0();
  /* 1087c13f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087c142:;
  /* 1087c142 jmp 0x1087b554 */
  goto L_1087b554;
L_1087c147:;
  /* 1087c147 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1087c14d pop edi */
  EDI = (pop32());
  /* 1087c14e pop esi */
  ESI = (pop32());
  /* 1087c14f pop ebx */
  EBX = (pop32());
  /* 1087c150 mov esp, ebp */
  ESP = (EBP);
  /* 1087c152 pop ebp */
  EBP = (pop32());
  /* 1087c153 ret  */
  ESPCHK(0x1087b530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c260 @ 0x1087c260 (119 bytes, 44 insns) */
void f_1087c260(void) {
  FTRACE(0x1087c260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087c260 push ebp */
  push32((uint32_t)(EBP));
  /* 1087c261 mov ebp, esp */
  EBP = (ESP);
  /* 1087c263 push ecx */
  push32((uint32_t)(ECX));
  /* 1087c264 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087c267 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1087c26a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087c26d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087c270 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1087c273 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087c276 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c27a jl 0x1087c2a2 */
  if ((C.sf!=C.of)) goto L_1087c2a2;
  /* 1087c27c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087c27f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1087c281 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1087c284 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1087c286 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1087c28a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1087c290 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1087c293 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087c296 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1087c298 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c29b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087c29e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1087c2a0 jmp 0x1087c2b5 */
  goto L_1087c2b5;
L_1087c2a2:;
  /* 1087c2a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087c2a5 push edx */
  push32((uint32_t)(EDX));
  /* 1087c2a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c2a9 push eax */
  push32((uint32_t)(EAX));
  /* 1087c2aa call 0x1087b2b0 */
  push32(0x1087c2afu); f_1087b2b0();
  /* 1087c2af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c2b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1087c2b5:;
  /* 1087c2b5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c2b9 jne 0x1087c2c6 */
  if (!C.zf) goto L_1087c2c6;
  /* 1087c2bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087c2be mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1087c2c4 jmp 0x1087c2d3 */
  goto L_1087c2d3;
L_1087c2c6:;
  /* 1087c2c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087c2c9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1087c2cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c2ce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087c2d1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1087c2d3:;
  /* 1087c2d3 mov esp, ebp */
  ESP = (EBP);
  /* 1087c2d5 pop ebp */
  EBP = (pop32());
  /* 1087c2d6 ret  */
  ESPCHK(0x1087c260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2e0 @ 0x1087c2e0 (53 bytes, 23 insns) */
void f_1087c2e0(void) {
  FTRACE(0x1087c2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087c2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087c2e1 mov ebp, esp */
  EBP = (ESP);
L_1087c2e3:;
  /* 1087c2e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087c2e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087c2e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087c2ec mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1087c2ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087c2f1 jle 0x1087c313 */
  if ((C.zf||C.sf!=C.of)) goto L_1087c313;
  /* 1087c2f3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1087c2f6 push edx */
  push32((uint32_t)(EDX));
  /* 1087c2f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087c2fa push eax */
  push32((uint32_t)(EAX));
  /* 1087c2fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c2fe push ecx */
  push32((uint32_t)(ECX));
  /* 1087c2ff call 0x1087c260 */
  push32(0x1087c304u); f_1087c260();
  /* 1087c304 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c307 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1087c30a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c30d jne 0x1087c311 */
  if (!C.zf) goto L_1087c311;
  /* 1087c30f jmp 0x1087c313 */
  goto L_1087c313;
L_1087c311:;
  /* 1087c311 jmp 0x1087c2e3 */
  goto L_1087c2e3;
L_1087c313:;
  /* 1087c313 pop ebp */
  EBP = (pop32());
  /* 1087c314 ret  */
  ESPCHK(0x1087c2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c320 @ 0x1087c320 (74 bytes, 31 insns) */
void f_1087c320(void) {
  FTRACE(0x1087c320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087c320 push ebp */
  push32((uint32_t)(EBP));
  /* 1087c321 mov ebp, esp */
  EBP = (ESP);
  /* 1087c323 push ecx */
  push32((uint32_t)(ECX));
L_1087c324:;
  /* 1087c324 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087c327 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087c32a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087c32d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1087c330 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087c332 jle 0x1087c366 */
  if ((C.zf||C.sf!=C.of)) goto L_1087c366;
  /* 1087c334 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1087c337 push edx */
  push32((uint32_t)(EDX));
  /* 1087c338 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087c33b push eax */
  push32((uint32_t)(EAX));
  /* 1087c33c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c33f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1087c342 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1087c345 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087c348 push eax */
  push32((uint32_t)(EAX));
  /* 1087c349 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c34c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c34f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1087c352 call 0x1087c260 */
  push32(0x1087c357u); f_1087c260();
  /* 1087c357 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c35a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1087c35d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c360 jne 0x1087c364 */
  if (!C.zf) goto L_1087c364;
  /* 1087c362 jmp 0x1087c366 */
  goto L_1087c366;
L_1087c364:;
  /* 1087c364 jmp 0x1087c324 */
  goto L_1087c324;
L_1087c366:;
  /* 1087c366 mov esp, ebp */
  ESP = (EBP);
  /* 1087c368 pop ebp */
  EBP = (pop32());
  /* 1087c369 ret  */
  ESPCHK(0x1087c320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c370 @ 0x1087c370 (26 bytes, 12 insns) */
void f_1087c370(void) {
  FTRACE(0x1087c370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087c370 push ebp */
  push32((uint32_t)(EBP));
  /* 1087c371 mov ebp, esp */
  EBP = (ESP);
  /* 1087c373 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c376 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1087c378 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c37b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c37e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1087c380 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c383 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1087c385 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1087c388 pop ebp */
  EBP = (pop32());
  /* 1087c389 ret  */
  ESPCHK(0x1087c370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c390 @ 0x1087c390 (31 bytes, 14 insns) */
void f_1087c390(void) {
  FTRACE(0x1087c390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087c390 push ebp */
  push32((uint32_t)(EBP));
  /* 1087c391 mov ebp, esp */
  EBP = (ESP);
  /* 1087c393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c396 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1087c398 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c39b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c39e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1087c3a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c3a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1087c3a5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087c3a8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1087c3aa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1087c3ad pop ebp */
  EBP = (pop32());
  /* 1087c3ae ret  */
  ESPCHK(0x1087c390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3b0 @ 0x1087c3b0 (27 bytes, 12 insns) */
void f_1087c3b0(void) {
  FTRACE(0x1087c3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087c3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087c3b1 mov ebp, esp */
  EBP = (ESP);
  /* 1087c3b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c3b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1087c3b8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c3bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c3be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1087c3c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c3c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1087c3c5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1087c3c9 pop ebp */
  EBP = (pop32());
  /* 1087c3ca ret  */
  ESPCHK(0x1087c3b0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1087c3d0 (145 bytes, 42 insns) */
void f_1087c3d0(void) {
  FTRACE(0x1087c3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087c3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087c3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1087c3d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1087c3d4 call 0x1087c480 */
  push32(0x1087c3d9u); f_1087c480();
  /* 1087c3d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c3dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1087c3de mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1087c3e5 jmp 0x1087c3f0 */
  goto L_1087c3f0;
L_1087c3e7:;
  /* 1087c3e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087c3ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c3ed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1087c3f0:;
  /* 1087c3f0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c3f4 jae 0x1087c41a */
  if (!C.cf) goto L_1087c41a;
  /* 1087c3f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087c3f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c3fc cmp ecx, dword ptr [eax*8 + 0x1089efb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1089efb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c403 jne 0x1087c418 */
  if (!C.zf) goto L_1087c418;
  /* 1087c405 call 0x1087c470 */
  push32(0x1087c40au); f_1087c470();
  /* 1087c40a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087c40d mov ecx, dword ptr [edx*8 + 0x1089efbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1089efbc)));
  /* 1087c414 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1087c416 jmp 0x1087c45d */
  goto L_1087c45d;
L_1087c418:;
  /* 1087c418 jmp 0x1087c3e7 */
  goto L_1087c3e7;
L_1087c41a:;
  /* 1087c41a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c41e jb 0x1087c433 */
  if (C.cf) goto L_1087c433;
  /* 1087c420 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c424 ja 0x1087c433 */
  if ((!C.cf&&!C.zf)) goto L_1087c433;
  /* 1087c426 call 0x1087c470 */
  push32(0x1087c42bu); f_1087c470();
  /* 1087c42b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1087c431 jmp 0x1087c45d */
  goto L_1087c45d;
L_1087c433:;
  /* 1087c433 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c43a jb 0x1087c452 */
  if (C.cf) goto L_1087c452;
  /* 1087c43c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c443 ja 0x1087c452 */
  if ((!C.cf&&!C.zf)) goto L_1087c452;
  /* 1087c445 call 0x1087c470 */
  push32(0x1087c44au); f_1087c470();
  /* 1087c44a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1087c450 jmp 0x1087c45d */
  goto L_1087c45d;
L_1087c452:;
  /* 1087c452 call 0x1087c470 */
  push32(0x1087c457u); f_1087c470();
  /* 1087c457 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1087c45d:;
  /* 1087c45d mov esp, ebp */
  ESP = (EBP);
  /* 1087c45f pop ebp */
  EBP = (pop32());
  /* 1087c460 ret  */
  ESPCHK(0x1087c3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c470 @ 0x1087c470 (13 bytes, 6 insns) */
void f_1087c470(void) {
  FTRACE(0x1087c470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087c470 push ebp */
  push32((uint32_t)(EBP));
  /* 1087c471 mov ebp, esp */
  EBP = (ESP);
  /* 1087c473 call 0x10873fe0 */
  push32(0x1087c478u); f_10873fe0();
  /* 1087c478 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c47b pop ebp */
  EBP = (pop32());
  /* 1087c47c ret  */
  ESPCHK(0x1087c470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c480 @ 0x1087c480 (13 bytes, 6 insns) */
void f_1087c480(void) {
  FTRACE(0x1087c480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087c480 push ebp */
  push32((uint32_t)(EBP));
  /* 1087c481 mov ebp, esp */
  EBP = (ESP);
  /* 1087c483 call 0x10873fe0 */
  push32(0x1087c488u); f_10873fe0();
  /* 1087c488 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c48b pop ebp */
  EBP = (pop32());
  /* 1087c48c ret  */
  ESPCHK(0x1087c480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c490 @ 0x1087c490 (664 bytes, 261 insns) [15 switch table(s)] */
void f_1087c490(void) {
  FTRACE(0x1087c490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087c490 push ebp */
  push32((uint32_t)(EBP));
  /* 1087c491 mov ebp, esp */
  EBP = (ESP);
  /* 1087c493 push edi */
  push32((uint32_t)(EDI));
  /* 1087c494 push esi */
  push32((uint32_t)(ESI));
  /* 1087c495 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1087c498 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087c49b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c49e mov eax, ecx */
  EAX = (ECX);
  /* 1087c4a0 mov edx, ecx */
  EDX = (ECX);
  /* 1087c4a2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c4a4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c4a6 jbe 0x1087c4b0 */
  if ((C.cf||C.zf)) goto L_1087c4b0;
  /* 1087c4a8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c4aa jb 0x1087c628 */
  if (C.cf) goto L_1087c628;
L_1087c4b0:;
  /* 1087c4b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1087c4b6 jne 0x1087c4cc */
  if (!C.zf) goto L_1087c4cc;
  /* 1087c4b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1087c4bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1087c4be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c4c1 jb 0x1087c4ec */
  if (C.cf) goto L_1087c4ec;
  /* 1087c4c3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1087c4c5 jmp dword ptr [edx*4 + 0x1087c5d8] */
  switch (EDX) {
    case 0: goto L_1087c5e8;
    case 1: goto L_1087c5f0;
    case 2: goto L_1087c5fc;
    case 3: goto L_1087c610;
    default: x86_unimpl("switch@0x1087c4c5 out of table"); return;
  }
L_1087c4cc:;
  /* 1087c4cc mov eax, edi */
  EAX = (EDI);
  /* 1087c4ce mov edx, 3 */
  EDX = (0x3u);
  /* 1087c4d3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087c4d6 jb 0x1087c4e4 */
  if (C.cf) goto L_1087c4e4;
  /* 1087c4d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1087c4db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c4dd jmp dword ptr [eax*4 + 0x1087c4f0] */
  switch (EAX) {
    case 1: goto L_1087c500;
    case 2: goto L_1087c52c;
    case 3: goto L_1087c550;
    default: x86_unimpl("switch@0x1087c4dd out of table"); return;
  }
L_1087c4e4:;
  /* 1087c4e4 jmp dword ptr [ecx*4 + 0x1087c5e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1087c5e8)))); return;
  /* 1087c4eb nop  */
  /* nop */
L_1087c4ec:;
  /* 1087c4ec jmp dword ptr [ecx*4 + 0x1087c56c] */
  switch (ECX) {
    case 0: goto L_1087c5cf;
    case 1: goto L_1087c5bc;
    case 2: goto L_1087c5b4;
    case 3: goto L_1087c5ac;
    case 4: goto L_1087c5a4;
    case 5: goto L_1087c59c;
    case 6: goto L_1087c594;
    case 7: goto L_1087c58c;
    default: x86_unimpl("switch@0x1087c4ec out of table"); return;
  }
  /* 1087c4f3 nop  */
  /* nop */
L_1087c500:;
  /* 1087c500 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1087c502 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1087c504 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1087c506 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1087c509 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1087c50c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1087c50f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1087c512 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1087c515 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c518 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c51b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c51e jb 0x1087c4ec */
  if (C.cf) goto L_1087c4ec;
  /* 1087c520 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1087c522 jmp dword ptr [edx*4 + 0x1087c5d8] */
  switch (EDX) {
    case 0: goto L_1087c5e8;
    case 1: goto L_1087c5f0;
    case 2: goto L_1087c5fc;
    case 3: goto L_1087c610;
    default: x86_unimpl("switch@0x1087c522 out of table"); return;
  }
  /* 1087c529 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1087c52c:;
  /* 1087c52c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1087c52e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1087c530 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1087c532 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1087c535 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1087c538 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1087c53b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c53e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c541 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c544 jb 0x1087c4ec */
  if (C.cf) goto L_1087c4ec;
  /* 1087c546 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1087c548 jmp dword ptr [edx*4 + 0x1087c5d8] */
  switch (EDX) {
    case 0: goto L_1087c5e8;
    case 1: goto L_1087c5f0;
    case 2: goto L_1087c5fc;
    case 3: goto L_1087c610;
    default: x86_unimpl("switch@0x1087c548 out of table"); return;
  }
  /* 1087c54f nop  */
  /* nop */
L_1087c550:;
  /* 1087c550 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1087c552 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1087c554 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1087c556 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1087c557 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1087c55a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1087c55b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c55e jb 0x1087c4ec */
  if (C.cf) goto L_1087c4ec;
  /* 1087c560 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1087c562 jmp dword ptr [edx*4 + 0x1087c5d8] */
  switch (EDX) {
    case 0: goto L_1087c5e8;
    case 1: goto L_1087c5f0;
    case 2: goto L_1087c5fc;
    case 3: goto L_1087c610;
    default: x86_unimpl("switch@0x1087c562 out of table"); return;
  }
  /* 1087c569 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1087c58c:;
  /* 1087c58c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1087c590 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1087c594:;
  /* 1087c594 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1087c598 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1087c59c:;
  /* 1087c59c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1087c5a0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1087c5a4:;
  /* 1087c5a4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1087c5a8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1087c5ac:;
  /* 1087c5ac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1087c5b0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1087c5b4:;
  /* 1087c5b4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1087c5b8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1087c5bc:;
  /* 1087c5bc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1087c5c0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1087c5c4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1087c5cb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c5cd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1087c5cf:;
  /* 1087c5cf jmp dword ptr [edx*4 + 0x1087c5d8] */
  switch (EDX) {
    case 0: goto L_1087c5e8;
    case 1: goto L_1087c5f0;
    case 2: goto L_1087c5fc;
    case 3: goto L_1087c610;
    default: x86_unimpl("switch@0x1087c5cf out of table"); return;
  }
  /* 1087c5d6 mov edi, edi */
  EDI = (EDI);
L_1087c5e8:;
  /* 1087c5e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c5eb pop esi */
  ESI = (pop32());
  /* 1087c5ec pop edi */
  EDI = (pop32());
  /* 1087c5ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1087c5ee ret  */
  ESPCHK(0x1087c490u, _esp0);
  ESP += 4; return;
  /* 1087c5ef nop  */
  /* nop */
L_1087c5f0:;
  /* 1087c5f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1087c5f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1087c5f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c5f7 pop esi */
  ESI = (pop32());
  /* 1087c5f8 pop edi */
  EDI = (pop32());
  /* 1087c5f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1087c5fa ret  */
  ESPCHK(0x1087c490u, _esp0);
  ESP += 4; return;
  /* 1087c5fb nop  */
  /* nop */
L_1087c5fc:;
  /* 1087c5fc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1087c5fe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1087c600 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1087c603 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1087c606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c609 pop esi */
  ESI = (pop32());
  /* 1087c60a pop edi */
  EDI = (pop32());
  /* 1087c60b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1087c60c ret  */
  ESPCHK(0x1087c490u, _esp0);
  ESP += 4; return;
  /* 1087c60d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1087c610:;
  /* 1087c610 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1087c612 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1087c614 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1087c617 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1087c61a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1087c61d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1087c620 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c623 pop esi */
  ESI = (pop32());
  /* 1087c624 pop edi */
  EDI = (pop32());
  /* 1087c625 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1087c626 ret  */
  ESPCHK(0x1087c490u, _esp0);
  ESP += 4; return;
  /* 1087c627 nop  */
  /* nop */
L_1087c628:;
  /* 1087c628 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1087c62c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1087c630 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1087c636 jne 0x1087c65c */
  if (!C.zf) goto L_1087c65c;
  /* 1087c638 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1087c63b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1087c63e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c641 jb 0x1087c650 */
  if (C.cf) goto L_1087c650;
  /* 1087c643 std  */
  C.df=1;
  /* 1087c644 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1087c646 cld  */
  C.df=0;
  /* 1087c647 jmp dword ptr [edx*4 + 0x1087c770] */
  switch (EDX) {
    case 0: goto L_1087c780;
    case 1: goto L_1087c788;
    case 2: goto L_1087c798;
    case 3: goto L_1087c7ac;
    default: x86_unimpl("switch@0x1087c647 out of table"); return;
  }
  /* 1087c64e mov edi, edi */
  EDI = (EDI);
L_1087c650:;
  /* 1087c650 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1087c652 jmp dword ptr [ecx*4 + 0x1087c720] */
  switch (ECX) {
    case 0: goto L_1087c767;
    default: x86_unimpl("switch@0x1087c652 out of table"); return;
  }
  /* 1087c659 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1087c65c:;
  /* 1087c65c mov eax, edi */
  EAX = (EDI);
  /* 1087c65e mov edx, 3 */
  EDX = (0x3u);
  /* 1087c663 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c666 jb 0x1087c674 */
  if (C.cf) goto L_1087c674;
  /* 1087c668 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1087c66b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087c66d jmp dword ptr [eax*4 + 0x1087c678] */
  switch (EAX) {
    case 1: goto L_1087c688;
    case 2: goto L_1087c6a8;
    case 3: goto L_1087c6d0;
    default: x86_unimpl("switch@0x1087c66d out of table"); return;
  }
L_1087c674:;
  /* 1087c674 jmp dword ptr [ecx*4 + 0x1087c770] */
  switch (ECX) {
    case 0: goto L_1087c780;
    case 1: goto L_1087c788;
    case 2: goto L_1087c798;
    case 3: goto L_1087c7ac;
    default: x86_unimpl("switch@0x1087c674 out of table"); return;
  }
  /* 1087c67b nop  */
  /* nop */
L_1087c688:;
  /* 1087c688 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1087c68b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1087c68d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1087c690 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1087c691 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1087c694 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1087c695 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c698 jb 0x1087c650 */
  if (C.cf) goto L_1087c650;
  /* 1087c69a std  */
  C.df=1;
  /* 1087c69b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1087c69d cld  */
  C.df=0;
  /* 1087c69e jmp dword ptr [edx*4 + 0x1087c770] */
  switch (EDX) {
    case 0: goto L_1087c780;
    case 1: goto L_1087c788;
    case 2: goto L_1087c798;
    case 3: goto L_1087c7ac;
    default: x86_unimpl("switch@0x1087c69e out of table"); return;
  }
  /* 1087c6a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1087c6a8:;
  /* 1087c6a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1087c6ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1087c6ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1087c6b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1087c6b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1087c6b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1087c6b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087c6bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087c6bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c6c2 jb 0x1087c650 */
  if (C.cf) goto L_1087c650;
  /* 1087c6c4 std  */
  C.df=1;
  /* 1087c6c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1087c6c7 cld  */
  C.df=0;
  /* 1087c6c8 jmp dword ptr [edx*4 + 0x1087c770] */
  switch (EDX) {
    case 0: goto L_1087c780;
    case 1: goto L_1087c788;
    case 2: goto L_1087c798;
    case 3: goto L_1087c7ac;
    default: x86_unimpl("switch@0x1087c6c8 out of table"); return;
  }
  /* 1087c6cf nop  */
  /* nop */
L_1087c6d0:;
  /* 1087c6d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1087c6d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1087c6d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1087c6d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1087c6db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1087c6de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1087c6e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1087c6e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1087c6e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087c6ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087c6ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c6f0 jb 0x1087c650 */
  if (C.cf) goto L_1087c650;
  /* 1087c6f6 std  */
  C.df=1;
  /* 1087c6f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1087c6f9 cld  */
  C.df=0;
  /* 1087c6fa jmp dword ptr [edx*4 + 0x1087c770] */
  switch (EDX) {
    case 0: goto L_1087c780;
    case 1: goto L_1087c788;
    case 2: goto L_1087c798;
    case 3: goto L_1087c7ac;
    default: x86_unimpl("switch@0x1087c6fa out of table"); return;
  }
  /* 1087c701 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1087c704 and al, 0xc7 */
  { uint32_t _r=(AL)&(0xc7u); AL = (_r); fl_logic(_r,8); }
  /* 1087c706 xchg dword ptr [eax], edx */
  { uint32_t _t=(r32((uint32_t)(EAX))); w32((uint32_t)(EAX), (EDX)); EDX = (_t); }
  /* 1087c708 sub al, 0xc7 */
  { uint32_t _a=(AL),_b=(0xc7u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1087c70a xchg dword ptr [eax], edx */
  { uint32_t _t=(r32((uint32_t)(EAX))); w32((uint32_t)(EAX), (EDX)); EDX = (_t); }
  /* 1087c70c xor al, 0xc7 */
  { uint32_t _r=(AL)^(0xc7u); AL = (_r); fl_logic(_r,8); }
  /* 1087c70e xchg dword ptr [eax], edx */
  { uint32_t _t=(r32((uint32_t)(EAX))); w32((uint32_t)(EAX), (EDX)); EDX = (_t); }
  /* 1087c710 cmp al, 0xc7 */
  { uint32_t _a=(AL),_b=(0xc7u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1087c712 xchg dword ptr [eax], edx */
  { uint32_t _t=(r32((uint32_t)(EAX))); w32((uint32_t)(EAX), (EDX)); EDX = (_t); }
  /* 1087c714 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1087c715 mov dword ptr [edi - 0x7838b3f0], 0x87c75410 */
  w32((uint32_t)(EDI + -0x7838b3f0), (0x87c75410u));
  /* 1087c724 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1087c728 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1087c72c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1087c730 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1087c734 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1087c738 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1087c73c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1087c740 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1087c744 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1087c748 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1087c74c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1087c750 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1087c754 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1087c758 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1087c75c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1087c763 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c765 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1087c767:;
  /* 1087c767 jmp dword ptr [edx*4 + 0x1087c770] */
  switch (EDX) {
    case 0: goto L_1087c780;
    case 1: goto L_1087c788;
    case 2: goto L_1087c798;
    case 3: goto L_1087c7ac;
    default: x86_unimpl("switch@0x1087c767 out of table"); return;
  }
  /* 1087c76e mov edi, edi */
  EDI = (EDI);
L_1087c780:;
  /* 1087c780 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c783 pop esi */
  ESI = (pop32());
  /* 1087c784 pop edi */
  EDI = (pop32());
  /* 1087c785 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1087c786 ret  */
  ESPCHK(0x1087c490u, _esp0);
  ESP += 4; return;
  /* 1087c787 nop  */
  /* nop */
L_1087c788:;
  /* 1087c788 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1087c78b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1087c78e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c791 pop esi */
  ESI = (pop32());
  /* 1087c792 pop edi */
  EDI = (pop32());
  /* 1087c793 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1087c794 ret  */
  ESPCHK(0x1087c490u, _esp0);
  ESP += 4; return;
  /* 1087c795 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1087c798:;
  /* 1087c798 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1087c79b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1087c79e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1087c7a1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1087c7a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c7a7 pop esi */
  ESI = (pop32());
  /* 1087c7a8 pop edi */
  EDI = (pop32());
  /* 1087c7a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1087c7aa ret  */
  ESPCHK(0x1087c490u, _esp0);
  ESP += 4; return;
  /* 1087c7ab nop  */
  /* nop */
L_1087c7ac:;
  /* 1087c7ac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1087c7af mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1087c7b2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1087c7b5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1087c7b8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1087c7bb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1087c7be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c7c1 pop esi */
  ESI = (pop32());
  /* 1087c7c2 pop edi */
  EDI = (pop32());
  /* 1087c7c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1087c7c4 ret  */
  ESPCHK(0x1087c490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7d0 @ 0x1087c7d0 (421 bytes, 148 insns) */
void f_1087c7d0(void) {
  FTRACE(0x1087c7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087c7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087c7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1087c7d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1087c7d5 push 0x1089c0c8 */
  push32((uint32_t)(0x1089c0c8u));
  /* 1087c7da push 0x1087d6a8 */
  push32((uint32_t)(0x1087d6a8u));
  /* 1087c7df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1087c7e5 push eax */
  push32((uint32_t)(EAX));
  /* 1087c7e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1087c7ed add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c7f0 push ebx */
  push32((uint32_t)(EBX));
  /* 1087c7f1 push esi */
  push32((uint32_t)(ESI));
  /* 1087c7f2 push edi */
  push32((uint32_t)(EDI));
  /* 1087c7f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1087c7f6 cmp dword ptr [0x108a082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c7fd jne 0x1087c84e */
  if (!C.zf) goto L_1087c84e;
  /* 1087c7ff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1087c802 push eax */
  push32((uint32_t)(EAX));
  /* 1087c803 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087c805 push 0x1089c0c4 */
  push32((uint32_t)(0x1089c0c4u));
  /* 1087c80a push 1 */
  push32((uint32_t)(0x1u));
  /* 1087c80c call dword ptr [0x108a3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3308))), 0x1087c812u);
  /* 1087c812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087c814 je 0x1087c822 */
  if (C.zf) goto L_1087c822;
  /* 1087c816 mov dword ptr [0x108a082c], 1 */
  w32((uint32_t)(0x108a082c), (0x1u));
  /* 1087c820 jmp 0x1087c84e */
  goto L_1087c84e;
L_1087c822:;
  /* 1087c822 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1087c825 push ecx */
  push32((uint32_t)(ECX));
  /* 1087c826 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087c828 push 0x1089c0c0 */
  push32((uint32_t)(0x1089c0c0u));
  /* 1087c82d push 1 */
  push32((uint32_t)(0x1u));
  /* 1087c82f push 0 */
  push32((uint32_t)(0x0u));
  /* 1087c831 call dword ptr [0x108a3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3318))), 0x1087c837u);
  /* 1087c837 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087c839 je 0x1087c847 */
  if (C.zf) goto L_1087c847;
  /* 1087c83b mov dword ptr [0x108a082c], 2 */
  w32((uint32_t)(0x108a082c), (0x2u));
  /* 1087c845 jmp 0x1087c84e */
  goto L_1087c84e;
L_1087c847:;
  /* 1087c847 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087c849 jmp 0x1087c978 */
  goto L_1087c978;
L_1087c84e:;
  /* 1087c84e cmp dword ptr [0x108a082c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108a082c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c855 jne 0x1087c885 */
  if (!C.zf) goto L_1087c885;
  /* 1087c857 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c85b jne 0x1087c866 */
  if (!C.zf) goto L_1087c866;
  /* 1087c85d mov edx, dword ptr [0x108a0838] */
  EDX = (r32((uint32_t)(0x108a0838)));
  /* 1087c863 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1087c866:;
  /* 1087c866 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1087c869 push eax */
  push32((uint32_t)(EAX));
  /* 1087c86a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087c86d push ecx */
  push32((uint32_t)(ECX));
  /* 1087c86e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087c871 push edx */
  push32((uint32_t)(EDX));
  /* 1087c872 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c875 push eax */
  push32((uint32_t)(EAX));
  /* 1087c876 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1087c879 push ecx */
  push32((uint32_t)(ECX));
  /* 1087c87a call dword ptr [0x108a3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3318))), 0x1087c880u);
  /* 1087c880 jmp 0x1087c978 */
  goto L_1087c978;
L_1087c885:;
  /* 1087c885 cmp dword ptr [0x108a082c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108a082c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c88c jne 0x1087c976 */
  if (!C.zf) goto L_1087c976;
  /* 1087c892 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c896 jne 0x1087c8a1 */
  if (!C.zf) goto L_1087c8a1;
  /* 1087c898 mov edx, dword ptr [0x108a0848] */
  EDX = (r32((uint32_t)(0x108a0848)));
  /* 1087c89e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1087c8a1:;
  /* 1087c8a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087c8a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087c8a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087c8a8 push eax */
  push32((uint32_t)(EAX));
  /* 1087c8a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087c8ac push ecx */
  push32((uint32_t)(ECX));
  /* 1087c8ad mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1087c8b0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1087c8b2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087c8b4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1087c8b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c8ba push edx */
  push32((uint32_t)(EDX));
  /* 1087c8bb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1087c8be push eax */
  push32((uint32_t)(EAX));
  /* 1087c8bf call dword ptr [0x108a3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3310))), 0x1087c8c5u);
  /* 1087c8c5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1087c8c8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c8cc jne 0x1087c8d5 */
  if (!C.zf) goto L_1087c8d5;
  /* 1087c8ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087c8d0 jmp 0x1087c978 */
  goto L_1087c978;
L_1087c8d5:;
  /* 1087c8d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1087c8dc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087c8df shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1087c8e1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c8e4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1087c8e6 call 0x10877740 */
  push32(0x1087c8ebu); f_10877740();
  /* 1087c8eb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1087c8ee mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1087c8f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1087c8f4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1087c8f7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087c8fa shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1087c8fc push edx */
  push32((uint32_t)(EDX));
  /* 1087c8fd push 0 */
  push32((uint32_t)(0x0u));
  /* 1087c8ff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087c902 push eax */
  push32((uint32_t)(EAX));
  /* 1087c903 call 0x10878310 */
  push32(0x1087c908u); f_10878310();
  /* 1087c908 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c90b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1087c912 jmp 0x1087c92b */
  goto L_1087c92b;
  /* 1087c914 mov eax, 1 */
  EAX = (0x1u);
  /* 1087c919 ret  */
  ESPCHK(0x1087c7d0u, _esp0);
  ESP += 4; return;
  /* 1087c91a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1087c91d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1087c924 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1087c92b:;
  /* 1087c92b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c92f jne 0x1087c935 */
  if (!C.zf) goto L_1087c935;
  /* 1087c931 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087c933 jmp 0x1087c978 */
  goto L_1087c978;
L_1087c935:;
  /* 1087c935 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087c938 push ecx */
  push32((uint32_t)(ECX));
  /* 1087c939 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087c93c push edx */
  push32((uint32_t)(EDX));
  /* 1087c93d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087c940 push eax */
  push32((uint32_t)(EAX));
  /* 1087c941 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087c944 push ecx */
  push32((uint32_t)(ECX));
  /* 1087c945 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087c947 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1087c94a push edx */
  push32((uint32_t)(EDX));
  /* 1087c94b call dword ptr [0x108a3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3310))), 0x1087c951u);
  /* 1087c951 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1087c954 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c958 jne 0x1087c95e */
  if (!C.zf) goto L_1087c95e;
  /* 1087c95a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087c95c jmp 0x1087c978 */
  goto L_1087c978;
L_1087c95e:;
  /* 1087c95e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1087c961 push eax */
  push32((uint32_t)(EAX));
  /* 1087c962 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1087c965 push ecx */
  push32((uint32_t)(ECX));
  /* 1087c966 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087c969 push edx */
  push32((uint32_t)(EDX));
  /* 1087c96a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087c96d push eax */
  push32((uint32_t)(EAX));
  /* 1087c96e call dword ptr [0x108a3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3308))), 0x1087c974u);
  /* 1087c974 jmp 0x1087c978 */
  goto L_1087c978;
L_1087c976:;
  /* 1087c976 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1087c978:;
  /* 1087c978 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1087c97b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087c97e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1087c985 pop edi */
  EDI = (pop32());
  /* 1087c986 pop esi */
  ESI = (pop32());
  /* 1087c987 pop ebx */
  EBX = (pop32());
  /* 1087c988 mov esp, ebp */
  ESP = (EBP);
  /* 1087c98a pop ebp */
  EBP = (pop32());
  /* 1087c98b ret  */
  ESPCHK(0x1087c7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c990 @ 0x1087c990 (727 bytes, 263 insns) */
void f_1087c990(void) {
  FTRACE(0x1087c990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087c990 push ebp */
  push32((uint32_t)(EBP));
  /* 1087c991 mov ebp, esp */
  EBP = (ESP);
  /* 1087c993 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1087c995 push 0x1089c0d8 */
  push32((uint32_t)(0x1089c0d8u));
  /* 1087c99a push 0x1087d6a8 */
  push32((uint32_t)(0x1087d6a8u));
  /* 1087c99f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1087c9a5 push eax */
  push32((uint32_t)(EAX));
  /* 1087c9a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1087c9ad add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087c9b0 push ebx */
  push32((uint32_t)(EBX));
  /* 1087c9b1 push esi */
  push32((uint32_t)(ESI));
  /* 1087c9b2 push edi */
  push32((uint32_t)(EDI));
  /* 1087c9b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1087c9b6 cmp dword ptr [0x108a0850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087c9bd jne 0x1087ca16 */
  if (!C.zf) goto L_1087ca16;
  /* 1087c9bf push 0 */
  push32((uint32_t)(0x0u));
  /* 1087c9c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087c9c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087c9c5 push 0x1089c0c4 */
  push32((uint32_t)(0x1089c0c4u));
  /* 1087c9ca push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1087c9cf push 0 */
  push32((uint32_t)(0x0u));
  /* 1087c9d1 call dword ptr [0x108a330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a330c))), 0x1087c9d7u);
  /* 1087c9d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087c9d9 je 0x1087c9e7 */
  if (C.zf) goto L_1087c9e7;
  /* 1087c9db mov dword ptr [0x108a0850], 1 */
  w32((uint32_t)(0x108a0850), (0x1u));
  /* 1087c9e5 jmp 0x1087ca16 */
  goto L_1087ca16;
L_1087c9e7:;
  /* 1087c9e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087c9e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087c9eb push 1 */
  push32((uint32_t)(0x1u));
  /* 1087c9ed push 0x1089c0c0 */
  push32((uint32_t)(0x1089c0c0u));
  /* 1087c9f2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1087c9f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087c9f9 call dword ptr [0x108a3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3304))), 0x1087c9ffu);
  /* 1087c9ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087ca01 je 0x1087ca0f */
  if (C.zf) goto L_1087ca0f;
  /* 1087ca03 mov dword ptr [0x108a0850], 2 */
  w32((uint32_t)(0x108a0850), (0x2u));
  /* 1087ca0d jmp 0x1087ca16 */
  goto L_1087ca16;
L_1087ca0f:;
  /* 1087ca0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087ca11 jmp 0x1087cc81 */
  goto L_1087cc81;
L_1087ca16:;
  /* 1087ca16 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ca1a jle 0x1087ca2f */
  if ((C.zf||C.sf!=C.of)) goto L_1087ca2f;
  /* 1087ca1c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1087ca1f push eax */
  push32((uint32_t)(EAX));
  /* 1087ca20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087ca23 push ecx */
  push32((uint32_t)(ECX));
  /* 1087ca24 call 0x1087cca0 */
  push32(0x1087ca29u); f_1087cca0();
  /* 1087ca29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ca2c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1087ca2f:;
  /* 1087ca2f cmp dword ptr [0x108a0850], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108a0850))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ca36 jne 0x1087ca5b */
  if (!C.zf) goto L_1087ca5b;
  /* 1087ca38 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1087ca3b push edx */
  push32((uint32_t)(EDX));
  /* 1087ca3c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1087ca3f push eax */
  push32((uint32_t)(EAX));
  /* 1087ca40 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1087ca43 push ecx */
  push32((uint32_t)(ECX));
  /* 1087ca44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087ca47 push edx */
  push32((uint32_t)(EDX));
  /* 1087ca48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087ca4b push eax */
  push32((uint32_t)(EAX));
  /* 1087ca4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ca4f push ecx */
  push32((uint32_t)(ECX));
  /* 1087ca50 call dword ptr [0x108a3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3304))), 0x1087ca56u);
  /* 1087ca56 jmp 0x1087cc81 */
  goto L_1087cc81;
L_1087ca5b:;
  /* 1087ca5b cmp dword ptr [0x108a0850], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108a0850))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ca62 jne 0x1087cc7f */
  if (!C.zf) goto L_1087cc7f;
  /* 1087ca68 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ca6c jne 0x1087ca77 */
  if (!C.zf) goto L_1087ca77;
  /* 1087ca6e mov edx, dword ptr [0x108a0848] */
  EDX = (r32((uint32_t)(0x108a0848)));
  /* 1087ca74 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1087ca77:;
  /* 1087ca77 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087ca79 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087ca7b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1087ca7e push eax */
  push32((uint32_t)(EAX));
  /* 1087ca7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087ca82 push ecx */
  push32((uint32_t)(ECX));
  /* 1087ca83 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1087ca86 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1087ca88 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087ca8a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1087ca8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ca90 push edx */
  push32((uint32_t)(EDX));
  /* 1087ca91 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1087ca94 push eax */
  push32((uint32_t)(EAX));
  /* 1087ca95 call dword ptr [0x108a3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3310))), 0x1087ca9bu);
  /* 1087ca9b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1087ca9e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087caa2 jne 0x1087caab */
  if (!C.zf) goto L_1087caab;
  /* 1087caa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087caa6 jmp 0x1087cc81 */
  goto L_1087cc81;
L_1087caab:;
  /* 1087caab mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1087cab2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1087cab5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1087cab7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087caba and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1087cabc call 0x10877740 */
  push32(0x1087cac1u); f_10877740();
  /* 1087cac1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1087cac4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1087cac7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1087caca mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1087cacd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1087cad4 jmp 0x1087caed */
  goto L_1087caed;
  /* 1087cad6 mov eax, 1 */
  EAX = (0x1u);
  /* 1087cadb ret  */
  ESPCHK(0x1087c990u, _esp0);
  ESP += 4; return;
  /* 1087cadc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1087cadf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1087cae6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1087caed:;
  /* 1087caed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087caf1 jne 0x1087cafa */
  if (!C.zf) goto L_1087cafa;
  /* 1087caf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087caf5 jmp 0x1087cc81 */
  goto L_1087cc81;
L_1087cafa:;
  /* 1087cafa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1087cafd push edx */
  push32((uint32_t)(EDX));
  /* 1087cafe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087cb01 push eax */
  push32((uint32_t)(EAX));
  /* 1087cb02 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1087cb05 push ecx */
  push32((uint32_t)(ECX));
  /* 1087cb06 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087cb09 push edx */
  push32((uint32_t)(EDX));
  /* 1087cb0a push 1 */
  push32((uint32_t)(0x1u));
  /* 1087cb0c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1087cb0f push eax */
  push32((uint32_t)(EAX));
  /* 1087cb10 call dword ptr [0x108a3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3310))), 0x1087cb16u);
  /* 1087cb16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087cb18 jne 0x1087cb21 */
  if (!C.zf) goto L_1087cb21;
  /* 1087cb1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087cb1c jmp 0x1087cc81 */
  goto L_1087cc81;
L_1087cb21:;
  /* 1087cb21 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087cb23 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087cb25 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1087cb28 push ecx */
  push32((uint32_t)(ECX));
  /* 1087cb29 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087cb2c push edx */
  push32((uint32_t)(EDX));
  /* 1087cb2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087cb30 push eax */
  push32((uint32_t)(EAX));
  /* 1087cb31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087cb34 push ecx */
  push32((uint32_t)(ECX));
  /* 1087cb35 call dword ptr [0x108a330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a330c))), 0x1087cb3bu);
  /* 1087cb3b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1087cb3e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087cb42 jne 0x1087cb4b */
  if (!C.zf) goto L_1087cb4b;
  /* 1087cb44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087cb46 jmp 0x1087cc81 */
  goto L_1087cc81;
L_1087cb4b:;
  /* 1087cb4b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087cb4e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1087cb54 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087cb56 je 0x1087cb9b */
  if (C.zf) goto L_1087cb9b;
  /* 1087cb58 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087cb5c je 0x1087cb96 */
  if (C.zf) goto L_1087cb96;
  /* 1087cb5e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1087cb61 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087cb64 jle 0x1087cb6d */
  if ((C.zf||C.sf!=C.of)) goto L_1087cb6d;
  /* 1087cb66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087cb68 jmp 0x1087cc81 */
  goto L_1087cc81;
L_1087cb6d:;
  /* 1087cb6d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1087cb70 push ecx */
  push32((uint32_t)(ECX));
  /* 1087cb71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1087cb74 push edx */
  push32((uint32_t)(EDX));
  /* 1087cb75 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1087cb78 push eax */
  push32((uint32_t)(EAX));
  /* 1087cb79 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087cb7c push ecx */
  push32((uint32_t)(ECX));
  /* 1087cb7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087cb80 push edx */
  push32((uint32_t)(EDX));
  /* 1087cb81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087cb84 push eax */
  push32((uint32_t)(EAX));
  /* 1087cb85 call dword ptr [0x108a330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a330c))), 0x1087cb8bu);
  /* 1087cb8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087cb8d jne 0x1087cb96 */
  if (!C.zf) goto L_1087cb96;
  /* 1087cb8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087cb91 jmp 0x1087cc81 */
  goto L_1087cc81;
L_1087cb96:;
  /* 1087cb96 jmp 0x1087cc7a */
  goto L_1087cc7a;
L_1087cb9b:;
  /* 1087cb9b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1087cb9e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1087cba1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1087cba8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1087cbab shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1087cbad add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087cbb0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1087cbb2 call 0x10877740 */
  push32(0x1087cbb7u); f_10877740();
  /* 1087cbb7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1087cbba mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1087cbbd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1087cbc0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1087cbc3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1087cbca jmp 0x1087cbe3 */
  goto L_1087cbe3;
  /* 1087cbcc mov eax, 1 */
  EAX = (0x1u);
  /* 1087cbd1 ret  */
  ESPCHK(0x1087c990u, _esp0);
  ESP += 4; return;
  /* 1087cbd2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1087cbd5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1087cbdc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1087cbe3:;
  /* 1087cbe3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087cbe7 jne 0x1087cbf0 */
  if (!C.zf) goto L_1087cbf0;
  /* 1087cbe9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087cbeb jmp 0x1087cc81 */
  goto L_1087cc81;
L_1087cbf0:;
  /* 1087cbf0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1087cbf3 push eax */
  push32((uint32_t)(EAX));
  /* 1087cbf4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087cbf7 push ecx */
  push32((uint32_t)(ECX));
  /* 1087cbf8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1087cbfb push edx */
  push32((uint32_t)(EDX));
  /* 1087cbfc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087cbff push eax */
  push32((uint32_t)(EAX));
  /* 1087cc00 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087cc03 push ecx */
  push32((uint32_t)(ECX));
  /* 1087cc04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087cc07 push edx */
  push32((uint32_t)(EDX));
  /* 1087cc08 call dword ptr [0x108a330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a330c))), 0x1087cc0eu);
  /* 1087cc0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087cc10 jne 0x1087cc16 */
  if (!C.zf) goto L_1087cc16;
  /* 1087cc12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087cc14 jmp 0x1087cc81 */
  goto L_1087cc81;
L_1087cc16:;
  /* 1087cc16 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087cc1a jne 0x1087cc4a */
  if (!C.zf) goto L_1087cc4a;
  /* 1087cc1c push 0 */
  push32((uint32_t)(0x0u));
  /* 1087cc1e push 0 */
  push32((uint32_t)(0x0u));
  /* 1087cc20 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087cc22 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087cc24 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1087cc27 push eax */
  push32((uint32_t)(EAX));
  /* 1087cc28 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087cc2b push ecx */
  push32((uint32_t)(ECX));
  /* 1087cc2c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1087cc31 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1087cc34 push edx */
  push32((uint32_t)(EDX));
  /* 1087cc35 call dword ptr [0x108a335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a335c))), 0x1087cc3bu);
  /* 1087cc3b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1087cc3e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087cc42 jne 0x1087cc48 */
  if (!C.zf) goto L_1087cc48;
  /* 1087cc44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087cc46 jmp 0x1087cc81 */
  goto L_1087cc81;
L_1087cc48:;
  /* 1087cc48 jmp 0x1087cc7a */
  goto L_1087cc7a;
L_1087cc4a:;
  /* 1087cc4a push 0 */
  push32((uint32_t)(0x0u));
  /* 1087cc4c push 0 */
  push32((uint32_t)(0x0u));
  /* 1087cc4e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1087cc51 push eax */
  push32((uint32_t)(EAX));
  /* 1087cc52 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1087cc55 push ecx */
  push32((uint32_t)(ECX));
  /* 1087cc56 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1087cc59 push edx */
  push32((uint32_t)(EDX));
  /* 1087cc5a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087cc5d push eax */
  push32((uint32_t)(EAX));
  /* 1087cc5e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1087cc63 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1087cc66 push ecx */
  push32((uint32_t)(ECX));
  /* 1087cc67 call dword ptr [0x108a335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a335c))), 0x1087cc6du);
  /* 1087cc6d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1087cc70 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087cc74 jne 0x1087cc7a */
  if (!C.zf) goto L_1087cc7a;
  /* 1087cc76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087cc78 jmp 0x1087cc81 */
  goto L_1087cc81;
L_1087cc7a:;
  /* 1087cc7a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1087cc7d jmp 0x1087cc81 */
  goto L_1087cc81;
L_1087cc7f:;
  /* 1087cc7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1087cc81:;
  /* 1087cc81 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1087cc84 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087cc87 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1087cc8e pop edi */
  EDI = (pop32());
  /* 1087cc8f pop esi */
  ESI = (pop32());
  /* 1087cc90 pop ebx */
  EBX = (pop32());
  /* 1087cc91 mov esp, ebp */
  ESP = (EBP);
  /* 1087cc93 pop ebp */
  EBP = (pop32());
  /* 1087cc94 ret  */
  ESPCHK(0x1087c990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cca0 @ 0x1087cca0 (80 bytes, 32 insns) */
void f_1087cca0(void) {
  FTRACE(0x1087cca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087cca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087cca1 mov ebp, esp */
  EBP = (ESP);
  /* 1087cca3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087cca6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087cca9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1087ccac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ccaf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1087ccb2:;
  /* 1087ccb2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087ccb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087ccb8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087ccbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1087ccbe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087ccc0 je 0x1087ccd7 */
  if (C.zf) goto L_1087ccd7;
  /* 1087ccc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087ccc5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1087ccc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087ccca je 0x1087ccd7 */
  if (C.zf) goto L_1087ccd7;
  /* 1087cccc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087cccf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ccd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087ccd5 jmp 0x1087ccb2 */
  goto L_1087ccb2;
L_1087ccd7:;
  /* 1087ccd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087ccda movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1087ccdd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087ccdf jne 0x1087cce9 */
  if (!C.zf) goto L_1087cce9;
  /* 1087cce1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087cce4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087cce7 jmp 0x1087ccec */
  goto L_1087ccec;
L_1087cce9:;
  /* 1087cce9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1087ccec:;
  /* 1087ccec mov esp, ebp */
  ESP = (EBP);
  /* 1087ccee pop ebp */
  EBP = (pop32());
  /* 1087ccef ret  */
  ESPCHK(0x1087cca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccf0 @ 0x1087ccf0 (130 bytes, 43 insns) */
void f_1087ccf0(void) {
  FTRACE(0x1087ccf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087ccf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087ccf1 mov ebp, esp */
  EBP = (ESP);
  /* 1087ccf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1087ccf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ccf7 cmp eax, dword ptr [0x108a215c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108a215c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ccfd jae 0x1087cd21 */
  if (!C.cf) goto L_1087cd21;
  /* 1087ccff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087cd02 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1087cd05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087cd08 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1087cd0b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087cd0e mov eax, dword ptr [ecx*4 + 0x108a2020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108a2020)));
  /* 1087cd15 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1087cd1a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1087cd1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087cd1f jne 0x1087cd3c */
  if (!C.zf) goto L_1087cd3c;
L_1087cd21:;
  /* 1087cd21 call 0x1087c470 */
  push32(0x1087cd26u); f_1087c470();
  /* 1087cd26 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1087cd2c call 0x1087c480 */
  push32(0x1087cd31u); f_1087c480();
  /* 1087cd31 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1087cd37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087cd3a jmp 0x1087cd6e */
  goto L_1087cd6e;
L_1087cd3c:;
  /* 1087cd3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087cd3f push edx */
  push32((uint32_t)(EDX));
  /* 1087cd40 call 0x1087dc90 */
  push32(0x1087cd45u); f_1087dc90();
  /* 1087cd45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087cd48 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087cd4b push eax */
  push32((uint32_t)(EAX));
  /* 1087cd4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087cd4f push ecx */
  push32((uint32_t)(ECX));
  /* 1087cd50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087cd53 push edx */
  push32((uint32_t)(EDX));
  /* 1087cd54 call 0x1087cd80 */
  push32(0x1087cd59u); f_1087cd80();
  /* 1087cd59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087cd5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087cd5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087cd62 push eax */
  push32((uint32_t)(EAX));
  /* 1087cd63 call 0x1087dd20 */
  push32(0x1087cd68u); f_1087dd20();
  /* 1087cd68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087cd6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1087cd6e:;
  /* 1087cd6e mov esp, ebp */
  ESP = (EBP);
  /* 1087cd70 pop ebp */
  EBP = (pop32());
  /* 1087cd71 ret  */
  ESPCHK(0x1087ccf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd80 @ 0x1087cd80 (178 bytes, 56 insns) */
void f_1087cd80(void) {
  FTRACE(0x1087cd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087cd80 push ebp */
  push32((uint32_t)(EBP));
  /* 1087cd81 mov ebp, esp */
  EBP = (ESP);
  /* 1087cd83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087cd86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087cd89 push eax */
  push32((uint32_t)(EAX));
  /* 1087cd8a call 0x1087db10 */
  push32(0x1087cd8fu); f_1087db10();
  /* 1087cd8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087cd92 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1087cd95 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087cd99 jne 0x1087cdae */
  if (!C.zf) goto L_1087cdae;
  /* 1087cd9b call 0x1087c470 */
  push32(0x1087cda0u); f_1087c470();
  /* 1087cda0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1087cda6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087cda9 jmp 0x1087ce2e */
  goto L_1087ce2e;
L_1087cdae:;
  /* 1087cdae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087cdb1 push ecx */
  push32((uint32_t)(ECX));
  /* 1087cdb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087cdb4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087cdb7 push edx */
  push32((uint32_t)(EDX));
  /* 1087cdb8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087cdbb push eax */
  push32((uint32_t)(EAX));
  /* 1087cdbc call dword ptr [0x108a32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32fc))), 0x1087cdc2u);
  /* 1087cdc2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1087cdc5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087cdc9 jne 0x1087cdd6 */
  if (!C.zf) goto L_1087cdd6;
  /* 1087cdcb call dword ptr [0x108a33b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33b4))), 0x1087cdd1u);
  /* 1087cdd1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087cdd4 jmp 0x1087cddd */
  goto L_1087cddd;
L_1087cdd6:;
  /* 1087cdd6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1087cddd:;
  /* 1087cddd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087cde1 je 0x1087cdf4 */
  if (C.zf) goto L_1087cdf4;
  /* 1087cde3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087cde6 push ecx */
  push32((uint32_t)(ECX));
  /* 1087cde7 call 0x1087c3d0 */
  push32(0x1087cdecu); f_1087c3d0();
  /* 1087cdec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087cdef or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087cdf2 jmp 0x1087ce2e */
  goto L_1087ce2e;
L_1087cdf4:;
  /* 1087cdf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087cdf7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1087cdfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087cdfd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1087ce00 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087ce03 mov ecx, dword ptr [edx*4 + 0x108a2020] */
  ECX = (r32((uint32_t)(EDX*4 + 0x108a2020)));
  /* 1087ce0a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1087ce0e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1087ce11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ce14 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1087ce17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ce1a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1087ce1d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087ce20 mov eax, dword ptr [eax*4 + 0x108a2020] */
  EAX = (r32((uint32_t)(EAX*4 + 0x108a2020)));
  /* 1087ce27 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1087ce2b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1087ce2e:;
  /* 1087ce2e mov esp, ebp */
  ESP = (EBP);
  /* 1087ce30 pop ebp */
  EBP = (pop32());
  /* 1087ce31 ret  */
  ESPCHK(0x1087cd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce40 @ 0x1087ce40 (130 bytes, 43 insns) */
void f_1087ce40(void) {
  FTRACE(0x1087ce40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087ce40 push ebp */
  push32((uint32_t)(EBP));
  /* 1087ce41 mov ebp, esp */
  EBP = (ESP);
  /* 1087ce43 push ecx */
  push32((uint32_t)(ECX));
  /* 1087ce44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ce47 cmp eax, dword ptr [0x108a215c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108a215c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ce4d jae 0x1087ce71 */
  if (!C.cf) goto L_1087ce71;
  /* 1087ce4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ce52 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1087ce55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ce58 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1087ce5b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087ce5e mov eax, dword ptr [ecx*4 + 0x108a2020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108a2020)));
  /* 1087ce65 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1087ce6a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1087ce6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087ce6f jne 0x1087ce8c */
  if (!C.zf) goto L_1087ce8c;
L_1087ce71:;
  /* 1087ce71 call 0x1087c470 */
  push32(0x1087ce76u); f_1087c470();
  /* 1087ce76 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1087ce7c call 0x1087c480 */
  push32(0x1087ce81u); f_1087c480();
  /* 1087ce81 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1087ce87 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087ce8a jmp 0x1087cebe */
  goto L_1087cebe;
L_1087ce8c:;
  /* 1087ce8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ce8f push edx */
  push32((uint32_t)(EDX));
  /* 1087ce90 call 0x1087dc90 */
  push32(0x1087ce95u); f_1087dc90();
  /* 1087ce95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ce98 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087ce9b push eax */
  push32((uint32_t)(EAX));
  /* 1087ce9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087ce9f push ecx */
  push32((uint32_t)(ECX));
  /* 1087cea0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087cea3 push edx */
  push32((uint32_t)(EDX));
  /* 1087cea4 call 0x1087ced0 */
  push32(0x1087cea9u); f_1087ced0();
  /* 1087cea9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ceac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087ceaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ceb2 push eax */
  push32((uint32_t)(EAX));
  /* 1087ceb3 call 0x1087dd20 */
  push32(0x1087ceb8u); f_1087dd20();
  /* 1087ceb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087cebb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1087cebe:;
  /* 1087cebe mov esp, ebp */
  ESP = (EBP);
  /* 1087cec0 pop ebp */
  EBP = (pop32());
  /* 1087cec1 ret  */
  ESPCHK(0x1087ce40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ced0 @ 0x1087ced0 (627 bytes, 182 insns) */
void f_1087ced0(void) {
  FTRACE(0x1087ced0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087ced0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087ced1 mov ebp, esp */
  EBP = (ESP);
  /* 1087ced3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087ced9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1087cee0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087cee3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1087cee9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ceed jne 0x1087cef6 */
  if (!C.zf) goto L_1087cef6;
  /* 1087ceef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087cef1 jmp 0x1087d13f */
  goto L_1087d13f;
L_1087cef6:;
  /* 1087cef6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087cef9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1087cefc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ceff and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1087cf02 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087cf05 mov eax, dword ptr [ecx*4 + 0x108a2020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108a2020)));
  /* 1087cf0c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1087cf11 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1087cf14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087cf16 je 0x1087cf28 */
  if (C.zf) goto L_1087cf28;
  /* 1087cf18 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087cf1a push 0 */
  push32((uint32_t)(0x0u));
  /* 1087cf1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087cf1f push edx */
  push32((uint32_t)(EDX));
  /* 1087cf20 call 0x1087cd80 */
  push32(0x1087cf25u); f_1087cd80();
  /* 1087cf25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087cf28:;
  /* 1087cf28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087cf2b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1087cf2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087cf31 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1087cf34 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087cf37 mov edx, dword ptr [eax*4 + 0x108a2020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108a2020)));
  /* 1087cf3e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1087cf43 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1087cf48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087cf4a je 0x1087d05c */
  if (C.zf) goto L_1087d05c;
  /* 1087cf50 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087cf53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1087cf56 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1087cf5d:;
  /* 1087cf5d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087cf60 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087cf63 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087cf66 jae 0x1087d05a */
  if (!C.cf) goto L_1087d05a;
  /* 1087cf6c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1087cf72 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1087cf75:;
  /* 1087cf75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087cf78 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1087cf7e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087cf80 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087cf86 jge 0x1087cfe7 */
  if ((C.sf==C.of)) goto L_1087cfe7;
  /* 1087cf88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087cf8b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087cf8e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087cf91 jae 0x1087cfe7 */
  if (!C.cf) goto L_1087cfe7;
  /* 1087cf93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087cf96 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1087cf98 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1087cf9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087cfa1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087cfa4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087cfa7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1087cfae cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087cfb1 jne 0x1087cfd1 */
  if (!C.zf) goto L_1087cfd1;
  /* 1087cfb3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1087cfb9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087cfbc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1087cfc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087cfc5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1087cfc8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087cfcb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087cfce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1087cfd1:;
  /* 1087cfd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087cfd4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1087cfda mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1087cfdc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087cfdf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087cfe2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087cfe5 jmp 0x1087cf75 */
  goto L_1087cf75;
L_1087cfe7:;
  /* 1087cfe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087cfe9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1087cfef push edx */
  push32((uint32_t)(EDX));
  /* 1087cff0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087cff3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1087cff9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087cffb push eax */
  push32((uint32_t)(EAX));
  /* 1087cffc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1087d002 push edx */
  push32((uint32_t)(EDX));
  /* 1087d003 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d006 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1087d009 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d00c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1087d00f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087d012 mov edx, dword ptr [eax*4 + 0x108a2020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108a2020)));
  /* 1087d019 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1087d01c push eax */
  push32((uint32_t)(EAX));
  /* 1087d01d call dword ptr [0x108a3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3374))), 0x1087d023u);
  /* 1087d023 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087d025 je 0x1087d04a */
  if (C.zf) goto L_1087d04a;
  /* 1087d027 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087d02a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d030 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1087d033 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087d036 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1087d03c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087d03e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d044 jge 0x1087d048 */
  if ((C.sf==C.of)) goto L_1087d048;
  /* 1087d046 jmp 0x1087d05a */
  goto L_1087d05a;
L_1087d048:;
  /* 1087d048 jmp 0x1087d055 */
  goto L_1087d055;
L_1087d04a:;
  /* 1087d04a call dword ptr [0x108a33b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33b4))), 0x1087d050u);
  /* 1087d050 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1087d053 jmp 0x1087d05a */
  goto L_1087d05a;
L_1087d055:;
  /* 1087d055 jmp 0x1087cf5d */
  goto L_1087cf5d;
L_1087d05a:;
  /* 1087d05a jmp 0x1087d0ac */
  goto L_1087d0ac;
L_1087d05c:;
  /* 1087d05c push 0 */
  push32((uint32_t)(0x0u));
  /* 1087d05e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1087d064 push ecx */
  push32((uint32_t)(ECX));
  /* 1087d065 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087d068 push edx */
  push32((uint32_t)(EDX));
  /* 1087d069 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087d06c push eax */
  push32((uint32_t)(EAX));
  /* 1087d06d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d070 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1087d073 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d076 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1087d079 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087d07c mov eax, dword ptr [ecx*4 + 0x108a2020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108a2020)));
  /* 1087d083 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1087d086 push ecx */
  push32((uint32_t)(ECX));
  /* 1087d087 call dword ptr [0x108a3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3374))), 0x1087d08du);
  /* 1087d08d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087d08f je 0x1087d0a3 */
  if (C.zf) goto L_1087d0a3;
  /* 1087d091 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1087d098 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1087d09e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1087d0a1 jmp 0x1087d0ac */
  goto L_1087d0ac;
L_1087d0a3:;
  /* 1087d0a3 call dword ptr [0x108a33b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33b4))), 0x1087d0a9u);
  /* 1087d0a9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1087d0ac:;
  /* 1087d0ac cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d0b0 jne 0x1087d136 */
  if (!C.zf) goto L_1087d136;
  /* 1087d0b6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d0ba je 0x1087d0ea */
  if (C.zf) goto L_1087d0ea;
  /* 1087d0bc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d0c0 jne 0x1087d0d9 */
  if (!C.zf) goto L_1087d0d9;
  /* 1087d0c2 call 0x1087c470 */
  push32(0x1087d0c7u); f_1087c470();
  /* 1087d0c7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1087d0cd call 0x1087c480 */
  push32(0x1087d0d2u); f_1087c480();
  /* 1087d0d2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087d0d5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1087d0d7 jmp 0x1087d0e5 */
  goto L_1087d0e5;
L_1087d0d9:;
  /* 1087d0d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087d0dc push edx */
  push32((uint32_t)(EDX));
  /* 1087d0dd call 0x1087c3d0 */
  push32(0x1087d0e2u); f_1087c3d0();
  /* 1087d0e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087d0e5:;
  /* 1087d0e5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087d0e8 jmp 0x1087d13f */
  goto L_1087d13f;
L_1087d0ea:;
  /* 1087d0ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d0ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1087d0f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d0f3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1087d0f6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087d0f9 mov edx, dword ptr [eax*4 + 0x108a2020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108a2020)));
  /* 1087d100 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1087d105 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1087d108 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087d10a je 0x1087d11b */
  if (C.zf) goto L_1087d11b;
  /* 1087d10c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087d10f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1087d112 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d115 jne 0x1087d11b */
  if (!C.zf) goto L_1087d11b;
  /* 1087d117 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087d119 jmp 0x1087d13f */
  goto L_1087d13f;
L_1087d11b:;
  /* 1087d11b call 0x1087c470 */
  push32(0x1087d120u); f_1087c470();
  /* 1087d120 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1087d126 call 0x1087c480 */
  push32(0x1087d12bu); f_1087c480();
  /* 1087d12b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1087d131 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087d134 jmp 0x1087d13f */
  goto L_1087d13f;
L_1087d136:;
  /* 1087d136 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087d139 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1087d13f:;
  /* 1087d13f mov esp, ebp */
  ESP = (EBP);
  /* 1087d141 pop ebp */
  EBP = (pop32());
  /* 1087d142 ret  */
  ESPCHK(0x1087ced0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d150 @ 0x1087d150 (199 bytes, 68 insns) */
void f_1087d150(void) {
  FTRACE(0x1087d150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087d150 push ebp */
  push32((uint32_t)(EBP));
  /* 1087d151 mov ebp, esp */
  EBP = (ESP);
  /* 1087d153 push ecx */
  push32((uint32_t)(ECX));
  /* 1087d154 push ebx */
  push32((uint32_t)(EBX));
  /* 1087d155 push esi */
  push32((uint32_t)(ESI));
  /* 1087d156 push edi */
  push32((uint32_t)(EDI));
L_1087d157:;
  /* 1087d157 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d15b jne 0x1087d17b */
  if (!C.zf) goto L_1087d17b;
  /* 1087d15d push 0x1089c024 */
  push32((uint32_t)(0x1089c024u));
  /* 1087d162 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087d164 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1087d166 push 0x1089c0f0 */
  push32((uint32_t)(0x1089c0f0u));
  /* 1087d16b push 2 */
  push32((uint32_t)(0x2u));
  /* 1087d16d call 0x10873660 */
  push32(0x1087d172u); f_10873660();
  /* 1087d172 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d175 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d178 jne 0x1087d17b */
  if (!C.zf) goto L_1087d17b;
  /* 1087d17a int3  */
  x86_unimpl("int3 @ 0x1087d17a");
L_1087d17b:;
  /* 1087d17b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087d17d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087d17f jne 0x1087d157 */
  if (!C.zf) goto L_1087d157;
  /* 1087d181 mov ecx, dword ptr [0x108a0854] */
  ECX = (r32((uint32_t)(0x108a0854)));
  /* 1087d187 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d18a mov dword ptr [0x108a0854], ecx */
  w32((uint32_t)(0x108a0854), (ECX));
  /* 1087d190 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d193 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1087d196 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1087d198 push 0x1089c0f0 */
  push32((uint32_t)(0x1089c0f0u));
  /* 1087d19d push 2 */
  push32((uint32_t)(0x2u));
  /* 1087d19f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1087d1a4 call 0x108745a0 */
  push32(0x1087d1a9u); f_108745a0();
  /* 1087d1a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d1ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d1af mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1087d1b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d1b5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d1b9 je 0x1087d1d6 */
  if (C.zf) goto L_1087d1d6;
  /* 1087d1bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d1be mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1087d1c1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1087d1c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d1c7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1087d1ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d1cd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1087d1d4 jmp 0x1087d1fb */
  goto L_1087d1fb;
L_1087d1d6:;
  /* 1087d1d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d1d9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1087d1dc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1087d1df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d1e2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1087d1e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d1e8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d1eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d1ee mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1087d1f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d1f4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1087d1fb:;
  /* 1087d1fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d1fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d201 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1087d204 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1087d206 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d209 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1087d210 pop edi */
  EDI = (pop32());
  /* 1087d211 pop esi */
  ESI = (pop32());
  /* 1087d212 pop ebx */
  EBX = (pop32());
  /* 1087d213 mov esp, ebp */
  ESP = (EBP);
  /* 1087d215 pop ebp */
  EBP = (pop32());
  /* 1087d216 ret  */
  ESPCHK(0x1087d150u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1087d220 (50 bytes, 17 insns) */
void f_1087d220(void) {
  FTRACE(0x1087d220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087d220 push ebp */
  push32((uint32_t)(EBP));
  /* 1087d221 mov ebp, esp */
  EBP = (ESP);
  /* 1087d223 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d226 cmp eax, dword ptr [0x108a215c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108a215c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d22c jb 0x1087d232 */
  if (C.cf) goto L_1087d232;
  /* 1087d22e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087d230 jmp 0x1087d250 */
  goto L_1087d250;
L_1087d232:;
  /* 1087d232 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d235 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1087d238 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d23b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1087d23e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087d241 mov eax, dword ptr [ecx*4 + 0x108a2020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108a2020)));
  /* 1087d248 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1087d24d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1087d250:;
  /* 1087d250 pop ebp */
  EBP = (pop32());
  /* 1087d251 ret  */
  ESPCHK(0x1087d220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d260 @ 0x1087d260 (300 bytes, 80 insns) */
void f_1087d260(void) {
  FTRACE(0x1087d260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087d260 push ebp */
  push32((uint32_t)(EBP));
  /* 1087d261 mov ebp, esp */
  EBP = (ESP);
  /* 1087d263 push ecx */
  push32((uint32_t)(ECX));
  /* 1087d264 cmp dword ptr [0x108a1d20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a1d20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d26b jne 0x1087d279 */
  if (!C.zf) goto L_1087d279;
  /* 1087d26d mov dword ptr [0x108a1d20], 0x200 */
  w32((uint32_t)(0x108a1d20), (0x200u));
  /* 1087d277 jmp 0x1087d28c */
  goto L_1087d28c;
L_1087d279:;
  /* 1087d279 cmp dword ptr [0x108a1d20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x108a1d20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d280 jge 0x1087d28c */
  if ((C.sf==C.of)) goto L_1087d28c;
  /* 1087d282 mov dword ptr [0x108a1d20], 0x14 */
  w32((uint32_t)(0x108a1d20), (0x14u));
L_1087d28c:;
  /* 1087d28c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1087d291 push 0x1089c0fc */
  push32((uint32_t)(0x1089c0fcu));
  /* 1087d296 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087d298 push 4 */
  push32((uint32_t)(0x4u));
  /* 1087d29a mov eax, dword ptr [0x108a1d20] */
  EAX = (r32((uint32_t)(0x108a1d20)));
  /* 1087d29f push eax */
  push32((uint32_t)(EAX));
  /* 1087d2a0 call 0x108749b0 */
  push32(0x1087d2a5u); f_108749b0();
  /* 1087d2a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d2a8 mov dword ptr [0x108a09c8], eax */
  w32((uint32_t)(0x108a09c8), (EAX));
  /* 1087d2ad cmp dword ptr [0x108a09c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a09c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d2b4 jne 0x1087d2f5 */
  if (!C.zf) goto L_1087d2f5;
  /* 1087d2b6 mov dword ptr [0x108a1d20], 0x14 */
  w32((uint32_t)(0x108a1d20), (0x14u));
  /* 1087d2c0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1087d2c5 push 0x1089c0fc */
  push32((uint32_t)(0x1089c0fcu));
  /* 1087d2ca push 2 */
  push32((uint32_t)(0x2u));
  /* 1087d2cc push 4 */
  push32((uint32_t)(0x4u));
  /* 1087d2ce mov ecx, dword ptr [0x108a1d20] */
  ECX = (r32((uint32_t)(0x108a1d20)));
  /* 1087d2d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1087d2d5 call 0x108749b0 */
  push32(0x1087d2dau); f_108749b0();
  /* 1087d2da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d2dd mov dword ptr [0x108a09c8], eax */
  w32((uint32_t)(0x108a09c8), (EAX));
  /* 1087d2e2 cmp dword ptr [0x108a09c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a09c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d2e9 jne 0x1087d2f5 */
  if (!C.zf) goto L_1087d2f5;
  /* 1087d2eb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1087d2ed call 0x10873510 */
  push32(0x1087d2f2u); f_10873510();
  /* 1087d2f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087d2f5:;
  /* 1087d2f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1087d2fc jmp 0x1087d307 */
  goto L_1087d307;
L_1087d2fe:;
  /* 1087d2fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d301 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d304 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1087d307:;
  /* 1087d307 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d30b jge 0x1087d326 */
  if ((C.sf==C.of)) goto L_1087d326;
  /* 1087d30d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d310 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1087d313 add eax, 0x1089f120 */
  { uint32_t _a=(EAX),_b=(0x1089f120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d318 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d31b mov edx, dword ptr [0x108a09c8] */
  EDX = (r32((uint32_t)(0x108a09c8)));
  /* 1087d321 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1087d324 jmp 0x1087d2fe */
  goto L_1087d2fe;
L_1087d326:;
  /* 1087d326 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1087d32d jmp 0x1087d338 */
  goto L_1087d338;
L_1087d32f:;
  /* 1087d32f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d332 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d335 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1087d338:;
  /* 1087d338 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d33c jge 0x1087d388 */
  if ((C.sf==C.of)) goto L_1087d388;
  /* 1087d33e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d341 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1087d344 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d347 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1087d34a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087d34d mov eax, dword ptr [ecx*4 + 0x108a2020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108a2020)));
  /* 1087d354 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d358 je 0x1087d376 */
  if (C.zf) goto L_1087d376;
  /* 1087d35a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d35d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1087d360 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d363 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1087d366 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087d369 mov eax, dword ptr [ecx*4 + 0x108a2020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108a2020)));
  /* 1087d370 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d374 jne 0x1087d386 */
  if (!C.zf) goto L_1087d386;
L_1087d376:;
  /* 1087d376 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d379 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1087d37c mov dword ptr [ecx + 0x1089f130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1089f130), (0xffffffffu));
L_1087d386:;
  /* 1087d386 jmp 0x1087d32f */
  goto L_1087d32f;
L_1087d388:;
  /* 1087d388 mov esp, ebp */
  ESP = (EBP);
  /* 1087d38a pop ebp */
  EBP = (pop32());
  /* 1087d38b ret  */
  ESPCHK(0x1087d260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d390 @ 0x1087d390 (26 bytes, 9 insns) */
void f_1087d390(void) {
  FTRACE(0x1087d390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087d390 push ebp */
  push32((uint32_t)(EBP));
  /* 1087d391 mov ebp, esp */
  EBP = (ESP);
  /* 1087d393 call 0x1087df90 */
  push32(0x1087d398u); f_1087df90();
  /* 1087d398 movsx eax, byte ptr [0x108a066c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x108a066c))));
  /* 1087d39f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087d3a1 je 0x1087d3a8 */
  if (C.zf) goto L_1087d3a8;
  /* 1087d3a3 call 0x1087dd50 */
  push32(0x1087d3a8u); f_1087dd50();
L_1087d3a8:;
  /* 1087d3a8 pop ebp */
  EBP = (pop32());
  /* 1087d3a9 ret  */
  ESPCHK(0x1087d390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3b0 @ 0x1087d3b0 (61 bytes, 20 insns) */
void f_1087d3b0(void) {
  FTRACE(0x1087d3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087d3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087d3b1 mov ebp, esp */
  EBP = (ESP);
  /* 1087d3b3 cmp dword ptr [ebp + 8], 0x1089f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1089f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d3ba jb 0x1087d3de */
  if (C.cf) goto L_1087d3de;
  /* 1087d3bc cmp dword ptr [ebp + 8], 0x1089f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1089f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d3c3 ja 0x1087d3de */
  if ((!C.cf&&!C.zf)) goto L_1087d3de;
  /* 1087d3c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d3c8 sub eax, 0x1089f120 */
  { uint32_t _a=(EAX),_b=(0x1089f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087d3cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1087d3d0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d3d3 push eax */
  push32((uint32_t)(EAX));
  /* 1087d3d4 call 0x10877fa0 */
  push32(0x1087d3d9u); f_10877fa0();
  /* 1087d3d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d3dc jmp 0x1087d3eb */
  goto L_1087d3eb;
L_1087d3de:;
  /* 1087d3de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d3e1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d3e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1087d3e5 call dword ptr [0x108a3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3338))), 0x1087d3ebu);
L_1087d3eb:;
  /* 1087d3eb pop ebp */
  EBP = (pop32());
  /* 1087d3ec ret  */
  ESPCHK(0x1087d3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3f0 @ 0x1087d3f0 (41 bytes, 16 insns) */
void f_1087d3f0(void) {
  FTRACE(0x1087d3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087d3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087d3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1087d3f3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d3f7 jge 0x1087d40a */
  if ((C.sf==C.of)) goto L_1087d40a;
  /* 1087d3f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d3fc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d3ff push eax */
  push32((uint32_t)(EAX));
  /* 1087d400 call 0x10877fa0 */
  push32(0x1087d405u); f_10877fa0();
  /* 1087d405 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d408 jmp 0x1087d417 */
  goto L_1087d417;
L_1087d40a:;
  /* 1087d40a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087d40d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d410 push ecx */
  push32((uint32_t)(ECX));
  /* 1087d411 call dword ptr [0x108a3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3338))), 0x1087d417u);
L_1087d417:;
  /* 1087d417 pop ebp */
  EBP = (pop32());
  /* 1087d418 ret  */
  ESPCHK(0x1087d3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d420 @ 0x1087d420 (61 bytes, 20 insns) */
void f_1087d420(void) {
  FTRACE(0x1087d420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087d420 push ebp */
  push32((uint32_t)(EBP));
  /* 1087d421 mov ebp, esp */
  EBP = (ESP);
  /* 1087d423 cmp dword ptr [ebp + 8], 0x1089f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1089f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d42a jb 0x1087d44e */
  if (C.cf) goto L_1087d44e;
  /* 1087d42c cmp dword ptr [ebp + 8], 0x1089f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1089f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d433 ja 0x1087d44e */
  if ((!C.cf&&!C.zf)) goto L_1087d44e;
  /* 1087d435 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d438 sub eax, 0x1089f120 */
  { uint32_t _a=(EAX),_b=(0x1089f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087d43d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1087d440 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d443 push eax */
  push32((uint32_t)(EAX));
  /* 1087d444 call 0x10878040 */
  push32(0x1087d449u); f_10878040();
  /* 1087d449 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d44c jmp 0x1087d45b */
  goto L_1087d45b;
L_1087d44e:;
  /* 1087d44e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d451 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d454 push ecx */
  push32((uint32_t)(ECX));
  /* 1087d455 call dword ptr [0x108a3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3334))), 0x1087d45bu);
L_1087d45b:;
  /* 1087d45b pop ebp */
  EBP = (pop32());
  /* 1087d45c ret  */
  ESPCHK(0x1087d420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d460 @ 0x1087d460 (41 bytes, 16 insns) */
void f_1087d460(void) {
  FTRACE(0x1087d460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087d460 push ebp */
  push32((uint32_t)(EBP));
  /* 1087d461 mov ebp, esp */
  EBP = (ESP);
  /* 1087d463 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d467 jge 0x1087d47a */
  if ((C.sf==C.of)) goto L_1087d47a;
  /* 1087d469 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d46c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d46f push eax */
  push32((uint32_t)(EAX));
  /* 1087d470 call 0x10878040 */
  push32(0x1087d475u); f_10878040();
  /* 1087d475 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d478 jmp 0x1087d487 */
  goto L_1087d487;
L_1087d47a:;
  /* 1087d47a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087d47d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d480 push ecx */
  push32((uint32_t)(ECX));
  /* 1087d481 call dword ptr [0x108a3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3334))), 0x1087d487u);
L_1087d487:;
  /* 1087d487 pop ebp */
  EBP = (pop32());
  /* 1087d488 ret  */
  ESPCHK(0x1087d460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d490 @ 0x1087d490 (119 bytes, 34 insns) */
void f_1087d490(void) {
  FTRACE(0x1087d490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087d490 push ebp */
  push32((uint32_t)(EBP));
  /* 1087d491 mov ebp, esp */
  EBP = (ESP);
  /* 1087d493 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087d496 push 0x108a09c4 */
  push32((uint32_t)(0x108a09c4u));
  /* 1087d49b call dword ptr [0x108a3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3388))), 0x1087d4a1u);
  /* 1087d4a1 cmp dword ptr [0x108a09b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a09b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d4a8 je 0x1087d4c8 */
  if (C.zf) goto L_1087d4c8;
  /* 1087d4aa push 0x108a09c4 */
  push32((uint32_t)(0x108a09c4u));
  /* 1087d4af call dword ptr [0x108a3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3378))), 0x1087d4b5u);
  /* 1087d4b5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1087d4b7 call 0x10877fa0 */
  push32(0x1087d4bcu); f_10877fa0();
  /* 1087d4bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d4bf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1087d4c6 jmp 0x1087d4cf */
  goto L_1087d4cf;
L_1087d4c8:;
  /* 1087d4c8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1087d4cf:;
  /* 1087d4cf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1087d4d3 push eax */
  push32((uint32_t)(EAX));
  /* 1087d4d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d4d7 push ecx */
  push32((uint32_t)(ECX));
  /* 1087d4d8 call 0x1087d510 */
  push32(0x1087d4ddu); f_1087d510();
  /* 1087d4dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d4e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1087d4e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d4e7 je 0x1087d4f5 */
  if (C.zf) goto L_1087d4f5;
  /* 1087d4e9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1087d4eb call 0x10878040 */
  push32(0x1087d4f0u); f_10878040();
  /* 1087d4f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d4f3 jmp 0x1087d500 */
  goto L_1087d500;
L_1087d4f5:;
  /* 1087d4f5 push 0x108a09c4 */
  push32((uint32_t)(0x108a09c4u));
  /* 1087d4fa call dword ptr [0x108a3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3378))), 0x1087d500u);
L_1087d500:;
  /* 1087d500 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087d503 mov esp, ebp */
  ESP = (EBP);
  /* 1087d505 pop ebp */
  EBP = (pop32());
  /* 1087d506 ret  */
  ESPCHK(0x1087d490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d510 @ 0x1087d510 (160 bytes, 50 insns) */
void f_1087d510(void) {
  FTRACE(0x1087d510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087d510 push ebp */
  push32((uint32_t)(EBP));
  /* 1087d511 mov ebp, esp */
  EBP = (ESP);
  /* 1087d513 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087d516 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d51a jne 0x1087d523 */
  if (!C.zf) goto L_1087d523;
  /* 1087d51c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087d51e jmp 0x1087d5ac */
  goto L_1087d5ac;
L_1087d523:;
  /* 1087d523 cmp dword ptr [0x108a0838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d52a jne 0x1087d55a */
  if (!C.zf) goto L_1087d55a;
  /* 1087d52c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087d52f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087d534 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d539 jle 0x1087d54b */
  if ((C.zf||C.sf!=C.of)) goto L_1087d54b;
  /* 1087d53b call 0x1087c470 */
  push32(0x1087d540u); f_1087c470();
  /* 1087d540 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1087d546 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087d549 jmp 0x1087d5ac */
  goto L_1087d5ac;
L_1087d54b:;
  /* 1087d54b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d54e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1087d551 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1087d553 mov eax, 1 */
  EAX = (0x1u);
  /* 1087d558 jmp 0x1087d5ac */
  goto L_1087d5ac;
L_1087d55a:;
  /* 1087d55a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1087d561 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1087d564 push eax */
  push32((uint32_t)(EAX));
  /* 1087d565 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087d567 mov ecx, dword ptr [0x1089eea4] */
  ECX = (r32((uint32_t)(0x1089eea4)));
  /* 1087d56d push ecx */
  push32((uint32_t)(ECX));
  /* 1087d56e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d571 push edx */
  push32((uint32_t)(EDX));
  /* 1087d572 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087d574 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1087d577 push eax */
  push32((uint32_t)(EAX));
  /* 1087d578 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1087d57d mov ecx, dword ptr [0x108a0848] */
  ECX = (r32((uint32_t)(0x108a0848)));
  /* 1087d583 push ecx */
  push32((uint32_t)(ECX));
  /* 1087d584 call dword ptr [0x108a335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a335c))), 0x1087d58au);
  /* 1087d58a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087d58d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d591 je 0x1087d599 */
  if (C.zf) goto L_1087d599;
  /* 1087d593 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d597 je 0x1087d5a9 */
  if (C.zf) goto L_1087d5a9;
L_1087d599:;
  /* 1087d599 call 0x1087c470 */
  push32(0x1087d59eu); f_1087c470();
  /* 1087d59e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1087d5a4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087d5a7 jmp 0x1087d5ac */
  goto L_1087d5ac;
L_1087d5a9:;
  /* 1087d5a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1087d5ac:;
  /* 1087d5ac mov esp, ebp */
  ESP = (EBP);
  /* 1087d5ae pop ebp */
  EBP = (pop32());
  /* 1087d5af ret  */
  ESPCHK(0x1087d510u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1087d5b0 (32 bytes, 18 insns) */
void f_1087d5b0(void) {
  FTRACE(0x1087d5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087d5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087d5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1087d5b3 push ebx */
  push32((uint32_t)(EBX));
  /* 1087d5b4 push esi */
  push32((uint32_t)(ESI));
  /* 1087d5b5 push edi */
  push32((uint32_t)(EDI));
  /* 1087d5b6 push ebp */
  push32((uint32_t)(EBP));
  /* 1087d5b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087d5b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087d5bb push 0x1087d5c8 */
  push32((uint32_t)(0x1087d5c8u));
  /* 1087d5c0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1087d5c3 call 0x10884cfc */
  push32(0x1087d5c8u); f_10884cfc();
  /* 1087d5c8 pop ebp */
  EBP = (pop32());
  /* 1087d5c9 pop edi */
  EDI = (pop32());
  /* 1087d5ca pop esi */
  ESI = (pop32());
  /* 1087d5cb pop ebx */
  EBX = (pop32());
  /* 1087d5cc mov esp, ebp */
  ESP = (EBP);
  /* 1087d5ce pop ebp */
  EBP = (pop32());
  /* 1087d5cf ret  */
  ESPCHK(0x1087d5b0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1087d5f2 (104 bytes, 33 insns) */
void f_1087d5f2(void) {
  FTRACE(0x1087d5f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087d5f2 push ebx */
  push32((uint32_t)(EBX));
  /* 1087d5f3 push esi */
  push32((uint32_t)(ESI));
  /* 1087d5f4 push edi */
  push32((uint32_t)(EDI));
  /* 1087d5f5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1087d5f9 push eax */
  push32((uint32_t)(EAX));
  /* 1087d5fa push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1087d5fc push 0x1087d5d0 */
  push32((uint32_t)(0x1087d5d0u));
  /* 1087d601 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1087d608 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1087d60f:;
  /* 1087d60f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1087d613 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1087d616 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1087d619 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d61c je 0x1087d64c */
  if (C.zf) goto L_1087d64c;
  /* 1087d61e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d622 je 0x1087d64c */
  if (C.zf) goto L_1087d64c;
  /* 1087d624 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1087d627 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1087d62a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1087d62e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1087d631 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d636 jne 0x1087d64a */
  if (!C.zf) goto L_1087d64a;
  /* 1087d638 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1087d63d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1087d641 call 0x1087d686 */
  push32(0x1087d646u); f_1087d686();
  /* 1087d646 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1087d64au);
L_1087d64a:;
  /* 1087d64a jmp 0x1087d60f */
  goto L_1087d60f;
L_1087d64c:;
  /* 1087d64c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1087d653 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d656 pop edi */
  EDI = (pop32());
  /* 1087d657 pop esi */
  ESI = (pop32());
  /* 1087d658 pop ebx */
  EBX = (pop32());
  /* 1087d659 ret  */
  ESPCHK(0x1087d5f2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d686 @ 0x1087d686 (24 bytes, 10 insns) */
void f_1087d686(void) {
  FTRACE(0x1087d686u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087d686 push ebx */
  push32((uint32_t)(EBX));
  /* 1087d687 push ecx */
  push32((uint32_t)(ECX));
  /* 1087d688 mov ebx, 0x1089f3b8 */
  EBX = (0x1089f3b8u);
  /* 1087d68d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d690 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1087d693 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1087d696 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1087d699 pop ecx */
  ECX = (pop32());
  /* 1087d69a pop ebx */
  EBX = (pop32());
  /* 1087d69b ret 4 */
  ESPCHK(0x1087d686u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d765 @ 0x1087d765 (27 bytes, 11 insns) */
void f_1087d765(void) {
  FTRACE(0x1087d765u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087d765 push ebp */
  push32((uint32_t)(EBP));
  /* 1087d766 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1087d76a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1087d76c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1087d76f push eax */
  push32((uint32_t)(EAX));
  /* 1087d770 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1087d773 push eax */
  push32((uint32_t)(EAX));
  /* 1087d774 call 0x1087d5f2 */
  push32(0x1087d779u); f_1087d5f2();
  /* 1087d779 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d77c pop ebp */
  EBP = (pop32());
  /* 1087d77d ret 4 */
  ESPCHK(0x1087d765u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d780 @ 0x1087d780 (482 bytes, 138 insns) */
void f_1087d780(void) {
  FTRACE(0x1087d780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087d780 push ebp */
  push32((uint32_t)(EBP));
  /* 1087d781 mov ebp, esp */
  EBP = (ESP);
  /* 1087d783 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087d786 push esi */
  push32((uint32_t)(ESI));
  /* 1087d787 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1087d78e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1087d790 call 0x10877fa0 */
  push32(0x1087d795u); f_10877fa0();
  /* 1087d795 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d798 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1087d79f jmp 0x1087d7aa */
  goto L_1087d7aa;
L_1087d7a1:;
  /* 1087d7a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087d7a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d7a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1087d7aa:;
  /* 1087d7aa cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d7ae jge 0x1087d950 */
  if ((C.sf==C.of)) goto L_1087d950;
  /* 1087d7b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087d7b7 cmp dword ptr [ecx*4 + 0x108a2020], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x108a2020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d7bf je 0x1087d8b6 */
  if (C.zf) goto L_1087d8b6;
  /* 1087d7c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087d7c8 mov eax, dword ptr [edx*4 + 0x108a2020] */
  EAX = (r32((uint32_t)(EDX*4 + 0x108a2020)));
  /* 1087d7cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087d7d2 jmp 0x1087d7dd */
  goto L_1087d7dd;
L_1087d7d4:;
  /* 1087d7d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d7d7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d7da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1087d7dd:;
  /* 1087d7dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087d7e0 mov eax, dword ptr [edx*4 + 0x108a2020] */
  EAX = (r32((uint32_t)(EDX*4 + 0x108a2020)));
  /* 1087d7e7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d7ec cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d7ef jae 0x1087d8a6 */
  if (!C.cf) goto L_1087d8a6;
  /* 1087d7f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d7f8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1087d7fc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1087d7ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087d801 jne 0x1087d8a1 */
  if (!C.zf) goto L_1087d8a1;
  /* 1087d807 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d80a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d80e jne 0x1087d849 */
  if (!C.zf) goto L_1087d849;
  /* 1087d810 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1087d812 call 0x10877fa0 */
  push32(0x1087d817u); f_10877fa0();
  /* 1087d817 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d81a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d81d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d821 jne 0x1087d83f */
  if (!C.zf) goto L_1087d83f;
  /* 1087d823 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d826 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d829 push edx */
  push32((uint32_t)(EDX));
  /* 1087d82a call dword ptr [0x108a3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3348))), 0x1087d830u);
  /* 1087d830 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d833 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1087d836 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d839 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d83c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1087d83f:;
  /* 1087d83f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1087d841 call 0x10878040 */
  push32(0x1087d846u); f_10878040();
  /* 1087d846 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087d849:;
  /* 1087d849 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d84c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d84f push eax */
  push32((uint32_t)(EAX));
  /* 1087d850 call dword ptr [0x108a3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3338))), 0x1087d856u);
  /* 1087d856 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d859 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1087d85d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1087d860 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087d862 je 0x1087d876 */
  if (C.zf) goto L_1087d876;
  /* 1087d864 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d867 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d86a push eax */
  push32((uint32_t)(EAX));
  /* 1087d86b call dword ptr [0x108a3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3334))), 0x1087d871u);
  /* 1087d871 jmp 0x1087d7d4 */
  goto L_1087d7d4;
L_1087d876:;
  /* 1087d876 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d879 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1087d87f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087d882 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1087d885 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087d888 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d88b sub eax, dword ptr [edx*4 + 0x108a2020] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x108a2020))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087d892 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1087d893 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1087d898 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1087d89a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d89c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087d89f jmp 0x1087d8a6 */
  goto L_1087d8a6;
L_1087d8a1:;
  /* 1087d8a1 jmp 0x1087d7d4 */
  goto L_1087d7d4;
L_1087d8a6:;
  /* 1087d8a6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d8aa je 0x1087d8b1 */
  if (C.zf) goto L_1087d8b1;
  /* 1087d8ac jmp 0x1087d950 */
  goto L_1087d950;
L_1087d8b1:;
  /* 1087d8b1 jmp 0x1087d94b */
  goto L_1087d94b;
L_1087d8b6:;
  /* 1087d8b6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1087d8b8 push 0x1089c104 */
  push32((uint32_t)(0x1089c104u));
  /* 1087d8bd push 2 */
  push32((uint32_t)(0x2u));
  /* 1087d8bf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1087d8c4 call 0x108745a0 */
  push32(0x1087d8c9u); f_108745a0();
  /* 1087d8c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d8cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087d8cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d8d3 je 0x1087d949 */
  if (C.zf) goto L_1087d949;
  /* 1087d8d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087d8d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d8db mov dword ptr [eax*4 + 0x108a2020], ecx */
  w32((uint32_t)(EAX*4 + 0x108a2020), (ECX));
  /* 1087d8e2 mov edx, dword ptr [0x108a215c] */
  EDX = (r32((uint32_t)(0x108a215c)));
  /* 1087d8e8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d8eb mov dword ptr [0x108a215c], edx */
  w32((uint32_t)(0x108a215c), (EDX));
  /* 1087d8f1 jmp 0x1087d8fc */
  goto L_1087d8fc;
L_1087d8f3:;
  /* 1087d8f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d8f6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d8f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1087d8fc:;
  /* 1087d8fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087d8ff mov edx, dword ptr [ecx*4 + 0x108a2020] */
  EDX = (r32((uint32_t)(ECX*4 + 0x108a2020)));
  /* 1087d906 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d90c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d90f jae 0x1087d934 */
  if (!C.cf) goto L_1087d934;
  /* 1087d911 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d914 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1087d918 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d91b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1087d921 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d924 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1087d928 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087d92b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1087d932 jmp 0x1087d8f3 */
  goto L_1087d8f3;
L_1087d934:;
  /* 1087d934 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087d937 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1087d93a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087d93d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087d940 push edx */
  push32((uint32_t)(EDX));
  /* 1087d941 call 0x1087dc90 */
  push32(0x1087d946u); f_1087dc90();
  /* 1087d946 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087d949:;
  /* 1087d949 jmp 0x1087d950 */
  goto L_1087d950;
L_1087d94b:;
  /* 1087d94b jmp 0x1087d7a1 */
  goto L_1087d7a1;
L_1087d950:;
  /* 1087d950 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1087d952 call 0x10878040 */
  push32(0x1087d957u); f_10878040();
  /* 1087d957 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087d95a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087d95d pop esi */
  ESI = (pop32());
  /* 1087d95e mov esp, ebp */
  ESP = (EBP);
  /* 1087d960 pop ebp */
  EBP = (pop32());
  /* 1087d961 ret  */
  ESPCHK(0x1087d780u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1087d970 (183 bytes, 57 insns) */
void f_1087d970(void) {
  FTRACE(0x1087d970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087d970 push ebp */
  push32((uint32_t)(EBP));
  /* 1087d971 mov ebp, esp */
  EBP = (ESP);
  /* 1087d973 push ecx */
  push32((uint32_t)(ECX));
  /* 1087d974 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d977 cmp eax, dword ptr [0x108a215c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108a215c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d97d jae 0x1087da0a */
  if (!C.cf) goto L_1087da0a;
  /* 1087d983 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d986 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1087d989 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d98c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1087d98f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087d992 mov eax, dword ptr [ecx*4 + 0x108a2020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108a2020)));
  /* 1087d999 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d99d jne 0x1087da0a */
  if (!C.zf) goto L_1087da0a;
  /* 1087d99f cmp dword ptr [0x108a062c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108a062c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d9a6 jne 0x1087d9ea */
  if (!C.zf) goto L_1087d9ea;
  /* 1087d9a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d9ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1087d9ae cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d9b2 je 0x1087d9c2 */
  if (C.zf) goto L_1087d9c2;
  /* 1087d9b4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d9b8 je 0x1087d9d0 */
  if (C.zf) goto L_1087d9d0;
  /* 1087d9ba cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087d9be je 0x1087d9de */
  if (C.zf) goto L_1087d9de;
  /* 1087d9c0 jmp 0x1087d9ea */
  goto L_1087d9ea;
L_1087d9c2:;
  /* 1087d9c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087d9c5 push edx */
  push32((uint32_t)(EDX));
  /* 1087d9c6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1087d9c8 call dword ptr [0x108a3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3300))), 0x1087d9ceu);
  /* 1087d9ce jmp 0x1087d9ea */
  goto L_1087d9ea;
L_1087d9d0:;
  /* 1087d9d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087d9d3 push eax */
  push32((uint32_t)(EAX));
  /* 1087d9d4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1087d9d6 call dword ptr [0x108a3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3300))), 0x1087d9dcu);
  /* 1087d9dc jmp 0x1087d9ea */
  goto L_1087d9ea;
L_1087d9de:;
  /* 1087d9de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087d9e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1087d9e2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1087d9e4 call dword ptr [0x108a3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3300))), 0x1087d9eau);
L_1087d9ea:;
  /* 1087d9ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d9ed sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1087d9f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087d9f3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1087d9f6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087d9f9 mov ecx, dword ptr [edx*4 + 0x108a2020] */
  ECX = (r32((uint32_t)(EDX*4 + 0x108a2020)));
  /* 1087da00 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087da03 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1087da06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087da08 jmp 0x1087da23 */
  goto L_1087da23;
L_1087da0a:;
  /* 1087da0a call 0x1087c470 */
  push32(0x1087da0fu); f_1087c470();
  /* 1087da0f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1087da15 call 0x1087c480 */
  push32(0x1087da1au); f_1087c480();
  /* 1087da1a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1087da20 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1087da23:;
  /* 1087da23 mov esp, ebp */
  ESP = (EBP);
  /* 1087da25 pop ebp */
  EBP = (pop32());
  /* 1087da26 ret  */
  ESPCHK(0x1087d970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da30 @ 0x1087da30 (216 bytes, 63 insns) */
void f_1087da30(void) {
  FTRACE(0x1087da30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087da30 push ebp */
  push32((uint32_t)(EBP));
  /* 1087da31 mov ebp, esp */
  EBP = (ESP);
  /* 1087da33 push ecx */
  push32((uint32_t)(ECX));
  /* 1087da34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087da37 cmp eax, dword ptr [0x108a215c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108a215c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087da3d jae 0x1087daeb */
  if (!C.cf) goto L_1087daeb;
  /* 1087da43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087da46 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1087da49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087da4c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1087da4f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087da52 mov eax, dword ptr [ecx*4 + 0x108a2020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108a2020)));
  /* 1087da59 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1087da5e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1087da61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087da63 je 0x1087daeb */
  if (C.zf) goto L_1087daeb;
  /* 1087da69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087da6c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1087da6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087da72 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1087da75 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087da78 mov ecx, dword ptr [edx*4 + 0x108a2020] */
  ECX = (r32((uint32_t)(EDX*4 + 0x108a2020)));
  /* 1087da7f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087da83 je 0x1087daeb */
  if (C.zf) goto L_1087daeb;
  /* 1087da85 cmp dword ptr [0x108a062c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108a062c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087da8c jne 0x1087daca */
  if (!C.zf) goto L_1087daca;
  /* 1087da8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087da91 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1087da94 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087da98 je 0x1087daa8 */
  if (C.zf) goto L_1087daa8;
  /* 1087da9a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087da9e je 0x1087dab4 */
  if (C.zf) goto L_1087dab4;
  /* 1087daa0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087daa4 je 0x1087dac0 */
  if (C.zf) goto L_1087dac0;
  /* 1087daa6 jmp 0x1087daca */
  goto L_1087daca;
L_1087daa8:;
  /* 1087daa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087daaa push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1087daac call dword ptr [0x108a3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3300))), 0x1087dab2u);
  /* 1087dab2 jmp 0x1087daca */
  goto L_1087daca;
L_1087dab4:;
  /* 1087dab4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087dab6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1087dab8 call dword ptr [0x108a3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3300))), 0x1087dabeu);
  /* 1087dabe jmp 0x1087daca */
  goto L_1087daca;
L_1087dac0:;
  /* 1087dac0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087dac2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1087dac4 call dword ptr [0x108a3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3300))), 0x1087dacau);
L_1087daca:;
  /* 1087daca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087dacd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1087dad0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087dad3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1087dad6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087dad9 mov edx, dword ptr [eax*4 + 0x108a2020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108a2020)));
  /* 1087dae0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1087dae7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087dae9 jmp 0x1087db04 */
  goto L_1087db04;
L_1087daeb:;
  /* 1087daeb call 0x1087c470 */
  push32(0x1087daf0u); f_1087c470();
  /* 1087daf0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1087daf6 call 0x1087c480 */
  push32(0x1087dafbu); f_1087c480();
  /* 1087dafb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1087db01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1087db04:;
  /* 1087db04 mov esp, ebp */
  ESP = (EBP);
  /* 1087db06 pop ebp */
  EBP = (pop32());
  /* 1087db07 ret  */
  ESPCHK(0x1087da30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db10 @ 0x1087db10 (102 bytes, 30 insns) */
void f_1087db10(void) {
  FTRACE(0x1087db10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087db10 push ebp */
  push32((uint32_t)(EBP));
  /* 1087db11 mov ebp, esp */
  EBP = (ESP);
  /* 1087db13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087db16 cmp eax, dword ptr [0x108a215c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108a215c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087db1c jae 0x1087db5b */
  if (!C.cf) goto L_1087db5b;
  /* 1087db1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087db21 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1087db24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087db27 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1087db2a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087db2d mov eax, dword ptr [ecx*4 + 0x108a2020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108a2020)));
  /* 1087db34 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1087db39 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1087db3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087db3e je 0x1087db5b */
  if (C.zf) goto L_1087db5b;
  /* 1087db40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087db43 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1087db46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087db49 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1087db4c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087db4f mov ecx, dword ptr [edx*4 + 0x108a2020] */
  ECX = (r32((uint32_t)(EDX*4 + 0x108a2020)));
  /* 1087db56 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1087db59 jmp 0x1087db74 */
  goto L_1087db74;
L_1087db5b:;
  /* 1087db5b call 0x1087c470 */
  push32(0x1087db60u); f_1087c470();
  /* 1087db60 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1087db66 call 0x1087c480 */
  push32(0x1087db6bu); f_1087c480();
  /* 1087db6b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1087db71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1087db74:;
  /* 1087db74 pop ebp */
  EBP = (pop32());
  /* 1087db75 ret  */
  ESPCHK(0x1087db10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db80 @ 0x1087db80 (260 bytes, 83 insns) */
void f_1087db80(void) {
  FTRACE(0x1087db80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087db80 push ebp */
  push32((uint32_t)(EBP));
  /* 1087db81 mov ebp, esp */
  EBP = (ESP);
  /* 1087db83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087db86 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1087db8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087db8d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1087db90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087db92 je 0x1087db9d */
  if (C.zf) goto L_1087db9d;
  /* 1087db94 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1087db97 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1087db9a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1087db9d:;
  /* 1087db9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087dba0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1087dba6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087dba8 je 0x1087dbb2 */
  if (C.zf) goto L_1087dbb2;
  /* 1087dbaa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1087dbad or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1087dbaf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1087dbb2:;
  /* 1087dbb2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087dbb5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1087dbbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087dbbd je 0x1087dbc8 */
  if (C.zf) goto L_1087dbc8;
  /* 1087dbbf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1087dbc2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1087dbc5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1087dbc8:;
  /* 1087dbc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087dbcb push eax */
  push32((uint32_t)(EAX));
  /* 1087dbcc call dword ptr [0x108a33a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33a0))), 0x1087dbd2u);
  /* 1087dbd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087dbd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087dbd9 jne 0x1087dbf2 */
  if (!C.zf) goto L_1087dbf2;
  /* 1087dbdb call dword ptr [0x108a33b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33b4))), 0x1087dbe1u);
  /* 1087dbe1 push eax */
  push32((uint32_t)(EAX));
  /* 1087dbe2 call 0x1087c3d0 */
  push32(0x1087dbe7u); f_1087c3d0();
  /* 1087dbe7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087dbea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087dbed jmp 0x1087dc80 */
  goto L_1087dc80;
L_1087dbf2:;
  /* 1087dbf2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087dbf6 jne 0x1087dc03 */
  if (!C.zf) goto L_1087dc03;
  /* 1087dbf8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1087dbfb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1087dbfe mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1087dc01 jmp 0x1087dc12 */
  goto L_1087dc12;
L_1087dc03:;
  /* 1087dc03 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087dc07 jne 0x1087dc12 */
  if (!C.zf) goto L_1087dc12;
  /* 1087dc09 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1087dc0c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1087dc0f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1087dc12:;
  /* 1087dc12 call 0x1087d780 */
  push32(0x1087dc17u); f_1087d780();
  /* 1087dc17 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1087dc1a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087dc1e jne 0x1087dc3b */
  if (!C.zf) goto L_1087dc3b;
  /* 1087dc20 call 0x1087c470 */
  push32(0x1087dc25u); f_1087c470();
  /* 1087dc25 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1087dc2b call 0x1087c480 */
  push32(0x1087dc30u); f_1087c480();
  /* 1087dc30 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1087dc36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087dc39 jmp 0x1087dc80 */
  goto L_1087dc80;
L_1087dc3b:;
  /* 1087dc3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087dc3e push eax */
  push32((uint32_t)(EAX));
  /* 1087dc3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087dc42 push ecx */
  push32((uint32_t)(ECX));
  /* 1087dc43 call 0x1087d970 */
  push32(0x1087dc48u); f_1087d970();
  /* 1087dc48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087dc4b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1087dc4e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1087dc51 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1087dc54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087dc57 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1087dc5a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087dc5d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1087dc60 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087dc63 mov edx, dword ptr [eax*4 + 0x108a2020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108a2020)));
  /* 1087dc6a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1087dc6d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1087dc71 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087dc74 push ecx */
  push32((uint32_t)(ECX));
  /* 1087dc75 call 0x1087dd20 */
  push32(0x1087dc7au); f_1087dd20();
  /* 1087dc7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087dc7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1087dc80:;
  /* 1087dc80 mov esp, ebp */
  ESP = (EBP);
  /* 1087dc82 pop ebp */
  EBP = (pop32());
  /* 1087dc83 ret  */
  ESPCHK(0x1087db80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc90 @ 0x1087dc90 (134 bytes, 44 insns) */
void f_1087dc90(void) {
  FTRACE(0x1087dc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087dc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1087dc91 mov ebp, esp */
  EBP = (ESP);
  /* 1087dc93 push ecx */
  push32((uint32_t)(ECX));
  /* 1087dc94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087dc97 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1087dc9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087dc9d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1087dca0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087dca3 mov edx, dword ptr [eax*4 + 0x108a2020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108a2020)));
  /* 1087dcaa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087dcac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1087dcaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087dcb2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087dcb6 jne 0x1087dcf1 */
  if (!C.zf) goto L_1087dcf1;
  /* 1087dcb8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1087dcba call 0x10877fa0 */
  push32(0x1087dcbfu); f_10877fa0();
  /* 1087dcbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087dcc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087dcc5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087dcc9 jne 0x1087dce7 */
  if (!C.zf) goto L_1087dce7;
  /* 1087dccb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087dcce add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087dcd1 push edx */
  push32((uint32_t)(EDX));
  /* 1087dcd2 call dword ptr [0x108a3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3348))), 0x1087dcd8u);
  /* 1087dcd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087dcdb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1087dcde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087dce1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087dce4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1087dce7:;
  /* 1087dce7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1087dce9 call 0x10878040 */
  push32(0x1087dceeu); f_10878040();
  /* 1087dcee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087dcf1:;
  /* 1087dcf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087dcf4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1087dcf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087dcfa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1087dcfd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087dd00 mov edx, dword ptr [eax*4 + 0x108a2020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108a2020)));
  /* 1087dd07 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1087dd0b push eax */
  push32((uint32_t)(EAX));
  /* 1087dd0c call dword ptr [0x108a3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3338))), 0x1087dd12u);
  /* 1087dd12 mov esp, ebp */
  ESP = (EBP);
  /* 1087dd14 pop ebp */
  EBP = (pop32());
  /* 1087dd15 ret  */
  ESPCHK(0x1087dc90u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1087dd20 (38 bytes, 13 insns) */
void f_1087dd20(void) {
  FTRACE(0x1087dd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087dd20 push ebp */
  push32((uint32_t)(EBP));
  /* 1087dd21 mov ebp, esp */
  EBP = (ESP);
  /* 1087dd23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087dd26 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1087dd29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087dd2c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1087dd2f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087dd32 mov edx, dword ptr [eax*4 + 0x108a2020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108a2020)));
  /* 1087dd39 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1087dd3d push eax */
  push32((uint32_t)(EAX));
  /* 1087dd3e call dword ptr [0x108a3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3334))), 0x1087dd44u);
  /* 1087dd44 pop ebp */
  EBP = (pop32());
  /* 1087dd45 ret  */
  ESPCHK(0x1087dd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd50 @ 0x1087dd50 (218 bytes, 63 insns) */
void f_1087dd50(void) {
  FTRACE(0x1087dd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087dd50 push ebp */
  push32((uint32_t)(EBP));
  /* 1087dd51 mov ebp, esp */
  EBP = (ESP);
  /* 1087dd53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087dd56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1087dd5d push 2 */
  push32((uint32_t)(0x2u));
  /* 1087dd5f call 0x10877fa0 */
  push32(0x1087dd64u); f_10877fa0();
  /* 1087dd64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087dd67 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1087dd6e jmp 0x1087dd79 */
  goto L_1087dd79;
L_1087dd70:;
  /* 1087dd70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087dd73 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087dd76 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1087dd79:;
  /* 1087dd79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087dd7c cmp ecx, dword ptr [0x108a1d20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108a1d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087dd82 jge 0x1087de19 */
  if ((C.sf==C.of)) goto L_1087de19;
  /* 1087dd88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087dd8b mov eax, dword ptr [0x108a09c8] */
  EAX = (r32((uint32_t)(0x108a09c8)));
  /* 1087dd90 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087dd94 je 0x1087de14 */
  if (C.zf) goto L_1087de14;
  /* 1087dd96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087dd99 mov edx, dword ptr [0x108a09c8] */
  EDX = (r32((uint32_t)(0x108a09c8)));
  /* 1087dd9f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1087dda2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1087dda5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1087ddab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087ddad je 0x1087ddd1 */
  if (C.zf) goto L_1087ddd1;
  /* 1087ddaf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087ddb2 mov eax, dword ptr [0x108a09c8] */
  EAX = (r32((uint32_t)(0x108a09c8)));
  /* 1087ddb7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1087ddba push ecx */
  push32((uint32_t)(ECX));
  /* 1087ddbb call 0x1087eb40 */
  push32(0x1087ddc0u); f_1087eb40();
  /* 1087ddc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ddc3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ddc6 je 0x1087ddd1 */
  if (C.zf) goto L_1087ddd1;
  /* 1087ddc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087ddcb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ddce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1087ddd1:;
  /* 1087ddd1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ddd5 jl 0x1087de14 */
  if ((C.sf!=C.of)) goto L_1087de14;
  /* 1087ddd7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087ddda mov ecx, dword ptr [0x108a09c8] */
  ECX = (r32((uint32_t)(0x108a09c8)));
  /* 1087dde0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1087dde3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087dde6 push edx */
  push32((uint32_t)(EDX));
  /* 1087dde7 call dword ptr [0x108a33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33c4))), 0x1087ddedu);
  /* 1087dded push 2 */
  push32((uint32_t)(0x2u));
  /* 1087ddef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087ddf2 mov ecx, dword ptr [0x108a09c8] */
  ECX = (r32((uint32_t)(0x108a09c8)));
  /* 1087ddf8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1087ddfb push edx */
  push32((uint32_t)(EDX));
  /* 1087ddfc call 0x10875030 */
  push32(0x1087de01u); f_10875030();
  /* 1087de01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087de04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087de07 mov ecx, dword ptr [0x108a09c8] */
  ECX = (r32((uint32_t)(0x108a09c8)));
  /* 1087de0d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1087de14:;
  /* 1087de14 jmp 0x1087dd70 */
  goto L_1087dd70;
L_1087de19:;
  /* 1087de19 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087de1b call 0x10878040 */
  push32(0x1087de20u); f_10878040();
  /* 1087de20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087de23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087de26 mov esp, ebp */
  ESP = (EBP);
  /* 1087de28 pop ebp */
  EBP = (pop32());
  /* 1087de29 ret  */
  ESPCHK(0x1087dd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de30 @ 0x1087de30 (68 bytes, 26 insns) */
void f_1087de30(void) {
  FTRACE(0x1087de30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087de30 push ebp */
  push32((uint32_t)(EBP));
  /* 1087de31 mov ebp, esp */
  EBP = (ESP);
  /* 1087de33 push ecx */
  push32((uint32_t)(ECX));
  /* 1087de34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087de38 jne 0x1087de46 */
  if (!C.zf) goto L_1087de46;
  /* 1087de3a push 0 */
  push32((uint32_t)(0x0u));
  /* 1087de3c call 0x1087dfa0 */
  push32(0x1087de41u); f_1087dfa0();
  /* 1087de41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087de44 jmp 0x1087de70 */
  goto L_1087de70;
L_1087de46:;
  /* 1087de46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087de49 push eax */
  push32((uint32_t)(EAX));
  /* 1087de4a call 0x1087d3b0 */
  push32(0x1087de4fu); f_1087d3b0();
  /* 1087de4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087de52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087de55 push ecx */
  push32((uint32_t)(ECX));
  /* 1087de56 call 0x1087de80 */
  push32(0x1087de5bu); f_1087de80();
  /* 1087de5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087de5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087de61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087de64 push edx */
  push32((uint32_t)(EDX));
  /* 1087de65 call 0x1087d420 */
  push32(0x1087de6au); f_1087d420();
  /* 1087de6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087de6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1087de70:;
  /* 1087de70 mov esp, ebp */
  ESP = (EBP);
  /* 1087de72 pop ebp */
  EBP = (pop32());
  /* 1087de73 ret  */
  ESPCHK(0x1087de30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de80 @ 0x1087de80 (65 bytes, 26 insns) */
void f_1087de80(void) {
  FTRACE(0x1087de80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087de80 push ebp */
  push32((uint32_t)(EBP));
  /* 1087de81 mov ebp, esp */
  EBP = (ESP);
  /* 1087de83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087de86 push eax */
  push32((uint32_t)(EAX));
  /* 1087de87 call 0x1087ded0 */
  push32(0x1087de8cu); f_1087ded0();
  /* 1087de8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087de8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087de91 je 0x1087de98 */
  if (C.zf) goto L_1087de98;
  /* 1087de93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087de96 jmp 0x1087debf */
  goto L_1087debf;
L_1087de98:;
  /* 1087de98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087de9b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1087de9e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1087dea4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087dea6 je 0x1087debd */
  if (C.zf) goto L_1087debd;
  /* 1087dea8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087deab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1087deae push ecx */
  push32((uint32_t)(ECX));
  /* 1087deaf call 0x1087ec90 */
  push32(0x1087deb4u); f_1087ec90();
  /* 1087deb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087deb7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1087deb9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087debb jmp 0x1087debf */
  goto L_1087debf;
L_1087debd:;
  /* 1087debd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1087debf:;
  /* 1087debf pop ebp */
  EBP = (pop32());
  /* 1087dec0 ret  */
  ESPCHK(0x1087de80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ded0 @ 0x1087ded0 (183 bytes, 62 insns) */
void f_1087ded0(void) {
  FTRACE(0x1087ded0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087ded0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087ded1 mov ebp, esp */
  EBP = (ESP);
  /* 1087ded3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087ded6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1087dedd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087dee0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1087dee3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087dee6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1087dee9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1087deec cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087deef jne 0x1087df6b */
  if (!C.zf) goto L_1087df6b;
  /* 1087def1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087def4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1087def7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1087defd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087deff je 0x1087df6b */
  if (C.zf) goto L_1087df6b;
  /* 1087df01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087df04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087df07 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1087df09 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087df0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087df0f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087df13 jle 0x1087df6b */
  if ((C.zf||C.sf!=C.of)) goto L_1087df6b;
  /* 1087df15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087df18 push edx */
  push32((uint32_t)(EDX));
  /* 1087df19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087df1c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1087df1f push ecx */
  push32((uint32_t)(ECX));
  /* 1087df20 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087df23 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1087df26 push eax */
  push32((uint32_t)(EAX));
  /* 1087df27 call 0x1087ce40 */
  push32(0x1087df2cu); f_1087ce40();
  /* 1087df2c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087df2f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087df32 jne 0x1087df55 */
  if (!C.zf) goto L_1087df55;
  /* 1087df34 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087df37 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1087df3a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1087df40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087df42 je 0x1087df53 */
  if (C.zf) goto L_1087df53;
  /* 1087df44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087df47 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1087df4a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1087df4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087df50 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1087df53:;
  /* 1087df53 jmp 0x1087df6b */
  goto L_1087df6b;
L_1087df55:;
  /* 1087df55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087df58 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1087df5b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1087df5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087df61 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1087df64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1087df6b:;
  /* 1087df6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087df6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087df71 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1087df74 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1087df76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087df79 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1087df80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087df83 mov esp, ebp */
  ESP = (EBP);
  /* 1087df85 pop ebp */
  EBP = (pop32());
  /* 1087df86 ret  */
  ESPCHK(0x1087ded0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df90 @ 0x1087df90 (15 bytes, 7 insns) */
void f_1087df90(void) {
  FTRACE(0x1087df90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087df90 push ebp */
  push32((uint32_t)(EBP));
  /* 1087df91 mov ebp, esp */
  EBP = (ESP);
  /* 1087df93 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087df95 call 0x1087dfa0 */
  push32(0x1087df9au); f_1087dfa0();
  /* 1087df9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087df9d pop ebp */
  EBP = (pop32());
  /* 1087df9e ret  */
  ESPCHK(0x1087df90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfa0 @ 0x1087dfa0 (319 bytes, 94 insns) */
void f_1087dfa0(void) {
  FTRACE(0x1087dfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087dfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087dfa1 mov ebp, esp */
  EBP = (ESP);
  /* 1087dfa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087dfa6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1087dfad mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1087dfb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087dfb6 call 0x10877fa0 */
  push32(0x1087dfbbu); f_10877fa0();
  /* 1087dfbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087dfbe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1087dfc5 jmp 0x1087dfd0 */
  goto L_1087dfd0;
L_1087dfc7:;
  /* 1087dfc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087dfca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087dfcd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1087dfd0:;
  /* 1087dfd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087dfd3 cmp ecx, dword ptr [0x108a1d20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108a1d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087dfd9 jge 0x1087e0c3 */
  if ((C.sf==C.of)) goto L_1087e0c3;
  /* 1087dfdf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087dfe2 mov eax, dword ptr [0x108a09c8] */
  EAX = (r32((uint32_t)(0x108a09c8)));
  /* 1087dfe7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087dfeb je 0x1087e0be */
  if (C.zf) goto L_1087e0be;
  /* 1087dff1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087dff4 mov edx, dword ptr [0x108a09c8] */
  EDX = (r32((uint32_t)(0x108a09c8)));
  /* 1087dffa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1087dffd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1087e000 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1087e006 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087e008 je 0x1087e0be */
  if (C.zf) goto L_1087e0be;
  /* 1087e00e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087e011 mov eax, dword ptr [0x108a09c8] */
  EAX = (r32((uint32_t)(0x108a09c8)));
  /* 1087e016 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1087e019 push ecx */
  push32((uint32_t)(ECX));
  /* 1087e01a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087e01d push edx */
  push32((uint32_t)(EDX));
  /* 1087e01e call 0x1087d3f0 */
  push32(0x1087e023u); f_1087d3f0();
  /* 1087e023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e026 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087e029 mov ecx, dword ptr [0x108a09c8] */
  ECX = (r32((uint32_t)(0x108a09c8)));
  /* 1087e02f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1087e032 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1087e035 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1087e03a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087e03c je 0x1087e0a5 */
  if (C.zf) goto L_1087e0a5;
  /* 1087e03e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e042 jne 0x1087e069 */
  if (!C.zf) goto L_1087e069;
  /* 1087e044 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087e047 mov edx, dword ptr [0x108a09c8] */
  EDX = (r32((uint32_t)(0x108a09c8)));
  /* 1087e04d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1087e050 push eax */
  push32((uint32_t)(EAX));
  /* 1087e051 call 0x1087de80 */
  push32(0x1087e056u); f_1087de80();
  /* 1087e056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e059 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e05c je 0x1087e067 */
  if (C.zf) goto L_1087e067;
  /* 1087e05e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087e061 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e064 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1087e067:;
  /* 1087e067 jmp 0x1087e0a5 */
  goto L_1087e0a5;
L_1087e069:;
  /* 1087e069 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e06d jne 0x1087e0a5 */
  if (!C.zf) goto L_1087e0a5;
  /* 1087e06f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087e072 mov eax, dword ptr [0x108a09c8] */
  EAX = (r32((uint32_t)(0x108a09c8)));
  /* 1087e077 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1087e07a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1087e07d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1087e080 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087e082 je 0x1087e0a5 */
  if (C.zf) goto L_1087e0a5;
  /* 1087e084 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087e087 mov ecx, dword ptr [0x108a09c8] */
  ECX = (r32((uint32_t)(0x108a09c8)));
  /* 1087e08d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1087e090 push edx */
  push32((uint32_t)(EDX));
  /* 1087e091 call 0x1087de80 */
  push32(0x1087e096u); f_1087de80();
  /* 1087e096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e099 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e09c jne 0x1087e0a5 */
  if (!C.zf) goto L_1087e0a5;
  /* 1087e09e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1087e0a5:;
  /* 1087e0a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087e0a8 mov ecx, dword ptr [0x108a09c8] */
  ECX = (r32((uint32_t)(0x108a09c8)));
  /* 1087e0ae mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1087e0b1 push edx */
  push32((uint32_t)(EDX));
  /* 1087e0b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087e0b5 push eax */
  push32((uint32_t)(EAX));
  /* 1087e0b6 call 0x1087d460 */
  push32(0x1087e0bbu); f_1087d460();
  /* 1087e0bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087e0be:;
  /* 1087e0be jmp 0x1087dfc7 */
  goto L_1087dfc7;
L_1087e0c3:;
  /* 1087e0c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087e0c5 call 0x10878040 */
  push32(0x1087e0cau); f_10878040();
  /* 1087e0ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e0cd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e0d1 jne 0x1087e0d8 */
  if (!C.zf) goto L_1087e0d8;
  /* 1087e0d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087e0d6 jmp 0x1087e0db */
  goto L_1087e0db;
L_1087e0d8:;
  /* 1087e0d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1087e0db:;
  /* 1087e0db mov esp, ebp */
  ESP = (EBP);
  /* 1087e0dd pop ebp */
  EBP = (pop32());
  /* 1087e0de ret  */
  ESPCHK(0x1087dfa0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1087e0e0 (15 bytes, 7 insns) */
void f_1087e0e0(void) {
  FTRACE(0x1087e0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087e0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087e0e1 mov ebp, esp */
  EBP = (ESP);
  /* 1087e0e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087e0e5 call 0x10873510 */
  push32(0x1087e0eau); f_10873510();
  /* 1087e0ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e0ed pop ebp */
  EBP = (pop32());
  /* 1087e0ee ret  */
  ESPCHK(0x1087e0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0f0 @ 0x1087e0f0 (1007 bytes, 269 insns) */
void f_1087e0f0(void) {
  FTRACE(0x1087e0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087e0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087e0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1087e0f3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087e0f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e0fd jl 0x1087e105 */
  if ((C.sf!=C.of)) goto L_1087e105;
  /* 1087e0ff cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e103 jle 0x1087e10c */
  if ((C.zf||C.sf!=C.of)) goto L_1087e10c;
L_1087e105:;
  /* 1087e105 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087e107 jmp 0x1087e4db */
  goto L_1087e4db;
L_1087e10c:;
  /* 1087e10c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1087e10e call 0x10877fa0 */
  push32(0x1087e113u); f_10877fa0();
  /* 1087e113 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e116 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1087e11d mov eax, dword ptr [0x108a09b4] */
  EAX = (r32((uint32_t)(0x108a09b4)));
  /* 1087e122 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e125 mov dword ptr [0x108a09b4], eax */
  w32((uint32_t)(0x108a09b4), (EAX));
L_1087e12a:;
  /* 1087e12a cmp dword ptr [0x108a09c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a09c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e131 je 0x1087e13d */
  if (C.zf) goto L_1087e13d;
  /* 1087e133 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087e135 call dword ptr [0x108a32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32f0))), 0x1087e13bu);
  /* 1087e13b jmp 0x1087e12a */
  goto L_1087e12a;
L_1087e13d:;
  /* 1087e13d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e141 je 0x1087e181 */
  if (C.zf) goto L_1087e181;
  /* 1087e143 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e147 je 0x1087e161 */
  if (C.zf) goto L_1087e161;
  /* 1087e149 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087e14c push ecx */
  push32((uint32_t)(ECX));
  /* 1087e14d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e150 push edx */
  push32((uint32_t)(EDX));
  /* 1087e151 call 0x1087e4e0 */
  push32(0x1087e156u); f_1087e4e0();
  /* 1087e156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e159 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1087e15f jmp 0x1087e173 */
  goto L_1087e173;
L_1087e161:;
  /* 1087e161 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e164 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087e167 mov ecx, dword ptr [eax + 0x1089f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1089f4dc)));
  /* 1087e16d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1087e173:;
  /* 1087e173 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1087e179 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1087e17c jmp 0x1087e4bb */
  goto L_1087e4bb;
L_1087e181:;
  /* 1087e181 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1087e188 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1087e18f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e193 je 0x1087e4b3 */
  if (C.zf) goto L_1087e4b3;
  /* 1087e199 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087e19c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1087e19f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e1a2 jne 0x1087e3c4 */
  if (!C.zf) goto L_1087e3c4;
  /* 1087e1a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087e1ab movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1087e1af cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e1b2 jne 0x1087e3c4 */
  if (!C.zf) goto L_1087e3c4;
  /* 1087e1b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087e1bb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1087e1bf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e1c2 jne 0x1087e3c4 */
  if (!C.zf) goto L_1087e3c4;
  /* 1087e1c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087e1cb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1087e1d1:;
  /* 1087e1d1 push 0x1089c154 */
  push32((uint32_t)(0x1089c154u));
  /* 1087e1d6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1087e1dc push ecx */
  push32((uint32_t)(ECX));
  /* 1087e1dd call 0x10880340 */
  push32(0x1087e1e2u); f_10880340();
  /* 1087e1e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e1e5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1087e1eb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e1f2 je 0x1087e21d */
  if (C.zf) goto L_1087e21d;
  /* 1087e1f4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1087e1fa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087e200 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1087e206 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e20d je 0x1087e21d */
  if (C.zf) goto L_1087e21d;
  /* 1087e20f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1087e215 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1087e218 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e21b jne 0x1087e243 */
  if (!C.zf) goto L_1087e243;
L_1087e21d:;
  /* 1087e21d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e221 je 0x1087e23c */
  if (C.zf) goto L_1087e23c;
  /* 1087e223 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1087e225 call 0x10878040 */
  push32(0x1087e22au); f_10878040();
  /* 1087e22a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e22d mov edx, dword ptr [0x108a09b4] */
  EDX = (r32((uint32_t)(0x108a09b4)));
  /* 1087e233 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087e236 mov dword ptr [0x108a09b4], edx */
  w32((uint32_t)(0x108a09b4), (EDX));
L_1087e23c:;
  /* 1087e23c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087e23e jmp 0x1087e4db */
  goto L_1087e4db;
L_1087e243:;
  /* 1087e243 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1087e24a jmp 0x1087e255 */
  goto L_1087e255;
L_1087e24c:;
  /* 1087e24c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087e24f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e252 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1087e255:;
  /* 1087e255 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e259 jg 0x1087e2a3 */
  if ((!C.zf&&C.sf==C.of)) goto L_1087e2a3;
  /* 1087e25b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1087e261 push ecx */
  push32((uint32_t)(ECX));
  /* 1087e262 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1087e268 push edx */
  push32((uint32_t)(EDX));
  /* 1087e269 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087e26c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087e26f mov ecx, dword ptr [eax + 0x1089f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1089f4d8)));
  /* 1087e275 push ecx */
  push32((uint32_t)(ECX));
  /* 1087e276 call 0x10880300 */
  push32(0x1087e27bu); f_10880300();
  /* 1087e27b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e27e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087e280 jne 0x1087e2a1 */
  if (!C.zf) goto L_1087e2a1;
  /* 1087e282 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087e285 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087e288 mov eax, dword ptr [edx + 0x1089f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1089f4d8)));
  /* 1087e28e push eax */
  push32((uint32_t)(EAX));
  /* 1087e28f call 0x108773d0 */
  push32(0x1087e294u); f_108773d0();
  /* 1087e294 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e297 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e29d jne 0x1087e2a1 */
  if (!C.zf) goto L_1087e2a1;
  /* 1087e29f jmp 0x1087e2a3 */
  goto L_1087e2a3;
L_1087e2a1:;
  /* 1087e2a1 jmp 0x1087e24c */
  goto L_1087e24c;
L_1087e2a3:;
  /* 1087e2a3 push 0x1089c150 */
  push32((uint32_t)(0x1089c150u));
  /* 1087e2a8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1087e2ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e2b1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1087e2b7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1087e2bd push edx */
  push32((uint32_t)(EDX));
  /* 1087e2be call 0x108802c0 */
  push32(0x1087e2c3u); f_108802c0();
  /* 1087e2c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e2c6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1087e2cc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e2d3 jne 0x1087e309 */
  if (!C.zf) goto L_1087e309;
  /* 1087e2d5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1087e2db movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1087e2de cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e2e1 je 0x1087e309 */
  if (C.zf) goto L_1087e309;
  /* 1087e2e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e2e7 je 0x1087e302 */
  if (C.zf) goto L_1087e302;
  /* 1087e2e9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1087e2eb call 0x10878040 */
  push32(0x1087e2f0u); f_10878040();
  /* 1087e2f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e2f3 mov edx, dword ptr [0x108a09b4] */
  EDX = (r32((uint32_t)(0x108a09b4)));
  /* 1087e2f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087e2fc mov dword ptr [0x108a09b4], edx */
  w32((uint32_t)(0x108a09b4), (EDX));
L_1087e302:;
  /* 1087e302 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087e304 jmp 0x1087e4db */
  goto L_1087e4db;
L_1087e309:;
  /* 1087e309 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e30d jg 0x1087e35a */
  if ((!C.zf&&C.sf==C.of)) goto L_1087e35a;
  /* 1087e30f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1087e315 push eax */
  push32((uint32_t)(EAX));
  /* 1087e316 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1087e31c push ecx */
  push32((uint32_t)(ECX));
  /* 1087e31d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1087e323 push edx */
  push32((uint32_t)(EDX));
  /* 1087e324 call 0x10877dc0 */
  push32(0x1087e329u); f_10877dc0();
  /* 1087e329 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e32c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1087e332 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1087e33a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1087e340 push ecx */
  push32((uint32_t)(ECX));
  /* 1087e341 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087e344 push edx */
  push32((uint32_t)(EDX));
  /* 1087e345 call 0x1087e4e0 */
  push32(0x1087e34au); f_1087e4e0();
  /* 1087e34a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e34d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087e34f je 0x1087e35a */
  if (C.zf) goto L_1087e35a;
  /* 1087e351 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087e354 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e357 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1087e35a:;
  /* 1087e35a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1087e360 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e366 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1087e36c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1087e372 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1087e375 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087e377 je 0x1087e388 */
  if (C.zf) goto L_1087e388;
  /* 1087e379 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1087e37f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e382 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1087e388:;
  /* 1087e388 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1087e38e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1087e391 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087e393 jne 0x1087e1d1 */
  if (!C.zf) goto L_1087e1d1;
  /* 1087e399 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e39d je 0x1087e3ac */
  if (C.zf) goto L_1087e3ac;
  /* 1087e39f call 0x1087e680 */
  push32(0x1087e3a4u); f_1087e680();
  /* 1087e3a4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1087e3aa jmp 0x1087e3b6 */
  goto L_1087e3b6;
L_1087e3ac:;
  /* 1087e3ac mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1087e3b6:;
  /* 1087e3b6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1087e3bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087e3bf jmp 0x1087e4b1 */
  goto L_1087e4b1;
L_1087e3c4:;
  /* 1087e3c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e3c7 push edx */
  push32((uint32_t)(EDX));
  /* 1087e3c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087e3ca push 0 */
  push32((uint32_t)(0x0u));
  /* 1087e3cc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1087e3d2 push eax */
  push32((uint32_t)(EAX));
  /* 1087e3d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087e3d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1087e3d7 call 0x1087e780 */
  push32(0x1087e3dcu); f_1087e780();
  /* 1087e3dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e3df mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1087e3e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e3e6 je 0x1087e4b1 */
  if (C.zf) goto L_1087e4b1;
  /* 1087e3ec mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1087e3f3 jmp 0x1087e3fe */
  goto L_1087e3fe;
L_1087e3f5:;
  /* 1087e3f5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087e3f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e3fb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1087e3fe:;
  /* 1087e3fe cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e402 jg 0x1087e460 */
  if ((!C.zf&&C.sf==C.of)) goto L_1087e460;
  /* 1087e404 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e408 je 0x1087e45e */
  if (C.zf) goto L_1087e45e;
  /* 1087e40a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087e40d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087e410 mov ecx, dword ptr [eax + 0x1089f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1089f4dc)));
  /* 1087e416 push ecx */
  push32((uint32_t)(ECX));
  /* 1087e417 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1087e41d push edx */
  push32((uint32_t)(EDX));
  /* 1087e41e call 0x10880230 */
  push32(0x1087e423u); f_10880230();
  /* 1087e423 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e426 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087e428 je 0x1087e455 */
  if (C.zf) goto L_1087e455;
  /* 1087e42a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1087e430 push eax */
  push32((uint32_t)(EAX));
  /* 1087e431 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087e434 push ecx */
  push32((uint32_t)(ECX));
  /* 1087e435 call 0x1087e4e0 */
  push32(0x1087e43au); f_1087e4e0();
  /* 1087e43a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e43d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087e43f je 0x1087e44c */
  if (C.zf) goto L_1087e44c;
  /* 1087e441 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087e444 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e447 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1087e44a jmp 0x1087e453 */
  goto L_1087e453;
L_1087e44c:;
  /* 1087e44c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1087e453:;
  /* 1087e453 jmp 0x1087e45e */
  goto L_1087e45e;
L_1087e455:;
  /* 1087e455 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087e458 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e45b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1087e45e:;
  /* 1087e45e jmp 0x1087e3f5 */
  goto L_1087e3f5;
L_1087e460:;
  /* 1087e460 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e464 je 0x1087e48b */
  if (C.zf) goto L_1087e48b;
  /* 1087e466 call 0x1087e680 */
  push32(0x1087e46bu); f_1087e680();
  /* 1087e46b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1087e46e push 2 */
  push32((uint32_t)(0x2u));
  /* 1087e470 mov ecx, dword ptr [0x1089f4dc] */
  ECX = (r32((uint32_t)(0x1089f4dc)));
  /* 1087e476 push ecx */
  push32((uint32_t)(ECX));
  /* 1087e477 call 0x10875030 */
  push32(0x1087e47cu); f_10875030();
  /* 1087e47c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e47f mov dword ptr [0x1089f4dc], 0 */
  w32((uint32_t)(0x1089f4dc), (0x0u));
  /* 1087e489 jmp 0x1087e4b1 */
  goto L_1087e4b1;
L_1087e48b:;
  /* 1087e48b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e48f je 0x1087e49e */
  if (C.zf) goto L_1087e49e;
  /* 1087e491 call 0x1087e680 */
  push32(0x1087e496u); f_1087e680();
  /* 1087e496 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1087e49c jmp 0x1087e4a8 */
  goto L_1087e4a8;
L_1087e49e:;
  /* 1087e49e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1087e4a8:;
  /* 1087e4a8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1087e4ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1087e4b1:;
  /* 1087e4b1 jmp 0x1087e4bb */
  goto L_1087e4bb;
L_1087e4b3:;
  /* 1087e4b3 call 0x1087e680 */
  push32(0x1087e4b8u); f_1087e680();
  /* 1087e4b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1087e4bb:;
  /* 1087e4bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e4bf je 0x1087e4d8 */
  if (C.zf) goto L_1087e4d8;
  /* 1087e4c1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1087e4c3 call 0x10878040 */
  push32(0x1087e4c8u); f_10878040();
  /* 1087e4c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e4cb mov eax, dword ptr [0x108a09b4] */
  EAX = (r32((uint32_t)(0x108a09b4)));
  /* 1087e4d0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087e4d3 mov dword ptr [0x108a09b4], eax */
  w32((uint32_t)(0x108a09b4), (EAX));
L_1087e4d8:;
  /* 1087e4d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1087e4db:;
  /* 1087e4db mov esp, ebp */
  ESP = (EBP);
  /* 1087e4dd pop ebp */
  EBP = (pop32());
  /* 1087e4de ret  */
  ESPCHK(0x1087e0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4e0 @ 0x1087e4e0 (403 bytes, 117 insns) */
void f_1087e4e0(void) {
  FTRACE(0x1087e4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087e4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087e4e1 mov ebp, esp */
  EBP = (ESP);
  /* 1087e4e3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087e4e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e4ec push eax */
  push32((uint32_t)(EAX));
  /* 1087e4ed lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1087e4f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1087e4f4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1087e4fa push edx */
  push32((uint32_t)(EDX));
  /* 1087e4fb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1087e501 push eax */
  push32((uint32_t)(EAX));
  /* 1087e502 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087e505 push ecx */
  push32((uint32_t)(ECX));
  /* 1087e506 call 0x1087e780 */
  push32(0x1087e50bu); f_1087e780();
  /* 1087e50b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e50e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087e510 jne 0x1087e519 */
  if (!C.zf) goto L_1087e519;
  /* 1087e512 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087e514 jmp 0x1087e66f */
  goto L_1087e66f;
L_1087e519:;
  /* 1087e519 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1087e51e push 0x1089c158 */
  push32((uint32_t)(0x1089c158u));
  /* 1087e523 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087e525 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1087e52b push edx */
  push32((uint32_t)(EDX));
  /* 1087e52c call 0x108773d0 */
  push32(0x1087e531u); f_108773d0();
  /* 1087e531 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e534 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e537 push eax */
  push32((uint32_t)(EAX));
  /* 1087e538 call 0x108745a0 */
  push32(0x1087e53du); f_108745a0();
  /* 1087e53d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e540 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1087e543 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e547 jne 0x1087e550 */
  if (!C.zf) goto L_1087e550;
  /* 1087e549 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087e54b jmp 0x1087e66f */
  goto L_1087e66f;
L_1087e550:;
  /* 1087e550 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e553 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087e556 mov ecx, dword ptr [eax + 0x1089f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1089f4dc)));
  /* 1087e55c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087e55f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e562 mov eax, dword ptr [edx*4 + 0x108a0830] */
  EAX = (r32((uint32_t)(EDX*4 + 0x108a0830)));
  /* 1087e569 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087e56c push 6 */
  push32((uint32_t)(0x6u));
  /* 1087e56e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e571 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087e574 add ecx, 0x108a0880 */
  { uint32_t _a=(ECX),_b=(0x108a0880u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e57a push ecx */
  push32((uint32_t)(ECX));
  /* 1087e57b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1087e57e push edx */
  push32((uint32_t)(EDX));
  /* 1087e57f call 0x1087ae80 */
  push32(0x1087e584u); f_1087ae80();
  /* 1087e584 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e587 mov eax, dword ptr [0x108a0848] */
  EAX = (r32((uint32_t)(0x108a0848)));
  /* 1087e58c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1087e58f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1087e595 push ecx */
  push32((uint32_t)(ECX));
  /* 1087e596 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087e599 push edx */
  push32((uint32_t)(EDX));
  /* 1087e59a call 0x10877550 */
  push32(0x1087e59fu); f_10877550();
  /* 1087e59f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e5a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e5a5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087e5a8 mov dword ptr [ecx + 0x1089f4dc], eax */
  w32((uint32_t)(ECX + 0x1089f4dc), (EAX));
  /* 1087e5ae mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1087e5b4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1087e5ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e5bd mov dword ptr [eax*4 + 0x108a0830], edx */
  w32((uint32_t)(EAX*4 + 0x108a0830), (EDX));
  /* 1087e5c4 push 6 */
  push32((uint32_t)(0x6u));
  /* 1087e5c6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1087e5cc push ecx */
  push32((uint32_t)(ECX));
  /* 1087e5cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e5d0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087e5d3 add edx, 0x108a0880 */
  { uint32_t _a=(EDX),_b=(0x108a0880u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e5d9 push edx */
  push32((uint32_t)(EDX));
  /* 1087e5da call 0x1087ae80 */
  push32(0x1087e5dfu); f_1087ae80();
  /* 1087e5df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e5e2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e5e6 jne 0x1087e5f3 */
  if (!C.zf) goto L_1087e5f3;
  /* 1087e5e8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1087e5ee mov dword ptr [0x108a0848], eax */
  w32((uint32_t)(0x108a0848), (EAX));
L_1087e5f3:;
  /* 1087e5f3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e5f7 jne 0x1087e605 */
  if (!C.zf) goto L_1087e605;
  /* 1087e5f9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1087e5ff mov dword ptr [0x108a084c], ecx */
  w32((uint32_t)(0x108a084c), (ECX));
L_1087e605:;
  /* 1087e605 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e608 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087e60b call dword ptr [edx + 0x1089f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1089f4e0))), 0x1087e611u);
  /* 1087e611 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087e613 je 0x1087e64c */
  if (C.zf) goto L_1087e64c;
  /* 1087e615 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e618 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087e61b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087e61e mov dword ptr [eax + 0x1089f4dc], ecx */
  w32((uint32_t)(EAX + 0x1089f4dc), (ECX));
  /* 1087e624 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087e626 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087e629 push edx */
  push32((uint32_t)(EDX));
  /* 1087e62a call 0x10875030 */
  push32(0x1087e62fu); f_10875030();
  /* 1087e62f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e632 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e635 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087e638 mov dword ptr [eax*4 + 0x108a0830], ecx */
  w32((uint32_t)(EAX*4 + 0x108a0830), (ECX));
  /* 1087e63f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087e642 mov dword ptr [0x108a0848], edx */
  w32((uint32_t)(0x108a0848), (EDX));
  /* 1087e648 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087e64a jmp 0x1087e66f */
  goto L_1087e66f;
L_1087e64c:;
  /* 1087e64c cmp dword ptr [ebp - 0xc], 0x1089f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1089f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e653 je 0x1087e663 */
  if (C.zf) goto L_1087e663;
  /* 1087e655 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087e657 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087e65a push eax */
  push32((uint32_t)(EAX));
  /* 1087e65b call 0x10875030 */
  push32(0x1087e660u); f_10875030();
  /* 1087e660 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087e663:;
  /* 1087e663 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e666 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087e669 mov eax, dword ptr [ecx + 0x1089f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1089f4dc)));
L_1087e66f:;
  /* 1087e66f mov esp, ebp */
  ESP = (EBP);
  /* 1087e671 pop ebp */
  EBP = (pop32());
  /* 1087e672 ret  */
  ESPCHK(0x1087e4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e680 @ 0x1087e680 (256 bytes, 72 insns) */
void f_1087e680(void) {
  FTRACE(0x1087e680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087e680 push ebp */
  push32((uint32_t)(EBP));
  /* 1087e681 mov ebp, esp */
  EBP = (ESP);
  /* 1087e683 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087e686 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1087e68d cmp dword ptr [0x1089f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1089f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e694 jne 0x1087e6b4 */
  if (!C.zf) goto L_1087e6b4;
  /* 1087e696 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1087e69b push 0x1089c158 */
  push32((uint32_t)(0x1089c158u));
  /* 1087e6a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087e6a2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1087e6a7 call 0x108745a0 */
  push32(0x1087e6acu); f_108745a0();
  /* 1087e6ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e6af mov dword ptr [0x1089f4dc], eax */
  w32((uint32_t)(0x1089f4dc), (EAX));
L_1087e6b4:;
  /* 1087e6b4 mov eax, dword ptr [0x1089f4dc] */
  EAX = (r32((uint32_t)(0x1089f4dc)));
  /* 1087e6b9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1087e6bc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1087e6c3 jmp 0x1087e6ce */
  goto L_1087e6ce;
L_1087e6c5:;
  /* 1087e6c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087e6c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e6cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1087e6ce:;
  /* 1087e6ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087e6d1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087e6d4 mov eax, dword ptr [edx + 0x1089f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1089f4dc)));
  /* 1087e6da push eax */
  push32((uint32_t)(EAX));
  /* 1087e6db push 0x1089c164 */
  push32((uint32_t)(0x1089c164u));
  /* 1087e6e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087e6e3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087e6e6 mov edx, dword ptr [ecx + 0x1089f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1089f4d8)));
  /* 1087e6ec push edx */
  push32((uint32_t)(EDX));
  /* 1087e6ed push 3 */
  push32((uint32_t)(0x3u));
  /* 1087e6ef mov eax, dword ptr [0x1089f4dc] */
  EAX = (r32((uint32_t)(0x1089f4dc)));
  /* 1087e6f4 push eax */
  push32((uint32_t)(EAX));
  /* 1087e6f5 call 0x1087e920 */
  push32(0x1087e6fau); f_1087e920();
  /* 1087e6fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e6fd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e701 jge 0x1087e749 */
  if ((C.sf==C.of)) goto L_1087e749;
  /* 1087e703 push 0x1089c150 */
  push32((uint32_t)(0x1089c150u));
  /* 1087e708 mov ecx, dword ptr [0x1089f4dc] */
  ECX = (r32((uint32_t)(0x1089f4dc)));
  /* 1087e70e push ecx */
  push32((uint32_t)(ECX));
  /* 1087e70f call 0x10877560 */
  push32(0x1087e714u); f_10877560();
  /* 1087e714 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e717 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087e71a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e71d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087e720 mov eax, dword ptr [edx + 0x1089f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1089f4dc)));
  /* 1087e726 push eax */
  push32((uint32_t)(EAX));
  /* 1087e727 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087e72a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087e72d mov edx, dword ptr [ecx + 0x1089f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1089f4dc)));
  /* 1087e733 push edx */
  push32((uint32_t)(EDX));
  /* 1087e734 call 0x10880230 */
  push32(0x1087e739u); f_10880230();
  /* 1087e739 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e73c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087e73e je 0x1087e747 */
  if (C.zf) goto L_1087e747;
  /* 1087e740 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1087e747:;
  /* 1087e747 jmp 0x1087e777 */
  goto L_1087e777;
L_1087e749:;
  /* 1087e749 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e74d jne 0x1087e756 */
  if (!C.zf) goto L_1087e756;
  /* 1087e74f mov eax, dword ptr [0x1089f4dc] */
  EAX = (r32((uint32_t)(0x1089f4dc)));
  /* 1087e754 jmp 0x1087e77c */
  goto L_1087e77c;
L_1087e756:;
  /* 1087e756 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087e758 mov eax, dword ptr [0x1089f4dc] */
  EAX = (r32((uint32_t)(0x1089f4dc)));
  /* 1087e75d push eax */
  push32((uint32_t)(EAX));
  /* 1087e75e call 0x10875030 */
  push32(0x1087e763u); f_10875030();
  /* 1087e763 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e766 mov dword ptr [0x1089f4dc], 0 */
  w32((uint32_t)(0x1089f4dc), (0x0u));
  /* 1087e770 mov eax, dword ptr [0x1089f4f4] */
  EAX = (r32((uint32_t)(0x1089f4f4)));
  /* 1087e775 jmp 0x1087e77c */
  goto L_1087e77c;
L_1087e777:;
  /* 1087e777 jmp 0x1087e6c5 */
  goto L_1087e6c5;
L_1087e77c:;
  /* 1087e77c mov esp, ebp */
  ESP = (EBP);
  /* 1087e77e pop ebp */
  EBP = (pop32());
  /* 1087e77f ret  */
  ESPCHK(0x1087e680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e780 @ 0x1087e780 (388 bytes, 115 insns) */
void f_1087e780(void) {
  FTRACE(0x1087e780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087e780 push ebp */
  push32((uint32_t)(EBP));
  /* 1087e781 mov ebp, esp */
  EBP = (ESP);
  /* 1087e783 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087e789 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e78d jne 0x1087e796 */
  if (!C.zf) goto L_1087e796;
  /* 1087e78f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087e791 jmp 0x1087e900 */
  goto L_1087e900;
L_1087e796:;
  /* 1087e796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e799 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1087e79c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e79f jne 0x1087e7f0 */
  if (!C.zf) goto L_1087e7f0;
  /* 1087e7a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e7a4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1087e7a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087e7aa jne 0x1087e7f0 */
  if (!C.zf) goto L_1087e7f0;
  /* 1087e7ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087e7af mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1087e7b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087e7b5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1087e7b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e7bd je 0x1087e7d9 */
  if (C.zf) goto L_1087e7d9;
  /* 1087e7bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087e7c2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1087e7c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087e7ca mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1087e7d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087e7d3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1087e7d9:;
  /* 1087e7d9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e7dd je 0x1087e7e8 */
  if (C.zf) goto L_1087e7e8;
  /* 1087e7df mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1087e7e2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1087e7e8:;
  /* 1087e7e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087e7eb jmp 0x1087e900 */
  goto L_1087e900;
L_1087e7f0:;
  /* 1087e7f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e7f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1087e7f4 push 0x1089f450 */
  push32((uint32_t)(0x1089f450u));
  /* 1087e7f9 call 0x10880230 */
  push32(0x1087e7feu); f_10880230();
  /* 1087e7fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e801 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087e803 je 0x1087e8b8 */
  if (C.zf) goto L_1087e8b8;
  /* 1087e809 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e80c push edx */
  push32((uint32_t)(EDX));
  /* 1087e80d push 0x1089f3cc */
  push32((uint32_t)(0x1089f3ccu));
  /* 1087e812 call 0x10880230 */
  push32(0x1087e817u); f_10880230();
  /* 1087e817 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e81a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087e81c je 0x1087e8b8 */
  if (C.zf) goto L_1087e8b8;
  /* 1087e822 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e825 push eax */
  push32((uint32_t)(EAX));
  /* 1087e826 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1087e82c push ecx */
  push32((uint32_t)(ECX));
  /* 1087e82d call 0x1087e970 */
  push32(0x1087e832u); f_1087e970();
  /* 1087e832 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e835 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087e837 je 0x1087e840 */
  if (C.zf) goto L_1087e840;
  /* 1087e839 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087e83b jmp 0x1087e900 */
  goto L_1087e900;
L_1087e840:;
  /* 1087e840 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1087e846 push edx */
  push32((uint32_t)(EDX));
  /* 1087e847 push 0x108a0858 */
  push32((uint32_t)(0x108a0858u));
  /* 1087e84c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1087e852 push eax */
  push32((uint32_t)(EAX));
  /* 1087e853 call 0x10880380 */
  push32(0x1087e858u); f_10880380();
  /* 1087e858 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e85b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087e85d jne 0x1087e866 */
  if (!C.zf) goto L_1087e866;
  /* 1087e85f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087e861 jmp 0x1087e900 */
  goto L_1087e900;
L_1087e866:;
  /* 1087e866 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087e868 mov cx, word ptr [0x108a085c] */
  CX = (r16((uint32_t)(0x108a085c)));
  /* 1087e86f mov dword ptr [0x108a0860], ecx */
  w32((uint32_t)(0x108a0860), (ECX));
  /* 1087e875 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1087e87b push edx */
  push32((uint32_t)(EDX));
  /* 1087e87c push 0x1089f450 */
  push32((uint32_t)(0x1089f450u));
  /* 1087e881 call 0x1087ead0 */
  push32(0x1087e886u); f_1087ead0();
  /* 1087e886 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e889 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e88c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1087e88f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087e891 je 0x1087e8a6 */
  if (C.zf) goto L_1087e8a6;
  /* 1087e893 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e896 push edx */
  push32((uint32_t)(EDX));
  /* 1087e897 push 0x1089f3cc */
  push32((uint32_t)(0x1089f3ccu));
  /* 1087e89c call 0x10877550 */
  push32(0x1087e8a1u); f_10877550();
  /* 1087e8a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e8a4 jmp 0x1087e8b8 */
  goto L_1087e8b8;
L_1087e8a6:;
  /* 1087e8a6 push 0x1089f450 */
  push32((uint32_t)(0x1089f450u));
  /* 1087e8ab push 0x1089f3cc */
  push32((uint32_t)(0x1089f3ccu));
  /* 1087e8b0 call 0x10877550 */
  push32(0x1087e8b5u); f_10877550();
  /* 1087e8b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087e8b8:;
  /* 1087e8b8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e8bc je 0x1087e8d1 */
  if (C.zf) goto L_1087e8d1;
  /* 1087e8be push 6 */
  push32((uint32_t)(0x6u));
  /* 1087e8c0 push 0x108a0858 */
  push32((uint32_t)(0x108a0858u));
  /* 1087e8c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087e8c8 push eax */
  push32((uint32_t)(EAX));
  /* 1087e8c9 call 0x1087ae80 */
  push32(0x1087e8ceu); f_1087ae80();
  /* 1087e8ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087e8d1:;
  /* 1087e8d1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e8d5 je 0x1087e8ea */
  if (C.zf) goto L_1087e8ea;
  /* 1087e8d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1087e8d9 push 0x108a0860 */
  push32((uint32_t)(0x108a0860u));
  /* 1087e8de mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1087e8e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1087e8e2 call 0x1087ae80 */
  push32(0x1087e8e7u); f_1087ae80();
  /* 1087e8e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087e8ea:;
  /* 1087e8ea push 0x1089f450 */
  push32((uint32_t)(0x1089f450u));
  /* 1087e8ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087e8f2 push edx */
  push32((uint32_t)(EDX));
  /* 1087e8f3 call 0x10877550 */
  push32(0x1087e8f8u); f_10877550();
  /* 1087e8f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e8fb mov eax, 0x1089f450 */
  EAX = (0x1089f450u);
L_1087e900:;
  /* 1087e900 mov esp, ebp */
  ESP = (EBP);
  /* 1087e902 pop ebp */
  EBP = (pop32());
  /* 1087e903 ret  */
  ESPCHK(0x1087e780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e910 @ 0x1087e910 (7 bytes, 5 insns) */
void f_1087e910(void) {
  FTRACE(0x1087e910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087e910 push ebp */
  push32((uint32_t)(EBP));
  /* 1087e911 mov ebp, esp */
  EBP = (ESP);
  /* 1087e913 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087e915 pop ebp */
  EBP = (pop32());
  /* 1087e916 ret  */
  ESPCHK(0x1087e910u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1087e920 (79 bytes, 28 insns) */
void f_1087e920(void) {
  FTRACE(0x1087e920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087e920 push ebp */
  push32((uint32_t)(EBP));
  /* 1087e921 mov ebp, esp */
  EBP = (ESP);
  /* 1087e923 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087e926 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1087e929 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087e92c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1087e933 jmp 0x1087e93e */
  goto L_1087e93e;
L_1087e935:;
  /* 1087e935 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087e938 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e93b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1087e93e:;
  /* 1087e93e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087e941 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e944 jge 0x1087e964 */
  if ((C.sf==C.of)) goto L_1087e964;
  /* 1087e946 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087e949 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e94c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087e94f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087e952 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1087e955 push edx */
  push32((uint32_t)(EDX));
  /* 1087e956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e959 push eax */
  push32((uint32_t)(EAX));
  /* 1087e95a call 0x10877560 */
  push32(0x1087e95fu); f_10877560();
  /* 1087e95f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e962 jmp 0x1087e935 */
  goto L_1087e935;
L_1087e964:;
  /* 1087e964 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1087e96b mov esp, ebp */
  ESP = (EBP);
  /* 1087e96d pop ebp */
  EBP = (pop32());
  /* 1087e96e ret  */
  ESPCHK(0x1087e920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e970 @ 0x1087e970 (349 bytes, 122 insns) */
void f_1087e970(void) {
  FTRACE(0x1087e970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087e970 push ebp */
  push32((uint32_t)(EBP));
  /* 1087e971 mov ebp, esp */
  EBP = (ESP);
  /* 1087e973 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087e976 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1087e97b push 0 */
  push32((uint32_t)(0x0u));
  /* 1087e97d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e980 push eax */
  push32((uint32_t)(EAX));
  /* 1087e981 call 0x10878310 */
  push32(0x1087e986u); f_10878310();
  /* 1087e986 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e989 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087e98c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1087e98f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087e991 jne 0x1087e99a */
  if (!C.zf) goto L_1087e99a;
  /* 1087e993 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087e995 jmp 0x1087eac9 */
  goto L_1087eac9;
L_1087e99a:;
  /* 1087e99a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087e99d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1087e9a0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e9a3 jne 0x1087e9d0 */
  if (!C.zf) goto L_1087e9d0;
  /* 1087e9a5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087e9a8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1087e9ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087e9ae je 0x1087e9d0 */
  if (C.zf) goto L_1087e9d0;
  /* 1087e9b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087e9b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e9b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1087e9b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087e9ba add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e9c0 push edx */
  push32((uint32_t)(EDX));
  /* 1087e9c1 call 0x10877550 */
  push32(0x1087e9c6u); f_10877550();
  /* 1087e9c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e9c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087e9cb jmp 0x1087eac9 */
  goto L_1087eac9;
L_1087e9d0:;
  /* 1087e9d0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1087e9d7 jmp 0x1087e9e2 */
  goto L_1087e9e2;
L_1087e9d9:;
  /* 1087e9d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087e9dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e9df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1087e9e2:;
  /* 1087e9e2 push 0x1089c168 */
  push32((uint32_t)(0x1089c168u));
  /* 1087e9e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087e9ea push ecx */
  push32((uint32_t)(ECX));
  /* 1087e9eb call 0x108802c0 */
  push32(0x1087e9f0u); f_108802c0();
  /* 1087e9f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087e9f3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1087e9f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087e9fa jne 0x1087ea04 */
  if (!C.zf) goto L_1087ea04;
  /* 1087e9fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087e9ff jmp 0x1087eac9 */
  goto L_1087eac9;
L_1087ea04:;
  /* 1087ea04 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087ea07 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ea0a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1087ea0c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1087ea0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ea13 jne 0x1087ea3a */
  if (!C.zf) goto L_1087ea3a;
  /* 1087ea15 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ea19 jge 0x1087ea3a */
  if ((C.sf==C.of)) goto L_1087ea3a;
  /* 1087ea1b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1087ea1f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ea22 je 0x1087ea3a */
  if (C.zf) goto L_1087ea3a;
  /* 1087ea24 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087ea27 push edx */
  push32((uint32_t)(EDX));
  /* 1087ea28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087ea2b push eax */
  push32((uint32_t)(EAX));
  /* 1087ea2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ea2f push ecx */
  push32((uint32_t)(ECX));
  /* 1087ea30 call 0x10877dc0 */
  push32(0x1087ea35u); f_10877dc0();
  /* 1087ea35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ea38 jmp 0x1087eaa0 */
  goto L_1087eaa0;
L_1087ea3a:;
  /* 1087ea3a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ea3e jne 0x1087ea68 */
  if (!C.zf) goto L_1087ea68;
  /* 1087ea40 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ea44 jge 0x1087ea68 */
  if ((C.sf==C.of)) goto L_1087ea68;
  /* 1087ea46 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1087ea4a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ea4d je 0x1087ea68 */
  if (C.zf) goto L_1087ea68;
  /* 1087ea4f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087ea52 push eax */
  push32((uint32_t)(EAX));
  /* 1087ea53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087ea56 push ecx */
  push32((uint32_t)(ECX));
  /* 1087ea57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ea5a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ea5d push edx */
  push32((uint32_t)(EDX));
  /* 1087ea5e call 0x10877dc0 */
  push32(0x1087ea63u); f_10877dc0();
  /* 1087ea63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ea66 jmp 0x1087eaa0 */
  goto L_1087eaa0;
L_1087ea68:;
  /* 1087ea68 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ea6c jne 0x1087ea9b */
  if (!C.zf) goto L_1087ea9b;
  /* 1087ea6e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1087ea72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087ea74 je 0x1087ea7f */
  if (C.zf) goto L_1087ea7f;
  /* 1087ea76 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1087ea7a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ea7d jne 0x1087ea9b */
  if (!C.zf) goto L_1087ea9b;
L_1087ea7f:;
  /* 1087ea7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087ea82 push edx */
  push32((uint32_t)(EDX));
  /* 1087ea83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087ea86 push eax */
  push32((uint32_t)(EAX));
  /* 1087ea87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ea8a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ea90 push ecx */
  push32((uint32_t)(ECX));
  /* 1087ea91 call 0x10877dc0 */
  push32(0x1087ea96u); f_10877dc0();
  /* 1087ea96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ea99 jmp 0x1087eaa0 */
  goto L_1087eaa0;
L_1087ea9b:;
  /* 1087ea9b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087ea9e jmp 0x1087eac9 */
  goto L_1087eac9;
L_1087eaa0:;
  /* 1087eaa0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1087eaa4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087eaa7 jne 0x1087eaab */
  if (!C.zf) goto L_1087eaab;
  /* 1087eaa9 jmp 0x1087eac7 */
  goto L_1087eac7;
L_1087eaab:;
  /* 1087eaab movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1087eaaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087eab1 jne 0x1087eab5 */
  if (!C.zf) goto L_1087eab5;
  /* 1087eab3 jmp 0x1087eac7 */
  goto L_1087eac7;
L_1087eab5:;
  /* 1087eab5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087eab8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087eabb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1087eabf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1087eac2 jmp 0x1087e9d9 */
  goto L_1087e9d9;
L_1087eac7:;
  /* 1087eac7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1087eac9:;
  /* 1087eac9 mov esp, ebp */
  ESP = (EBP);
  /* 1087eacb pop ebp */
  EBP = (pop32());
  /* 1087eacc ret  */
  ESPCHK(0x1087e970u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1087ead0 (101 bytes, 36 insns) */
void f_1087ead0(void) {
  FTRACE(0x1087ead0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087ead0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087ead1 mov ebp, esp */
  EBP = (ESP);
  /* 1087ead3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087ead6 push eax */
  push32((uint32_t)(EAX));
  /* 1087ead7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087eada push ecx */
  push32((uint32_t)(ECX));
  /* 1087eadb call 0x10877550 */
  push32(0x1087eae0u); f_10877550();
  /* 1087eae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087eae3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087eae6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1087eaea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087eaec je 0x1087eb08 */
  if (C.zf) goto L_1087eb08;
  /* 1087eaee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087eaf1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087eaf4 push ecx */
  push32((uint32_t)(ECX));
  /* 1087eaf5 push 0x1089c170 */
  push32((uint32_t)(0x1089c170u));
  /* 1087eafa push 2 */
  push32((uint32_t)(0x2u));
  /* 1087eafc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087eaff push edx */
  push32((uint32_t)(EDX));
  /* 1087eb00 call 0x1087e920 */
  push32(0x1087eb05u); f_1087e920();
  /* 1087eb05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087eb08:;
  /* 1087eb08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087eb0b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1087eb12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087eb14 je 0x1087eb33 */
  if (C.zf) goto L_1087eb33;
  /* 1087eb16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087eb19 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087eb1f push edx */
  push32((uint32_t)(EDX));
  /* 1087eb20 push 0x1089c16c */
  push32((uint32_t)(0x1089c16cu));
  /* 1087eb25 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087eb27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087eb2a push eax */
  push32((uint32_t)(EAX));
  /* 1087eb2b call 0x1087e920 */
  push32(0x1087eb30u); f_1087e920();
  /* 1087eb30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087eb33:;
  /* 1087eb33 pop ebp */
  EBP = (pop32());
  /* 1087eb34 ret  */
  ESPCHK(0x1087ead0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb40 @ 0x1087eb40 (130 bytes, 50 insns) */
void f_1087eb40(void) {
  FTRACE(0x1087eb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087eb40 push ebp */
  push32((uint32_t)(EBP));
  /* 1087eb41 mov ebp, esp */
  EBP = (ESP);
  /* 1087eb43 push ecx */
  push32((uint32_t)(ECX));
  /* 1087eb44 push ebx */
  push32((uint32_t)(EBX));
  /* 1087eb45 push esi */
  push32((uint32_t)(ESI));
  /* 1087eb46 push edi */
  push32((uint32_t)(EDI));
  /* 1087eb47 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1087eb4e:;
  /* 1087eb4e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087eb52 jne 0x1087eb72 */
  if (!C.zf) goto L_1087eb72;
  /* 1087eb54 push 0x1089c180 */
  push32((uint32_t)(0x1089c180u));
  /* 1087eb59 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087eb5b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1087eb5d push 0x1089c174 */
  push32((uint32_t)(0x1089c174u));
  /* 1087eb62 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087eb64 call 0x10873660 */
  push32(0x1087eb69u); f_10873660();
  /* 1087eb69 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087eb6c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087eb6f jne 0x1087eb72 */
  if (!C.zf) goto L_1087eb72;
  /* 1087eb71 int3  */
  x86_unimpl("int3 @ 0x1087eb71");
L_1087eb72:;
  /* 1087eb72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087eb74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087eb76 jne 0x1087eb4e */
  if (!C.zf) goto L_1087eb4e;
  /* 1087eb78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087eb7b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1087eb7e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1087eb81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087eb83 je 0x1087eb91 */
  if (C.zf) goto L_1087eb91;
  /* 1087eb85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087eb88 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1087eb8f jmp 0x1087ebb8 */
  goto L_1087ebb8;
L_1087eb91:;
  /* 1087eb91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087eb94 push ecx */
  push32((uint32_t)(ECX));
  /* 1087eb95 call 0x1087d3b0 */
  push32(0x1087eb9au); f_1087d3b0();
  /* 1087eb9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087eb9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087eba0 push edx */
  push32((uint32_t)(EDX));
  /* 1087eba1 call 0x1087ebd0 */
  push32(0x1087eba6u); f_1087ebd0();
  /* 1087eba6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087eba9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087ebac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ebaf push eax */
  push32((uint32_t)(EAX));
  /* 1087ebb0 call 0x1087d420 */
  push32(0x1087ebb5u); f_1087d420();
  /* 1087ebb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087ebb8:;
  /* 1087ebb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087ebbb pop edi */
  EDI = (pop32());
  /* 1087ebbc pop esi */
  ESI = (pop32());
  /* 1087ebbd pop ebx */
  EBX = (pop32());
  /* 1087ebbe mov esp, ebp */
  ESP = (EBP);
  /* 1087ebc0 pop ebp */
  EBP = (pop32());
  /* 1087ebc1 ret  */
  ESPCHK(0x1087eb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebd0 @ 0x1087ebd0 (190 bytes, 67 insns) */
void f_1087ebd0(void) {
  FTRACE(0x1087ebd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087ebd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087ebd1 mov ebp, esp */
  EBP = (ESP);
  /* 1087ebd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087ebd6 push ebx */
  push32((uint32_t)(EBX));
  /* 1087ebd7 push esi */
  push32((uint32_t)(ESI));
  /* 1087ebd8 push edi */
  push32((uint32_t)(EDI));
  /* 1087ebd9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1087ebe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ebe3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1087ebe6:;
  /* 1087ebe6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ebea jne 0x1087ec0a */
  if (!C.zf) goto L_1087ec0a;
  /* 1087ebec push 0x1089c024 */
  push32((uint32_t)(0x1089c024u));
  /* 1087ebf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087ebf3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1087ebf5 push 0x1089c174 */
  push32((uint32_t)(0x1089c174u));
  /* 1087ebfa push 2 */
  push32((uint32_t)(0x2u));
  /* 1087ebfc call 0x10873660 */
  push32(0x1087ec01u); f_10873660();
  /* 1087ec01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ec04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ec07 jne 0x1087ec0a */
  if (!C.zf) goto L_1087ec0a;
  /* 1087ec09 int3  */
  x86_unimpl("int3 @ 0x1087ec09");
L_1087ec0a:;
  /* 1087ec0a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087ec0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087ec0e jne 0x1087ebe6 */
  if (!C.zf) goto L_1087ebe6;
  /* 1087ec10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087ec13 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1087ec16 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1087ec1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087ec1d je 0x1087ec7a */
  if (C.zf) goto L_1087ec7a;
  /* 1087ec1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087ec22 push ecx */
  push32((uint32_t)(ECX));
  /* 1087ec23 call 0x1087ded0 */
  push32(0x1087ec28u); f_1087ded0();
  /* 1087ec28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ec2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087ec2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087ec31 push edx */
  push32((uint32_t)(EDX));
  /* 1087ec32 call 0x10881250 */
  push32(0x1087ec37u); f_10881250();
  /* 1087ec37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ec3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087ec3d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1087ec40 push ecx */
  push32((uint32_t)(ECX));
  /* 1087ec41 call 0x10881120 */
  push32(0x1087ec46u); f_10881120();
  /* 1087ec46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ec49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087ec4b jge 0x1087ec56 */
  if ((C.sf==C.of)) goto L_1087ec56;
  /* 1087ec4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1087ec54 jmp 0x1087ec7a */
  goto L_1087ec7a;
L_1087ec56:;
  /* 1087ec56 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087ec59 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ec5d je 0x1087ec7a */
  if (C.zf) goto L_1087ec7a;
  /* 1087ec5f push 2 */
  push32((uint32_t)(0x2u));
  /* 1087ec61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087ec64 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1087ec67 push ecx */
  push32((uint32_t)(ECX));
  /* 1087ec68 call 0x10875030 */
  push32(0x1087ec6du); f_10875030();
  /* 1087ec6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ec70 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087ec73 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1087ec7a:;
  /* 1087ec7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087ec7d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1087ec84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087ec87 pop edi */
  EDI = (pop32());
  /* 1087ec88 pop esi */
  ESI = (pop32());
  /* 1087ec89 pop ebx */
  EBX = (pop32());
  /* 1087ec8a mov esp, ebp */
  ESP = (EBP);
  /* 1087ec8c pop ebp */
  EBP = (pop32());
  /* 1087ec8d ret  */
  ESPCHK(0x1087ebd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec90 @ 0x1087ec90 (210 bytes, 63 insns) */
void f_1087ec90(void) {
  FTRACE(0x1087ec90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087ec90 push ebp */
  push32((uint32_t)(EBP));
  /* 1087ec91 mov ebp, esp */
  EBP = (ESP);
  /* 1087ec93 push ecx */
  push32((uint32_t)(ECX));
  /* 1087ec94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ec97 cmp eax, dword ptr [0x108a215c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108a215c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ec9d jae 0x1087ecc1 */
  if (!C.cf) goto L_1087ecc1;
  /* 1087ec9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087eca2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1087eca5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087eca8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1087ecab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087ecae mov eax, dword ptr [ecx*4 + 0x108a2020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108a2020)));
  /* 1087ecb5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1087ecba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1087ecbd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087ecbf jne 0x1087ecd4 */
  if (!C.zf) goto L_1087ecd4;
L_1087ecc1:;
  /* 1087ecc1 call 0x1087c470 */
  push32(0x1087ecc6u); f_1087c470();
  /* 1087ecc6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1087eccc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087eccf jmp 0x1087ed5e */
  goto L_1087ed5e;
L_1087ecd4:;
  /* 1087ecd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ecd7 push edx */
  push32((uint32_t)(EDX));
  /* 1087ecd8 call 0x1087dc90 */
  push32(0x1087ecddu); f_1087dc90();
  /* 1087ecdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ece0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ece3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1087ece6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ece9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1087ecec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087ecef mov edx, dword ptr [eax*4 + 0x108a2020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108a2020)));
  /* 1087ecf6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1087ecfb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1087ecfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087ed00 je 0x1087ed3d */
  if (C.zf) goto L_1087ed3d;
  /* 1087ed02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ed05 push ecx */
  push32((uint32_t)(ECX));
  /* 1087ed06 call 0x1087db10 */
  push32(0x1087ed0bu); f_1087db10();
  /* 1087ed0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ed0e push eax */
  push32((uint32_t)(EAX));
  /* 1087ed0f call dword ptr [0x108a32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32ec))), 0x1087ed15u);
  /* 1087ed15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087ed17 jne 0x1087ed24 */
  if (!C.zf) goto L_1087ed24;
  /* 1087ed19 call dword ptr [0x108a33b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33b4))), 0x1087ed1fu);
  /* 1087ed1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087ed22 jmp 0x1087ed2b */
  goto L_1087ed2b;
L_1087ed24:;
  /* 1087ed24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1087ed2b:;
  /* 1087ed2b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ed2f jne 0x1087ed33 */
  if (!C.zf) goto L_1087ed33;
  /* 1087ed31 jmp 0x1087ed4f */
  goto L_1087ed4f;
L_1087ed33:;
  /* 1087ed33 call 0x1087c480 */
  push32(0x1087ed38u); f_1087c480();
  /* 1087ed38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087ed3b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1087ed3d:;
  /* 1087ed3d call 0x1087c470 */
  push32(0x1087ed42u); f_1087c470();
  /* 1087ed42 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1087ed48 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1087ed4f:;
  /* 1087ed4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ed52 push eax */
  push32((uint32_t)(EAX));
  /* 1087ed53 call 0x1087dd20 */
  push32(0x1087ed58u); f_1087dd20();
  /* 1087ed58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ed5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1087ed5e:;
  /* 1087ed5e mov esp, ebp */
  ESP = (EBP);
  /* 1087ed60 pop ebp */
  EBP = (pop32());
  /* 1087ed61 ret  */
  ESPCHK(0x1087ec90u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1087ed70 (219 bytes, 64 insns) */
void f_1087ed70(void) {
  FTRACE(0x1087ed70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087ed70 push ebp */
  push32((uint32_t)(EBP));
  /* 1087ed71 mov ebp, esp */
  EBP = (ESP);
  /* 1087ed73 push ecx */
  push32((uint32_t)(ECX));
  /* 1087ed74 cmp dword ptr [0x108a0844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ed7b je 0x1087ee11 */
  if (C.zf) goto L_1087ee11;
  /* 1087ed81 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1087ed83 push 0x1089c190 */
  push32((uint32_t)(0x1089c190u));
  /* 1087ed88 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087ed8a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1087ed8f push 1 */
  push32((uint32_t)(0x1u));
  /* 1087ed91 call 0x108749b0 */
  push32(0x1087ed96u); f_108749b0();
  /* 1087ed96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ed99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087ed9c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087eda0 jne 0x1087edac */
  if (!C.zf) goto L_1087edac;
  /* 1087eda2 mov eax, 1 */
  EAX = (0x1u);
  /* 1087eda7 jmp 0x1087ee47 */
  goto L_1087ee47;
L_1087edac:;
  /* 1087edac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087edaf push eax */
  push32((uint32_t)(EAX));
  /* 1087edb0 call 0x1087ee50 */
  push32(0x1087edb5u); f_1087ee50();
  /* 1087edb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087edb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087edba je 0x1087eddd */
  if (C.zf) goto L_1087eddd;
  /* 1087edbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087edbf push ecx */
  push32((uint32_t)(ECX));
  /* 1087edc0 call 0x1087f3e0 */
  push32(0x1087edc5u); f_1087f3e0();
  /* 1087edc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087edc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087edca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087edcd push edx */
  push32((uint32_t)(EDX));
  /* 1087edce call 0x10875030 */
  push32(0x1087edd3u); f_10875030();
  /* 1087edd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087edd6 mov eax, 1 */
  EAX = (0x1u);
  /* 1087eddb jmp 0x1087ee47 */
  goto L_1087ee47;
L_1087eddd:;
  /* 1087eddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087ede0 mov dword ptr [0x1089fc98], eax */
  w32((uint32_t)(0x1089fc98), (EAX));
  /* 1087ede5 mov ecx, dword ptr [0x108a0864] */
  ECX = (r32((uint32_t)(0x108a0864)));
  /* 1087edeb push ecx */
  push32((uint32_t)(ECX));
  /* 1087edec call 0x1087f3e0 */
  push32(0x1087edf1u); f_1087f3e0();
  /* 1087edf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087edf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087edf6 mov edx, dword ptr [0x108a0864] */
  EDX = (r32((uint32_t)(0x108a0864)));
  /* 1087edfc push edx */
  push32((uint32_t)(EDX));
  /* 1087edfd call 0x10875030 */
  push32(0x1087ee02u); f_10875030();
  /* 1087ee02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ee05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087ee08 mov dword ptr [0x108a0864], eax */
  w32((uint32_t)(0x108a0864), (EAX));
  /* 1087ee0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087ee0f jmp 0x1087ee47 */
  goto L_1087ee47;
L_1087ee11:;
  /* 1087ee11 mov dword ptr [0x1089fc98], 0x1089fca0 */
  w32((uint32_t)(0x1089fc98), (0x1089fca0u));
  /* 1087ee1b mov ecx, dword ptr [0x108a0864] */
  ECX = (r32((uint32_t)(0x108a0864)));
  /* 1087ee21 push ecx */
  push32((uint32_t)(ECX));
  /* 1087ee22 call 0x1087f3e0 */
  push32(0x1087ee27u); f_1087f3e0();
  /* 1087ee27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ee2a push 2 */
  push32((uint32_t)(0x2u));
  /* 1087ee2c mov edx, dword ptr [0x108a0864] */
  EDX = (r32((uint32_t)(0x108a0864)));
  /* 1087ee32 push edx */
  push32((uint32_t)(EDX));
  /* 1087ee33 call 0x10875030 */
  push32(0x1087ee38u); f_10875030();
  /* 1087ee38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ee3b mov dword ptr [0x108a0864], 0 */
  w32((uint32_t)(0x108a0864), (0x0u));
  /* 1087ee45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1087ee47:;
  /* 1087ee47 mov esp, ebp */
  ESP = (EBP);
  /* 1087ee49 pop ebp */
  EBP = (pop32());
  /* 1087ee4a ret  */
  ESPCHK(0x1087ed70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee50 @ 0x1087ee50 (1423 bytes, 533 insns) */
void f_1087ee50(void) {
  FTRACE(0x1087ee50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087ee50 push ebp */
  push32((uint32_t)(EBP));
  /* 1087ee51 mov ebp, esp */
  EBP = (ESP);
  /* 1087ee53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087ee56 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1087ee5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087ee5f mov ax, word ptr [0x108a089e] */
  AX = (r16((uint32_t)(0x108a089e)));
  /* 1087ee65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087ee68 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087ee6a mov cx, word ptr [0x108a08a0] */
  CX = (r16((uint32_t)(0x108a08a0)));
  /* 1087ee71 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087ee74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ee78 jne 0x1087ee82 */
  if (!C.zf) goto L_1087ee82;
  /* 1087ee7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087ee7d jmp 0x1087f3db */
  goto L_1087f3db;
L_1087ee82:;
  /* 1087ee82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ee85 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ee88 push edx */
  push32((uint32_t)(EDX));
  /* 1087ee89 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1087ee8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087ee8e push eax */
  push32((uint32_t)(EAX));
  /* 1087ee8f push 1 */
  push32((uint32_t)(0x1u));
  /* 1087ee91 call 0x10882760 */
  push32(0x1087ee96u); f_10882760();
  /* 1087ee96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ee99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087ee9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087ee9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087eea1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087eea4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087eea7 push edx */
  push32((uint32_t)(EDX));
  /* 1087eea8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1087eeaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087eead push eax */
  push32((uint32_t)(EAX));
  /* 1087eeae push 1 */
  push32((uint32_t)(0x1u));
  /* 1087eeb0 call 0x10882760 */
  push32(0x1087eeb5u); f_10882760();
  /* 1087eeb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087eeb8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087eebb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087eebd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087eec0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087eec3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087eec6 push edx */
  push32((uint32_t)(EDX));
  /* 1087eec7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1087eec9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087eecc push eax */
  push32((uint32_t)(EAX));
  /* 1087eecd push 1 */
  push32((uint32_t)(0x1u));
  /* 1087eecf call 0x10882760 */
  push32(0x1087eed4u); f_10882760();
  /* 1087eed4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087eed7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087eeda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087eedc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087eedf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087eee2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087eee5 push edx */
  push32((uint32_t)(EDX));
  /* 1087eee6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1087eee8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087eeeb push eax */
  push32((uint32_t)(EAX));
  /* 1087eeec push 1 */
  push32((uint32_t)(0x1u));
  /* 1087eeee call 0x10882760 */
  push32(0x1087eef3u); f_10882760();
  /* 1087eef3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087eef6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087eef9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087eefb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087eefe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ef01 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ef04 push edx */
  push32((uint32_t)(EDX));
  /* 1087ef05 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1087ef07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087ef0a push eax */
  push32((uint32_t)(EAX));
  /* 1087ef0b push 1 */
  push32((uint32_t)(0x1u));
  /* 1087ef0d call 0x10882760 */
  push32(0x1087ef12u); f_10882760();
  /* 1087ef12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ef15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087ef18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087ef1a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087ef1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ef20 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ef23 push edx */
  push32((uint32_t)(EDX));
  /* 1087ef24 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1087ef26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087ef29 push eax */
  push32((uint32_t)(EAX));
  /* 1087ef2a push 1 */
  push32((uint32_t)(0x1u));
  /* 1087ef2c call 0x10882760 */
  push32(0x1087ef31u); f_10882760();
  /* 1087ef31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ef34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087ef37 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087ef39 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087ef3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ef3f push edx */
  push32((uint32_t)(EDX));
  /* 1087ef40 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1087ef42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087ef45 push eax */
  push32((uint32_t)(EAX));
  /* 1087ef46 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087ef48 call 0x10882760 */
  push32(0x1087ef4du); f_10882760();
  /* 1087ef4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ef50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087ef53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087ef55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087ef58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ef5b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ef5e push edx */
  push32((uint32_t)(EDX));
  /* 1087ef5f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1087ef61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087ef64 push eax */
  push32((uint32_t)(EAX));
  /* 1087ef65 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087ef67 call 0x10882760 */
  push32(0x1087ef6cu); f_10882760();
  /* 1087ef6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ef6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087ef72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087ef74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087ef77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ef7a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ef7d push edx */
  push32((uint32_t)(EDX));
  /* 1087ef7e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1087ef80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087ef83 push eax */
  push32((uint32_t)(EAX));
  /* 1087ef84 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087ef86 call 0x10882760 */
  push32(0x1087ef8bu); f_10882760();
  /* 1087ef8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ef8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087ef91 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087ef93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087ef96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087ef99 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ef9c push edx */
  push32((uint32_t)(EDX));
  /* 1087ef9d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1087ef9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087efa2 push eax */
  push32((uint32_t)(EAX));
  /* 1087efa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087efa5 call 0x10882760 */
  push32(0x1087efaau); f_10882760();
  /* 1087efaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087efad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087efb0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087efb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087efb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087efb8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087efbb push edx */
  push32((uint32_t)(EDX));
  /* 1087efbc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1087efbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087efc1 push eax */
  push32((uint32_t)(EAX));
  /* 1087efc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087efc4 call 0x10882760 */
  push32(0x1087efc9u); f_10882760();
  /* 1087efc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087efcc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087efcf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087efd1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087efd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087efd7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087efda push edx */
  push32((uint32_t)(EDX));
  /* 1087efdb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1087efdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087efe0 push eax */
  push32((uint32_t)(EAX));
  /* 1087efe1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087efe3 call 0x10882760 */
  push32(0x1087efe8u); f_10882760();
  /* 1087efe8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087efeb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087efee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087eff0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087eff3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087eff6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087eff9 push edx */
  push32((uint32_t)(EDX));
  /* 1087effa push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1087effc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087efff push eax */
  push32((uint32_t)(EAX));
  /* 1087f000 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f002 call 0x10882760 */
  push32(0x1087f007u); f_10882760();
  /* 1087f007 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f00a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f00d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f00f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f012 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f015 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f018 push edx */
  push32((uint32_t)(EDX));
  /* 1087f019 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1087f01b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f01e push eax */
  push32((uint32_t)(EAX));
  /* 1087f01f push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f021 call 0x10882760 */
  push32(0x1087f026u); f_10882760();
  /* 1087f026 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f029 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f02c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f02e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f031 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f034 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f037 push edx */
  push32((uint32_t)(EDX));
  /* 1087f038 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1087f03a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f03d push eax */
  push32((uint32_t)(EAX));
  /* 1087f03e push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f040 call 0x10882760 */
  push32(0x1087f045u); f_10882760();
  /* 1087f045 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f048 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f04b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f04d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f050 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f053 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f056 push edx */
  push32((uint32_t)(EDX));
  /* 1087f057 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1087f059 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f05c push eax */
  push32((uint32_t)(EAX));
  /* 1087f05d push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f05f call 0x10882760 */
  push32(0x1087f064u); f_10882760();
  /* 1087f064 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f067 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f06a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f06c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f06f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f072 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f075 push edx */
  push32((uint32_t)(EDX));
  /* 1087f076 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1087f078 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f07b push eax */
  push32((uint32_t)(EAX));
  /* 1087f07c push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f07e call 0x10882760 */
  push32(0x1087f083u); f_10882760();
  /* 1087f083 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f086 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f089 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f08b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f08e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f091 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f094 push edx */
  push32((uint32_t)(EDX));
  /* 1087f095 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1087f097 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f09a push eax */
  push32((uint32_t)(EAX));
  /* 1087f09b push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f09d call 0x10882760 */
  push32(0x1087f0a2u); f_10882760();
  /* 1087f0a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f0a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f0a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f0aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f0ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f0b0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f0b3 push edx */
  push32((uint32_t)(EDX));
  /* 1087f0b4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1087f0b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f0b9 push eax */
  push32((uint32_t)(EAX));
  /* 1087f0ba push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f0bc call 0x10882760 */
  push32(0x1087f0c1u); f_10882760();
  /* 1087f0c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f0c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f0c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f0c9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f0cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f0cf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f0d2 push edx */
  push32((uint32_t)(EDX));
  /* 1087f0d3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1087f0d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f0d8 push eax */
  push32((uint32_t)(EAX));
  /* 1087f0d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f0db call 0x10882760 */
  push32(0x1087f0e0u); f_10882760();
  /* 1087f0e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f0e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f0e6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f0e8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f0eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f0ee add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f0f1 push edx */
  push32((uint32_t)(EDX));
  /* 1087f0f2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1087f0f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f0f7 push eax */
  push32((uint32_t)(EAX));
  /* 1087f0f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f0fa call 0x10882760 */
  push32(0x1087f0ffu); f_10882760();
  /* 1087f0ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f102 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f105 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f107 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f10a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f10d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f110 push edx */
  push32((uint32_t)(EDX));
  /* 1087f111 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1087f113 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f116 push eax */
  push32((uint32_t)(EAX));
  /* 1087f117 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f119 call 0x10882760 */
  push32(0x1087f11eu); f_10882760();
  /* 1087f11e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f121 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f124 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f126 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f129 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f12c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f12f push edx */
  push32((uint32_t)(EDX));
  /* 1087f130 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1087f132 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f135 push eax */
  push32((uint32_t)(EAX));
  /* 1087f136 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f138 call 0x10882760 */
  push32(0x1087f13du); f_10882760();
  /* 1087f13d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f140 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f143 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f145 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f148 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f14b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f14e push edx */
  push32((uint32_t)(EDX));
  /* 1087f14f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1087f151 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f154 push eax */
  push32((uint32_t)(EAX));
  /* 1087f155 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f157 call 0x10882760 */
  push32(0x1087f15cu); f_10882760();
  /* 1087f15c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f15f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f162 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f164 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f167 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f16a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f16d push edx */
  push32((uint32_t)(EDX));
  /* 1087f16e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1087f170 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f173 push eax */
  push32((uint32_t)(EAX));
  /* 1087f174 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f176 call 0x10882760 */
  push32(0x1087f17bu); f_10882760();
  /* 1087f17b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f17e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f181 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f183 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f186 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f189 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f18c push edx */
  push32((uint32_t)(EDX));
  /* 1087f18d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1087f18f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f192 push eax */
  push32((uint32_t)(EAX));
  /* 1087f193 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f195 call 0x10882760 */
  push32(0x1087f19au); f_10882760();
  /* 1087f19a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f19d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f1a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f1a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f1a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f1a8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f1ab push edx */
  push32((uint32_t)(EDX));
  /* 1087f1ac push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1087f1ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f1b1 push eax */
  push32((uint32_t)(EAX));
  /* 1087f1b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f1b4 call 0x10882760 */
  push32(0x1087f1b9u); f_10882760();
  /* 1087f1b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f1bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f1bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f1c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f1c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f1c7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f1ca push edx */
  push32((uint32_t)(EDX));
  /* 1087f1cb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1087f1cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f1d0 push eax */
  push32((uint32_t)(EAX));
  /* 1087f1d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f1d3 call 0x10882760 */
  push32(0x1087f1d8u); f_10882760();
  /* 1087f1d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f1db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f1de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f1e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f1e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f1e6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f1e9 push edx */
  push32((uint32_t)(EDX));
  /* 1087f1ea push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1087f1ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f1ef push eax */
  push32((uint32_t)(EAX));
  /* 1087f1f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f1f2 call 0x10882760 */
  push32(0x1087f1f7u); f_10882760();
  /* 1087f1f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f1fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f1fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f1ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f202 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f205 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f208 push edx */
  push32((uint32_t)(EDX));
  /* 1087f209 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1087f20b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f20e push eax */
  push32((uint32_t)(EAX));
  /* 1087f20f push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f211 call 0x10882760 */
  push32(0x1087f216u); f_10882760();
  /* 1087f216 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f219 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f21c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f21e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f221 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f224 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f227 push edx */
  push32((uint32_t)(EDX));
  /* 1087f228 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1087f22a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f22d push eax */
  push32((uint32_t)(EAX));
  /* 1087f22e push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f230 call 0x10882760 */
  push32(0x1087f235u); f_10882760();
  /* 1087f235 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f238 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f23b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f23d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f240 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f243 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f246 push edx */
  push32((uint32_t)(EDX));
  /* 1087f247 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1087f249 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f24c push eax */
  push32((uint32_t)(EAX));
  /* 1087f24d push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f24f call 0x10882760 */
  push32(0x1087f254u); f_10882760();
  /* 1087f254 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f257 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f25a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f25c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f25f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f262 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f268 push edx */
  push32((uint32_t)(EDX));
  /* 1087f269 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1087f26b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f26e push eax */
  push32((uint32_t)(EAX));
  /* 1087f26f push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f271 call 0x10882760 */
  push32(0x1087f276u); f_10882760();
  /* 1087f276 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f279 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f27c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f27e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f281 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f284 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f28a push edx */
  push32((uint32_t)(EDX));
  /* 1087f28b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1087f28d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f290 push eax */
  push32((uint32_t)(EAX));
  /* 1087f291 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f293 call 0x10882760 */
  push32(0x1087f298u); f_10882760();
  /* 1087f298 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f29b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f29e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f2a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f2a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f2a6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f2ac push edx */
  push32((uint32_t)(EDX));
  /* 1087f2ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1087f2af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f2b2 push eax */
  push32((uint32_t)(EAX));
  /* 1087f2b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f2b5 call 0x10882760 */
  push32(0x1087f2bau); f_10882760();
  /* 1087f2ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f2bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f2c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f2c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f2c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f2c8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f2ce push edx */
  push32((uint32_t)(EDX));
  /* 1087f2cf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1087f2d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f2d4 push eax */
  push32((uint32_t)(EAX));
  /* 1087f2d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f2d7 call 0x10882760 */
  push32(0x1087f2dcu); f_10882760();
  /* 1087f2dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f2df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f2e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f2e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f2e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f2ea add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f2f0 push edx */
  push32((uint32_t)(EDX));
  /* 1087f2f1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1087f2f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f2f6 push eax */
  push32((uint32_t)(EAX));
  /* 1087f2f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f2f9 call 0x10882760 */
  push32(0x1087f2feu); f_10882760();
  /* 1087f2fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f301 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f304 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f306 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f309 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f30c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f312 push edx */
  push32((uint32_t)(EDX));
  /* 1087f313 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1087f315 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f318 push eax */
  push32((uint32_t)(EAX));
  /* 1087f319 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f31b call 0x10882760 */
  push32(0x1087f320u); f_10882760();
  /* 1087f320 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f323 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f326 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f328 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f32b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f32e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f334 push edx */
  push32((uint32_t)(EDX));
  /* 1087f335 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1087f337 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f33a push eax */
  push32((uint32_t)(EAX));
  /* 1087f33b push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f33d call 0x10882760 */
  push32(0x1087f342u); f_10882760();
  /* 1087f342 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f345 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f348 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f34a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f34d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f350 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f356 push edx */
  push32((uint32_t)(EDX));
  /* 1087f357 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1087f359 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f35c push eax */
  push32((uint32_t)(EAX));
  /* 1087f35d push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f35f call 0x10882760 */
  push32(0x1087f364u); f_10882760();
  /* 1087f364 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f367 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f36a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f36c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f36f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f372 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f378 push edx */
  push32((uint32_t)(EDX));
  /* 1087f379 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1087f37b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087f37e push eax */
  push32((uint32_t)(EAX));
  /* 1087f37f push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f381 call 0x10882760 */
  push32(0x1087f386u); f_10882760();
  /* 1087f386 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f389 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f38c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f38e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f391 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f394 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f39a push edx */
  push32((uint32_t)(EDX));
  /* 1087f39b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1087f39d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087f3a0 push eax */
  push32((uint32_t)(EAX));
  /* 1087f3a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f3a3 call 0x10882760 */
  push32(0x1087f3a8u); f_10882760();
  /* 1087f3a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f3ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f3ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f3b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f3b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f3b6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f3bc push edx */
  push32((uint32_t)(EDX));
  /* 1087f3bd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1087f3c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087f3c5 push eax */
  push32((uint32_t)(EAX));
  /* 1087f3c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f3c8 call 0x10882760 */
  push32(0x1087f3cdu); f_10882760();
  /* 1087f3cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f3d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087f3d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f3d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087f3d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1087f3db:;
  /* 1087f3db mov esp, ebp */
  ESP = (EBP);
  /* 1087f3dd pop ebp */
  EBP = (pop32());
  /* 1087f3de ret  */
  ESPCHK(0x1087ee50u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1087f3e0 (779 bytes, 265 insns) */
void f_1087f3e0(void) {
  FTRACE(0x1087f3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087f3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087f3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1087f3e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087f3e7 jne 0x1087f3ee */
  if (!C.zf) goto L_1087f3ee;
  /* 1087f3e9 jmp 0x1087f6e9 */
  goto L_1087f6e9;
L_1087f3ee:;
  /* 1087f3ee push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f3f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f3f3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1087f3f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1087f3f7 call 0x10875030 */
  push32(0x1087f3fcu); f_10875030();
  /* 1087f3fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f3ff push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f401 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f404 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1087f407 push eax */
  push32((uint32_t)(EAX));
  /* 1087f408 call 0x10875030 */
  push32(0x1087f40du); f_10875030();
  /* 1087f40d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f410 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f412 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f415 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1087f418 push edx */
  push32((uint32_t)(EDX));
  /* 1087f419 call 0x10875030 */
  push32(0x1087f41eu); f_10875030();
  /* 1087f41e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f421 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f423 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f426 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1087f429 push ecx */
  push32((uint32_t)(ECX));
  /* 1087f42a call 0x10875030 */
  push32(0x1087f42fu); f_10875030();
  /* 1087f42f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f432 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f434 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f437 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1087f43a push eax */
  push32((uint32_t)(EAX));
  /* 1087f43b call 0x10875030 */
  push32(0x1087f440u); f_10875030();
  /* 1087f440 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f443 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f445 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f448 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1087f44b push edx */
  push32((uint32_t)(EDX));
  /* 1087f44c call 0x10875030 */
  push32(0x1087f451u); f_10875030();
  /* 1087f451 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f454 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f456 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f459 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1087f45b push ecx */
  push32((uint32_t)(ECX));
  /* 1087f45c call 0x10875030 */
  push32(0x1087f461u); f_10875030();
  /* 1087f461 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f464 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f466 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f469 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1087f46c push eax */
  push32((uint32_t)(EAX));
  /* 1087f46d call 0x10875030 */
  push32(0x1087f472u); f_10875030();
  /* 1087f472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f475 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f477 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f47a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1087f47d push edx */
  push32((uint32_t)(EDX));
  /* 1087f47e call 0x10875030 */
  push32(0x1087f483u); f_10875030();
  /* 1087f483 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f486 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f488 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f48b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1087f48e push ecx */
  push32((uint32_t)(ECX));
  /* 1087f48f call 0x10875030 */
  push32(0x1087f494u); f_10875030();
  /* 1087f494 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f497 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f499 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f49c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1087f49f push eax */
  push32((uint32_t)(EAX));
  /* 1087f4a0 call 0x10875030 */
  push32(0x1087f4a5u); f_10875030();
  /* 1087f4a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f4a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f4aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f4ad mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1087f4b0 push edx */
  push32((uint32_t)(EDX));
  /* 1087f4b1 call 0x10875030 */
  push32(0x1087f4b6u); f_10875030();
  /* 1087f4b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f4b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f4bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f4be mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1087f4c1 push ecx */
  push32((uint32_t)(ECX));
  /* 1087f4c2 call 0x10875030 */
  push32(0x1087f4c7u); f_10875030();
  /* 1087f4c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f4ca push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f4cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f4cf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1087f4d2 push eax */
  push32((uint32_t)(EAX));
  /* 1087f4d3 call 0x10875030 */
  push32(0x1087f4d8u); f_10875030();
  /* 1087f4d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f4db push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f4dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f4e0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1087f4e3 push edx */
  push32((uint32_t)(EDX));
  /* 1087f4e4 call 0x10875030 */
  push32(0x1087f4e9u); f_10875030();
  /* 1087f4e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f4ec push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f4ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f4f1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1087f4f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1087f4f5 call 0x10875030 */
  push32(0x1087f4fau); f_10875030();
  /* 1087f4fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f4fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f4ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f502 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1087f505 push eax */
  push32((uint32_t)(EAX));
  /* 1087f506 call 0x10875030 */
  push32(0x1087f50bu); f_10875030();
  /* 1087f50b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f50e push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f510 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f513 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1087f516 push edx */
  push32((uint32_t)(EDX));
  /* 1087f517 call 0x10875030 */
  push32(0x1087f51cu); f_10875030();
  /* 1087f51c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f51f push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f521 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f524 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1087f527 push ecx */
  push32((uint32_t)(ECX));
  /* 1087f528 call 0x10875030 */
  push32(0x1087f52du); f_10875030();
  /* 1087f52d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f530 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f532 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f535 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1087f538 push eax */
  push32((uint32_t)(EAX));
  /* 1087f539 call 0x10875030 */
  push32(0x1087f53eu); f_10875030();
  /* 1087f53e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f541 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f543 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f546 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1087f549 push edx */
  push32((uint32_t)(EDX));
  /* 1087f54a call 0x10875030 */
  push32(0x1087f54fu); f_10875030();
  /* 1087f54f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f552 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f557 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1087f55a push ecx */
  push32((uint32_t)(ECX));
  /* 1087f55b call 0x10875030 */
  push32(0x1087f560u); f_10875030();
  /* 1087f560 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f563 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f565 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f568 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1087f56b push eax */
  push32((uint32_t)(EAX));
  /* 1087f56c call 0x10875030 */
  push32(0x1087f571u); f_10875030();
  /* 1087f571 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f574 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f576 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f579 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1087f57c push edx */
  push32((uint32_t)(EDX));
  /* 1087f57d call 0x10875030 */
  push32(0x1087f582u); f_10875030();
  /* 1087f582 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f585 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f587 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f58a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1087f58d push ecx */
  push32((uint32_t)(ECX));
  /* 1087f58e call 0x10875030 */
  push32(0x1087f593u); f_10875030();
  /* 1087f593 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f596 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f598 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f59b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1087f59e push eax */
  push32((uint32_t)(EAX));
  /* 1087f59f call 0x10875030 */
  push32(0x1087f5a4u); f_10875030();
  /* 1087f5a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f5a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f5a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f5ac mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1087f5af push edx */
  push32((uint32_t)(EDX));
  /* 1087f5b0 call 0x10875030 */
  push32(0x1087f5b5u); f_10875030();
  /* 1087f5b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f5b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f5ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f5bd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1087f5c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1087f5c1 call 0x10875030 */
  push32(0x1087f5c6u); f_10875030();
  /* 1087f5c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f5c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f5cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f5ce mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1087f5d1 push eax */
  push32((uint32_t)(EAX));
  /* 1087f5d2 call 0x10875030 */
  push32(0x1087f5d7u); f_10875030();
  /* 1087f5d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f5da push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f5dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f5df mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1087f5e2 push edx */
  push32((uint32_t)(EDX));
  /* 1087f5e3 call 0x10875030 */
  push32(0x1087f5e8u); f_10875030();
  /* 1087f5e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f5eb push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f5ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f5f0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1087f5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1087f5f4 call 0x10875030 */
  push32(0x1087f5f9u); f_10875030();
  /* 1087f5f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f5fc push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f5fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f601 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1087f604 push eax */
  push32((uint32_t)(EAX));
  /* 1087f605 call 0x10875030 */
  push32(0x1087f60au); f_10875030();
  /* 1087f60a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f60d push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f60f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f612 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1087f618 push edx */
  push32((uint32_t)(EDX));
  /* 1087f619 call 0x10875030 */
  push32(0x1087f61eu); f_10875030();
  /* 1087f61e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f621 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f623 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f626 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1087f62c push ecx */
  push32((uint32_t)(ECX));
  /* 1087f62d call 0x10875030 */
  push32(0x1087f632u); f_10875030();
  /* 1087f632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f635 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f637 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f63a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1087f640 push eax */
  push32((uint32_t)(EAX));
  /* 1087f641 call 0x10875030 */
  push32(0x1087f646u); f_10875030();
  /* 1087f646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f649 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f64b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f64e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1087f654 push edx */
  push32((uint32_t)(EDX));
  /* 1087f655 call 0x10875030 */
  push32(0x1087f65au); f_10875030();
  /* 1087f65a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f65d push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f65f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f662 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1087f668 push ecx */
  push32((uint32_t)(ECX));
  /* 1087f669 call 0x10875030 */
  push32(0x1087f66eu); f_10875030();
  /* 1087f66e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f671 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f673 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f676 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1087f67c push eax */
  push32((uint32_t)(EAX));
  /* 1087f67d call 0x10875030 */
  push32(0x1087f682u); f_10875030();
  /* 1087f682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f685 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f687 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f68a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1087f690 push edx */
  push32((uint32_t)(EDX));
  /* 1087f691 call 0x10875030 */
  push32(0x1087f696u); f_10875030();
  /* 1087f696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f699 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f69b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f69e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1087f6a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1087f6a5 call 0x10875030 */
  push32(0x1087f6aau); f_10875030();
  /* 1087f6aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f6ad push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f6af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f6b2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1087f6b8 push eax */
  push32((uint32_t)(EAX));
  /* 1087f6b9 call 0x10875030 */
  push32(0x1087f6beu); f_10875030();
  /* 1087f6be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f6c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f6c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f6c6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1087f6cc push edx */
  push32((uint32_t)(EDX));
  /* 1087f6cd call 0x10875030 */
  push32(0x1087f6d2u); f_10875030();
  /* 1087f6d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f6d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f6d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f6da mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1087f6e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1087f6e1 call 0x10875030 */
  push32(0x1087f6e6u); f_10875030();
  /* 1087f6e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087f6e9:;
  /* 1087f6e9 pop ebp */
  EBP = (pop32());
  /* 1087f6ea ret  */
  ESPCHK(0x1087f3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6f0 @ 0x1087f6f0 (678 bytes, 180 insns) */
void f_1087f6f0(void) {
  FTRACE(0x1087f6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087f6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087f6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1087f6f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087f6f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1087f6fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087f6ff mov ax, word ptr [0x108a089a] */
  AX = (r16((uint32_t)(0x108a089a)));
  /* 1087f705 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087f708 cmp dword ptr [0x108a0840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087f70f je 0x1087f86a */
  if (C.zf) goto L_1087f86a;
  /* 1087f715 push 0x108a0868 */
  push32((uint32_t)(0x108a0868u));
  /* 1087f71a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1087f71c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f71f push ecx */
  push32((uint32_t)(ECX));
  /* 1087f720 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f722 call 0x10882760 */
  push32(0x1087f727u); f_10882760();
  /* 1087f727 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f72a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087f72d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1087f72f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1087f732 push 0x108a086c */
  push32((uint32_t)(0x108a086cu));
  /* 1087f737 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1087f739 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f73c push eax */
  push32((uint32_t)(EAX));
  /* 1087f73d push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f73f call 0x10882760 */
  push32(0x1087f744u); f_10882760();
  /* 1087f744 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f747 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087f74a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f74c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087f74f push 0x108a0870 */
  push32((uint32_t)(0x108a0870u));
  /* 1087f754 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1087f756 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f759 push edx */
  push32((uint32_t)(EDX));
  /* 1087f75a push 1 */
  push32((uint32_t)(0x1u));
  /* 1087f75c call 0x10882760 */
  push32(0x1087f761u); f_10882760();
  /* 1087f761 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f764 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087f767 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087f769 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087f76c mov edx, dword ptr [0x108a0870] */
  EDX = (r32((uint32_t)(0x108a0870)));
  /* 1087f772 push edx */
  push32((uint32_t)(EDX));
  /* 1087f773 call 0x1087f9a0 */
  push32(0x1087f778u); f_1087f9a0();
  /* 1087f778 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f77b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087f77f je 0x1087f7d9 */
  if (C.zf) goto L_1087f7d9;
  /* 1087f781 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f783 mov eax, dword ptr [0x108a0868] */
  EAX = (r32((uint32_t)(0x108a0868)));
  /* 1087f788 push eax */
  push32((uint32_t)(EAX));
  /* 1087f789 call 0x10875030 */
  push32(0x1087f78eu); f_10875030();
  /* 1087f78e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f791 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f793 mov ecx, dword ptr [0x108a086c] */
  ECX = (r32((uint32_t)(0x108a086c)));
  /* 1087f799 push ecx */
  push32((uint32_t)(ECX));
  /* 1087f79a call 0x10875030 */
  push32(0x1087f79fu); f_10875030();
  /* 1087f79f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f7a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f7a4 mov edx, dword ptr [0x108a0870] */
  EDX = (r32((uint32_t)(0x108a0870)));
  /* 1087f7aa push edx */
  push32((uint32_t)(EDX));
  /* 1087f7ab call 0x10875030 */
  push32(0x1087f7b0u); f_10875030();
  /* 1087f7b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f7b3 mov dword ptr [0x108a0868], 0 */
  w32((uint32_t)(0x108a0868), (0x0u));
  /* 1087f7bd mov dword ptr [0x108a086c], 0 */
  w32((uint32_t)(0x108a086c), (0x0u));
  /* 1087f7c7 mov dword ptr [0x108a0870], 0 */
  w32((uint32_t)(0x108a0870), (0x0u));
  /* 1087f7d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087f7d4 jmp 0x1087f992 */
  goto L_1087f992;
L_1087f7d9:;
  /* 1087f7d9 mov eax, dword ptr [0x1089fd88] */
  EAX = (r32((uint32_t)(0x1089fd88)));
  /* 1087f7de cmp dword ptr [eax], 0x1089fd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1089fd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087f7e4 je 0x1087f820 */
  if (C.zf) goto L_1087f820;
  /* 1087f7e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f7e8 mov ecx, dword ptr [0x1089fd88] */
  ECX = (r32((uint32_t)(0x1089fd88)));
  /* 1087f7ee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1087f7f0 push edx */
  push32((uint32_t)(EDX));
  /* 1087f7f1 call 0x10875030 */
  push32(0x1087f7f6u); f_10875030();
  /* 1087f7f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f7f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f7fb mov eax, dword ptr [0x1089fd88] */
  EAX = (r32((uint32_t)(0x1089fd88)));
  /* 1087f800 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1087f803 push ecx */
  push32((uint32_t)(ECX));
  /* 1087f804 call 0x10875030 */
  push32(0x1087f809u); f_10875030();
  /* 1087f809 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f80c push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f80e mov edx, dword ptr [0x1089fd88] */
  EDX = (r32((uint32_t)(0x1089fd88)));
  /* 1087f814 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1087f817 push eax */
  push32((uint32_t)(EAX));
  /* 1087f818 call 0x10875030 */
  push32(0x1087f81du); f_10875030();
  /* 1087f81d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087f820:;
  /* 1087f820 mov ecx, dword ptr [0x1089fd88] */
  ECX = (r32((uint32_t)(0x1089fd88)));
  /* 1087f826 mov edx, dword ptr [0x108a0868] */
  EDX = (r32((uint32_t)(0x108a0868)));
  /* 1087f82c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1087f82e mov eax, dword ptr [0x1089fd88] */
  EAX = (r32((uint32_t)(0x1089fd88)));
  /* 1087f833 mov ecx, dword ptr [0x108a086c] */
  ECX = (r32((uint32_t)(0x108a086c)));
  /* 1087f839 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1087f83c mov edx, dword ptr [0x1089fd88] */
  EDX = (r32((uint32_t)(0x1089fd88)));
  /* 1087f842 mov eax, dword ptr [0x108a0870] */
  EAX = (r32((uint32_t)(0x108a0870)));
  /* 1087f847 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1087f84a mov ecx, dword ptr [0x1089fd88] */
  ECX = (r32((uint32_t)(0x1089fd88)));
  /* 1087f850 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1087f852 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1087f854 mov byte ptr [0x1089eea8], al */
  w8((uint32_t)(0x1089eea8), (AL));
  /* 1087f859 mov dword ptr [0x1089eeac], 1 */
  w32((uint32_t)(0x1089eeac), (0x1u));
  /* 1087f863 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087f865 jmp 0x1087f992 */
  goto L_1087f992;
L_1087f86a:;
  /* 1087f86a push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f86c mov ecx, dword ptr [0x108a0868] */
  ECX = (r32((uint32_t)(0x108a0868)));
  /* 1087f872 push ecx */
  push32((uint32_t)(ECX));
  /* 1087f873 call 0x10875030 */
  push32(0x1087f878u); f_10875030();
  /* 1087f878 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f87b push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f87d mov edx, dword ptr [0x108a086c] */
  EDX = (r32((uint32_t)(0x108a086c)));
  /* 1087f883 push edx */
  push32((uint32_t)(EDX));
  /* 1087f884 call 0x10875030 */
  push32(0x1087f889u); f_10875030();
  /* 1087f889 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f88c push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f88e mov eax, dword ptr [0x108a0870] */
  EAX = (r32((uint32_t)(0x108a0870)));
  /* 1087f893 push eax */
  push32((uint32_t)(EAX));
  /* 1087f894 call 0x10875030 */
  push32(0x1087f899u); f_10875030();
  /* 1087f899 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f89c mov dword ptr [0x108a0868], 0 */
  w32((uint32_t)(0x108a0868), (0x0u));
  /* 1087f8a6 mov dword ptr [0x108a086c], 0 */
  w32((uint32_t)(0x108a086c), (0x0u));
  /* 1087f8b0 mov dword ptr [0x108a0870], 0 */
  w32((uint32_t)(0x108a0870), (0x0u));
  /* 1087f8ba push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1087f8bf push 0x1089c19c */
  push32((uint32_t)(0x1089c19cu));
  /* 1087f8c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f8c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f8c8 call 0x108745a0 */
  push32(0x1087f8cdu); f_108745a0();
  /* 1087f8cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f8d0 mov ecx, dword ptr [0x1089fd88] */
  ECX = (r32((uint32_t)(0x1089fd88)));
  /* 1087f8d6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1087f8d8 mov edx, dword ptr [0x1089fd88] */
  EDX = (r32((uint32_t)(0x1089fd88)));
  /* 1087f8de cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087f8e1 jne 0x1087f8eb */
  if (!C.zf) goto L_1087f8eb;
  /* 1087f8e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087f8e6 jmp 0x1087f992 */
  goto L_1087f992;
L_1087f8eb:;
  /* 1087f8eb push 0x1089c16c */
  push32((uint32_t)(0x1089c16cu));
  /* 1087f8f0 mov eax, dword ptr [0x1089fd88] */
  EAX = (r32((uint32_t)(0x1089fd88)));
  /* 1087f8f5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1087f8f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1087f8f8 call 0x10877550 */
  push32(0x1087f8fdu); f_10877550();
  /* 1087f8fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f900 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1087f905 push 0x1089c19c */
  push32((uint32_t)(0x1089c19cu));
  /* 1087f90a push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f90c push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f90e call 0x108745a0 */
  push32(0x1087f913u); f_108745a0();
  /* 1087f913 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f916 mov edx, dword ptr [0x1089fd88] */
  EDX = (r32((uint32_t)(0x1089fd88)));
  /* 1087f91c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1087f91f mov eax, dword ptr [0x1089fd88] */
  EAX = (r32((uint32_t)(0x1089fd88)));
  /* 1087f924 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087f928 jne 0x1087f92f */
  if (!C.zf) goto L_1087f92f;
  /* 1087f92a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087f92d jmp 0x1087f992 */
  goto L_1087f992;
L_1087f92f:;
  /* 1087f92f mov ecx, dword ptr [0x1089fd88] */
  ECX = (r32((uint32_t)(0x1089fd88)));
  /* 1087f935 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1087f938 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1087f93b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1087f940 push 0x1089c19c */
  push32((uint32_t)(0x1089c19cu));
  /* 1087f945 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f947 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087f949 call 0x108745a0 */
  push32(0x1087f94eu); f_108745a0();
  /* 1087f94e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f951 mov ecx, dword ptr [0x1089fd88] */
  ECX = (r32((uint32_t)(0x1089fd88)));
  /* 1087f957 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1087f95a mov edx, dword ptr [0x1089fd88] */
  EDX = (r32((uint32_t)(0x1089fd88)));
  /* 1087f960 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087f964 jne 0x1087f96b */
  if (!C.zf) goto L_1087f96b;
  /* 1087f966 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087f969 jmp 0x1087f992 */
  goto L_1087f992;
L_1087f96b:;
  /* 1087f96b mov eax, dword ptr [0x1089fd88] */
  EAX = (r32((uint32_t)(0x1089fd88)));
  /* 1087f970 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1087f973 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1087f976 mov edx, dword ptr [0x1089fd88] */
  EDX = (r32((uint32_t)(0x1089fd88)));
  /* 1087f97c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1087f97e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1087f980 mov byte ptr [0x1089eea8], cl */
  w8((uint32_t)(0x1089eea8), (CL));
  /* 1087f986 mov dword ptr [0x1089eeac], 1 */
  w32((uint32_t)(0x1089eeac), (0x1u));
  /* 1087f990 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1087f992:;
  /* 1087f992 mov esp, ebp */
  ESP = (EBP);
  /* 1087f994 pop ebp */
  EBP = (pop32());
  /* 1087f995 ret  */
  ESPCHK(0x1087f6f0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1087f9a0 (125 bytes, 49 insns) */
void f_1087f9a0(void) {
  FTRACE(0x1087f9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087f9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087f9a1 mov ebp, esp */
  EBP = (ESP);
  /* 1087f9a3 push ecx */
  push32((uint32_t)(ECX));
L_1087f9a4:;
  /* 1087f9a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f9a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1087f9aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087f9ac je 0x1087fa19 */
  if (C.zf) goto L_1087fa19;
  /* 1087f9ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f9b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1087f9b4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087f9b7 jl 0x1087f9dd */
  if ((C.sf!=C.of)) goto L_1087f9dd;
  /* 1087f9b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f9bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1087f9bf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087f9c2 jg 0x1087f9dd */
  if ((!C.zf&&C.sf==C.of)) goto L_1087f9dd;
  /* 1087f9c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f9c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1087f9ca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087f9cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f9d0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1087f9d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f9d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f9d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1087f9db jmp 0x1087fa17 */
  goto L_1087fa17;
L_1087f9dd:;
  /* 1087f9dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f9e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1087f9e3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087f9e6 jne 0x1087fa0e */
  if (!C.zf) goto L_1087fa0e;
  /* 1087f9e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087f9eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1087f9ee:;
  /* 1087f9ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f9f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f9f4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1087f9f7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1087f9f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087f9fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087f9ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1087fa02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fa05 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1087fa08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087fa0a jne 0x1087f9ee */
  if (!C.zf) goto L_1087f9ee;
  /* 1087fa0c jmp 0x1087fa17 */
  goto L_1087fa17;
L_1087fa0e:;
  /* 1087fa0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fa11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fa14 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1087fa17:;
  /* 1087fa17 jmp 0x1087f9a4 */
  goto L_1087f9a4;
L_1087fa19:;
  /* 1087fa19 mov esp, ebp */
  ESP = (EBP);
  /* 1087fa1b pop ebp */
  EBP = (pop32());
  /* 1087fa1c ret  */
  ESPCHK(0x1087f9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa20 @ 0x1087fa20 (304 bytes, 85 insns) */
void f_1087fa20(void) {
  FTRACE(0x1087fa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087fa20 push ebp */
  push32((uint32_t)(EBP));
  /* 1087fa21 mov ebp, esp */
  EBP = (ESP);
  /* 1087fa23 push ecx */
  push32((uint32_t)(ECX));
  /* 1087fa24 cmp dword ptr [0x108a083c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a083c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087fa2b je 0x1087faec */
  if (C.zf) goto L_1087faec;
  /* 1087fa31 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1087fa33 push 0x1089c1a8 */
  push32((uint32_t)(0x1089c1a8u));
  /* 1087fa38 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087fa3a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1087fa3c push 1 */
  push32((uint32_t)(0x1u));
  /* 1087fa3e call 0x108749b0 */
  push32(0x1087fa43u); f_108749b0();
  /* 1087fa43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fa46 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087fa49 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087fa4d jne 0x1087fa59 */
  if (!C.zf) goto L_1087fa59;
  /* 1087fa4f mov eax, 1 */
  EAX = (0x1u);
  /* 1087fa54 jmp 0x1087fb4c */
  goto L_1087fb4c;
L_1087fa59:;
  /* 1087fa59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fa5c push eax */
  push32((uint32_t)(EAX));
  /* 1087fa5d call 0x1087fb50 */
  push32(0x1087fa62u); f_1087fb50();
  /* 1087fa62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fa65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087fa67 je 0x1087fa8d */
  if (C.zf) goto L_1087fa8d;
  /* 1087fa69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fa6c push ecx */
  push32((uint32_t)(ECX));
  /* 1087fa6d call 0x1087fde0 */
  push32(0x1087fa72u); f_1087fde0();
  /* 1087fa72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fa75 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087fa77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fa7a push edx */
  push32((uint32_t)(EDX));
  /* 1087fa7b call 0x10875030 */
  push32(0x1087fa80u); f_10875030();
  /* 1087fa80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fa83 mov eax, 1 */
  EAX = (0x1u);
  /* 1087fa88 jmp 0x1087fb4c */
  goto L_1087fb4c;
L_1087fa8d:;
  /* 1087fa8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fa90 mov ecx, dword ptr [0x1089fd88] */
  ECX = (r32((uint32_t)(0x1089fd88)));
  /* 1087fa96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1087fa98 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1087fa9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fa9d mov ecx, dword ptr [0x1089fd88] */
  ECX = (r32((uint32_t)(0x1089fd88)));
  /* 1087faa3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1087faa6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1087faa9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087faac mov ecx, dword ptr [0x1089fd88] */
  ECX = (r32((uint32_t)(0x1089fd88)));
  /* 1087fab2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1087fab5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1087fab8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fabb mov dword ptr [0x1089fd88], eax */
  w32((uint32_t)(0x1089fd88), (EAX));
  /* 1087fac0 mov ecx, dword ptr [0x108a0874] */
  ECX = (r32((uint32_t)(0x108a0874)));
  /* 1087fac6 push ecx */
  push32((uint32_t)(ECX));
  /* 1087fac7 call 0x1087fde0 */
  push32(0x1087faccu); f_1087fde0();
  /* 1087facc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087facf push 2 */
  push32((uint32_t)(0x2u));
  /* 1087fad1 mov edx, dword ptr [0x108a0874] */
  EDX = (r32((uint32_t)(0x108a0874)));
  /* 1087fad7 push edx */
  push32((uint32_t)(EDX));
  /* 1087fad8 call 0x10875030 */
  push32(0x1087faddu); f_10875030();
  /* 1087fadd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fae0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fae3 mov dword ptr [0x108a0874], eax */
  w32((uint32_t)(0x108a0874), (EAX));
  /* 1087fae8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087faea jmp 0x1087fb4c */
  goto L_1087fb4c;
L_1087faec:;
  /* 1087faec mov ecx, dword ptr [0x1089fd88] */
  ECX = (r32((uint32_t)(0x1089fd88)));
  /* 1087faf2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1087faf4 mov dword ptr [0x1089fd58], edx */
  w32((uint32_t)(0x1089fd58), (EDX));
  /* 1087fafa mov eax, dword ptr [0x1089fd88] */
  EAX = (r32((uint32_t)(0x1089fd88)));
  /* 1087faff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1087fb02 mov dword ptr [0x1089fd5c], ecx */
  w32((uint32_t)(0x1089fd5c), (ECX));
  /* 1087fb08 mov edx, dword ptr [0x1089fd88] */
  EDX = (r32((uint32_t)(0x1089fd88)));
  /* 1087fb0e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1087fb11 mov dword ptr [0x1089fd60], eax */
  w32((uint32_t)(0x1089fd60), (EAX));
  /* 1087fb16 mov dword ptr [0x1089fd88], 0x1089fd58 */
  w32((uint32_t)(0x1089fd88), (0x1089fd58u));
  /* 1087fb20 mov ecx, dword ptr [0x108a0874] */
  ECX = (r32((uint32_t)(0x108a0874)));
  /* 1087fb26 push ecx */
  push32((uint32_t)(ECX));
  /* 1087fb27 call 0x1087fde0 */
  push32(0x1087fb2cu); f_1087fde0();
  /* 1087fb2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fb2f push 2 */
  push32((uint32_t)(0x2u));
  /* 1087fb31 mov edx, dword ptr [0x108a0874] */
  EDX = (r32((uint32_t)(0x108a0874)));
  /* 1087fb37 push edx */
  push32((uint32_t)(EDX));
  /* 1087fb38 call 0x10875030 */
  push32(0x1087fb3du); f_10875030();
  /* 1087fb3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fb40 mov dword ptr [0x108a0874], 0 */
  w32((uint32_t)(0x108a0874), (0x0u));
  /* 1087fb4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1087fb4c:;
  /* 1087fb4c mov esp, ebp */
  ESP = (EBP);
  /* 1087fb4e pop ebp */
  EBP = (pop32());
  /* 1087fb4f ret  */
  ESPCHK(0x1087fa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb50 @ 0x1087fb50 (525 bytes, 200 insns) */
void f_1087fb50(void) {
  FTRACE(0x1087fb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087fb50 push ebp */
  push32((uint32_t)(EBP));
  /* 1087fb51 mov ebp, esp */
  EBP = (ESP);
  /* 1087fb53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087fb56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1087fb5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087fb5f mov ax, word ptr [0x108a0894] */
  AX = (r16((uint32_t)(0x108a0894)));
  /* 1087fb65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087fb68 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087fb6c jne 0x1087fb76 */
  if (!C.zf) goto L_1087fb76;
  /* 1087fb6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087fb71 jmp 0x1087fd59 */
  goto L_1087fd59;
L_1087fb76:;
  /* 1087fb76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fb79 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fb7c push ecx */
  push32((uint32_t)(ECX));
  /* 1087fb7d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1087fb7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fb82 push edx */
  push32((uint32_t)(EDX));
  /* 1087fb83 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087fb85 call 0x10882760 */
  push32(0x1087fb8au); f_10882760();
  /* 1087fb8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fb8d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087fb90 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087fb92 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087fb95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fb98 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fb9b push edx */
  push32((uint32_t)(EDX));
  /* 1087fb9c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1087fb9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fba1 push eax */
  push32((uint32_t)(EAX));
  /* 1087fba2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087fba4 call 0x10882760 */
  push32(0x1087fba9u); f_10882760();
  /* 1087fba9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fbac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087fbaf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087fbb1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087fbb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fbb7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fbba push edx */
  push32((uint32_t)(EDX));
  /* 1087fbbb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1087fbbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fbc0 push eax */
  push32((uint32_t)(EAX));
  /* 1087fbc1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087fbc3 call 0x10882760 */
  push32(0x1087fbc8u); f_10882760();
  /* 1087fbc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fbcb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087fbce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087fbd0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087fbd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fbd6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fbd9 push edx */
  push32((uint32_t)(EDX));
  /* 1087fbda push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1087fbdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fbdf push eax */
  push32((uint32_t)(EAX));
  /* 1087fbe0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087fbe2 call 0x10882760 */
  push32(0x1087fbe7u); f_10882760();
  /* 1087fbe7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fbea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087fbed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087fbef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087fbf2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fbf5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fbf8 push edx */
  push32((uint32_t)(EDX));
  /* 1087fbf9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1087fbfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fbfe push eax */
  push32((uint32_t)(EAX));
  /* 1087fbff push 1 */
  push32((uint32_t)(0x1u));
  /* 1087fc01 call 0x10882760 */
  push32(0x1087fc06u); f_10882760();
  /* 1087fc06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fc09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087fc0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087fc0e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087fc11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fc14 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1087fc17 push eax */
  push32((uint32_t)(EAX));
  /* 1087fc18 call 0x1087fd60 */
  push32(0x1087fc1du); f_1087fd60();
  /* 1087fc1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fc20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fc23 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fc26 push ecx */
  push32((uint32_t)(ECX));
  /* 1087fc27 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1087fc29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fc2c push edx */
  push32((uint32_t)(EDX));
  /* 1087fc2d push 1 */
  push32((uint32_t)(0x1u));
  /* 1087fc2f call 0x10882760 */
  push32(0x1087fc34u); f_10882760();
  /* 1087fc34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fc37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087fc3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087fc3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087fc3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fc42 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fc45 push edx */
  push32((uint32_t)(EDX));
  /* 1087fc46 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1087fc48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fc4b push eax */
  push32((uint32_t)(EAX));
  /* 1087fc4c push 1 */
  push32((uint32_t)(0x1u));
  /* 1087fc4e call 0x10882760 */
  push32(0x1087fc53u); f_10882760();
  /* 1087fc53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fc56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087fc59 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087fc5b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087fc5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fc61 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fc64 push edx */
  push32((uint32_t)(EDX));
  /* 1087fc65 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1087fc67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fc6a push eax */
  push32((uint32_t)(EAX));
  /* 1087fc6b push 0 */
  push32((uint32_t)(0x0u));
  /* 1087fc6d call 0x10882760 */
  push32(0x1087fc72u); f_10882760();
  /* 1087fc72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fc75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087fc78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087fc7a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087fc7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fc80 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fc83 push edx */
  push32((uint32_t)(EDX));
  /* 1087fc84 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1087fc86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fc89 push eax */
  push32((uint32_t)(EAX));
  /* 1087fc8a push 0 */
  push32((uint32_t)(0x0u));
  /* 1087fc8c call 0x10882760 */
  push32(0x1087fc91u); f_10882760();
  /* 1087fc91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fc94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087fc97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087fc99 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087fc9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fc9f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fca2 push edx */
  push32((uint32_t)(EDX));
  /* 1087fca3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1087fca5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fca8 push eax */
  push32((uint32_t)(EAX));
  /* 1087fca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087fcab call 0x10882760 */
  push32(0x1087fcb0u); f_10882760();
  /* 1087fcb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fcb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087fcb6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087fcb8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087fcbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fcbe add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fcc1 push edx */
  push32((uint32_t)(EDX));
  /* 1087fcc2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1087fcc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fcc7 push eax */
  push32((uint32_t)(EAX));
  /* 1087fcc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087fcca call 0x10882760 */
  push32(0x1087fccfu); f_10882760();
  /* 1087fccf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fcd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087fcd5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087fcd7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087fcda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fcdd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fce0 push edx */
  push32((uint32_t)(EDX));
  /* 1087fce1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1087fce3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fce6 push eax */
  push32((uint32_t)(EAX));
  /* 1087fce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087fce9 call 0x10882760 */
  push32(0x1087fceeu); f_10882760();
  /* 1087fcee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fcf1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087fcf4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087fcf6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087fcf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fcfc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fcff push edx */
  push32((uint32_t)(EDX));
  /* 1087fd00 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1087fd02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fd05 push eax */
  push32((uint32_t)(EAX));
  /* 1087fd06 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087fd08 call 0x10882760 */
  push32(0x1087fd0du); f_10882760();
  /* 1087fd0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fd10 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087fd13 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087fd15 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087fd18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fd1b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fd1e push edx */
  push32((uint32_t)(EDX));
  /* 1087fd1f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1087fd21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fd24 push eax */
  push32((uint32_t)(EAX));
  /* 1087fd25 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087fd27 call 0x10882760 */
  push32(0x1087fd2cu); f_10882760();
  /* 1087fd2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fd2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087fd32 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087fd34 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087fd37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fd3a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fd3d push edx */
  push32((uint32_t)(EDX));
  /* 1087fd3e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1087fd40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fd43 push eax */
  push32((uint32_t)(EAX));
  /* 1087fd44 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087fd46 call 0x10882760 */
  push32(0x1087fd4bu); f_10882760();
  /* 1087fd4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fd4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087fd51 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1087fd53 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1087fd56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1087fd59:;
  /* 1087fd59 mov esp, ebp */
  ESP = (EBP);
  /* 1087fd5b pop ebp */
  EBP = (pop32());
  /* 1087fd5c ret  */
  ESPCHK(0x1087fb50u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1087fd60 (125 bytes, 49 insns) */
void f_1087fd60(void) {
  FTRACE(0x1087fd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087fd60 push ebp */
  push32((uint32_t)(EBP));
  /* 1087fd61 mov ebp, esp */
  EBP = (ESP);
  /* 1087fd63 push ecx */
  push32((uint32_t)(ECX));
L_1087fd64:;
  /* 1087fd64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fd67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1087fd6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087fd6c je 0x1087fdd9 */
  if (C.zf) goto L_1087fdd9;
  /* 1087fd6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fd71 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1087fd74 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087fd77 jl 0x1087fd9d */
  if ((C.sf!=C.of)) goto L_1087fd9d;
  /* 1087fd79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fd7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1087fd7f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087fd82 jg 0x1087fd9d */
  if ((!C.zf&&C.sf==C.of)) goto L_1087fd9d;
  /* 1087fd84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fd87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1087fd8a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087fd8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fd90 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1087fd92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fd95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fd98 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1087fd9b jmp 0x1087fdd7 */
  goto L_1087fdd7;
L_1087fd9d:;
  /* 1087fd9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fda0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1087fda3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087fda6 jne 0x1087fdce */
  if (!C.zf) goto L_1087fdce;
  /* 1087fda8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fdab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1087fdae:;
  /* 1087fdae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fdb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fdb4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1087fdb7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1087fdb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fdbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fdbf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1087fdc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087fdc5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1087fdc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087fdca jne 0x1087fdae */
  if (!C.zf) goto L_1087fdae;
  /* 1087fdcc jmp 0x1087fdd7 */
  goto L_1087fdd7;
L_1087fdce:;
  /* 1087fdce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fdd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fdd4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1087fdd7:;
  /* 1087fdd7 jmp 0x1087fd64 */
  goto L_1087fd64;
L_1087fdd9:;
  /* 1087fdd9 mov esp, ebp */
  ESP = (EBP);
  /* 1087fddb pop ebp */
  EBP = (pop32());
  /* 1087fddc ret  */
  ESPCHK(0x1087fd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fde0 @ 0x1087fde0 (147 bytes, 52 insns) */
void f_1087fde0(void) {
  FTRACE(0x1087fde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087fde0 push ebp */
  push32((uint32_t)(EBP));
  /* 1087fde1 mov ebp, esp */
  EBP = (ESP);
  /* 1087fde3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087fde7 jne 0x1087fdee */
  if (!C.zf) goto L_1087fdee;
  /* 1087fde9 jmp 0x1087fe71 */
  goto L_1087fe71;
L_1087fdee:;
  /* 1087fdee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fdf1 cmp dword ptr [eax + 0xc], 0x108a08d0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x108a08d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087fdf8 je 0x1087fe71 */
  if (C.zf) goto L_1087fe71;
  /* 1087fdfa push 2 */
  push32((uint32_t)(0x2u));
  /* 1087fdfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fdff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1087fe02 push edx */
  push32((uint32_t)(EDX));
  /* 1087fe03 call 0x10875030 */
  push32(0x1087fe08u); f_10875030();
  /* 1087fe08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fe0b push 2 */
  push32((uint32_t)(0x2u));
  /* 1087fe0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fe10 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1087fe13 push ecx */
  push32((uint32_t)(ECX));
  /* 1087fe14 call 0x10875030 */
  push32(0x1087fe19u); f_10875030();
  /* 1087fe19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fe1c push 2 */
  push32((uint32_t)(0x2u));
  /* 1087fe1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fe21 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1087fe24 push eax */
  push32((uint32_t)(EAX));
  /* 1087fe25 call 0x10875030 */
  push32(0x1087fe2au); f_10875030();
  /* 1087fe2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fe2d push 2 */
  push32((uint32_t)(0x2u));
  /* 1087fe2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fe32 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1087fe35 push edx */
  push32((uint32_t)(EDX));
  /* 1087fe36 call 0x10875030 */
  push32(0x1087fe3bu); f_10875030();
  /* 1087fe3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fe3e push 2 */
  push32((uint32_t)(0x2u));
  /* 1087fe40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fe43 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1087fe46 push ecx */
  push32((uint32_t)(ECX));
  /* 1087fe47 call 0x10875030 */
  push32(0x1087fe4cu); f_10875030();
  /* 1087fe4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fe4f push 2 */
  push32((uint32_t)(0x2u));
  /* 1087fe51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fe54 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1087fe57 push eax */
  push32((uint32_t)(EAX));
  /* 1087fe58 call 0x10875030 */
  push32(0x1087fe5du); f_10875030();
  /* 1087fe5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fe60 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087fe62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087fe65 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1087fe68 push edx */
  push32((uint32_t)(EDX));
  /* 1087fe69 call 0x10875030 */
  push32(0x1087fe6eu); f_10875030();
  /* 1087fe6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087fe71:;
  /* 1087fe71 pop ebp */
  EBP = (pop32());
  /* 1087fe72 ret  */
  ESPCHK(0x1087fde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe80 @ 0x1087fe80 (928 bytes, 284 insns) */
void f_1087fe80(void) {
  FTRACE(0x1087fe80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087fe80 push ebp */
  push32((uint32_t)(EBP));
  /* 1087fe81 mov ebp, esp */
  EBP = (ESP);
  /* 1087fe83 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087fe86 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1087fe8d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1087fe94 cmp dword ptr [0x108a0838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087fe9b je 0x108801d1 */
  if (C.zf) goto L_108801d1;
  /* 1087fea1 cmp dword ptr [0x108a0848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087fea8 jne 0x1087fed0 */
  if (!C.zf) goto L_1087fed0;
  /* 1087feaa push 0x108a0848 */
  push32((uint32_t)(0x108a0848u));
  /* 1087feaf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1087feb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087feb6 mov ax, word ptr [0x108a088c] */
  AX = (r16((uint32_t)(0x108a088c)));
  /* 1087febc push eax */
  push32((uint32_t)(EAX));
  /* 1087febd push 0 */
  push32((uint32_t)(0x0u));
  /* 1087febf call 0x10882760 */
  push32(0x1087fec4u); f_10882760();
  /* 1087fec4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fec7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087fec9 je 0x1087fed0 */
  if (C.zf) goto L_1087fed0;
  /* 1087fecb jmp 0x10880192 */
  goto L_10880192;
L_1087fed0:;
  /* 1087fed0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1087fed2 push 0x1089c1b4 */
  push32((uint32_t)(0x1089c1b4u));
  /* 1087fed7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087fed9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1087fede call 0x108745a0 */
  push32(0x1087fee3u); f_108745a0();
  /* 1087fee3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fee6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1087fee9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1087feeb push 0x1089c1b4 */
  push32((uint32_t)(0x1089c1b4u));
  /* 1087fef0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087fef2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1087fef7 call 0x108745a0 */
  push32(0x1087fefcu); f_108745a0();
  /* 1087fefc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087feff mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1087ff02 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1087ff04 push 0x1089c1b4 */
  push32((uint32_t)(0x1089c1b4u));
  /* 1087ff09 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087ff0b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1087ff10 call 0x108745a0 */
  push32(0x1087ff15u); f_108745a0();
  /* 1087ff15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ff18 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1087ff1b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1087ff1d push 0x1089c1b4 */
  push32((uint32_t)(0x1089c1b4u));
  /* 1087ff22 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087ff24 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1087ff29 call 0x108745a0 */
  push32(0x1087ff2eu); f_108745a0();
  /* 1087ff2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ff31 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1087ff34 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ff38 je 0x1087ff4c */
  if (C.zf) goto L_1087ff4c;
  /* 1087ff3a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ff3e je 0x1087ff4c */
  if (C.zf) goto L_1087ff4c;
  /* 1087ff40 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ff44 je 0x1087ff4c */
  if (C.zf) goto L_1087ff4c;
  /* 1087ff46 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ff4a jne 0x1087ff51 */
  if (!C.zf) goto L_1087ff51;
L_1087ff4c:;
  /* 1087ff4c jmp 0x10880192 */
  goto L_10880192;
L_1087ff51:;
  /* 1087ff51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1087ff54 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1087ff57 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1087ff5e jmp 0x1087ff69 */
  goto L_1087ff69;
L_1087ff60:;
  /* 1087ff60 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087ff63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ff66 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1087ff69:;
  /* 1087ff69 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ff70 jge 0x1087ff85 */
  if ((C.sf==C.of)) goto L_1087ff85;
  /* 1087ff72 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087ff75 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1087ff78 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1087ff7a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087ff7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ff80 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1087ff83 jmp 0x1087ff60 */
  goto L_1087ff60;
L_1087ff85:;
  /* 1087ff85 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1087ff88 push eax */
  push32((uint32_t)(EAX));
  /* 1087ff89 mov ecx, dword ptr [0x108a0848] */
  ECX = (r32((uint32_t)(0x108a0848)));
  /* 1087ff8f push ecx */
  push32((uint32_t)(ECX));
  /* 1087ff90 call dword ptr [0x108a331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a331c))), 0x1087ff96u);
  /* 1087ff96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087ff98 jne 0x1087ff9f */
  if (!C.zf) goto L_1087ff9f;
  /* 1087ff9a jmp 0x10880192 */
  goto L_10880192;
L_1087ff9f:;
  /* 1087ff9f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ffa3 jbe 0x1087ffaa */
  if ((C.cf||C.zf)) goto L_1087ffaa;
  /* 1087ffa5 jmp 0x10880192 */
  goto L_10880192;
L_1087ffaa:;
  /* 1087ffaa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1087ffad and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1087ffb3 mov dword ptr [0x1089eea4], edx */
  w32((uint32_t)(0x1089eea4), (EDX));
  /* 1087ffb9 cmp dword ptr [0x1089eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1089eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087ffc0 jle 0x10880019 */
  if ((C.zf||C.sf!=C.of)) goto L_10880019;
  /* 1087ffc2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1087ffc5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1087ffc8 jmp 0x1087ffd3 */
  goto L_1087ffd3;
L_1087ffca:;
  /* 1087ffca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087ffcd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087ffd0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1087ffd3:;
  /* 1087ffd3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087ffd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087ffd8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1087ffda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087ffdc je 0x10880019 */
  if (C.zf) goto L_10880019;
  /* 1087ffde mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087ffe1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087ffe3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1087ffe6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087ffe8 je 0x10880019 */
  if (C.zf) goto L_10880019;
  /* 1087ffea mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1087ffed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087ffef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1087fff1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1087fff4 jmp 0x1087ffff */
  goto L_1087ffff;
L_1087fff6:;
  /* 1087fff6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1087fff9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087fffc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1087ffff:;
  /* 1087ffff mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10880002 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10880004 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10880007 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088000a jg 0x10880017 */
  if ((!C.zf&&C.sf==C.of)) goto L_10880017;
  /* 1088000c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1088000f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10880012 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10880015 jmp 0x1087fff6 */
  goto L_1087fff6;
L_10880017:;
  /* 10880017 jmp 0x1087ffca */
  goto L_1087ffca;
L_10880019:;
  /* 10880019 push 0 */
  push32((uint32_t)(0x0u));
  /* 1088001b push 0 */
  push32((uint32_t)(0x0u));
  /* 1088001d push 0 */
  push32((uint32_t)(0x0u));
  /* 1088001f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10880022 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10880025 push eax */
  push32((uint32_t)(EAX));
  /* 10880026 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1088002b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1088002e push ecx */
  push32((uint32_t)(ECX));
  /* 1088002f push 1 */
  push32((uint32_t)(0x1u));
  /* 10880031 call 0x1087c7d0 */
  push32(0x10880036u); f_1087c7d0();
  /* 10880036 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880039 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1088003b jne 0x10880042 */
  if (!C.zf) goto L_10880042;
  /* 1088003d jmp 0x10880192 */
  goto L_10880192;
L_10880042:;
  /* 10880042 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10880045 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1088004a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1088004d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10880050 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10880057 jmp 0x10880062 */
  goto L_10880062;
L_10880059:;
  /* 10880059 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1088005c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088005f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10880062:;
  /* 10880062 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880069 jge 0x10880080 */
  if ((C.sf==C.of)) goto L_10880080;
  /* 1088006b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1088006e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10880072 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10880075 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10880078 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088007b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1088007e jmp 0x10880059 */
  goto L_10880059;
L_10880080:;
  /* 10880080 push 0 */
  push32((uint32_t)(0x0u));
  /* 10880082 push 0 */
  push32((uint32_t)(0x0u));
  /* 10880084 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10880087 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088008a push edx */
  push32((uint32_t)(EDX));
  /* 1088008b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10880090 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10880093 push eax */
  push32((uint32_t)(EAX));
  /* 10880094 push 1 */
  push32((uint32_t)(0x1u));
  /* 10880096 call 0x10882a00 */
  push32(0x1088009bu); f_10882a00();
  /* 1088009b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088009e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108800a0 jne 0x108800a7 */
  if (!C.zf) goto L_108800a7;
  /* 108800a2 jmp 0x10880192 */
  goto L_10880192;
L_108800a7:;
  /* 108800a7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108800aa mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 108800af cmp dword ptr [0x1089eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1089eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108800b6 jle 0x10880113 */
  if ((C.zf||C.sf!=C.of)) goto L_10880113;
  /* 108800b8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 108800bb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108800be jmp 0x108800c9 */
  goto L_108800c9;
L_108800c0:;
  /* 108800c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108800c3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108800c6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_108800c9:;
  /* 108800c9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108800cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108800ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108800d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108800d2 je 0x10880113 */
  if (C.zf) goto L_10880113;
  /* 108800d4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108800d7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108800d9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 108800dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108800de je 0x10880113 */
  if (C.zf) goto L_10880113;
  /* 108800e0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108800e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108800e5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108800e7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108800ea jmp 0x108800f5 */
  goto L_108800f5;
L_108800ec:;
  /* 108800ec mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108800ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108800f2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_108800f5:;
  /* 108800f5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108800f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108800fa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 108800fd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880100 jg 0x10880111 */
  if ((!C.zf&&C.sf==C.of)) goto L_10880111;
  /* 10880102 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10880105 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10880108 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1088010f jmp 0x108800ec */
  goto L_108800ec;
L_10880111:;
  /* 10880111 jmp 0x108800c0 */
  goto L_108800c0;
L_10880113:;
  /* 10880113 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10880116 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10880119 mov dword ptr [0x1089ec98], eax */
  w32((uint32_t)(0x1089ec98), (EAX));
  /* 1088011e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10880121 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10880124 mov dword ptr [0x1089ec9c], ecx */
  w32((uint32_t)(0x1089ec9c), (ECX));
  /* 1088012a cmp dword ptr [0x108a0878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880131 je 0x10880144 */
  if (C.zf) goto L_10880144;
  /* 10880133 push 2 */
  push32((uint32_t)(0x2u));
  /* 10880135 mov edx, dword ptr [0x108a0878] */
  EDX = (r32((uint32_t)(0x108a0878)));
  /* 1088013b push edx */
  push32((uint32_t)(EDX));
  /* 1088013c call 0x10875030 */
  push32(0x10880141u); f_10875030();
  /* 10880141 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10880144:;
  /* 10880144 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10880147 mov dword ptr [0x108a0878], eax */
  w32((uint32_t)(0x108a0878), (EAX));
  /* 1088014c cmp dword ptr [0x108a087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880153 je 0x10880166 */
  if (C.zf) goto L_10880166;
  /* 10880155 push 2 */
  push32((uint32_t)(0x2u));
  /* 10880157 mov ecx, dword ptr [0x108a087c] */
  ECX = (r32((uint32_t)(0x108a087c)));
  /* 1088015d push ecx */
  push32((uint32_t)(ECX));
  /* 1088015e call 0x10875030 */
  push32(0x10880163u); f_10875030();
  /* 10880163 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10880166:;
  /* 10880166 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10880169 mov dword ptr [0x108a087c], edx */
  w32((uint32_t)(0x108a087c), (EDX));
  /* 1088016f push 2 */
  push32((uint32_t)(0x2u));
  /* 10880171 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10880174 push eax */
  push32((uint32_t)(EAX));
  /* 10880175 call 0x10875030 */
  push32(0x1088017au); f_10875030();
  /* 1088017a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088017d push 2 */
  push32((uint32_t)(0x2u));
  /* 1088017f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10880182 push ecx */
  push32((uint32_t)(ECX));
  /* 10880183 call 0x10875030 */
  push32(0x10880188u); f_10875030();
  /* 10880188 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088018b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1088018d jmp 0x1088021c */
  goto L_1088021c;
L_10880192:;
  /* 10880192 push 2 */
  push32((uint32_t)(0x2u));
  /* 10880194 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10880197 push edx */
  push32((uint32_t)(EDX));
  /* 10880198 call 0x10875030 */
  push32(0x1088019du); f_10875030();
  /* 1088019d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108801a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 108801a2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108801a5 push eax */
  push32((uint32_t)(EAX));
  /* 108801a6 call 0x10875030 */
  push32(0x108801abu); f_10875030();
  /* 108801ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108801ae push 2 */
  push32((uint32_t)(0x2u));
  /* 108801b0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108801b3 push ecx */
  push32((uint32_t)(ECX));
  /* 108801b4 call 0x10875030 */
  push32(0x108801b9u); f_10875030();
  /* 108801b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108801bc push 2 */
  push32((uint32_t)(0x2u));
  /* 108801be mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108801c1 push edx */
  push32((uint32_t)(EDX));
  /* 108801c2 call 0x10875030 */
  push32(0x108801c7u); f_10875030();
  /* 108801c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108801ca mov eax, 1 */
  EAX = (0x1u);
  /* 108801cf jmp 0x1088021c */
  goto L_1088021c;
L_108801d1:;
  /* 108801d1 mov dword ptr [0x1089ec98], 0x1089eca2 */
  w32((uint32_t)(0x1089ec98), (0x1089eca2u));
  /* 108801db mov dword ptr [0x1089ec9c], 0x1089eca2 */
  w32((uint32_t)(0x1089ec9c), (0x1089eca2u));
  /* 108801e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 108801e7 mov eax, dword ptr [0x108a0878] */
  EAX = (r32((uint32_t)(0x108a0878)));
  /* 108801ec push eax */
  push32((uint32_t)(EAX));
  /* 108801ed call 0x10875030 */
  push32(0x108801f2u); f_10875030();
  /* 108801f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108801f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 108801f7 mov ecx, dword ptr [0x108a087c] */
  ECX = (r32((uint32_t)(0x108a087c)));
  /* 108801fd push ecx */
  push32((uint32_t)(ECX));
  /* 108801fe call 0x10875030 */
  push32(0x10880203u); f_10875030();
  /* 10880203 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880206 mov dword ptr [0x108a0878], 0 */
  w32((uint32_t)(0x108a0878), (0x0u));
  /* 10880210 mov dword ptr [0x108a087c], 0 */
  w32((uint32_t)(0x108a087c), (0x0u));
  /* 1088021a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1088021c:;
  /* 1088021c mov esp, ebp */
  ESP = (EBP);
  /* 1088021e pop ebp */
  EBP = (pop32());
  /* 1088021f ret  */
  ESPCHK(0x1087fe80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010220 @ 0x10880220 (7 bytes, 5 insns) */
void f_10880220(void) {
  FTRACE(0x10880220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10880220 push ebp */
  push32((uint32_t)(EBP));
  /* 10880221 mov ebp, esp */
  EBP = (ESP);
  /* 10880223 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10880225 pop ebp */
  EBP = (pop32());
  /* 10880226 ret  */
  ESPCHK(0x10880220u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10880230 (129 bytes, 56 insns) */
void f_10880230(void) {
  FTRACE(0x10880230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10880230 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10880234 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10880238 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1088023e jne 0x1088027c */
  if (!C.zf) goto L_1088027c;
L_10880240:;
  /* 10880240 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10880242 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10880244 jne 0x10880274 */
  if (!C.zf) goto L_10880274;
  /* 10880246 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10880248 je 0x10880270 */
  if (C.zf) goto L_10880270;
  /* 1088024a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1088024d jne 0x10880274 */
  if (!C.zf) goto L_10880274;
  /* 1088024f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10880251 je 0x10880270 */
  if (C.zf) goto L_10880270;
  /* 10880253 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10880256 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10880259 jne 0x10880274 */
  if (!C.zf) goto L_10880274;
  /* 1088025b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1088025d je 0x10880270 */
  if (C.zf) goto L_10880270;
  /* 1088025f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10880262 jne 0x10880274 */
  if (!C.zf) goto L_10880274;
  /* 10880264 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10880267 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088026a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1088026c jne 0x10880240 */
  if (!C.zf) goto L_10880240;
  /* 1088026e mov edi, edi */
  EDI = (EDI);
L_10880270:;
  /* 10880270 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10880272 ret  */
  ESPCHK(0x10880230u, _esp0);
  ESP += 4; return;
  /* 10880273 nop  */
  /* nop */
L_10880274:;
  /* 10880274 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10880276 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10880278 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10880279 ret  */
  ESPCHK(0x10880230u, _esp0);
  ESP += 4; return;
  /* 1088027a mov edi, edi */
  EDI = (EDI);
L_1088027c:;
  /* 1088027c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10880282 je 0x10880298 */
  if (C.zf) goto L_10880298;
  /* 10880284 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10880286 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10880287 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10880289 jne 0x10880274 */
  if (!C.zf) goto L_10880274;
  /* 1088028b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1088028c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1088028e je 0x10880270 */
  if (C.zf) goto L_10880270;
  /* 10880290 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10880296 je 0x10880240 */
  if (C.zf) goto L_10880240;
L_10880298:;
  /* 10880298 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1088029b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088029e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108802a0 jne 0x10880274 */
  if (!C.zf) goto L_10880274;
  /* 108802a2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 108802a4 je 0x10880270 */
  if (C.zf) goto L_10880270;
  /* 108802a6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108802a9 jne 0x10880274 */
  if (!C.zf) goto L_10880274;
  /* 108802ab or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 108802ad je 0x10880270 */
  if (C.zf) goto L_10880270;
  /* 108802af add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108802b2 jmp 0x10880240 */
  goto L_10880240;
}

/* FUN_100102c0 @ 0x108802c0 (62 bytes, 35 insns) */
void f_108802c0(void) {
  FTRACE(0x108802c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108802c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108802c1 mov ebp, esp */
  EBP = (ESP);
  /* 108802c3 push esi */
  push32((uint32_t)(ESI));
  /* 108802c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108802c6 push eax */
  push32((uint32_t)(EAX));
  /* 108802c7 push eax */
  push32((uint32_t)(EAX));
  /* 108802c8 push eax */
  push32((uint32_t)(EAX));
  /* 108802c9 push eax */
  push32((uint32_t)(EAX));
  /* 108802ca push eax */
  push32((uint32_t)(EAX));
  /* 108802cb push eax */
  push32((uint32_t)(EAX));
  /* 108802cc push eax */
  push32((uint32_t)(EAX));
  /* 108802cd push eax */
  push32((uint32_t)(EAX));
  /* 108802ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108802d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108802d4:;
  /* 108802d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108802d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 108802d8 je 0x108802e1 */
  if (C.zf) goto L_108802e1;
  /* 108802da inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 108802db bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x108802db");
  /* 108802df jmp 0x108802d4 */
  goto L_108802d4;
L_108802e1:;
  /* 108802e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 108802e4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108802e7 nop  */
  /* nop */
L_108802e8:;
  /* 108802e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 108802e9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108802eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 108802ed je 0x108802f6 */
  if (C.zf) goto L_108802f6;
  /* 108802ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 108802f0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x108802f0");
  /* 108802f4 jae 0x108802e8 */
  if (!C.cf) goto L_108802e8;
L_108802f6:;
  /* 108802f6 mov eax, ecx */
  EAX = (ECX);
  /* 108802f8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108802fb pop esi */
  ESI = (pop32());
  /* 108802fc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108802fd ret  */
  ESPCHK(0x108802c0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10880300 (56 bytes, 31 insns) */
void f_10880300(void) {
  FTRACE(0x10880300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10880300 push ebp */
  push32((uint32_t)(EBP));
  /* 10880301 mov ebp, esp */
  EBP = (ESP);
  /* 10880303 push edi */
  push32((uint32_t)(EDI));
  /* 10880304 push esi */
  push32((uint32_t)(ESI));
  /* 10880305 push ebx */
  push32((uint32_t)(EBX));
  /* 10880306 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10880309 jecxz 0x10880331 */
  x86_unimpl("jecxz @ 0x10880309");
  /* 1088030b mov ebx, ecx */
  EBX = (ECX);
  /* 1088030d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10880310 mov esi, edi */
  ESI = (EDI);
  /* 10880312 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10880314 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10880316 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10880318 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088031a mov edi, esi */
  EDI = (ESI);
  /* 1088031c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1088031f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10880321 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10880324 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10880326 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10880329 ja 0x1088032f */
  if ((!C.cf&&!C.zf)) goto L_1088032f;
  /* 1088032b je 0x10880331 */
  if (C.zf) goto L_10880331;
  /* 1088032d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1088032e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1088032f:;
  /* 1088032f not ecx */
  ECX = (~(ECX));
L_10880331:;
  /* 10880331 mov eax, ecx */
  EAX = (ECX);
  /* 10880333 pop ebx */
  EBX = (pop32());
  /* 10880334 pop esi */
  ESI = (pop32());
  /* 10880335 pop edi */
  EDI = (pop32());
  /* 10880336 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10880337 ret  */
  ESPCHK(0x10880300u, _esp0);
  ESP += 4; return;
}

/* FUN_10010340 @ 0x10880340 (58 bytes, 32 insns) */
void f_10880340(void) {
  FTRACE(0x10880340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10880340 push ebp */
  push32((uint32_t)(EBP));
  /* 10880341 mov ebp, esp */
  EBP = (ESP);
  /* 10880343 push esi */
  push32((uint32_t)(ESI));
  /* 10880344 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10880346 push eax */
  push32((uint32_t)(EAX));
  /* 10880347 push eax */
  push32((uint32_t)(EAX));
  /* 10880348 push eax */
  push32((uint32_t)(EAX));
  /* 10880349 push eax */
  push32((uint32_t)(EAX));
  /* 1088034a push eax */
  push32((uint32_t)(EAX));
  /* 1088034b push eax */
  push32((uint32_t)(EAX));
  /* 1088034c push eax */
  push32((uint32_t)(EAX));
  /* 1088034d push eax */
  push32((uint32_t)(EAX));
  /* 1088034e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10880351 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10880354:;
  /* 10880354 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10880356 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10880358 je 0x10880361 */
  if (C.zf) goto L_10880361;
  /* 1088035a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1088035b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1088035b");
  /* 1088035f jmp 0x10880354 */
  goto L_10880354;
L_10880361:;
  /* 10880361 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10880364:;
  /* 10880364 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10880366 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10880368 je 0x10880374 */
  if (C.zf) goto L_10880374;
  /* 1088036a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1088036b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1088036b");
  /* 1088036f jae 0x10880364 */
  if (!C.cf) goto L_10880364;
  /* 10880371 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10880374:;
  /* 10880374 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880377 pop esi */
  ESI = (pop32());
  /* 10880378 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10880379 ret  */
  ESPCHK(0x10880340u, _esp0);
  ESP += 4; return;
}

/* FUN_10010380 @ 0x10880380 (512 bytes, 147 insns) */
void f_10880380(void) {
  FTRACE(0x10880380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10880380 push ebp */
  push32((uint32_t)(EBP));
  /* 10880381 mov ebp, esp */
  EBP = (ESP);
  /* 10880383 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10880386 cmp dword ptr [0x108a08c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088038d jne 0x108803b2 */
  if (!C.zf) goto L_108803b2;
  /* 1088038f call 0x10880e50 */
  push32(0x10880394u); f_10880e50();
  /* 10880394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880396 je 0x108803a2 */
  if (C.zf) goto L_108803a2;
  /* 10880398 mov eax, dword ptr [0x108a32e0] */
  EAX = (r32((uint32_t)(0x108a32e0)));
  /* 1088039d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108803a0 jmp 0x108803a9 */
  goto L_108803a9;
L_108803a2:;
  /* 108803a2 mov dword ptr [ebp - 8], 0x10880ea0 */
  w32((uint32_t)(EBP + -0x8), (0x10880ea0u));
L_108803a9:;
  /* 108803a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108803ac mov dword ptr [0x108a08c4], ecx */
  w32((uint32_t)(0x108a08c4), (ECX));
L_108803b2:;
  /* 108803b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108803b6 jne 0x108803c2 */
  if (!C.zf) goto L_108803c2;
  /* 108803b8 call 0x10880ca0 */
  push32(0x108803bdu); f_10880ca0();
  /* 108803bd jmp 0x1088048e */
  goto L_1088048e;
L_108803c2:;
  /* 108803c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108803c5 mov dword ptr [0x108a08b4], edx */
  w32((uint32_t)(0x108a08b4), (EDX));
  /* 108803cb cmp dword ptr [0x108a08b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108803d2 je 0x108803f4 */
  if (C.zf) goto L_108803f4;
  /* 108803d4 mov eax, dword ptr [0x108a08b4] */
  EAX = (r32((uint32_t)(0x108a08b4)));
  /* 108803d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108803dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108803de je 0x108803f4 */
  if (C.zf) goto L_108803f4;
  /* 108803e0 push 0x108a08b4 */
  push32((uint32_t)(0x108a08b4u));
  /* 108803e5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 108803e7 push 0x1089fa90 */
  push32((uint32_t)(0x1089fa90u));
  /* 108803ec call 0x10880580 */
  push32(0x108803f1u); f_10880580();
  /* 108803f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108803f4:;
  /* 108803f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108803f7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108803fa mov dword ptr [0x108a08b8], edx */
  w32((uint32_t)(0x108a08b8), (EDX));
  /* 10880400 cmp dword ptr [0x108a08b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880407 je 0x10880429 */
  if (C.zf) goto L_10880429;
  /* 10880409 mov eax, dword ptr [0x108a08b8] */
  EAX = (r32((uint32_t)(0x108a08b8)));
  /* 1088040e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10880411 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10880413 je 0x10880429 */
  if (C.zf) goto L_10880429;
  /* 10880415 push 0x108a08b8 */
  push32((uint32_t)(0x108a08b8u));
  /* 1088041a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1088041c push 0x1089f9d8 */
  push32((uint32_t)(0x1089f9d8u));
  /* 10880421 call 0x10880580 */
  push32(0x10880426u); f_10880580();
  /* 10880426 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10880429:;
  /* 10880429 mov dword ptr [0x108a08bc], 0 */
  w32((uint32_t)(0x108a08bc), (0x0u));
  /* 10880433 cmp dword ptr [0x108a08b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088043a je 0x1088046d */
  if (C.zf) goto L_1088046d;
  /* 1088043c mov edx, dword ptr [0x108a08b4] */
  EDX = (r32((uint32_t)(0x108a08b4)));
  /* 10880442 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10880445 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880447 je 0x1088046d */
  if (C.zf) goto L_1088046d;
  /* 10880449 cmp dword ptr [0x108a08b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880450 je 0x10880466 */
  if (C.zf) goto L_10880466;
  /* 10880452 mov ecx, dword ptr [0x108a08b8] */
  ECX = (r32((uint32_t)(0x108a08b8)));
  /* 10880458 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1088045b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1088045d je 0x10880466 */
  if (C.zf) goto L_10880466;
  /* 1088045f call 0x10880610 */
  push32(0x10880464u); f_10880610();
  /* 10880464 jmp 0x1088046b */
  goto L_1088046b;
L_10880466:;
  /* 10880466 call 0x10880a00 */
  push32(0x1088046bu); f_10880a00();
L_1088046b:;
  /* 1088046b jmp 0x1088048e */
  goto L_1088048e;
L_1088046d:;
  /* 1088046d cmp dword ptr [0x108a08b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880474 je 0x10880489 */
  if (C.zf) goto L_10880489;
  /* 10880476 mov eax, dword ptr [0x108a08b8] */
  EAX = (r32((uint32_t)(0x108a08b8)));
  /* 1088047b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1088047e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10880480 je 0x10880489 */
  if (C.zf) goto L_10880489;
  /* 10880482 call 0x10880ba0 */
  push32(0x10880487u); f_10880ba0();
  /* 10880487 jmp 0x1088048e */
  goto L_1088048e;
L_10880489:;
  /* 10880489 call 0x10880ca0 */
  push32(0x1088048eu); f_10880ca0();
L_1088048e:;
  /* 1088048e cmp dword ptr [0x108a08bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880495 jne 0x1088049e */
  if (!C.zf) goto L_1088049e;
  /* 10880497 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10880499 jmp 0x1088057c */
  goto L_1088057c;
L_1088049e:;
  /* 1088049e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108804a1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108804a7 push edx */
  push32((uint32_t)(EDX));
  /* 108804a8 call 0x10880cd0 */
  push32(0x108804adu); f_10880cd0();
  /* 108804ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108804b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108804b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108804b7 je 0x108804cc */
  if (C.zf) goto L_108804cc;
  /* 108804b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108804bc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108804c1 push eax */
  push32((uint32_t)(EAX));
  /* 108804c2 call dword ptr [0x108a32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32e4))), 0x108804c8u);
  /* 108804c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108804ca jne 0x108804d3 */
  if (!C.zf) goto L_108804d3;
L_108804cc:;
  /* 108804cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108804ce jmp 0x1088057c */
  goto L_1088057c;
L_108804d3:;
  /* 108804d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108804d5 mov ecx, dword ptr [0x108a08a4] */
  ECX = (r32((uint32_t)(0x108a08a4)));
  /* 108804db push ecx */
  push32((uint32_t)(ECX));
  /* 108804dc call dword ptr [0x108a32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32f4))), 0x108804e2u);
  /* 108804e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108804e4 jne 0x108804ed */
  if (!C.zf) goto L_108804ed;
  /* 108804e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108804e8 jmp 0x1088057c */
  goto L_1088057c;
L_108804ed:;
  /* 108804ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108804f1 je 0x10880518 */
  if (C.zf) goto L_10880518;
  /* 108804f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108804f6 mov ax, word ptr [0x108a08a4] */
  AX = (r16((uint32_t)(0x108a08a4)));
  /* 108804fc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 108804ff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10880502 mov dx, word ptr [0x108a08c0] */
  DX = (r16((uint32_t)(0x108a08c0)));
  /* 10880509 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1088050d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10880510 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10880514 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10880518:;
  /* 10880518 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088051c je 0x10880577 */
  if (C.zf) goto L_10880577;
  /* 1088051e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10880520 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10880523 push edx */
  push32((uint32_t)(EDX));
  /* 10880524 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10880529 mov eax, dword ptr [0x108a08a4] */
  EAX = (r32((uint32_t)(0x108a08a4)));
  /* 1088052e push eax */
  push32((uint32_t)(EAX));
  /* 1088052f call dword ptr [0x108a08c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a08c4))), 0x10880535u);
  /* 10880535 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880537 jne 0x1088053d */
  if (!C.zf) goto L_1088053d;
  /* 10880539 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1088053b jmp 0x1088057c */
  goto L_1088057c;
L_1088053d:;
  /* 1088053d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1088053f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10880542 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10880545 push ecx */
  push32((uint32_t)(ECX));
  /* 10880546 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1088054b mov edx, dword ptr [0x108a08c0] */
  EDX = (r32((uint32_t)(0x108a08c0)));
  /* 10880551 push edx */
  push32((uint32_t)(EDX));
  /* 10880552 call dword ptr [0x108a08c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a08c4))), 0x10880558u);
  /* 10880558 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1088055a jne 0x10880560 */
  if (!C.zf) goto L_10880560;
  /* 1088055c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1088055e jmp 0x1088057c */
  goto L_1088057c;
L_10880560:;
  /* 10880560 push 0xa */
  push32((uint32_t)(0xau));
  /* 10880562 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10880565 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088056a push eax */
  push32((uint32_t)(EAX));
  /* 1088056b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1088056e push ecx */
  push32((uint32_t)(ECX));
  /* 1088056f call 0x108770e0 */
  push32(0x10880574u); f_108770e0();
  /* 10880574 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10880577:;
  /* 10880577 mov eax, 1 */
  EAX = (0x1u);
L_1088057c:;
  /* 1088057c mov esp, ebp */
  ESP = (EBP);
  /* 1088057e pop ebp */
  EBP = (pop32());
  /* 1088057f ret  */
  ESPCHK(0x10880380u, _esp0);
  ESP += 4; return;
}

/* FUN_10010580 @ 0x10880580 (130 bytes, 47 insns) */
void f_10880580(void) {
  FTRACE(0x10880580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10880580 push ebp */
  push32((uint32_t)(EBP));
  /* 10880581 mov ebp, esp */
  EBP = (ESP);
  /* 10880583 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10880586 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1088058d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10880594:;
  /* 10880594 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10880597 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088059a jg 0x108805fe */
  if ((!C.zf&&C.sf==C.of)) goto L_108805fe;
  /* 1088059c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108805a0 je 0x108805fe */
  if (C.zf) goto L_108805fe;
  /* 108805a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108805a5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108805a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108805a9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108805ab sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108805ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108805b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108805b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108805b6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 108805b9 push eax */
  push32((uint32_t)(EAX));
  /* 108805ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108805bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108805bf push edx */
  push32((uint32_t)(EDX));
  /* 108805c0 call 0x10882c70 */
  push32(0x108805c5u); f_10882c70();
  /* 108805c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108805c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108805cb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108805cf jne 0x108805e2 */
  if (!C.zf) goto L_108805e2;
  /* 108805d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108805d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108805d7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 108805db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108805de mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108805e0 jmp 0x108805fc */
  goto L_108805fc;
L_108805e2:;
  /* 108805e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108805e6 jge 0x108805f3 */
  if ((C.sf==C.of)) goto L_108805f3;
  /* 108805e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108805eb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108805ee mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 108805f1 jmp 0x108805fc */
  goto L_108805fc;
L_108805f3:;
  /* 108805f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108805f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108805f9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_108805fc:;
  /* 108805fc jmp 0x10880594 */
  goto L_10880594;
L_108805fe:;
  /* 108805fe mov esp, ebp */
  ESP = (EBP);
  /* 10880600 pop ebp */
  EBP = (pop32());
  /* 10880601 ret  */
  ESPCHK(0x10880580u, _esp0);
  ESP += 4; return;
}

/* FUN_10010610 @ 0x10880610 (186 bytes, 50 insns) */
void f_10880610(void) {
  FTRACE(0x10880610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10880610 push ebp */
  push32((uint32_t)(EBP));
  /* 10880611 mov ebp, esp */
  EBP = (ESP);
  /* 10880613 push ecx */
  push32((uint32_t)(ECX));
  /* 10880614 mov eax, dword ptr [0x108a08b4] */
  EAX = (r32((uint32_t)(0x108a08b4)));
  /* 10880619 push eax */
  push32((uint32_t)(EAX));
  /* 1088061a call 0x108773d0 */
  push32(0x1088061fu); f_108773d0();
  /* 1088061f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880622 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10880624 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880627 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1088062a mov dword ptr [0x108a08b0], ecx */
  w32((uint32_t)(0x108a08b0), (ECX));
  /* 10880630 mov edx, dword ptr [0x108a08b8] */
  EDX = (r32((uint32_t)(0x108a08b8)));
  /* 10880636 push edx */
  push32((uint32_t)(EDX));
  /* 10880637 call 0x108773d0 */
  push32(0x1088063cu); f_108773d0();
  /* 1088063c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088063f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10880641 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880644 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10880647 mov dword ptr [0x108a08a8], ecx */
  w32((uint32_t)(0x108a08a8), (ECX));
  /* 1088064d mov dword ptr [0x108a08a4], 0 */
  w32((uint32_t)(0x108a08a4), (0x0u));
  /* 10880657 cmp dword ptr [0x108a08b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088065e je 0x10880669 */
  if (C.zf) goto L_10880669;
  /* 10880660 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10880667 jmp 0x1088067b */
  goto L_1088067b;
L_10880669:;
  /* 10880669 mov edx, dword ptr [0x108a08b4] */
  EDX = (r32((uint32_t)(0x108a08b4)));
  /* 1088066f push edx */
  push32((uint32_t)(EDX));
  /* 10880670 call 0x108810b0 */
  push32(0x10880675u); f_108810b0();
  /* 10880675 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880678 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1088067b:;
  /* 1088067b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1088067e mov dword ptr [0x108a08ac], eax */
  w32((uint32_t)(0x108a08ac), (EAX));
  /* 10880683 push 1 */
  push32((uint32_t)(0x1u));
  /* 10880685 push 0x108806d0 */
  push32((uint32_t)(0x108806d0u));
  /* 1088068a call dword ptr [0x108a32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32e8))), 0x10880690u);
  /* 10880690 mov ecx, dword ptr [0x108a08bc] */
  ECX = (r32((uint32_t)(0x108a08bc)));
  /* 10880696 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1088069c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1088069e je 0x108806bc */
  if (C.zf) goto L_108806bc;
  /* 108806a0 mov edx, dword ptr [0x108a08bc] */
  EDX = (r32((uint32_t)(0x108a08bc)));
  /* 108806a6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 108806ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108806ae je 0x108806bc */
  if (C.zf) goto L_108806bc;
  /* 108806b0 mov eax, dword ptr [0x108a08bc] */
  EAX = (r32((uint32_t)(0x108a08bc)));
  /* 108806b5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 108806b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108806ba jne 0x108806c6 */
  if (!C.zf) goto L_108806c6;
L_108806bc:;
  /* 108806bc mov dword ptr [0x108a08bc], 0 */
  w32((uint32_t)(0x108a08bc), (0x0u));
L_108806c6:;
  /* 108806c6 mov esp, ebp */
  ESP = (EBP);
  /* 108806c8 pop ebp */
  EBP = (pop32());
  /* 108806c9 ret  */
  ESPCHK(0x10880610u, _esp0);
  ESP += 4; return;
}

/* FUN_100106d0 @ 0x108806d0 (804 bytes, 220 insns) */
void f_108806d0(void) {
  FTRACE(0x108806d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108806d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108806d1 mov ebp, esp */
  EBP = (ESP);
  /* 108806d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108806d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108806d9 push eax */
  push32((uint32_t)(EAX));
  /* 108806da call 0x10881030 */
  push32(0x108806dfu); f_10881030();
  /* 108806df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108806e2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 108806e5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 108806e7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 108806ea push ecx */
  push32((uint32_t)(ECX));
  /* 108806eb mov edx, dword ptr [0x108a08a8] */
  EDX = (r32((uint32_t)(0x108a08a8)));
  /* 108806f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 108806f3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108806f5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 108806fb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10880701 push edx */
  push32((uint32_t)(EDX));
  /* 10880702 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10880705 push eax */
  push32((uint32_t)(EAX));
  /* 10880706 call dword ptr [0x108a08c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a08c4))), 0x1088070cu);
  /* 1088070c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1088070e jne 0x10880724 */
  if (!C.zf) goto L_10880724;
  /* 10880710 mov dword ptr [0x108a08bc], 0 */
  w32((uint32_t)(0x108a08bc), (0x0u));
  /* 1088071a mov eax, 1 */
  EAX = (0x1u);
  /* 1088071f jmp 0x108809ee */
  goto L_108809ee;
L_10880724:;
  /* 10880724 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10880727 push ecx */
  push32((uint32_t)(ECX));
  /* 10880728 mov edx, dword ptr [0x108a08b8] */
  EDX = (r32((uint32_t)(0x108a08b8)));
  /* 1088072e push edx */
  push32((uint32_t)(EDX));
  /* 1088072f call 0x10882c70 */
  push32(0x10880734u); f_10882c70();
  /* 10880734 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880737 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880739 jne 0x1088085f */
  if (!C.zf) goto L_1088085f;
  /* 1088073f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10880741 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10880744 push eax */
  push32((uint32_t)(EAX));
  /* 10880745 mov ecx, dword ptr [0x108a08b0] */
  ECX = (r32((uint32_t)(0x108a08b0)));
  /* 1088074b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1088074d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1088074f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10880755 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088075b push ecx */
  push32((uint32_t)(ECX));
  /* 1088075c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1088075f push edx */
  push32((uint32_t)(EDX));
  /* 10880760 call dword ptr [0x108a08c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a08c4))), 0x10880766u);
  /* 10880766 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880768 jne 0x1088077e */
  if (!C.zf) goto L_1088077e;
  /* 1088076a mov dword ptr [0x108a08bc], 0 */
  w32((uint32_t)(0x108a08bc), (0x0u));
  /* 10880774 mov eax, 1 */
  EAX = (0x1u);
  /* 10880779 jmp 0x108809ee */
  goto L_108809ee;
L_1088077e:;
  /* 1088077e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10880781 push eax */
  push32((uint32_t)(EAX));
  /* 10880782 mov ecx, dword ptr [0x108a08b4] */
  ECX = (r32((uint32_t)(0x108a08b4)));
  /* 10880788 push ecx */
  push32((uint32_t)(ECX));
  /* 10880789 call 0x10882c70 */
  push32(0x1088078eu); f_10882c70();
  /* 1088078e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880791 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880793 jne 0x108807c0 */
  if (!C.zf) goto L_108807c0;
  /* 10880795 mov edx, dword ptr [0x108a08bc] */
  EDX = (r32((uint32_t)(0x108a08bc)));
  /* 1088079b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 108807a1 mov dword ptr [0x108a08bc], edx */
  w32((uint32_t)(0x108a08bc), (EDX));
  /* 108807a7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108807aa mov dword ptr [0x108a08c0], eax */
  w32((uint32_t)(0x108a08c0), (EAX));
  /* 108807af mov ecx, dword ptr [0x108a08c0] */
  ECX = (r32((uint32_t)(0x108a08c0)));
  /* 108807b5 mov dword ptr [0x108a08a4], ecx */
  w32((uint32_t)(0x108a08a4), (ECX));
  /* 108807bb jmp 0x1088085f */
  goto L_1088085f;
L_108807c0:;
  /* 108807c0 mov edx, dword ptr [0x108a08bc] */
  EDX = (r32((uint32_t)(0x108a08bc)));
  /* 108807c6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 108807c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108807cb jne 0x1088085f */
  if (!C.zf) goto L_1088085f;
  /* 108807d1 cmp dword ptr [0x108a08ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108807d8 je 0x1088082d */
  if (C.zf) goto L_1088082d;
  /* 108807da mov eax, dword ptr [0x108a08ac] */
  EAX = (r32((uint32_t)(0x108a08ac)));
  /* 108807df push eax */
  push32((uint32_t)(EAX));
  /* 108807e0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 108807e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108807e4 mov edx, dword ptr [0x108a08b4] */
  EDX = (r32((uint32_t)(0x108a08b4)));
  /* 108807ea push edx */
  push32((uint32_t)(EDX));
  /* 108807eb call 0x10882d40 */
  push32(0x108807f0u); f_10882d40();
  /* 108807f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108807f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108807f5 jne 0x1088082d */
  if (!C.zf) goto L_1088082d;
  /* 108807f7 mov eax, dword ptr [0x108a08bc] */
  EAX = (r32((uint32_t)(0x108a08bc)));
  /* 108807fc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 108807fe mov dword ptr [0x108a08bc], eax */
  w32((uint32_t)(0x108a08bc), (EAX));
  /* 10880803 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10880806 mov dword ptr [0x108a08c0], ecx */
  w32((uint32_t)(0x108a08c0), (ECX));
  /* 1088080c mov edx, dword ptr [0x108a08b4] */
  EDX = (r32((uint32_t)(0x108a08b4)));
  /* 10880812 push edx */
  push32((uint32_t)(EDX));
  /* 10880813 call 0x108773d0 */
  push32(0x10880818u); f_108773d0();
  /* 10880818 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088081b cmp eax, dword ptr [0x108a08ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108a08ac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880821 jne 0x1088082b */
  if (!C.zf) goto L_1088082b;
  /* 10880823 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10880826 mov dword ptr [0x108a08a4], eax */
  w32((uint32_t)(0x108a08a4), (EAX));
L_1088082b:;
  /* 1088082b jmp 0x1088085f */
  goto L_1088085f;
L_1088082d:;
  /* 1088082d mov ecx, dword ptr [0x108a08bc] */
  ECX = (r32((uint32_t)(0x108a08bc)));
  /* 10880833 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10880836 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10880838 jne 0x1088085f */
  if (!C.zf) goto L_1088085f;
  /* 1088083a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1088083d push edx */
  push32((uint32_t)(EDX));
  /* 1088083e call 0x10880d70 */
  push32(0x10880843u); f_10880d70();
  /* 10880843 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880846 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880848 je 0x1088085f */
  if (C.zf) goto L_1088085f;
  /* 1088084a mov eax, dword ptr [0x108a08bc] */
  EAX = (r32((uint32_t)(0x108a08bc)));
  /* 1088084f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10880851 mov dword ptr [0x108a08bc], eax */
  w32((uint32_t)(0x108a08bc), (EAX));
  /* 10880856 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10880859 mov dword ptr [0x108a08c0], ecx */
  w32((uint32_t)(0x108a08c0), (ECX));
L_1088085f:;
  /* 1088085f mov edx, dword ptr [0x108a08bc] */
  EDX = (r32((uint32_t)(0x108a08bc)));
  /* 10880865 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1088086b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880871 je 0x108809e1 */
  if (C.zf) goto L_108809e1;
  /* 10880877 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10880879 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1088087c push eax */
  push32((uint32_t)(EAX));
  /* 1088087d mov ecx, dword ptr [0x108a08b0] */
  ECX = (r32((uint32_t)(0x108a08b0)));
  /* 10880883 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10880885 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10880887 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1088088d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10880893 push ecx */
  push32((uint32_t)(ECX));
  /* 10880894 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10880897 push edx */
  push32((uint32_t)(EDX));
  /* 10880898 call dword ptr [0x108a08c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a08c4))), 0x1088089eu);
  /* 1088089e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108808a0 jne 0x108808b6 */
  if (!C.zf) goto L_108808b6;
  /* 108808a2 mov dword ptr [0x108a08bc], 0 */
  w32((uint32_t)(0x108a08bc), (0x0u));
  /* 108808ac mov eax, 1 */
  EAX = (0x1u);
  /* 108808b1 jmp 0x108809ee */
  goto L_108809ee;
L_108808b6:;
  /* 108808b6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 108808b9 push eax */
  push32((uint32_t)(EAX));
  /* 108808ba mov ecx, dword ptr [0x108a08b4] */
  ECX = (r32((uint32_t)(0x108a08b4)));
  /* 108808c0 push ecx */
  push32((uint32_t)(ECX));
  /* 108808c1 call 0x10882c70 */
  push32(0x108808c6u); f_10882c70();
  /* 108808c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108808c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108808cb jne 0x10880980 */
  if (!C.zf) goto L_10880980;
  /* 108808d1 mov edx, dword ptr [0x108a08bc] */
  EDX = (r32((uint32_t)(0x108a08bc)));
  /* 108808d7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 108808da mov dword ptr [0x108a08bc], edx */
  w32((uint32_t)(0x108a08bc), (EDX));
  /* 108808e0 cmp dword ptr [0x108a08b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108808e7 je 0x1088090a */
  if (C.zf) goto L_1088090a;
  /* 108808e9 mov eax, dword ptr [0x108a08bc] */
  EAX = (r32((uint32_t)(0x108a08bc)));
  /* 108808ee or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 108808f1 mov dword ptr [0x108a08bc], eax */
  w32((uint32_t)(0x108a08bc), (EAX));
  /* 108808f6 cmp dword ptr [0x108a08a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108808fd jne 0x10880908 */
  if (!C.zf) goto L_10880908;
  /* 108808ff mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10880902 mov dword ptr [0x108a08a4], ecx */
  w32((uint32_t)(0x108a08a4), (ECX));
L_10880908:;
  /* 10880908 jmp 0x1088097e */
  goto L_1088097e;
L_1088090a:;
  /* 1088090a cmp dword ptr [0x108a08ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880911 je 0x1088095f */
  if (C.zf) goto L_1088095f;
  /* 10880913 mov edx, dword ptr [0x108a08b4] */
  EDX = (r32((uint32_t)(0x108a08b4)));
  /* 10880919 push edx */
  push32((uint32_t)(EDX));
  /* 1088091a call 0x108773d0 */
  push32(0x1088091fu); f_108773d0();
  /* 1088091f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880922 cmp eax, dword ptr [0x108a08ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108a08ac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880928 jne 0x1088095f */
  if (!C.zf) goto L_1088095f;
  /* 1088092a push 1 */
  push32((uint32_t)(0x1u));
  /* 1088092c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1088092f push eax */
  push32((uint32_t)(EAX));
  /* 10880930 call 0x10880dc0 */
  push32(0x10880935u); f_10880dc0();
  /* 10880935 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880938 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1088093a je 0x1088095d */
  if (C.zf) goto L_1088095d;
  /* 1088093c mov ecx, dword ptr [0x108a08bc] */
  ECX = (r32((uint32_t)(0x108a08bc)));
  /* 10880942 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10880945 mov dword ptr [0x108a08bc], ecx */
  w32((uint32_t)(0x108a08bc), (ECX));
  /* 1088094b cmp dword ptr [0x108a08a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880952 jne 0x1088095d */
  if (!C.zf) goto L_1088095d;
  /* 10880954 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10880957 mov dword ptr [0x108a08a4], edx */
  w32((uint32_t)(0x108a08a4), (EDX));
L_1088095d:;
  /* 1088095d jmp 0x1088097e */
  goto L_1088097e;
L_1088095f:;
  /* 1088095f mov eax, dword ptr [0x108a08bc] */
  EAX = (r32((uint32_t)(0x108a08bc)));
  /* 10880964 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10880967 mov dword ptr [0x108a08bc], eax */
  w32((uint32_t)(0x108a08bc), (EAX));
  /* 1088096c cmp dword ptr [0x108a08a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880973 jne 0x1088097e */
  if (!C.zf) goto L_1088097e;
  /* 10880975 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10880978 mov dword ptr [0x108a08a4], ecx */
  w32((uint32_t)(0x108a08a4), (ECX));
L_1088097e:;
  /* 1088097e jmp 0x108809e1 */
  goto L_108809e1;
L_10880980:;
  /* 10880980 cmp dword ptr [0x108a08b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880987 jne 0x108809e1 */
  if (!C.zf) goto L_108809e1;
  /* 10880989 cmp dword ptr [0x108a08ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880990 je 0x108809e1 */
  if (C.zf) goto L_108809e1;
  /* 10880992 mov edx, dword ptr [0x108a08ac] */
  EDX = (r32((uint32_t)(0x108a08ac)));
  /* 10880998 push edx */
  push32((uint32_t)(EDX));
  /* 10880999 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1088099c push eax */
  push32((uint32_t)(EAX));
  /* 1088099d mov ecx, dword ptr [0x108a08b4] */
  ECX = (r32((uint32_t)(0x108a08b4)));
  /* 108809a3 push ecx */
  push32((uint32_t)(ECX));
  /* 108809a4 call 0x10882d40 */
  push32(0x108809a9u); f_10882d40();
  /* 108809a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108809ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108809ae jne 0x108809e1 */
  if (!C.zf) goto L_108809e1;
  /* 108809b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108809b2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108809b5 push edx */
  push32((uint32_t)(EDX));
  /* 108809b6 call 0x10880dc0 */
  push32(0x108809bbu); f_10880dc0();
  /* 108809bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108809be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108809c0 je 0x108809e1 */
  if (C.zf) goto L_108809e1;
  /* 108809c2 mov eax, dword ptr [0x108a08bc] */
  EAX = (r32((uint32_t)(0x108a08bc)));
  /* 108809c7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 108809ca mov dword ptr [0x108a08bc], eax */
  w32((uint32_t)(0x108a08bc), (EAX));
  /* 108809cf cmp dword ptr [0x108a08a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108809d6 jne 0x108809e1 */
  if (!C.zf) goto L_108809e1;
  /* 108809d8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108809db mov dword ptr [0x108a08a4], ecx */
  w32((uint32_t)(0x108a08a4), (ECX));
L_108809e1:;
  /* 108809e1 mov eax, dword ptr [0x108a08bc] */
  EAX = (r32((uint32_t)(0x108a08bc)));
  /* 108809e6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108809e9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108809eb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108809ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_108809ee:;
  /* 108809ee mov esp, ebp */
  ESP = (EBP);
  /* 108809f0 pop ebp */
  EBP = (pop32());
  /* 108809f1 ret 4 */
  ESPCHK(0x108806d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010a00 @ 0x10880a00 (116 bytes, 33 insns) */
void f_10880a00(void) {
  FTRACE(0x10880a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10880a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10880a01 mov ebp, esp */
  EBP = (ESP);
  /* 10880a03 push ecx */
  push32((uint32_t)(ECX));
  /* 10880a04 mov eax, dword ptr [0x108a08b4] */
  EAX = (r32((uint32_t)(0x108a08b4)));
  /* 10880a09 push eax */
  push32((uint32_t)(EAX));
  /* 10880a0a call 0x108773d0 */
  push32(0x10880a0fu); f_108773d0();
  /* 10880a0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880a12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10880a14 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880a17 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10880a1a mov dword ptr [0x108a08b0], ecx */
  w32((uint32_t)(0x108a08b0), (ECX));
  /* 10880a20 cmp dword ptr [0x108a08b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880a27 je 0x10880a32 */
  if (C.zf) goto L_10880a32;
  /* 10880a29 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10880a30 jmp 0x10880a44 */
  goto L_10880a44;
L_10880a32:;
  /* 10880a32 mov edx, dword ptr [0x108a08b4] */
  EDX = (r32((uint32_t)(0x108a08b4)));
  /* 10880a38 push edx */
  push32((uint32_t)(EDX));
  /* 10880a39 call 0x108810b0 */
  push32(0x10880a3eu); f_108810b0();
  /* 10880a3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880a41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10880a44:;
  /* 10880a44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10880a47 mov dword ptr [0x108a08ac], eax */
  w32((uint32_t)(0x108a08ac), (EAX));
  /* 10880a4c push 1 */
  push32((uint32_t)(0x1u));
  /* 10880a4e push 0x10880a80 */
  push32((uint32_t)(0x10880a80u));
  /* 10880a53 call dword ptr [0x108a32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32e8))), 0x10880a59u);
  /* 10880a59 mov ecx, dword ptr [0x108a08bc] */
  ECX = (r32((uint32_t)(0x108a08bc)));
  /* 10880a5f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10880a62 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10880a64 jne 0x10880a70 */
  if (!C.zf) goto L_10880a70;
  /* 10880a66 mov dword ptr [0x108a08bc], 0 */
  w32((uint32_t)(0x108a08bc), (0x0u));
L_10880a70:;
  /* 10880a70 mov esp, ebp */
  ESP = (EBP);
  /* 10880a72 pop ebp */
  EBP = (pop32());
  /* 10880a73 ret  */
  ESPCHK(0x10880a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a80 @ 0x10880a80 (287 bytes, 86 insns) */
void f_10880a80(void) {
  FTRACE(0x10880a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10880a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10880a81 mov ebp, esp */
  EBP = (ESP);
  /* 10880a83 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10880a86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10880a89 push eax */
  push32((uint32_t)(EAX));
  /* 10880a8a call 0x10881030 */
  push32(0x10880a8fu); f_10881030();
  /* 10880a8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880a92 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10880a95 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10880a97 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10880a9a push ecx */
  push32((uint32_t)(ECX));
  /* 10880a9b mov edx, dword ptr [0x108a08b0] */
  EDX = (r32((uint32_t)(0x108a08b0)));
  /* 10880aa1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10880aa3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10880aa5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10880aab add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10880ab1 push edx */
  push32((uint32_t)(EDX));
  /* 10880ab2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10880ab5 push eax */
  push32((uint32_t)(EAX));
  /* 10880ab6 call dword ptr [0x108a08c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a08c4))), 0x10880abcu);
  /* 10880abc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880abe jne 0x10880ad4 */
  if (!C.zf) goto L_10880ad4;
  /* 10880ac0 mov dword ptr [0x108a08bc], 0 */
  w32((uint32_t)(0x108a08bc), (0x0u));
  /* 10880aca mov eax, 1 */
  EAX = (0x1u);
  /* 10880acf jmp 0x10880b99 */
  goto L_10880b99;
L_10880ad4:;
  /* 10880ad4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10880ad7 push ecx */
  push32((uint32_t)(ECX));
  /* 10880ad8 mov edx, dword ptr [0x108a08b4] */
  EDX = (r32((uint32_t)(0x108a08b4)));
  /* 10880ade push edx */
  push32((uint32_t)(EDX));
  /* 10880adf call 0x10882c70 */
  push32(0x10880ae4u); f_10882c70();
  /* 10880ae4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880ae7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880ae9 jne 0x10880b29 */
  if (!C.zf) goto L_10880b29;
  /* 10880aeb cmp dword ptr [0x108a08b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880af2 jne 0x10880b06 */
  if (!C.zf) goto L_10880b06;
  /* 10880af4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10880af6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10880af9 push eax */
  push32((uint32_t)(EAX));
  /* 10880afa call 0x10880dc0 */
  push32(0x10880affu); f_10880dc0();
  /* 10880aff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880b02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880b04 je 0x10880b27 */
  if (C.zf) goto L_10880b27;
L_10880b06:;
  /* 10880b06 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10880b09 mov dword ptr [0x108a08c0], ecx */
  w32((uint32_t)(0x108a08c0), (ECX));
  /* 10880b0f mov edx, dword ptr [0x108a08c0] */
  EDX = (r32((uint32_t)(0x108a08c0)));
  /* 10880b15 mov dword ptr [0x108a08a4], edx */
  w32((uint32_t)(0x108a08a4), (EDX));
  /* 10880b1b mov eax, dword ptr [0x108a08bc] */
  EAX = (r32((uint32_t)(0x108a08bc)));
  /* 10880b20 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10880b22 mov dword ptr [0x108a08bc], eax */
  w32((uint32_t)(0x108a08bc), (EAX));
L_10880b27:;
  /* 10880b27 jmp 0x10880b8c */
  goto L_10880b8c;
L_10880b29:;
  /* 10880b29 cmp dword ptr [0x108a08b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880b30 jne 0x10880b8c */
  if (!C.zf) goto L_10880b8c;
  /* 10880b32 cmp dword ptr [0x108a08ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880b39 je 0x10880b8c */
  if (C.zf) goto L_10880b8c;
  /* 10880b3b mov ecx, dword ptr [0x108a08ac] */
  ECX = (r32((uint32_t)(0x108a08ac)));
  /* 10880b41 push ecx */
  push32((uint32_t)(ECX));
  /* 10880b42 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10880b45 push edx */
  push32((uint32_t)(EDX));
  /* 10880b46 mov eax, dword ptr [0x108a08b4] */
  EAX = (r32((uint32_t)(0x108a08b4)));
  /* 10880b4b push eax */
  push32((uint32_t)(EAX));
  /* 10880b4c call 0x10882d40 */
  push32(0x10880b51u); f_10882d40();
  /* 10880b51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880b54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880b56 jne 0x10880b8c */
  if (!C.zf) goto L_10880b8c;
  /* 10880b58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10880b5a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10880b5d push ecx */
  push32((uint32_t)(ECX));
  /* 10880b5e call 0x10880dc0 */
  push32(0x10880b63u); f_10880dc0();
  /* 10880b63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880b66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880b68 je 0x10880b8c */
  if (C.zf) goto L_10880b8c;
  /* 10880b6a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10880b6d mov dword ptr [0x108a08c0], edx */
  w32((uint32_t)(0x108a08c0), (EDX));
  /* 10880b73 mov eax, dword ptr [0x108a08c0] */
  EAX = (r32((uint32_t)(0x108a08c0)));
  /* 10880b78 mov dword ptr [0x108a08a4], eax */
  w32((uint32_t)(0x108a08a4), (EAX));
  /* 10880b7d mov ecx, dword ptr [0x108a08bc] */
  ECX = (r32((uint32_t)(0x108a08bc)));
  /* 10880b83 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10880b86 mov dword ptr [0x108a08bc], ecx */
  w32((uint32_t)(0x108a08bc), (ECX));
L_10880b8c:;
  /* 10880b8c mov eax, dword ptr [0x108a08bc] */
  EAX = (r32((uint32_t)(0x108a08bc)));
  /* 10880b91 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10880b94 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10880b96 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10880b98 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10880b99:;
  /* 10880b99 mov esp, ebp */
  ESP = (EBP);
  /* 10880b9b pop ebp */
  EBP = (pop32());
  /* 10880b9c ret 4 */
  ESPCHK(0x10880a80u, _esp0);
  ESP += 8; return;
}

/* FUN_10010ba0 @ 0x10880ba0 (69 bytes, 20 insns) */
void f_10880ba0(void) {
  FTRACE(0x10880ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10880ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10880ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10880ba3 mov eax, dword ptr [0x108a08b8] */
  EAX = (r32((uint32_t)(0x108a08b8)));
  /* 10880ba8 push eax */
  push32((uint32_t)(EAX));
  /* 10880ba9 call 0x108773d0 */
  push32(0x10880baeu); f_108773d0();
  /* 10880bae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880bb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10880bb3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880bb6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10880bb9 mov dword ptr [0x108a08a8], ecx */
  w32((uint32_t)(0x108a08a8), (ECX));
  /* 10880bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 10880bc1 push 0x10880bf0 */
  push32((uint32_t)(0x10880bf0u));
  /* 10880bc6 call dword ptr [0x108a32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32e8))), 0x10880bccu);
  /* 10880bcc mov edx, dword ptr [0x108a08bc] */
  EDX = (r32((uint32_t)(0x108a08bc)));
  /* 10880bd2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10880bd5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10880bd7 jne 0x10880be3 */
  if (!C.zf) goto L_10880be3;
  /* 10880bd9 mov dword ptr [0x108a08bc], 0 */
  w32((uint32_t)(0x108a08bc), (0x0u));
L_10880be3:;
  /* 10880be3 pop ebp */
  EBP = (pop32());
  /* 10880be4 ret  */
  ESPCHK(0x10880ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bf0 @ 0x10880bf0 (172 bytes, 54 insns) */
void f_10880bf0(void) {
  FTRACE(0x10880bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10880bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10880bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10880bf3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10880bf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10880bf9 push eax */
  push32((uint32_t)(EAX));
  /* 10880bfa call 0x10881030 */
  push32(0x10880bffu); f_10881030();
  /* 10880bff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880c02 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10880c05 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10880c07 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10880c0a push ecx */
  push32((uint32_t)(ECX));
  /* 10880c0b mov edx, dword ptr [0x108a08a8] */
  EDX = (r32((uint32_t)(0x108a08a8)));
  /* 10880c11 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10880c13 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10880c15 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10880c1b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10880c21 push edx */
  push32((uint32_t)(EDX));
  /* 10880c22 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10880c25 push eax */
  push32((uint32_t)(EAX));
  /* 10880c26 call dword ptr [0x108a08c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a08c4))), 0x10880c2cu);
  /* 10880c2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880c2e jne 0x10880c41 */
  if (!C.zf) goto L_10880c41;
  /* 10880c30 mov dword ptr [0x108a08bc], 0 */
  w32((uint32_t)(0x108a08bc), (0x0u));
  /* 10880c3a mov eax, 1 */
  EAX = (0x1u);
  /* 10880c3f jmp 0x10880c96 */
  goto L_10880c96;
L_10880c41:;
  /* 10880c41 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10880c44 push ecx */
  push32((uint32_t)(ECX));
  /* 10880c45 mov edx, dword ptr [0x108a08b8] */
  EDX = (r32((uint32_t)(0x108a08b8)));
  /* 10880c4b push edx */
  push32((uint32_t)(EDX));
  /* 10880c4c call 0x10882c70 */
  push32(0x10880c51u); f_10882c70();
  /* 10880c51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880c54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880c56 jne 0x10880c89 */
  if (!C.zf) goto L_10880c89;
  /* 10880c58 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10880c5b push eax */
  push32((uint32_t)(EAX));
  /* 10880c5c call 0x10880d70 */
  push32(0x10880c61u); f_10880d70();
  /* 10880c61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880c64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880c66 je 0x10880c89 */
  if (C.zf) goto L_10880c89;
  /* 10880c68 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10880c6b mov dword ptr [0x108a08c0], ecx */
  w32((uint32_t)(0x108a08c0), (ECX));
  /* 10880c71 mov edx, dword ptr [0x108a08c0] */
  EDX = (r32((uint32_t)(0x108a08c0)));
  /* 10880c77 mov dword ptr [0x108a08a4], edx */
  w32((uint32_t)(0x108a08a4), (EDX));
  /* 10880c7d mov eax, dword ptr [0x108a08bc] */
  EAX = (r32((uint32_t)(0x108a08bc)));
  /* 10880c82 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10880c84 mov dword ptr [0x108a08bc], eax */
  w32((uint32_t)(0x108a08bc), (EAX));
L_10880c89:;
  /* 10880c89 mov eax, dword ptr [0x108a08bc] */
  EAX = (r32((uint32_t)(0x108a08bc)));
  /* 10880c8e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10880c91 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10880c93 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10880c95 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10880c96:;
  /* 10880c96 mov esp, ebp */
  ESP = (EBP);
  /* 10880c98 pop ebp */
  EBP = (pop32());
  /* 10880c99 ret 4 */
  ESPCHK(0x10880bf0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010ca0 @ 0x10880ca0 (43 bytes, 11 insns) */
void f_10880ca0(void) {
  FTRACE(0x10880ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10880ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10880ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10880ca3 mov eax, dword ptr [0x108a08bc] */
  EAX = (r32((uint32_t)(0x108a08bc)));
  /* 10880ca8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10880cad mov dword ptr [0x108a08bc], eax */
  w32((uint32_t)(0x108a08bc), (EAX));
  /* 10880cb2 call dword ptr [0x108a32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32d8))), 0x10880cb8u);
  /* 10880cb8 mov dword ptr [0x108a08c0], eax */
  w32((uint32_t)(0x108a08c0), (EAX));
  /* 10880cbd mov ecx, dword ptr [0x108a08c0] */
  ECX = (r32((uint32_t)(0x108a08c0)));
  /* 10880cc3 mov dword ptr [0x108a08a4], ecx */
  w32((uint32_t)(0x108a08a4), (ECX));
  /* 10880cc9 pop ebp */
  EBP = (pop32());
  /* 10880cca ret  */
  ESPCHK(0x10880ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010cd0 @ 0x10880cd0 (155 bytes, 57 insns) */
void f_10880cd0(void) {
  FTRACE(0x10880cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10880cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10880cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10880cd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10880cd6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880cda je 0x10880cfb */
  if (C.zf) goto L_10880cfb;
  /* 10880cdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10880cdf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10880ce2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10880ce4 je 0x10880cfb */
  if (C.zf) goto L_10880cfb;
  /* 10880ce6 push 0x1089c844 */
  push32((uint32_t)(0x1089c844u));
  /* 10880ceb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10880cee push edx */
  push32((uint32_t)(EDX));
  /* 10880cef call 0x10880230 */
  push32(0x10880cf4u); f_10880230();
  /* 10880cf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880cf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880cf9 jne 0x10880d23 */
  if (!C.zf) goto L_10880d23;
L_10880cfb:;
  /* 10880cfb push 8 */
  push32((uint32_t)(0x8u));
  /* 10880cfd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10880d00 push eax */
  push32((uint32_t)(EAX));
  /* 10880d01 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10880d06 mov ecx, dword ptr [0x108a08c0] */
  ECX = (r32((uint32_t)(0x108a08c0)));
  /* 10880d0c push ecx */
  push32((uint32_t)(ECX));
  /* 10880d0d call dword ptr [0x108a08c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a08c4))), 0x10880d13u);
  /* 10880d13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880d15 jne 0x10880d1b */
  if (!C.zf) goto L_10880d1b;
  /* 10880d17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10880d19 jmp 0x10880d67 */
  goto L_10880d67;
L_10880d1b:;
  /* 10880d1b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10880d1e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10880d21 jmp 0x10880d5b */
  goto L_10880d5b;
L_10880d23:;
  /* 10880d23 push 0x1089c840 */
  push32((uint32_t)(0x1089c840u));
  /* 10880d28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10880d2b push eax */
  push32((uint32_t)(EAX));
  /* 10880d2c call 0x10880230 */
  push32(0x10880d31u); f_10880230();
  /* 10880d31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880d34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880d36 jne 0x10880d5b */
  if (!C.zf) goto L_10880d5b;
  /* 10880d38 push 8 */
  push32((uint32_t)(0x8u));
  /* 10880d3a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10880d3d push ecx */
  push32((uint32_t)(ECX));
  /* 10880d3e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10880d40 mov edx, dword ptr [0x108a08c0] */
  EDX = (r32((uint32_t)(0x108a08c0)));
  /* 10880d46 push edx */
  push32((uint32_t)(EDX));
  /* 10880d47 call dword ptr [0x108a08c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a08c4))), 0x10880d4du);
  /* 10880d4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880d4f jne 0x10880d55 */
  if (!C.zf) goto L_10880d55;
  /* 10880d51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10880d53 jmp 0x10880d67 */
  goto L_10880d67;
L_10880d55:;
  /* 10880d55 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10880d58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10880d5b:;
  /* 10880d5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10880d5e push ecx */
  push32((uint32_t)(ECX));
  /* 10880d5f call 0x10882e50 */
  push32(0x10880d64u); f_10882e50();
  /* 10880d64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10880d67:;
  /* 10880d67 mov esp, ebp */
  ESP = (EBP);
  /* 10880d69 pop ebp */
  EBP = (pop32());
  /* 10880d6a ret  */
  ESPCHK(0x10880cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d70 @ 0x10880d70 (79 bytes, 26 insns) */
void f_10880d70(void) {
  FTRACE(0x10880d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10880d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10880d71 mov ebp, esp */
  EBP = (ESP);
  /* 10880d73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10880d76 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10880d7a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10880d7e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10880d85 jmp 0x10880d90 */
  goto L_10880d90;
L_10880d87:;
  /* 10880d87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10880d8a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10880d8d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10880d90:;
  /* 10880d90 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880d94 jae 0x10880db6 */
  if (!C.cf) goto L_10880db6;
  /* 10880d96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10880d99 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10880d9f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10880da2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10880da4 mov cx, word ptr [eax*2 + 0x1089f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1089f9c4)));
  /* 10880dac cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880dae jne 0x10880db4 */
  if (!C.zf) goto L_10880db4;
  /* 10880db0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10880db2 jmp 0x10880dbb */
  goto L_10880dbb;
L_10880db4:;
  /* 10880db4 jmp 0x10880d87 */
  goto L_10880d87;
L_10880db6:;
  /* 10880db6 mov eax, 1 */
  EAX = (0x1u);
L_10880dbb:;
  /* 10880dbb mov esp, ebp */
  ESP = (EBP);
  /* 10880dbd pop ebp */
  EBP = (pop32());
  /* 10880dbe ret  */
  ESPCHK(0x10880d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010dc0 @ 0x10880dc0 (135 bytes, 48 insns) */
void f_10880dc0(void) {
  FTRACE(0x10880dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10880dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10880dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10880dc3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10880dc6 push esi */
  push32((uint32_t)(ESI));
  /* 10880dc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10880dca and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10880dcf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10880dd4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10880dd9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10880ddc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10880de1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10880de4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10880de6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10880de9 push ecx */
  push32((uint32_t)(ECX));
  /* 10880dea push 1 */
  push32((uint32_t)(0x1u));
  /* 10880dec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10880def push edx */
  push32((uint32_t)(EDX));
  /* 10880df0 call dword ptr [0x108a08c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a08c4))), 0x10880df6u);
  /* 10880df6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880df8 jne 0x10880dfe */
  if (!C.zf) goto L_10880dfe;
  /* 10880dfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10880dfc jmp 0x10880e42 */
  goto L_10880e42;
L_10880dfe:;
  /* 10880dfe lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10880e01 push eax */
  push32((uint32_t)(EAX));
  /* 10880e02 call 0x10881030 */
  push32(0x10880e07u); f_10881030();
  /* 10880e07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880e0a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880e0d je 0x10880e3d */
  if (C.zf) goto L_10880e3d;
  /* 10880e0f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880e13 je 0x10880e3d */
  if (C.zf) goto L_10880e3d;
  /* 10880e15 mov ecx, dword ptr [0x108a08b4] */
  ECX = (r32((uint32_t)(0x108a08b4)));
  /* 10880e1b push ecx */
  push32((uint32_t)(ECX));
  /* 10880e1c call 0x108810b0 */
  push32(0x10880e21u); f_108810b0();
  /* 10880e21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880e24 mov esi, eax */
  ESI = (EAX);
  /* 10880e26 mov edx, dword ptr [0x108a08b4] */
  EDX = (r32((uint32_t)(0x108a08b4)));
  /* 10880e2c push edx */
  push32((uint32_t)(EDX));
  /* 10880e2d call 0x108773d0 */
  push32(0x10880e32u); f_108773d0();
  /* 10880e32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880e35 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880e37 jne 0x10880e3d */
  if (!C.zf) goto L_10880e3d;
  /* 10880e39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10880e3b jmp 0x10880e42 */
  goto L_10880e42;
L_10880e3d:;
  /* 10880e3d mov eax, 1 */
  EAX = (0x1u);
L_10880e42:;
  /* 10880e42 pop esi */
  ESI = (pop32());
  /* 10880e43 mov esp, ebp */
  ESP = (EBP);
  /* 10880e45 pop ebp */
  EBP = (pop32());
  /* 10880e46 ret  */
  ESPCHK(0x10880dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e50 @ 0x10880e50 (77 bytes, 18 insns) */
void f_10880e50(void) {
  FTRACE(0x10880e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10880e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10880e51 mov ebp, esp */
  EBP = (ESP);
  /* 10880e53 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10880e59 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10880e63 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10880e69 push eax */
  push32((uint32_t)(EAX));
  /* 10880e6a call dword ptr [0x108a32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32d4))), 0x10880e70u);
  /* 10880e70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10880e72 je 0x10880e89 */
  if (C.zf) goto L_10880e89;
  /* 10880e74 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880e7b jne 0x10880e89 */
  if (!C.zf) goto L_10880e89;
  /* 10880e7d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10880e87 jmp 0x10880e93 */
  goto L_10880e93;
L_10880e89:;
  /* 10880e89 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10880e93:;
  /* 10880e93 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10880e99 mov esp, ebp */
  ESP = (EBP);
  /* 10880e9b pop ebp */
  EBP = (pop32());
  /* 10880e9c ret  */
  ESPCHK(0x10880e50u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10880ea0 (388 bytes, 118 insns) */
void f_10880ea0(void) {
  FTRACE(0x10880ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10880ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10880ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10880ea3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10880ea6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10880ead mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10880eb4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10880ebb:;
  /* 10880ebb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10880ebe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880ec1 jg 0x10881008 */
  if ((!C.zf&&C.sf==C.of)) goto L_10881008;
  /* 10880ec7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10880eca add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10880ecd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10880ece sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10880ed0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10880ed2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10880ed5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10880ed8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10880edb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10880ede cmp edx, dword ptr [ecx + 0x1089f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1089f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880ee4 jne 0x10880fde */
  if (!C.zf) goto L_10880fde;
  /* 10880eea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10880eed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10880ef0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880ef4 ja 0x10880f17 */
  if ((!C.cf&&!C.zf)) goto L_10880f17;
  /* 10880ef6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880efa je 0x10880f89 */
  if (C.zf) goto L_10880f89;
  /* 10880f00 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880f04 je 0x10880f34 */
  if (C.zf) goto L_10880f34;
  /* 10880f06 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880f0a je 0x10880f56 */
  if (C.zf) goto L_10880f56;
  /* 10880f0c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880f10 je 0x10880f78 */
  if (C.zf) goto L_10880f78;
  /* 10880f12 jmp 0x10880fa8 */
  goto L_10880fa8;
L_10880f17:;
  /* 10880f17 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880f1e je 0x10880f45 */
  if (C.zf) goto L_10880f45;
  /* 10880f20 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880f27 je 0x10880f67 */
  if (C.zf) goto L_10880f67;
  /* 10880f29 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880f30 je 0x10880f9a */
  if (C.zf) goto L_10880f9a;
  /* 10880f32 jmp 0x10880fa8 */
  goto L_10880fa8;
L_10880f34:;
  /* 10880f34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10880f37 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10880f3a add ecx, 0x1089f524 */
  { uint32_t _a=(ECX),_b=(0x1089f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10880f40 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10880f43 jmp 0x10880fa8 */
  goto L_10880fa8;
L_10880f45:;
  /* 10880f45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10880f48 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10880f4b mov eax, dword ptr [edx + 0x1089f52c] */
  EAX = (r32((uint32_t)(EDX + 0x1089f52c)));
  /* 10880f51 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10880f54 jmp 0x10880fa8 */
  goto L_10880fa8;
L_10880f56:;
  /* 10880f56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10880f59 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10880f5c add ecx, 0x1089f530 */
  { uint32_t _a=(ECX),_b=(0x1089f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10880f62 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10880f65 jmp 0x10880fa8 */
  goto L_10880fa8;
L_10880f67:;
  /* 10880f67 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10880f6a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10880f6d mov eax, dword ptr [edx + 0x1089f534] */
  EAX = (r32((uint32_t)(EDX + 0x1089f534)));
  /* 10880f73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10880f76 jmp 0x10880fa8 */
  goto L_10880fa8;
L_10880f78:;
  /* 10880f78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10880f7b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10880f7e add ecx, 0x1089f538 */
  { uint32_t _a=(ECX),_b=(0x1089f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10880f84 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10880f87 jmp 0x10880fa8 */
  goto L_10880fa8;
L_10880f89:;
  /* 10880f89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10880f8c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10880f8f add edx, 0x1089f53c */
  { uint32_t _a=(EDX),_b=(0x1089f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10880f95 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10880f98 jmp 0x10880fa8 */
  goto L_10880fa8;
L_10880f9a:;
  /* 10880f9a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10880f9d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10880fa0 add eax, 0x1089f544 */
  { uint32_t _a=(EAX),_b=(0x1089f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10880fa5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10880fa8:;
  /* 10880fa8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880fac je 0x10880fb4 */
  if (C.zf) goto L_10880fb4;
  /* 10880fae cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880fb2 jge 0x10880fb6 */
  if ((C.sf==C.of)) goto L_10880fb6;
L_10880fb4:;
  /* 10880fb4 jmp 0x10881008 */
  goto L_10881008;
L_10880fb6:;
  /* 10880fb6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10880fb9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10880fbc push ecx */
  push32((uint32_t)(ECX));
  /* 10880fbd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10880fc0 push edx */
  push32((uint32_t)(EDX));
  /* 10880fc1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10880fc4 push eax */
  push32((uint32_t)(EAX));
  /* 10880fc5 call 0x10877dc0 */
  push32(0x10880fcau); f_10877dc0();
  /* 10880fca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10880fcd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10880fd0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10880fd3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10880fd7 mov eax, 1 */
  EAX = (0x1u);
  /* 10880fdc jmp 0x1088101e */
  goto L_1088101e;
L_10880fde:;
  /* 10880fde mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10880fe1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10880fe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10880fe7 cmp eax, dword ptr [edx + 0x1089f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1089f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10880fed jae 0x10880ffa */
  if (!C.cf) goto L_10880ffa;
  /* 10880fef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10880ff2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10880ff5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10880ff8 jmp 0x10881003 */
  goto L_10881003;
L_10880ffa:;
  /* 10880ffa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10880ffd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881000 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10881003:;
  /* 10881003 jmp 0x10880ebb */
  goto L_10880ebb;
L_10881008:;
  /* 10881008 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1088100b push eax */
  push32((uint32_t)(EAX));
  /* 1088100c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1088100f push ecx */
  push32((uint32_t)(ECX));
  /* 10881010 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881013 push edx */
  push32((uint32_t)(EDX));
  /* 10881014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10881017 push eax */
  push32((uint32_t)(EAX));
  /* 10881018 call dword ptr [0x108a32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32e0))), 0x1088101eu);
L_1088101e:;
  /* 1088101e mov esp, ebp */
  ESP = (EBP);
  /* 10881020 pop ebp */
  EBP = (pop32());
  /* 10881021 ret 0x10 */
  ESPCHK(0x10880ea0u, _esp0);
  ESP += 20; return;
}

/* FUN_10011030 @ 0x10881030 (118 bytes, 42 insns) */
void f_10881030(void) {
  FTRACE(0x10881030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10881030 push ebp */
  push32((uint32_t)(EBP));
  /* 10881031 mov ebp, esp */
  EBP = (ESP);
  /* 10881033 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10881036 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1088103d:;
  /* 1088103d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10881040 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10881042 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10881045 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10881049 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088104c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088104f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10881052 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10881054 je 0x1088109f */
  if (C.zf) goto L_1088109f;
  /* 10881056 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1088105a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088105d jl 0x10881072 */
  if ((C.sf!=C.of)) goto L_10881072;
  /* 1088105f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10881063 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881066 jg 0x10881072 */
  if ((!C.zf&&C.sf==C.of)) goto L_10881072;
  /* 10881068 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1088106b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1088106d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10881070 jmp 0x1088108c */
  goto L_1088108c;
L_10881072:;
  /* 10881072 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10881076 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881079 jl 0x1088108c */
  if ((C.sf!=C.of)) goto L_1088108c;
  /* 1088107b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1088107f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881082 jg 0x1088108c */
  if ((!C.zf&&C.sf==C.of)) goto L_1088108c;
  /* 10881084 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10881087 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10881089 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1088108c:;
  /* 1088108c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1088108f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10881092 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10881096 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1088109a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1088109d jmp 0x1088103d */
  goto L_1088103d;
L_1088109f:;
  /* 1088109f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108810a2 mov esp, ebp */
  ESP = (EBP);
  /* 108810a4 pop ebp */
  EBP = (pop32());
  /* 108810a5 ret  */
  ESPCHK(0x10881030u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x108810b0 (101 bytes, 36 insns) */
void f_108810b0(void) {
  FTRACE(0x108810b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108810b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108810b1 mov ebp, esp */
  EBP = (ESP);
  /* 108810b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108810b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108810bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108810c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108810c2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 108810c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108810c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108810cb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_108810ce:;
  /* 108810ce movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 108810d2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108810d5 jl 0x108810e0 */
  if ((C.sf!=C.of)) goto L_108810e0;
  /* 108810d7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 108810db cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108810de jle 0x108810f2 */
  if ((C.zf||C.sf!=C.of)) goto L_108810f2;
L_108810e0:;
  /* 108810e0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 108810e4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108810e7 jl 0x1088110e */
  if ((C.sf!=C.of)) goto L_1088110e;
  /* 108810e9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 108810ed cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108810f0 jg 0x1088110e */
  if ((!C.zf&&C.sf==C.of)) goto L_1088110e;
L_108810f2:;
  /* 108810f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108810f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108810f8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108810fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108810fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10881100 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10881103 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10881106 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881109 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1088110c jmp 0x108810ce */
  goto L_108810ce;
L_1088110e:;
  /* 1088110e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10881111 mov esp, ebp */
  ESP = (EBP);
  /* 10881113 pop ebp */
  EBP = (pop32());
  /* 10881114 ret  */
  ESPCHK(0x108810b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011120 @ 0x10881120 (122 bytes, 39 insns) */
void f_10881120(void) {
  FTRACE(0x10881120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10881120 push ebp */
  push32((uint32_t)(EBP));
  /* 10881121 mov ebp, esp */
  EBP = (ESP);
  /* 10881123 push ecx */
  push32((uint32_t)(ECX));
  /* 10881124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10881127 cmp eax, dword ptr [0x108a215c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108a215c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088112d jae 0x10881151 */
  if (!C.cf) goto L_10881151;
  /* 1088112f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10881132 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10881135 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10881138 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1088113b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1088113e mov eax, dword ptr [ecx*4 + 0x108a2020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108a2020)));
  /* 10881145 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1088114a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1088114d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1088114f jne 0x1088116c */
  if (!C.zf) goto L_1088116c;
L_10881151:;
  /* 10881151 call 0x1087c470 */
  push32(0x10881156u); f_1087c470();
  /* 10881156 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1088115c call 0x1087c480 */
  push32(0x10881161u); f_1087c480();
  /* 10881161 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10881167 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1088116a jmp 0x10881196 */
  goto L_10881196;
L_1088116c:;
  /* 1088116c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088116f push edx */
  push32((uint32_t)(EDX));
  /* 10881170 call 0x1087dc90 */
  push32(0x10881175u); f_1087dc90();
  /* 10881175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881178 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088117b push eax */
  push32((uint32_t)(EAX));
  /* 1088117c call 0x108811a0 */
  push32(0x10881181u); f_108811a0();
  /* 10881181 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881184 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10881187 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088118a push ecx */
  push32((uint32_t)(ECX));
  /* 1088118b call 0x1087dd20 */
  push32(0x10881190u); f_1087dd20();
  /* 10881190 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881193 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10881196:;
  /* 10881196 mov esp, ebp */
  ESP = (EBP);
  /* 10881198 pop ebp */
  EBP = (pop32());
  /* 10881199 ret  */
  ESPCHK(0x10881120u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x108811a0 (170 bytes, 59 insns) */
void f_108811a0(void) {
  FTRACE(0x108811a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108811a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108811a1 mov ebp, esp */
  EBP = (ESP);
  /* 108811a3 push ecx */
  push32((uint32_t)(ECX));
  /* 108811a4 push esi */
  push32((uint32_t)(ESI));
  /* 108811a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108811a8 push eax */
  push32((uint32_t)(EAX));
  /* 108811a9 call 0x1087db10 */
  push32(0x108811aeu); f_1087db10();
  /* 108811ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108811b1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108811b4 je 0x108811f3 */
  if (C.zf) goto L_108811f3;
  /* 108811b6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108811ba je 0x108811c2 */
  if (C.zf) goto L_108811c2;
  /* 108811bc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108811c0 jne 0x108811dc */
  if (!C.zf) goto L_108811dc;
L_108811c2:;
  /* 108811c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 108811c4 call 0x1087db10 */
  push32(0x108811c9u); f_1087db10();
  /* 108811c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108811cc mov esi, eax */
  ESI = (EAX);
  /* 108811ce push 2 */
  push32((uint32_t)(0x2u));
  /* 108811d0 call 0x1087db10 */
  push32(0x108811d5u); f_1087db10();
  /* 108811d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108811d8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108811da je 0x108811f3 */
  if (C.zf) goto L_108811f3;
L_108811dc:;
  /* 108811dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108811df push ecx */
  push32((uint32_t)(ECX));
  /* 108811e0 call 0x1087db10 */
  push32(0x108811e5u); f_1087db10();
  /* 108811e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108811e8 push eax */
  push32((uint32_t)(EAX));
  /* 108811e9 call dword ptr [0x108a32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32dc))), 0x108811efu);
  /* 108811ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108811f1 je 0x108811fc */
  if (C.zf) goto L_108811fc;
L_108811f3:;
  /* 108811f3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108811fa jmp 0x10881205 */
  goto L_10881205;
L_108811fc:;
  /* 108811fc call dword ptr [0x108a33b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33b4))), 0x10881202u);
  /* 10881202 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10881205:;
  /* 10881205 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10881208 push edx */
  push32((uint32_t)(EDX));
  /* 10881209 call 0x1087da30 */
  push32(0x1088120eu); f_1087da30();
  /* 1088120e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881211 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10881214 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10881217 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088121a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1088121d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10881220 mov edx, dword ptr [eax*4 + 0x108a2020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108a2020)));
  /* 10881227 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1088122c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881230 je 0x10881243 */
  if (C.zf) goto L_10881243;
  /* 10881232 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10881235 push eax */
  push32((uint32_t)(EAX));
  /* 10881236 call 0x1087c3d0 */
  push32(0x1088123bu); f_1087c3d0();
  /* 1088123b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088123e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10881241 jmp 0x10881245 */
  goto L_10881245;
L_10881243:;
  /* 10881243 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10881245:;
  /* 10881245 pop esi */
  ESI = (pop32());
  /* 10881246 mov esp, ebp */
  ESP = (EBP);
  /* 10881248 pop ebp */
  EBP = (pop32());
  /* 10881249 ret  */
  ESPCHK(0x108811a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011250 @ 0x10881250 (146 bytes, 52 insns) */
void f_10881250(void) {
  FTRACE(0x10881250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10881250 push ebp */
  push32((uint32_t)(EBP));
  /* 10881251 mov ebp, esp */
  EBP = (ESP);
  /* 10881253 push ebx */
  push32((uint32_t)(EBX));
  /* 10881254 push esi */
  push32((uint32_t)(ESI));
  /* 10881255 push edi */
  push32((uint32_t)(EDI));
L_10881256:;
  /* 10881256 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088125a jne 0x1088127a */
  if (!C.zf) goto L_1088127a;
  /* 1088125c push 0x1089c180 */
  push32((uint32_t)(0x1089c180u));
  /* 10881261 push 0 */
  push32((uint32_t)(0x0u));
  /* 10881263 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10881265 push 0x1089c848 */
  push32((uint32_t)(0x1089c848u));
  /* 1088126a push 2 */
  push32((uint32_t)(0x2u));
  /* 1088126c call 0x10873660 */
  push32(0x10881271u); f_10873660();
  /* 10881271 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881274 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881277 jne 0x1088127a */
  if (!C.zf) goto L_1088127a;
  /* 10881279 int3  */
  x86_unimpl("int3 @ 0x10881279");
L_1088127a:;
  /* 1088127a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1088127c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1088127e jne 0x10881256 */
  if (!C.zf) goto L_10881256;
  /* 10881280 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10881283 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10881286 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1088128c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1088128e je 0x108812dd */
  if (C.zf) goto L_108812dd;
  /* 10881290 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10881293 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10881296 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10881299 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1088129b je 0x108812dd */
  if (C.zf) goto L_108812dd;
  /* 1088129d push 2 */
  push32((uint32_t)(0x2u));
  /* 1088129f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108812a2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108812a5 push eax */
  push32((uint32_t)(EAX));
  /* 108812a6 call 0x10875030 */
  push32(0x108812abu); f_10875030();
  /* 108812ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108812ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108812b1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108812b4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 108812ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108812bd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 108812c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108812c3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 108812c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108812cc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 108812d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108812d6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_108812dd:;
  /* 108812dd pop edi */
  EDI = (pop32());
  /* 108812de pop esi */
  ESI = (pop32());
  /* 108812df pop ebx */
  EBX = (pop32());
  /* 108812e0 pop ebp */
  EBP = (pop32());
  /* 108812e1 ret  */
  ESPCHK(0x10881250u, _esp0);
  ESP += 4; return;
}

/* FUN_100112f0 @ 0x108812f0 (289 bytes, 97 insns) */
void f_108812f0(void) {
  FTRACE(0x108812f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108812f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108812f1 mov ebp, esp */
  EBP = (ESP);
  /* 108812f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108812f6 push esi */
  push32((uint32_t)(ESI));
  /* 108812f7 mov eax, dword ptr [0x1089fc98] */
  EAX = (r32((uint32_t)(0x1089fc98)));
  /* 108812fc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108812ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10881306 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1088130d jmp 0x10881318 */
  goto L_10881318;
L_1088130f:;
  /* 1088130f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10881312 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881315 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10881318:;
  /* 10881318 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088131c jae 0x10881351 */
  if (!C.cf) goto L_10881351;
  /* 1088131e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10881321 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10881324 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10881327 push ecx */
  push32((uint32_t)(ECX));
  /* 10881328 call 0x108773d0 */
  push32(0x1088132du); f_108773d0();
  /* 1088132d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881330 mov esi, eax */
  ESI = (EAX);
  /* 10881332 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10881335 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10881338 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1088133c push ecx */
  push32((uint32_t)(ECX));
  /* 1088133d call 0x108773d0 */
  push32(0x10881342u); f_108773d0();
  /* 10881342 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881345 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881348 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1088134c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1088134f jmp 0x1088130f */
  goto L_1088130f;
L_10881351:;
  /* 10881351 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10881354 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881357 push eax */
  push32((uint32_t)(EAX));
  /* 10881358 call 0x10874580 */
  push32(0x1088135du); f_10874580();
  /* 1088135d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881360 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10881363 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881367 je 0x10881409 */
  if (C.zf) goto L_10881409;
  /* 1088136d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10881370 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10881373 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1088137a jmp 0x10881385 */
  goto L_10881385;
L_1088137c:;
  /* 1088137c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1088137f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881382 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10881385:;
  /* 10881385 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881389 jae 0x108813fa */
  if (!C.cf) goto L_108813fa;
  /* 1088138b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1088138e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10881391 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10881394 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881397 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1088139a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1088139d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108813a0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 108813a3 push ecx */
  push32((uint32_t)(ECX));
  /* 108813a4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108813a7 push edx */
  push32((uint32_t)(EDX));
  /* 108813a8 call 0x10877550 */
  push32(0x108813adu); f_10877550();
  /* 108813ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108813b0 push eax */
  push32((uint32_t)(EAX));
  /* 108813b1 call 0x108773d0 */
  push32(0x108813b6u); f_108773d0();
  /* 108813b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108813b9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108813bc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108813be mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108813c1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108813c4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 108813c7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108813ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108813cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108813d0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108813d3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108813d6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 108813da push eax */
  push32((uint32_t)(EAX));
  /* 108813db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108813de push ecx */
  push32((uint32_t)(ECX));
  /* 108813df call 0x10877550 */
  push32(0x108813e4u); f_10877550();
  /* 108813e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108813e7 push eax */
  push32((uint32_t)(EAX));
  /* 108813e8 call 0x108773d0 */
  push32(0x108813edu); f_108773d0();
  /* 108813ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108813f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108813f3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108813f5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108813f8 jmp 0x1088137c */
  goto L_1088137c;
L_108813fa:;
  /* 108813fa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108813fd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10881400 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10881403 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881406 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10881409:;
  /* 10881409 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1088140c pop esi */
  ESI = (pop32());
  /* 1088140d mov esp, ebp */
  ESP = (EBP);
  /* 1088140f pop ebp */
  EBP = (pop32());
  /* 10881410 ret  */
  ESPCHK(0x108812f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011420 @ 0x10881420 (291 bytes, 97 insns) */
void f_10881420(void) {
  FTRACE(0x10881420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10881420 push ebp */
  push32((uint32_t)(EBP));
  /* 10881421 mov ebp, esp */
  EBP = (ESP);
  /* 10881423 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10881426 push esi */
  push32((uint32_t)(ESI));
  /* 10881427 mov eax, dword ptr [0x1089fc98] */
  EAX = (r32((uint32_t)(0x1089fc98)));
  /* 1088142c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1088142f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10881436 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1088143d jmp 0x10881448 */
  goto L_10881448;
L_1088143f:;
  /* 1088143f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10881442 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881445 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10881448:;
  /* 10881448 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088144c jae 0x10881482 */
  if (!C.cf) goto L_10881482;
  /* 1088144e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10881451 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10881454 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10881458 push ecx */
  push32((uint32_t)(ECX));
  /* 10881459 call 0x108773d0 */
  push32(0x1088145eu); f_108773d0();
  /* 1088145e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881461 mov esi, eax */
  ESI = (EAX);
  /* 10881463 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10881466 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10881469 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1088146d push ecx */
  push32((uint32_t)(ECX));
  /* 1088146e call 0x108773d0 */
  push32(0x10881473u); f_108773d0();
  /* 10881473 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881476 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881479 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1088147d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10881480 jmp 0x1088143f */
  goto L_1088143f;
L_10881482:;
  /* 10881482 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10881485 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881488 push eax */
  push32((uint32_t)(EAX));
  /* 10881489 call 0x10874580 */
  push32(0x1088148eu); f_10874580();
  /* 1088148e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881491 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10881494 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881498 je 0x1088153b */
  if (C.zf) goto L_1088153b;
  /* 1088149e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108814a1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108814a4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 108814ab jmp 0x108814b6 */
  goto L_108814b6;
L_108814ad:;
  /* 108814ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108814b0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108814b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_108814b6:;
  /* 108814b6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108814ba jae 0x1088152c */
  if (!C.cf) goto L_1088152c;
  /* 108814bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108814bf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 108814c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108814c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108814c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108814cb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108814ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108814d1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 108814d5 push ecx */
  push32((uint32_t)(ECX));
  /* 108814d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108814d9 push edx */
  push32((uint32_t)(EDX));
  /* 108814da call 0x10877550 */
  push32(0x108814dfu); f_10877550();
  /* 108814df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108814e2 push eax */
  push32((uint32_t)(EAX));
  /* 108814e3 call 0x108773d0 */
  push32(0x108814e8u); f_108773d0();
  /* 108814e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108814eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108814ee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108814f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108814f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108814f6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 108814f9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108814fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108814ff mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10881502 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10881505 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10881508 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1088150c push eax */
  push32((uint32_t)(EAX));
  /* 1088150d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10881510 push ecx */
  push32((uint32_t)(ECX));
  /* 10881511 call 0x10877550 */
  push32(0x10881516u); f_10877550();
  /* 10881516 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881519 push eax */
  push32((uint32_t)(EAX));
  /* 1088151a call 0x108773d0 */
  push32(0x1088151fu); f_108773d0();
  /* 1088151f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881522 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10881525 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881527 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1088152a jmp 0x108814ad */
  goto L_108814ad;
L_1088152c:;
  /* 1088152c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1088152f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10881532 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10881535 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881538 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1088153b:;
  /* 1088153b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1088153e pop esi */
  ESI = (pop32());
  /* 1088153f mov esp, ebp */
  ESP = (EBP);
  /* 10881541 pop ebp */
  EBP = (pop32());
  /* 10881542 ret  */
  ESPCHK(0x10881420u, _esp0);
  ESP += 4; return;
}

