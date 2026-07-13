#include "recomp.h"

/* FUN_10009620 @ 0x111a9620 (10 bytes, 5 insns) */
void f_111a9620(void) {
  FTRACE(0x111a9620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a9620 push ebp */
  push32((uint32_t)(EBP));
  /* 111a9621 mov ebp, esp */
  EBP = (ESP);
  /* 111a9623 mov eax, dword ptr [0x111cfc94] */
  EAX = (r32((uint32_t)(0x111cfc94)));
  /* 111a9628 pop ebp */
  EBP = (pop32());
  /* 111a9629 ret  */
  ESPCHK(0x111a9620u, _esp0);
  ESP += 4; return;
}

/* FUN_10009630 @ 0x111a9630 (31 bytes, 11 insns) */
void f_111a9630(void) {
  FTRACE(0x111a9630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a9630 push ebp */
  push32((uint32_t)(EBP));
  /* 111a9631 mov ebp, esp */
  EBP = (ESP);
  /* 111a9633 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a963a jbe 0x111a9640 */
  if ((C.cf||C.zf)) goto L_111a9640;
  /* 111a963c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a963e jmp 0x111a964d */
  goto L_111a964d;
L_111a9640:;
  /* 111a9640 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9643 mov dword ptr [0x111cfc94], eax */
  w32((uint32_t)(0x111cfc94), (EAX));
  /* 111a9648 mov eax, 1 */
  EAX = (0x1u);
L_111a964d:;
  /* 111a964d pop ebp */
  EBP = (pop32());
  /* 111a964e ret  */
  ESPCHK(0x111a9630u, _esp0);
  ESP += 4; return;
}

/* FUN_10009650 @ 0x111a9650 (89 bytes, 20 insns) */
void f_111a9650(void) {
  FTRACE(0x111a9650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a9650 push ebp */
  push32((uint32_t)(EBP));
  /* 111a9651 mov ebp, esp */
  EBP = (ESP);
  /* 111a9653 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 111a9658 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a965a mov eax, dword ptr [0x111d300c] */
  EAX = (r32((uint32_t)(0x111d300c)));
  /* 111a965f push eax */
  push32((uint32_t)(EAX));
  /* 111a9660 call dword ptr [0x111d4334] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4334))), 0x111a9666u);
  /* 111a9666 mov dword ptr [0x111d3008], eax */
  w32((uint32_t)(0x111d3008), (EAX));
  /* 111a966b cmp dword ptr [0x111d3008], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d3008))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9672 jne 0x111a9678 */
  if (!C.zf) goto L_111a9678;
  /* 111a9674 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a9676 jmp 0x111a96a7 */
  goto L_111a96a7;
L_111a9678:;
  /* 111a9678 mov ecx, dword ptr [0x111d3008] */
  ECX = (r32((uint32_t)(0x111d3008)));
  /* 111a967e mov dword ptr [0x111d2ffc], ecx */
  w32((uint32_t)(0x111d2ffc), (ECX));
  /* 111a9684 mov dword ptr [0x111d3000], 0 */
  w32((uint32_t)(0x111d3000), (0x0u));
  /* 111a968e mov dword ptr [0x111d3004], 0 */
  w32((uint32_t)(0x111d3004), (0x0u));
  /* 111a9698 mov dword ptr [0x111d2fe8], 0x10 */
  w32((uint32_t)(0x111d2fe8), (0x10u));
  /* 111a96a2 mov eax, 1 */
  EAX = (0x1u);
L_111a96a7:;
  /* 111a96a7 pop ebp */
  EBP = (pop32());
  /* 111a96a8 ret  */
  ESPCHK(0x111a9650u, _esp0);
  ESP += 4; return;
}

/* FUN_100096b0 @ 0x111a96b0 (85 bytes, 29 insns) */
void f_111a96b0(void) {
  FTRACE(0x111a96b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a96b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a96b1 mov ebp, esp */
  EBP = (ESP);
  /* 111a96b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a96b6 mov eax, dword ptr [0x111d3004] */
  EAX = (r32((uint32_t)(0x111d3004)));
  /* 111a96bb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111a96be mov ecx, dword ptr [0x111d3008] */
  ECX = (r32((uint32_t)(0x111d3008)));
  /* 111a96c4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a96c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111a96c9 mov edx, dword ptr [0x111d3008] */
  EDX = (r32((uint32_t)(0x111d3008)));
  /* 111a96cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_111a96d2:;
  /* 111a96d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a96d5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a96d8 jae 0x111a96ff */
  if (!C.cf) goto L_111a96ff;
  /* 111a96da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a96dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a96e0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a96e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111a96e6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a96ed jae 0x111a96f4 */
  if (!C.cf) goto L_111a96f4;
  /* 111a96ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a96f2 jmp 0x111a9701 */
  goto L_111a9701;
L_111a96f4:;
  /* 111a96f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a96f7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a96fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111a96fd jmp 0x111a96d2 */
  goto L_111a96d2;
L_111a96ff:;
  /* 111a96ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111a9701:;
  /* 111a9701 mov esp, ebp */
  ESP = (EBP);
  /* 111a9703 pop ebp */
  EBP = (pop32());
  /* 111a9704 ret  */
  ESPCHK(0x111a96b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009710 @ 0x111a9710 (95 bytes, 33 insns) */
void f_111a9710(void) {
  FTRACE(0x111a9710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a9710 push ebp */
  push32((uint32_t)(EBP));
  /* 111a9711 mov ebp, esp */
  EBP = (ESP);
  /* 111a9713 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9719 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a971c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a971f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111a9722 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a9725 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 111a9728 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111a972b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111a9730 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9733 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111a9735 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9738 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111a973b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 111a973d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a973f jne 0x111a9761 */
  if (!C.zf) goto L_111a9761;
  /* 111a9741 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a9744 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 111a9747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a9749 jne 0x111a9761 */
  if (!C.zf) goto L_111a9761;
  /* 111a974b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a974e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a9754 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a9756 je 0x111a9761 */
  if (C.zf) goto L_111a9761;
  /* 111a9758 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 111a975f jmp 0x111a9768 */
  goto L_111a9768;
L_111a9761:;
  /* 111a9761 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_111a9768:;
  /* 111a9768 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a976b mov esp, ebp */
  ESP = (EBP);
  /* 111a976d pop ebp */
  EBP = (pop32());
  /* 111a976e ret  */
  ESPCHK(0x111a9710u, _esp0);
  ESP += 4; return;
}

/* FUN_10009770 @ 0x111a9770 (1485 bytes, 453 insns) */
void f_111a9770(void) {
  FTRACE(0x111a9770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a9770 push ebp */
  push32((uint32_t)(EBP));
  /* 111a9771 mov ebp, esp */
  EBP = (ESP);
  /* 111a9773 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9776 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9779 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111a977c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 111a977f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9782 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a9785 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9788 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111a978b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a978e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 111a9791 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111a9794 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9797 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111a979d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a97a0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 111a97a7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111a97aa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a97ad sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a97b0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 111a97b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111a97b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111a97b8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a97bb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 111a97be mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111a97c1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a97c4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 111a97c7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 111a97ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111a97cc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 111a97cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111a97d2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 111a97d5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111a97d8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a97db and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 111a97de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a97e0 jne 0x111a9908 */
  if (!C.zf) goto L_111a9908;
  /* 111a97e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a97e9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 111a97ec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a97ef mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 111a97f2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a97f6 jbe 0x111a97ff */
  if ((C.cf||C.zf)) goto L_111a97ff;
  /* 111a97f8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_111a97ff:;
  /* 111a97ff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 111a9802 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 111a9805 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 111a9808 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a980b jne 0x111a98e1 */
  if (!C.zf) goto L_111a98e1;
  /* 111a9811 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9815 jae 0x111a9876 */
  if (!C.cf) goto L_111a9876;
  /* 111a9817 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111a981c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a981f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111a9821 not eax */
  EAX = (~(EAX));
  /* 111a9823 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9826 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9829 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 111a982d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111a982f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9832 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9835 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 111a9839 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a983c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a983f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 111a9842 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111a9845 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9848 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a984b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 111a984e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9851 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9854 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 111a9858 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a985a jne 0x111a9874 */
  if (!C.zf) goto L_111a9874;
  /* 111a985c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111a9861 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a9864 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111a9866 not eax */
  EAX = (~(EAX));
  /* 111a9868 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a986b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111a986d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 111a986f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9872 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_111a9874:;
  /* 111a9874 jmp 0x111a98e1 */
  goto L_111a98e1;
L_111a9876:;
  /* 111a9876 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a9879 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a987c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111a9881 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111a9883 not edx */
  EDX = (~(EDX));
  /* 111a9885 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9888 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a988b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 111a9892 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111a9894 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9897 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a989a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 111a98a1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a98a4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a98a7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 111a98aa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111a98ad mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a98b0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a98b3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 111a98b6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a98b9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a98bc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 111a98c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a98c2 jne 0x111a98e1 */
  if (!C.zf) goto L_111a98e1;
  /* 111a98c4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a98c7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a98ca mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111a98cf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111a98d1 not edx */
  EDX = (~(EDX));
  /* 111a98d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a98d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111a98d9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 111a98db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a98de mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_111a98e1:;
  /* 111a98e1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 111a98e4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111a98e7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 111a98ea mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 111a98ed mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 111a98f0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 111a98f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111a98f6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 111a98f9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111a98fc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 111a98ff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111a9902 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9905 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_111a9908:;
  /* 111a9908 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111a990b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 111a990e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9911 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 111a9914 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9918 jbe 0x111a9921 */
  if ((C.cf||C.zf)) goto L_111a9921;
  /* 111a991a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_111a9921:;
  /* 111a9921 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a9924 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 111a9927 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a9929 jne 0x111a9a85 */
  if (!C.zf) goto L_111a9a85;
  /* 111a992f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111a9932 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9935 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 111a9938 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a993b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 111a993e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9941 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 111a9944 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9948 jbe 0x111a9951 */
  if ((C.cf||C.zf)) goto L_111a9951;
  /* 111a994a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_111a9951:;
  /* 111a9951 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111a9954 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9957 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 111a995a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111a995d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 111a9960 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9963 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 111a9966 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a996a jbe 0x111a9973 */
  if ((C.cf||C.zf)) goto L_111a9973;
  /* 111a996c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_111a9973:;
  /* 111a9973 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111a9976 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9979 je 0x111a9a7f */
  if (C.zf) goto L_111a9a7f;
  /* 111a997f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 111a9982 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 111a9985 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 111a9988 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a998b jne 0x111a9a61 */
  if (!C.zf) goto L_111a9a61;
  /* 111a9991 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9995 jae 0x111a99f6 */
  if (!C.cf) goto L_111a99f6;
  /* 111a9997 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111a999c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111a999f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111a99a1 not edx */
  EDX = (~(EDX));
  /* 111a99a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a99a6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a99a9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 111a99ad and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111a99af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a99b2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a99b5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 111a99b9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a99bc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a99bf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 111a99c2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111a99c5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a99c8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a99cb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 111a99ce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a99d1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a99d4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 111a99d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a99da jne 0x111a99f4 */
  if (!C.zf) goto L_111a99f4;
  /* 111a99dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111a99e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111a99e4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111a99e6 not edx */
  EDX = (~(EDX));
  /* 111a99e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a99eb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111a99ed and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 111a99ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a99f2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_111a99f4:;
  /* 111a99f4 jmp 0x111a9a61 */
  goto L_111a9a61;
L_111a99f6:;
  /* 111a99f6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111a99f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a99fc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111a9a01 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111a9a03 not eax */
  EAX = (~(EAX));
  /* 111a9a05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9a08 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9a0b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 111a9a12 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111a9a14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9a17 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9a1a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 111a9a21 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9a24 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9a27 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 111a9a2a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111a9a2d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9a30 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9a33 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 111a9a36 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9a39 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9a3c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 111a9a40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a9a42 jne 0x111a9a61 */
  if (!C.zf) goto L_111a9a61;
  /* 111a9a44 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111a9a47 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9a4a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111a9a4f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111a9a51 not eax */
  EAX = (~(EAX));
  /* 111a9a53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9a56 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111a9a59 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 111a9a5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9a5e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_111a9a61:;
  /* 111a9a61 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 111a9a64 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111a9a67 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 111a9a6a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111a9a6d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 111a9a70 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 111a9a73 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 111a9a76 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 111a9a79 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111a9a7c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_111a9a7f:;
  /* 111a9a7f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 111a9a82 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_111a9a85:;
  /* 111a9a85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a9a88 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 111a9a8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a9a8d jne 0x111a9a9b */
  if (!C.zf) goto L_111a9a9b;
  /* 111a9a8f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111a9a92 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9a95 je 0x111a9bab */
  if (C.zf) goto L_111a9bab;
L_111a9a9b:;
  /* 111a9a9b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111a9a9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a9aa1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 111a9aa4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 111a9aa7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111a9aaa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111a9aad mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111a9ab0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 111a9ab3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111a9ab6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111a9ab9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 111a9abc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 111a9abf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111a9ac2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 111a9ac5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111a9ac8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111a9acb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111a9ace mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 111a9ad1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111a9ad4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111a9ad7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 111a9ada cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9add jne 0x111a9bab */
  if (!C.zf) goto L_111a9bab;
  /* 111a9ae3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9ae7 jae 0x111a9b44 */
  if (!C.cf) goto L_111a9b44;
  /* 111a9ae9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9aec add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9aef movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 111a9af3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9af6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9af9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 111a9afc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 111a9aff mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9b02 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9b05 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 111a9b08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a9b0a jne 0x111a9b22 */
  if (!C.zf) goto L_111a9b22;
  /* 111a9b0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111a9b11 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111a9b14 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111a9b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9b19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111a9b1b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 111a9b1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9b20 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_111a9b22:;
  /* 111a9b22 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111a9b27 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111a9b2a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111a9b2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9b2f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9b32 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 111a9b36 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111a9b38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9b3b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9b3e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 111a9b42 jmp 0x111a9bab */
  goto L_111a9bab;
L_111a9b44:;
  /* 111a9b44 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9b47 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9b4a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 111a9b4e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9b51 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9b54 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 111a9b57 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 111a9b5a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9b5d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9b60 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 111a9b63 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a9b65 jne 0x111a9b82 */
  if (!C.zf) goto L_111a9b82;
  /* 111a9b67 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111a9b6a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9b6d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111a9b72 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111a9b74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9b77 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111a9b7a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 111a9b7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9b7f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_111a9b82:;
  /* 111a9b82 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111a9b85 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9b88 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111a9b8d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111a9b8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9b92 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9b95 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 111a9b9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111a9b9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9ba1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111a9ba4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_111a9bab:;
  /* 111a9bab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111a9bae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111a9bb1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 111a9bb3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111a9bb6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9bb9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111a9bbc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 111a9bbf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a9bc2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111a9bc4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9bc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a9bca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111a9bcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a9bcf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9bd2 jne 0x111a9d39 */
  if (!C.zf) goto L_111a9d39;
  /* 111a9bd8 cmp dword ptr [0x111d3000], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d3000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9bdf je 0x111a9d28 */
  if (C.zf) goto L_111a9d28;
  /* 111a9be5 mov eax, dword ptr [0x111d2ff8] */
  EAX = (r32((uint32_t)(0x111d2ff8)));
  /* 111a9bea shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 111a9bed mov ecx, dword ptr [0x111d3000] */
  ECX = (r32((uint32_t)(0x111d3000)));
  /* 111a9bf3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111a9bf6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9bf8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 111a9bfb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 111a9c00 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 111a9c05 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9c08 push eax */
  push32((uint32_t)(EAX));
  /* 111a9c09 call dword ptr [0x111d4350] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4350))), 0x111a9c0fu);
  /* 111a9c0f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111a9c14 mov ecx, dword ptr [0x111d2ff8] */
  ECX = (r32((uint32_t)(0x111d2ff8)));
  /* 111a9c1a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111a9c1c mov eax, dword ptr [0x111d3000] */
  EAX = (r32((uint32_t)(0x111d3000)));
  /* 111a9c21 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111a9c24 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 111a9c26 mov edx, dword ptr [0x111d3000] */
  EDX = (r32((uint32_t)(0x111d3000)));
  /* 111a9c2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 111a9c2f mov eax, dword ptr [0x111d3000] */
  EAX = (r32((uint32_t)(0x111d3000)));
  /* 111a9c34 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111a9c37 mov edx, dword ptr [0x111d2ff8] */
  EDX = (r32((uint32_t)(0x111d2ff8)));
  /* 111a9c3d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 111a9c48 mov eax, dword ptr [0x111d3000] */
  EAX = (r32((uint32_t)(0x111d3000)));
  /* 111a9c4d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111a9c50 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 111a9c53 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111a9c56 mov eax, dword ptr [0x111d3000] */
  EAX = (r32((uint32_t)(0x111d3000)));
  /* 111a9c5b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111a9c5e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 111a9c61 mov edx, dword ptr [0x111d3000] */
  EDX = (r32((uint32_t)(0x111d3000)));
  /* 111a9c67 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111a9c6a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 111a9c6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a9c70 jne 0x111a9c86 */
  if (!C.zf) goto L_111a9c86;
  /* 111a9c72 mov edx, dword ptr [0x111d3000] */
  EDX = (r32((uint32_t)(0x111d3000)));
  /* 111a9c78 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 111a9c7b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 111a9c7d mov ecx, dword ptr [0x111d3000] */
  ECX = (r32((uint32_t)(0x111d3000)));
  /* 111a9c83 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_111a9c86:;
  /* 111a9c86 mov edx, dword ptr [0x111d3000] */
  EDX = (r32((uint32_t)(0x111d3000)));
  /* 111a9c8c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9c90 jne 0x111a9d28 */
  if (!C.zf) goto L_111a9d28;
  /* 111a9c96 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 111a9c9b push 0 */
  push32((uint32_t)(0x0u));
  /* 111a9c9d mov eax, dword ptr [0x111d3000] */
  EAX = (r32((uint32_t)(0x111d3000)));
  /* 111a9ca2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 111a9ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 111a9ca6 call dword ptr [0x111d4350] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4350))), 0x111a9cacu);
  /* 111a9cac mov edx, dword ptr [0x111d3000] */
  EDX = (r32((uint32_t)(0x111d3000)));
  /* 111a9cb2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111a9cb5 push eax */
  push32((uint32_t)(EAX));
  /* 111a9cb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a9cb8 mov ecx, dword ptr [0x111d300c] */
  ECX = (r32((uint32_t)(0x111d300c)));
  /* 111a9cbe push ecx */
  push32((uint32_t)(ECX));
  /* 111a9cbf call dword ptr [0x111d4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4360))), 0x111a9cc5u);
  /* 111a9cc5 mov edx, dword ptr [0x111d3004] */
  EDX = (r32((uint32_t)(0x111d3004)));
  /* 111a9ccb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111a9cce mov eax, dword ptr [0x111d3008] */
  EAX = (r32((uint32_t)(0x111d3008)));
  /* 111a9cd3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9cd5 mov ecx, dword ptr [0x111d3000] */
  ECX = (r32((uint32_t)(0x111d3000)));
  /* 111a9cdb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9cde sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9ce0 push eax */
  push32((uint32_t)(EAX));
  /* 111a9ce1 mov edx, dword ptr [0x111d3000] */
  EDX = (r32((uint32_t)(0x111d3000)));
  /* 111a9ce7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9cea push edx */
  push32((uint32_t)(EDX));
  /* 111a9ceb mov eax, dword ptr [0x111d3000] */
  EAX = (r32((uint32_t)(0x111d3000)));
  /* 111a9cf0 push eax */
  push32((uint32_t)(EAX));
  /* 111a9cf1 call 0x111ad2a0 */
  push32(0x111a9cf6u); f_111ad2a0();
  /* 111a9cf6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9cf9 mov ecx, dword ptr [0x111d3004] */
  ECX = (r32((uint32_t)(0x111d3004)));
  /* 111a9cff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9d02 mov dword ptr [0x111d3004], ecx */
  w32((uint32_t)(0x111d3004), (ECX));
  /* 111a9d08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9d0b cmp edx, dword ptr [0x111d3000] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x111d3000))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9d11 jbe 0x111a9d1c */
  if ((C.cf||C.zf)) goto L_111a9d1c;
  /* 111a9d13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9d16 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9d19 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_111a9d1c:;
  /* 111a9d1c mov ecx, dword ptr [0x111d3008] */
  ECX = (r32((uint32_t)(0x111d3008)));
  /* 111a9d22 mov dword ptr [0x111d2ffc], ecx */
  w32((uint32_t)(0x111d2ffc), (ECX));
L_111a9d28:;
  /* 111a9d28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9d2b mov dword ptr [0x111d3000], edx */
  w32((uint32_t)(0x111d3000), (EDX));
  /* 111a9d31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9d34 mov dword ptr [0x111d2ff8], eax */
  w32((uint32_t)(0x111d2ff8), (EAX));
L_111a9d39:;
  /* 111a9d39 mov esp, ebp */
  ESP = (EBP);
  /* 111a9d3b pop ebp */
  EBP = (pop32());
  /* 111a9d3c ret  */
  ESPCHK(0x111a9770u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d40 @ 0x111a9d40 (1334 bytes, 427 insns) */
void f_111a9d40(void) {
  FTRACE(0x111a9d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a9d40 push ebp */
  push32((uint32_t)(EBP));
  /* 111a9d41 mov ebp, esp */
  EBP = (ESP);
  /* 111a9d43 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9d46 push esi */
  push32((uint32_t)(ESI));
  /* 111a9d47 mov eax, dword ptr [0x111d3004] */
  EAX = (r32((uint32_t)(0x111d3004)));
  /* 111a9d4c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111a9d4f mov ecx, dword ptr [0x111d3008] */
  ECX = (r32((uint32_t)(0x111d3008)));
  /* 111a9d55 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9d57 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 111a9d5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9d5d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9d60 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 111a9d63 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 111a9d66 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111a9d69 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 111a9d6c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9d6f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 111a9d72 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9d76 jge 0x111a9d8c */
  if ((C.sf==C.of)) goto L_111a9d8c;
  /* 111a9d78 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111a9d7b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111a9d7e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111a9d80 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 111a9d83 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 111a9d8a jmp 0x111a9da1 */
  goto L_111a9da1;
L_111a9d8c:;
  /* 111a9d8c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 111a9d93 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111a9d96 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9d99 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a9d9c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111a9d9e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_111a9da1:;
  /* 111a9da1 mov ecx, dword ptr [0x111d2ffc] */
  ECX = (r32((uint32_t)(0x111d2ffc)));
  /* 111a9da7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_111a9daa:;
  /* 111a9daa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9dad cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9db0 jae 0x111a9dd6 */
  if (!C.cf) goto L_111a9dd6;
  /* 111a9db2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9db5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a9db8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 111a9dba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9dbd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 111a9dc0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 111a9dc3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111a9dc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a9dc7 je 0x111a9dcb */
  if (C.zf) goto L_111a9dcb;
  /* 111a9dc9 jmp 0x111a9dd6 */
  goto L_111a9dd6;
L_111a9dcb:;
  /* 111a9dcb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9dce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9dd1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 111a9dd4 jmp 0x111a9daa */
  goto L_111a9daa;
L_111a9dd6:;
  /* 111a9dd6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9dd9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9ddc jne 0x111a9ebd */
  if (!C.zf) goto L_111a9ebd;
  /* 111a9de2 mov eax, dword ptr [0x111d3008] */
  EAX = (r32((uint32_t)(0x111d3008)));
  /* 111a9de7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_111a9dea:;
  /* 111a9dea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9ded cmp ecx, dword ptr [0x111d2ffc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111d2ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9df3 jae 0x111a9e19 */
  if (!C.cf) goto L_111a9e19;
  /* 111a9df5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9df8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a9dfb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 111a9dfd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9e00 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 111a9e03 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 111a9e06 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111a9e08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a9e0a je 0x111a9e0e */
  if (C.zf) goto L_111a9e0e;
  /* 111a9e0c jmp 0x111a9e19 */
  goto L_111a9e19;
L_111a9e0e:;
  /* 111a9e0e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9e11 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9e14 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111a9e17 jmp 0x111a9dea */
  goto L_111a9dea;
L_111a9e19:;
  /* 111a9e19 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9e1c cmp ecx, dword ptr [0x111d2ffc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111d2ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9e22 jne 0x111a9ebd */
  if (!C.zf) goto L_111a9ebd;
L_111a9e28:;
  /* 111a9e28 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9e2b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9e2e jae 0x111a9e46 */
  if (!C.cf) goto L_111a9e46;
  /* 111a9e30 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9e33 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9e37 je 0x111a9e3b */
  if (C.zf) goto L_111a9e3b;
  /* 111a9e39 jmp 0x111a9e46 */
  goto L_111a9e46;
L_111a9e3b:;
  /* 111a9e3b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9e3e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9e41 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 111a9e44 jmp 0x111a9e28 */
  goto L_111a9e28;
L_111a9e46:;
  /* 111a9e46 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9e49 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9e4c jne 0x111a9e97 */
  if (!C.zf) goto L_111a9e97;
  /* 111a9e4e mov eax, dword ptr [0x111d3008] */
  EAX = (r32((uint32_t)(0x111d3008)));
  /* 111a9e53 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_111a9e56:;
  /* 111a9e56 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9e59 cmp ecx, dword ptr [0x111d2ffc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111d2ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9e5f jae 0x111a9e77 */
  if (!C.cf) goto L_111a9e77;
  /* 111a9e61 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9e64 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9e68 je 0x111a9e6c */
  if (C.zf) goto L_111a9e6c;
  /* 111a9e6a jmp 0x111a9e77 */
  goto L_111a9e77;
L_111a9e6c:;
  /* 111a9e6c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9e6f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9e72 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111a9e75 jmp 0x111a9e56 */
  goto L_111a9e56;
L_111a9e77:;
  /* 111a9e77 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9e7a cmp ecx, dword ptr [0x111d2ffc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111d2ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9e80 jne 0x111a9e97 */
  if (!C.zf) goto L_111a9e97;
  /* 111a9e82 call 0x111aa280 */
  push32(0x111a9e87u); f_111aa280();
  /* 111a9e87 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111a9e8a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9e8e jne 0x111a9e97 */
  if (!C.zf) goto L_111a9e97;
  /* 111a9e90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a9e92 jmp 0x111aa271 */
  goto L_111aa271;
L_111a9e97:;
  /* 111a9e97 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9e9a push edx */
  push32((uint32_t)(EDX));
  /* 111a9e9b call 0x111aa390 */
  push32(0x111a9ea0u); f_111aa390();
  /* 111a9ea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9ea3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9ea6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 111a9ea9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 111a9eab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9eae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111a9eb1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9eb4 jne 0x111a9ebd */
  if (!C.zf) goto L_111a9ebd;
  /* 111a9eb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a9eb8 jmp 0x111aa271 */
  goto L_111aa271;
L_111a9ebd:;
  /* 111a9ebd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9ec0 mov dword ptr [0x111d2ffc], edx */
  w32((uint32_t)(0x111d2ffc), (EDX));
  /* 111a9ec6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9ec9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111a9ecc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 111a9ecf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 111a9ed2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111a9ed4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 111a9ed7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9edb je 0x111a9f00 */
  if (C.zf) goto L_111a9f00;
  /* 111a9edd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111a9ee0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 111a9ee3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a9ee6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 111a9eea mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111a9eed mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 111a9ef0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 111a9ef3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 111a9efa or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 111a9efc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a9efe jne 0x111a9f35 */
  if (!C.zf) goto L_111a9f35;
L_111a9f00:;
  /* 111a9f00 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_111a9f07:;
  /* 111a9f07 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111a9f0a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 111a9f0d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a9f10 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 111a9f14 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111a9f17 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 111a9f1a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 111a9f1d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 111a9f24 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 111a9f26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a9f28 jne 0x111a9f35 */
  if (!C.zf) goto L_111a9f35;
  /* 111a9f2a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111a9f2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9f30 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 111a9f33 jmp 0x111a9f07 */
  goto L_111a9f07;
L_111a9f35:;
  /* 111a9f35 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111a9f38 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111a9f3e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 111a9f41 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 111a9f48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111a9f4b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 111a9f52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111a9f55 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 111a9f58 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a9f5b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 111a9f5f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 111a9f62 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9f66 jne 0x111a9f82 */
  if (!C.zf) goto L_111a9f82;
  /* 111a9f68 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 111a9f6f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111a9f72 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 111a9f75 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 111a9f78 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 111a9f7f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_111a9f82:;
  /* 111a9f82 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9f86 jl 0x111a9f9b */
  if ((C.sf!=C.of)) goto L_111a9f9b;
  /* 111a9f88 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111a9f8b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111a9f8d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 111a9f90 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111a9f93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9f96 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 111a9f99 jmp 0x111a9f82 */
  goto L_111a9f82;
L_111a9f9b:;
  /* 111a9f9b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 111a9f9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9fa1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 111a9fa5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111a9fa8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a9fab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111a9fad sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9fb0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111a9fb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a9fb6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 111a9fb9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9fbc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 111a9fbf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9fc3 jle 0x111a9fcc */
  if ((C.zf||C.sf!=C.of)) goto L_111a9fcc;
  /* 111a9fc5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_111a9fcc:;
  /* 111a9fcc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a9fcf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9fd2 je 0x111aa1f0 */
  if (C.zf) goto L_111aa1f0;
  /* 111a9fd8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a9fdb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a9fde mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 111a9fe1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9fe4 jne 0x111aa0ba */
  if (!C.zf) goto L_111aa0ba;
  /* 111a9fea cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9fee jge 0x111aa04f */
  if ((C.sf==C.of)) goto L_111aa04f;
  /* 111a9ff0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111a9ff5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111a9ff8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111a9ffa not eax */
  EAX = (~(EAX));
  /* 111a9ffc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111a9fff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa002 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 111aa006 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111aa008 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa00b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa00e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 111aa012 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa015 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa018 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 111aa01b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111aa01e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa021 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa024 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 111aa027 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa02a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa02d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 111aa031 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111aa033 jne 0x111aa04d */
  if (!C.zf) goto L_111aa04d;
  /* 111aa035 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111aa03a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aa03d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111aa03f not eax */
  EAX = (~(EAX));
  /* 111aa041 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa044 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111aa046 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 111aa048 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa04b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_111aa04d:;
  /* 111aa04d jmp 0x111aa0ba */
  goto L_111aa0ba;
L_111aa04f:;
  /* 111aa04f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aa052 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa055 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111aa05a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111aa05c not edx */
  EDX = (~(EDX));
  /* 111aa05e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa061 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa064 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 111aa06b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111aa06d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa070 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa073 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 111aa07a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa07d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa080 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 111aa083 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111aa086 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa089 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa08c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 111aa08f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa092 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa095 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 111aa099 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111aa09b jne 0x111aa0ba */
  if (!C.zf) goto L_111aa0ba;
  /* 111aa09d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aa0a0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa0a3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111aa0a8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111aa0aa not edx */
  EDX = (~(EDX));
  /* 111aa0ac mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa0af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111aa0b2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 111aa0b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa0b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_111aa0ba:;
  /* 111aa0ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa0bd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111aa0c0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa0c3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 111aa0c6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 111aa0c9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa0cc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111aa0cf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa0d2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111aa0d5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 111aa0d8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa0dc je 0x111aa1f0 */
  if (C.zf) goto L_111aa1f0;
  /* 111aa0e2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa0e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa0e8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 111aa0eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111aa0ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa0f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aa0f4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111aa0f7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 111aa0fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa0fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aa100 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 111aa103 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aa106 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa109 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 111aa10c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa10f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111aa112 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa115 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 111aa118 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa11b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa11e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 111aa121 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa124 jne 0x111aa1f0 */
  if (!C.zf) goto L_111aa1f0;
  /* 111aa12a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa12e jge 0x111aa18a */
  if ((C.sf==C.of)) goto L_111aa18a;
  /* 111aa130 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa133 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa136 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 111aa13a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa13d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa140 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 111aa143 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 111aa145 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa148 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa14b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 111aa14e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111aa150 jne 0x111aa168 */
  if (!C.zf) goto L_111aa168;
  /* 111aa152 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111aa157 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa15a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111aa15c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa15f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111aa161 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 111aa163 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa166 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_111aa168:;
  /* 111aa168 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111aa16d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa170 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111aa172 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa175 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa178 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 111aa17c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111aa17e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa181 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa184 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 111aa188 jmp 0x111aa1f0 */
  goto L_111aa1f0;
L_111aa18a:;
  /* 111aa18a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa18d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa190 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 111aa194 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa197 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa19a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 111aa19d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 111aa19f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa1a2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa1a5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 111aa1a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111aa1aa jne 0x111aa1c7 */
  if (!C.zf) goto L_111aa1c7;
  /* 111aa1ac mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa1af sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa1b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111aa1b7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111aa1b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa1bc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111aa1bf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 111aa1c1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa1c4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_111aa1c7:;
  /* 111aa1c7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa1ca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa1cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111aa1d2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111aa1d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa1d7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa1da mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 111aa1e1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111aa1e3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa1e6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa1e9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_111aa1f0:;
  /* 111aa1f0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa1f4 je 0x111aa20a */
  if (C.zf) goto L_111aa20a;
  /* 111aa1f6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa1f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aa1fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 111aa1fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa201 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa204 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aa207 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_111aa20a:;
  /* 111aa20a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa20d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa210 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111aa213 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 111aa216 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa219 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa21c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111aa21e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111aa221 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa224 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa227 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa22a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 111aa22d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa230 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111aa232 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa235 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111aa237 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa23a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa23d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 111aa23f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111aa241 jne 0x111aa263 */
  if (!C.zf) goto L_111aa263;
  /* 111aa243 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa246 cmp eax, dword ptr [0x111d3000] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d3000))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa24c jne 0x111aa263 */
  if (!C.zf) goto L_111aa263;
  /* 111aa24e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa251 cmp ecx, dword ptr [0x111d2ff8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111d2ff8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa257 jne 0x111aa263 */
  if (!C.zf) goto L_111aa263;
  /* 111aa259 mov dword ptr [0x111d3000], 0 */
  w32((uint32_t)(0x111d3000), (0x0u));
L_111aa263:;
  /* 111aa263 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 111aa266 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa269 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 111aa26b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa26e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_111aa271:;
  /* 111aa271 pop esi */
  ESI = (pop32());
  /* 111aa272 mov esp, ebp */
  ESP = (EBP);
  /* 111aa274 pop ebp */
  EBP = (pop32());
  /* 111aa275 ret  */
  ESPCHK(0x111a9d40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a280 @ 0x111aa280 (271 bytes, 78 insns) */
void f_111aa280(void) {
  FTRACE(0x111aa280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111aa280 push ebp */
  push32((uint32_t)(EBP));
  /* 111aa281 mov ebp, esp */
  EBP = (ESP);
  /* 111aa283 push ecx */
  push32((uint32_t)(ECX));
  /* 111aa284 mov eax, dword ptr [0x111d3004] */
  EAX = (r32((uint32_t)(0x111d3004)));
  /* 111aa289 cmp eax, dword ptr [0x111d2fe8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d2fe8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa28f jne 0x111aa2db */
  if (!C.zf) goto L_111aa2db;
  /* 111aa291 mov ecx, dword ptr [0x111d2fe8] */
  ECX = (r32((uint32_t)(0x111d2fe8)));
  /* 111aa297 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa29a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111aa29d push ecx */
  push32((uint32_t)(ECX));
  /* 111aa29e mov edx, dword ptr [0x111d3008] */
  EDX = (r32((uint32_t)(0x111d3008)));
  /* 111aa2a4 push edx */
  push32((uint32_t)(EDX));
  /* 111aa2a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111aa2a7 mov eax, dword ptr [0x111d300c] */
  EAX = (r32((uint32_t)(0x111d300c)));
  /* 111aa2ac push eax */
  push32((uint32_t)(EAX));
  /* 111aa2ad call dword ptr [0x111d433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d433c))), 0x111aa2b3u);
  /* 111aa2b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111aa2b6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa2ba jne 0x111aa2c3 */
  if (!C.zf) goto L_111aa2c3;
  /* 111aa2bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111aa2be jmp 0x111aa38b */
  goto L_111aa38b;
L_111aa2c3:;
  /* 111aa2c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa2c6 mov dword ptr [0x111d3008], ecx */
  w32((uint32_t)(0x111d3008), (ECX));
  /* 111aa2cc mov edx, dword ptr [0x111d2fe8] */
  EDX = (r32((uint32_t)(0x111d2fe8)));
  /* 111aa2d2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa2d5 mov dword ptr [0x111d2fe8], edx */
  w32((uint32_t)(0x111d2fe8), (EDX));
L_111aa2db:;
  /* 111aa2db mov eax, dword ptr [0x111d3004] */
  EAX = (r32((uint32_t)(0x111d3004)));
  /* 111aa2e0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111aa2e3 mov ecx, dword ptr [0x111d3008] */
  ECX = (r32((uint32_t)(0x111d3008)));
  /* 111aa2e9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa2eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111aa2ee push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 111aa2f3 push 8 */
  push32((uint32_t)(0x8u));
  /* 111aa2f5 mov edx, dword ptr [0x111d300c] */
  EDX = (r32((uint32_t)(0x111d300c)));
  /* 111aa2fb push edx */
  push32((uint32_t)(EDX));
  /* 111aa2fc call dword ptr [0x111d4334] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4334))), 0x111aa302u);
  /* 111aa302 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa305 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 111aa308 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa30b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa30f jne 0x111aa315 */
  if (!C.zf) goto L_111aa315;
  /* 111aa311 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111aa313 jmp 0x111aa38b */
  goto L_111aa38b;
L_111aa315:;
  /* 111aa315 push 4 */
  push32((uint32_t)(0x4u));
  /* 111aa317 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 111aa31c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 111aa321 push 0 */
  push32((uint32_t)(0x0u));
  /* 111aa323 call dword ptr [0x111d432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d432c))), 0x111aa329u);
  /* 111aa329 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa32c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 111aa32f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa332 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa336 jne 0x111aa352 */
  if (!C.zf) goto L_111aa352;
  /* 111aa338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa33b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111aa33e push ecx */
  push32((uint32_t)(ECX));
  /* 111aa33f push 0 */
  push32((uint32_t)(0x0u));
  /* 111aa341 mov edx, dword ptr [0x111d300c] */
  EDX = (r32((uint32_t)(0x111d300c)));
  /* 111aa347 push edx */
  push32((uint32_t)(EDX));
  /* 111aa348 call dword ptr [0x111d4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4360))), 0x111aa34eu);
  /* 111aa34e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111aa350 jmp 0x111aa38b */
  goto L_111aa38b;
L_111aa352:;
  /* 111aa352 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa355 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111aa35b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa35e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 111aa365 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa368 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 111aa36f mov eax, dword ptr [0x111d3004] */
  EAX = (r32((uint32_t)(0x111d3004)));
  /* 111aa374 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa377 mov dword ptr [0x111d3004], eax */
  w32((uint32_t)(0x111d3004), (EAX));
  /* 111aa37c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa37f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 111aa382 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 111aa388 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_111aa38b:;
  /* 111aa38b mov esp, ebp */
  ESP = (EBP);
  /* 111aa38d pop ebp */
  EBP = (pop32());
  /* 111aa38e ret  */
  ESPCHK(0x111aa280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a390 @ 0x111aa390 (494 bytes, 149 insns) */
void f_111aa390(void) {
  FTRACE(0x111aa390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111aa390 push ebp */
  push32((uint32_t)(EBP));
  /* 111aa391 mov ebp, esp */
  EBP = (ESP);
  /* 111aa393 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa399 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111aa39c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 111aa39f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa3a2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 111aa3a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111aa3a8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_111aa3af:;
  /* 111aa3af cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa3b3 jl 0x111aa3c8 */
  if ((C.sf!=C.of)) goto L_111aa3c8;
  /* 111aa3b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aa3b8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 111aa3ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111aa3bd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 111aa3c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa3c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 111aa3c6 jmp 0x111aa3af */
  goto L_111aa3af;
L_111aa3c8:;
  /* 111aa3c8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111aa3cb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111aa3d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa3d4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 111aa3db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 111aa3de mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 111aa3e5 jmp 0x111aa3f0 */
  goto L_111aa3f0;
L_111aa3e7:;
  /* 111aa3e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aa3ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa3ed mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_111aa3f0:;
  /* 111aa3f0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa3f4 jge 0x111aa416 */
  if ((C.sf==C.of)) goto L_111aa416;
  /* 111aa3f6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aa3f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aa3fc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 111aa3ff mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111aa402 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa405 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa408 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 111aa40b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa40e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa411 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 111aa414 jmp 0x111aa3e7 */
  goto L_111aa3e7;
L_111aa416:;
  /* 111aa416 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 111aa419 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 111aa41c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa41f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 111aa422 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa424 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111aa427 push 4 */
  push32((uint32_t)(0x4u));
  /* 111aa429 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 111aa42e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 111aa433 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa436 push edx */
  push32((uint32_t)(EDX));
  /* 111aa437 call dword ptr [0x111d432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d432c))), 0x111aa43du);
  /* 111aa43d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111aa43f jne 0x111aa449 */
  if (!C.zf) goto L_111aa449;
  /* 111aa441 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111aa444 jmp 0x111aa57a */
  goto L_111aa57a;
L_111aa449:;
  /* 111aa449 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa44c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa451 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 111aa454 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa457 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111aa45a jmp 0x111aa468 */
  goto L_111aa468;
L_111aa45c:;
  /* 111aa45c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa45f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa465 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111aa468:;
  /* 111aa468 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa46b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa46e ja 0x111aa4cd */
  if ((!C.cf&&!C.zf)) goto L_111aa4cd;
  /* 111aa470 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa473 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 111aa47a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa47d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 111aa487 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa48a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa48d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111aa490 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa493 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 111aa499 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa49c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa4a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa4a5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 111aa4a8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa4ab sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa4b1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa4b4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 111aa4b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa4ba add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa4bf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 111aa4c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111aa4c5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 111aa4cb jmp 0x111aa45c */
  goto L_111aa45c;
L_111aa4cd:;
  /* 111aa4cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aa4d0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa4d6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111aa4d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa4dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa4df mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa4e2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 111aa4e5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa4e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 111aa4eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111aa4ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa4f1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa4f4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 111aa4f7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111aa4fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa4fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa500 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 111aa503 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa506 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 111aa509 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111aa50c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa50f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa512 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 111aa515 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111aa518 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa51b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 111aa523 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 111aa526 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa529 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 111aa534 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa537 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 111aa53b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa53e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 111aa541 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 111aa544 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa547 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 111aa54a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111aa54c jne 0x111aa55d */
  if (!C.zf) goto L_111aa55d;
  /* 111aa54e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa551 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111aa554 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 111aa557 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa55a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_111aa55d:;
  /* 111aa55d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111aa562 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111aa565 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111aa567 not edx */
  EDX = (~(EDX));
  /* 111aa569 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa56c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111aa56f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 111aa571 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa574 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 111aa577 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_111aa57a:;
  /* 111aa57a mov esp, ebp */
  ESP = (EBP);
  /* 111aa57c pop ebp */
  EBP = (pop32());
  /* 111aa57d ret  */
  ESPCHK(0x111aa390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a580 @ 0x111aa580 (1515 bytes, 489 insns) */
void f_111aa580(void) {
  FTRACE(0x111aa580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111aa580 push ebp */
  push32((uint32_t)(EBP));
  /* 111aa581 mov ebp, esp */
  EBP = (ESP);
  /* 111aa583 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa586 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111aa589 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa58c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 111aa58e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 111aa591 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa594 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 111aa597 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 111aa59a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa59d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111aa5a0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa5a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111aa5a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aa5a9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 111aa5ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111aa5af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa5b2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111aa5b8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa5bb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 111aa5c2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111aa5c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111aa5c8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa5cb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111aa5ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa5d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111aa5d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa5d6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 111aa5d9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa5dc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa5df mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 111aa5e2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa5e5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111aa5e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 111aa5ea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111aa5ed cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa5f0 jle 0x111aa8a6 */
  if ((C.zf||C.sf!=C.of)) goto L_111aa8a6;
  /* 111aa5f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa5f9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 111aa5fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111aa5fe jne 0x111aa60b */
  if (!C.zf) goto L_111aa60b;
  /* 111aa600 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 111aa603 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa606 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa609 jle 0x111aa612 */
  if ((C.zf||C.sf!=C.of)) goto L_111aa612;
L_111aa60b:;
  /* 111aa60b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111aa60d jmp 0x111aab67 */
  goto L_111aab67;
L_111aa612:;
  /* 111aa612 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa615 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 111aa618 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa61b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 111aa61e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa622 jbe 0x111aa62b */
  if ((C.cf||C.zf)) goto L_111aa62b;
  /* 111aa624 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_111aa62b:;
  /* 111aa62b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa62e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa631 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 111aa634 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa637 jne 0x111aa70d */
  if (!C.zf) goto L_111aa70d;
  /* 111aa63d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa641 jae 0x111aa6a2 */
  if (!C.cf) goto L_111aa6a2;
  /* 111aa643 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111aa648 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aa64b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111aa64d not edx */
  EDX = (~(EDX));
  /* 111aa64f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa652 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa655 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 111aa659 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111aa65b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa65e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa661 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 111aa665 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa668 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa66b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 111aa66e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111aa671 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa674 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa677 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 111aa67a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa67d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa680 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 111aa684 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111aa686 jne 0x111aa6a0 */
  if (!C.zf) goto L_111aa6a0;
  /* 111aa688 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111aa68d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aa690 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111aa692 not edx */
  EDX = (~(EDX));
  /* 111aa694 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa697 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111aa699 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 111aa69b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa69e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_111aa6a0:;
  /* 111aa6a0 jmp 0x111aa70d */
  goto L_111aa70d;
L_111aa6a2:;
  /* 111aa6a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aa6a5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa6a8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111aa6ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111aa6af not eax */
  EAX = (~(EAX));
  /* 111aa6b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa6b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa6b7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 111aa6be and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111aa6c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa6c3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa6c6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 111aa6cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa6d0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa6d3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 111aa6d6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111aa6d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa6dc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa6df mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 111aa6e2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa6e5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa6e8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 111aa6ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111aa6ee jne 0x111aa70d */
  if (!C.zf) goto L_111aa70d;
  /* 111aa6f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aa6f3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa6f6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111aa6fb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111aa6fd not eax */
  EAX = (~(EAX));
  /* 111aa6ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa702 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111aa705 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 111aa707 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa70a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_111aa70d:;
  /* 111aa70d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa710 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111aa713 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa716 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111aa719 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 111aa71c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa71f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 111aa722 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa725 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111aa728 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 111aa72b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111aa72e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa731 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa734 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111aa737 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa73b jle 0x111aa887 */
  if ((C.zf||C.sf!=C.of)) goto L_111aa887;
  /* 111aa741 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa744 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa747 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 111aa74a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa74d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 111aa750 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa753 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 111aa756 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa75a jbe 0x111aa763 */
  if ((C.cf||C.zf)) goto L_111aa763;
  /* 111aa75c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_111aa763:;
  /* 111aa763 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aa766 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aa769 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 111aa76c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 111aa76f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa772 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa775 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111aa778 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 111aa77b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa77e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa781 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 111aa784 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aa787 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa78a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 111aa78d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa790 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111aa793 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa796 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 111aa799 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa79c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa79f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 111aa7a2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa7a5 jne 0x111aa873 */
  if (!C.zf) goto L_111aa873;
  /* 111aa7ab cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa7af jae 0x111aa80c */
  if (!C.cf) goto L_111aa80c;
  /* 111aa7b1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa7b4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa7b7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 111aa7bb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa7be add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa7c1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 111aa7c4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 111aa7c7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa7ca add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa7cd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 111aa7d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111aa7d2 jne 0x111aa7ea */
  if (!C.zf) goto L_111aa7ea;
  /* 111aa7d4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111aa7d9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aa7dc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111aa7de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa7e1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111aa7e3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 111aa7e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa7e8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_111aa7ea:;
  /* 111aa7ea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111aa7ef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aa7f2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111aa7f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa7f7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa7fa mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 111aa7fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111aa800 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa803 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa806 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 111aa80a jmp 0x111aa873 */
  goto L_111aa873;
L_111aa80c:;
  /* 111aa80c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa80f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa812 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 111aa816 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa819 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa81c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 111aa81f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 111aa822 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa825 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa828 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 111aa82b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111aa82d jne 0x111aa84a */
  if (!C.zf) goto L_111aa84a;
  /* 111aa82f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aa832 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa835 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111aa83a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111aa83c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa83f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111aa842 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 111aa844 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa847 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_111aa84a:;
  /* 111aa84a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aa84d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa850 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111aa855 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111aa857 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa85a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa85d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 111aa864 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111aa866 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa869 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa86c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_111aa873:;
  /* 111aa873 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa876 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa879 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 111aa87b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa87e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa881 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa884 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_111aa887:;
  /* 111aa887 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111aa88a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa88d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa890 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111aa892 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111aa895 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa898 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa89b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa89e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 111aa8a1 jmp 0x111aab62 */
  goto L_111aab62;
L_111aa8a6:;
  /* 111aa8a6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111aa8a9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa8ac jge 0x111aab62 */
  if ((C.sf==C.of)) goto L_111aab62;
  /* 111aa8b2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111aa8b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa8b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa8bb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111aa8bd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111aa8c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa8c3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa8c6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa8c9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 111aa8cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aa8cf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa8d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111aa8d5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111aa8d8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa8db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 111aa8de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111aa8e1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 111aa8e4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa8e7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 111aa8ea cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa8ee jbe 0x111aa8f7 */
  if ((C.cf||C.zf)) goto L_111aa8f7;
  /* 111aa8f0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_111aa8f7:;
  /* 111aa8f7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa8fa and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 111aa8fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111aa8ff jne 0x111aaa40 */
  if (!C.zf) goto L_111aaa40;
  /* 111aa905 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111aa908 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 111aa90b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa90e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 111aa911 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa915 jbe 0x111aa91e */
  if ((C.cf||C.zf)) goto L_111aa91e;
  /* 111aa917 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_111aa91e:;
  /* 111aa91e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa921 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aa924 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 111aa927 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa92a jne 0x111aaa00 */
  if (!C.zf) goto L_111aaa00;
  /* 111aa930 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aa934 jae 0x111aa995 */
  if (!C.cf) goto L_111aa995;
  /* 111aa936 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111aa93b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aa93e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111aa940 not edx */
  EDX = (~(EDX));
  /* 111aa942 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa945 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa948 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 111aa94c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111aa94e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa951 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa954 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 111aa958 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa95b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa95e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 111aa961 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111aa964 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa967 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa96a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 111aa96d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa970 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa973 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 111aa977 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111aa979 jne 0x111aa993 */
  if (!C.zf) goto L_111aa993;
  /* 111aa97b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111aa980 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aa983 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111aa985 not edx */
  EDX = (~(EDX));
  /* 111aa987 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa98a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111aa98c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 111aa98e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa991 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_111aa993:;
  /* 111aa993 jmp 0x111aaa00 */
  goto L_111aaa00;
L_111aa995:;
  /* 111aa995 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aa998 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa99b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111aa9a0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111aa9a2 not eax */
  EAX = (~(EAX));
  /* 111aa9a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa9a7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa9aa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 111aa9b1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111aa9b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aa9b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa9b9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 111aa9c0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa9c3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa9c6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 111aa9c9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111aa9cc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa9cf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa9d2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 111aa9d5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aa9d8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aa9db movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 111aa9df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111aa9e1 jne 0x111aaa00 */
  if (!C.zf) goto L_111aaa00;
  /* 111aa9e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aa9e6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aa9e9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111aa9ee shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111aa9f0 not eax */
  EAX = (~(EAX));
  /* 111aa9f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa9f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111aa9f8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 111aa9fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aa9fd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_111aaa00:;
  /* 111aaa00 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aaa03 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111aaa06 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aaa09 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111aaa0c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 111aaa0f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aaa12 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 111aaa15 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111aaa18 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111aaa1b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 111aaa1e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111aaa21 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aaa24 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 111aaa27 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111aaa2a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 111aaa2d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aaa30 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 111aaa33 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aaa37 jbe 0x111aaa40 */
  if ((C.cf||C.zf)) goto L_111aaa40;
  /* 111aaa39 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_111aaa40:;
  /* 111aaa40 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111aaa43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aaa46 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 111aaa49 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 111aaa4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aaa4f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aaa52 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111aaa55 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 111aaa58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aaa5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aaa5e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 111aaa61 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aaa64 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aaa67 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 111aaa6a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aaa6d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111aaa70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aaa73 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 111aaa76 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aaa79 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aaa7c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 111aaa7f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aaa82 jne 0x111aab4e */
  if (!C.zf) goto L_111aab4e;
  /* 111aaa88 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aaa8c jae 0x111aaae8 */
  if (!C.cf) goto L_111aaae8;
  /* 111aaa8e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aaa91 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aaa94 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 111aaa98 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aaa9b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aaa9e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 111aaaa1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 111aaaa3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aaaa6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aaaa9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 111aaaac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111aaaae jne 0x111aaac6 */
  if (!C.zf) goto L_111aaac6;
  /* 111aaab0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111aaab5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111aaab8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111aaaba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aaabd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111aaabf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 111aaac1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aaac4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_111aaac6:;
  /* 111aaac6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111aaacb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111aaace shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111aaad0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aaad3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aaad6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 111aaada or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111aaadc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aaadf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aaae2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 111aaae6 jmp 0x111aab4e */
  goto L_111aab4e;
L_111aaae8:;
  /* 111aaae8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aaaeb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aaaee movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 111aaaf2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aaaf5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aaaf8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 111aaafb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 111aaafd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aab00 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aab03 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 111aab06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111aab08 jne 0x111aab25 */
  if (!C.zf) goto L_111aab25;
  /* 111aab0a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111aab0d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aab10 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111aab15 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111aab17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aab1a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111aab1d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 111aab1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aab22 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_111aab25:;
  /* 111aab25 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111aab28 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aab2b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111aab30 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111aab32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aab35 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aab38 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 111aab3f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111aab41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aab44 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111aab47 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_111aab4e:;
  /* 111aab4e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aab51 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111aab54 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 111aab56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aab59 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aab5c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111aab5f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_111aab62:;
  /* 111aab62 mov eax, 1 */
  EAX = (0x1u);
L_111aab67:;
  /* 111aab67 mov esp, ebp */
  ESP = (EBP);
  /* 111aab69 pop ebp */
  EBP = (pop32());
  /* 111aab6a ret  */
  ESPCHK(0x111aa580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab70 @ 0x111aab70 (304 bytes, 79 insns) */
void f_111aab70(void) {
  FTRACE(0x111aab70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111aab70 push ebp */
  push32((uint32_t)(EBP));
  /* 111aab71 mov ebp, esp */
  EBP = (ESP);
  /* 111aab73 push ecx */
  push32((uint32_t)(ECX));
  /* 111aab74 cmp dword ptr [0x111d3000], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d3000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aab7b je 0x111aac9c */
  if (C.zf) goto L_111aac9c;
  /* 111aab81 mov eax, dword ptr [0x111d2ff8] */
  EAX = (r32((uint32_t)(0x111d2ff8)));
  /* 111aab86 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 111aab89 mov ecx, dword ptr [0x111d3000] */
  ECX = (r32((uint32_t)(0x111d3000)));
  /* 111aab8f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111aab92 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aab94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111aab97 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 111aab9c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 111aaba1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aaba4 push eax */
  push32((uint32_t)(EAX));
  /* 111aaba5 call dword ptr [0x111d4350] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4350))), 0x111aababu);
  /* 111aabab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111aabb0 mov ecx, dword ptr [0x111d2ff8] */
  ECX = (r32((uint32_t)(0x111d2ff8)));
  /* 111aabb6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111aabb8 mov eax, dword ptr [0x111d3000] */
  EAX = (r32((uint32_t)(0x111d3000)));
  /* 111aabbd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111aabc0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 111aabc2 mov edx, dword ptr [0x111d3000] */
  EDX = (r32((uint32_t)(0x111d3000)));
  /* 111aabc8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 111aabcb mov eax, dword ptr [0x111d3000] */
  EAX = (r32((uint32_t)(0x111d3000)));
  /* 111aabd0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111aabd3 mov edx, dword ptr [0x111d2ff8] */
  EDX = (r32((uint32_t)(0x111d2ff8)));
  /* 111aabd9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 111aabe4 mov eax, dword ptr [0x111d3000] */
  EAX = (r32((uint32_t)(0x111d3000)));
  /* 111aabe9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111aabec mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 111aabef sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111aabf2 mov eax, dword ptr [0x111d3000] */
  EAX = (r32((uint32_t)(0x111d3000)));
  /* 111aabf7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111aabfa mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 111aabfd mov edx, dword ptr [0x111d3000] */
  EDX = (r32((uint32_t)(0x111d3000)));
  /* 111aac03 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111aac06 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 111aac0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111aac0c jne 0x111aac22 */
  if (!C.zf) goto L_111aac22;
  /* 111aac0e mov edx, dword ptr [0x111d3000] */
  EDX = (r32((uint32_t)(0x111d3000)));
  /* 111aac14 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 111aac17 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 111aac19 mov ecx, dword ptr [0x111d3000] */
  ECX = (r32((uint32_t)(0x111d3000)));
  /* 111aac1f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_111aac22:;
  /* 111aac22 mov edx, dword ptr [0x111d3000] */
  EDX = (r32((uint32_t)(0x111d3000)));
  /* 111aac28 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aac2c jne 0x111aac92 */
  if (!C.zf) goto L_111aac92;
  /* 111aac2e cmp dword ptr [0x111d3004], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111d3004))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aac35 jle 0x111aac92 */
  if ((C.zf||C.sf!=C.of)) goto L_111aac92;
  /* 111aac37 mov eax, dword ptr [0x111d3000] */
  EAX = (r32((uint32_t)(0x111d3000)));
  /* 111aac3c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111aac3f push ecx */
  push32((uint32_t)(ECX));
  /* 111aac40 push 0 */
  push32((uint32_t)(0x0u));
  /* 111aac42 mov edx, dword ptr [0x111d300c] */
  EDX = (r32((uint32_t)(0x111d300c)));
  /* 111aac48 push edx */
  push32((uint32_t)(EDX));
  /* 111aac49 call dword ptr [0x111d4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4360))), 0x111aac4fu);
  /* 111aac4f mov eax, dword ptr [0x111d3004] */
  EAX = (r32((uint32_t)(0x111d3004)));
  /* 111aac54 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111aac57 mov ecx, dword ptr [0x111d3008] */
  ECX = (r32((uint32_t)(0x111d3008)));
  /* 111aac5d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aac5f mov edx, dword ptr [0x111d3000] */
  EDX = (r32((uint32_t)(0x111d3000)));
  /* 111aac65 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aac68 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aac6a push ecx */
  push32((uint32_t)(ECX));
  /* 111aac6b mov eax, dword ptr [0x111d3000] */
  EAX = (r32((uint32_t)(0x111d3000)));
  /* 111aac70 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aac73 push eax */
  push32((uint32_t)(EAX));
  /* 111aac74 mov ecx, dword ptr [0x111d3000] */
  ECX = (r32((uint32_t)(0x111d3000)));
  /* 111aac7a push ecx */
  push32((uint32_t)(ECX));
  /* 111aac7b call 0x111ad2a0 */
  push32(0x111aac80u); f_111ad2a0();
  /* 111aac80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aac83 mov edx, dword ptr [0x111d3004] */
  EDX = (r32((uint32_t)(0x111d3004)));
  /* 111aac89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aac8c mov dword ptr [0x111d3004], edx */
  w32((uint32_t)(0x111d3004), (EDX));
L_111aac92:;
  /* 111aac92 mov dword ptr [0x111d3000], 0 */
  w32((uint32_t)(0x111d3000), (0x0u));
L_111aac9c:;
  /* 111aac9c mov esp, ebp */
  ESP = (EBP);
  /* 111aac9e pop ebp */
  EBP = (pop32());
  /* 111aac9f ret  */
  ESPCHK(0x111aab70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aca0 @ 0x111aaca0 (1565 bytes, 343 insns) */
void f_111aaca0(void) {
  FTRACE(0x111aaca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111aaca0 push ebp */
  push32((uint32_t)(EBP));
  /* 111aaca1 mov ebp, esp */
  EBP = (ESP);
  /* 111aaca3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aaca9 mov eax, dword ptr [0x111d3004] */
  EAX = (r32((uint32_t)(0x111d3004)));
  /* 111aacae imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111aacb1 push eax */
  push32((uint32_t)(EAX));
  /* 111aacb2 mov ecx, dword ptr [0x111d3008] */
  ECX = (r32((uint32_t)(0x111d3008)));
  /* 111aacb8 push ecx */
  push32((uint32_t)(ECX));
  /* 111aacb9 call dword ptr [0x111d43dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43dc))), 0x111aacbfu);
  /* 111aacbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111aacc1 je 0x111aaccb */
  if (C.zf) goto L_111aaccb;
  /* 111aacc3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111aacc6 jmp 0x111ab2b9 */
  goto L_111ab2b9;
L_111aaccb:;
  /* 111aaccb mov edx, dword ptr [0x111d3008] */
  EDX = (r32((uint32_t)(0x111d3008)));
  /* 111aacd1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 111aacd7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 111aace1 jmp 0x111aacf2 */
  goto L_111aacf2;
L_111aace3:;
  /* 111aace3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 111aace9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aacec mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_111aacf2:;
  /* 111aacf2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 111aacf8 cmp ecx, dword ptr [0x111d3004] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111d3004))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aacfe jge 0x111ab2b7 */
  if ((C.sf==C.of)) goto L_111ab2b7;
  /* 111aad04 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 111aad0a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111aad0d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 111aad13 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 111aad18 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 111aad1e push ecx */
  push32((uint32_t)(ECX));
  /* 111aad1f call dword ptr [0x111d43dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43dc))), 0x111aad25u);
  /* 111aad25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111aad27 je 0x111aad33 */
  if (C.zf) goto L_111aad33;
  /* 111aad29 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 111aad2e jmp 0x111ab2b9 */
  goto L_111ab2b9;
L_111aad33:;
  /* 111aad33 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 111aad39 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 111aad3c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 111aad42 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 111aad48 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aad4e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 111aad51 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 111aad57 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 111aad5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111aad5d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 111aad67 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 111aad71 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 111aad78 jmp 0x111aad83 */
  goto L_111aad83;
L_111aad7a:;
  /* 111aad7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aad7d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aad80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_111aad83:;
  /* 111aad83 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aad87 jge 0x111ab27b */
  if ((C.sf==C.of)) goto L_111ab27b;
  /* 111aad8d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 111aad97 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 111aada1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 111aadab mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 111aadb5 jmp 0x111aadc6 */
  goto L_111aadc6;
L_111aadb7:;
  /* 111aadb7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 111aadbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aadc0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_111aadc6:;
  /* 111aadc6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aadcd jge 0x111aade2 */
  if ((C.sf==C.of)) goto L_111aade2;
  /* 111aadcf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 111aadd5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 111aade0 jmp 0x111aadb7 */
  goto L_111aadb7;
L_111aade2:;
  /* 111aade2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aade6 jl 0x111ab21d */
  if ((C.sf!=C.of)) goto L_111ab21d;
  /* 111aadec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 111aadf1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 111aadf7 push ecx */
  push32((uint32_t)(ECX));
  /* 111aadf8 call dword ptr [0x111d43dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43dc))), 0x111aadfeu);
  /* 111aadfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111aae00 je 0x111aae0c */
  if (C.zf) goto L_111aae0c;
  /* 111aae02 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 111aae07 jmp 0x111ab2b9 */
  goto L_111ab2b9;
L_111aae0c:;
  /* 111aae0c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 111aae12 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111aae15 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 111aae1f jmp 0x111aae30 */
  goto L_111aae30;
L_111aae21:;
  /* 111aae21 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 111aae27 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aae2a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_111aae30:;
  /* 111aae30 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aae37 jge 0x111aafb4 */
  if ((C.sf==C.of)) goto L_111aafb4;
  /* 111aae3d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aae40 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aae43 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 111aae49 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 111aae4f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aae55 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 111aae5b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 111aae61 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aae65 jne 0x111aae72 */
  if (!C.zf) goto L_111aae72;
  /* 111aae67 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 111aae6d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aae70 je 0x111aae7c */
  if (C.zf) goto L_111aae7c;
L_111aae72:;
  /* 111aae72 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 111aae77 jmp 0x111ab2b9 */
  goto L_111ab2b9;
L_111aae7c:;
  /* 111aae7c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 111aae82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111aae84 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 111aae8a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 111aae90 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 111aae96 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 111aae9c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 111aae9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111aaea1 je 0x111aaed9 */
  if (C.zf) goto L_111aaed9;
  /* 111aaea3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 111aaea9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aaeac mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 111aaeb2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aaebc jle 0x111aaec8 */
  if ((C.zf||C.sf!=C.of)) goto L_111aaec8;
  /* 111aaebe mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 111aaec3 jmp 0x111ab2b9 */
  goto L_111ab2b9;
L_111aaec8:;
  /* 111aaec8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 111aaece add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aaed1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 111aaed7 jmp 0x111aaf1b */
  goto L_111aaf1b;
L_111aaed9:;
  /* 111aaed9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 111aaedf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 111aaee2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aaee5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 111aaeeb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aaef2 jle 0x111aaefe */
  if ((C.zf||C.sf!=C.of)) goto L_111aaefe;
  /* 111aaef4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_111aaefe:;
  /* 111aaefe mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 111aaf04 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 111aaf0b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aaf0e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 111aaf14 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_111aaf1b:;
  /* 111aaf1b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aaf22 jl 0x111aaf3d */
  if ((C.sf!=C.of)) goto L_111aaf3d;
  /* 111aaf24 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 111aaf2a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 111aaf2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111aaf2f jne 0x111aaf3d */
  if (!C.zf) goto L_111aaf3d;
  /* 111aaf31 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aaf3b jle 0x111aaf47 */
  if ((C.zf||C.sf!=C.of)) goto L_111aaf47;
L_111aaf3d:;
  /* 111aaf3d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 111aaf42 jmp 0x111ab2b9 */
  goto L_111ab2b9;
L_111aaf47:;
  /* 111aaf47 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 111aaf4d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aaf53 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 111aaf56 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aaf5c je 0x111aaf68 */
  if (C.zf) goto L_111aaf68;
  /* 111aaf5e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 111aaf63 jmp 0x111ab2b9 */
  goto L_111ab2b9;
L_111aaf68:;
  /* 111aaf68 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 111aaf6e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aaf74 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 111aaf7a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 111aaf80 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aaf86 jb 0x111aae7c */
  if (C.cf) goto L_111aae7c;
  /* 111aaf8c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 111aaf92 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aaf98 je 0x111aafa4 */
  if (C.zf) goto L_111aafa4;
  /* 111aaf9a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 111aaf9f jmp 0x111ab2b9 */
  goto L_111ab2b9;
L_111aafa4:;
  /* 111aafa4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aafa7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aafac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111aafaf jmp 0x111aae21 */
  goto L_111aae21;
L_111aafb4:;
  /* 111aafb4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aafb7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111aafb9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aafbf je 0x111aafcb */
  if (C.zf) goto L_111aafcb;
  /* 111aafc1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 111aafc6 jmp 0x111ab2b9 */
  goto L_111ab2b9;
L_111aafcb:;
  /* 111aafcb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111aafce mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 111aafd4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 111aafdb jmp 0x111aafe6 */
  goto L_111aafe6;
L_111aafdd:;
  /* 111aafdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111aafe0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aafe3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_111aafe6:;
  /* 111aafe6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aafea jge 0x111ab21d */
  if ((C.sf==C.of)) goto L_111ab21d;
  /* 111aaff0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 111aaffa mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 111ab000 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_111ab006:;
  /* 111ab006 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 111ab00c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111ab00f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 111ab015 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 111ab01b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab021 je 0x111ab14a */
  if (C.zf) goto L_111ab14a;
  /* 111ab027 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111ab02a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 111ab030 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab037 je 0x111ab14a */
  if (C.zf) goto L_111ab14a;
  /* 111ab03d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 111ab043 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab049 jb 0x111ab05e */
  if (C.cf) goto L_111ab05e;
  /* 111ab04b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 111ab051 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab056 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab05c jb 0x111ab068 */
  if (C.cf) goto L_111ab068;
L_111ab05e:;
  /* 111ab05e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 111ab063 jmp 0x111ab2b9 */
  goto L_111ab2b9;
L_111ab068:;
  /* 111ab068 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 111ab06e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 111ab074 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 111ab07a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 111ab080 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab083 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 111ab086 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111ab089 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab08e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_111ab094:;
  /* 111ab094 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111ab097 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab09d je 0x111ab0be */
  if (C.zf) goto L_111ab0be;
  /* 111ab09f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111ab0a2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab0a8 jne 0x111ab0ac */
  if (!C.zf) goto L_111ab0ac;
  /* 111ab0aa jmp 0x111ab0be */
  goto L_111ab0be;
L_111ab0ac:;
  /* 111ab0ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111ab0af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111ab0b1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 111ab0b4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111ab0b7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab0b9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 111ab0bc jmp 0x111ab094 */
  goto L_111ab094;
L_111ab0be:;
  /* 111ab0be mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111ab0c1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab0c7 jne 0x111ab0d3 */
  if (!C.zf) goto L_111ab0d3;
  /* 111ab0c9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 111ab0ce jmp 0x111ab2b9 */
  goto L_111ab2b9;
L_111ab0d3:;
  /* 111ab0d3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 111ab0d9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111ab0db sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 111ab0de sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ab0e1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 111ab0e7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab0ee jle 0x111ab0fa */
  if ((C.zf||C.sf!=C.of)) goto L_111ab0fa;
  /* 111ab0f0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_111ab0fa:;
  /* 111ab0fa mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 111ab100 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab103 je 0x111ab10f */
  if (C.zf) goto L_111ab10f;
  /* 111ab105 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 111ab10a jmp 0x111ab2b9 */
  goto L_111ab2b9;
L_111ab10f:;
  /* 111ab10f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 111ab115 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111ab118 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab11e je 0x111ab12a */
  if (C.zf) goto L_111ab12a;
  /* 111ab120 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 111ab125 jmp 0x111ab2b9 */
  goto L_111ab2b9;
L_111ab12a:;
  /* 111ab12a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 111ab130 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 111ab136 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 111ab13c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab13f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 111ab145 jmp 0x111ab006 */
  goto L_111ab006;
L_111ab14a:;
  /* 111ab14a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab151 je 0x111ab1c1 */
  if (C.zf) goto L_111ab1c1;
  /* 111ab153 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab157 jge 0x111ab18b */
  if ((C.sf==C.of)) goto L_111ab18b;
  /* 111ab159 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111ab15e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111ab161 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111ab163 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 111ab169 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111ab16b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 111ab171 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111ab176 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111ab179 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111ab17b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 111ab181 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111ab183 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 111ab189 jmp 0x111ab1c1 */
  goto L_111ab1c1;
L_111ab18b:;
  /* 111ab18b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111ab18e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ab191 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111ab196 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111ab198 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 111ab19e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111ab1a0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 111ab1a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111ab1a9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ab1ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111ab1b1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111ab1b3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 111ab1b9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111ab1bb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_111ab1c1:;
  /* 111ab1c1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 111ab1c7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111ab1ca cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab1d0 jne 0x111ab1e4 */
  if (!C.zf) goto L_111ab1e4;
  /* 111ab1d2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111ab1d5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 111ab1db cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab1e2 je 0x111ab1ee */
  if (C.zf) goto L_111ab1ee;
L_111ab1e4:;
  /* 111ab1e4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 111ab1e9 jmp 0x111ab2b9 */
  goto L_111ab2b9;
L_111ab1ee:;
  /* 111ab1ee mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 111ab1f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 111ab1f7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab1fd je 0x111ab209 */
  if (C.zf) goto L_111ab209;
  /* 111ab1ff mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 111ab204 jmp 0x111ab2b9 */
  goto L_111ab2b9;
L_111ab209:;
  /* 111ab209 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 111ab20f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab212 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 111ab218 jmp 0x111aafdd */
  goto L_111aafdd;
L_111ab21d:;
  /* 111ab21d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ab220 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 111ab226 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 111ab22c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab230 jne 0x111ab24a */
  if (!C.zf) goto L_111ab24a;
  /* 111ab232 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ab235 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 111ab23b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 111ab241 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab248 je 0x111ab251 */
  if (C.zf) goto L_111ab251;
L_111ab24a:;
  /* 111ab24a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 111ab24f jmp 0x111ab2b9 */
  goto L_111ab2b9;
L_111ab251:;
  /* 111ab251 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 111ab257 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab25d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 111ab263 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111ab266 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab26b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111ab26e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ab271 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 111ab273 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111ab276 jmp 0x111aad7a */
  goto L_111aad7a;
L_111ab27b:;
  /* 111ab27b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 111ab281 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 111ab287 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab289 jne 0x111ab29c */
  if (!C.zf) goto L_111ab29c;
  /* 111ab28b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 111ab291 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 111ab297 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab29a je 0x111ab2a3 */
  if (C.zf) goto L_111ab2a3;
L_111ab29c:;
  /* 111ab29c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 111ab2a1 jmp 0x111ab2b9 */
  goto L_111ab2b9;
L_111ab2a3:;
  /* 111ab2a3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 111ab2a9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab2ac mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 111ab2b2 jmp 0x111aace3 */
  goto L_111aace3;
L_111ab2b7:;
  /* 111ab2b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111ab2b9:;
  /* 111ab2b9 mov esp, ebp */
  ESP = (EBP);
  /* 111ab2bb pop ebp */
  EBP = (pop32());
  /* 111ab2bc ret  */
  ESPCHK(0x111aaca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2c0 @ 0x111ab2c0 (250 bytes, 92 insns) */
void f_111ab2c0(void) {
  FTRACE(0x111ab2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ab2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111ab2c1 mov ebp, esp */
  EBP = (ESP);
  /* 111ab2c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ab2c6 push ebx */
  push32((uint32_t)(EBX));
  /* 111ab2c7 push esi */
  push32((uint32_t)(ESI));
  /* 111ab2c8 push edi */
  push32((uint32_t)(EDI));
  /* 111ab2c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 111ab2cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 111ab2cf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 111ab2d2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_111ab2d5:;
  /* 111ab2d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab2d9 jne 0x111ab2f9 */
  if (!C.zf) goto L_111ab2f9;
  /* 111ab2db push 0x111cd0f0 */
  push32((uint32_t)(0x111cd0f0u));
  /* 111ab2e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ab2e2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 111ab2e4 push 0x111cd0e4 */
  push32((uint32_t)(0x111cd0e4u));
  /* 111ab2e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 111ab2eb call 0x111a4470 */
  push32(0x111ab2f0u); f_111a4470();
  /* 111ab2f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab2f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab2f6 jne 0x111ab2f9 */
  if (!C.zf) goto L_111ab2f9;
  /* 111ab2f8 int3  */
  x86_unimpl("int3 @ 0x111ab2f8");
L_111ab2f9:;
  /* 111ab2f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111ab2fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111ab2fd jne 0x111ab2d5 */
  if (!C.zf) goto L_111ab2d5;
L_111ab2ff:;
  /* 111ab2ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab303 jne 0x111ab323 */
  if (!C.zf) goto L_111ab323;
  /* 111ab305 push 0x111cd0d4 */
  push32((uint32_t)(0x111cd0d4u));
  /* 111ab30a push 0 */
  push32((uint32_t)(0x0u));
  /* 111ab30c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 111ab30e push 0x111cd0e4 */
  push32((uint32_t)(0x111cd0e4u));
  /* 111ab313 push 2 */
  push32((uint32_t)(0x2u));
  /* 111ab315 call 0x111a4470 */
  push32(0x111ab31au); f_111a4470();
  /* 111ab31a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab31d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab320 jne 0x111ab323 */
  if (!C.zf) goto L_111ab323;
  /* 111ab322 int3  */
  x86_unimpl("int3 @ 0x111ab322");
L_111ab323:;
  /* 111ab323 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ab325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ab327 jne 0x111ab2ff */
  if (!C.zf) goto L_111ab2ff;
  /* 111ab329 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab32c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 111ab333 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ab339 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 111ab33c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab33f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ab342 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 111ab344 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab347 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 111ab34e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111ab351 push ecx */
  push32((uint32_t)(ECX));
  /* 111ab352 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ab355 push edx */
  push32((uint32_t)(EDX));
  /* 111ab356 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab359 push eax */
  push32((uint32_t)(EAX));
  /* 111ab35a call 0x111ac340 */
  push32(0x111ab35fu); f_111ac340();
  /* 111ab35f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab362 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 111ab365 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab368 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111ab36b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ab36e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab371 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 111ab374 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab377 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab37b jl 0x111ab39f */
  if ((C.sf!=C.of)) goto L_111ab39f;
  /* 111ab37d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab380 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111ab382 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 111ab385 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111ab387 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111ab38d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 111ab390 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab393 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111ab395 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab398 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab39b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111ab39d jmp 0x111ab3b0 */
  goto L_111ab3b0;
L_111ab39f:;
  /* 111ab39f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab3a2 push edx */
  push32((uint32_t)(EDX));
  /* 111ab3a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ab3a5 call 0x111ac0c0 */
  push32(0x111ab3aau); f_111ac0c0();
  /* 111ab3aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab3ad mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_111ab3b0:;
  /* 111ab3b0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111ab3b3 pop edi */
  EDI = (pop32());
  /* 111ab3b4 pop esi */
  ESI = (pop32());
  /* 111ab3b5 pop ebx */
  EBX = (pop32());
  /* 111ab3b6 mov esp, ebp */
  ESP = (EBP);
  /* 111ab3b8 pop ebp */
  EBP = (pop32());
  /* 111ab3b9 ret  */
  ESPCHK(0x111ab2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3c0 @ 0x111ab3c0 (183 bytes, 58 insns) */
void f_111ab3c0(void) {
  FTRACE(0x111ab3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ab3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111ab3c1 mov ebp, esp */
  EBP = (ESP);
  /* 111ab3c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ab3c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ab3c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab3cc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab3d1 ja 0x111ab3ea */
  if ((!C.cf&&!C.zf)) goto L_111ab3ea;
  /* 111ab3d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ab3d6 mov edx, dword ptr [0x111cfc98] */
  EDX = (r32((uint32_t)(0x111cfc98)));
  /* 111ab3dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ab3de mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 111ab3e2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 111ab3e5 jmp 0x111ab473 */
  goto L_111ab473;
L_111ab3ea:;
  /* 111ab3ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ab3ed sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 111ab3f0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111ab3f6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111ab3fc mov edx, dword ptr [0x111cfc98] */
  EDX = (r32((uint32_t)(0x111cfc98)));
  /* 111ab402 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ab404 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 111ab408 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 111ab40d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ab40f je 0x111ab433 */
  if (C.zf) goto L_111ab433;
  /* 111ab411 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ab414 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 111ab417 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111ab41d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 111ab420 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 111ab423 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 111ab426 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 111ab42a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 111ab431 jmp 0x111ab444 */
  goto L_111ab444;
L_111ab433:;
  /* 111ab433 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 111ab436 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 111ab439 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 111ab43d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_111ab444:;
  /* 111ab444 push 1 */
  push32((uint32_t)(0x1u));
  /* 111ab446 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ab448 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ab44a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 111ab44d push ecx */
  push32((uint32_t)(ECX));
  /* 111ab44e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ab451 push edx */
  push32((uint32_t)(EDX));
  /* 111ab452 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 111ab455 push eax */
  push32((uint32_t)(EAX));
  /* 111ab456 push 1 */
  push32((uint32_t)(0x1u));
  /* 111ab458 call 0x111ad5e0 */
  push32(0x111ab45du); f_111ad5e0();
  /* 111ab45d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab460 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ab462 jne 0x111ab468 */
  if (!C.zf) goto L_111ab468;
  /* 111ab464 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ab466 jmp 0x111ab473 */
  goto L_111ab473;
L_111ab468:;
  /* 111ab468 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ab46b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111ab470 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_111ab473:;
  /* 111ab473 mov esp, ebp */
  ESP = (EBP);
  /* 111ab475 pop ebp */
  EBP = (pop32());
  /* 111ab476 ret  */
  ESPCHK(0x111ab3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b480 @ 0x111ab480 (836 bytes, 238 insns) */
void f_111ab480(void) {
  FTRACE(0x111ab480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ab480 push ebp */
  push32((uint32_t)(EBP));
  /* 111ab481 mov ebp, esp */
  EBP = (ESP);
  /* 111ab483 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ab486 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 111ab488 call 0x111a8db0 */
  push32(0x111ab48du); f_111a8db0();
  /* 111ab48d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ab493 push eax */
  push32((uint32_t)(EAX));
  /* 111ab494 call 0x111ab7d0 */
  push32(0x111ab499u); f_111ab7d0();
  /* 111ab499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab49c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111ab49f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ab4a2 cmp ecx, dword ptr [0x111d2d44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111d2d44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab4a8 jne 0x111ab4bb */
  if (!C.zf) goto L_111ab4bb;
  /* 111ab4aa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 111ab4ac call 0x111a8e50 */
  push32(0x111ab4b1u); f_111a8e50();
  /* 111ab4b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab4b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ab4b6 jmp 0x111ab7c0 */
  goto L_111ab7c0;
L_111ab4bb:;
  /* 111ab4bb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab4bf jne 0x111ab4dc */
  if (!C.zf) goto L_111ab4dc;
  /* 111ab4c1 call 0x111ab8b0 */
  push32(0x111ab4c6u); f_111ab8b0();
  /* 111ab4c6 call 0x111ab930 */
  push32(0x111ab4cbu); f_111ab930();
  /* 111ab4cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 111ab4cd call 0x111a8e50 */
  push32(0x111ab4d2u); f_111a8e50();
  /* 111ab4d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab4d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ab4d7 jmp 0x111ab7c0 */
  goto L_111ab7c0;
L_111ab4dc:;
  /* 111ab4dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111ab4e3 jmp 0x111ab4ee */
  goto L_111ab4ee;
L_111ab4e5:;
  /* 111ab4e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ab4e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab4eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111ab4ee:;
  /* 111ab4ee cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab4f2 jae 0x111ab63f */
  if (!C.cf) goto L_111ab63f;
  /* 111ab4f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ab4fb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111ab4fe mov ecx, dword ptr [eax + 0x111cfeb8] */
  ECX = (r32((uint32_t)(EAX + 0x111cfeb8)));
  /* 111ab504 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab507 jne 0x111ab63a */
  if (!C.zf) goto L_111ab63a;
  /* 111ab50d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 111ab514 jmp 0x111ab51f */
  goto L_111ab51f;
L_111ab516:;
  /* 111ab516 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab519 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab51c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_111ab51f:;
  /* 111ab51f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab526 jae 0x111ab534 */
  if (!C.cf) goto L_111ab534;
  /* 111ab528 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab52b mov byte ptr [eax + 0x111d2ee0], 0 */
  w8((uint32_t)(EAX + 0x111d2ee0), (0x0u));
  /* 111ab532 jmp 0x111ab516 */
  goto L_111ab516;
L_111ab534:;
  /* 111ab534 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 111ab53b jmp 0x111ab546 */
  goto L_111ab546;
L_111ab53d:;
  /* 111ab53d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ab540 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab543 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_111ab546:;
  /* 111ab546 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab54a jae 0x111ab5c7 */
  if (!C.cf) goto L_111ab5c7;
  /* 111ab54c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ab54f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111ab552 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ab555 lea ecx, [edx + eax*8 + 0x111cfec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x111cfec8));
  /* 111ab55c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111ab55f jmp 0x111ab56a */
  goto L_111ab56a;
L_111ab561:;
  /* 111ab561 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ab564 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab567 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_111ab56a:;
  /* 111ab56a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ab56d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111ab56f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111ab571 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111ab573 je 0x111ab5c2 */
  if (C.zf) goto L_111ab5c2;
  /* 111ab575 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ab578 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ab57a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 111ab57d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ab57f je 0x111ab5c2 */
  if (C.zf) goto L_111ab5c2;
  /* 111ab581 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ab584 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111ab586 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111ab588 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 111ab58b jmp 0x111ab596 */
  goto L_111ab596;
L_111ab58d:;
  /* 111ab58d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab590 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab593 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_111ab596:;
  /* 111ab596 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ab599 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111ab59b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 111ab59e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab5a1 ja 0x111ab5c0 */
  if ((!C.cf&&!C.zf)) goto L_111ab5c0;
  /* 111ab5a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab5a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ab5a9 mov dl, byte ptr [eax + 0x111d2ee1] */
  DL = (r8((uint32_t)(EAX + 0x111d2ee1)));
  /* 111ab5af or dl, byte ptr [ecx + 0x111cfeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x111cfeb0))); DL = (_r); fl_logic(_r,8); }
  /* 111ab5b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab5b8 mov byte ptr [eax + 0x111d2ee1], dl */
  w8((uint32_t)(EAX + 0x111d2ee1), (DL));
  /* 111ab5be jmp 0x111ab58d */
  goto L_111ab58d;
L_111ab5c0:;
  /* 111ab5c0 jmp 0x111ab561 */
  goto L_111ab561;
L_111ab5c2:;
  /* 111ab5c2 jmp 0x111ab53d */
  goto L_111ab53d;
L_111ab5c7:;
  /* 111ab5c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ab5ca mov dword ptr [0x111d2d44], ecx */
  w32((uint32_t)(0x111d2d44), (ECX));
  /* 111ab5d0 mov dword ptr [0x111d2dcc], 1 */
  w32((uint32_t)(0x111d2dcc), (0x1u));
  /* 111ab5da mov edx, dword ptr [0x111d2d44] */
  EDX = (r32((uint32_t)(0x111d2d44)));
  /* 111ab5e0 push edx */
  push32((uint32_t)(EDX));
  /* 111ab5e1 call 0x111ab830 */
  push32(0x111ab5e6u); f_111ab830();
  /* 111ab5e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab5e9 mov dword ptr [0x111d2fe4], eax */
  w32((uint32_t)(0x111d2fe4), (EAX));
  /* 111ab5ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 111ab5f5 jmp 0x111ab600 */
  goto L_111ab600;
L_111ab5f7:;
  /* 111ab5f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ab5fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab5fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_111ab600:;
  /* 111ab600 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab604 jae 0x111ab624 */
  if (!C.cf) goto L_111ab624;
  /* 111ab606 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ab609 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111ab60c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ab60f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ab612 mov cx, word ptr [ecx + eax*2 + 0x111cfebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x111cfebc)));
  /* 111ab61a mov word ptr [edx*2 + 0x111d2dc0], cx */
  w16((uint32_t)(EDX*2 + 0x111d2dc0), (CX));
  /* 111ab622 jmp 0x111ab5f7 */
  goto L_111ab5f7;
L_111ab624:;
  /* 111ab624 call 0x111ab930 */
  push32(0x111ab629u); f_111ab930();
  /* 111ab629 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 111ab62b call 0x111a8e50 */
  push32(0x111ab630u); f_111a8e50();
  /* 111ab630 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab633 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ab635 jmp 0x111ab7c0 */
  goto L_111ab7c0;
L_111ab63a:;
  /* 111ab63a jmp 0x111ab4e5 */
  goto L_111ab4e5;
L_111ab63f:;
  /* 111ab63f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 111ab642 push edx */
  push32((uint32_t)(EDX));
  /* 111ab643 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ab646 push eax */
  push32((uint32_t)(EAX));
  /* 111ab647 call dword ptr [0x111d4328] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4328))), 0x111ab64du);
  /* 111ab64d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab650 jne 0x111ab792 */
  if (!C.zf) goto L_111ab792;
  /* 111ab656 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 111ab65d jmp 0x111ab668 */
  goto L_111ab668;
L_111ab65f:;
  /* 111ab65f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab662 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab665 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_111ab668:;
  /* 111ab668 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab66f jae 0x111ab67d */
  if (!C.cf) goto L_111ab67d;
  /* 111ab671 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab674 mov byte ptr [edx + 0x111d2ee0], 0 */
  w8((uint32_t)(EDX + 0x111d2ee0), (0x0u));
  /* 111ab67b jmp 0x111ab65f */
  goto L_111ab65f;
L_111ab67d:;
  /* 111ab67d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ab680 mov dword ptr [0x111d2d44], eax */
  w32((uint32_t)(0x111d2d44), (EAX));
  /* 111ab685 mov dword ptr [0x111d2fe4], 0 */
  w32((uint32_t)(0x111d2fe4), (0x0u));
  /* 111ab68f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab693 jbe 0x111ab74e */
  if ((C.cf||C.zf)) goto L_111ab74e;
  /* 111ab699 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 111ab69c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 111ab69f jmp 0x111ab6aa */
  goto L_111ab6aa;
L_111ab6a1:;
  /* 111ab6a1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 111ab6a4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab6a7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_111ab6aa:;
  /* 111ab6aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111ab6ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111ab6af mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111ab6b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111ab6b3 je 0x111ab6fc */
  if (C.zf) goto L_111ab6fc;
  /* 111ab6b5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 111ab6b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ab6ba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 111ab6bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ab6bf je 0x111ab6fc */
  if (C.zf) goto L_111ab6fc;
  /* 111ab6c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111ab6c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111ab6c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111ab6c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 111ab6cb jmp 0x111ab6d6 */
  goto L_111ab6d6;
L_111ab6cd:;
  /* 111ab6cd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab6d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab6d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_111ab6d6:;
  /* 111ab6d6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111ab6d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111ab6db mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 111ab6de cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab6e1 ja 0x111ab6fa */
  if ((!C.cf&&!C.zf)) goto L_111ab6fa;
  /* 111ab6e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab6e6 mov cl, byte ptr [eax + 0x111d2ee1] */
  CL = (r8((uint32_t)(EAX + 0x111d2ee1)));
  /* 111ab6ec or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 111ab6ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab6f2 mov byte ptr [edx + 0x111d2ee1], cl */
  w8((uint32_t)(EDX + 0x111d2ee1), (CL));
  /* 111ab6f8 jmp 0x111ab6cd */
  goto L_111ab6cd;
L_111ab6fa:;
  /* 111ab6fa jmp 0x111ab6a1 */
  goto L_111ab6a1;
L_111ab6fc:;
  /* 111ab6fc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 111ab703 jmp 0x111ab70e */
  goto L_111ab70e;
L_111ab705:;
  /* 111ab705 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab708 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab70b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_111ab70e:;
  /* 111ab70e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab715 jae 0x111ab72e */
  if (!C.cf) goto L_111ab72e;
  /* 111ab717 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab71a mov dl, byte ptr [ecx + 0x111d2ee1] */
  DL = (r8((uint32_t)(ECX + 0x111d2ee1)));
  /* 111ab720 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 111ab723 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ab726 mov byte ptr [eax + 0x111d2ee1], dl */
  w8((uint32_t)(EAX + 0x111d2ee1), (DL));
  /* 111ab72c jmp 0x111ab705 */
  goto L_111ab705;
L_111ab72e:;
  /* 111ab72e mov ecx, dword ptr [0x111d2d44] */
  ECX = (r32((uint32_t)(0x111d2d44)));
  /* 111ab734 push ecx */
  push32((uint32_t)(ECX));
  /* 111ab735 call 0x111ab830 */
  push32(0x111ab73au); f_111ab830();
  /* 111ab73a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab73d mov dword ptr [0x111d2fe4], eax */
  w32((uint32_t)(0x111d2fe4), (EAX));
  /* 111ab742 mov dword ptr [0x111d2dcc], 1 */
  w32((uint32_t)(0x111d2dcc), (0x1u));
  /* 111ab74c jmp 0x111ab758 */
  goto L_111ab758;
L_111ab74e:;
  /* 111ab74e mov dword ptr [0x111d2dcc], 0 */
  w32((uint32_t)(0x111d2dcc), (0x0u));
L_111ab758:;
  /* 111ab758 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 111ab75f jmp 0x111ab76a */
  goto L_111ab76a;
L_111ab761:;
  /* 111ab761 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ab764 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab767 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_111ab76a:;
  /* 111ab76a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab76e jae 0x111ab77f */
  if (!C.cf) goto L_111ab77f;
  /* 111ab770 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ab773 mov word ptr [eax*2 + 0x111d2dc0], 0 */
  w16((uint32_t)(EAX*2 + 0x111d2dc0), (0x0u));
  /* 111ab77d jmp 0x111ab761 */
  goto L_111ab761;
L_111ab77f:;
  /* 111ab77f call 0x111ab930 */
  push32(0x111ab784u); f_111ab930();
  /* 111ab784 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 111ab786 call 0x111a8e50 */
  push32(0x111ab78bu); f_111a8e50();
  /* 111ab78b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab78e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ab790 jmp 0x111ab7c0 */
  goto L_111ab7c0;
L_111ab792:;
  /* 111ab792 cmp dword ptr [0x111d1850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab799 je 0x111ab7b3 */
  if (C.zf) goto L_111ab7b3;
  /* 111ab79b call 0x111ab8b0 */
  push32(0x111ab7a0u); f_111ab8b0();
  /* 111ab7a0 call 0x111ab930 */
  push32(0x111ab7a5u); f_111ab930();
  /* 111ab7a5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 111ab7a7 call 0x111a8e50 */
  push32(0x111ab7acu); f_111a8e50();
  /* 111ab7ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab7af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ab7b1 jmp 0x111ab7c0 */
  goto L_111ab7c0;
L_111ab7b3:;
  /* 111ab7b3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 111ab7b5 call 0x111a8e50 */
  push32(0x111ab7bau); f_111a8e50();
  /* 111ab7ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab7bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_111ab7c0:;
  /* 111ab7c0 mov esp, ebp */
  ESP = (EBP);
  /* 111ab7c2 pop ebp */
  EBP = (pop32());
  /* 111ab7c3 ret  */
  ESPCHK(0x111ab480u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x111ab7d0 (89 bytes, 21 insns) */
void f_111ab7d0(void) {
  FTRACE(0x111ab7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ab7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 111ab7d1 mov ebp, esp */
  EBP = (ESP);
  /* 111ab7d3 mov dword ptr [0x111d1850], 0 */
  w32((uint32_t)(0x111d1850), (0x0u));
  /* 111ab7dd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab7e1 jne 0x111ab7f5 */
  if (!C.zf) goto L_111ab7f5;
  /* 111ab7e3 mov dword ptr [0x111d1850], 1 */
  w32((uint32_t)(0x111d1850), (0x1u));
  /* 111ab7ed call dword ptr [0x111d4320] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4320))), 0x111ab7f3u);
  /* 111ab7f3 jmp 0x111ab827 */
  goto L_111ab827;
L_111ab7f5:;
  /* 111ab7f5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab7f9 jne 0x111ab80d */
  if (!C.zf) goto L_111ab80d;
  /* 111ab7fb mov dword ptr [0x111d1850], 1 */
  w32((uint32_t)(0x111d1850), (0x1u));
  /* 111ab805 call dword ptr [0x111d4330] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4330))), 0x111ab80bu);
  /* 111ab80b jmp 0x111ab827 */
  goto L_111ab827;
L_111ab80d:;
  /* 111ab80d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab811 jne 0x111ab824 */
  if (!C.zf) goto L_111ab824;
  /* 111ab813 mov dword ptr [0x111d1850], 1 */
  w32((uint32_t)(0x111d1850), (0x1u));
  /* 111ab81d mov eax, dword ptr [0x111d1870] */
  EAX = (r32((uint32_t)(0x111d1870)));
  /* 111ab822 jmp 0x111ab827 */
  goto L_111ab827;
L_111ab824:;
  /* 111ab824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_111ab827:;
  /* 111ab827 pop ebp */
  EBP = (pop32());
  /* 111ab828 ret  */
  ESPCHK(0x111ab7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b830 @ 0x111ab830 (80 bytes, 26 insns) [1 switch table(s)] */
void f_111ab830(void) {
  FTRACE(0x111ab830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ab830 push ebp */
  push32((uint32_t)(EBP));
  /* 111ab831 mov ebp, esp */
  EBP = (ESP);
  /* 111ab833 push ecx */
  push32((uint32_t)(ECX));
  /* 111ab834 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ab837 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111ab83a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ab83d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ab843 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111ab846 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab84a ja 0x111ab87a */
  if ((!C.cf&&!C.zf)) goto L_111ab87a;
  /* 111ab84c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ab84f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111ab851 mov dl, byte ptr [eax + 0x111ab894] */
  DL = (r8((uint32_t)(EAX + 0x111ab894)));
  /* 111ab857 jmp dword ptr [edx*4 + 0x111ab880] */
  switch (EDX) {
    case 0: goto L_111ab85e;
    case 1: goto L_111ab865;
    case 2: goto L_111ab86c;
    case 3: goto L_111ab873;
    case 4: goto L_111ab87a;
    default: x86_unimpl("switch@0x111ab857 out of table"); return;
  }
L_111ab85e:;
  /* 111ab85e mov eax, 0x411 */
  EAX = (0x411u);
  /* 111ab863 jmp 0x111ab87c */
  goto L_111ab87c;
L_111ab865:;
  /* 111ab865 mov eax, 0x804 */
  EAX = (0x804u);
  /* 111ab86a jmp 0x111ab87c */
  goto L_111ab87c;
L_111ab86c:;
  /* 111ab86c mov eax, 0x412 */
  EAX = (0x412u);
  /* 111ab871 jmp 0x111ab87c */
  goto L_111ab87c;
L_111ab873:;
  /* 111ab873 mov eax, 0x404 */
  EAX = (0x404u);
  /* 111ab878 jmp 0x111ab87c */
  goto L_111ab87c;
L_111ab87a:;
  /* 111ab87a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111ab87c:;
  /* 111ab87c mov esp, ebp */
  ESP = (EBP);
  /* 111ab87e pop ebp */
  EBP = (pop32());
  /* 111ab87f ret  */
  ESPCHK(0x111ab830u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x111ab8b0 (116 bytes, 29 insns) */
void f_111ab8b0(void) {
  FTRACE(0x111ab8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ab8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111ab8b1 mov ebp, esp */
  EBP = (ESP);
  /* 111ab8b3 push ecx */
  push32((uint32_t)(ECX));
  /* 111ab8b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111ab8bb jmp 0x111ab8c6 */
  goto L_111ab8c6;
L_111ab8bd:;
  /* 111ab8bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ab8c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab8c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111ab8c6:;
  /* 111ab8c6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab8cd jge 0x111ab8db */
  if ((C.sf==C.of)) goto L_111ab8db;
  /* 111ab8cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ab8d2 mov byte ptr [ecx + 0x111d2ee0], 0 */
  w8((uint32_t)(ECX + 0x111d2ee0), (0x0u));
  /* 111ab8d9 jmp 0x111ab8bd */
  goto L_111ab8bd;
L_111ab8db:;
  /* 111ab8db mov dword ptr [0x111d2d44], 0 */
  w32((uint32_t)(0x111d2d44), (0x0u));
  /* 111ab8e5 mov dword ptr [0x111d2dcc], 0 */
  w32((uint32_t)(0x111d2dcc), (0x0u));
  /* 111ab8ef mov dword ptr [0x111d2fe4], 0 */
  w32((uint32_t)(0x111d2fe4), (0x0u));
  /* 111ab8f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111ab900 jmp 0x111ab90b */
  goto L_111ab90b;
L_111ab902:;
  /* 111ab902 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ab905 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab908 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111ab90b:;
  /* 111ab90b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab90f jge 0x111ab920 */
  if ((C.sf==C.of)) goto L_111ab920;
  /* 111ab911 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ab914 mov word ptr [eax*2 + 0x111d2dc0], 0 */
  w16((uint32_t)(EAX*2 + 0x111d2dc0), (0x0u));
  /* 111ab91e jmp 0x111ab902 */
  goto L_111ab902;
L_111ab920:;
  /* 111ab920 mov esp, ebp */
  ESP = (EBP);
  /* 111ab922 pop ebp */
  EBP = (pop32());
  /* 111ab923 ret  */
  ESPCHK(0x111ab8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b930 @ 0x111ab930 (770 bytes, 175 insns) */
void f_111ab930(void) {
  FTRACE(0x111ab930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ab930 push ebp */
  push32((uint32_t)(EBP));
  /* 111ab931 mov ebp, esp */
  EBP = (ESP);
  /* 111ab933 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ab939 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 111ab93f push eax */
  push32((uint32_t)(EAX));
  /* 111ab940 mov ecx, dword ptr [0x111d2d44] */
  ECX = (r32((uint32_t)(0x111d2d44)));
  /* 111ab946 push ecx */
  push32((uint32_t)(ECX));
  /* 111ab947 call dword ptr [0x111d4328] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4328))), 0x111ab94du);
  /* 111ab94d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab950 jne 0x111abb69 */
  if (!C.zf) goto L_111abb69;
  /* 111ab956 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 111ab960 jmp 0x111ab971 */
  goto L_111ab971;
L_111ab962:;
  /* 111ab962 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111ab968 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab96b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_111ab971:;
  /* 111ab971 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab97b jae 0x111ab992 */
  if (!C.cf) goto L_111ab992;
  /* 111ab97d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111ab983 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 111ab989 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 111ab990 jmp 0x111ab962 */
  goto L_111ab962;
L_111ab992:;
  /* 111ab992 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 111ab999 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 111ab99f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111ab9a2 jmp 0x111ab9ad */
  goto L_111ab9ad;
L_111ab9a4:;
  /* 111ab9a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ab9a7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab9aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111ab9ad:;
  /* 111ab9ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ab9b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111ab9b2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111ab9b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111ab9b6 je 0x111ab9f8 */
  if (C.zf) goto L_111ab9f8;
  /* 111ab9b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ab9bb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111ab9bd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111ab9bf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 111ab9c5 jmp 0x111ab9d6 */
  goto L_111ab9d6;
L_111ab9c7:;
  /* 111ab9c7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111ab9cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ab9d0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_111ab9d6:;
  /* 111ab9d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ab9d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111ab9db mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 111ab9de cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ab9e4 ja 0x111ab9f6 */
  if ((!C.cf&&!C.zf)) goto L_111ab9f6;
  /* 111ab9e6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111ab9ec mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 111ab9f4 jmp 0x111ab9c7 */
  goto L_111ab9c7;
L_111ab9f6:;
  /* 111ab9f6 jmp 0x111ab9a4 */
  goto L_111ab9a4;
L_111ab9f8:;
  /* 111ab9f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ab9fa mov eax, dword ptr [0x111d2fe4] */
  EAX = (r32((uint32_t)(0x111d2fe4)));
  /* 111ab9ff push eax */
  push32((uint32_t)(EAX));
  /* 111aba00 mov ecx, dword ptr [0x111d2d44] */
  ECX = (r32((uint32_t)(0x111d2d44)));
  /* 111aba06 push ecx */
  push32((uint32_t)(ECX));
  /* 111aba07 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 111aba0d push edx */
  push32((uint32_t)(EDX));
  /* 111aba0e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 111aba13 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 111aba19 push eax */
  push32((uint32_t)(EAX));
  /* 111aba1a push 1 */
  push32((uint32_t)(0x1u));
  /* 111aba1c call 0x111ad5e0 */
  push32(0x111aba21u); f_111ad5e0();
  /* 111aba21 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aba24 push 0 */
  push32((uint32_t)(0x0u));
  /* 111aba26 mov ecx, dword ptr [0x111d2d44] */
  ECX = (r32((uint32_t)(0x111d2d44)));
  /* 111aba2c push ecx */
  push32((uint32_t)(ECX));
  /* 111aba2d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 111aba32 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 111aba38 push edx */
  push32((uint32_t)(EDX));
  /* 111aba39 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 111aba3e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 111aba44 push eax */
  push32((uint32_t)(EAX));
  /* 111aba45 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 111aba4a mov ecx, dword ptr [0x111d2fe4] */
  ECX = (r32((uint32_t)(0x111d2fe4)));
  /* 111aba50 push ecx */
  push32((uint32_t)(ECX));
  /* 111aba51 call 0x111ad7a0 */
  push32(0x111aba56u); f_111ad7a0();
  /* 111aba56 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aba59 push 0 */
  push32((uint32_t)(0x0u));
  /* 111aba5b mov edx, dword ptr [0x111d2d44] */
  EDX = (r32((uint32_t)(0x111d2d44)));
  /* 111aba61 push edx */
  push32((uint32_t)(EDX));
  /* 111aba62 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 111aba67 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 111aba6d push eax */
  push32((uint32_t)(EAX));
  /* 111aba6e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 111aba73 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 111aba79 push ecx */
  push32((uint32_t)(ECX));
  /* 111aba7a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 111aba7f mov edx, dword ptr [0x111d2fe4] */
  EDX = (r32((uint32_t)(0x111d2fe4)));
  /* 111aba85 push edx */
  push32((uint32_t)(EDX));
  /* 111aba86 call 0x111ad7a0 */
  push32(0x111aba8bu); f_111ad7a0();
  /* 111aba8b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aba8e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 111aba98 jmp 0x111abaa9 */
  goto L_111abaa9;
L_111aba9a:;
  /* 111aba9a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abaa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111abaa3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_111abaa9:;
  /* 111abaa9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abab3 jae 0x111abb64 */
  if (!C.cf) goto L_111abb64;
  /* 111abab9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111ababf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111abac1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 111abac9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 111abacc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111abace je 0x111abb06 */
  if (C.zf) goto L_111abb06;
  /* 111abad0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abad6 mov cl, byte ptr [eax + 0x111d2ee1] */
  CL = (r8((uint32_t)(EAX + 0x111d2ee1)));
  /* 111abadc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 111abadf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abae5 mov byte ptr [edx + 0x111d2ee1], cl */
  w8((uint32_t)(EDX + 0x111d2ee1), (CL));
  /* 111abaeb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abaf1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abaf7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 111abafe mov byte ptr [eax + 0x111d2de0], dl */
  w8((uint32_t)(EAX + 0x111d2de0), (DL));
  /* 111abb04 jmp 0x111abb5f */
  goto L_111abb5f;
L_111abb06:;
  /* 111abb06 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abb0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111abb0e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 111abb16 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 111abb19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111abb1b je 0x111abb52 */
  if (C.zf) goto L_111abb52;
  /* 111abb1d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abb23 mov al, byte ptr [edx + 0x111d2ee1] */
  AL = (r8((uint32_t)(EDX + 0x111d2ee1)));
  /* 111abb29 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 111abb2b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abb31 mov byte ptr [ecx + 0x111d2ee1], al */
  w8((uint32_t)(ECX + 0x111d2ee1), (AL));
  /* 111abb37 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abb3d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abb43 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 111abb4a mov byte ptr [edx + 0x111d2de0], cl */
  w8((uint32_t)(EDX + 0x111d2de0), (CL));
  /* 111abb50 jmp 0x111abb5f */
  goto L_111abb5f;
L_111abb52:;
  /* 111abb52 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abb58 mov byte ptr [edx + 0x111d2de0], 0 */
  w8((uint32_t)(EDX + 0x111d2de0), (0x0u));
L_111abb5f:;
  /* 111abb5f jmp 0x111aba9a */
  goto L_111aba9a;
L_111abb64:;
  /* 111abb64 jmp 0x111abc2e */
  goto L_111abc2e;
L_111abb69:;
  /* 111abb69 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 111abb73 jmp 0x111abb84 */
  goto L_111abb84;
L_111abb75:;
  /* 111abb75 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abb7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111abb7e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_111abb84:;
  /* 111abb84 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abb8e jae 0x111abc2e */
  if (!C.cf) goto L_111abc2e;
  /* 111abb94 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abb9b jb 0x111abbd8 */
  if (C.cf) goto L_111abbd8;
  /* 111abb9d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abba4 ja 0x111abbd8 */
  if ((!C.cf&&!C.zf)) goto L_111abbd8;
  /* 111abba6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abbac mov dl, byte ptr [ecx + 0x111d2ee1] */
  DL = (r8((uint32_t)(ECX + 0x111d2ee1)));
  /* 111abbb2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 111abbb5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abbbb mov byte ptr [eax + 0x111d2ee1], dl */
  w8((uint32_t)(EAX + 0x111d2ee1), (DL));
  /* 111abbc1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abbc7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111abbca mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abbd0 mov byte ptr [edx + 0x111d2de0], cl */
  w8((uint32_t)(EDX + 0x111d2de0), (CL));
  /* 111abbd6 jmp 0x111abc29 */
  goto L_111abc29;
L_111abbd8:;
  /* 111abbd8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abbdf jb 0x111abc1c */
  if (C.cf) goto L_111abc1c;
  /* 111abbe1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abbe8 ja 0x111abc1c */
  if ((!C.cf&&!C.zf)) goto L_111abc1c;
  /* 111abbea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abbf0 mov cl, byte ptr [eax + 0x111d2ee1] */
  CL = (r8((uint32_t)(EAX + 0x111d2ee1)));
  /* 111abbf6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 111abbf9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abbff mov byte ptr [edx + 0x111d2ee1], cl */
  w8((uint32_t)(EDX + 0x111d2ee1), (CL));
  /* 111abc05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abc0b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111abc0e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abc14 mov byte ptr [ecx + 0x111d2de0], al */
  w8((uint32_t)(ECX + 0x111d2de0), (AL));
  /* 111abc1a jmp 0x111abc29 */
  goto L_111abc29;
L_111abc1c:;
  /* 111abc1c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 111abc22 mov byte ptr [edx + 0x111d2de0], 0 */
  w8((uint32_t)(EDX + 0x111d2de0), (0x0u));
L_111abc29:;
  /* 111abc29 jmp 0x111abb75 */
  goto L_111abb75;
L_111abc2e:;
  /* 111abc2e mov esp, ebp */
  ESP = (EBP);
  /* 111abc30 pop ebp */
  EBP = (pop32());
  /* 111abc31 ret  */
  ESPCHK(0x111ab930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc40 @ 0x111abc40 (23 bytes, 9 insns) */
void f_111abc40(void) {
  FTRACE(0x111abc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111abc40 push ebp */
  push32((uint32_t)(EBP));
  /* 111abc41 mov ebp, esp */
  EBP = (ESP);
  /* 111abc43 cmp dword ptr [0x111d2dcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d2dcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abc4a je 0x111abc53 */
  if (C.zf) goto L_111abc53;
  /* 111abc4c mov eax, dword ptr [0x111d2d44] */
  EAX = (r32((uint32_t)(0x111d2d44)));
  /* 111abc51 jmp 0x111abc55 */
  goto L_111abc55;
L_111abc53:;
  /* 111abc53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111abc55:;
  /* 111abc55 pop ebp */
  EBP = (pop32());
  /* 111abc56 ret  */
  ESPCHK(0x111abc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc60 @ 0x111abc60 (34 bytes, 10 insns) */
void f_111abc60(void) {
  FTRACE(0x111abc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111abc60 push ebp */
  push32((uint32_t)(EBP));
  /* 111abc61 mov ebp, esp */
  EBP = (ESP);
  /* 111abc63 cmp dword ptr [0x111d3190], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d3190))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abc6a jne 0x111abc80 */
  if (!C.zf) goto L_111abc80;
  /* 111abc6c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 111abc6e call 0x111ab480 */
  push32(0x111abc73u); f_111ab480();
  /* 111abc73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111abc76 mov dword ptr [0x111d3190], 1 */
  w32((uint32_t)(0x111d3190), (0x1u));
L_111abc80:;
  /* 111abc80 pop ebp */
  EBP = (pop32());
  /* 111abc81 ret  */
  ESPCHK(0x111abc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc90 @ 0x111abc90 (664 bytes, 264 insns) [15 switch table(s)] */
void f_111abc90(void) {
  FTRACE(0x111abc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111abc90 push ebp */
  push32((uint32_t)(EBP));
  /* 111abc91 mov ebp, esp */
  EBP = (ESP);
  /* 111abc93 push edi */
  push32((uint32_t)(EDI));
  /* 111abc94 push esi */
  push32((uint32_t)(ESI));
  /* 111abc95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 111abc98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111abc9b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 111abc9e mov eax, ecx */
  EAX = (ECX);
  /* 111abca0 mov edx, ecx */
  EDX = (ECX);
  /* 111abca2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111abca4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abca6 jbe 0x111abcb0 */
  if ((C.cf||C.zf)) goto L_111abcb0;
  /* 111abca8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abcaa jb 0x111abe28 */
  if (C.cf) goto L_111abe28;
L_111abcb0:;
  /* 111abcb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 111abcb6 jne 0x111abccc */
  if (!C.zf) goto L_111abccc;
  /* 111abcb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111abcbb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 111abcbe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abcc1 jb 0x111abcec */
  if (C.cf) goto L_111abcec;
  /* 111abcc3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111abcc5 jmp dword ptr [edx*4 + 0x111abdd8] */
  switch (EDX) {
    case 0: goto L_111abde8;
    case 1: goto L_111abdf0;
    case 2: goto L_111abdfc;
    case 3: goto L_111abe10;
    default: x86_unimpl("switch@0x111abcc5 out of table"); return;
  }
L_111abccc:;
  /* 111abccc mov eax, edi */
  EAX = (EDI);
  /* 111abcce mov edx, 3 */
  EDX = (0x3u);
  /* 111abcd3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111abcd6 jb 0x111abce4 */
  if (C.cf) goto L_111abce4;
  /* 111abcd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 111abcdb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111abcdd jmp dword ptr [eax*4 + 0x111abcf0] */
  switch (EAX) {
    case 1: goto L_111abd00;
    case 2: goto L_111abd2c;
    case 3: goto L_111abd50;
    default: x86_unimpl("switch@0x111abcdd out of table"); return;
  }
L_111abce4:;
  /* 111abce4 jmp dword ptr [ecx*4 + 0x111abde8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x111abde8)))); return;
  /* 111abceb nop  */
  /* nop */
L_111abcec:;
  /* 111abcec jmp dword ptr [ecx*4 + 0x111abd6c] */
  switch (ECX) {
    case 0: goto L_111abdcf;
    case 1: goto L_111abdbc;
    case 2: goto L_111abdb4;
    case 3: goto L_111abdac;
    case 4: goto L_111abda4;
    case 5: goto L_111abd9c;
    case 6: goto L_111abd94;
    case 7: goto L_111abd8c;
    default: x86_unimpl("switch@0x111abcec out of table"); return;
  }
  /* 111abcf3 nop  */
  /* nop */
L_111abd00:;
  /* 111abd00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111abd02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111abd04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111abd06 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111abd09 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111abd0c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111abd0f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111abd12 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111abd15 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111abd18 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111abd1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abd1e jb 0x111abcec */
  if (C.cf) goto L_111abcec;
  /* 111abd20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111abd22 jmp dword ptr [edx*4 + 0x111abdd8] */
  switch (EDX) {
    case 0: goto L_111abde8;
    case 1: goto L_111abdf0;
    case 2: goto L_111abdfc;
    case 3: goto L_111abe10;
    default: x86_unimpl("switch@0x111abd22 out of table"); return;
  }
  /* 111abd29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111abd2c:;
  /* 111abd2c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111abd2e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111abd30 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111abd32 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111abd35 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111abd38 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111abd3b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111abd3e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111abd41 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abd44 jb 0x111abcec */
  if (C.cf) goto L_111abcec;
  /* 111abd46 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111abd48 jmp dword ptr [edx*4 + 0x111abdd8] */
  switch (EDX) {
    case 0: goto L_111abde8;
    case 1: goto L_111abdf0;
    case 2: goto L_111abdfc;
    case 3: goto L_111abe10;
    default: x86_unimpl("switch@0x111abd48 out of table"); return;
  }
  /* 111abd4f nop  */
  /* nop */
L_111abd50:;
  /* 111abd50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111abd52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111abd54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111abd56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111abd57 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111abd5a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111abd5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abd5e jb 0x111abcec */
  if (C.cf) goto L_111abcec;
  /* 111abd60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111abd62 jmp dword ptr [edx*4 + 0x111abdd8] */
  switch (EDX) {
    case 0: goto L_111abde8;
    case 1: goto L_111abdf0;
    case 2: goto L_111abdfc;
    case 3: goto L_111abe10;
    default: x86_unimpl("switch@0x111abd62 out of table"); return;
  }
  /* 111abd69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111abd8c:;
  /* 111abd8c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 111abd90 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_111abd94:;
  /* 111abd94 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 111abd98 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_111abd9c:;
  /* 111abd9c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 111abda0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_111abda4:;
  /* 111abda4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 111abda8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_111abdac:;
  /* 111abdac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 111abdb0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_111abdb4:;
  /* 111abdb4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 111abdb8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_111abdbc:;
  /* 111abdbc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 111abdc0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 111abdc4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 111abdcb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111abdcd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_111abdcf:;
  /* 111abdcf jmp dword ptr [edx*4 + 0x111abdd8] */
  switch (EDX) {
    case 0: goto L_111abde8;
    case 1: goto L_111abdf0;
    case 2: goto L_111abdfc;
    case 3: goto L_111abe10;
    default: x86_unimpl("switch@0x111abdcf out of table"); return;
  }
  /* 111abdd6 mov edi, edi */
  EDI = (EDI);
L_111abde8:;
  /* 111abde8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111abdeb pop esi */
  ESI = (pop32());
  /* 111abdec pop edi */
  EDI = (pop32());
  /* 111abded leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111abdee ret  */
  ESPCHK(0x111abc90u, _esp0);
  ESP += 4; return;
  /* 111abdef nop  */
  /* nop */
L_111abdf0:;
  /* 111abdf0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111abdf2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111abdf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111abdf7 pop esi */
  ESI = (pop32());
  /* 111abdf8 pop edi */
  EDI = (pop32());
  /* 111abdf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111abdfa ret  */
  ESPCHK(0x111abc90u, _esp0);
  ESP += 4; return;
  /* 111abdfb nop  */
  /* nop */
L_111abdfc:;
  /* 111abdfc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111abdfe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111abe00 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111abe03 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111abe06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111abe09 pop esi */
  ESI = (pop32());
  /* 111abe0a pop edi */
  EDI = (pop32());
  /* 111abe0b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111abe0c ret  */
  ESPCHK(0x111abc90u, _esp0);
  ESP += 4; return;
  /* 111abe0d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111abe10:;
  /* 111abe10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111abe12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111abe14 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111abe17 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111abe1a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111abe1d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111abe20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111abe23 pop esi */
  ESI = (pop32());
  /* 111abe24 pop edi */
  EDI = (pop32());
  /* 111abe25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111abe26 ret  */
  ESPCHK(0x111abc90u, _esp0);
  ESP += 4; return;
  /* 111abe27 nop  */
  /* nop */
L_111abe28:;
  /* 111abe28 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 111abe2c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 111abe30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 111abe36 jne 0x111abe5c */
  if (!C.zf) goto L_111abe5c;
  /* 111abe38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111abe3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 111abe3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abe41 jb 0x111abe50 */
  if (C.cf) goto L_111abe50;
  /* 111abe43 std  */
  C.df=1;
  /* 111abe44 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111abe46 cld  */
  C.df=0;
  /* 111abe47 jmp dword ptr [edx*4 + 0x111abf70] */
  switch (EDX) {
    case 0: goto L_111abf80;
    case 1: goto L_111abf88;
    case 2: goto L_111abf98;
    case 3: goto L_111abfac;
    default: x86_unimpl("switch@0x111abe47 out of table"); return;
  }
  /* 111abe4e mov edi, edi */
  EDI = (EDI);
L_111abe50:;
  /* 111abe50 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111abe52 jmp dword ptr [ecx*4 + 0x111abf20] */
  switch (ECX) {
    case 0: goto L_111abf67;
    default: x86_unimpl("switch@0x111abe52 out of table"); return;
  }
  /* 111abe59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111abe5c:;
  /* 111abe5c mov eax, edi */
  EAX = (EDI);
  /* 111abe5e mov edx, 3 */
  EDX = (0x3u);
  /* 111abe63 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abe66 jb 0x111abe74 */
  if (C.cf) goto L_111abe74;
  /* 111abe68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 111abe6b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111abe6d jmp dword ptr [eax*4 + 0x111abe78] */
  switch (EAX) {
    case 1: goto L_111abe88;
    case 2: goto L_111abea8;
    case 3: goto L_111abed0;
    default: x86_unimpl("switch@0x111abe6d out of table"); return;
  }
L_111abe74:;
  /* 111abe74 jmp dword ptr [ecx*4 + 0x111abf70] */
  switch (ECX) {
    case 0: goto L_111abf80;
    case 1: goto L_111abf88;
    case 2: goto L_111abf98;
    case 3: goto L_111abfac;
    default: x86_unimpl("switch@0x111abe74 out of table"); return;
  }
  /* 111abe7b nop  */
  /* nop */
L_111abe88:;
  /* 111abe88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111abe8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111abe8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111abe90 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 111abe91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111abe94 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 111abe95 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abe98 jb 0x111abe50 */
  if (C.cf) goto L_111abe50;
  /* 111abe9a std  */
  C.df=1;
  /* 111abe9b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111abe9d cld  */
  C.df=0;
  /* 111abe9e jmp dword ptr [edx*4 + 0x111abf70] */
  switch (EDX) {
    case 0: goto L_111abf80;
    case 1: goto L_111abf88;
    case 2: goto L_111abf98;
    case 3: goto L_111abfac;
    default: x86_unimpl("switch@0x111abe9e out of table"); return;
  }
  /* 111abea5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111abea8:;
  /* 111abea8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111abeab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111abead mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111abeb0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111abeb3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111abeb6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111abeb9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111abebc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111abebf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abec2 jb 0x111abe50 */
  if (C.cf) goto L_111abe50;
  /* 111abec4 std  */
  C.df=1;
  /* 111abec5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111abec7 cld  */
  C.df=0;
  /* 111abec8 jmp dword ptr [edx*4 + 0x111abf70] */
  switch (EDX) {
    case 0: goto L_111abf80;
    case 1: goto L_111abf88;
    case 2: goto L_111abf98;
    case 3: goto L_111abfac;
    default: x86_unimpl("switch@0x111abec8 out of table"); return;
  }
  /* 111abecf nop  */
  /* nop */
L_111abed0:;
  /* 111abed0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111abed3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111abed5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111abed8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111abedb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111abede mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111abee1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111abee4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111abee7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111abeea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111abeed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111abef0 jb 0x111abe50 */
  if (C.cf) goto L_111abe50;
  /* 111abef6 std  */
  C.df=1;
  /* 111abef7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111abef9 cld  */
  C.df=0;
  /* 111abefa jmp dword ptr [edx*4 + 0x111abf70] */
  switch (EDX) {
    case 0: goto L_111abf80;
    case 1: goto L_111abf88;
    case 2: goto L_111abf98;
    case 3: goto L_111abfac;
    default: x86_unimpl("switch@0x111abefa out of table"); return;
  }
  /* 111abf01 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 111abf04 and al, 0xbf */
  { uint32_t _r=(AL)&(0xbfu); AL = (_r); fl_logic(_r,8); }
  /* 111abf06 sbb dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111abf08 sub al, 0xbf */
  { uint32_t _a=(AL),_b=(0xbfu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111abf0a sbb dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111abf0c xor al, 0xbf */
  { uint32_t _r=(AL)^(0xbfu); AL = (_r); fl_logic(_r,8); }
  /* 111abf0e sbb dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111abf10 cmp al, 0xbf */
  { uint32_t _a=(AL),_b=(0xbfu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111abf12 sbb dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111abf14 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 111abf15 mov edi, 0xbf4c111a */
  EDI = (0xbf4c111au);
  /* 111abf1a sbb dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111abf1c push esp */
  push32((uint32_t)(ESP));
  /* 111abf1e sbb dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111abf24 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 111abf28 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 111abf2c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 111abf30 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 111abf34 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 111abf38 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 111abf3c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 111abf40 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 111abf44 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 111abf48 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 111abf4c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 111abf50 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 111abf54 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 111abf58 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 111abf5c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 111abf63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111abf65 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_111abf67:;
  /* 111abf67 jmp dword ptr [edx*4 + 0x111abf70] */
  switch (EDX) {
    case 0: goto L_111abf80;
    case 1: goto L_111abf88;
    case 2: goto L_111abf98;
    case 3: goto L_111abfac;
    default: x86_unimpl("switch@0x111abf67 out of table"); return;
  }
  /* 111abf6e mov edi, edi */
  EDI = (EDI);
L_111abf80:;
  /* 111abf80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111abf83 pop esi */
  ESI = (pop32());
  /* 111abf84 pop edi */
  EDI = (pop32());
  /* 111abf85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111abf86 ret  */
  ESPCHK(0x111abc90u, _esp0);
  ESP += 4; return;
  /* 111abf87 nop  */
  /* nop */
L_111abf88:;
  /* 111abf88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111abf8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111abf8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111abf91 pop esi */
  ESI = (pop32());
  /* 111abf92 pop edi */
  EDI = (pop32());
  /* 111abf93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111abf94 ret  */
  ESPCHK(0x111abc90u, _esp0);
  ESP += 4; return;
  /* 111abf95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111abf98:;
  /* 111abf98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111abf9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111abf9e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111abfa1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111abfa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111abfa7 pop esi */
  ESI = (pop32());
  /* 111abfa8 pop edi */
  EDI = (pop32());
  /* 111abfa9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111abfaa ret  */
  ESPCHK(0x111abc90u, _esp0);
  ESP += 4; return;
  /* 111abfab nop  */
  /* nop */
L_111abfac:;
  /* 111abfac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111abfaf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111abfb2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111abfb5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111abfb8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111abfbb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111abfbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111abfc1 pop esi */
  ESI = (pop32());
  /* 111abfc2 pop edi */
  EDI = (pop32());
  /* 111abfc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111abfc4 ret  */
  ESPCHK(0x111abc90u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x111abfd0 (104 bytes, 43 insns) */
void f_111abfd0(void) {
  FTRACE(0x111abfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111abfd0 push ebx */
  push32((uint32_t)(EBX));
  /* 111abfd1 push esi */
  push32((uint32_t)(ESI));
  /* 111abfd2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 111abfd6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111abfd8 jne 0x111abff2 */
  if (!C.zf) goto L_111abff2;
  /* 111abfda mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 111abfde mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 111abfe2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111abfe4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111abfe6 mov ebx, eax */
  EBX = (EAX);
  /* 111abfe8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 111abfec div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111abfee mov edx, ebx */
  EDX = (EBX);
  /* 111abff0 jmp 0x111ac033 */
  goto L_111ac033;
L_111abff2:;
  /* 111abff2 mov ecx, eax */
  ECX = (EAX);
  /* 111abff4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 111abff8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 111abffc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_111ac000:;
  /* 111ac000 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 111ac002 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 111ac004 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 111ac006 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 111ac008 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111ac00a jne 0x111ac000 */
  if (!C.zf) goto L_111ac000;
  /* 111ac00c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111ac00e mov esi, eax */
  ESI = (EAX);
  /* 111ac010 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 111ac014 mov ecx, eax */
  ECX = (EAX);
  /* 111ac016 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 111ac01a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 111ac01c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac01e jb 0x111ac02e */
  if (C.cf) goto L_111ac02e;
  /* 111ac020 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac024 ja 0x111ac02e */
  if ((!C.cf&&!C.zf)) goto L_111ac02e;
  /* 111ac026 jb 0x111ac02f */
  if (C.cf) goto L_111ac02f;
  /* 111ac028 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac02c jbe 0x111ac02f */
  if ((C.cf||C.zf)) goto L_111ac02f;
L_111ac02e:;
  /* 111ac02e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_111ac02f:;
  /* 111ac02f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111ac031 mov eax, esi */
  EAX = (ESI);
L_111ac033:;
  /* 111ac033 pop esi */
  ESI = (pop32());
  /* 111ac034 pop ebx */
  EBX = (pop32());
  /* 111ac035 ret 0x10 */
  ESPCHK(0x111abfd0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x111ac040 (117 bytes, 44 insns) */
void f_111ac040(void) {
  FTRACE(0x111ac040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ac040 push ebx */
  push32((uint32_t)(EBX));
  /* 111ac041 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 111ac045 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ac047 jne 0x111ac061 */
  if (!C.zf) goto L_111ac061;
  /* 111ac049 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 111ac04d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 111ac051 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111ac053 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111ac055 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111ac059 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111ac05b mov eax, edx */
  EAX = (EDX);
  /* 111ac05d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111ac05f jmp 0x111ac0b1 */
  goto L_111ac0b1;
L_111ac061:;
  /* 111ac061 mov ecx, eax */
  ECX = (EAX);
  /* 111ac063 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 111ac067 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 111ac06b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_111ac06f:;
  /* 111ac06f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 111ac071 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 111ac073 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 111ac075 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 111ac077 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111ac079 jne 0x111ac06f */
  if (!C.zf) goto L_111ac06f;
  /* 111ac07b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111ac07d mov ecx, eax */
  ECX = (EAX);
  /* 111ac07f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 111ac083 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 111ac084 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 111ac088 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac08a jb 0x111ac09a */
  if (C.cf) goto L_111ac09a;
  /* 111ac08c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac090 ja 0x111ac09a */
  if ((!C.cf&&!C.zf)) goto L_111ac09a;
  /* 111ac092 jb 0x111ac0a2 */
  if (C.cf) goto L_111ac0a2;
  /* 111ac094 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac098 jbe 0x111ac0a2 */
  if ((C.cf||C.zf)) goto L_111ac0a2;
L_111ac09a:;
  /* 111ac09a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ac09e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_111ac0a2:;
  /* 111ac0a2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ac0a6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ac0aa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 111ac0ac neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111ac0ae sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_111ac0b1:;
  /* 111ac0b1 pop ebx */
  EBX = (pop32());
  /* 111ac0b2 ret 0x10 */
  ESPCHK(0x111ac040u, _esp0);
  ESP += 20; return;
}

/* FUN_1000c0c0 @ 0x111ac0c0 (628 bytes, 214 insns) */
void f_111ac0c0(void) {
  FTRACE(0x111ac0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ac0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111ac0c1 mov ebp, esp */
  EBP = (ESP);
  /* 111ac0c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ac0c6 push ebx */
  push32((uint32_t)(EBX));
  /* 111ac0c7 push esi */
  push32((uint32_t)(ESI));
  /* 111ac0c8 push edi */
  push32((uint32_t)(EDI));
L_111ac0c9:;
  /* 111ac0c9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac0cd jne 0x111ac0ed */
  if (!C.zf) goto L_111ac0ed;
  /* 111ac0cf push 0x111cd19c */
  push32((uint32_t)(0x111cd19cu));
  /* 111ac0d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ac0d6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 111ac0d8 push 0x111cd190 */
  push32((uint32_t)(0x111cd190u));
  /* 111ac0dd push 2 */
  push32((uint32_t)(0x2u));
  /* 111ac0df call 0x111a4470 */
  push32(0x111ac0e4u); f_111a4470();
  /* 111ac0e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac0e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac0ea jne 0x111ac0ed */
  if (!C.zf) goto L_111ac0ed;
  /* 111ac0ec int3  */
  x86_unimpl("int3 @ 0x111ac0ec");
L_111ac0ed:;
  /* 111ac0ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ac0ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ac0f1 jne 0x111ac0c9 */
  if (!C.zf) goto L_111ac0c9;
  /* 111ac0f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ac0f6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111ac0f9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac0fc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111ac0ff mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111ac102 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac105 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111ac108 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 111ac10e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111ac110 je 0x111ac11f */
  if (C.zf) goto L_111ac11f;
  /* 111ac112 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac115 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 111ac118 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 111ac11b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111ac11d je 0x111ac135 */
  if (C.zf) goto L_111ac135;
L_111ac11f:;
  /* 111ac11f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac122 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 111ac125 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 111ac127 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac12a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 111ac12d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111ac130 jmp 0x111ac32d */
  goto L_111ac32d;
L_111ac135:;
  /* 111ac135 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac138 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 111ac13b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 111ac13e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ac140 je 0x111ac18c */
  if (C.zf) goto L_111ac18c;
  /* 111ac142 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac145 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 111ac14c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac14f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 111ac152 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 111ac155 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ac157 je 0x111ac175 */
  if (C.zf) goto L_111ac175;
  /* 111ac159 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac15c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac15f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 111ac162 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111ac164 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac167 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111ac16a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 111ac16d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac170 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 111ac173 jmp 0x111ac18c */
  goto L_111ac18c;
L_111ac175:;
  /* 111ac175 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac178 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111ac17b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 111ac17e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac181 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 111ac184 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111ac187 jmp 0x111ac32d */
  goto L_111ac32d;
L_111ac18c:;
  /* 111ac18c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac18f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111ac192 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 111ac195 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac198 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 111ac19b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac19e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111ac1a1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 111ac1a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac1a7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 111ac1aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac1ad mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 111ac1b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111ac1bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac1be mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 111ac1c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac1c4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 111ac1c7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 111ac1cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111ac1cf jne 0x111ac1ff */
  if (!C.zf) goto L_111ac1ff;
  /* 111ac1d1 cmp dword ptr [ebp - 8], 0x111d0140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x111d0140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac1d8 je 0x111ac1e3 */
  if (C.zf) goto L_111ac1e3;
  /* 111ac1da cmp dword ptr [ebp - 8], 0x111d0160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x111d0160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac1e1 jne 0x111ac1f3 */
  if (!C.zf) goto L_111ac1f3;
L_111ac1e3:;
  /* 111ac1e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111ac1e6 push edx */
  push32((uint32_t)(EDX));
  /* 111ac1e7 call 0x111ae030 */
  push32(0x111ac1ecu); f_111ae030();
  /* 111ac1ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac1ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ac1f1 jne 0x111ac1ff */
  if (!C.zf) goto L_111ac1ff;
L_111ac1f3:;
  /* 111ac1f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac1f6 push eax */
  push32((uint32_t)(EAX));
  /* 111ac1f7 call 0x111adf60 */
  push32(0x111ac1fcu); f_111adf60();
  /* 111ac1fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111ac1ff:;
  /* 111ac1ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac202 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111ac205 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 111ac20b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111ac20d je 0x111ac2eb */
  if (C.zf) goto L_111ac2eb;
L_111ac213:;
  /* 111ac213 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac216 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac219 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 111ac21b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ac21e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111ac220 jge 0x111ac243 */
  if ((C.sf==C.of)) goto L_111ac243;
  /* 111ac222 push 0x111cd150 */
  push32((uint32_t)(0x111cd150u));
  /* 111ac227 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ac229 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 111ac22e push 0x111cd190 */
  push32((uint32_t)(0x111cd190u));
  /* 111ac233 push 2 */
  push32((uint32_t)(0x2u));
  /* 111ac235 call 0x111a4470 */
  push32(0x111ac23au); f_111a4470();
  /* 111ac23a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac23d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac240 jne 0x111ac243 */
  if (!C.zf) goto L_111ac243;
  /* 111ac242 int3  */
  x86_unimpl("int3 @ 0x111ac242");
L_111ac243:;
  /* 111ac243 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ac245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ac247 jne 0x111ac213 */
  if (!C.zf) goto L_111ac213;
  /* 111ac249 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac24c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac24f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 111ac251 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ac254 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111ac257 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac25a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111ac25d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac260 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac263 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111ac265 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac268 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 111ac26b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ac26e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac271 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 111ac274 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac278 jle 0x111ac296 */
  if ((C.zf||C.sf!=C.of)) goto L_111ac296;
  /* 111ac27a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac27d push ecx */
  push32((uint32_t)(ECX));
  /* 111ac27e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac281 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 111ac284 push eax */
  push32((uint32_t)(EAX));
  /* 111ac285 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111ac288 push ecx */
  push32((uint32_t)(ECX));
  /* 111ac289 call 0x111adc50 */
  push32(0x111ac28eu); f_111adc50();
  /* 111ac28e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac291 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111ac294 jmp 0x111ac2de */
  goto L_111ac2de;
L_111ac296:;
  /* 111ac296 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac29a je 0x111ac2b9 */
  if (C.zf) goto L_111ac2b9;
  /* 111ac29c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111ac29f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 111ac2a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111ac2a5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111ac2a8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111ac2ab mov ecx, dword ptr [edx*4 + 0x111d3040] */
  ECX = (r32((uint32_t)(EDX*4 + 0x111d3040)));
  /* 111ac2b2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac2b4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 111ac2b7 jmp 0x111ac2c0 */
  goto L_111ac2c0;
L_111ac2b9:;
  /* 111ac2b9 mov dword ptr [ebp - 0x14], 0x111cfa60 */
  w32((uint32_t)(EBP + -0x14), (0x111cfa60u));
L_111ac2c0:;
  /* 111ac2c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111ac2c3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 111ac2c7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 111ac2ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ac2cc je 0x111ac2de */
  if (C.zf) goto L_111ac2de;
  /* 111ac2ce push 2 */
  push32((uint32_t)(0x2u));
  /* 111ac2d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ac2d2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111ac2d5 push ecx */
  push32((uint32_t)(ECX));
  /* 111ac2d6 call 0x111adb00 */
  push32(0x111ac2dbu); f_111adb00();
  /* 111ac2db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111ac2de:;
  /* 111ac2de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac2e1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 111ac2e4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 111ac2e7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 111ac2e9 jmp 0x111ac309 */
  goto L_111ac309;
L_111ac2eb:;
  /* 111ac2eb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111ac2f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac2f5 push edx */
  push32((uint32_t)(EDX));
  /* 111ac2f6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 111ac2f9 push eax */
  push32((uint32_t)(EAX));
  /* 111ac2fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111ac2fd push ecx */
  push32((uint32_t)(ECX));
  /* 111ac2fe call 0x111adc50 */
  push32(0x111ac303u); f_111adc50();
  /* 111ac303 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac306 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_111ac309:;
  /* 111ac309 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ac30c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac30f je 0x111ac325 */
  if (C.zf) goto L_111ac325;
  /* 111ac311 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac314 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 111ac317 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 111ac31a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac31d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 111ac320 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111ac323 jmp 0x111ac32d */
  goto L_111ac32d;
L_111ac325:;
  /* 111ac325 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ac328 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_111ac32d:;
  /* 111ac32d pop edi */
  EDI = (pop32());
  /* 111ac32e pop esi */
  ESI = (pop32());
  /* 111ac32f pop ebx */
  EBX = (pop32());
  /* 111ac330 mov esp, ebp */
  ESP = (EBP);
  /* 111ac332 pop ebp */
  EBP = (pop32());
  /* 111ac333 ret  */
  ESPCHK(0x111ac0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c340 @ 0x111ac340 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_111ac340(void) {
  FTRACE(0x111ac340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ac340 push ebp */
  push32((uint32_t)(EBP));
  /* 111ac341 mov ebp, esp */
  EBP = (ESP);
  /* 111ac343 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ac349 push ebx */
  push32((uint32_t)(EBX));
  /* 111ac34a push esi */
  push32((uint32_t)(ESI));
  /* 111ac34b push edi */
  push32((uint32_t)(EDI));
  /* 111ac34c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 111ac353 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 111ac35d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_111ac364:;
  /* 111ac364 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ac367 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111ac369 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 111ac36c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 111ac370 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ac373 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac376 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 111ac379 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111ac37b je 0x111acf57 */
  if (C.zf) goto L_111acf57;
  /* 111ac381 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac388 jl 0x111acf57 */
  if ((C.sf!=C.of)) goto L_111acf57;
  /* 111ac38e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 111ac392 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac395 jl 0x111ac3b6 */
  if ((C.sf!=C.of)) goto L_111ac3b6;
  /* 111ac397 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 111ac39b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac39e jg 0x111ac3b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_111ac3b6;
  /* 111ac3a0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 111ac3a4 movsx ecx, byte ptr [eax + 0x111cd188] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x111cd188))));
  /* 111ac3ab and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 111ac3ae mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 111ac3b4 jmp 0x111ac3c0 */
  goto L_111ac3c0;
L_111ac3b6:;
  /* 111ac3b6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_111ac3c0:;
  /* 111ac3c0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 111ac3c6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 111ac3c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ac3cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111ac3cf movsx edx, byte ptr [ecx + eax*8 + 0x111cd1a8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x111cd1a8))));
  /* 111ac3d7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 111ac3da mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 111ac3dd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111ac3e0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 111ac3e6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac3ed ja 0x111acf52 */
  if ((!C.cf&&!C.zf)) goto L_111acf52;
  /* 111ac3f3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 111ac3f9 jmp dword ptr [ecx*4 + 0x111acf64] */
  switch (ECX) {
    case 0: goto L_111ac400;
    case 1: goto L_111ac49a;
    case 2: goto L_111ac4dc;
    case 3: goto L_111ac54b;
    case 4: goto L_111ac5a3;
    case 5: goto L_111ac5b2;
    case 6: goto L_111ac5fe;
    case 7: goto L_111ac691;
    case 8: goto L_111ac528;
    case 9: goto L_111ac533;
    case 10: goto L_111ac51e;
    case 11: goto L_111ac513;
    case 12: goto L_111ac53e;
    case 13: goto L_111ac546;
    default: x86_unimpl("switch@0x111ac3f9 out of table"); return;
  }
L_111ac400:;
  /* 111ac400 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 111ac407 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 111ac40a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111ac410 mov eax, dword ptr [0x111cfc98] */
  EAX = (r32((uint32_t)(0x111cfc98)));
  /* 111ac415 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111ac417 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 111ac41b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 111ac421 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111ac423 je 0x111ac47d */
  if (C.zf) goto L_111ac47d;
  /* 111ac425 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 111ac42b push edx */
  push32((uint32_t)(EDX));
  /* 111ac42c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ac42f push eax */
  push32((uint32_t)(EAX));
  /* 111ac430 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 111ac434 push ecx */
  push32((uint32_t)(ECX));
  /* 111ac435 call 0x111ad070 */
  push32(0x111ac43au); f_111ad070();
  /* 111ac43a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac43d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ac440 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111ac442 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 111ac445 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ac448 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac44b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_111ac44e:;
  /* 111ac44e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 111ac452 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111ac454 jne 0x111ac477 */
  if (!C.zf) goto L_111ac477;
  /* 111ac456 push 0x111cd228 */
  push32((uint32_t)(0x111cd228u));
  /* 111ac45b push 0 */
  push32((uint32_t)(0x0u));
  /* 111ac45d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 111ac462 push 0x111cd21c */
  push32((uint32_t)(0x111cd21cu));
  /* 111ac467 push 2 */
  push32((uint32_t)(0x2u));
  /* 111ac469 call 0x111a4470 */
  push32(0x111ac46eu); f_111a4470();
  /* 111ac46e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac471 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac474 jne 0x111ac477 */
  if (!C.zf) goto L_111ac477;
  /* 111ac476 int3  */
  x86_unimpl("int3 @ 0x111ac476");
L_111ac477:;
  /* 111ac477 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ac479 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ac47b jne 0x111ac44e */
  if (!C.zf) goto L_111ac44e;
L_111ac47d:;
  /* 111ac47d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 111ac483 push ecx */
  push32((uint32_t)(ECX));
  /* 111ac484 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ac487 push edx */
  push32((uint32_t)(EDX));
  /* 111ac488 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 111ac48c push eax */
  push32((uint32_t)(EAX));
  /* 111ac48d call 0x111ad070 */
  push32(0x111ac492u); f_111ad070();
  /* 111ac492 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac495 jmp 0x111acf52 */
  goto L_111acf52;
L_111ac49a:;
  /* 111ac49a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111ac4a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac4a4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 111ac4aa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 111ac4b0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 111ac4b6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 111ac4bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111ac4bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111ac4c6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 111ac4d0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 111ac4d7 jmp 0x111acf52 */
  goto L_111acf52;
L_111ac4dc:;
  /* 111ac4dc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 111ac4e0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 111ac4e6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 111ac4ec sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ac4ef mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 111ac4f5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac4fc ja 0x111ac546 */
  if ((!C.cf&&!C.zf)) goto L_111ac546;
  /* 111ac4fe mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 111ac504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ac506 mov al, byte ptr [ecx + 0x111acf9c] */
  AL = (r8((uint32_t)(ECX + 0x111acf9c)));
  /* 111ac50c jmp dword ptr [eax*4 + 0x111acf84] */
  switch (EAX) {
    case 0: goto L_111ac528;
    case 1: goto L_111ac533;
    case 2: goto L_111ac51e;
    case 3: goto L_111ac513;
    case 4: goto L_111ac53e;
    case 5: goto L_111ac546;
    default: x86_unimpl("switch@0x111ac50c out of table"); return;
  }
L_111ac513:;
  /* 111ac513 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac516 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 111ac519 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111ac51c jmp 0x111ac546 */
  goto L_111ac546;
L_111ac51e:;
  /* 111ac51e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac521 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 111ac523 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111ac526 jmp 0x111ac546 */
  goto L_111ac546;
L_111ac528:;
  /* 111ac528 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac52b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 111ac52e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111ac531 jmp 0x111ac546 */
  goto L_111ac546;
L_111ac533:;
  /* 111ac533 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac536 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 111ac539 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111ac53c jmp 0x111ac546 */
  goto L_111ac546;
L_111ac53e:;
  /* 111ac53e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac541 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 111ac543 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111ac546:;
  /* 111ac546 jmp 0x111acf52 */
  goto L_111acf52;
L_111ac54b:;
  /* 111ac54b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 111ac54f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac552 jne 0x111ac587 */
  if (!C.zf) goto L_111ac587;
  /* 111ac554 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 111ac557 push edx */
  push32((uint32_t)(EDX));
  /* 111ac558 call 0x111ad180 */
  push32(0x111ac55du); f_111ad180();
  /* 111ac55d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac560 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 111ac566 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac56d jge 0x111ac585 */
  if ((C.sf==C.of)) goto L_111ac585;
  /* 111ac56f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac572 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 111ac574 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111ac577 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 111ac57d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111ac57f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_111ac585:;
  /* 111ac585 jmp 0x111ac59e */
  goto L_111ac59e;
L_111ac587:;
  /* 111ac587 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 111ac58d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111ac590 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 111ac594 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 111ac598 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_111ac59e:;
  /* 111ac59e jmp 0x111acf52 */
  goto L_111acf52;
L_111ac5a3:;
  /* 111ac5a3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 111ac5ad jmp 0x111acf52 */
  goto L_111acf52;
L_111ac5b2:;
  /* 111ac5b2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 111ac5b6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac5b9 jne 0x111ac5e2 */
  if (!C.zf) goto L_111ac5e2;
  /* 111ac5bb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 111ac5be push eax */
  push32((uint32_t)(EAX));
  /* 111ac5bf call 0x111ad180 */
  push32(0x111ac5c4u); f_111ad180();
  /* 111ac5c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac5c7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 111ac5cd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac5d4 jge 0x111ac5e0 */
  if ((C.sf==C.of)) goto L_111ac5e0;
  /* 111ac5d6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_111ac5e0:;
  /* 111ac5e0 jmp 0x111ac5f9 */
  goto L_111ac5f9;
L_111ac5e2:;
  /* 111ac5e2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 111ac5e8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111ac5eb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 111ac5ef lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 111ac5f3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_111ac5f9:;
  /* 111ac5f9 jmp 0x111acf52 */
  goto L_111acf52;
L_111ac5fe:;
  /* 111ac5fe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 111ac602 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 111ac608 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 111ac60e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ac611 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 111ac617 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac61e ja 0x111ac68c */
  if ((!C.cf&&!C.zf)) goto L_111ac68c;
  /* 111ac620 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 111ac626 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ac628 mov al, byte ptr [ecx + 0x111acfc1] */
  AL = (r8((uint32_t)(ECX + 0x111acfc1)));
  /* 111ac62e jmp dword ptr [eax*4 + 0x111acfad] */
  switch (EAX) {
    case 0: goto L_111ac640;
    case 1: goto L_111ac679;
    case 2: goto L_111ac635;
    case 3: goto L_111ac683;
    case 4: goto L_111ac68c;
    default: x86_unimpl("switch@0x111ac62e out of table"); return;
  }
L_111ac635:;
  /* 111ac635 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac638 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 111ac63b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111ac63e jmp 0x111ac68c */
  goto L_111ac68c;
L_111ac640:;
  /* 111ac640 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ac643 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111ac646 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac649 jne 0x111ac66b */
  if (!C.zf) goto L_111ac66b;
  /* 111ac64b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ac64e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 111ac652 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac655 jne 0x111ac66b */
  if (!C.zf) goto L_111ac66b;
  /* 111ac657 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ac65a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac65d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 111ac660 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac663 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 111ac666 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111ac669 jmp 0x111ac677 */
  goto L_111ac677;
L_111ac66b:;
  /* 111ac66b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 111ac672 jmp 0x111ac400 */
  goto L_111ac400;
L_111ac677:;
  /* 111ac677 jmp 0x111ac68c */
  goto L_111ac68c;
L_111ac679:;
  /* 111ac679 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac67c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 111ac67e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111ac681 jmp 0x111ac68c */
  goto L_111ac68c;
L_111ac683:;
  /* 111ac683 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac686 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 111ac689 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111ac68c:;
  /* 111ac68c jmp 0x111acf52 */
  goto L_111acf52;
L_111ac691:;
  /* 111ac691 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 111ac695 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 111ac69b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 111ac6a1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ac6a4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 111ac6aa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac6b1 ja 0x111acd77 */
  if ((!C.cf&&!C.zf)) goto L_111acd77;
  /* 111ac6b7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 111ac6bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111ac6bf mov cl, byte ptr [edx + 0x111ad02c] */
  CL = (r8((uint32_t)(EDX + 0x111ad02c)));
  /* 111ac6c5 jmp dword ptr [ecx*4 + 0x111acff0] */
  switch (ECX) {
    case 0: goto L_111ac6cc;
    case 1: goto L_111ac960;
    case 2: goto L_111ac7f0;
    case 3: goto L_111aca99;
    case 4: goto L_111ac75b;
    case 5: goto L_111ac6e1;
    case 6: goto L_111aca6b;
    case 7: goto L_111ac970;
    case 8: goto L_111ac915;
    case 9: goto L_111acae5;
    case 10: goto L_111aca8f;
    case 11: goto L_111ac806;
    case 12: goto L_111aca83;
    case 13: goto L_111acaa5;
    case 14: goto L_111acd77;
    default: x86_unimpl("switch@0x111ac6c5 out of table"); return;
  }
L_111ac6cc:;
  /* 111ac6cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac6cf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 111ac6d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ac6d6 jne 0x111ac6e1 */
  if (!C.zf) goto L_111ac6e1;
  /* 111ac6d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac6db or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 111ac6de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111ac6e1:;
  /* 111ac6e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac6e4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 111ac6ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111ac6ec je 0x111ac727 */
  if (C.zf) goto L_111ac727;
  /* 111ac6ee lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 111ac6f1 push eax */
  push32((uint32_t)(EAX));
  /* 111ac6f2 call 0x111ad1c0 */
  push32(0x111ac6f7u); f_111ad1c0();
  /* 111ac6f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac6fa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 111ac6fe mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 111ac702 push ecx */
  push32((uint32_t)(ECX));
  /* 111ac703 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 111ac709 push edx */
  push32((uint32_t)(EDX));
  /* 111ac70a call 0x111ae2a0 */
  push32(0x111ac70fu); f_111ae2a0();
  /* 111ac70f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac712 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 111ac715 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac719 jge 0x111ac725 */
  if ((C.sf==C.of)) goto L_111ac725;
  /* 111ac71b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_111ac725:;
  /* 111ac725 jmp 0x111ac74d */
  goto L_111ac74d;
L_111ac727:;
  /* 111ac727 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 111ac72a push eax */
  push32((uint32_t)(EAX));
  /* 111ac72b call 0x111ad180 */
  push32(0x111ac730u); f_111ad180();
  /* 111ac730 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac733 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 111ac73a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 111ac740 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 111ac746 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_111ac74d:;
  /* 111ac74d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 111ac753 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 111ac756 jmp 0x111acd77 */
  goto L_111acd77;
L_111ac75b:;
  /* 111ac75b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 111ac75e push eax */
  push32((uint32_t)(EAX));
  /* 111ac75f call 0x111ad180 */
  push32(0x111ac764u); f_111ad180();
  /* 111ac764 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac767 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 111ac76d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac774 je 0x111ac782 */
  if (C.zf) goto L_111ac782;
  /* 111ac776 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 111ac77c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac780 jne 0x111ac79c */
  if (!C.zf) goto L_111ac79c;
L_111ac782:;
  /* 111ac782 mov edx, dword ptr [0x111cffb0] */
  EDX = (r32((uint32_t)(0x111cffb0)));
  /* 111ac788 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 111ac78b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 111ac78e push eax */
  push32((uint32_t)(EAX));
  /* 111ac78f call 0x111a81e0 */
  push32(0x111ac794u); f_111a81e0();
  /* 111ac794 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac797 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 111ac79a jmp 0x111ac7eb */
  goto L_111ac7eb;
L_111ac79c:;
  /* 111ac79c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac79f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 111ac7a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111ac7a7 je 0x111ac7cc */
  if (C.zf) goto L_111ac7cc;
  /* 111ac7a9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 111ac7af mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 111ac7b2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 111ac7b5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 111ac7bb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 111ac7be shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 111ac7c0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 111ac7c3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 111ac7ca jmp 0x111ac7eb */
  goto L_111ac7eb;
L_111ac7cc:;
  /* 111ac7cc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 111ac7d3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 111ac7d9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111ac7dc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 111ac7df mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 111ac7e5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 111ac7e8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_111ac7eb:;
  /* 111ac7eb jmp 0x111acd77 */
  goto L_111acd77;
L_111ac7f0:;
  /* 111ac7f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac7f3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 111ac7f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111ac7fb jne 0x111ac806 */
  if (!C.zf) goto L_111ac806;
  /* 111ac7fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac800 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 111ac803 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111ac806:;
  /* 111ac806 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac80d jne 0x111ac81b */
  if (!C.zf) goto L_111ac81b;
  /* 111ac80f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 111ac819 jmp 0x111ac827 */
  goto L_111ac827;
L_111ac81b:;
  /* 111ac81b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 111ac821 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_111ac827:;
  /* 111ac827 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 111ac82d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 111ac833 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 111ac836 push edx */
  push32((uint32_t)(EDX));
  /* 111ac837 call 0x111ad180 */
  push32(0x111ac83cu); f_111ad180();
  /* 111ac83c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac83f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 111ac842 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac845 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 111ac84a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ac84c je 0x111ac8b6 */
  if (C.zf) goto L_111ac8b6;
  /* 111ac84e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac852 jne 0x111ac85d */
  if (!C.zf) goto L_111ac85d;
  /* 111ac854 mov ecx, dword ptr [0x111cffb4] */
  ECX = (r32((uint32_t)(0x111cffb4)));
  /* 111ac85a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_111ac85d:;
  /* 111ac85d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 111ac864 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 111ac867 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_111ac86d:;
  /* 111ac86d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 111ac873 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 111ac879 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ac87c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 111ac882 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ac884 je 0x111ac8a6 */
  if (C.zf) goto L_111ac8a6;
  /* 111ac886 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 111ac88c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ac88e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 111ac891 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ac893 je 0x111ac8a6 */
  if (C.zf) goto L_111ac8a6;
  /* 111ac895 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 111ac89b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac89e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 111ac8a4 jmp 0x111ac86d */
  goto L_111ac86d;
L_111ac8a6:;
  /* 111ac8a6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 111ac8ac sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ac8af sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 111ac8b1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 111ac8b4 jmp 0x111ac910 */
  goto L_111ac910;
L_111ac8b6:;
  /* 111ac8b6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac8ba jne 0x111ac8c4 */
  if (!C.zf) goto L_111ac8c4;
  /* 111ac8bc mov eax, dword ptr [0x111cffb0] */
  EAX = (r32((uint32_t)(0x111cffb0)));
  /* 111ac8c1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_111ac8c4:;
  /* 111ac8c4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111ac8c7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_111ac8cd:;
  /* 111ac8cd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 111ac8d3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 111ac8d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ac8dc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 111ac8e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111ac8e4 je 0x111ac904 */
  if (C.zf) goto L_111ac904;
  /* 111ac8e6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 111ac8ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111ac8ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111ac8f1 je 0x111ac904 */
  if (C.zf) goto L_111ac904;
  /* 111ac8f3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 111ac8f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac8fc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 111ac902 jmp 0x111ac8cd */
  goto L_111ac8cd;
L_111ac904:;
  /* 111ac904 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 111ac90a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ac90d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_111ac910:;
  /* 111ac910 jmp 0x111acd77 */
  goto L_111acd77;
L_111ac915:;
  /* 111ac915 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 111ac918 push edx */
  push32((uint32_t)(EDX));
  /* 111ac919 call 0x111ad180 */
  push32(0x111ac91eu); f_111ad180();
  /* 111ac91e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac921 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 111ac927 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac92a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 111ac92d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ac92f je 0x111ac943 */
  if (C.zf) goto L_111ac943;
  /* 111ac931 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 111ac937 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 111ac93e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 111ac941 jmp 0x111ac951 */
  goto L_111ac951;
L_111ac943:;
  /* 111ac943 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 111ac949 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 111ac94f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_111ac951:;
  /* 111ac951 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 111ac95b jmp 0x111acd77 */
  goto L_111acd77;
L_111ac960:;
  /* 111ac960 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 111ac967 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 111ac96a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 111ac96d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_111ac970:;
  /* 111ac970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac973 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 111ac975 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111ac978 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 111ac97e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 111ac981 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac988 jge 0x111ac996 */
  if ((C.sf==C.of)) goto L_111ac996;
  /* 111ac98a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 111ac994 jmp 0x111ac9b2 */
  goto L_111ac9b2;
L_111ac996:;
  /* 111ac996 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac99d jne 0x111ac9b2 */
  if (!C.zf) goto L_111ac9b2;
  /* 111ac99f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 111ac9a3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ac9a6 jne 0x111ac9b2 */
  if (!C.zf) goto L_111ac9b2;
  /* 111ac9a8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_111ac9b2:;
  /* 111ac9b2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111ac9b5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac9b8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 111ac9bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111ac9be sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ac9c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111ac9c3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 111ac9c6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 111ac9cc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 111ac9d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ac9d5 push ecx */
  push32((uint32_t)(ECX));
  /* 111ac9d6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 111ac9dc push edx */
  push32((uint32_t)(EDX));
  /* 111ac9dd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 111ac9e1 push eax */
  push32((uint32_t)(EAX));
  /* 111ac9e2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111ac9e5 push ecx */
  push32((uint32_t)(ECX));
  /* 111ac9e6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 111ac9ec push edx */
  push32((uint32_t)(EDX));
  /* 111ac9ed call dword ptr [0x111d03a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d03a0))), 0x111ac9f3u);
  /* 111ac9f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ac9f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ac9f9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 111ac9fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111aca00 je 0x111aca18 */
  if (C.zf) goto L_111aca18;
  /* 111aca02 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aca09 jne 0x111aca18 */
  if (!C.zf) goto L_111aca18;
  /* 111aca0b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aca0e push ecx */
  push32((uint32_t)(ECX));
  /* 111aca0f call dword ptr [0x111d03ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d03ac))), 0x111aca15u);
  /* 111aca15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111aca18:;
  /* 111aca18 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 111aca1c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aca1f jne 0x111aca3a */
  if (!C.zf) goto L_111aca3a;
  /* 111aca21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aca24 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 111aca29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111aca2b jne 0x111aca3a */
  if (!C.zf) goto L_111aca3a;
  /* 111aca2d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aca30 push ecx */
  push32((uint32_t)(ECX));
  /* 111aca31 call dword ptr [0x111d03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d03a4))), 0x111aca37u);
  /* 111aca37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111aca3a:;
  /* 111aca3a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aca3d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111aca40 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aca43 jne 0x111aca57 */
  if (!C.zf) goto L_111aca57;
  /* 111aca45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aca48 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 111aca4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111aca4e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aca51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aca54 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_111aca57:;
  /* 111aca57 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 111aca5a push eax */
  push32((uint32_t)(EAX));
  /* 111aca5b call 0x111a81e0 */
  push32(0x111aca60u); f_111a81e0();
  /* 111aca60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aca63 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 111aca66 jmp 0x111acd77 */
  goto L_111acd77;
L_111aca6b:;
  /* 111aca6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aca6e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 111aca71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111aca74 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 111aca7e jmp 0x111acb05 */
  goto L_111acb05;
L_111aca83:;
  /* 111aca83 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 111aca8d jmp 0x111acb05 */
  goto L_111acb05;
L_111aca8f:;
  /* 111aca8f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_111aca99:;
  /* 111aca99 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 111acaa3 jmp 0x111acaaf */
  goto L_111acaaf;
L_111acaa5:;
  /* 111acaa5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_111acaaf:;
  /* 111acaaf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 111acab9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111acabc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 111acac2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111acac4 je 0x111acae3 */
  if (C.zf) goto L_111acae3;
  /* 111acac6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 111acacd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 111acad3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111acad6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 111acadc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_111acae3:;
  /* 111acae3 jmp 0x111acb05 */
  goto L_111acb05;
L_111acae5:;
  /* 111acae5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 111acaef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111acaf2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 111acaf8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111acafa je 0x111acb05 */
  if (C.zf) goto L_111acb05;
  /* 111acafc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111acaff or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 111acb02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111acb05:;
  /* 111acb05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111acb08 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 111acb0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111acb0f je 0x111acb2e */
  if (C.zf) goto L_111acb2e;
  /* 111acb11 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 111acb14 push ecx */
  push32((uint32_t)(ECX));
  /* 111acb15 call 0x111ad1a0 */
  push32(0x111acb1au); f_111ad1a0();
  /* 111acb1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111acb1d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 111acb23 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 111acb29 jmp 0x111acbbf */
  goto L_111acbbf;
L_111acb2e:;
  /* 111acb2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111acb31 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 111acb34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111acb36 je 0x111acb80 */
  if (C.zf) goto L_111acb80;
  /* 111acb38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111acb3b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 111acb3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111acb40 je 0x111acb60 */
  if (C.zf) goto L_111acb60;
  /* 111acb42 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 111acb45 push ecx */
  push32((uint32_t)(ECX));
  /* 111acb46 call 0x111ad180 */
  push32(0x111acb4bu); f_111ad180();
  /* 111acb4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111acb4e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 111acb51 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111acb52 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 111acb58 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 111acb5e jmp 0x111acb7e */
  goto L_111acb7e;
L_111acb60:;
  /* 111acb60 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 111acb63 push edx */
  push32((uint32_t)(EDX));
  /* 111acb64 call 0x111ad180 */
  push32(0x111acb69u); f_111ad180();
  /* 111acb69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111acb6c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111acb71 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111acb72 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 111acb78 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_111acb7e:;
  /* 111acb7e jmp 0x111acbbf */
  goto L_111acbbf;
L_111acb80:;
  /* 111acb80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111acb83 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 111acb86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111acb88 je 0x111acba5 */
  if (C.zf) goto L_111acba5;
  /* 111acb8a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 111acb8d push ecx */
  push32((uint32_t)(ECX));
  /* 111acb8e call 0x111ad180 */
  push32(0x111acb93u); f_111ad180();
  /* 111acb93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111acb96 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111acb97 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 111acb9d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 111acba3 jmp 0x111acbbf */
  goto L_111acbbf;
L_111acba5:;
  /* 111acba5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 111acba8 push edx */
  push32((uint32_t)(EDX));
  /* 111acba9 call 0x111ad180 */
  push32(0x111acbaeu); f_111ad180();
  /* 111acbae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111acbb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111acbb3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 111acbb9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_111acbbf:;
  /* 111acbbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111acbc2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 111acbc5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111acbc7 je 0x111acc07 */
  if (C.zf) goto L_111acc07;
  /* 111acbc9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111acbd0 jg 0x111acc07 */
  if ((!C.zf&&C.sf==C.of)) goto L_111acc07;
  /* 111acbd2 jl 0x111acbdd */
  if ((C.sf!=C.of)) goto L_111acbdd;
  /* 111acbd4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111acbdb jae 0x111acc07 */
  if (!C.cf) goto L_111acc07;
L_111acbdd:;
  /* 111acbdd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 111acbe3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111acbe5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 111acbeb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111acbee neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111acbf0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 111acbf6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 111acbfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111acbff or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 111acc02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111acc05 jmp 0x111acc1f */
  goto L_111acc1f;
L_111acc07:;
  /* 111acc07 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 111acc0d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 111acc13 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 111acc19 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_111acc1f:;
  /* 111acc1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111acc22 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 111acc28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111acc2a jne 0x111acc47 */
  if (!C.zf) goto L_111acc47;
  /* 111acc2c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 111acc32 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 111acc38 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 111acc3b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 111acc41 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_111acc47:;
  /* 111acc47 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111acc4e jge 0x111acc5c */
  if ((C.sf==C.of)) goto L_111acc5c;
  /* 111acc50 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 111acc5a jmp 0x111acc65 */
  goto L_111acc65;
L_111acc5c:;
  /* 111acc5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111acc5f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 111acc62 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111acc65:;
  /* 111acc65 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 111acc6b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 111acc71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111acc73 jne 0x111acc7c */
  if (!C.zf) goto L_111acc7c;
  /* 111acc75 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_111acc7c:;
  /* 111acc7c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 111acc7f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_111acc82:;
  /* 111acc82 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 111acc88 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 111acc8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111acc91 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 111acc97 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111acc99 jg 0x111accaf */
  if ((!C.zf&&C.sf==C.of)) goto L_111accaf;
  /* 111acc9b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 111acca1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 111acca7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111acca9 je 0x111acd30 */
  if (C.zf) goto L_111acd30;
L_111accaf:;
  /* 111accaf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 111accb5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111accb6 push edx */
  push32((uint32_t)(EDX));
  /* 111accb7 push eax */
  push32((uint32_t)(EAX));
  /* 111accb8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 111accbe push edx */
  push32((uint32_t)(EDX));
  /* 111accbf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 111accc5 push eax */
  push32((uint32_t)(EAX));
  /* 111accc6 call 0x111ac040 */
  push32(0x111acccbu); f_111ac040();
  /* 111acccb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111accce mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 111accd4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 111accda cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111accdb push edx */
  push32((uint32_t)(EDX));
  /* 111accdc push eax */
  push32((uint32_t)(EAX));
  /* 111accdd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 111acce3 push ecx */
  push32((uint32_t)(ECX));
  /* 111acce4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 111accea push edx */
  push32((uint32_t)(EDX));
  /* 111acceb call 0x111abfd0 */
  push32(0x111accf0u); f_111abfd0();
  /* 111accf0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 111accf6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 111accfc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111acd03 jle 0x111acd17 */
  if ((C.zf||C.sf!=C.of)) goto L_111acd17;
  /* 111acd05 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 111acd0b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111acd11 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_111acd17:;
  /* 111acd17 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111acd1a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 111acd20 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 111acd22 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 111acd25 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111acd28 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 111acd2b jmp 0x111acc82 */
  goto L_111acc82;
L_111acd30:;
  /* 111acd30 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 111acd33 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111acd36 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 111acd39 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 111acd3c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111acd3f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 111acd42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111acd45 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 111acd4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111acd4c je 0x111acd77 */
  if (C.zf) goto L_111acd77;
  /* 111acd4e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111acd51 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111acd54 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111acd57 jne 0x111acd5f */
  if (!C.zf) goto L_111acd5f;
  /* 111acd59 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111acd5d jne 0x111acd77 */
  if (!C.zf) goto L_111acd77;
L_111acd5f:;
  /* 111acd5f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 111acd62 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111acd65 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 111acd68 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111acd6b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 111acd6e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111acd71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111acd74 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_111acd77:;
  /* 111acd77 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111acd7e jne 0x111acf52 */
  if (!C.zf) goto L_111acf52;
  /* 111acd84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111acd87 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 111acd8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111acd8c je 0x111acddd */
  if (C.zf) goto L_111acddd;
  /* 111acd8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111acd91 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 111acd97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111acd99 je 0x111acdab */
  if (C.zf) goto L_111acdab;
  /* 111acd9b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 111acda2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 111acda9 jmp 0x111acddd */
  goto L_111acddd;
L_111acdab:;
  /* 111acdab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111acdae and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 111acdb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111acdb3 je 0x111acdc5 */
  if (C.zf) goto L_111acdc5;
  /* 111acdb5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 111acdbc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 111acdc3 jmp 0x111acddd */
  goto L_111acddd;
L_111acdc5:;
  /* 111acdc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111acdc8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 111acdcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111acdcd je 0x111acddd */
  if (C.zf) goto L_111acddd;
  /* 111acdcf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 111acdd6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_111acddd:;
  /* 111acddd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 111acde3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111acde6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111acde9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 111acdef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111acdf2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 111acdf5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111acdf7 jne 0x111ace15 */
  if (!C.zf) goto L_111ace15;
  /* 111acdf9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 111acdff push eax */
  push32((uint32_t)(EAX));
  /* 111ace00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ace03 push ecx */
  push32((uint32_t)(ECX));
  /* 111ace04 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 111ace0a push edx */
  push32((uint32_t)(EDX));
  /* 111ace0b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 111ace0d call 0x111ad0f0 */
  push32(0x111ace12u); f_111ad0f0();
  /* 111ace12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111ace15:;
  /* 111ace15 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 111ace1b push eax */
  push32((uint32_t)(EAX));
  /* 111ace1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ace1f push ecx */
  push32((uint32_t)(ECX));
  /* 111ace20 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111ace23 push edx */
  push32((uint32_t)(EDX));
  /* 111ace24 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 111ace2a push eax */
  push32((uint32_t)(EAX));
  /* 111ace2b call 0x111ad130 */
  push32(0x111ace30u); f_111ad130();
  /* 111ace30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ace33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ace36 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 111ace39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111ace3b je 0x111ace63 */
  if (C.zf) goto L_111ace63;
  /* 111ace3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ace40 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 111ace43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111ace45 jne 0x111ace63 */
  if (!C.zf) goto L_111ace63;
  /* 111ace47 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 111ace4d push eax */
  push32((uint32_t)(EAX));
  /* 111ace4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ace51 push ecx */
  push32((uint32_t)(ECX));
  /* 111ace52 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 111ace58 push edx */
  push32((uint32_t)(EDX));
  /* 111ace59 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 111ace5b call 0x111ad0f0 */
  push32(0x111ace60u); f_111ad0f0();
  /* 111ace60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111ace63:;
  /* 111ace63 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ace67 je 0x111acf11 */
  if (C.zf) goto L_111acf11;
  /* 111ace6d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ace71 jle 0x111acf11 */
  if ((C.zf||C.sf!=C.of)) goto L_111acf11;
  /* 111ace77 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 111ace7a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 111ace80 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ace83 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_111ace89:;
  /* 111ace89 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 111ace8f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 111ace95 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ace98 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 111ace9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111acea0 je 0x111acf0f */
  if (C.zf) goto L_111acf0f;
  /* 111acea2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 111acea8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 111aceab mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 111aceb2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 111aceb9 push eax */
  push32((uint32_t)(EAX));
  /* 111aceba lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 111acec0 push ecx */
  push32((uint32_t)(ECX));
  /* 111acec1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 111acec7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aceca mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 111aced0 call 0x111ae2a0 */
  push32(0x111aced5u); f_111ae2a0();
  /* 111aced5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aced8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 111acede cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111acee5 jg 0x111acee9 */
  if ((!C.zf&&C.sf==C.of)) goto L_111acee9;
  /* 111acee7 jmp 0x111acf0f */
  goto L_111acf0f;
L_111acee9:;
  /* 111acee9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 111aceef push eax */
  push32((uint32_t)(EAX));
  /* 111acef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111acef3 push ecx */
  push32((uint32_t)(ECX));
  /* 111acef4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 111acefa push edx */
  push32((uint32_t)(EDX));
  /* 111acefb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 111acf01 push eax */
  push32((uint32_t)(EAX));
  /* 111acf02 call 0x111ad130 */
  push32(0x111acf07u); f_111ad130();
  /* 111acf07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111acf0a jmp 0x111ace89 */
  goto L_111ace89;
L_111acf0f:;
  /* 111acf0f jmp 0x111acf2c */
  goto L_111acf2c;
L_111acf11:;
  /* 111acf11 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 111acf17 push ecx */
  push32((uint32_t)(ECX));
  /* 111acf18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111acf1b push edx */
  push32((uint32_t)(EDX));
  /* 111acf1c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111acf1f push eax */
  push32((uint32_t)(EAX));
  /* 111acf20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111acf23 push ecx */
  push32((uint32_t)(ECX));
  /* 111acf24 call 0x111ad130 */
  push32(0x111acf29u); f_111ad130();
  /* 111acf29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111acf2c:;
  /* 111acf2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111acf2f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 111acf32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111acf34 je 0x111acf52 */
  if (C.zf) goto L_111acf52;
  /* 111acf36 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 111acf3c push eax */
  push32((uint32_t)(EAX));
  /* 111acf3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111acf40 push ecx */
  push32((uint32_t)(ECX));
  /* 111acf41 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 111acf47 push edx */
  push32((uint32_t)(EDX));
  /* 111acf48 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 111acf4a call 0x111ad0f0 */
  push32(0x111acf4fu); f_111ad0f0();
  /* 111acf4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111acf52:;
  /* 111acf52 jmp 0x111ac364 */
  goto L_111ac364;
L_111acf57:;
  /* 111acf57 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 111acf5d pop edi */
  EDI = (pop32());
  /* 111acf5e pop esi */
  ESI = (pop32());
  /* 111acf5f pop ebx */
  EBX = (pop32());
  /* 111acf60 mov esp, ebp */
  ESP = (EBP);
  /* 111acf62 pop ebp */
  EBP = (pop32());
  /* 111acf63 ret  */
  ESPCHK(0x111ac340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d070 @ 0x111ad070 (119 bytes, 44 insns) */
void f_111ad070(void) {
  FTRACE(0x111ad070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ad070 push ebp */
  push32((uint32_t)(EBP));
  /* 111ad071 mov ebp, esp */
  EBP = (ESP);
  /* 111ad073 push ecx */
  push32((uint32_t)(ECX));
  /* 111ad074 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad077 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111ad07a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ad07d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad080 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 111ad083 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad086 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad08a jl 0x111ad0b2 */
  if ((C.sf!=C.of)) goto L_111ad0b2;
  /* 111ad08c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad08f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111ad091 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 111ad094 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 111ad096 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 111ad09a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111ad0a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111ad0a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad0a6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111ad0a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad0ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad0ae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111ad0b0 jmp 0x111ad0c5 */
  goto L_111ad0c5;
L_111ad0b2:;
  /* 111ad0b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad0b5 push edx */
  push32((uint32_t)(EDX));
  /* 111ad0b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad0b9 push eax */
  push32((uint32_t)(EAX));
  /* 111ad0ba call 0x111ac0c0 */
  push32(0x111ad0bfu); f_111ac0c0();
  /* 111ad0bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad0c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111ad0c5:;
  /* 111ad0c5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad0c9 jne 0x111ad0d6 */
  if (!C.zf) goto L_111ad0d6;
  /* 111ad0cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111ad0ce mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 111ad0d4 jmp 0x111ad0e3 */
  goto L_111ad0e3;
L_111ad0d6:;
  /* 111ad0d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111ad0d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111ad0db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad0de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111ad0e1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_111ad0e3:;
  /* 111ad0e3 mov esp, ebp */
  ESP = (EBP);
  /* 111ad0e5 pop ebp */
  EBP = (pop32());
  /* 111ad0e6 ret  */
  ESPCHK(0x111ad070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0f0 @ 0x111ad0f0 (53 bytes, 23 insns) */
void f_111ad0f0(void) {
  FTRACE(0x111ad0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ad0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111ad0f1 mov ebp, esp */
  EBP = (ESP);
L_111ad0f3:;
  /* 111ad0f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad0f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad0f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ad0fc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 111ad0ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ad101 jle 0x111ad123 */
  if ((C.zf||C.sf!=C.of)) goto L_111ad123;
  /* 111ad103 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111ad106 push edx */
  push32((uint32_t)(EDX));
  /* 111ad107 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111ad10a push eax */
  push32((uint32_t)(EAX));
  /* 111ad10b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad10e push ecx */
  push32((uint32_t)(ECX));
  /* 111ad10f call 0x111ad070 */
  push32(0x111ad114u); f_111ad070();
  /* 111ad114 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad117 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111ad11a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad11d jne 0x111ad121 */
  if (!C.zf) goto L_111ad121;
  /* 111ad11f jmp 0x111ad123 */
  goto L_111ad123;
L_111ad121:;
  /* 111ad121 jmp 0x111ad0f3 */
  goto L_111ad0f3;
L_111ad123:;
  /* 111ad123 pop ebp */
  EBP = (pop32());
  /* 111ad124 ret  */
  ESPCHK(0x111ad0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d130 @ 0x111ad130 (74 bytes, 31 insns) */
void f_111ad130(void) {
  FTRACE(0x111ad130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ad130 push ebp */
  push32((uint32_t)(EBP));
  /* 111ad131 mov ebp, esp */
  EBP = (ESP);
  /* 111ad133 push ecx */
  push32((uint32_t)(ECX));
L_111ad134:;
  /* 111ad134 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad137 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad13a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ad13d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 111ad140 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ad142 jle 0x111ad176 */
  if ((C.zf||C.sf!=C.of)) goto L_111ad176;
  /* 111ad144 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111ad147 push edx */
  push32((uint32_t)(EDX));
  /* 111ad148 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111ad14b push eax */
  push32((uint32_t)(EAX));
  /* 111ad14c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad14f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111ad152 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111ad155 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ad158 push eax */
  push32((uint32_t)(EAX));
  /* 111ad159 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad15c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad15f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 111ad162 call 0x111ad070 */
  push32(0x111ad167u); f_111ad070();
  /* 111ad167 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad16a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111ad16d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad170 jne 0x111ad174 */
  if (!C.zf) goto L_111ad174;
  /* 111ad172 jmp 0x111ad176 */
  goto L_111ad176;
L_111ad174:;
  /* 111ad174 jmp 0x111ad134 */
  goto L_111ad134;
L_111ad176:;
  /* 111ad176 mov esp, ebp */
  ESP = (EBP);
  /* 111ad178 pop ebp */
  EBP = (pop32());
  /* 111ad179 ret  */
  ESPCHK(0x111ad130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d180 @ 0x111ad180 (26 bytes, 12 insns) */
void f_111ad180(void) {
  FTRACE(0x111ad180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ad180 push ebp */
  push32((uint32_t)(EBP));
  /* 111ad181 mov ebp, esp */
  EBP = (ESP);
  /* 111ad183 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad186 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111ad188 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad18b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad18e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111ad190 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad193 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111ad195 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 111ad198 pop ebp */
  EBP = (pop32());
  /* 111ad199 ret  */
  ESPCHK(0x111ad180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1a0 @ 0x111ad1a0 (31 bytes, 14 insns) */
void f_111ad1a0(void) {
  FTRACE(0x111ad1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ad1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111ad1a1 mov ebp, esp */
  EBP = (ESP);
  /* 111ad1a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad1a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111ad1a8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad1ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad1ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111ad1b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad1b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111ad1b5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ad1b8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 111ad1ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111ad1bd pop ebp */
  EBP = (pop32());
  /* 111ad1be ret  */
  ESPCHK(0x111ad1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1c0 @ 0x111ad1c0 (27 bytes, 12 insns) */
void f_111ad1c0(void) {
  FTRACE(0x111ad1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ad1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111ad1c1 mov ebp, esp */
  EBP = (ESP);
  /* 111ad1c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad1c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111ad1c8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad1cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad1ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111ad1d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad1d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111ad1d5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 111ad1d9 pop ebp */
  EBP = (pop32());
  /* 111ad1da ret  */
  ESPCHK(0x111ad1c0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x111ad1e0 (145 bytes, 42 insns) */
void f_111ad1e0(void) {
  FTRACE(0x111ad1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ad1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111ad1e1 mov ebp, esp */
  EBP = (ESP);
  /* 111ad1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 111ad1e4 call 0x111ad290 */
  push32(0x111ad1e9u); f_111ad290();
  /* 111ad1e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad1ec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 111ad1ee mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111ad1f5 jmp 0x111ad200 */
  goto L_111ad200;
L_111ad1f7:;
  /* 111ad1f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ad1fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad1fd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111ad200:;
  /* 111ad200 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad204 jae 0x111ad22a */
  if (!C.cf) goto L_111ad22a;
  /* 111ad206 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ad209 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad20c cmp ecx, dword ptr [eax*8 + 0x111cffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x111cffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad213 jne 0x111ad228 */
  if (!C.zf) goto L_111ad228;
  /* 111ad215 call 0x111ad280 */
  push32(0x111ad21au); f_111ad280();
  /* 111ad21a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ad21d mov ecx, dword ptr [edx*8 + 0x111cffbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x111cffbc)));
  /* 111ad224 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 111ad226 jmp 0x111ad26d */
  goto L_111ad26d;
L_111ad228:;
  /* 111ad228 jmp 0x111ad1f7 */
  goto L_111ad1f7;
L_111ad22a:;
  /* 111ad22a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad22e jb 0x111ad243 */
  if (C.cf) goto L_111ad243;
  /* 111ad230 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad234 ja 0x111ad243 */
  if ((!C.cf&&!C.zf)) goto L_111ad243;
  /* 111ad236 call 0x111ad280 */
  push32(0x111ad23bu); f_111ad280();
  /* 111ad23b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 111ad241 jmp 0x111ad26d */
  goto L_111ad26d;
L_111ad243:;
  /* 111ad243 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad24a jb 0x111ad262 */
  if (C.cf) goto L_111ad262;
  /* 111ad24c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad253 ja 0x111ad262 */
  if ((!C.cf&&!C.zf)) goto L_111ad262;
  /* 111ad255 call 0x111ad280 */
  push32(0x111ad25au); f_111ad280();
  /* 111ad25a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 111ad260 jmp 0x111ad26d */
  goto L_111ad26d;
L_111ad262:;
  /* 111ad262 call 0x111ad280 */
  push32(0x111ad267u); f_111ad280();
  /* 111ad267 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_111ad26d:;
  /* 111ad26d mov esp, ebp */
  ESP = (EBP);
  /* 111ad26f pop ebp */
  EBP = (pop32());
  /* 111ad270 ret  */
  ESPCHK(0x111ad1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d280 @ 0x111ad280 (13 bytes, 6 insns) */
void f_111ad280(void) {
  FTRACE(0x111ad280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ad280 push ebp */
  push32((uint32_t)(EBP));
  /* 111ad281 mov ebp, esp */
  EBP = (ESP);
  /* 111ad283 call 0x111a4df0 */
  push32(0x111ad288u); f_111a4df0();
  /* 111ad288 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad28b pop ebp */
  EBP = (pop32());
  /* 111ad28c ret  */
  ESPCHK(0x111ad280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d290 @ 0x111ad290 (13 bytes, 6 insns) */
void f_111ad290(void) {
  FTRACE(0x111ad290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ad290 push ebp */
  push32((uint32_t)(EBP));
  /* 111ad291 mov ebp, esp */
  EBP = (ESP);
  /* 111ad293 call 0x111a4df0 */
  push32(0x111ad298u); f_111a4df0();
  /* 111ad298 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad29b pop ebp */
  EBP = (pop32());
  /* 111ad29c ret  */
  ESPCHK(0x111ad290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2a0 @ 0x111ad2a0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_111ad2a0(void) {
  FTRACE(0x111ad2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ad2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111ad2a1 mov ebp, esp */
  EBP = (ESP);
  /* 111ad2a3 push edi */
  push32((uint32_t)(EDI));
  /* 111ad2a4 push esi */
  push32((uint32_t)(ESI));
  /* 111ad2a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad2a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111ad2ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad2ae mov eax, ecx */
  EAX = (ECX);
  /* 111ad2b0 mov edx, ecx */
  EDX = (ECX);
  /* 111ad2b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad2b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad2b6 jbe 0x111ad2c0 */
  if ((C.cf||C.zf)) goto L_111ad2c0;
  /* 111ad2b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad2ba jb 0x111ad438 */
  if (C.cf) goto L_111ad438;
L_111ad2c0:;
  /* 111ad2c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 111ad2c6 jne 0x111ad2dc */
  if (!C.zf) goto L_111ad2dc;
  /* 111ad2c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111ad2cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 111ad2ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad2d1 jb 0x111ad2fc */
  if (C.cf) goto L_111ad2fc;
  /* 111ad2d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111ad2d5 jmp dword ptr [edx*4 + 0x111ad3e8] */
  switch (EDX) {
    case 0: goto L_111ad3f8;
    case 1: goto L_111ad400;
    case 2: goto L_111ad40c;
    case 3: goto L_111ad420;
    default: x86_unimpl("switch@0x111ad2d5 out of table"); return;
  }
L_111ad2dc:;
  /* 111ad2dc mov eax, edi */
  EAX = (EDI);
  /* 111ad2de mov edx, 3 */
  EDX = (0x3u);
  /* 111ad2e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ad2e6 jb 0x111ad2f4 */
  if (C.cf) goto L_111ad2f4;
  /* 111ad2e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 111ad2eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad2ed jmp dword ptr [eax*4 + 0x111ad300] */
  switch (EAX) {
    case 1: goto L_111ad310;
    case 2: goto L_111ad33c;
    case 3: goto L_111ad360;
    default: x86_unimpl("switch@0x111ad2ed out of table"); return;
  }
L_111ad2f4:;
  /* 111ad2f4 jmp dword ptr [ecx*4 + 0x111ad3f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x111ad3f8)))); return;
  /* 111ad2fb nop  */
  /* nop */
L_111ad2fc:;
  /* 111ad2fc jmp dword ptr [ecx*4 + 0x111ad37c] */
  switch (ECX) {
    case 0: goto L_111ad3df;
    case 1: goto L_111ad3cc;
    case 2: goto L_111ad3c4;
    case 3: goto L_111ad3bc;
    case 4: goto L_111ad3b4;
    case 5: goto L_111ad3ac;
    case 6: goto L_111ad3a4;
    case 7: goto L_111ad39c;
    default: x86_unimpl("switch@0x111ad2fc out of table"); return;
  }
  /* 111ad303 nop  */
  /* nop */
L_111ad310:;
  /* 111ad310 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111ad312 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111ad314 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111ad316 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111ad319 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111ad31c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111ad31f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111ad322 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111ad325 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad328 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad32b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad32e jb 0x111ad2fc */
  if (C.cf) goto L_111ad2fc;
  /* 111ad330 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111ad332 jmp dword ptr [edx*4 + 0x111ad3e8] */
  switch (EDX) {
    case 0: goto L_111ad3f8;
    case 1: goto L_111ad400;
    case 2: goto L_111ad40c;
    case 3: goto L_111ad420;
    default: x86_unimpl("switch@0x111ad332 out of table"); return;
  }
  /* 111ad339 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111ad33c:;
  /* 111ad33c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111ad33e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111ad340 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111ad342 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111ad345 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111ad348 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111ad34b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad34e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad351 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad354 jb 0x111ad2fc */
  if (C.cf) goto L_111ad2fc;
  /* 111ad356 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111ad358 jmp dword ptr [edx*4 + 0x111ad3e8] */
  switch (EDX) {
    case 0: goto L_111ad3f8;
    case 1: goto L_111ad400;
    case 2: goto L_111ad40c;
    case 3: goto L_111ad420;
    default: x86_unimpl("switch@0x111ad358 out of table"); return;
  }
  /* 111ad35f nop  */
  /* nop */
L_111ad360:;
  /* 111ad360 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111ad362 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111ad364 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111ad366 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111ad367 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111ad36a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111ad36b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad36e jb 0x111ad2fc */
  if (C.cf) goto L_111ad2fc;
  /* 111ad370 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111ad372 jmp dword ptr [edx*4 + 0x111ad3e8] */
  switch (EDX) {
    case 0: goto L_111ad3f8;
    case 1: goto L_111ad400;
    case 2: goto L_111ad40c;
    case 3: goto L_111ad420;
    default: x86_unimpl("switch@0x111ad372 out of table"); return;
  }
  /* 111ad379 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111ad39c:;
  /* 111ad39c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 111ad3a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_111ad3a4:;
  /* 111ad3a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 111ad3a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_111ad3ac:;
  /* 111ad3ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 111ad3b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_111ad3b4:;
  /* 111ad3b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 111ad3b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_111ad3bc:;
  /* 111ad3bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 111ad3c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_111ad3c4:;
  /* 111ad3c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 111ad3c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_111ad3cc:;
  /* 111ad3cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 111ad3d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 111ad3d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 111ad3db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad3dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_111ad3df:;
  /* 111ad3df jmp dword ptr [edx*4 + 0x111ad3e8] */
  switch (EDX) {
    case 0: goto L_111ad3f8;
    case 1: goto L_111ad400;
    case 2: goto L_111ad40c;
    case 3: goto L_111ad420;
    default: x86_unimpl("switch@0x111ad3df out of table"); return;
  }
  /* 111ad3e6 mov edi, edi */
  EDI = (EDI);
L_111ad3f8:;
  /* 111ad3f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad3fb pop esi */
  ESI = (pop32());
  /* 111ad3fc pop edi */
  EDI = (pop32());
  /* 111ad3fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111ad3fe ret  */
  ESPCHK(0x111ad2a0u, _esp0);
  ESP += 4; return;
  /* 111ad3ff nop  */
  /* nop */
L_111ad400:;
  /* 111ad400 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111ad402 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111ad404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad407 pop esi */
  ESI = (pop32());
  /* 111ad408 pop edi */
  EDI = (pop32());
  /* 111ad409 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111ad40a ret  */
  ESPCHK(0x111ad2a0u, _esp0);
  ESP += 4; return;
  /* 111ad40b nop  */
  /* nop */
L_111ad40c:;
  /* 111ad40c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111ad40e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111ad410 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111ad413 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111ad416 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad419 pop esi */
  ESI = (pop32());
  /* 111ad41a pop edi */
  EDI = (pop32());
  /* 111ad41b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111ad41c ret  */
  ESPCHK(0x111ad2a0u, _esp0);
  ESP += 4; return;
  /* 111ad41d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111ad420:;
  /* 111ad420 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111ad422 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111ad424 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111ad427 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111ad42a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111ad42d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111ad430 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad433 pop esi */
  ESI = (pop32());
  /* 111ad434 pop edi */
  EDI = (pop32());
  /* 111ad435 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111ad436 ret  */
  ESPCHK(0x111ad2a0u, _esp0);
  ESP += 4; return;
  /* 111ad437 nop  */
  /* nop */
L_111ad438:;
  /* 111ad438 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 111ad43c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 111ad440 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 111ad446 jne 0x111ad46c */
  if (!C.zf) goto L_111ad46c;
  /* 111ad448 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111ad44b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 111ad44e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad451 jb 0x111ad460 */
  if (C.cf) goto L_111ad460;
  /* 111ad453 std  */
  C.df=1;
  /* 111ad454 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111ad456 cld  */
  C.df=0;
  /* 111ad457 jmp dword ptr [edx*4 + 0x111ad580] */
  switch (EDX) {
    case 0: goto L_111ad590;
    case 1: goto L_111ad598;
    case 2: goto L_111ad5a8;
    case 3: goto L_111ad5bc;
    default: x86_unimpl("switch@0x111ad457 out of table"); return;
  }
  /* 111ad45e mov edi, edi */
  EDI = (EDI);
L_111ad460:;
  /* 111ad460 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111ad462 jmp dword ptr [ecx*4 + 0x111ad530] */
  switch (ECX) {
    case 0: goto L_111ad577;
    default: x86_unimpl("switch@0x111ad462 out of table"); return;
  }
  /* 111ad469 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111ad46c:;
  /* 111ad46c mov eax, edi */
  EAX = (EDI);
  /* 111ad46e mov edx, 3 */
  EDX = (0x3u);
  /* 111ad473 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad476 jb 0x111ad484 */
  if (C.cf) goto L_111ad484;
  /* 111ad478 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 111ad47b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ad47d jmp dword ptr [eax*4 + 0x111ad488] */
  switch (EAX) {
    case 1: goto L_111ad498;
    case 2: goto L_111ad4b8;
    case 3: goto L_111ad4e0;
    default: x86_unimpl("switch@0x111ad47d out of table"); return;
  }
L_111ad484:;
  /* 111ad484 jmp dword ptr [ecx*4 + 0x111ad580] */
  switch (ECX) {
    case 0: goto L_111ad590;
    case 1: goto L_111ad598;
    case 2: goto L_111ad5a8;
    case 3: goto L_111ad5bc;
    default: x86_unimpl("switch@0x111ad484 out of table"); return;
  }
  /* 111ad48b nop  */
  /* nop */
L_111ad498:;
  /* 111ad498 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111ad49b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111ad49d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111ad4a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 111ad4a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111ad4a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 111ad4a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad4a8 jb 0x111ad460 */
  if (C.cf) goto L_111ad460;
  /* 111ad4aa std  */
  C.df=1;
  /* 111ad4ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111ad4ad cld  */
  C.df=0;
  /* 111ad4ae jmp dword ptr [edx*4 + 0x111ad580] */
  switch (EDX) {
    case 0: goto L_111ad590;
    case 1: goto L_111ad598;
    case 2: goto L_111ad5a8;
    case 3: goto L_111ad5bc;
    default: x86_unimpl("switch@0x111ad4ae out of table"); return;
  }
  /* 111ad4b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111ad4b8:;
  /* 111ad4b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111ad4bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111ad4bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111ad4c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111ad4c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111ad4c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111ad4c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ad4cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ad4cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad4d2 jb 0x111ad460 */
  if (C.cf) goto L_111ad460;
  /* 111ad4d4 std  */
  C.df=1;
  /* 111ad4d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111ad4d7 cld  */
  C.df=0;
  /* 111ad4d8 jmp dword ptr [edx*4 + 0x111ad580] */
  switch (EDX) {
    case 0: goto L_111ad590;
    case 1: goto L_111ad598;
    case 2: goto L_111ad5a8;
    case 3: goto L_111ad5bc;
    default: x86_unimpl("switch@0x111ad4d8 out of table"); return;
  }
  /* 111ad4df nop  */
  /* nop */
L_111ad4e0:;
  /* 111ad4e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111ad4e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111ad4e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111ad4e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111ad4eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111ad4ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111ad4f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111ad4f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111ad4f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ad4fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ad4fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad500 jb 0x111ad460 */
  if (C.cf) goto L_111ad460;
  /* 111ad506 std  */
  C.df=1;
  /* 111ad507 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111ad509 cld  */
  C.df=0;
  /* 111ad50a jmp dword ptr [edx*4 + 0x111ad580] */
  switch (EDX) {
    case 0: goto L_111ad590;
    case 1: goto L_111ad598;
    case 2: goto L_111ad5a8;
    case 3: goto L_111ad5bc;
    default: x86_unimpl("switch@0x111ad50a out of table"); return;
  }
  /* 111ad511 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 111ad514 xor al, 0xd5 */
  { uint32_t _r=(AL)^(0xd5u); AL = (_r); fl_logic(_r,8); }
  /* 111ad516 sbb dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111ad518 cmp al, 0xd5 */
  { uint32_t _a=(AL),_b=(0xd5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111ad51a sbb dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111ad51c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 111ad51d aad 0x1a */
  x86_unimpl("aad @ 0x111ad51d");
  /* 111ad51f adc dword ptr [ebp + edx*8 + 0x1a], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + EDX*8 + 0x1a))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EBP + EDX*8 + 0x1a), (_r)); fl_add(_a,_b,_r,32); }
  /* 111ad523 adc dword ptr [ebp + edx*8 + 0x1a], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + EDX*8 + 0x1a))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EBP + EDX*8 + 0x1a), (_r)); fl_add(_a,_b,_r,32); }
  /* 111ad527 adc dword ptr [ebp + edx*8 + 0x1a], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + EDX*8 + 0x1a))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EBP + EDX*8 + 0x1a), (_r)); fl_add(_a,_b,_r,32); }
  /* 111ad52b adc dword ptr [ebp + edx*8 + 0x1a], esp */
  { uint32_t _a=(r32((uint32_t)(EBP + EDX*8 + 0x1a))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EBP + EDX*8 + 0x1a), (_r)); fl_add(_a,_b,_r,32); }
  /* 111ad534 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 111ad538 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 111ad53c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 111ad540 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 111ad544 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 111ad548 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 111ad54c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 111ad550 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 111ad554 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 111ad558 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 111ad55c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 111ad560 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 111ad564 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 111ad568 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 111ad56c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 111ad573 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad575 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_111ad577:;
  /* 111ad577 jmp dword ptr [edx*4 + 0x111ad580] */
  switch (EDX) {
    case 0: goto L_111ad590;
    case 1: goto L_111ad598;
    case 2: goto L_111ad5a8;
    case 3: goto L_111ad5bc;
    default: x86_unimpl("switch@0x111ad577 out of table"); return;
  }
  /* 111ad57e mov edi, edi */
  EDI = (EDI);
L_111ad590:;
  /* 111ad590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad593 pop esi */
  ESI = (pop32());
  /* 111ad594 pop edi */
  EDI = (pop32());
  /* 111ad595 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111ad596 ret  */
  ESPCHK(0x111ad2a0u, _esp0);
  ESP += 4; return;
  /* 111ad597 nop  */
  /* nop */
L_111ad598:;
  /* 111ad598 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111ad59b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111ad59e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad5a1 pop esi */
  ESI = (pop32());
  /* 111ad5a2 pop edi */
  EDI = (pop32());
  /* 111ad5a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111ad5a4 ret  */
  ESPCHK(0x111ad2a0u, _esp0);
  ESP += 4; return;
  /* 111ad5a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111ad5a8:;
  /* 111ad5a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111ad5ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111ad5ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111ad5b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111ad5b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad5b7 pop esi */
  ESI = (pop32());
  /* 111ad5b8 pop edi */
  EDI = (pop32());
  /* 111ad5b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111ad5ba ret  */
  ESPCHK(0x111ad2a0u, _esp0);
  ESP += 4; return;
  /* 111ad5bb nop  */
  /* nop */
L_111ad5bc:;
  /* 111ad5bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111ad5bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111ad5c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111ad5c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111ad5c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111ad5cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111ad5ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad5d1 pop esi */
  ESI = (pop32());
  /* 111ad5d2 pop edi */
  EDI = (pop32());
  /* 111ad5d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111ad5d4 ret  */
  ESPCHK(0x111ad2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5e0 @ 0x111ad5e0 (421 bytes, 148 insns) */
void f_111ad5e0(void) {
  FTRACE(0x111ad5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ad5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111ad5e1 mov ebp, esp */
  EBP = (ESP);
  /* 111ad5e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111ad5e5 push 0x111cd240 */
  push32((uint32_t)(0x111cd240u));
  /* 111ad5ea push 0x111ae4b8 */
  push32((uint32_t)(0x111ae4b8u));
  /* 111ad5ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 111ad5f5 push eax */
  push32((uint32_t)(EAX));
  /* 111ad5f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 111ad5fd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad600 push ebx */
  push32((uint32_t)(EBX));
  /* 111ad601 push esi */
  push32((uint32_t)(ESI));
  /* 111ad602 push edi */
  push32((uint32_t)(EDI));
  /* 111ad603 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111ad606 cmp dword ptr [0x111d1854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad60d jne 0x111ad65e */
  if (!C.zf) goto L_111ad65e;
  /* 111ad60f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 111ad612 push eax */
  push32((uint32_t)(EAX));
  /* 111ad613 push 1 */
  push32((uint32_t)(0x1u));
  /* 111ad615 push 0x111cd23c */
  push32((uint32_t)(0x111cd23cu));
  /* 111ad61a push 1 */
  push32((uint32_t)(0x1u));
  /* 111ad61c call dword ptr [0x111d4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4314))), 0x111ad622u);
  /* 111ad622 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ad624 je 0x111ad632 */
  if (C.zf) goto L_111ad632;
  /* 111ad626 mov dword ptr [0x111d1854], 1 */
  w32((uint32_t)(0x111d1854), (0x1u));
  /* 111ad630 jmp 0x111ad65e */
  goto L_111ad65e;
L_111ad632:;
  /* 111ad632 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 111ad635 push ecx */
  push32((uint32_t)(ECX));
  /* 111ad636 push 1 */
  push32((uint32_t)(0x1u));
  /* 111ad638 push 0x111cd238 */
  push32((uint32_t)(0x111cd238u));
  /* 111ad63d push 1 */
  push32((uint32_t)(0x1u));
  /* 111ad63f push 0 */
  push32((uint32_t)(0x0u));
  /* 111ad641 call dword ptr [0x111d4324] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4324))), 0x111ad647u);
  /* 111ad647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ad649 je 0x111ad657 */
  if (C.zf) goto L_111ad657;
  /* 111ad64b mov dword ptr [0x111d1854], 2 */
  w32((uint32_t)(0x111d1854), (0x2u));
  /* 111ad655 jmp 0x111ad65e */
  goto L_111ad65e;
L_111ad657:;
  /* 111ad657 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ad659 jmp 0x111ad788 */
  goto L_111ad788;
L_111ad65e:;
  /* 111ad65e cmp dword ptr [0x111d1854], 2 */
  { uint32_t _a=(r32((uint32_t)(0x111d1854))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad665 jne 0x111ad695 */
  if (!C.zf) goto L_111ad695;
  /* 111ad667 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad66b jne 0x111ad676 */
  if (!C.zf) goto L_111ad676;
  /* 111ad66d mov edx, dword ptr [0x111d1860] */
  EDX = (r32((uint32_t)(0x111d1860)));
  /* 111ad673 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_111ad676:;
  /* 111ad676 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111ad679 push eax */
  push32((uint32_t)(EAX));
  /* 111ad67a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111ad67d push ecx */
  push32((uint32_t)(ECX));
  /* 111ad67e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad681 push edx */
  push32((uint32_t)(EDX));
  /* 111ad682 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad685 push eax */
  push32((uint32_t)(EAX));
  /* 111ad686 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 111ad689 push ecx */
  push32((uint32_t)(ECX));
  /* 111ad68a call dword ptr [0x111d4324] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4324))), 0x111ad690u);
  /* 111ad690 jmp 0x111ad788 */
  goto L_111ad788;
L_111ad695:;
  /* 111ad695 cmp dword ptr [0x111d1854], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111d1854))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad69c jne 0x111ad786 */
  if (!C.zf) goto L_111ad786;
  /* 111ad6a2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad6a6 jne 0x111ad6b1 */
  if (!C.zf) goto L_111ad6b1;
  /* 111ad6a8 mov edx, dword ptr [0x111d1870] */
  EDX = (r32((uint32_t)(0x111d1870)));
  /* 111ad6ae mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_111ad6b1:;
  /* 111ad6b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ad6b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ad6b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111ad6b8 push eax */
  push32((uint32_t)(EAX));
  /* 111ad6b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad6bc push ecx */
  push32((uint32_t)(ECX));
  /* 111ad6bd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 111ad6c0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 111ad6c2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ad6c4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 111ad6c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad6ca push edx */
  push32((uint32_t)(EDX));
  /* 111ad6cb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111ad6ce push eax */
  push32((uint32_t)(EAX));
  /* 111ad6cf call dword ptr [0x111d431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d431c))), 0x111ad6d5u);
  /* 111ad6d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 111ad6d8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad6dc jne 0x111ad6e5 */
  if (!C.zf) goto L_111ad6e5;
  /* 111ad6de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ad6e0 jmp 0x111ad788 */
  goto L_111ad788;
L_111ad6e5:;
  /* 111ad6e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111ad6ec mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 111ad6ef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111ad6f1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad6f4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 111ad6f6 call 0x111a8550 */
  push32(0x111ad6fbu); f_111a8550();
  /* 111ad6fb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 111ad6fe mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111ad701 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111ad704 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 111ad707 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 111ad70a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 111ad70c push edx */
  push32((uint32_t)(EDX));
  /* 111ad70d push 0 */
  push32((uint32_t)(0x0u));
  /* 111ad70f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ad712 push eax */
  push32((uint32_t)(EAX));
  /* 111ad713 call 0x111a9120 */
  push32(0x111ad718u); f_111a9120();
  /* 111ad718 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad71b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 111ad722 jmp 0x111ad73b */
  goto L_111ad73b;
  /* 111ad724 mov eax, 1 */
  EAX = (0x1u);
  /* 111ad729 ret  */
  ESPCHK(0x111ad5e0u, _esp0);
  ESP += 4; return;
  /* 111ad72a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 111ad72d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 111ad734 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_111ad73b:;
  /* 111ad73b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad73f jne 0x111ad745 */
  if (!C.zf) goto L_111ad745;
  /* 111ad741 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ad743 jmp 0x111ad788 */
  goto L_111ad788;
L_111ad745:;
  /* 111ad745 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111ad748 push ecx */
  push32((uint32_t)(ECX));
  /* 111ad749 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ad74c push edx */
  push32((uint32_t)(EDX));
  /* 111ad74d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111ad750 push eax */
  push32((uint32_t)(EAX));
  /* 111ad751 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad754 push ecx */
  push32((uint32_t)(ECX));
  /* 111ad755 push 1 */
  push32((uint32_t)(0x1u));
  /* 111ad757 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111ad75a push edx */
  push32((uint32_t)(EDX));
  /* 111ad75b call dword ptr [0x111d431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d431c))), 0x111ad761u);
  /* 111ad761 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 111ad764 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad768 jne 0x111ad76e */
  if (!C.zf) goto L_111ad76e;
  /* 111ad76a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ad76c jmp 0x111ad788 */
  goto L_111ad788;
L_111ad76e:;
  /* 111ad76e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111ad771 push eax */
  push32((uint32_t)(EAX));
  /* 111ad772 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111ad775 push ecx */
  push32((uint32_t)(ECX));
  /* 111ad776 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ad779 push edx */
  push32((uint32_t)(EDX));
  /* 111ad77a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad77d push eax */
  push32((uint32_t)(EAX));
  /* 111ad77e call dword ptr [0x111d4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4314))), 0x111ad784u);
  /* 111ad784 jmp 0x111ad788 */
  goto L_111ad788;
L_111ad786:;
  /* 111ad786 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111ad788:;
  /* 111ad788 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 111ad78b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111ad78e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 111ad795 pop edi */
  EDI = (pop32());
  /* 111ad796 pop esi */
  ESI = (pop32());
  /* 111ad797 pop ebx */
  EBX = (pop32());
  /* 111ad798 mov esp, ebp */
  ESP = (EBP);
  /* 111ad79a pop ebp */
  EBP = (pop32());
  /* 111ad79b ret  */
  ESPCHK(0x111ad5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7a0 @ 0x111ad7a0 (727 bytes, 263 insns) */
void f_111ad7a0(void) {
  FTRACE(0x111ad7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ad7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111ad7a1 mov ebp, esp */
  EBP = (ESP);
  /* 111ad7a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111ad7a5 push 0x111cd250 */
  push32((uint32_t)(0x111cd250u));
  /* 111ad7aa push 0x111ae4b8 */
  push32((uint32_t)(0x111ae4b8u));
  /* 111ad7af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 111ad7b5 push eax */
  push32((uint32_t)(EAX));
  /* 111ad7b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 111ad7bd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad7c0 push ebx */
  push32((uint32_t)(EBX));
  /* 111ad7c1 push esi */
  push32((uint32_t)(ESI));
  /* 111ad7c2 push edi */
  push32((uint32_t)(EDI));
  /* 111ad7c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111ad7c6 cmp dword ptr [0x111d1878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad7cd jne 0x111ad826 */
  if (!C.zf) goto L_111ad826;
  /* 111ad7cf push 0 */
  push32((uint32_t)(0x0u));
  /* 111ad7d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ad7d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111ad7d5 push 0x111cd23c */
  push32((uint32_t)(0x111cd23cu));
  /* 111ad7da push 0x100 */
  push32((uint32_t)(0x100u));
  /* 111ad7df push 0 */
  push32((uint32_t)(0x0u));
  /* 111ad7e1 call dword ptr [0x111d4318] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4318))), 0x111ad7e7u);
  /* 111ad7e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ad7e9 je 0x111ad7f7 */
  if (C.zf) goto L_111ad7f7;
  /* 111ad7eb mov dword ptr [0x111d1878], 1 */
  w32((uint32_t)(0x111d1878), (0x1u));
  /* 111ad7f5 jmp 0x111ad826 */
  goto L_111ad826;
L_111ad7f7:;
  /* 111ad7f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ad7f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ad7fb push 1 */
  push32((uint32_t)(0x1u));
  /* 111ad7fd push 0x111cd238 */
  push32((uint32_t)(0x111cd238u));
  /* 111ad802 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 111ad807 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ad809 call dword ptr [0x111d4310] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4310))), 0x111ad80fu);
  /* 111ad80f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ad811 je 0x111ad81f */
  if (C.zf) goto L_111ad81f;
  /* 111ad813 mov dword ptr [0x111d1878], 2 */
  w32((uint32_t)(0x111d1878), (0x2u));
  /* 111ad81d jmp 0x111ad826 */
  goto L_111ad826;
L_111ad81f:;
  /* 111ad81f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ad821 jmp 0x111ada91 */
  goto L_111ada91;
L_111ad826:;
  /* 111ad826 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad82a jle 0x111ad83f */
  if ((C.zf||C.sf!=C.of)) goto L_111ad83f;
  /* 111ad82c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111ad82f push eax */
  push32((uint32_t)(EAX));
  /* 111ad830 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111ad833 push ecx */
  push32((uint32_t)(ECX));
  /* 111ad834 call 0x111adab0 */
  push32(0x111ad839u); f_111adab0();
  /* 111ad839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad83c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_111ad83f:;
  /* 111ad83f cmp dword ptr [0x111d1878], 2 */
  { uint32_t _a=(r32((uint32_t)(0x111d1878))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad846 jne 0x111ad86b */
  if (!C.zf) goto L_111ad86b;
  /* 111ad848 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 111ad84b push edx */
  push32((uint32_t)(EDX));
  /* 111ad84c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111ad84f push eax */
  push32((uint32_t)(EAX));
  /* 111ad850 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111ad853 push ecx */
  push32((uint32_t)(ECX));
  /* 111ad854 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111ad857 push edx */
  push32((uint32_t)(EDX));
  /* 111ad858 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad85b push eax */
  push32((uint32_t)(EAX));
  /* 111ad85c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad85f push ecx */
  push32((uint32_t)(ECX));
  /* 111ad860 call dword ptr [0x111d4310] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4310))), 0x111ad866u);
  /* 111ad866 jmp 0x111ada91 */
  goto L_111ada91;
L_111ad86b:;
  /* 111ad86b cmp dword ptr [0x111d1878], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111d1878))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad872 jne 0x111ada8f */
  if (!C.zf) goto L_111ada8f;
  /* 111ad878 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad87c jne 0x111ad887 */
  if (!C.zf) goto L_111ad887;
  /* 111ad87e mov edx, dword ptr [0x111d1870] */
  EDX = (r32((uint32_t)(0x111d1870)));
  /* 111ad884 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_111ad887:;
  /* 111ad887 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ad889 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ad88b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111ad88e push eax */
  push32((uint32_t)(EAX));
  /* 111ad88f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111ad892 push ecx */
  push32((uint32_t)(ECX));
  /* 111ad893 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 111ad896 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 111ad898 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ad89a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 111ad89d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad8a0 push edx */
  push32((uint32_t)(EDX));
  /* 111ad8a1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 111ad8a4 push eax */
  push32((uint32_t)(EAX));
  /* 111ad8a5 call dword ptr [0x111d431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d431c))), 0x111ad8abu);
  /* 111ad8ab mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 111ad8ae cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad8b2 jne 0x111ad8bb */
  if (!C.zf) goto L_111ad8bb;
  /* 111ad8b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ad8b6 jmp 0x111ada91 */
  goto L_111ada91;
L_111ad8bb:;
  /* 111ad8bb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111ad8c2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111ad8c5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111ad8c7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad8ca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 111ad8cc call 0x111a8550 */
  push32(0x111ad8d1u); f_111a8550();
  /* 111ad8d1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 111ad8d4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111ad8d7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111ad8da mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 111ad8dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 111ad8e4 jmp 0x111ad8fd */
  goto L_111ad8fd;
  /* 111ad8e6 mov eax, 1 */
  EAX = (0x1u);
  /* 111ad8eb ret  */
  ESPCHK(0x111ad7a0u, _esp0);
  ESP += 4; return;
  /* 111ad8ec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 111ad8ef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 111ad8f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_111ad8fd:;
  /* 111ad8fd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad901 jne 0x111ad90a */
  if (!C.zf) goto L_111ad90a;
  /* 111ad903 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ad905 jmp 0x111ada91 */
  goto L_111ada91;
L_111ad90a:;
  /* 111ad90a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111ad90d push edx */
  push32((uint32_t)(EDX));
  /* 111ad90e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ad911 push eax */
  push32((uint32_t)(EAX));
  /* 111ad912 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111ad915 push ecx */
  push32((uint32_t)(ECX));
  /* 111ad916 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111ad919 push edx */
  push32((uint32_t)(EDX));
  /* 111ad91a push 1 */
  push32((uint32_t)(0x1u));
  /* 111ad91c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 111ad91f push eax */
  push32((uint32_t)(EAX));
  /* 111ad920 call dword ptr [0x111d431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d431c))), 0x111ad926u);
  /* 111ad926 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ad928 jne 0x111ad931 */
  if (!C.zf) goto L_111ad931;
  /* 111ad92a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ad92c jmp 0x111ada91 */
  goto L_111ada91;
L_111ad931:;
  /* 111ad931 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ad933 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ad935 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111ad938 push ecx */
  push32((uint32_t)(ECX));
  /* 111ad939 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ad93c push edx */
  push32((uint32_t)(EDX));
  /* 111ad93d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad940 push eax */
  push32((uint32_t)(EAX));
  /* 111ad941 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad944 push ecx */
  push32((uint32_t)(ECX));
  /* 111ad945 call dword ptr [0x111d4318] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4318))), 0x111ad94bu);
  /* 111ad94b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 111ad94e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad952 jne 0x111ad95b */
  if (!C.zf) goto L_111ad95b;
  /* 111ad954 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ad956 jmp 0x111ada91 */
  goto L_111ada91;
L_111ad95b:;
  /* 111ad95b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad95e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 111ad964 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111ad966 je 0x111ad9ab */
  if (C.zf) goto L_111ad9ab;
  /* 111ad968 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad96c je 0x111ad9a6 */
  if (C.zf) goto L_111ad9a6;
  /* 111ad96e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111ad971 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad974 jle 0x111ad97d */
  if ((C.zf||C.sf!=C.of)) goto L_111ad97d;
  /* 111ad976 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ad978 jmp 0x111ada91 */
  goto L_111ada91;
L_111ad97d:;
  /* 111ad97d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 111ad980 push ecx */
  push32((uint32_t)(ECX));
  /* 111ad981 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111ad984 push edx */
  push32((uint32_t)(EDX));
  /* 111ad985 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111ad988 push eax */
  push32((uint32_t)(EAX));
  /* 111ad989 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ad98c push ecx */
  push32((uint32_t)(ECX));
  /* 111ad98d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ad990 push edx */
  push32((uint32_t)(EDX));
  /* 111ad991 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ad994 push eax */
  push32((uint32_t)(EAX));
  /* 111ad995 call dword ptr [0x111d4318] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4318))), 0x111ad99bu);
  /* 111ad99b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ad99d jne 0x111ad9a6 */
  if (!C.zf) goto L_111ad9a6;
  /* 111ad99f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ad9a1 jmp 0x111ada91 */
  goto L_111ada91;
L_111ad9a6:;
  /* 111ad9a6 jmp 0x111ada8a */
  goto L_111ada8a;
L_111ad9ab:;
  /* 111ad9ab mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111ad9ae mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 111ad9b1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111ad9b8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111ad9bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111ad9bd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ad9c0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 111ad9c2 call 0x111a8550 */
  push32(0x111ad9c7u); f_111a8550();
  /* 111ad9c7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 111ad9ca mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111ad9cd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 111ad9d0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 111ad9d3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 111ad9da jmp 0x111ad9f3 */
  goto L_111ad9f3;
  /* 111ad9dc mov eax, 1 */
  EAX = (0x1u);
  /* 111ad9e1 ret  */
  ESPCHK(0x111ad7a0u, _esp0);
  ESP += 4; return;
  /* 111ad9e2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 111ad9e5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 111ad9ec mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_111ad9f3:;
  /* 111ad9f3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ad9f7 jne 0x111ada00 */
  if (!C.zf) goto L_111ada00;
  /* 111ad9f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ad9fb jmp 0x111ada91 */
  goto L_111ada91;
L_111ada00:;
  /* 111ada00 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111ada03 push eax */
  push32((uint32_t)(EAX));
  /* 111ada04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111ada07 push ecx */
  push32((uint32_t)(ECX));
  /* 111ada08 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111ada0b push edx */
  push32((uint32_t)(EDX));
  /* 111ada0c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111ada0f push eax */
  push32((uint32_t)(EAX));
  /* 111ada10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ada13 push ecx */
  push32((uint32_t)(ECX));
  /* 111ada14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ada17 push edx */
  push32((uint32_t)(EDX));
  /* 111ada18 call dword ptr [0x111d4318] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4318))), 0x111ada1eu);
  /* 111ada1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ada20 jne 0x111ada26 */
  if (!C.zf) goto L_111ada26;
  /* 111ada22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ada24 jmp 0x111ada91 */
  goto L_111ada91;
L_111ada26:;
  /* 111ada26 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ada2a jne 0x111ada5a */
  if (!C.zf) goto L_111ada5a;
  /* 111ada2c push 0 */
  push32((uint32_t)(0x0u));
  /* 111ada2e push 0 */
  push32((uint32_t)(0x0u));
  /* 111ada30 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ada32 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ada34 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111ada37 push eax */
  push32((uint32_t)(EAX));
  /* 111ada38 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111ada3b push ecx */
  push32((uint32_t)(ECX));
  /* 111ada3c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 111ada41 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 111ada44 push edx */
  push32((uint32_t)(EDX));
  /* 111ada45 call dword ptr [0x111d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4368))), 0x111ada4bu);
  /* 111ada4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 111ada4e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ada52 jne 0x111ada58 */
  if (!C.zf) goto L_111ada58;
  /* 111ada54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ada56 jmp 0x111ada91 */
  goto L_111ada91;
L_111ada58:;
  /* 111ada58 jmp 0x111ada8a */
  goto L_111ada8a;
L_111ada5a:;
  /* 111ada5a push 0 */
  push32((uint32_t)(0x0u));
  /* 111ada5c push 0 */
  push32((uint32_t)(0x0u));
  /* 111ada5e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 111ada61 push eax */
  push32((uint32_t)(EAX));
  /* 111ada62 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111ada65 push ecx */
  push32((uint32_t)(ECX));
  /* 111ada66 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111ada69 push edx */
  push32((uint32_t)(EDX));
  /* 111ada6a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 111ada6d push eax */
  push32((uint32_t)(EAX));
  /* 111ada6e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 111ada73 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 111ada76 push ecx */
  push32((uint32_t)(ECX));
  /* 111ada77 call dword ptr [0x111d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4368))), 0x111ada7du);
  /* 111ada7d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 111ada80 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ada84 jne 0x111ada8a */
  if (!C.zf) goto L_111ada8a;
  /* 111ada86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ada88 jmp 0x111ada91 */
  goto L_111ada91;
L_111ada8a:;
  /* 111ada8a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111ada8d jmp 0x111ada91 */
  goto L_111ada91;
L_111ada8f:;
  /* 111ada8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111ada91:;
  /* 111ada91 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 111ada94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111ada97 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 111ada9e pop edi */
  EDI = (pop32());
  /* 111ada9f pop esi */
  ESI = (pop32());
  /* 111adaa0 pop ebx */
  EBX = (pop32());
  /* 111adaa1 mov esp, ebp */
  ESP = (EBP);
  /* 111adaa3 pop ebp */
  EBP = (pop32());
  /* 111adaa4 ret  */
  ESPCHK(0x111ad7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dab0 @ 0x111adab0 (80 bytes, 32 insns) */
void f_111adab0(void) {
  FTRACE(0x111adab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111adab0 push ebp */
  push32((uint32_t)(EBP));
  /* 111adab1 mov ebp, esp */
  EBP = (ESP);
  /* 111adab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111adab6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111adab9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111adabc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adabf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111adac2:;
  /* 111adac2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111adac5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111adac8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111adacb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111adace test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111adad0 je 0x111adae7 */
  if (C.zf) goto L_111adae7;
  /* 111adad2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111adad5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111adad8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111adada je 0x111adae7 */
  if (C.zf) goto L_111adae7;
  /* 111adadc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111adadf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111adae2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111adae5 jmp 0x111adac2 */
  goto L_111adac2;
L_111adae7:;
  /* 111adae7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111adaea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111adaed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111adaef jne 0x111adaf9 */
  if (!C.zf) goto L_111adaf9;
  /* 111adaf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111adaf4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111adaf7 jmp 0x111adafc */
  goto L_111adafc;
L_111adaf9:;
  /* 111adaf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_111adafc:;
  /* 111adafc mov esp, ebp */
  ESP = (EBP);
  /* 111adafe pop ebp */
  EBP = (pop32());
  /* 111adaff ret  */
  ESPCHK(0x111adab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db00 @ 0x111adb00 (130 bytes, 43 insns) */
void f_111adb00(void) {
  FTRACE(0x111adb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111adb00 push ebp */
  push32((uint32_t)(EBP));
  /* 111adb01 mov ebp, esp */
  EBP = (ESP);
  /* 111adb03 push ecx */
  push32((uint32_t)(ECX));
  /* 111adb04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adb07 cmp eax, dword ptr [0x111d317c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d317c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111adb0d jae 0x111adb31 */
  if (!C.cf) goto L_111adb31;
  /* 111adb0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adb12 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111adb15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adb18 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 111adb1b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111adb1e mov eax, dword ptr [ecx*4 + 0x111d3040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111d3040)));
  /* 111adb25 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 111adb2a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 111adb2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111adb2f jne 0x111adb4c */
  if (!C.zf) goto L_111adb4c;
L_111adb31:;
  /* 111adb31 call 0x111ad280 */
  push32(0x111adb36u); f_111ad280();
  /* 111adb36 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111adb3c call 0x111ad290 */
  push32(0x111adb41u); f_111ad290();
  /* 111adb41 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111adb47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111adb4a jmp 0x111adb7e */
  goto L_111adb7e;
L_111adb4c:;
  /* 111adb4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adb4f push edx */
  push32((uint32_t)(EDX));
  /* 111adb50 call 0x111aeaa0 */
  push32(0x111adb55u); f_111aeaa0();
  /* 111adb55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111adb58 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111adb5b push eax */
  push32((uint32_t)(EAX));
  /* 111adb5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111adb5f push ecx */
  push32((uint32_t)(ECX));
  /* 111adb60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adb63 push edx */
  push32((uint32_t)(EDX));
  /* 111adb64 call 0x111adb90 */
  push32(0x111adb69u); f_111adb90();
  /* 111adb69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111adb6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111adb6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adb72 push eax */
  push32((uint32_t)(EAX));
  /* 111adb73 call 0x111aeb30 */
  push32(0x111adb78u); f_111aeb30();
  /* 111adb78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111adb7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_111adb7e:;
  /* 111adb7e mov esp, ebp */
  ESP = (EBP);
  /* 111adb80 pop ebp */
  EBP = (pop32());
  /* 111adb81 ret  */
  ESPCHK(0x111adb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db90 @ 0x111adb90 (178 bytes, 56 insns) */
void f_111adb90(void) {
  FTRACE(0x111adb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111adb90 push ebp */
  push32((uint32_t)(EBP));
  /* 111adb91 mov ebp, esp */
  EBP = (ESP);
  /* 111adb93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111adb96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adb99 push eax */
  push32((uint32_t)(EAX));
  /* 111adb9a call 0x111ae920 */
  push32(0x111adb9fu); f_111ae920();
  /* 111adb9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111adba2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111adba5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111adba9 jne 0x111adbbe */
  if (!C.zf) goto L_111adbbe;
  /* 111adbab call 0x111ad280 */
  push32(0x111adbb0u); f_111ad280();
  /* 111adbb0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111adbb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111adbb9 jmp 0x111adc3e */
  goto L_111adc3e;
L_111adbbe:;
  /* 111adbbe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111adbc1 push ecx */
  push32((uint32_t)(ECX));
  /* 111adbc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111adbc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111adbc7 push edx */
  push32((uint32_t)(EDX));
  /* 111adbc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111adbcb push eax */
  push32((uint32_t)(EAX));
  /* 111adbcc call dword ptr [0x111d4308] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4308))), 0x111adbd2u);
  /* 111adbd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111adbd5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111adbd9 jne 0x111adbe6 */
  if (!C.zf) goto L_111adbe6;
  /* 111adbdb call dword ptr [0x111d43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43ac))), 0x111adbe1u);
  /* 111adbe1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111adbe4 jmp 0x111adbed */
  goto L_111adbed;
L_111adbe6:;
  /* 111adbe6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_111adbed:;
  /* 111adbed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111adbf1 je 0x111adc04 */
  if (C.zf) goto L_111adc04;
  /* 111adbf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111adbf6 push ecx */
  push32((uint32_t)(ECX));
  /* 111adbf7 call 0x111ad1e0 */
  push32(0x111adbfcu); f_111ad1e0();
  /* 111adbfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111adbff or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111adc02 jmp 0x111adc3e */
  goto L_111adc3e;
L_111adc04:;
  /* 111adc04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adc07 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 111adc0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adc0d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111adc10 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111adc13 mov ecx, dword ptr [edx*4 + 0x111d3040] */
  ECX = (r32((uint32_t)(EDX*4 + 0x111d3040)));
  /* 111adc1a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 111adc1e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 111adc21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adc24 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111adc27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adc2a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 111adc2d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111adc30 mov eax, dword ptr [eax*4 + 0x111d3040] */
  EAX = (r32((uint32_t)(EAX*4 + 0x111d3040)));
  /* 111adc37 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 111adc3b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_111adc3e:;
  /* 111adc3e mov esp, ebp */
  ESP = (EBP);
  /* 111adc40 pop ebp */
  EBP = (pop32());
  /* 111adc41 ret  */
  ESPCHK(0x111adb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc50 @ 0x111adc50 (130 bytes, 43 insns) */
void f_111adc50(void) {
  FTRACE(0x111adc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111adc50 push ebp */
  push32((uint32_t)(EBP));
  /* 111adc51 mov ebp, esp */
  EBP = (ESP);
  /* 111adc53 push ecx */
  push32((uint32_t)(ECX));
  /* 111adc54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adc57 cmp eax, dword ptr [0x111d317c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d317c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111adc5d jae 0x111adc81 */
  if (!C.cf) goto L_111adc81;
  /* 111adc5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adc62 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111adc65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adc68 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 111adc6b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111adc6e mov eax, dword ptr [ecx*4 + 0x111d3040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111d3040)));
  /* 111adc75 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 111adc7a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 111adc7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111adc7f jne 0x111adc9c */
  if (!C.zf) goto L_111adc9c;
L_111adc81:;
  /* 111adc81 call 0x111ad280 */
  push32(0x111adc86u); f_111ad280();
  /* 111adc86 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111adc8c call 0x111ad290 */
  push32(0x111adc91u); f_111ad290();
  /* 111adc91 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111adc97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111adc9a jmp 0x111adcce */
  goto L_111adcce;
L_111adc9c:;
  /* 111adc9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adc9f push edx */
  push32((uint32_t)(EDX));
  /* 111adca0 call 0x111aeaa0 */
  push32(0x111adca5u); f_111aeaa0();
  /* 111adca5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111adca8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111adcab push eax */
  push32((uint32_t)(EAX));
  /* 111adcac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111adcaf push ecx */
  push32((uint32_t)(ECX));
  /* 111adcb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adcb3 push edx */
  push32((uint32_t)(EDX));
  /* 111adcb4 call 0x111adce0 */
  push32(0x111adcb9u); f_111adce0();
  /* 111adcb9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111adcbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111adcbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adcc2 push eax */
  push32((uint32_t)(EAX));
  /* 111adcc3 call 0x111aeb30 */
  push32(0x111adcc8u); f_111aeb30();
  /* 111adcc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111adccb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_111adcce:;
  /* 111adcce mov esp, ebp */
  ESP = (EBP);
  /* 111adcd0 pop ebp */
  EBP = (pop32());
  /* 111adcd1 ret  */
  ESPCHK(0x111adc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dce0 @ 0x111adce0 (627 bytes, 182 insns) */
void f_111adce0(void) {
  FTRACE(0x111adce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111adce0 push ebp */
  push32((uint32_t)(EBP));
  /* 111adce1 mov ebp, esp */
  EBP = (ESP);
  /* 111adce3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111adce9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111adcf0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111adcf3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 111adcf9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111adcfd jne 0x111add06 */
  if (!C.zf) goto L_111add06;
  /* 111adcff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111add01 jmp 0x111adf4f */
  goto L_111adf4f;
L_111add06:;
  /* 111add06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111add09 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111add0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111add0f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 111add12 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111add15 mov eax, dword ptr [ecx*4 + 0x111d3040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111d3040)));
  /* 111add1c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 111add21 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 111add24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111add26 je 0x111add38 */
  if (C.zf) goto L_111add38;
  /* 111add28 push 2 */
  push32((uint32_t)(0x2u));
  /* 111add2a push 0 */
  push32((uint32_t)(0x0u));
  /* 111add2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111add2f push edx */
  push32((uint32_t)(EDX));
  /* 111add30 call 0x111adb90 */
  push32(0x111add35u); f_111adb90();
  /* 111add35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111add38:;
  /* 111add38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111add3b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111add3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111add41 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 111add44 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111add47 mov edx, dword ptr [eax*4 + 0x111d3040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111d3040)));
  /* 111add4e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 111add53 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 111add58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111add5a je 0x111ade6c */
  if (C.zf) goto L_111ade6c;
  /* 111add60 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111add63 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111add66 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_111add6d:;
  /* 111add6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111add70 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111add73 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111add76 jae 0x111ade6a */
  if (!C.cf) goto L_111ade6a;
  /* 111add7c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 111add82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111add85:;
  /* 111add85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111add88 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 111add8e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111add90 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111add96 jge 0x111addf7 */
  if ((C.sf==C.of)) goto L_111addf7;
  /* 111add98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111add9b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111add9e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111adda1 jae 0x111addf7 */
  if (!C.cf) goto L_111addf7;
  /* 111adda3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111adda6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111adda8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 111addae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111addb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111addb4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111addb7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 111addbe cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111addc1 jne 0x111adde1 */
  if (!C.zf) goto L_111adde1;
  /* 111addc3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 111addc9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111addcc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 111addd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111addd5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 111addd8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111adddb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111addde mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_111adde1:;
  /* 111adde1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111adde4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 111addea mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 111addec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111addef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111addf2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111addf5 jmp 0x111add85 */
  goto L_111add85;
L_111addf7:;
  /* 111addf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111addf9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 111addff push edx */
  push32((uint32_t)(EDX));
  /* 111ade00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ade03 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 111ade09 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ade0b push eax */
  push32((uint32_t)(EAX));
  /* 111ade0c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 111ade12 push edx */
  push32((uint32_t)(EDX));
  /* 111ade13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ade16 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111ade19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ade1c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 111ade1f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111ade22 mov edx, dword ptr [eax*4 + 0x111d3040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111d3040)));
  /* 111ade29 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 111ade2c push eax */
  push32((uint32_t)(EAX));
  /* 111ade2d call dword ptr [0x111d4388] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4388))), 0x111ade33u);
  /* 111ade33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ade35 je 0x111ade5a */
  if (C.zf) goto L_111ade5a;
  /* 111ade37 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111ade3a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ade40 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111ade43 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ade46 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 111ade4c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ade4e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ade54 jge 0x111ade58 */
  if ((C.sf==C.of)) goto L_111ade58;
  /* 111ade56 jmp 0x111ade6a */
  goto L_111ade6a;
L_111ade58:;
  /* 111ade58 jmp 0x111ade65 */
  goto L_111ade65;
L_111ade5a:;
  /* 111ade5a call dword ptr [0x111d43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43ac))), 0x111ade60u);
  /* 111ade60 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111ade63 jmp 0x111ade6a */
  goto L_111ade6a;
L_111ade65:;
  /* 111ade65 jmp 0x111add6d */
  goto L_111add6d;
L_111ade6a:;
  /* 111ade6a jmp 0x111adebc */
  goto L_111adebc;
L_111ade6c:;
  /* 111ade6c push 0 */
  push32((uint32_t)(0x0u));
  /* 111ade6e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 111ade74 push ecx */
  push32((uint32_t)(ECX));
  /* 111ade75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111ade78 push edx */
  push32((uint32_t)(EDX));
  /* 111ade79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ade7c push eax */
  push32((uint32_t)(EAX));
  /* 111ade7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ade80 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111ade83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ade86 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 111ade89 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111ade8c mov eax, dword ptr [ecx*4 + 0x111d3040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111d3040)));
  /* 111ade93 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 111ade96 push ecx */
  push32((uint32_t)(ECX));
  /* 111ade97 call dword ptr [0x111d4388] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4388))), 0x111ade9du);
  /* 111ade9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ade9f je 0x111adeb3 */
  if (C.zf) goto L_111adeb3;
  /* 111adea1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 111adea8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 111adeae mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 111adeb1 jmp 0x111adebc */
  goto L_111adebc;
L_111adeb3:;
  /* 111adeb3 call dword ptr [0x111d43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43ac))), 0x111adeb9u);
  /* 111adeb9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_111adebc:;
  /* 111adebc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111adec0 jne 0x111adf46 */
  if (!C.zf) goto L_111adf46;
  /* 111adec6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111adeca je 0x111adefa */
  if (C.zf) goto L_111adefa;
  /* 111adecc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aded0 jne 0x111adee9 */
  if (!C.zf) goto L_111adee9;
  /* 111aded2 call 0x111ad280 */
  push32(0x111aded7u); f_111ad280();
  /* 111aded7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111adedd call 0x111ad290 */
  push32(0x111adee2u); f_111ad290();
  /* 111adee2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111adee5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 111adee7 jmp 0x111adef5 */
  goto L_111adef5;
L_111adee9:;
  /* 111adee9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111adeec push edx */
  push32((uint32_t)(EDX));
  /* 111adeed call 0x111ad1e0 */
  push32(0x111adef2u); f_111ad1e0();
  /* 111adef2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111adef5:;
  /* 111adef5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111adef8 jmp 0x111adf4f */
  goto L_111adf4f;
L_111adefa:;
  /* 111adefa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adefd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111adf00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adf03 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 111adf06 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111adf09 mov edx, dword ptr [eax*4 + 0x111d3040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111d3040)));
  /* 111adf10 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 111adf15 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 111adf18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111adf1a je 0x111adf2b */
  if (C.zf) goto L_111adf2b;
  /* 111adf1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111adf1f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111adf22 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111adf25 jne 0x111adf2b */
  if (!C.zf) goto L_111adf2b;
  /* 111adf27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111adf29 jmp 0x111adf4f */
  goto L_111adf4f;
L_111adf2b:;
  /* 111adf2b call 0x111ad280 */
  push32(0x111adf30u); f_111ad280();
  /* 111adf30 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 111adf36 call 0x111ad290 */
  push32(0x111adf3bu); f_111ad290();
  /* 111adf3b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111adf41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111adf44 jmp 0x111adf4f */
  goto L_111adf4f;
L_111adf46:;
  /* 111adf46 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111adf49 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_111adf4f:;
  /* 111adf4f mov esp, ebp */
  ESP = (EBP);
  /* 111adf51 pop ebp */
  EBP = (pop32());
  /* 111adf52 ret  */
  ESPCHK(0x111adce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df60 @ 0x111adf60 (199 bytes, 68 insns) */
void f_111adf60(void) {
  FTRACE(0x111adf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111adf60 push ebp */
  push32((uint32_t)(EBP));
  /* 111adf61 mov ebp, esp */
  EBP = (ESP);
  /* 111adf63 push ecx */
  push32((uint32_t)(ECX));
  /* 111adf64 push ebx */
  push32((uint32_t)(EBX));
  /* 111adf65 push esi */
  push32((uint32_t)(ESI));
  /* 111adf66 push edi */
  push32((uint32_t)(EDI));
L_111adf67:;
  /* 111adf67 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111adf6b jne 0x111adf8b */
  if (!C.zf) goto L_111adf8b;
  /* 111adf6d push 0x111cd19c */
  push32((uint32_t)(0x111cd19cu));
  /* 111adf72 push 0 */
  push32((uint32_t)(0x0u));
  /* 111adf74 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 111adf76 push 0x111cd268 */
  push32((uint32_t)(0x111cd268u));
  /* 111adf7b push 2 */
  push32((uint32_t)(0x2u));
  /* 111adf7d call 0x111a4470 */
  push32(0x111adf82u); f_111a4470();
  /* 111adf82 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111adf85 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111adf88 jne 0x111adf8b */
  if (!C.zf) goto L_111adf8b;
  /* 111adf8a int3  */
  x86_unimpl("int3 @ 0x111adf8a");
L_111adf8b:;
  /* 111adf8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111adf8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111adf8f jne 0x111adf67 */
  if (!C.zf) goto L_111adf67;
  /* 111adf91 mov ecx, dword ptr [0x111d187c] */
  ECX = (r32((uint32_t)(0x111d187c)));
  /* 111adf97 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111adf9a mov dword ptr [0x111d187c], ecx */
  w32((uint32_t)(0x111d187c), (ECX));
  /* 111adfa0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111adfa3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111adfa6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 111adfa8 push 0x111cd268 */
  push32((uint32_t)(0x111cd268u));
  /* 111adfad push 2 */
  push32((uint32_t)(0x2u));
  /* 111adfaf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 111adfb4 call 0x111a53b0 */
  push32(0x111adfb9u); f_111a53b0();
  /* 111adfb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111adfbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111adfbf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 111adfc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111adfc5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111adfc9 je 0x111adfe6 */
  if (C.zf) goto L_111adfe6;
  /* 111adfcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111adfce mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 111adfd1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 111adfd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111adfd7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 111adfda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111adfdd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 111adfe4 jmp 0x111ae00b */
  goto L_111ae00b;
L_111adfe6:;
  /* 111adfe6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111adfe9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111adfec or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 111adfef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111adff2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 111adff5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111adff8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111adffb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111adffe mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 111ae001 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae004 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_111ae00b:;
  /* 111ae00b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae00e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae011 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 111ae014 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111ae016 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae019 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 111ae020 pop edi */
  EDI = (pop32());
  /* 111ae021 pop esi */
  ESI = (pop32());
  /* 111ae022 pop ebx */
  EBX = (pop32());
  /* 111ae023 mov esp, ebp */
  ESP = (EBP);
  /* 111ae025 pop ebp */
  EBP = (pop32());
  /* 111ae026 ret  */
  ESPCHK(0x111adf60u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x111ae030 (50 bytes, 17 insns) */
void f_111ae030(void) {
  FTRACE(0x111ae030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ae030 push ebp */
  push32((uint32_t)(EBP));
  /* 111ae031 mov ebp, esp */
  EBP = (ESP);
  /* 111ae033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae036 cmp eax, dword ptr [0x111d317c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d317c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae03c jb 0x111ae042 */
  if (C.cf) goto L_111ae042;
  /* 111ae03e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ae040 jmp 0x111ae060 */
  goto L_111ae060;
L_111ae042:;
  /* 111ae042 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae045 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111ae048 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae04b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 111ae04e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111ae051 mov eax, dword ptr [ecx*4 + 0x111d3040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111d3040)));
  /* 111ae058 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 111ae05d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_111ae060:;
  /* 111ae060 pop ebp */
  EBP = (pop32());
  /* 111ae061 ret  */
  ESPCHK(0x111ae030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e070 @ 0x111ae070 (300 bytes, 80 insns) */
void f_111ae070(void) {
  FTRACE(0x111ae070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ae070 push ebp */
  push32((uint32_t)(EBP));
  /* 111ae071 mov ebp, esp */
  EBP = (ESP);
  /* 111ae073 push ecx */
  push32((uint32_t)(ECX));
  /* 111ae074 cmp dword ptr [0x111d2d40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d2d40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae07b jne 0x111ae089 */
  if (!C.zf) goto L_111ae089;
  /* 111ae07d mov dword ptr [0x111d2d40], 0x200 */
  w32((uint32_t)(0x111d2d40), (0x200u));
  /* 111ae087 jmp 0x111ae09c */
  goto L_111ae09c;
L_111ae089:;
  /* 111ae089 cmp dword ptr [0x111d2d40], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x111d2d40))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae090 jge 0x111ae09c */
  if ((C.sf==C.of)) goto L_111ae09c;
  /* 111ae092 mov dword ptr [0x111d2d40], 0x14 */
  w32((uint32_t)(0x111d2d40), (0x14u));
L_111ae09c:;
  /* 111ae09c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 111ae0a1 push 0x111cd274 */
  push32((uint32_t)(0x111cd274u));
  /* 111ae0a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 111ae0a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 111ae0aa mov eax, dword ptr [0x111d2d40] */
  EAX = (r32((uint32_t)(0x111d2d40)));
  /* 111ae0af push eax */
  push32((uint32_t)(EAX));
  /* 111ae0b0 call 0x111a57c0 */
  push32(0x111ae0b5u); f_111a57c0();
  /* 111ae0b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae0b8 mov dword ptr [0x111d19f0], eax */
  w32((uint32_t)(0x111d19f0), (EAX));
  /* 111ae0bd cmp dword ptr [0x111d19f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae0c4 jne 0x111ae105 */
  if (!C.zf) goto L_111ae105;
  /* 111ae0c6 mov dword ptr [0x111d2d40], 0x14 */
  w32((uint32_t)(0x111d2d40), (0x14u));
  /* 111ae0d0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 111ae0d5 push 0x111cd274 */
  push32((uint32_t)(0x111cd274u));
  /* 111ae0da push 2 */
  push32((uint32_t)(0x2u));
  /* 111ae0dc push 4 */
  push32((uint32_t)(0x4u));
  /* 111ae0de mov ecx, dword ptr [0x111d2d40] */
  ECX = (r32((uint32_t)(0x111d2d40)));
  /* 111ae0e4 push ecx */
  push32((uint32_t)(ECX));
  /* 111ae0e5 call 0x111a57c0 */
  push32(0x111ae0eau); f_111a57c0();
  /* 111ae0ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae0ed mov dword ptr [0x111d19f0], eax */
  w32((uint32_t)(0x111d19f0), (EAX));
  /* 111ae0f2 cmp dword ptr [0x111d19f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae0f9 jne 0x111ae105 */
  if (!C.zf) goto L_111ae105;
  /* 111ae0fb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 111ae0fd call 0x111a4320 */
  push32(0x111ae102u); f_111a4320();
  /* 111ae102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111ae105:;
  /* 111ae105 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111ae10c jmp 0x111ae117 */
  goto L_111ae117;
L_111ae10e:;
  /* 111ae10e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae111 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae114 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111ae117:;
  /* 111ae117 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae11b jge 0x111ae136 */
  if ((C.sf==C.of)) goto L_111ae136;
  /* 111ae11d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae120 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111ae123 add eax, 0x111d0120 */
  { uint32_t _a=(EAX),_b=(0x111d0120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae128 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae12b mov edx, dword ptr [0x111d19f0] */
  EDX = (r32((uint32_t)(0x111d19f0)));
  /* 111ae131 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 111ae134 jmp 0x111ae10e */
  goto L_111ae10e;
L_111ae136:;
  /* 111ae136 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111ae13d jmp 0x111ae148 */
  goto L_111ae148;
L_111ae13f:;
  /* 111ae13f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae142 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae145 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111ae148:;
  /* 111ae148 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae14c jge 0x111ae198 */
  if ((C.sf==C.of)) goto L_111ae198;
  /* 111ae14e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae151 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111ae154 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae157 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 111ae15a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111ae15d mov eax, dword ptr [ecx*4 + 0x111d3040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111d3040)));
  /* 111ae164 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae168 je 0x111ae186 */
  if (C.zf) goto L_111ae186;
  /* 111ae16a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae16d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111ae170 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae173 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 111ae176 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111ae179 mov eax, dword ptr [ecx*4 + 0x111d3040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111d3040)));
  /* 111ae180 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae184 jne 0x111ae196 */
  if (!C.zf) goto L_111ae196;
L_111ae186:;
  /* 111ae186 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae189 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111ae18c mov dword ptr [ecx + 0x111d0130], 0xffffffff */
  w32((uint32_t)(ECX + 0x111d0130), (0xffffffffu));
L_111ae196:;
  /* 111ae196 jmp 0x111ae13f */
  goto L_111ae13f;
L_111ae198:;
  /* 111ae198 mov esp, ebp */
  ESP = (EBP);
  /* 111ae19a pop ebp */
  EBP = (pop32());
  /* 111ae19b ret  */
  ESPCHK(0x111ae070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1a0 @ 0x111ae1a0 (26 bytes, 9 insns) */
void f_111ae1a0(void) {
  FTRACE(0x111ae1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ae1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111ae1a1 mov ebp, esp */
  EBP = (ESP);
  /* 111ae1a3 call 0x111aeda0 */
  push32(0x111ae1a8u); f_111aeda0();
  /* 111ae1a8 movsx eax, byte ptr [0x111d1694] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x111d1694))));
  /* 111ae1af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ae1b1 je 0x111ae1b8 */
  if (C.zf) goto L_111ae1b8;
  /* 111ae1b3 call 0x111aeb60 */
  push32(0x111ae1b8u); f_111aeb60();
L_111ae1b8:;
  /* 111ae1b8 pop ebp */
  EBP = (pop32());
  /* 111ae1b9 ret  */
  ESPCHK(0x111ae1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1c0 @ 0x111ae1c0 (61 bytes, 20 insns) */
void f_111ae1c0(void) {
  FTRACE(0x111ae1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ae1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111ae1c1 mov ebp, esp */
  EBP = (ESP);
  /* 111ae1c3 cmp dword ptr [ebp + 8], 0x111d0120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x111d0120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae1ca jb 0x111ae1ee */
  if (C.cf) goto L_111ae1ee;
  /* 111ae1cc cmp dword ptr [ebp + 8], 0x111d0380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x111d0380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae1d3 ja 0x111ae1ee */
  if ((!C.cf&&!C.zf)) goto L_111ae1ee;
  /* 111ae1d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae1d8 sub eax, 0x111d0120 */
  { uint32_t _a=(EAX),_b=(0x111d0120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ae1dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111ae1e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae1e3 push eax */
  push32((uint32_t)(EAX));
  /* 111ae1e4 call 0x111a8db0 */
  push32(0x111ae1e9u); f_111a8db0();
  /* 111ae1e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae1ec jmp 0x111ae1fb */
  goto L_111ae1fb;
L_111ae1ee:;
  /* 111ae1ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae1f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae1f4 push ecx */
  push32((uint32_t)(ECX));
  /* 111ae1f5 call dword ptr [0x111d4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4344))), 0x111ae1fbu);
L_111ae1fb:;
  /* 111ae1fb pop ebp */
  EBP = (pop32());
  /* 111ae1fc ret  */
  ESPCHK(0x111ae1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e200 @ 0x111ae200 (41 bytes, 16 insns) */
void f_111ae200(void) {
  FTRACE(0x111ae200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ae200 push ebp */
  push32((uint32_t)(EBP));
  /* 111ae201 mov ebp, esp */
  EBP = (ESP);
  /* 111ae203 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae207 jge 0x111ae21a */
  if ((C.sf==C.of)) goto L_111ae21a;
  /* 111ae209 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae20c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae20f push eax */
  push32((uint32_t)(EAX));
  /* 111ae210 call 0x111a8db0 */
  push32(0x111ae215u); f_111a8db0();
  /* 111ae215 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae218 jmp 0x111ae227 */
  goto L_111ae227;
L_111ae21a:;
  /* 111ae21a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ae21d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae220 push ecx */
  push32((uint32_t)(ECX));
  /* 111ae221 call dword ptr [0x111d4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4344))), 0x111ae227u);
L_111ae227:;
  /* 111ae227 pop ebp */
  EBP = (pop32());
  /* 111ae228 ret  */
  ESPCHK(0x111ae200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e230 @ 0x111ae230 (61 bytes, 20 insns) */
void f_111ae230(void) {
  FTRACE(0x111ae230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ae230 push ebp */
  push32((uint32_t)(EBP));
  /* 111ae231 mov ebp, esp */
  EBP = (ESP);
  /* 111ae233 cmp dword ptr [ebp + 8], 0x111d0120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x111d0120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae23a jb 0x111ae25e */
  if (C.cf) goto L_111ae25e;
  /* 111ae23c cmp dword ptr [ebp + 8], 0x111d0380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x111d0380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae243 ja 0x111ae25e */
  if ((!C.cf&&!C.zf)) goto L_111ae25e;
  /* 111ae245 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae248 sub eax, 0x111d0120 */
  { uint32_t _a=(EAX),_b=(0x111d0120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ae24d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111ae250 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae253 push eax */
  push32((uint32_t)(EAX));
  /* 111ae254 call 0x111a8e50 */
  push32(0x111ae259u); f_111a8e50();
  /* 111ae259 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae25c jmp 0x111ae26b */
  goto L_111ae26b;
L_111ae25e:;
  /* 111ae25e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae261 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae264 push ecx */
  push32((uint32_t)(ECX));
  /* 111ae265 call dword ptr [0x111d4340] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4340))), 0x111ae26bu);
L_111ae26b:;
  /* 111ae26b pop ebp */
  EBP = (pop32());
  /* 111ae26c ret  */
  ESPCHK(0x111ae230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e270 @ 0x111ae270 (41 bytes, 16 insns) */
void f_111ae270(void) {
  FTRACE(0x111ae270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ae270 push ebp */
  push32((uint32_t)(EBP));
  /* 111ae271 mov ebp, esp */
  EBP = (ESP);
  /* 111ae273 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae277 jge 0x111ae28a */
  if ((C.sf==C.of)) goto L_111ae28a;
  /* 111ae279 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae27c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae27f push eax */
  push32((uint32_t)(EAX));
  /* 111ae280 call 0x111a8e50 */
  push32(0x111ae285u); f_111a8e50();
  /* 111ae285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae288 jmp 0x111ae297 */
  goto L_111ae297;
L_111ae28a:;
  /* 111ae28a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ae28d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae290 push ecx */
  push32((uint32_t)(ECX));
  /* 111ae291 call dword ptr [0x111d4340] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4340))), 0x111ae297u);
L_111ae297:;
  /* 111ae297 pop ebp */
  EBP = (pop32());
  /* 111ae298 ret  */
  ESPCHK(0x111ae270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2a0 @ 0x111ae2a0 (119 bytes, 34 insns) */
void f_111ae2a0(void) {
  FTRACE(0x111ae2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ae2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111ae2a1 mov ebp, esp */
  EBP = (ESP);
  /* 111ae2a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ae2a6 push 0x111d19ec */
  push32((uint32_t)(0x111d19ecu));
  /* 111ae2ab call dword ptr [0x111d439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d439c))), 0x111ae2b1u);
  /* 111ae2b1 cmp dword ptr [0x111d19dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae2b8 je 0x111ae2d8 */
  if (C.zf) goto L_111ae2d8;
  /* 111ae2ba push 0x111d19ec */
  push32((uint32_t)(0x111d19ecu));
  /* 111ae2bf call dword ptr [0x111d438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d438c))), 0x111ae2c5u);
  /* 111ae2c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111ae2c7 call 0x111a8db0 */
  push32(0x111ae2ccu); f_111a8db0();
  /* 111ae2cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae2cf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111ae2d6 jmp 0x111ae2df */
  goto L_111ae2df;
L_111ae2d8:;
  /* 111ae2d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_111ae2df:;
  /* 111ae2df mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 111ae2e3 push eax */
  push32((uint32_t)(EAX));
  /* 111ae2e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae2e7 push ecx */
  push32((uint32_t)(ECX));
  /* 111ae2e8 call 0x111ae320 */
  push32(0x111ae2edu); f_111ae320();
  /* 111ae2ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae2f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111ae2f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae2f7 je 0x111ae305 */
  if (C.zf) goto L_111ae305;
  /* 111ae2f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111ae2fb call 0x111a8e50 */
  push32(0x111ae300u); f_111a8e50();
  /* 111ae300 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae303 jmp 0x111ae310 */
  goto L_111ae310;
L_111ae305:;
  /* 111ae305 push 0x111d19ec */
  push32((uint32_t)(0x111d19ecu));
  /* 111ae30a call dword ptr [0x111d438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d438c))), 0x111ae310u);
L_111ae310:;
  /* 111ae310 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ae313 mov esp, ebp */
  ESP = (EBP);
  /* 111ae315 pop ebp */
  EBP = (pop32());
  /* 111ae316 ret  */
  ESPCHK(0x111ae2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e320 @ 0x111ae320 (160 bytes, 50 insns) */
void f_111ae320(void) {
  FTRACE(0x111ae320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ae320 push ebp */
  push32((uint32_t)(EBP));
  /* 111ae321 mov ebp, esp */
  EBP = (ESP);
  /* 111ae323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ae326 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae32a jne 0x111ae333 */
  if (!C.zf) goto L_111ae333;
  /* 111ae32c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ae32e jmp 0x111ae3bc */
  goto L_111ae3bc;
L_111ae333:;
  /* 111ae333 cmp dword ptr [0x111d1860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae33a jne 0x111ae36a */
  if (!C.zf) goto L_111ae36a;
  /* 111ae33c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ae33f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111ae344 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae349 jle 0x111ae35b */
  if ((C.zf||C.sf!=C.of)) goto L_111ae35b;
  /* 111ae34b call 0x111ad280 */
  push32(0x111ae350u); f_111ad280();
  /* 111ae350 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 111ae356 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111ae359 jmp 0x111ae3bc */
  goto L_111ae3bc;
L_111ae35b:;
  /* 111ae35b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae35e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 111ae361 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 111ae363 mov eax, 1 */
  EAX = (0x1u);
  /* 111ae368 jmp 0x111ae3bc */
  goto L_111ae3bc;
L_111ae36a:;
  /* 111ae36a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111ae371 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 111ae374 push eax */
  push32((uint32_t)(EAX));
  /* 111ae375 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ae377 mov ecx, dword ptr [0x111cfea4] */
  ECX = (r32((uint32_t)(0x111cfea4)));
  /* 111ae37d push ecx */
  push32((uint32_t)(ECX));
  /* 111ae37e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae381 push edx */
  push32((uint32_t)(EDX));
  /* 111ae382 push 1 */
  push32((uint32_t)(0x1u));
  /* 111ae384 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 111ae387 push eax */
  push32((uint32_t)(EAX));
  /* 111ae388 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 111ae38d mov ecx, dword ptr [0x111d1870] */
  ECX = (r32((uint32_t)(0x111d1870)));
  /* 111ae393 push ecx */
  push32((uint32_t)(ECX));
  /* 111ae394 call dword ptr [0x111d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4368))), 0x111ae39au);
  /* 111ae39a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111ae39d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae3a1 je 0x111ae3a9 */
  if (C.zf) goto L_111ae3a9;
  /* 111ae3a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae3a7 je 0x111ae3b9 */
  if (C.zf) goto L_111ae3b9;
L_111ae3a9:;
  /* 111ae3a9 call 0x111ad280 */
  push32(0x111ae3aeu); f_111ad280();
  /* 111ae3ae mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 111ae3b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111ae3b7 jmp 0x111ae3bc */
  goto L_111ae3bc;
L_111ae3b9:;
  /* 111ae3b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_111ae3bc:;
  /* 111ae3bc mov esp, ebp */
  ESP = (EBP);
  /* 111ae3be pop ebp */
  EBP = (pop32());
  /* 111ae3bf ret  */
  ESPCHK(0x111ae320u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x111ae3c0 (32 bytes, 18 insns) */
void f_111ae3c0(void) {
  FTRACE(0x111ae3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ae3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111ae3c1 mov ebp, esp */
  EBP = (ESP);
  /* 111ae3c3 push ebx */
  push32((uint32_t)(EBX));
  /* 111ae3c4 push esi */
  push32((uint32_t)(ESI));
  /* 111ae3c5 push edi */
  push32((uint32_t)(EDI));
  /* 111ae3c6 push ebp */
  push32((uint32_t)(EBP));
  /* 111ae3c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ae3c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ae3cb push 0x111ae3d8 */
  push32((uint32_t)(0x111ae3d8u));
  /* 111ae3d0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111ae3d3 call 0x111b5b0c */
  push32(0x111ae3d8u); f_111b5b0c();
  /* 111ae3d8 pop ebp */
  EBP = (pop32());
  /* 111ae3d9 pop edi */
  EDI = (pop32());
  /* 111ae3da pop esi */
  ESI = (pop32());
  /* 111ae3db pop ebx */
  EBX = (pop32());
  /* 111ae3dc mov esp, ebp */
  ESP = (EBP);
  /* 111ae3de pop ebp */
  EBP = (pop32());
  /* 111ae3df ret  */
  ESPCHK(0x111ae3c0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x111ae402 (104 bytes, 33 insns) */
void f_111ae402(void) {
  FTRACE(0x111ae402u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ae402 push ebx */
  push32((uint32_t)(EBX));
  /* 111ae403 push esi */
  push32((uint32_t)(ESI));
  /* 111ae404 push edi */
  push32((uint32_t)(EDI));
  /* 111ae405 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 111ae409 push eax */
  push32((uint32_t)(EAX));
  /* 111ae40a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 111ae40c push 0x111ae3e0 */
  push32((uint32_t)(0x111ae3e0u));
  /* 111ae411 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 111ae418 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_111ae41f:;
  /* 111ae41f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 111ae423 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 111ae426 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 111ae429 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae42c je 0x111ae45c */
  if (C.zf) goto L_111ae45c;
  /* 111ae42e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae432 je 0x111ae45c */
  if (C.zf) goto L_111ae45c;
  /* 111ae434 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 111ae437 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 111ae43a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 111ae43e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 111ae441 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae446 jne 0x111ae45a */
  if (!C.zf) goto L_111ae45a;
  /* 111ae448 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 111ae44d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 111ae451 call 0x111ae496 */
  push32(0x111ae456u); f_111ae496();
  /* 111ae456 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x111ae45au);
L_111ae45a:;
  /* 111ae45a jmp 0x111ae41f */
  goto L_111ae41f;
L_111ae45c:;
  /* 111ae45c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 111ae463 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae466 pop edi */
  EDI = (pop32());
  /* 111ae467 pop esi */
  ESI = (pop32());
  /* 111ae468 pop ebx */
  EBX = (pop32());
  /* 111ae469 ret  */
  ESPCHK(0x111ae402u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e496 @ 0x111ae496 (24 bytes, 10 insns) */
void f_111ae496(void) {
  FTRACE(0x111ae496u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ae496 push ebx */
  push32((uint32_t)(EBX));
  /* 111ae497 push ecx */
  push32((uint32_t)(ECX));
  /* 111ae498 mov ebx, 0x111d03b8 */
  EBX = (0x111d03b8u);
  /* 111ae49d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae4a0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 111ae4a3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 111ae4a6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 111ae4a9 pop ecx */
  ECX = (pop32());
  /* 111ae4aa pop ebx */
  EBX = (pop32());
  /* 111ae4ab ret 4 */
  ESPCHK(0x111ae496u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e575 @ 0x111ae575 (27 bytes, 11 insns) */
void f_111ae575(void) {
  FTRACE(0x111ae575u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ae575 push ebp */
  push32((uint32_t)(EBP));
  /* 111ae576 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 111ae57a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 111ae57c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 111ae57f push eax */
  push32((uint32_t)(EAX));
  /* 111ae580 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 111ae583 push eax */
  push32((uint32_t)(EAX));
  /* 111ae584 call 0x111ae402 */
  push32(0x111ae589u); f_111ae402();
  /* 111ae589 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae58c pop ebp */
  EBP = (pop32());
  /* 111ae58d ret 4 */
  ESPCHK(0x111ae575u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e590 @ 0x111ae590 (482 bytes, 138 insns) */
void f_111ae590(void) {
  FTRACE(0x111ae590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ae590 push ebp */
  push32((uint32_t)(EBP));
  /* 111ae591 mov ebp, esp */
  EBP = (ESP);
  /* 111ae593 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ae596 push esi */
  push32((uint32_t)(ESI));
  /* 111ae597 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 111ae59e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 111ae5a0 call 0x111a8db0 */
  push32(0x111ae5a5u); f_111a8db0();
  /* 111ae5a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae5a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 111ae5af jmp 0x111ae5ba */
  goto L_111ae5ba;
L_111ae5b1:;
  /* 111ae5b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ae5b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae5b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_111ae5ba:;
  /* 111ae5ba cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae5be jge 0x111ae760 */
  if ((C.sf==C.of)) goto L_111ae760;
  /* 111ae5c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ae5c7 cmp dword ptr [ecx*4 + 0x111d3040], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x111d3040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae5cf je 0x111ae6c6 */
  if (C.zf) goto L_111ae6c6;
  /* 111ae5d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ae5d8 mov eax, dword ptr [edx*4 + 0x111d3040] */
  EAX = (r32((uint32_t)(EDX*4 + 0x111d3040)));
  /* 111ae5df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111ae5e2 jmp 0x111ae5ed */
  goto L_111ae5ed;
L_111ae5e4:;
  /* 111ae5e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae5e7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae5ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111ae5ed:;
  /* 111ae5ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ae5f0 mov eax, dword ptr [edx*4 + 0x111d3040] */
  EAX = (r32((uint32_t)(EDX*4 + 0x111d3040)));
  /* 111ae5f7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae5fc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae5ff jae 0x111ae6b6 */
  if (!C.cf) goto L_111ae6b6;
  /* 111ae605 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae608 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 111ae60c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 111ae60f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111ae611 jne 0x111ae6b1 */
  if (!C.zf) goto L_111ae6b1;
  /* 111ae617 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae61a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae61e jne 0x111ae659 */
  if (!C.zf) goto L_111ae659;
  /* 111ae620 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111ae622 call 0x111a8db0 */
  push32(0x111ae627u); f_111a8db0();
  /* 111ae627 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae62a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae62d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae631 jne 0x111ae64f */
  if (!C.zf) goto L_111ae64f;
  /* 111ae633 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae636 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae639 push edx */
  push32((uint32_t)(EDX));
  /* 111ae63a call dword ptr [0x111d4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4354))), 0x111ae640u);
  /* 111ae640 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae643 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111ae646 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae649 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae64c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_111ae64f:;
  /* 111ae64f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111ae651 call 0x111a8e50 */
  push32(0x111ae656u); f_111a8e50();
  /* 111ae656 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111ae659:;
  /* 111ae659 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae65c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae65f push eax */
  push32((uint32_t)(EAX));
  /* 111ae660 call dword ptr [0x111d4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4344))), 0x111ae666u);
  /* 111ae666 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae669 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 111ae66d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 111ae670 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111ae672 je 0x111ae686 */
  if (C.zf) goto L_111ae686;
  /* 111ae674 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae677 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae67a push eax */
  push32((uint32_t)(EAX));
  /* 111ae67b call dword ptr [0x111d4340] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4340))), 0x111ae681u);
  /* 111ae681 jmp 0x111ae5e4 */
  goto L_111ae5e4;
L_111ae686:;
  /* 111ae686 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae689 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 111ae68f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ae692 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111ae695 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ae698 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae69b sub eax, dword ptr [edx*4 + 0x111d3040] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x111d3040))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ae6a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111ae6a3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 111ae6a8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111ae6aa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae6ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111ae6af jmp 0x111ae6b6 */
  goto L_111ae6b6;
L_111ae6b1:;
  /* 111ae6b1 jmp 0x111ae5e4 */
  goto L_111ae5e4;
L_111ae6b6:;
  /* 111ae6b6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae6ba je 0x111ae6c1 */
  if (C.zf) goto L_111ae6c1;
  /* 111ae6bc jmp 0x111ae760 */
  goto L_111ae760;
L_111ae6c1:;
  /* 111ae6c1 jmp 0x111ae75b */
  goto L_111ae75b;
L_111ae6c6:;
  /* 111ae6c6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 111ae6c8 push 0x111cd27c */
  push32((uint32_t)(0x111cd27cu));
  /* 111ae6cd push 2 */
  push32((uint32_t)(0x2u));
  /* 111ae6cf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 111ae6d4 call 0x111a53b0 */
  push32(0x111ae6d9u); f_111a53b0();
  /* 111ae6d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae6dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111ae6df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae6e3 je 0x111ae759 */
  if (C.zf) goto L_111ae759;
  /* 111ae6e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ae6e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae6eb mov dword ptr [eax*4 + 0x111d3040], ecx */
  w32((uint32_t)(EAX*4 + 0x111d3040), (ECX));
  /* 111ae6f2 mov edx, dword ptr [0x111d317c] */
  EDX = (r32((uint32_t)(0x111d317c)));
  /* 111ae6f8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae6fb mov dword ptr [0x111d317c], edx */
  w32((uint32_t)(0x111d317c), (EDX));
  /* 111ae701 jmp 0x111ae70c */
  goto L_111ae70c;
L_111ae703:;
  /* 111ae703 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae706 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae709 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111ae70c:;
  /* 111ae70c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ae70f mov edx, dword ptr [ecx*4 + 0x111d3040] */
  EDX = (r32((uint32_t)(ECX*4 + 0x111d3040)));
  /* 111ae716 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae71c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae71f jae 0x111ae744 */
  if (!C.cf) goto L_111ae744;
  /* 111ae721 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae724 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 111ae728 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae72b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 111ae731 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae734 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 111ae738 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111ae73b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 111ae742 jmp 0x111ae703 */
  goto L_111ae703;
L_111ae744:;
  /* 111ae744 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111ae747 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111ae74a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111ae74d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ae750 push edx */
  push32((uint32_t)(EDX));
  /* 111ae751 call 0x111aeaa0 */
  push32(0x111ae756u); f_111aeaa0();
  /* 111ae756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111ae759:;
  /* 111ae759 jmp 0x111ae760 */
  goto L_111ae760;
L_111ae75b:;
  /* 111ae75b jmp 0x111ae5b1 */
  goto L_111ae5b1;
L_111ae760:;
  /* 111ae760 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 111ae762 call 0x111a8e50 */
  push32(0x111ae767u); f_111a8e50();
  /* 111ae767 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae76a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111ae76d pop esi */
  ESI = (pop32());
  /* 111ae76e mov esp, ebp */
  ESP = (EBP);
  /* 111ae770 pop ebp */
  EBP = (pop32());
  /* 111ae771 ret  */
  ESPCHK(0x111ae590u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x111ae780 (183 bytes, 57 insns) */
void f_111ae780(void) {
  FTRACE(0x111ae780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ae780 push ebp */
  push32((uint32_t)(EBP));
  /* 111ae781 mov ebp, esp */
  EBP = (ESP);
  /* 111ae783 push ecx */
  push32((uint32_t)(ECX));
  /* 111ae784 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae787 cmp eax, dword ptr [0x111d317c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d317c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae78d jae 0x111ae81a */
  if (!C.cf) goto L_111ae81a;
  /* 111ae793 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae796 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111ae799 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae79c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 111ae79f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111ae7a2 mov eax, dword ptr [ecx*4 + 0x111d3040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111d3040)));
  /* 111ae7a9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae7ad jne 0x111ae81a */
  if (!C.zf) goto L_111ae81a;
  /* 111ae7af cmp dword ptr [0x111d1654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111d1654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae7b6 jne 0x111ae7fa */
  if (!C.zf) goto L_111ae7fa;
  /* 111ae7b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae7bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111ae7be cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae7c2 je 0x111ae7d2 */
  if (C.zf) goto L_111ae7d2;
  /* 111ae7c4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae7c8 je 0x111ae7e0 */
  if (C.zf) goto L_111ae7e0;
  /* 111ae7ca cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae7ce je 0x111ae7ee */
  if (C.zf) goto L_111ae7ee;
  /* 111ae7d0 jmp 0x111ae7fa */
  goto L_111ae7fa;
L_111ae7d2:;
  /* 111ae7d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ae7d5 push edx */
  push32((uint32_t)(EDX));
  /* 111ae7d6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 111ae7d8 call dword ptr [0x111d430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d430c))), 0x111ae7deu);
  /* 111ae7de jmp 0x111ae7fa */
  goto L_111ae7fa;
L_111ae7e0:;
  /* 111ae7e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ae7e3 push eax */
  push32((uint32_t)(EAX));
  /* 111ae7e4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 111ae7e6 call dword ptr [0x111d430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d430c))), 0x111ae7ecu);
  /* 111ae7ec jmp 0x111ae7fa */
  goto L_111ae7fa;
L_111ae7ee:;
  /* 111ae7ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ae7f1 push ecx */
  push32((uint32_t)(ECX));
  /* 111ae7f2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 111ae7f4 call dword ptr [0x111d430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d430c))), 0x111ae7fau);
L_111ae7fa:;
  /* 111ae7fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae7fd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 111ae800 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae803 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111ae806 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111ae809 mov ecx, dword ptr [edx*4 + 0x111d3040] */
  ECX = (r32((uint32_t)(EDX*4 + 0x111d3040)));
  /* 111ae810 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ae813 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 111ae816 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ae818 jmp 0x111ae833 */
  goto L_111ae833;
L_111ae81a:;
  /* 111ae81a call 0x111ad280 */
  push32(0x111ae81fu); f_111ad280();
  /* 111ae81f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111ae825 call 0x111ad290 */
  push32(0x111ae82au); f_111ad290();
  /* 111ae82a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111ae830 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_111ae833:;
  /* 111ae833 mov esp, ebp */
  ESP = (EBP);
  /* 111ae835 pop ebp */
  EBP = (pop32());
  /* 111ae836 ret  */
  ESPCHK(0x111ae780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e840 @ 0x111ae840 (216 bytes, 63 insns) */
void f_111ae840(void) {
  FTRACE(0x111ae840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ae840 push ebp */
  push32((uint32_t)(EBP));
  /* 111ae841 mov ebp, esp */
  EBP = (ESP);
  /* 111ae843 push ecx */
  push32((uint32_t)(ECX));
  /* 111ae844 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae847 cmp eax, dword ptr [0x111d317c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d317c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae84d jae 0x111ae8fb */
  if (!C.cf) goto L_111ae8fb;
  /* 111ae853 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae856 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111ae859 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae85c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 111ae85f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111ae862 mov eax, dword ptr [ecx*4 + 0x111d3040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111d3040)));
  /* 111ae869 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 111ae86e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 111ae871 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111ae873 je 0x111ae8fb */
  if (C.zf) goto L_111ae8fb;
  /* 111ae879 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae87c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 111ae87f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae882 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111ae885 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111ae888 mov ecx, dword ptr [edx*4 + 0x111d3040] */
  ECX = (r32((uint32_t)(EDX*4 + 0x111d3040)));
  /* 111ae88f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae893 je 0x111ae8fb */
  if (C.zf) goto L_111ae8fb;
  /* 111ae895 cmp dword ptr [0x111d1654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111d1654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae89c jne 0x111ae8da */
  if (!C.zf) goto L_111ae8da;
  /* 111ae89e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae8a1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111ae8a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae8a8 je 0x111ae8b8 */
  if (C.zf) goto L_111ae8b8;
  /* 111ae8aa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae8ae je 0x111ae8c4 */
  if (C.zf) goto L_111ae8c4;
  /* 111ae8b0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae8b4 je 0x111ae8d0 */
  if (C.zf) goto L_111ae8d0;
  /* 111ae8b6 jmp 0x111ae8da */
  goto L_111ae8da;
L_111ae8b8:;
  /* 111ae8b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ae8ba push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 111ae8bc call dword ptr [0x111d430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d430c))), 0x111ae8c2u);
  /* 111ae8c2 jmp 0x111ae8da */
  goto L_111ae8da;
L_111ae8c4:;
  /* 111ae8c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ae8c6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 111ae8c8 call dword ptr [0x111d430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d430c))), 0x111ae8ceu);
  /* 111ae8ce jmp 0x111ae8da */
  goto L_111ae8da;
L_111ae8d0:;
  /* 111ae8d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111ae8d2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 111ae8d4 call dword ptr [0x111d430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d430c))), 0x111ae8dau);
L_111ae8da:;
  /* 111ae8da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae8dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111ae8e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae8e3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 111ae8e6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111ae8e9 mov edx, dword ptr [eax*4 + 0x111d3040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111d3040)));
  /* 111ae8f0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 111ae8f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111ae8f9 jmp 0x111ae914 */
  goto L_111ae914;
L_111ae8fb:;
  /* 111ae8fb call 0x111ad280 */
  push32(0x111ae900u); f_111ad280();
  /* 111ae900 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111ae906 call 0x111ad290 */
  push32(0x111ae90bu); f_111ad290();
  /* 111ae90b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111ae911 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_111ae914:;
  /* 111ae914 mov esp, ebp */
  ESP = (EBP);
  /* 111ae916 pop ebp */
  EBP = (pop32());
  /* 111ae917 ret  */
  ESPCHK(0x111ae840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e920 @ 0x111ae920 (102 bytes, 30 insns) */
void f_111ae920(void) {
  FTRACE(0x111ae920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ae920 push ebp */
  push32((uint32_t)(EBP));
  /* 111ae921 mov ebp, esp */
  EBP = (ESP);
  /* 111ae923 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae926 cmp eax, dword ptr [0x111d317c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d317c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae92c jae 0x111ae96b */
  if (!C.cf) goto L_111ae96b;
  /* 111ae92e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae931 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111ae934 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae937 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 111ae93a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111ae93d mov eax, dword ptr [ecx*4 + 0x111d3040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111d3040)));
  /* 111ae944 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 111ae949 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 111ae94c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111ae94e je 0x111ae96b */
  if (C.zf) goto L_111ae96b;
  /* 111ae950 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae953 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 111ae956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae959 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111ae95c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111ae95f mov ecx, dword ptr [edx*4 + 0x111d3040] */
  ECX = (r32((uint32_t)(EDX*4 + 0x111d3040)));
  /* 111ae966 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 111ae969 jmp 0x111ae984 */
  goto L_111ae984;
L_111ae96b:;
  /* 111ae96b call 0x111ad280 */
  push32(0x111ae970u); f_111ad280();
  /* 111ae970 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111ae976 call 0x111ad290 */
  push32(0x111ae97bu); f_111ad290();
  /* 111ae97b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111ae981 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_111ae984:;
  /* 111ae984 pop ebp */
  EBP = (pop32());
  /* 111ae985 ret  */
  ESPCHK(0x111ae920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e990 @ 0x111ae990 (260 bytes, 83 insns) */
void f_111ae990(void) {
  FTRACE(0x111ae990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111ae990 push ebp */
  push32((uint32_t)(EBP));
  /* 111ae991 mov ebp, esp */
  EBP = (ESP);
  /* 111ae993 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111ae996 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 111ae99a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ae99d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 111ae9a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111ae9a2 je 0x111ae9ad */
  if (C.zf) goto L_111ae9ad;
  /* 111ae9a4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 111ae9a7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 111ae9aa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_111ae9ad:;
  /* 111ae9ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ae9b0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 111ae9b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111ae9b8 je 0x111ae9c2 */
  if (C.zf) goto L_111ae9c2;
  /* 111ae9ba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 111ae9bd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 111ae9bf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_111ae9c2:;
  /* 111ae9c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111ae9c5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 111ae9cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111ae9cd je 0x111ae9d8 */
  if (C.zf) goto L_111ae9d8;
  /* 111ae9cf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 111ae9d2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 111ae9d5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_111ae9d8:;
  /* 111ae9d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111ae9db push eax */
  push32((uint32_t)(EAX));
  /* 111ae9dc call dword ptr [0x111d43d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43d0))), 0x111ae9e2u);
  /* 111ae9e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111ae9e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111ae9e9 jne 0x111aea02 */
  if (!C.zf) goto L_111aea02;
  /* 111ae9eb call dword ptr [0x111d43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43ac))), 0x111ae9f1u);
  /* 111ae9f1 push eax */
  push32((uint32_t)(EAX));
  /* 111ae9f2 call 0x111ad1e0 */
  push32(0x111ae9f7u); f_111ad1e0();
  /* 111ae9f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111ae9fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111ae9fd jmp 0x111aea90 */
  goto L_111aea90;
L_111aea02:;
  /* 111aea02 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aea06 jne 0x111aea13 */
  if (!C.zf) goto L_111aea13;
  /* 111aea08 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 111aea0b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 111aea0e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 111aea11 jmp 0x111aea22 */
  goto L_111aea22;
L_111aea13:;
  /* 111aea13 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aea17 jne 0x111aea22 */
  if (!C.zf) goto L_111aea22;
  /* 111aea19 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 111aea1c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 111aea1f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_111aea22:;
  /* 111aea22 call 0x111ae590 */
  push32(0x111aea27u); f_111ae590();
  /* 111aea27 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111aea2a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aea2e jne 0x111aea4b */
  if (!C.zf) goto L_111aea4b;
  /* 111aea30 call 0x111ad280 */
  push32(0x111aea35u); f_111ad280();
  /* 111aea35 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 111aea3b call 0x111ad290 */
  push32(0x111aea40u); f_111ad290();
  /* 111aea40 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111aea46 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111aea49 jmp 0x111aea90 */
  goto L_111aea90;
L_111aea4b:;
  /* 111aea4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aea4e push eax */
  push32((uint32_t)(EAX));
  /* 111aea4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aea52 push ecx */
  push32((uint32_t)(ECX));
  /* 111aea53 call 0x111ae780 */
  push32(0x111aea58u); f_111ae780();
  /* 111aea58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aea5b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 111aea5e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 111aea61 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 111aea64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aea67 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111aea6a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aea6d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 111aea70 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111aea73 mov edx, dword ptr [eax*4 + 0x111d3040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111d3040)));
  /* 111aea7a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 111aea7d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 111aea81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aea84 push ecx */
  push32((uint32_t)(ECX));
  /* 111aea85 call 0x111aeb30 */
  push32(0x111aea8au); f_111aeb30();
  /* 111aea8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aea8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_111aea90:;
  /* 111aea90 mov esp, ebp */
  ESP = (EBP);
  /* 111aea92 pop ebp */
  EBP = (pop32());
  /* 111aea93 ret  */
  ESPCHK(0x111ae990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaa0 @ 0x111aeaa0 (134 bytes, 44 insns) */
void f_111aeaa0(void) {
  FTRACE(0x111aeaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111aeaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 111aeaa1 mov ebp, esp */
  EBP = (ESP);
  /* 111aeaa3 push ecx */
  push32((uint32_t)(ECX));
  /* 111aeaa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aeaa7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111aeaaa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aeaad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 111aeab0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111aeab3 mov edx, dword ptr [eax*4 + 0x111d3040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111d3040)));
  /* 111aeaba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aeabc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111aeabf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aeac2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aeac6 jne 0x111aeb01 */
  if (!C.zf) goto L_111aeb01;
  /* 111aeac8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111aeaca call 0x111a8db0 */
  push32(0x111aeacfu); f_111a8db0();
  /* 111aeacf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aead2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aead5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aead9 jne 0x111aeaf7 */
  if (!C.zf) goto L_111aeaf7;
  /* 111aeadb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aeade add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aeae1 push edx */
  push32((uint32_t)(EDX));
  /* 111aeae2 call dword ptr [0x111d4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4354))), 0x111aeae8u);
  /* 111aeae8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aeaeb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111aeaee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aeaf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aeaf4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_111aeaf7:;
  /* 111aeaf7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111aeaf9 call 0x111a8e50 */
  push32(0x111aeafeu); f_111a8e50();
  /* 111aeafe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111aeb01:;
  /* 111aeb01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aeb04 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111aeb07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aeb0a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 111aeb0d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111aeb10 mov edx, dword ptr [eax*4 + 0x111d3040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111d3040)));
  /* 111aeb17 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 111aeb1b push eax */
  push32((uint32_t)(EAX));
  /* 111aeb1c call dword ptr [0x111d4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4344))), 0x111aeb22u);
  /* 111aeb22 mov esp, ebp */
  ESP = (EBP);
  /* 111aeb24 pop ebp */
  EBP = (pop32());
  /* 111aeb25 ret  */
  ESPCHK(0x111aeaa0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x111aeb30 (38 bytes, 13 insns) */
void f_111aeb30(void) {
  FTRACE(0x111aeb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111aeb30 push ebp */
  push32((uint32_t)(EBP));
  /* 111aeb31 mov ebp, esp */
  EBP = (ESP);
  /* 111aeb33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aeb36 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111aeb39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aeb3c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 111aeb3f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111aeb42 mov edx, dword ptr [eax*4 + 0x111d3040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111d3040)));
  /* 111aeb49 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 111aeb4d push eax */
  push32((uint32_t)(EAX));
  /* 111aeb4e call dword ptr [0x111d4340] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4340))), 0x111aeb54u);
  /* 111aeb54 pop ebp */
  EBP = (pop32());
  /* 111aeb55 ret  */
  ESPCHK(0x111aeb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb60 @ 0x111aeb60 (218 bytes, 63 insns) */
void f_111aeb60(void) {
  FTRACE(0x111aeb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111aeb60 push ebp */
  push32((uint32_t)(EBP));
  /* 111aeb61 mov ebp, esp */
  EBP = (ESP);
  /* 111aeb63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aeb66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111aeb6d push 2 */
  push32((uint32_t)(0x2u));
  /* 111aeb6f call 0x111a8db0 */
  push32(0x111aeb74u); f_111a8db0();
  /* 111aeb74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aeb77 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 111aeb7e jmp 0x111aeb89 */
  goto L_111aeb89;
L_111aeb80:;
  /* 111aeb80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aeb83 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aeb86 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111aeb89:;
  /* 111aeb89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aeb8c cmp ecx, dword ptr [0x111d2d40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111d2d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aeb92 jge 0x111aec29 */
  if ((C.sf==C.of)) goto L_111aec29;
  /* 111aeb98 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aeb9b mov eax, dword ptr [0x111d19f0] */
  EAX = (r32((uint32_t)(0x111d19f0)));
  /* 111aeba0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aeba4 je 0x111aec24 */
  if (C.zf) goto L_111aec24;
  /* 111aeba6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aeba9 mov edx, dword ptr [0x111d19f0] */
  EDX = (r32((uint32_t)(0x111d19f0)));
  /* 111aebaf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 111aebb2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 111aebb5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 111aebbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111aebbd je 0x111aebe1 */
  if (C.zf) goto L_111aebe1;
  /* 111aebbf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aebc2 mov eax, dword ptr [0x111d19f0] */
  EAX = (r32((uint32_t)(0x111d19f0)));
  /* 111aebc7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 111aebca push ecx */
  push32((uint32_t)(ECX));
  /* 111aebcb call 0x111af950 */
  push32(0x111aebd0u); f_111af950();
  /* 111aebd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aebd3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aebd6 je 0x111aebe1 */
  if (C.zf) goto L_111aebe1;
  /* 111aebd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aebdb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aebde mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111aebe1:;
  /* 111aebe1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aebe5 jl 0x111aec24 */
  if ((C.sf!=C.of)) goto L_111aec24;
  /* 111aebe7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aebea mov ecx, dword ptr [0x111d19f0] */
  ECX = (r32((uint32_t)(0x111d19f0)));
  /* 111aebf0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 111aebf3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aebf6 push edx */
  push32((uint32_t)(EDX));
  /* 111aebf7 call dword ptr [0x111d43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43d8))), 0x111aebfdu);
  /* 111aebfd push 2 */
  push32((uint32_t)(0x2u));
  /* 111aebff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aec02 mov ecx, dword ptr [0x111d19f0] */
  ECX = (r32((uint32_t)(0x111d19f0)));
  /* 111aec08 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 111aec0b push edx */
  push32((uint32_t)(EDX));
  /* 111aec0c call 0x111a5e40 */
  push32(0x111aec11u); f_111a5e40();
  /* 111aec11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aec14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aec17 mov ecx, dword ptr [0x111d19f0] */
  ECX = (r32((uint32_t)(0x111d19f0)));
  /* 111aec1d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_111aec24:;
  /* 111aec24 jmp 0x111aeb80 */
  goto L_111aeb80;
L_111aec29:;
  /* 111aec29 push 2 */
  push32((uint32_t)(0x2u));
  /* 111aec2b call 0x111a8e50 */
  push32(0x111aec30u); f_111a8e50();
  /* 111aec30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aec33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aec36 mov esp, ebp */
  ESP = (EBP);
  /* 111aec38 pop ebp */
  EBP = (pop32());
  /* 111aec39 ret  */
  ESPCHK(0x111aeb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec40 @ 0x111aec40 (68 bytes, 26 insns) */
void f_111aec40(void) {
  FTRACE(0x111aec40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111aec40 push ebp */
  push32((uint32_t)(EBP));
  /* 111aec41 mov ebp, esp */
  EBP = (ESP);
  /* 111aec43 push ecx */
  push32((uint32_t)(ECX));
  /* 111aec44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aec48 jne 0x111aec56 */
  if (!C.zf) goto L_111aec56;
  /* 111aec4a push 0 */
  push32((uint32_t)(0x0u));
  /* 111aec4c call 0x111aedb0 */
  push32(0x111aec51u); f_111aedb0();
  /* 111aec51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aec54 jmp 0x111aec80 */
  goto L_111aec80;
L_111aec56:;
  /* 111aec56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aec59 push eax */
  push32((uint32_t)(EAX));
  /* 111aec5a call 0x111ae1c0 */
  push32(0x111aec5fu); f_111ae1c0();
  /* 111aec5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aec62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aec65 push ecx */
  push32((uint32_t)(ECX));
  /* 111aec66 call 0x111aec90 */
  push32(0x111aec6bu); f_111aec90();
  /* 111aec6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aec6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111aec71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aec74 push edx */
  push32((uint32_t)(EDX));
  /* 111aec75 call 0x111ae230 */
  push32(0x111aec7au); f_111ae230();
  /* 111aec7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aec7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_111aec80:;
  /* 111aec80 mov esp, ebp */
  ESP = (EBP);
  /* 111aec82 pop ebp */
  EBP = (pop32());
  /* 111aec83 ret  */
  ESPCHK(0x111aec40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec90 @ 0x111aec90 (65 bytes, 26 insns) */
void f_111aec90(void) {
  FTRACE(0x111aec90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111aec90 push ebp */
  push32((uint32_t)(EBP));
  /* 111aec91 mov ebp, esp */
  EBP = (ESP);
  /* 111aec93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aec96 push eax */
  push32((uint32_t)(EAX));
  /* 111aec97 call 0x111aece0 */
  push32(0x111aec9cu); f_111aece0();
  /* 111aec9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aec9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111aeca1 je 0x111aeca8 */
  if (C.zf) goto L_111aeca8;
  /* 111aeca3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111aeca6 jmp 0x111aeccf */
  goto L_111aeccf;
L_111aeca8:;
  /* 111aeca8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aecab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111aecae and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 111aecb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111aecb6 je 0x111aeccd */
  if (C.zf) goto L_111aeccd;
  /* 111aecb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aecbb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111aecbe push ecx */
  push32((uint32_t)(ECX));
  /* 111aecbf call 0x111afaa0 */
  push32(0x111aecc4u); f_111afaa0();
  /* 111aecc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aecc7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111aecc9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aeccb jmp 0x111aeccf */
  goto L_111aeccf;
L_111aeccd:;
  /* 111aeccd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111aeccf:;
  /* 111aeccf pop ebp */
  EBP = (pop32());
  /* 111aecd0 ret  */
  ESPCHK(0x111aec90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ece0 @ 0x111aece0 (183 bytes, 62 insns) */
void f_111aece0(void) {
  FTRACE(0x111aece0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111aece0 push ebp */
  push32((uint32_t)(EBP));
  /* 111aece1 mov ebp, esp */
  EBP = (ESP);
  /* 111aece3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aece6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111aeced mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aecf0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111aecf3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aecf6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111aecf9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 111aecfc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aecff jne 0x111aed7b */
  if (!C.zf) goto L_111aed7b;
  /* 111aed01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aed04 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 111aed07 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 111aed0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111aed0f je 0x111aed7b */
  if (C.zf) goto L_111aed7b;
  /* 111aed11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aed14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aed17 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 111aed19 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aed1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111aed1f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aed23 jle 0x111aed7b */
  if ((C.zf||C.sf!=C.of)) goto L_111aed7b;
  /* 111aed25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aed28 push edx */
  push32((uint32_t)(EDX));
  /* 111aed29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aed2c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111aed2f push ecx */
  push32((uint32_t)(ECX));
  /* 111aed30 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aed33 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111aed36 push eax */
  push32((uint32_t)(EAX));
  /* 111aed37 call 0x111adc50 */
  push32(0x111aed3cu); f_111adc50();
  /* 111aed3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aed3f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aed42 jne 0x111aed65 */
  if (!C.zf) goto L_111aed65;
  /* 111aed44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aed47 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111aed4a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 111aed50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111aed52 je 0x111aed63 */
  if (C.zf) goto L_111aed63;
  /* 111aed54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aed57 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 111aed5a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 111aed5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aed60 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_111aed63:;
  /* 111aed63 jmp 0x111aed7b */
  goto L_111aed7b;
L_111aed65:;
  /* 111aed65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aed68 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 111aed6b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 111aed6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aed71 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 111aed74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_111aed7b:;
  /* 111aed7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aed7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aed81 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111aed84 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111aed86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111aed89 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 111aed90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aed93 mov esp, ebp */
  ESP = (EBP);
  /* 111aed95 pop ebp */
  EBP = (pop32());
  /* 111aed96 ret  */
  ESPCHK(0x111aece0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eda0 @ 0x111aeda0 (15 bytes, 7 insns) */
void f_111aeda0(void) {
  FTRACE(0x111aeda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111aeda0 push ebp */
  push32((uint32_t)(EBP));
  /* 111aeda1 mov ebp, esp */
  EBP = (ESP);
  /* 111aeda3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111aeda5 call 0x111aedb0 */
  push32(0x111aedaau); f_111aedb0();
  /* 111aedaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aedad pop ebp */
  EBP = (pop32());
  /* 111aedae ret  */
  ESPCHK(0x111aeda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000edb0 @ 0x111aedb0 (319 bytes, 94 insns) */
void f_111aedb0(void) {
  FTRACE(0x111aedb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111aedb0 push ebp */
  push32((uint32_t)(EBP));
  /* 111aedb1 mov ebp, esp */
  EBP = (ESP);
  /* 111aedb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aedb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111aedbd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111aedc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 111aedc6 call 0x111a8db0 */
  push32(0x111aedcbu); f_111a8db0();
  /* 111aedcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aedce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 111aedd5 jmp 0x111aede0 */
  goto L_111aede0;
L_111aedd7:;
  /* 111aedd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aedda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aeddd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_111aede0:;
  /* 111aede0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aede3 cmp ecx, dword ptr [0x111d2d40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111d2d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aede9 jge 0x111aeed3 */
  if ((C.sf==C.of)) goto L_111aeed3;
  /* 111aedef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aedf2 mov eax, dword ptr [0x111d19f0] */
  EAX = (r32((uint32_t)(0x111d19f0)));
  /* 111aedf7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aedfb je 0x111aeece */
  if (C.zf) goto L_111aeece;
  /* 111aee01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aee04 mov edx, dword ptr [0x111d19f0] */
  EDX = (r32((uint32_t)(0x111d19f0)));
  /* 111aee0a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 111aee0d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 111aee10 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 111aee16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111aee18 je 0x111aeece */
  if (C.zf) goto L_111aeece;
  /* 111aee1e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aee21 mov eax, dword ptr [0x111d19f0] */
  EAX = (r32((uint32_t)(0x111d19f0)));
  /* 111aee26 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 111aee29 push ecx */
  push32((uint32_t)(ECX));
  /* 111aee2a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aee2d push edx */
  push32((uint32_t)(EDX));
  /* 111aee2e call 0x111ae200 */
  push32(0x111aee33u); f_111ae200();
  /* 111aee33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aee36 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aee39 mov ecx, dword ptr [0x111d19f0] */
  ECX = (r32((uint32_t)(0x111d19f0)));
  /* 111aee3f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 111aee42 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 111aee45 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 111aee4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111aee4c je 0x111aeeb5 */
  if (C.zf) goto L_111aeeb5;
  /* 111aee4e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aee52 jne 0x111aee79 */
  if (!C.zf) goto L_111aee79;
  /* 111aee54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aee57 mov edx, dword ptr [0x111d19f0] */
  EDX = (r32((uint32_t)(0x111d19f0)));
  /* 111aee5d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 111aee60 push eax */
  push32((uint32_t)(EAX));
  /* 111aee61 call 0x111aec90 */
  push32(0x111aee66u); f_111aec90();
  /* 111aee66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aee69 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aee6c je 0x111aee77 */
  if (C.zf) goto L_111aee77;
  /* 111aee6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aee71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aee74 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111aee77:;
  /* 111aee77 jmp 0x111aeeb5 */
  goto L_111aeeb5;
L_111aee79:;
  /* 111aee79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aee7d jne 0x111aeeb5 */
  if (!C.zf) goto L_111aeeb5;
  /* 111aee7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aee82 mov eax, dword ptr [0x111d19f0] */
  EAX = (r32((uint32_t)(0x111d19f0)));
  /* 111aee87 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 111aee8a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111aee8d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 111aee90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111aee92 je 0x111aeeb5 */
  if (C.zf) goto L_111aeeb5;
  /* 111aee94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aee97 mov ecx, dword ptr [0x111d19f0] */
  ECX = (r32((uint32_t)(0x111d19f0)));
  /* 111aee9d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 111aeea0 push edx */
  push32((uint32_t)(EDX));
  /* 111aeea1 call 0x111aec90 */
  push32(0x111aeea6u); f_111aec90();
  /* 111aeea6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aeea9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aeeac jne 0x111aeeb5 */
  if (!C.zf) goto L_111aeeb5;
  /* 111aeeae mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_111aeeb5:;
  /* 111aeeb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aeeb8 mov ecx, dword ptr [0x111d19f0] */
  ECX = (r32((uint32_t)(0x111d19f0)));
  /* 111aeebe mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 111aeec1 push edx */
  push32((uint32_t)(EDX));
  /* 111aeec2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aeec5 push eax */
  push32((uint32_t)(EAX));
  /* 111aeec6 call 0x111ae270 */
  push32(0x111aeecbu); f_111ae270();
  /* 111aeecb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111aeece:;
  /* 111aeece jmp 0x111aedd7 */
  goto L_111aedd7;
L_111aeed3:;
  /* 111aeed3 push 2 */
  push32((uint32_t)(0x2u));
  /* 111aeed5 call 0x111a8e50 */
  push32(0x111aeedau); f_111a8e50();
  /* 111aeeda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aeedd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aeee1 jne 0x111aeee8 */
  if (!C.zf) goto L_111aeee8;
  /* 111aeee3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aeee6 jmp 0x111aeeeb */
  goto L_111aeeeb;
L_111aeee8:;
  /* 111aeee8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_111aeeeb:;
  /* 111aeeeb mov esp, ebp */
  ESP = (EBP);
  /* 111aeeed pop ebp */
  EBP = (pop32());
  /* 111aeeee ret  */
  ESPCHK(0x111aedb0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x111aeef0 (15 bytes, 7 insns) */
void f_111aeef0(void) {
  FTRACE(0x111aeef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111aeef0 push ebp */
  push32((uint32_t)(EBP));
  /* 111aeef1 mov ebp, esp */
  EBP = (ESP);
  /* 111aeef3 push 2 */
  push32((uint32_t)(0x2u));
  /* 111aeef5 call 0x111a4320 */
  push32(0x111aeefau); f_111a4320();
  /* 111aeefa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aeefd pop ebp */
  EBP = (pop32());
  /* 111aeefe ret  */
  ESPCHK(0x111aeef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef00 @ 0x111aef00 (1007 bytes, 269 insns) */
void f_111aef00(void) {
  FTRACE(0x111aef00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111aef00 push ebp */
  push32((uint32_t)(EBP));
  /* 111aef01 mov ebp, esp */
  EBP = (ESP);
  /* 111aef03 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111aef09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aef0d jl 0x111aef15 */
  if ((C.sf!=C.of)) goto L_111aef15;
  /* 111aef0f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aef13 jle 0x111aef1c */
  if ((C.zf||C.sf!=C.of)) goto L_111aef1c;
L_111aef15:;
  /* 111aef15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111aef17 jmp 0x111af2eb */
  goto L_111af2eb;
L_111aef1c:;
  /* 111aef1c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111aef1e call 0x111a8db0 */
  push32(0x111aef23u); f_111a8db0();
  /* 111aef23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aef26 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111aef2d mov eax, dword ptr [0x111d19dc] */
  EAX = (r32((uint32_t)(0x111d19dc)));
  /* 111aef32 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aef35 mov dword ptr [0x111d19dc], eax */
  w32((uint32_t)(0x111d19dc), (EAX));
L_111aef3a:;
  /* 111aef3a cmp dword ptr [0x111d19ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aef41 je 0x111aef4d */
  if (C.zf) goto L_111aef4d;
  /* 111aef43 push 1 */
  push32((uint32_t)(0x1u));
  /* 111aef45 call dword ptr [0x111d42fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42fc))), 0x111aef4bu);
  /* 111aef4b jmp 0x111aef3a */
  goto L_111aef3a;
L_111aef4d:;
  /* 111aef4d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aef51 je 0x111aef91 */
  if (C.zf) goto L_111aef91;
  /* 111aef53 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aef57 je 0x111aef71 */
  if (C.zf) goto L_111aef71;
  /* 111aef59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111aef5c push ecx */
  push32((uint32_t)(ECX));
  /* 111aef5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aef60 push edx */
  push32((uint32_t)(EDX));
  /* 111aef61 call 0x111af2f0 */
  push32(0x111aef66u); f_111af2f0();
  /* 111aef66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aef69 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 111aef6f jmp 0x111aef83 */
  goto L_111aef83;
L_111aef71:;
  /* 111aef71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aef74 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111aef77 mov ecx, dword ptr [eax + 0x111d04dc] */
  ECX = (r32((uint32_t)(EAX + 0x111d04dc)));
  /* 111aef7d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_111aef83:;
  /* 111aef83 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 111aef89 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111aef8c jmp 0x111af2cb */
  goto L_111af2cb;
L_111aef91:;
  /* 111aef91 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 111aef98 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 111aef9f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aefa3 je 0x111af2c3 */
  if (C.zf) goto L_111af2c3;
  /* 111aefa9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111aefac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111aefaf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aefb2 jne 0x111af1d4 */
  if (!C.zf) goto L_111af1d4;
  /* 111aefb8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111aefbb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 111aefbf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aefc2 jne 0x111af1d4 */
  if (!C.zf) goto L_111af1d4;
  /* 111aefc8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111aefcb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 111aefcf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111aefd2 jne 0x111af1d4 */
  if (!C.zf) goto L_111af1d4;
  /* 111aefd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111aefdb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_111aefe1:;
  /* 111aefe1 push 0x111cd2cc */
  push32((uint32_t)(0x111cd2ccu));
  /* 111aefe6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 111aefec push ecx */
  push32((uint32_t)(ECX));
  /* 111aefed call 0x111b1150 */
  push32(0x111aeff2u); f_111b1150();
  /* 111aeff2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aeff5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 111aeffb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af002 je 0x111af02d */
  if (C.zf) goto L_111af02d;
  /* 111af004 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111af00a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111af010 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 111af016 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af01d je 0x111af02d */
  if (C.zf) goto L_111af02d;
  /* 111af01f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111af025 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111af028 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af02b jne 0x111af053 */
  if (!C.zf) goto L_111af053;
L_111af02d:;
  /* 111af02d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af031 je 0x111af04c */
  if (C.zf) goto L_111af04c;
  /* 111af033 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111af035 call 0x111a8e50 */
  push32(0x111af03au); f_111a8e50();
  /* 111af03a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af03d mov edx, dword ptr [0x111d19dc] */
  EDX = (r32((uint32_t)(0x111d19dc)));
  /* 111af043 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111af046 mov dword ptr [0x111d19dc], edx */
  w32((uint32_t)(0x111d19dc), (EDX));
L_111af04c:;
  /* 111af04c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111af04e jmp 0x111af2eb */
  goto L_111af2eb;
L_111af053:;
  /* 111af053 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 111af05a jmp 0x111af065 */
  goto L_111af065;
L_111af05c:;
  /* 111af05c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111af05f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af062 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_111af065:;
  /* 111af065 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af069 jg 0x111af0b3 */
  if ((!C.zf&&C.sf==C.of)) goto L_111af0b3;
  /* 111af06b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 111af071 push ecx */
  push32((uint32_t)(ECX));
  /* 111af072 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 111af078 push edx */
  push32((uint32_t)(EDX));
  /* 111af079 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111af07c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111af07f mov ecx, dword ptr [eax + 0x111d04d8] */
  ECX = (r32((uint32_t)(EAX + 0x111d04d8)));
  /* 111af085 push ecx */
  push32((uint32_t)(ECX));
  /* 111af086 call 0x111b1110 */
  push32(0x111af08bu); f_111b1110();
  /* 111af08b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af08e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af090 jne 0x111af0b1 */
  if (!C.zf) goto L_111af0b1;
  /* 111af092 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111af095 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111af098 mov eax, dword ptr [edx + 0x111d04d8] */
  EAX = (r32((uint32_t)(EDX + 0x111d04d8)));
  /* 111af09e push eax */
  push32((uint32_t)(EAX));
  /* 111af09f call 0x111a81e0 */
  push32(0x111af0a4u); f_111a81e0();
  /* 111af0a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af0a7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af0ad jne 0x111af0b1 */
  if (!C.zf) goto L_111af0b1;
  /* 111af0af jmp 0x111af0b3 */
  goto L_111af0b3;
L_111af0b1:;
  /* 111af0b1 jmp 0x111af05c */
  goto L_111af05c;
L_111af0b3:;
  /* 111af0b3 push 0x111cd2c8 */
  push32((uint32_t)(0x111cd2c8u));
  /* 111af0b8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111af0be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af0c1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 111af0c7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111af0cd push edx */
  push32((uint32_t)(EDX));
  /* 111af0ce call 0x111b10d0 */
  push32(0x111af0d3u); f_111b10d0();
  /* 111af0d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af0d6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 111af0dc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af0e3 jne 0x111af119 */
  if (!C.zf) goto L_111af119;
  /* 111af0e5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111af0eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111af0ee cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af0f1 je 0x111af119 */
  if (C.zf) goto L_111af119;
  /* 111af0f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af0f7 je 0x111af112 */
  if (C.zf) goto L_111af112;
  /* 111af0f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111af0fb call 0x111a8e50 */
  push32(0x111af100u); f_111a8e50();
  /* 111af100 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af103 mov edx, dword ptr [0x111d19dc] */
  EDX = (r32((uint32_t)(0x111d19dc)));
  /* 111af109 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111af10c mov dword ptr [0x111d19dc], edx */
  w32((uint32_t)(0x111d19dc), (EDX));
L_111af112:;
  /* 111af112 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111af114 jmp 0x111af2eb */
  goto L_111af2eb;
L_111af119:;
  /* 111af119 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af11d jg 0x111af16a */
  if ((!C.zf&&C.sf==C.of)) goto L_111af16a;
  /* 111af11f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 111af125 push eax */
  push32((uint32_t)(EAX));
  /* 111af126 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111af12c push ecx */
  push32((uint32_t)(ECX));
  /* 111af12d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 111af133 push edx */
  push32((uint32_t)(EDX));
  /* 111af134 call 0x111a8bd0 */
  push32(0x111af139u); f_111a8bd0();
  /* 111af139 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af13c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 111af142 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 111af14a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 111af150 push ecx */
  push32((uint32_t)(ECX));
  /* 111af151 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111af154 push edx */
  push32((uint32_t)(EDX));
  /* 111af155 call 0x111af2f0 */
  push32(0x111af15au); f_111af2f0();
  /* 111af15a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af15d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af15f je 0x111af16a */
  if (C.zf) goto L_111af16a;
  /* 111af161 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111af164 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af167 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_111af16a:;
  /* 111af16a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111af170 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af176 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 111af17c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 111af182 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111af185 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af187 je 0x111af198 */
  if (C.zf) goto L_111af198;
  /* 111af189 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 111af18f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af192 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_111af198:;
  /* 111af198 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 111af19e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111af1a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af1a3 jne 0x111aefe1 */
  if (!C.zf) goto L_111aefe1;
  /* 111af1a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af1ad je 0x111af1bc */
  if (C.zf) goto L_111af1bc;
  /* 111af1af call 0x111af490 */
  push32(0x111af1b4u); f_111af490();
  /* 111af1b4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 111af1ba jmp 0x111af1c6 */
  goto L_111af1c6;
L_111af1bc:;
  /* 111af1bc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_111af1c6:;
  /* 111af1c6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 111af1cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111af1cf jmp 0x111af2c1 */
  goto L_111af2c1;
L_111af1d4:;
  /* 111af1d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af1d7 push edx */
  push32((uint32_t)(EDX));
  /* 111af1d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111af1da push 0 */
  push32((uint32_t)(0x0u));
  /* 111af1dc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 111af1e2 push eax */
  push32((uint32_t)(EAX));
  /* 111af1e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af1e6 push ecx */
  push32((uint32_t)(ECX));
  /* 111af1e7 call 0x111af590 */
  push32(0x111af1ecu); f_111af590();
  /* 111af1ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af1ef mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111af1f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af1f6 je 0x111af2c1 */
  if (C.zf) goto L_111af2c1;
  /* 111af1fc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111af203 jmp 0x111af20e */
  goto L_111af20e;
L_111af205:;
  /* 111af205 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111af208 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af20b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_111af20e:;
  /* 111af20e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af212 jg 0x111af270 */
  if ((!C.zf&&C.sf==C.of)) goto L_111af270;
  /* 111af214 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af218 je 0x111af26e */
  if (C.zf) goto L_111af26e;
  /* 111af21a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111af21d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111af220 mov ecx, dword ptr [eax + 0x111d04dc] */
  ECX = (r32((uint32_t)(EAX + 0x111d04dc)));
  /* 111af226 push ecx */
  push32((uint32_t)(ECX));
  /* 111af227 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 111af22d push edx */
  push32((uint32_t)(EDX));
  /* 111af22e call 0x111b1040 */
  push32(0x111af233u); f_111b1040();
  /* 111af233 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af236 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af238 je 0x111af265 */
  if (C.zf) goto L_111af265;
  /* 111af23a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 111af240 push eax */
  push32((uint32_t)(EAX));
  /* 111af241 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111af244 push ecx */
  push32((uint32_t)(ECX));
  /* 111af245 call 0x111af2f0 */
  push32(0x111af24au); f_111af2f0();
  /* 111af24a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af24d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af24f je 0x111af25c */
  if (C.zf) goto L_111af25c;
  /* 111af251 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111af254 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af257 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 111af25a jmp 0x111af263 */
  goto L_111af263;
L_111af25c:;
  /* 111af25c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_111af263:;
  /* 111af263 jmp 0x111af26e */
  goto L_111af26e;
L_111af265:;
  /* 111af265 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111af268 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af26b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_111af26e:;
  /* 111af26e jmp 0x111af205 */
  goto L_111af205;
L_111af270:;
  /* 111af270 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af274 je 0x111af29b */
  if (C.zf) goto L_111af29b;
  /* 111af276 call 0x111af490 */
  push32(0x111af27bu); f_111af490();
  /* 111af27b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111af27e push 2 */
  push32((uint32_t)(0x2u));
  /* 111af280 mov ecx, dword ptr [0x111d04dc] */
  ECX = (r32((uint32_t)(0x111d04dc)));
  /* 111af286 push ecx */
  push32((uint32_t)(ECX));
  /* 111af287 call 0x111a5e40 */
  push32(0x111af28cu); f_111a5e40();
  /* 111af28c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af28f mov dword ptr [0x111d04dc], 0 */
  w32((uint32_t)(0x111d04dc), (0x0u));
  /* 111af299 jmp 0x111af2c1 */
  goto L_111af2c1;
L_111af29b:;
  /* 111af29b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af29f je 0x111af2ae */
  if (C.zf) goto L_111af2ae;
  /* 111af2a1 call 0x111af490 */
  push32(0x111af2a6u); f_111af490();
  /* 111af2a6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 111af2ac jmp 0x111af2b8 */
  goto L_111af2b8;
L_111af2ae:;
  /* 111af2ae mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_111af2b8:;
  /* 111af2b8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 111af2be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_111af2c1:;
  /* 111af2c1 jmp 0x111af2cb */
  goto L_111af2cb;
L_111af2c3:;
  /* 111af2c3 call 0x111af490 */
  push32(0x111af2c8u); f_111af490();
  /* 111af2c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111af2cb:;
  /* 111af2cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af2cf je 0x111af2e8 */
  if (C.zf) goto L_111af2e8;
  /* 111af2d1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111af2d3 call 0x111a8e50 */
  push32(0x111af2d8u); f_111a8e50();
  /* 111af2d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af2db mov eax, dword ptr [0x111d19dc] */
  EAX = (r32((uint32_t)(0x111d19dc)));
  /* 111af2e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111af2e3 mov dword ptr [0x111d19dc], eax */
  w32((uint32_t)(0x111d19dc), (EAX));
L_111af2e8:;
  /* 111af2e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_111af2eb:;
  /* 111af2eb mov esp, ebp */
  ESP = (EBP);
  /* 111af2ed pop ebp */
  EBP = (pop32());
  /* 111af2ee ret  */
  ESPCHK(0x111aef00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2f0 @ 0x111af2f0 (403 bytes, 117 insns) */
void f_111af2f0(void) {
  FTRACE(0x111af2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111af2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111af2f1 mov ebp, esp */
  EBP = (ESP);
  /* 111af2f3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111af2f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af2fc push eax */
  push32((uint32_t)(EAX));
  /* 111af2fd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 111af303 push ecx */
  push32((uint32_t)(ECX));
  /* 111af304 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 111af30a push edx */
  push32((uint32_t)(EDX));
  /* 111af30b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 111af311 push eax */
  push32((uint32_t)(EAX));
  /* 111af312 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af315 push ecx */
  push32((uint32_t)(ECX));
  /* 111af316 call 0x111af590 */
  push32(0x111af31bu); f_111af590();
  /* 111af31b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af31e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af320 jne 0x111af329 */
  if (!C.zf) goto L_111af329;
  /* 111af322 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111af324 jmp 0x111af47f */
  goto L_111af47f;
L_111af329:;
  /* 111af329 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 111af32e push 0x111cd2d0 */
  push32((uint32_t)(0x111cd2d0u));
  /* 111af333 push 2 */
  push32((uint32_t)(0x2u));
  /* 111af335 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 111af33b push edx */
  push32((uint32_t)(EDX));
  /* 111af33c call 0x111a81e0 */
  push32(0x111af341u); f_111a81e0();
  /* 111af341 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af344 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af347 push eax */
  push32((uint32_t)(EAX));
  /* 111af348 call 0x111a53b0 */
  push32(0x111af34du); f_111a53b0();
  /* 111af34d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af350 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111af353 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af357 jne 0x111af360 */
  if (!C.zf) goto L_111af360;
  /* 111af359 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111af35b jmp 0x111af47f */
  goto L_111af47f;
L_111af360:;
  /* 111af360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af363 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111af366 mov ecx, dword ptr [eax + 0x111d04dc] */
  ECX = (r32((uint32_t)(EAX + 0x111d04dc)));
  /* 111af36c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111af36f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af372 mov eax, dword ptr [edx*4 + 0x111d1858] */
  EAX = (r32((uint32_t)(EDX*4 + 0x111d1858)));
  /* 111af379 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111af37c push 6 */
  push32((uint32_t)(0x6u));
  /* 111af37e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af381 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111af384 add ecx, 0x111d18a8 */
  { uint32_t _a=(ECX),_b=(0x111d18a8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af38a push ecx */
  push32((uint32_t)(ECX));
  /* 111af38b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 111af38e push edx */
  push32((uint32_t)(EDX));
  /* 111af38f call 0x111abc90 */
  push32(0x111af394u); f_111abc90();
  /* 111af394 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af397 mov eax, dword ptr [0x111d1870] */
  EAX = (r32((uint32_t)(0x111d1870)));
  /* 111af39c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111af39f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 111af3a5 push ecx */
  push32((uint32_t)(ECX));
  /* 111af3a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111af3a9 push edx */
  push32((uint32_t)(EDX));
  /* 111af3aa call 0x111a8360 */
  push32(0x111af3afu); f_111a8360();
  /* 111af3af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af3b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af3b5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111af3b8 mov dword ptr [ecx + 0x111d04dc], eax */
  w32((uint32_t)(ECX + 0x111d04dc), (EAX));
  /* 111af3be mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 111af3c4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111af3ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af3cd mov dword ptr [eax*4 + 0x111d1858], edx */
  w32((uint32_t)(EAX*4 + 0x111d1858), (EDX));
  /* 111af3d4 push 6 */
  push32((uint32_t)(0x6u));
  /* 111af3d6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 111af3dc push ecx */
  push32((uint32_t)(ECX));
  /* 111af3dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af3e0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111af3e3 add edx, 0x111d18a8 */
  { uint32_t _a=(EDX),_b=(0x111d18a8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af3e9 push edx */
  push32((uint32_t)(EDX));
  /* 111af3ea call 0x111abc90 */
  push32(0x111af3efu); f_111abc90();
  /* 111af3ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af3f2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af3f6 jne 0x111af403 */
  if (!C.zf) goto L_111af403;
  /* 111af3f8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111af3fe mov dword ptr [0x111d1870], eax */
  w32((uint32_t)(0x111d1870), (EAX));
L_111af403:;
  /* 111af403 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af407 jne 0x111af415 */
  if (!C.zf) goto L_111af415;
  /* 111af409 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111af40f mov dword ptr [0x111d1874], ecx */
  w32((uint32_t)(0x111d1874), (ECX));
L_111af415:;
  /* 111af415 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af418 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111af41b call dword ptr [edx + 0x111d04e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x111d04e0))), 0x111af421u);
  /* 111af421 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af423 je 0x111af45c */
  if (C.zf) goto L_111af45c;
  /* 111af425 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af428 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111af42b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111af42e mov dword ptr [eax + 0x111d04dc], ecx */
  w32((uint32_t)(EAX + 0x111d04dc), (ECX));
  /* 111af434 push 2 */
  push32((uint32_t)(0x2u));
  /* 111af436 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111af439 push edx */
  push32((uint32_t)(EDX));
  /* 111af43a call 0x111a5e40 */
  push32(0x111af43fu); f_111a5e40();
  /* 111af43f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af442 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af445 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111af448 mov dword ptr [eax*4 + 0x111d1858], ecx */
  w32((uint32_t)(EAX*4 + 0x111d1858), (ECX));
  /* 111af44f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111af452 mov dword ptr [0x111d1870], edx */
  w32((uint32_t)(0x111d1870), (EDX));
  /* 111af458 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111af45a jmp 0x111af47f */
  goto L_111af47f;
L_111af45c:;
  /* 111af45c cmp dword ptr [ebp - 0xc], 0x111d03c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x111d03c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af463 je 0x111af473 */
  if (C.zf) goto L_111af473;
  /* 111af465 push 2 */
  push32((uint32_t)(0x2u));
  /* 111af467 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111af46a push eax */
  push32((uint32_t)(EAX));
  /* 111af46b call 0x111a5e40 */
  push32(0x111af470u); f_111a5e40();
  /* 111af470 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111af473:;
  /* 111af473 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af476 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111af479 mov eax, dword ptr [ecx + 0x111d04dc] */
  EAX = (r32((uint32_t)(ECX + 0x111d04dc)));
L_111af47f:;
  /* 111af47f mov esp, ebp */
  ESP = (EBP);
  /* 111af481 pop ebp */
  EBP = (pop32());
  /* 111af482 ret  */
  ESPCHK(0x111af2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f490 @ 0x111af490 (256 bytes, 72 insns) */
void f_111af490(void) {
  FTRACE(0x111af490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111af490 push ebp */
  push32((uint32_t)(EBP));
  /* 111af491 mov ebp, esp */
  EBP = (ESP);
  /* 111af493 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111af496 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 111af49d cmp dword ptr [0x111d04dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d04dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af4a4 jne 0x111af4c4 */
  if (!C.zf) goto L_111af4c4;
  /* 111af4a6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 111af4ab push 0x111cd2d0 */
  push32((uint32_t)(0x111cd2d0u));
  /* 111af4b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 111af4b2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 111af4b7 call 0x111a53b0 */
  push32(0x111af4bcu); f_111a53b0();
  /* 111af4bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af4bf mov dword ptr [0x111d04dc], eax */
  w32((uint32_t)(0x111d04dc), (EAX));
L_111af4c4:;
  /* 111af4c4 mov eax, dword ptr [0x111d04dc] */
  EAX = (r32((uint32_t)(0x111d04dc)));
  /* 111af4c9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 111af4cc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111af4d3 jmp 0x111af4de */
  goto L_111af4de;
L_111af4d5:;
  /* 111af4d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111af4d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af4db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111af4de:;
  /* 111af4de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111af4e1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111af4e4 mov eax, dword ptr [edx + 0x111d04dc] */
  EAX = (r32((uint32_t)(EDX + 0x111d04dc)));
  /* 111af4ea push eax */
  push32((uint32_t)(EAX));
  /* 111af4eb push 0x111cd2dc */
  push32((uint32_t)(0x111cd2dcu));
  /* 111af4f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111af4f3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111af4f6 mov edx, dword ptr [ecx + 0x111d04d8] */
  EDX = (r32((uint32_t)(ECX + 0x111d04d8)));
  /* 111af4fc push edx */
  push32((uint32_t)(EDX));
  /* 111af4fd push 3 */
  push32((uint32_t)(0x3u));
  /* 111af4ff mov eax, dword ptr [0x111d04dc] */
  EAX = (r32((uint32_t)(0x111d04dc)));
  /* 111af504 push eax */
  push32((uint32_t)(EAX));
  /* 111af505 call 0x111af730 */
  push32(0x111af50au); f_111af730();
  /* 111af50a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af50d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af511 jge 0x111af559 */
  if ((C.sf==C.of)) goto L_111af559;
  /* 111af513 push 0x111cd2c8 */
  push32((uint32_t)(0x111cd2c8u));
  /* 111af518 mov ecx, dword ptr [0x111d04dc] */
  ECX = (r32((uint32_t)(0x111d04dc)));
  /* 111af51e push ecx */
  push32((uint32_t)(ECX));
  /* 111af51f call 0x111a8370 */
  push32(0x111af524u); f_111a8370();
  /* 111af524 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af527 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111af52a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af52d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111af530 mov eax, dword ptr [edx + 0x111d04dc] */
  EAX = (r32((uint32_t)(EDX + 0x111d04dc)));
  /* 111af536 push eax */
  push32((uint32_t)(EAX));
  /* 111af537 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111af53a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111af53d mov edx, dword ptr [ecx + 0x111d04dc] */
  EDX = (r32((uint32_t)(ECX + 0x111d04dc)));
  /* 111af543 push edx */
  push32((uint32_t)(EDX));
  /* 111af544 call 0x111b1040 */
  push32(0x111af549u); f_111b1040();
  /* 111af549 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af54c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af54e je 0x111af557 */
  if (C.zf) goto L_111af557;
  /* 111af550 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_111af557:;
  /* 111af557 jmp 0x111af587 */
  goto L_111af587;
L_111af559:;
  /* 111af559 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af55d jne 0x111af566 */
  if (!C.zf) goto L_111af566;
  /* 111af55f mov eax, dword ptr [0x111d04dc] */
  EAX = (r32((uint32_t)(0x111d04dc)));
  /* 111af564 jmp 0x111af58c */
  goto L_111af58c;
L_111af566:;
  /* 111af566 push 2 */
  push32((uint32_t)(0x2u));
  /* 111af568 mov eax, dword ptr [0x111d04dc] */
  EAX = (r32((uint32_t)(0x111d04dc)));
  /* 111af56d push eax */
  push32((uint32_t)(EAX));
  /* 111af56e call 0x111a5e40 */
  push32(0x111af573u); f_111a5e40();
  /* 111af573 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af576 mov dword ptr [0x111d04dc], 0 */
  w32((uint32_t)(0x111d04dc), (0x0u));
  /* 111af580 mov eax, dword ptr [0x111d04f4] */
  EAX = (r32((uint32_t)(0x111d04f4)));
  /* 111af585 jmp 0x111af58c */
  goto L_111af58c;
L_111af587:;
  /* 111af587 jmp 0x111af4d5 */
  goto L_111af4d5;
L_111af58c:;
  /* 111af58c mov esp, ebp */
  ESP = (EBP);
  /* 111af58e pop ebp */
  EBP = (pop32());
  /* 111af58f ret  */
  ESPCHK(0x111af490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f590 @ 0x111af590 (388 bytes, 115 insns) */
void f_111af590(void) {
  FTRACE(0x111af590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111af590 push ebp */
  push32((uint32_t)(EBP));
  /* 111af591 mov ebp, esp */
  EBP = (ESP);
  /* 111af593 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111af599 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af59d jne 0x111af5a6 */
  if (!C.zf) goto L_111af5a6;
  /* 111af59f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111af5a1 jmp 0x111af710 */
  goto L_111af710;
L_111af5a6:;
  /* 111af5a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af5a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111af5ac cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af5af jne 0x111af600 */
  if (!C.zf) goto L_111af600;
  /* 111af5b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af5b4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 111af5b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af5ba jne 0x111af600 */
  if (!C.zf) goto L_111af600;
  /* 111af5bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af5bf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 111af5c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af5c5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 111af5c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af5cd je 0x111af5e9 */
  if (C.zf) goto L_111af5e9;
  /* 111af5cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111af5d2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 111af5d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111af5da mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 111af5e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111af5e3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_111af5e9:;
  /* 111af5e9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af5ed je 0x111af5f8 */
  if (C.zf) goto L_111af5f8;
  /* 111af5ef mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111af5f2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_111af5f8:;
  /* 111af5f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af5fb jmp 0x111af710 */
  goto L_111af710;
L_111af600:;
  /* 111af600 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af603 push ecx */
  push32((uint32_t)(ECX));
  /* 111af604 push 0x111d0450 */
  push32((uint32_t)(0x111d0450u));
  /* 111af609 call 0x111b1040 */
  push32(0x111af60eu); f_111b1040();
  /* 111af60e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af611 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af613 je 0x111af6c8 */
  if (C.zf) goto L_111af6c8;
  /* 111af619 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af61c push edx */
  push32((uint32_t)(EDX));
  /* 111af61d push 0x111d03cc */
  push32((uint32_t)(0x111d03ccu));
  /* 111af622 call 0x111b1040 */
  push32(0x111af627u); f_111b1040();
  /* 111af627 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af62a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af62c je 0x111af6c8 */
  if (C.zf) goto L_111af6c8;
  /* 111af632 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af635 push eax */
  push32((uint32_t)(EAX));
  /* 111af636 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 111af63c push ecx */
  push32((uint32_t)(ECX));
  /* 111af63d call 0x111af780 */
  push32(0x111af642u); f_111af780();
  /* 111af642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af645 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af647 je 0x111af650 */
  if (C.zf) goto L_111af650;
  /* 111af649 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111af64b jmp 0x111af710 */
  goto L_111af710;
L_111af650:;
  /* 111af650 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 111af656 push edx */
  push32((uint32_t)(EDX));
  /* 111af657 push 0x111d1880 */
  push32((uint32_t)(0x111d1880u));
  /* 111af65c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 111af662 push eax */
  push32((uint32_t)(EAX));
  /* 111af663 call 0x111b1190 */
  push32(0x111af668u); f_111b1190();
  /* 111af668 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af66b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af66d jne 0x111af676 */
  if (!C.zf) goto L_111af676;
  /* 111af66f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111af671 jmp 0x111af710 */
  goto L_111af710;
L_111af676:;
  /* 111af676 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111af678 mov cx, word ptr [0x111d1884] */
  CX = (r16((uint32_t)(0x111d1884)));
  /* 111af67f mov dword ptr [0x111d1888], ecx */
  w32((uint32_t)(0x111d1888), (ECX));
  /* 111af685 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 111af68b push edx */
  push32((uint32_t)(EDX));
  /* 111af68c push 0x111d0450 */
  push32((uint32_t)(0x111d0450u));
  /* 111af691 call 0x111af8e0 */
  push32(0x111af696u); f_111af8e0();
  /* 111af696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af699 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af69c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111af69f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111af6a1 je 0x111af6b6 */
  if (C.zf) goto L_111af6b6;
  /* 111af6a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af6a6 push edx */
  push32((uint32_t)(EDX));
  /* 111af6a7 push 0x111d03cc */
  push32((uint32_t)(0x111d03ccu));
  /* 111af6ac call 0x111a8360 */
  push32(0x111af6b1u); f_111a8360();
  /* 111af6b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af6b4 jmp 0x111af6c8 */
  goto L_111af6c8;
L_111af6b6:;
  /* 111af6b6 push 0x111d0450 */
  push32((uint32_t)(0x111d0450u));
  /* 111af6bb push 0x111d03cc */
  push32((uint32_t)(0x111d03ccu));
  /* 111af6c0 call 0x111a8360 */
  push32(0x111af6c5u); f_111a8360();
  /* 111af6c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111af6c8:;
  /* 111af6c8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af6cc je 0x111af6e1 */
  if (C.zf) goto L_111af6e1;
  /* 111af6ce push 6 */
  push32((uint32_t)(0x6u));
  /* 111af6d0 push 0x111d1880 */
  push32((uint32_t)(0x111d1880u));
  /* 111af6d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111af6d8 push eax */
  push32((uint32_t)(EAX));
  /* 111af6d9 call 0x111abc90 */
  push32(0x111af6deu); f_111abc90();
  /* 111af6de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111af6e1:;
  /* 111af6e1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af6e5 je 0x111af6fa */
  if (C.zf) goto L_111af6fa;
  /* 111af6e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 111af6e9 push 0x111d1888 */
  push32((uint32_t)(0x111d1888u));
  /* 111af6ee mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111af6f1 push ecx */
  push32((uint32_t)(ECX));
  /* 111af6f2 call 0x111abc90 */
  push32(0x111af6f7u); f_111abc90();
  /* 111af6f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111af6fa:;
  /* 111af6fa push 0x111d0450 */
  push32((uint32_t)(0x111d0450u));
  /* 111af6ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af702 push edx */
  push32((uint32_t)(EDX));
  /* 111af703 call 0x111a8360 */
  push32(0x111af708u); f_111a8360();
  /* 111af708 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af70b mov eax, 0x111d0450 */
  EAX = (0x111d0450u);
L_111af710:;
  /* 111af710 mov esp, ebp */
  ESP = (EBP);
  /* 111af712 pop ebp */
  EBP = (pop32());
  /* 111af713 ret  */
  ESPCHK(0x111af590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f720 @ 0x111af720 (7 bytes, 5 insns) */
void f_111af720(void) {
  FTRACE(0x111af720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111af720 push ebp */
  push32((uint32_t)(EBP));
  /* 111af721 mov ebp, esp */
  EBP = (ESP);
  /* 111af723 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111af725 pop ebp */
  EBP = (pop32());
  /* 111af726 ret  */
  ESPCHK(0x111af720u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x111af730 (79 bytes, 28 insns) */
void f_111af730(void) {
  FTRACE(0x111af730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111af730 push ebp */
  push32((uint32_t)(EBP));
  /* 111af731 mov ebp, esp */
  EBP = (ESP);
  /* 111af733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111af736 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 111af739 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111af73c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111af743 jmp 0x111af74e */
  goto L_111af74e;
L_111af745:;
  /* 111af745 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111af748 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af74b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_111af74e:;
  /* 111af74e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111af751 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af754 jge 0x111af774 */
  if ((C.sf==C.of)) goto L_111af774;
  /* 111af756 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111af759 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af75c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111af75f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111af762 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 111af765 push edx */
  push32((uint32_t)(EDX));
  /* 111af766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af769 push eax */
  push32((uint32_t)(EAX));
  /* 111af76a call 0x111a8370 */
  push32(0x111af76fu); f_111a8370();
  /* 111af76f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af772 jmp 0x111af745 */
  goto L_111af745;
L_111af774:;
  /* 111af774 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111af77b mov esp, ebp */
  ESP = (EBP);
  /* 111af77d pop ebp */
  EBP = (pop32());
  /* 111af77e ret  */
  ESPCHK(0x111af730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f780 @ 0x111af780 (349 bytes, 122 insns) */
void f_111af780(void) {
  FTRACE(0x111af780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111af780 push ebp */
  push32((uint32_t)(EBP));
  /* 111af781 mov ebp, esp */
  EBP = (ESP);
  /* 111af783 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111af786 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 111af78b push 0 */
  push32((uint32_t)(0x0u));
  /* 111af78d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af790 push eax */
  push32((uint32_t)(EAX));
  /* 111af791 call 0x111a9120 */
  push32(0x111af796u); f_111a9120();
  /* 111af796 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af799 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af79c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111af79f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111af7a1 jne 0x111af7aa */
  if (!C.zf) goto L_111af7aa;
  /* 111af7a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111af7a5 jmp 0x111af8d9 */
  goto L_111af8d9;
L_111af7aa:;
  /* 111af7aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af7ad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111af7b0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af7b3 jne 0x111af7e0 */
  if (!C.zf) goto L_111af7e0;
  /* 111af7b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af7b8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 111af7bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af7be je 0x111af7e0 */
  if (C.zf) goto L_111af7e0;
  /* 111af7c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af7c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af7c6 push ecx */
  push32((uint32_t)(ECX));
  /* 111af7c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af7ca add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af7d0 push edx */
  push32((uint32_t)(EDX));
  /* 111af7d1 call 0x111a8360 */
  push32(0x111af7d6u); f_111a8360();
  /* 111af7d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af7d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111af7db jmp 0x111af8d9 */
  goto L_111af8d9;
L_111af7e0:;
  /* 111af7e0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111af7e7 jmp 0x111af7f2 */
  goto L_111af7f2;
L_111af7e9:;
  /* 111af7e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111af7ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af7ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111af7f2:;
  /* 111af7f2 push 0x111cd2e0 */
  push32((uint32_t)(0x111cd2e0u));
  /* 111af7f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af7fa push ecx */
  push32((uint32_t)(ECX));
  /* 111af7fb call 0x111b10d0 */
  push32(0x111af800u); f_111b10d0();
  /* 111af800 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af803 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111af806 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af80a jne 0x111af814 */
  if (!C.zf) goto L_111af814;
  /* 111af80c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111af80f jmp 0x111af8d9 */
  goto L_111af8d9;
L_111af814:;
  /* 111af814 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af817 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af81a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111af81c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 111af81f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af823 jne 0x111af84a */
  if (!C.zf) goto L_111af84a;
  /* 111af825 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af829 jge 0x111af84a */
  if ((C.sf==C.of)) goto L_111af84a;
  /* 111af82b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 111af82f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af832 je 0x111af84a */
  if (C.zf) goto L_111af84a;
  /* 111af834 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111af837 push edx */
  push32((uint32_t)(EDX));
  /* 111af838 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af83b push eax */
  push32((uint32_t)(EAX));
  /* 111af83c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af83f push ecx */
  push32((uint32_t)(ECX));
  /* 111af840 call 0x111a8bd0 */
  push32(0x111af845u); f_111a8bd0();
  /* 111af845 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af848 jmp 0x111af8b0 */
  goto L_111af8b0;
L_111af84a:;
  /* 111af84a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af84e jne 0x111af878 */
  if (!C.zf) goto L_111af878;
  /* 111af850 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af854 jge 0x111af878 */
  if ((C.sf==C.of)) goto L_111af878;
  /* 111af856 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 111af85a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af85d je 0x111af878 */
  if (C.zf) goto L_111af878;
  /* 111af85f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111af862 push eax */
  push32((uint32_t)(EAX));
  /* 111af863 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af866 push ecx */
  push32((uint32_t)(ECX));
  /* 111af867 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af86a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af86d push edx */
  push32((uint32_t)(EDX));
  /* 111af86e call 0x111a8bd0 */
  push32(0x111af873u); f_111a8bd0();
  /* 111af873 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af876 jmp 0x111af8b0 */
  goto L_111af8b0;
L_111af878:;
  /* 111af878 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af87c jne 0x111af8ab */
  if (!C.zf) goto L_111af8ab;
  /* 111af87e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 111af882 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af884 je 0x111af88f */
  if (C.zf) goto L_111af88f;
  /* 111af886 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 111af88a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af88d jne 0x111af8ab */
  if (!C.zf) goto L_111af8ab;
L_111af88f:;
  /* 111af88f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111af892 push edx */
  push32((uint32_t)(EDX));
  /* 111af893 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af896 push eax */
  push32((uint32_t)(EAX));
  /* 111af897 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af89a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af8a0 push ecx */
  push32((uint32_t)(ECX));
  /* 111af8a1 call 0x111a8bd0 */
  push32(0x111af8a6u); f_111a8bd0();
  /* 111af8a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af8a9 jmp 0x111af8b0 */
  goto L_111af8b0;
L_111af8ab:;
  /* 111af8ab or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111af8ae jmp 0x111af8d9 */
  goto L_111af8d9;
L_111af8b0:;
  /* 111af8b0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 111af8b4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af8b7 jne 0x111af8bb */
  if (!C.zf) goto L_111af8bb;
  /* 111af8b9 jmp 0x111af8d7 */
  goto L_111af8d7;
L_111af8bb:;
  /* 111af8bb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 111af8bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af8c1 jne 0x111af8c5 */
  if (!C.zf) goto L_111af8c5;
  /* 111af8c3 jmp 0x111af8d7 */
  goto L_111af8d7;
L_111af8c5:;
  /* 111af8c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111af8c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af8cb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 111af8cf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 111af8d2 jmp 0x111af7e9 */
  goto L_111af7e9;
L_111af8d7:;
  /* 111af8d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111af8d9:;
  /* 111af8d9 mov esp, ebp */
  ESP = (EBP);
  /* 111af8db pop ebp */
  EBP = (pop32());
  /* 111af8dc ret  */
  ESPCHK(0x111af780u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x111af8e0 (101 bytes, 36 insns) */
void f_111af8e0(void) {
  FTRACE(0x111af8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111af8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111af8e1 mov ebp, esp */
  EBP = (ESP);
  /* 111af8e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af8e6 push eax */
  push32((uint32_t)(EAX));
  /* 111af8e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af8ea push ecx */
  push32((uint32_t)(ECX));
  /* 111af8eb call 0x111a8360 */
  push32(0x111af8f0u); f_111a8360();
  /* 111af8f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af8f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af8f6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 111af8fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af8fc je 0x111af918 */
  if (C.zf) goto L_111af918;
  /* 111af8fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af901 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af904 push ecx */
  push32((uint32_t)(ECX));
  /* 111af905 push 0x111cd2e8 */
  push32((uint32_t)(0x111cd2e8u));
  /* 111af90a push 2 */
  push32((uint32_t)(0x2u));
  /* 111af90c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af90f push edx */
  push32((uint32_t)(EDX));
  /* 111af910 call 0x111af730 */
  push32(0x111af915u); f_111af730();
  /* 111af915 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111af918:;
  /* 111af918 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af91b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 111af922 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111af924 je 0x111af943 */
  if (C.zf) goto L_111af943;
  /* 111af926 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111af929 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111af92f push edx */
  push32((uint32_t)(EDX));
  /* 111af930 push 0x111cd2e4 */
  push32((uint32_t)(0x111cd2e4u));
  /* 111af935 push 2 */
  push32((uint32_t)(0x2u));
  /* 111af937 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af93a push eax */
  push32((uint32_t)(EAX));
  /* 111af93b call 0x111af730 */
  push32(0x111af940u); f_111af730();
  /* 111af940 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111af943:;
  /* 111af943 pop ebp */
  EBP = (pop32());
  /* 111af944 ret  */
  ESPCHK(0x111af8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f950 @ 0x111af950 (130 bytes, 50 insns) */
void f_111af950(void) {
  FTRACE(0x111af950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111af950 push ebp */
  push32((uint32_t)(EBP));
  /* 111af951 mov ebp, esp */
  EBP = (ESP);
  /* 111af953 push ecx */
  push32((uint32_t)(ECX));
  /* 111af954 push ebx */
  push32((uint32_t)(EBX));
  /* 111af955 push esi */
  push32((uint32_t)(ESI));
  /* 111af956 push edi */
  push32((uint32_t)(EDI));
  /* 111af957 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_111af95e:;
  /* 111af95e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af962 jne 0x111af982 */
  if (!C.zf) goto L_111af982;
  /* 111af964 push 0x111cd2f8 */
  push32((uint32_t)(0x111cd2f8u));
  /* 111af969 push 0 */
  push32((uint32_t)(0x0u));
  /* 111af96b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 111af96d push 0x111cd2ec */
  push32((uint32_t)(0x111cd2ecu));
  /* 111af972 push 2 */
  push32((uint32_t)(0x2u));
  /* 111af974 call 0x111a4470 */
  push32(0x111af979u); f_111a4470();
  /* 111af979 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af97c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af97f jne 0x111af982 */
  if (!C.zf) goto L_111af982;
  /* 111af981 int3  */
  x86_unimpl("int3 @ 0x111af981");
L_111af982:;
  /* 111af982 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111af984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111af986 jne 0x111af95e */
  if (!C.zf) goto L_111af95e;
  /* 111af988 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af98b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111af98e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 111af991 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111af993 je 0x111af9a1 */
  if (C.zf) goto L_111af9a1;
  /* 111af995 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af998 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 111af99f jmp 0x111af9c8 */
  goto L_111af9c8;
L_111af9a1:;
  /* 111af9a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af9a4 push ecx */
  push32((uint32_t)(ECX));
  /* 111af9a5 call 0x111ae1c0 */
  push32(0x111af9aau); f_111ae1c0();
  /* 111af9aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af9ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af9b0 push edx */
  push32((uint32_t)(EDX));
  /* 111af9b1 call 0x111af9e0 */
  push32(0x111af9b6u); f_111af9e0();
  /* 111af9b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111af9b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111af9bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af9bf push eax */
  push32((uint32_t)(EAX));
  /* 111af9c0 call 0x111ae230 */
  push32(0x111af9c5u); f_111ae230();
  /* 111af9c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111af9c8:;
  /* 111af9c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111af9cb pop edi */
  EDI = (pop32());
  /* 111af9cc pop esi */
  ESI = (pop32());
  /* 111af9cd pop ebx */
  EBX = (pop32());
  /* 111af9ce mov esp, ebp */
  ESP = (EBP);
  /* 111af9d0 pop ebp */
  EBP = (pop32());
  /* 111af9d1 ret  */
  ESPCHK(0x111af950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9e0 @ 0x111af9e0 (190 bytes, 67 insns) */
void f_111af9e0(void) {
  FTRACE(0x111af9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111af9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111af9e1 mov ebp, esp */
  EBP = (ESP);
  /* 111af9e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111af9e6 push ebx */
  push32((uint32_t)(EBX));
  /* 111af9e7 push esi */
  push32((uint32_t)(ESI));
  /* 111af9e8 push edi */
  push32((uint32_t)(EDI));
  /* 111af9e9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 111af9f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111af9f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111af9f6:;
  /* 111af9f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111af9fa jne 0x111afa1a */
  if (!C.zf) goto L_111afa1a;
  /* 111af9fc push 0x111cd19c */
  push32((uint32_t)(0x111cd19cu));
  /* 111afa01 push 0 */
  push32((uint32_t)(0x0u));
  /* 111afa03 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 111afa05 push 0x111cd2ec */
  push32((uint32_t)(0x111cd2ecu));
  /* 111afa0a push 2 */
  push32((uint32_t)(0x2u));
  /* 111afa0c call 0x111a4470 */
  push32(0x111afa11u); f_111a4470();
  /* 111afa11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afa14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111afa17 jne 0x111afa1a */
  if (!C.zf) goto L_111afa1a;
  /* 111afa19 int3  */
  x86_unimpl("int3 @ 0x111afa19");
L_111afa1a:;
  /* 111afa1a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111afa1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111afa1e jne 0x111af9f6 */
  if (!C.zf) goto L_111af9f6;
  /* 111afa20 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111afa23 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 111afa26 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 111afa2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111afa2d je 0x111afa8a */
  if (C.zf) goto L_111afa8a;
  /* 111afa2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111afa32 push ecx */
  push32((uint32_t)(ECX));
  /* 111afa33 call 0x111aece0 */
  push32(0x111afa38u); f_111aece0();
  /* 111afa38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afa3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111afa3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111afa41 push edx */
  push32((uint32_t)(EDX));
  /* 111afa42 call 0x111b2060 */
  push32(0x111afa47u); f_111b2060();
  /* 111afa47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afa4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111afa4d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111afa50 push ecx */
  push32((uint32_t)(ECX));
  /* 111afa51 call 0x111b1f30 */
  push32(0x111afa56u); f_111b1f30();
  /* 111afa56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afa59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111afa5b jge 0x111afa66 */
  if ((C.sf==C.of)) goto L_111afa66;
  /* 111afa5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 111afa64 jmp 0x111afa8a */
  goto L_111afa8a;
L_111afa66:;
  /* 111afa66 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111afa69 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111afa6d je 0x111afa8a */
  if (C.zf) goto L_111afa8a;
  /* 111afa6f push 2 */
  push32((uint32_t)(0x2u));
  /* 111afa71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111afa74 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 111afa77 push ecx */
  push32((uint32_t)(ECX));
  /* 111afa78 call 0x111a5e40 */
  push32(0x111afa7du); f_111a5e40();
  /* 111afa7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afa80 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111afa83 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_111afa8a:;
  /* 111afa8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111afa8d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 111afa94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afa97 pop edi */
  EDI = (pop32());
  /* 111afa98 pop esi */
  ESI = (pop32());
  /* 111afa99 pop ebx */
  EBX = (pop32());
  /* 111afa9a mov esp, ebp */
  ESP = (EBP);
  /* 111afa9c pop ebp */
  EBP = (pop32());
  /* 111afa9d ret  */
  ESPCHK(0x111af9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000faa0 @ 0x111afaa0 (210 bytes, 63 insns) */
void f_111afaa0(void) {
  FTRACE(0x111afaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111afaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 111afaa1 mov ebp, esp */
  EBP = (ESP);
  /* 111afaa3 push ecx */
  push32((uint32_t)(ECX));
  /* 111afaa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afaa7 cmp eax, dword ptr [0x111d317c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d317c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111afaad jae 0x111afad1 */
  if (!C.cf) goto L_111afad1;
  /* 111afaaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afab2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111afab5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afab8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 111afabb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111afabe mov eax, dword ptr [ecx*4 + 0x111d3040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111d3040)));
  /* 111afac5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 111afaca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 111afacd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111afacf jne 0x111afae4 */
  if (!C.zf) goto L_111afae4;
L_111afad1:;
  /* 111afad1 call 0x111ad280 */
  push32(0x111afad6u); f_111ad280();
  /* 111afad6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111afadc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111afadf jmp 0x111afb6e */
  goto L_111afb6e;
L_111afae4:;
  /* 111afae4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afae7 push edx */
  push32((uint32_t)(EDX));
  /* 111afae8 call 0x111aeaa0 */
  push32(0x111afaedu); f_111aeaa0();
  /* 111afaed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afaf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afaf3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111afaf6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afaf9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 111afafc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111afaff mov edx, dword ptr [eax*4 + 0x111d3040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111d3040)));
  /* 111afb06 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 111afb0b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 111afb0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111afb10 je 0x111afb4d */
  if (C.zf) goto L_111afb4d;
  /* 111afb12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afb15 push ecx */
  push32((uint32_t)(ECX));
  /* 111afb16 call 0x111ae920 */
  push32(0x111afb1bu); f_111ae920();
  /* 111afb1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afb1e push eax */
  push32((uint32_t)(EAX));
  /* 111afb1f call dword ptr [0x111d42f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42f8))), 0x111afb25u);
  /* 111afb25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111afb27 jne 0x111afb34 */
  if (!C.zf) goto L_111afb34;
  /* 111afb29 call dword ptr [0x111d43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43ac))), 0x111afb2fu);
  /* 111afb2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111afb32 jmp 0x111afb3b */
  goto L_111afb3b;
L_111afb34:;
  /* 111afb34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_111afb3b:;
  /* 111afb3b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111afb3f jne 0x111afb43 */
  if (!C.zf) goto L_111afb43;
  /* 111afb41 jmp 0x111afb5f */
  goto L_111afb5f;
L_111afb43:;
  /* 111afb43 call 0x111ad290 */
  push32(0x111afb48u); f_111ad290();
  /* 111afb48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afb4b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_111afb4d:;
  /* 111afb4d call 0x111ad280 */
  push32(0x111afb52u); f_111ad280();
  /* 111afb52 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111afb58 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_111afb5f:;
  /* 111afb5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afb62 push eax */
  push32((uint32_t)(EAX));
  /* 111afb63 call 0x111aeb30 */
  push32(0x111afb68u); f_111aeb30();
  /* 111afb68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afb6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_111afb6e:;
  /* 111afb6e mov esp, ebp */
  ESP = (EBP);
  /* 111afb70 pop ebp */
  EBP = (pop32());
  /* 111afb71 ret  */
  ESPCHK(0x111afaa0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x111afb80 (219 bytes, 64 insns) */
void f_111afb80(void) {
  FTRACE(0x111afb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111afb80 push ebp */
  push32((uint32_t)(EBP));
  /* 111afb81 mov ebp, esp */
  EBP = (ESP);
  /* 111afb83 push ecx */
  push32((uint32_t)(ECX));
  /* 111afb84 cmp dword ptr [0x111d186c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d186c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111afb8b je 0x111afc21 */
  if (C.zf) goto L_111afc21;
  /* 111afb91 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 111afb93 push 0x111cd308 */
  push32((uint32_t)(0x111cd308u));
  /* 111afb98 push 2 */
  push32((uint32_t)(0x2u));
  /* 111afb9a push 0xac */
  push32((uint32_t)(0xacu));
  /* 111afb9f push 1 */
  push32((uint32_t)(0x1u));
  /* 111afba1 call 0x111a57c0 */
  push32(0x111afba6u); f_111a57c0();
  /* 111afba6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afba9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111afbac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111afbb0 jne 0x111afbbc */
  if (!C.zf) goto L_111afbbc;
  /* 111afbb2 mov eax, 1 */
  EAX = (0x1u);
  /* 111afbb7 jmp 0x111afc57 */
  goto L_111afc57;
L_111afbbc:;
  /* 111afbbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afbbf push eax */
  push32((uint32_t)(EAX));
  /* 111afbc0 call 0x111afc60 */
  push32(0x111afbc5u); f_111afc60();
  /* 111afbc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afbc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111afbca je 0x111afbed */
  if (C.zf) goto L_111afbed;
  /* 111afbcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afbcf push ecx */
  push32((uint32_t)(ECX));
  /* 111afbd0 call 0x111b01f0 */
  push32(0x111afbd5u); f_111b01f0();
  /* 111afbd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afbd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 111afbda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afbdd push edx */
  push32((uint32_t)(EDX));
  /* 111afbde call 0x111a5e40 */
  push32(0x111afbe3u); f_111a5e40();
  /* 111afbe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afbe6 mov eax, 1 */
  EAX = (0x1u);
  /* 111afbeb jmp 0x111afc57 */
  goto L_111afc57;
L_111afbed:;
  /* 111afbed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afbf0 mov dword ptr [0x111d0c98], eax */
  w32((uint32_t)(0x111d0c98), (EAX));
  /* 111afbf5 mov ecx, dword ptr [0x111d188c] */
  ECX = (r32((uint32_t)(0x111d188c)));
  /* 111afbfb push ecx */
  push32((uint32_t)(ECX));
  /* 111afbfc call 0x111b01f0 */
  push32(0x111afc01u); f_111b01f0();
  /* 111afc01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afc04 push 2 */
  push32((uint32_t)(0x2u));
  /* 111afc06 mov edx, dword ptr [0x111d188c] */
  EDX = (r32((uint32_t)(0x111d188c)));
  /* 111afc0c push edx */
  push32((uint32_t)(EDX));
  /* 111afc0d call 0x111a5e40 */
  push32(0x111afc12u); f_111a5e40();
  /* 111afc12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afc15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afc18 mov dword ptr [0x111d188c], eax */
  w32((uint32_t)(0x111d188c), (EAX));
  /* 111afc1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111afc1f jmp 0x111afc57 */
  goto L_111afc57;
L_111afc21:;
  /* 111afc21 mov dword ptr [0x111d0c98], 0x111d0ca0 */
  w32((uint32_t)(0x111d0c98), (0x111d0ca0u));
  /* 111afc2b mov ecx, dword ptr [0x111d188c] */
  ECX = (r32((uint32_t)(0x111d188c)));
  /* 111afc31 push ecx */
  push32((uint32_t)(ECX));
  /* 111afc32 call 0x111b01f0 */
  push32(0x111afc37u); f_111b01f0();
  /* 111afc37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afc3a push 2 */
  push32((uint32_t)(0x2u));
  /* 111afc3c mov edx, dword ptr [0x111d188c] */
  EDX = (r32((uint32_t)(0x111d188c)));
  /* 111afc42 push edx */
  push32((uint32_t)(EDX));
  /* 111afc43 call 0x111a5e40 */
  push32(0x111afc48u); f_111a5e40();
  /* 111afc48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afc4b mov dword ptr [0x111d188c], 0 */
  w32((uint32_t)(0x111d188c), (0x0u));
  /* 111afc55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111afc57:;
  /* 111afc57 mov esp, ebp */
  ESP = (EBP);
  /* 111afc59 pop ebp */
  EBP = (pop32());
  /* 111afc5a ret  */
  ESPCHK(0x111afb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc60 @ 0x111afc60 (1423 bytes, 533 insns) */
void f_111afc60(void) {
  FTRACE(0x111afc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111afc60 push ebp */
  push32((uint32_t)(EBP));
  /* 111afc61 mov ebp, esp */
  EBP = (ESP);
  /* 111afc63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111afc66 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 111afc6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111afc6f mov ax, word ptr [0x111d18c6] */
  AX = (r16((uint32_t)(0x111d18c6)));
  /* 111afc75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111afc78 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111afc7a mov cx, word ptr [0x111d18c8] */
  CX = (r16((uint32_t)(0x111d18c8)));
  /* 111afc81 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111afc84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111afc88 jne 0x111afc92 */
  if (!C.zf) goto L_111afc92;
  /* 111afc8a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111afc8d jmp 0x111b01eb */
  goto L_111b01eb;
L_111afc92:;
  /* 111afc92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afc95 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afc98 push edx */
  push32((uint32_t)(EDX));
  /* 111afc99 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 111afc9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afc9e push eax */
  push32((uint32_t)(EAX));
  /* 111afc9f push 1 */
  push32((uint32_t)(0x1u));
  /* 111afca1 call 0x111b3570 */
  push32(0x111afca6u); f_111b3570();
  /* 111afca6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afca9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afcac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afcae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afcb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afcb4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afcb7 push edx */
  push32((uint32_t)(EDX));
  /* 111afcb8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 111afcba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afcbd push eax */
  push32((uint32_t)(EAX));
  /* 111afcbe push 1 */
  push32((uint32_t)(0x1u));
  /* 111afcc0 call 0x111b3570 */
  push32(0x111afcc5u); f_111b3570();
  /* 111afcc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afcc8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afccb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afccd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afcd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afcd3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afcd6 push edx */
  push32((uint32_t)(EDX));
  /* 111afcd7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 111afcd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afcdc push eax */
  push32((uint32_t)(EAX));
  /* 111afcdd push 1 */
  push32((uint32_t)(0x1u));
  /* 111afcdf call 0x111b3570 */
  push32(0x111afce4u); f_111b3570();
  /* 111afce4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afce7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afcea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afcec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afcef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afcf2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afcf5 push edx */
  push32((uint32_t)(EDX));
  /* 111afcf6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 111afcf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afcfb push eax */
  push32((uint32_t)(EAX));
  /* 111afcfc push 1 */
  push32((uint32_t)(0x1u));
  /* 111afcfe call 0x111b3570 */
  push32(0x111afd03u); f_111b3570();
  /* 111afd03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afd06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afd09 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afd0b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afd0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afd11 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afd14 push edx */
  push32((uint32_t)(EDX));
  /* 111afd15 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 111afd17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afd1a push eax */
  push32((uint32_t)(EAX));
  /* 111afd1b push 1 */
  push32((uint32_t)(0x1u));
  /* 111afd1d call 0x111b3570 */
  push32(0x111afd22u); f_111b3570();
  /* 111afd22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afd25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afd28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afd2a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afd2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afd30 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afd33 push edx */
  push32((uint32_t)(EDX));
  /* 111afd34 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 111afd36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afd39 push eax */
  push32((uint32_t)(EAX));
  /* 111afd3a push 1 */
  push32((uint32_t)(0x1u));
  /* 111afd3c call 0x111b3570 */
  push32(0x111afd41u); f_111b3570();
  /* 111afd41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afd44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afd47 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afd49 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afd4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afd4f push edx */
  push32((uint32_t)(EDX));
  /* 111afd50 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 111afd52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afd55 push eax */
  push32((uint32_t)(EAX));
  /* 111afd56 push 1 */
  push32((uint32_t)(0x1u));
  /* 111afd58 call 0x111b3570 */
  push32(0x111afd5du); f_111b3570();
  /* 111afd5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afd60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afd63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afd65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afd68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afd6b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afd6e push edx */
  push32((uint32_t)(EDX));
  /* 111afd6f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 111afd71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afd74 push eax */
  push32((uint32_t)(EAX));
  /* 111afd75 push 1 */
  push32((uint32_t)(0x1u));
  /* 111afd77 call 0x111b3570 */
  push32(0x111afd7cu); f_111b3570();
  /* 111afd7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afd7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afd82 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afd84 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afd87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afd8a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afd8d push edx */
  push32((uint32_t)(EDX));
  /* 111afd8e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 111afd90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afd93 push eax */
  push32((uint32_t)(EAX));
  /* 111afd94 push 1 */
  push32((uint32_t)(0x1u));
  /* 111afd96 call 0x111b3570 */
  push32(0x111afd9bu); f_111b3570();
  /* 111afd9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afd9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afda1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afda3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afda6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afda9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afdac push edx */
  push32((uint32_t)(EDX));
  /* 111afdad push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 111afdaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afdb2 push eax */
  push32((uint32_t)(EAX));
  /* 111afdb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111afdb5 call 0x111b3570 */
  push32(0x111afdbau); f_111b3570();
  /* 111afdba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afdbd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afdc0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afdc2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afdc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afdc8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afdcb push edx */
  push32((uint32_t)(EDX));
  /* 111afdcc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 111afdce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afdd1 push eax */
  push32((uint32_t)(EAX));
  /* 111afdd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 111afdd4 call 0x111b3570 */
  push32(0x111afdd9u); f_111b3570();
  /* 111afdd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afddc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afddf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afde1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afde4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afde7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afdea push edx */
  push32((uint32_t)(EDX));
  /* 111afdeb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 111afded mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afdf0 push eax */
  push32((uint32_t)(EAX));
  /* 111afdf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 111afdf3 call 0x111b3570 */
  push32(0x111afdf8u); f_111b3570();
  /* 111afdf8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afdfb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afdfe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afe00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afe03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afe06 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afe09 push edx */
  push32((uint32_t)(EDX));
  /* 111afe0a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 111afe0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afe0f push eax */
  push32((uint32_t)(EAX));
  /* 111afe10 push 1 */
  push32((uint32_t)(0x1u));
  /* 111afe12 call 0x111b3570 */
  push32(0x111afe17u); f_111b3570();
  /* 111afe17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afe1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afe1d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afe1f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afe22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afe25 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afe28 push edx */
  push32((uint32_t)(EDX));
  /* 111afe29 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 111afe2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afe2e push eax */
  push32((uint32_t)(EAX));
  /* 111afe2f push 1 */
  push32((uint32_t)(0x1u));
  /* 111afe31 call 0x111b3570 */
  push32(0x111afe36u); f_111b3570();
  /* 111afe36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afe39 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afe3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afe3e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afe41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afe44 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afe47 push edx */
  push32((uint32_t)(EDX));
  /* 111afe48 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 111afe4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afe4d push eax */
  push32((uint32_t)(EAX));
  /* 111afe4e push 1 */
  push32((uint32_t)(0x1u));
  /* 111afe50 call 0x111b3570 */
  push32(0x111afe55u); f_111b3570();
  /* 111afe55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afe58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afe5b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afe5d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afe60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afe63 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afe66 push edx */
  push32((uint32_t)(EDX));
  /* 111afe67 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 111afe69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afe6c push eax */
  push32((uint32_t)(EAX));
  /* 111afe6d push 1 */
  push32((uint32_t)(0x1u));
  /* 111afe6f call 0x111b3570 */
  push32(0x111afe74u); f_111b3570();
  /* 111afe74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afe77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afe7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afe7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afe7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afe82 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afe85 push edx */
  push32((uint32_t)(EDX));
  /* 111afe86 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 111afe88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afe8b push eax */
  push32((uint32_t)(EAX));
  /* 111afe8c push 1 */
  push32((uint32_t)(0x1u));
  /* 111afe8e call 0x111b3570 */
  push32(0x111afe93u); f_111b3570();
  /* 111afe93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afe96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afe99 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afe9b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afe9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afea1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afea4 push edx */
  push32((uint32_t)(EDX));
  /* 111afea5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 111afea7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afeaa push eax */
  push32((uint32_t)(EAX));
  /* 111afeab push 1 */
  push32((uint32_t)(0x1u));
  /* 111afead call 0x111b3570 */
  push32(0x111afeb2u); f_111b3570();
  /* 111afeb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afeb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afeb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afeba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afebd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afec0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afec3 push edx */
  push32((uint32_t)(EDX));
  /* 111afec4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 111afec6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afec9 push eax */
  push32((uint32_t)(EAX));
  /* 111afeca push 1 */
  push32((uint32_t)(0x1u));
  /* 111afecc call 0x111b3570 */
  push32(0x111afed1u); f_111b3570();
  /* 111afed1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afed4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afed7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afed9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afedc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afedf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afee2 push edx */
  push32((uint32_t)(EDX));
  /* 111afee3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 111afee5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111afee8 push eax */
  push32((uint32_t)(EAX));
  /* 111afee9 push 1 */
  push32((uint32_t)(0x1u));
  /* 111afeeb call 0x111b3570 */
  push32(0x111afef0u); f_111b3570();
  /* 111afef0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111afef3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111afef6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afef8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afefb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afefe add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aff01 push edx */
  push32((uint32_t)(EDX));
  /* 111aff02 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 111aff04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aff07 push eax */
  push32((uint32_t)(EAX));
  /* 111aff08 push 1 */
  push32((uint32_t)(0x1u));
  /* 111aff0a call 0x111b3570 */
  push32(0x111aff0fu); f_111b3570();
  /* 111aff0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aff12 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aff15 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111aff17 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111aff1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aff1d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aff20 push edx */
  push32((uint32_t)(EDX));
  /* 111aff21 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 111aff23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aff26 push eax */
  push32((uint32_t)(EAX));
  /* 111aff27 push 1 */
  push32((uint32_t)(0x1u));
  /* 111aff29 call 0x111b3570 */
  push32(0x111aff2eu); f_111b3570();
  /* 111aff2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aff31 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aff34 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111aff36 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111aff39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aff3c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aff3f push edx */
  push32((uint32_t)(EDX));
  /* 111aff40 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 111aff42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aff45 push eax */
  push32((uint32_t)(EAX));
  /* 111aff46 push 1 */
  push32((uint32_t)(0x1u));
  /* 111aff48 call 0x111b3570 */
  push32(0x111aff4du); f_111b3570();
  /* 111aff4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aff50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aff53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111aff55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111aff58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aff5b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aff5e push edx */
  push32((uint32_t)(EDX));
  /* 111aff5f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 111aff61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aff64 push eax */
  push32((uint32_t)(EAX));
  /* 111aff65 push 1 */
  push32((uint32_t)(0x1u));
  /* 111aff67 call 0x111b3570 */
  push32(0x111aff6cu); f_111b3570();
  /* 111aff6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aff6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aff72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111aff74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111aff77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aff7a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aff7d push edx */
  push32((uint32_t)(EDX));
  /* 111aff7e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 111aff80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111aff83 push eax */
  push32((uint32_t)(EAX));
  /* 111aff84 push 1 */
  push32((uint32_t)(0x1u));
  /* 111aff86 call 0x111b3570 */
  push32(0x111aff8bu); f_111b3570();
  /* 111aff8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111aff8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111aff91 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111aff93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111aff96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111aff99 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111aff9c push edx */
  push32((uint32_t)(EDX));
  /* 111aff9d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 111aff9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111affa2 push eax */
  push32((uint32_t)(EAX));
  /* 111affa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111affa5 call 0x111b3570 */
  push32(0x111affaau); f_111b3570();
  /* 111affaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111affad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111affb0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111affb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111affb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111affb8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111affbb push edx */
  push32((uint32_t)(EDX));
  /* 111affbc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 111affbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111affc1 push eax */
  push32((uint32_t)(EAX));
  /* 111affc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 111affc4 call 0x111b3570 */
  push32(0x111affc9u); f_111b3570();
  /* 111affc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111affcc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111affcf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111affd1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111affd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111affd7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111affda push edx */
  push32((uint32_t)(EDX));
  /* 111affdb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 111affdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111affe0 push eax */
  push32((uint32_t)(EAX));
  /* 111affe1 push 1 */
  push32((uint32_t)(0x1u));
  /* 111affe3 call 0x111b3570 */
  push32(0x111affe8u); f_111b3570();
  /* 111affe8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111affeb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111affee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111afff0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111afff3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111afff6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111afff9 push edx */
  push32((uint32_t)(EDX));
  /* 111afffa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 111afffc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111affff push eax */
  push32((uint32_t)(EAX));
  /* 111b0000 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b0002 call 0x111b3570 */
  push32(0x111b0007u); f_111b3570();
  /* 111b0007 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b000a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b000d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b000f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b0012 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0015 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0018 push edx */
  push32((uint32_t)(EDX));
  /* 111b0019 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 111b001b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b001e push eax */
  push32((uint32_t)(EAX));
  /* 111b001f push 1 */
  push32((uint32_t)(0x1u));
  /* 111b0021 call 0x111b3570 */
  push32(0x111b0026u); f_111b3570();
  /* 111b0026 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0029 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b002c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b002e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b0031 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0034 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0037 push edx */
  push32((uint32_t)(EDX));
  /* 111b0038 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 111b003a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b003d push eax */
  push32((uint32_t)(EAX));
  /* 111b003e push 1 */
  push32((uint32_t)(0x1u));
  /* 111b0040 call 0x111b3570 */
  push32(0x111b0045u); f_111b3570();
  /* 111b0045 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0048 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b004b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b004d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b0050 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0053 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0056 push edx */
  push32((uint32_t)(EDX));
  /* 111b0057 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 111b0059 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b005c push eax */
  push32((uint32_t)(EAX));
  /* 111b005d push 1 */
  push32((uint32_t)(0x1u));
  /* 111b005f call 0x111b3570 */
  push32(0x111b0064u); f_111b3570();
  /* 111b0064 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0067 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b006a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b006c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b006f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0072 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0078 push edx */
  push32((uint32_t)(EDX));
  /* 111b0079 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 111b007b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b007e push eax */
  push32((uint32_t)(EAX));
  /* 111b007f push 1 */
  push32((uint32_t)(0x1u));
  /* 111b0081 call 0x111b3570 */
  push32(0x111b0086u); f_111b3570();
  /* 111b0086 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0089 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b008c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b008e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b0091 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0094 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b009a push edx */
  push32((uint32_t)(EDX));
  /* 111b009b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 111b009d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b00a0 push eax */
  push32((uint32_t)(EAX));
  /* 111b00a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b00a3 call 0x111b3570 */
  push32(0x111b00a8u); f_111b3570();
  /* 111b00a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b00ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b00ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b00b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b00b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b00b6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b00bc push edx */
  push32((uint32_t)(EDX));
  /* 111b00bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 111b00bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b00c2 push eax */
  push32((uint32_t)(EAX));
  /* 111b00c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b00c5 call 0x111b3570 */
  push32(0x111b00cau); f_111b3570();
  /* 111b00ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b00cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b00d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b00d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b00d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b00d8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b00de push edx */
  push32((uint32_t)(EDX));
  /* 111b00df push 0x41 */
  push32((uint32_t)(0x41u));
  /* 111b00e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b00e4 push eax */
  push32((uint32_t)(EAX));
  /* 111b00e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b00e7 call 0x111b3570 */
  push32(0x111b00ecu); f_111b3570();
  /* 111b00ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b00ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b00f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b00f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b00f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b00fa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0100 push edx */
  push32((uint32_t)(EDX));
  /* 111b0101 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 111b0103 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0106 push eax */
  push32((uint32_t)(EAX));
  /* 111b0107 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b0109 call 0x111b3570 */
  push32(0x111b010eu); f_111b3570();
  /* 111b010e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0111 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b0114 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b0116 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b0119 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b011c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0122 push edx */
  push32((uint32_t)(EDX));
  /* 111b0123 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 111b0125 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0128 push eax */
  push32((uint32_t)(EAX));
  /* 111b0129 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b012b call 0x111b3570 */
  push32(0x111b0130u); f_111b3570();
  /* 111b0130 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0133 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b0136 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b0138 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b013b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b013e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0144 push edx */
  push32((uint32_t)(EDX));
  /* 111b0145 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 111b0147 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b014a push eax */
  push32((uint32_t)(EAX));
  /* 111b014b push 1 */
  push32((uint32_t)(0x1u));
  /* 111b014d call 0x111b3570 */
  push32(0x111b0152u); f_111b3570();
  /* 111b0152 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0155 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b0158 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b015a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b015d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0160 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0166 push edx */
  push32((uint32_t)(EDX));
  /* 111b0167 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 111b0169 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b016c push eax */
  push32((uint32_t)(EAX));
  /* 111b016d push 1 */
  push32((uint32_t)(0x1u));
  /* 111b016f call 0x111b3570 */
  push32(0x111b0174u); f_111b3570();
  /* 111b0174 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0177 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b017a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b017c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b017f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0182 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0188 push edx */
  push32((uint32_t)(EDX));
  /* 111b0189 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 111b018b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b018e push eax */
  push32((uint32_t)(EAX));
  /* 111b018f push 1 */
  push32((uint32_t)(0x1u));
  /* 111b0191 call 0x111b3570 */
  push32(0x111b0196u); f_111b3570();
  /* 111b0196 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0199 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b019c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b019e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b01a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b01a4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b01aa push edx */
  push32((uint32_t)(EDX));
  /* 111b01ab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 111b01ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b01b0 push eax */
  push32((uint32_t)(EAX));
  /* 111b01b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b01b3 call 0x111b3570 */
  push32(0x111b01b8u); f_111b3570();
  /* 111b01b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b01bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b01be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b01c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b01c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b01c6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b01cc push edx */
  push32((uint32_t)(EDX));
  /* 111b01cd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 111b01d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b01d5 push eax */
  push32((uint32_t)(EAX));
  /* 111b01d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b01d8 call 0x111b3570 */
  push32(0x111b01ddu); f_111b3570();
  /* 111b01dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b01e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b01e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b01e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b01e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_111b01eb:;
  /* 111b01eb mov esp, ebp */
  ESP = (EBP);
  /* 111b01ed pop ebp */
  EBP = (pop32());
  /* 111b01ee ret  */
  ESPCHK(0x111afc60u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x111b01f0 (779 bytes, 265 insns) */
void f_111b01f0(void) {
  FTRACE(0x111b01f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b01f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b01f1 mov ebp, esp */
  EBP = (ESP);
  /* 111b01f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b01f7 jne 0x111b01fe */
  if (!C.zf) goto L_111b01fe;
  /* 111b01f9 jmp 0x111b04f9 */
  goto L_111b04f9;
L_111b01fe:;
  /* 111b01fe push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0200 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0203 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111b0206 push ecx */
  push32((uint32_t)(ECX));
  /* 111b0207 call 0x111a5e40 */
  push32(0x111b020cu); f_111a5e40();
  /* 111b020c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b020f push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0211 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0214 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 111b0217 push eax */
  push32((uint32_t)(EAX));
  /* 111b0218 call 0x111a5e40 */
  push32(0x111b021du); f_111a5e40();
  /* 111b021d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0220 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0222 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0225 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111b0228 push edx */
  push32((uint32_t)(EDX));
  /* 111b0229 call 0x111a5e40 */
  push32(0x111b022eu); f_111a5e40();
  /* 111b022e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0231 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0233 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0236 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111b0239 push ecx */
  push32((uint32_t)(ECX));
  /* 111b023a call 0x111a5e40 */
  push32(0x111b023fu); f_111a5e40();
  /* 111b023f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0242 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0244 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0247 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111b024a push eax */
  push32((uint32_t)(EAX));
  /* 111b024b call 0x111a5e40 */
  push32(0x111b0250u); f_111a5e40();
  /* 111b0250 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0253 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0255 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0258 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 111b025b push edx */
  push32((uint32_t)(EDX));
  /* 111b025c call 0x111a5e40 */
  push32(0x111b0261u); f_111a5e40();
  /* 111b0261 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0264 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0269 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b026b push ecx */
  push32((uint32_t)(ECX));
  /* 111b026c call 0x111a5e40 */
  push32(0x111b0271u); f_111a5e40();
  /* 111b0271 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0274 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0276 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0279 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 111b027c push eax */
  push32((uint32_t)(EAX));
  /* 111b027d call 0x111a5e40 */
  push32(0x111b0282u); f_111a5e40();
  /* 111b0282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0285 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0287 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b028a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 111b028d push edx */
  push32((uint32_t)(EDX));
  /* 111b028e call 0x111a5e40 */
  push32(0x111b0293u); f_111a5e40();
  /* 111b0293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0296 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0298 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b029b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 111b029e push ecx */
  push32((uint32_t)(ECX));
  /* 111b029f call 0x111a5e40 */
  push32(0x111b02a4u); f_111a5e40();
  /* 111b02a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b02a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b02a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b02ac mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 111b02af push eax */
  push32((uint32_t)(EAX));
  /* 111b02b0 call 0x111a5e40 */
  push32(0x111b02b5u); f_111a5e40();
  /* 111b02b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b02b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b02ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b02bd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 111b02c0 push edx */
  push32((uint32_t)(EDX));
  /* 111b02c1 call 0x111a5e40 */
  push32(0x111b02c6u); f_111a5e40();
  /* 111b02c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b02c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b02cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b02ce mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 111b02d1 push ecx */
  push32((uint32_t)(ECX));
  /* 111b02d2 call 0x111a5e40 */
  push32(0x111b02d7u); f_111a5e40();
  /* 111b02d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b02da push 2 */
  push32((uint32_t)(0x2u));
  /* 111b02dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b02df mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 111b02e2 push eax */
  push32((uint32_t)(EAX));
  /* 111b02e3 call 0x111a5e40 */
  push32(0x111b02e8u); f_111a5e40();
  /* 111b02e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b02eb push 2 */
  push32((uint32_t)(0x2u));
  /* 111b02ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b02f0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 111b02f3 push edx */
  push32((uint32_t)(EDX));
  /* 111b02f4 call 0x111a5e40 */
  push32(0x111b02f9u); f_111a5e40();
  /* 111b02f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b02fc push 2 */
  push32((uint32_t)(0x2u));
  /* 111b02fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0301 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 111b0304 push ecx */
  push32((uint32_t)(ECX));
  /* 111b0305 call 0x111a5e40 */
  push32(0x111b030au); f_111a5e40();
  /* 111b030a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b030d push 2 */
  push32((uint32_t)(0x2u));
  /* 111b030f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0312 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 111b0315 push eax */
  push32((uint32_t)(EAX));
  /* 111b0316 call 0x111a5e40 */
  push32(0x111b031bu); f_111a5e40();
  /* 111b031b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b031e push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0320 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0323 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 111b0326 push edx */
  push32((uint32_t)(EDX));
  /* 111b0327 call 0x111a5e40 */
  push32(0x111b032cu); f_111a5e40();
  /* 111b032c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b032f push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0331 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0334 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 111b0337 push ecx */
  push32((uint32_t)(ECX));
  /* 111b0338 call 0x111a5e40 */
  push32(0x111b033du); f_111a5e40();
  /* 111b033d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0340 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0342 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0345 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 111b0348 push eax */
  push32((uint32_t)(EAX));
  /* 111b0349 call 0x111a5e40 */
  push32(0x111b034eu); f_111a5e40();
  /* 111b034e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0351 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0353 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0356 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 111b0359 push edx */
  push32((uint32_t)(EDX));
  /* 111b035a call 0x111a5e40 */
  push32(0x111b035fu); f_111a5e40();
  /* 111b035f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0362 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0367 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 111b036a push ecx */
  push32((uint32_t)(ECX));
  /* 111b036b call 0x111a5e40 */
  push32(0x111b0370u); f_111a5e40();
  /* 111b0370 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0373 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0375 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0378 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 111b037b push eax */
  push32((uint32_t)(EAX));
  /* 111b037c call 0x111a5e40 */
  push32(0x111b0381u); f_111a5e40();
  /* 111b0381 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0384 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0386 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0389 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 111b038c push edx */
  push32((uint32_t)(EDX));
  /* 111b038d call 0x111a5e40 */
  push32(0x111b0392u); f_111a5e40();
  /* 111b0392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0395 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0397 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b039a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 111b039d push ecx */
  push32((uint32_t)(ECX));
  /* 111b039e call 0x111a5e40 */
  push32(0x111b03a3u); f_111a5e40();
  /* 111b03a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b03a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b03a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b03ab mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 111b03ae push eax */
  push32((uint32_t)(EAX));
  /* 111b03af call 0x111a5e40 */
  push32(0x111b03b4u); f_111a5e40();
  /* 111b03b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b03b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b03b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b03bc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 111b03bf push edx */
  push32((uint32_t)(EDX));
  /* 111b03c0 call 0x111a5e40 */
  push32(0x111b03c5u); f_111a5e40();
  /* 111b03c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b03c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b03ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b03cd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 111b03d0 push ecx */
  push32((uint32_t)(ECX));
  /* 111b03d1 call 0x111a5e40 */
  push32(0x111b03d6u); f_111a5e40();
  /* 111b03d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b03d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b03db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b03de mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 111b03e1 push eax */
  push32((uint32_t)(EAX));
  /* 111b03e2 call 0x111a5e40 */
  push32(0x111b03e7u); f_111a5e40();
  /* 111b03e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b03ea push 2 */
  push32((uint32_t)(0x2u));
  /* 111b03ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b03ef mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 111b03f2 push edx */
  push32((uint32_t)(EDX));
  /* 111b03f3 call 0x111a5e40 */
  push32(0x111b03f8u); f_111a5e40();
  /* 111b03f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b03fb push 2 */
  push32((uint32_t)(0x2u));
  /* 111b03fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0400 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 111b0403 push ecx */
  push32((uint32_t)(ECX));
  /* 111b0404 call 0x111a5e40 */
  push32(0x111b0409u); f_111a5e40();
  /* 111b0409 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b040c push 2 */
  push32((uint32_t)(0x2u));
  /* 111b040e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0411 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 111b0414 push eax */
  push32((uint32_t)(EAX));
  /* 111b0415 call 0x111a5e40 */
  push32(0x111b041au); f_111a5e40();
  /* 111b041a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b041d push 2 */
  push32((uint32_t)(0x2u));
  /* 111b041f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0422 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 111b0428 push edx */
  push32((uint32_t)(EDX));
  /* 111b0429 call 0x111a5e40 */
  push32(0x111b042eu); f_111a5e40();
  /* 111b042e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0431 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0433 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0436 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 111b043c push ecx */
  push32((uint32_t)(ECX));
  /* 111b043d call 0x111a5e40 */
  push32(0x111b0442u); f_111a5e40();
  /* 111b0442 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0445 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0447 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b044a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 111b0450 push eax */
  push32((uint32_t)(EAX));
  /* 111b0451 call 0x111a5e40 */
  push32(0x111b0456u); f_111a5e40();
  /* 111b0456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0459 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b045b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b045e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 111b0464 push edx */
  push32((uint32_t)(EDX));
  /* 111b0465 call 0x111a5e40 */
  push32(0x111b046au); f_111a5e40();
  /* 111b046a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b046d push 2 */
  push32((uint32_t)(0x2u));
  /* 111b046f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0472 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 111b0478 push ecx */
  push32((uint32_t)(ECX));
  /* 111b0479 call 0x111a5e40 */
  push32(0x111b047eu); f_111a5e40();
  /* 111b047e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0481 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0483 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0486 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 111b048c push eax */
  push32((uint32_t)(EAX));
  /* 111b048d call 0x111a5e40 */
  push32(0x111b0492u); f_111a5e40();
  /* 111b0492 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0495 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0497 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b049a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 111b04a0 push edx */
  push32((uint32_t)(EDX));
  /* 111b04a1 call 0x111a5e40 */
  push32(0x111b04a6u); f_111a5e40();
  /* 111b04a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b04a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b04ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b04ae mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 111b04b4 push ecx */
  push32((uint32_t)(ECX));
  /* 111b04b5 call 0x111a5e40 */
  push32(0x111b04bau); f_111a5e40();
  /* 111b04ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b04bd push 2 */
  push32((uint32_t)(0x2u));
  /* 111b04bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b04c2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 111b04c8 push eax */
  push32((uint32_t)(EAX));
  /* 111b04c9 call 0x111a5e40 */
  push32(0x111b04ceu); f_111a5e40();
  /* 111b04ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b04d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b04d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b04d6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 111b04dc push edx */
  push32((uint32_t)(EDX));
  /* 111b04dd call 0x111a5e40 */
  push32(0x111b04e2u); f_111a5e40();
  /* 111b04e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b04e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b04e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b04ea mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 111b04f0 push ecx */
  push32((uint32_t)(ECX));
  /* 111b04f1 call 0x111a5e40 */
  push32(0x111b04f6u); f_111a5e40();
  /* 111b04f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b04f9:;
  /* 111b04f9 pop ebp */
  EBP = (pop32());
  /* 111b04fa ret  */
  ESPCHK(0x111b01f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010500 @ 0x111b0500 (678 bytes, 180 insns) */
void f_111b0500(void) {
  FTRACE(0x111b0500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b0500 push ebp */
  push32((uint32_t)(EBP));
  /* 111b0501 mov ebp, esp */
  EBP = (ESP);
  /* 111b0503 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b0506 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111b050d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b050f mov ax, word ptr [0x111d18c2] */
  AX = (r16((uint32_t)(0x111d18c2)));
  /* 111b0515 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b0518 cmp dword ptr [0x111d1868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b051f je 0x111b067a */
  if (C.zf) goto L_111b067a;
  /* 111b0525 push 0x111d1890 */
  push32((uint32_t)(0x111d1890u));
  /* 111b052a push 0xe */
  push32((uint32_t)(0xeu));
  /* 111b052c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b052f push ecx */
  push32((uint32_t)(ECX));
  /* 111b0530 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b0532 call 0x111b3570 */
  push32(0x111b0537u); f_111b3570();
  /* 111b0537 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b053a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b053d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 111b053f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111b0542 push 0x111d1894 */
  push32((uint32_t)(0x111d1894u));
  /* 111b0547 push 0xf */
  push32((uint32_t)(0xfu));
  /* 111b0549 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b054c push eax */
  push32((uint32_t)(EAX));
  /* 111b054d push 1 */
  push32((uint32_t)(0x1u));
  /* 111b054f call 0x111b3570 */
  push32(0x111b0554u); f_111b3570();
  /* 111b0554 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0557 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b055a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b055c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b055f push 0x111d1898 */
  push32((uint32_t)(0x111d1898u));
  /* 111b0564 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 111b0566 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0569 push edx */
  push32((uint32_t)(EDX));
  /* 111b056a push 1 */
  push32((uint32_t)(0x1u));
  /* 111b056c call 0x111b3570 */
  push32(0x111b0571u); f_111b3570();
  /* 111b0571 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0574 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b0577 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b0579 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b057c mov edx, dword ptr [0x111d1898] */
  EDX = (r32((uint32_t)(0x111d1898)));
  /* 111b0582 push edx */
  push32((uint32_t)(EDX));
  /* 111b0583 call 0x111b07b0 */
  push32(0x111b0588u); f_111b07b0();
  /* 111b0588 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b058b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b058f je 0x111b05e9 */
  if (C.zf) goto L_111b05e9;
  /* 111b0591 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0593 mov eax, dword ptr [0x111d1890] */
  EAX = (r32((uint32_t)(0x111d1890)));
  /* 111b0598 push eax */
  push32((uint32_t)(EAX));
  /* 111b0599 call 0x111a5e40 */
  push32(0x111b059eu); f_111a5e40();
  /* 111b059e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b05a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b05a3 mov ecx, dword ptr [0x111d1894] */
  ECX = (r32((uint32_t)(0x111d1894)));
  /* 111b05a9 push ecx */
  push32((uint32_t)(ECX));
  /* 111b05aa call 0x111a5e40 */
  push32(0x111b05afu); f_111a5e40();
  /* 111b05af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b05b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b05b4 mov edx, dword ptr [0x111d1898] */
  EDX = (r32((uint32_t)(0x111d1898)));
  /* 111b05ba push edx */
  push32((uint32_t)(EDX));
  /* 111b05bb call 0x111a5e40 */
  push32(0x111b05c0u); f_111a5e40();
  /* 111b05c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b05c3 mov dword ptr [0x111d1890], 0 */
  w32((uint32_t)(0x111d1890), (0x0u));
  /* 111b05cd mov dword ptr [0x111d1894], 0 */
  w32((uint32_t)(0x111d1894), (0x0u));
  /* 111b05d7 mov dword ptr [0x111d1898], 0 */
  w32((uint32_t)(0x111d1898), (0x0u));
  /* 111b05e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b05e4 jmp 0x111b07a2 */
  goto L_111b07a2;
L_111b05e9:;
  /* 111b05e9 mov eax, dword ptr [0x111d0d88] */
  EAX = (r32((uint32_t)(0x111d0d88)));
  /* 111b05ee cmp dword ptr [eax], 0x111d0d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x111d0d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b05f4 je 0x111b0630 */
  if (C.zf) goto L_111b0630;
  /* 111b05f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b05f8 mov ecx, dword ptr [0x111d0d88] */
  ECX = (r32((uint32_t)(0x111d0d88)));
  /* 111b05fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b0600 push edx */
  push32((uint32_t)(EDX));
  /* 111b0601 call 0x111a5e40 */
  push32(0x111b0606u); f_111a5e40();
  /* 111b0606 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0609 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b060b mov eax, dword ptr [0x111d0d88] */
  EAX = (r32((uint32_t)(0x111d0d88)));
  /* 111b0610 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111b0613 push ecx */
  push32((uint32_t)(ECX));
  /* 111b0614 call 0x111a5e40 */
  push32(0x111b0619u); f_111a5e40();
  /* 111b0619 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b061c push 2 */
  push32((uint32_t)(0x2u));
  /* 111b061e mov edx, dword ptr [0x111d0d88] */
  EDX = (r32((uint32_t)(0x111d0d88)));
  /* 111b0624 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 111b0627 push eax */
  push32((uint32_t)(EAX));
  /* 111b0628 call 0x111a5e40 */
  push32(0x111b062du); f_111a5e40();
  /* 111b062d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b0630:;
  /* 111b0630 mov ecx, dword ptr [0x111d0d88] */
  ECX = (r32((uint32_t)(0x111d0d88)));
  /* 111b0636 mov edx, dword ptr [0x111d1890] */
  EDX = (r32((uint32_t)(0x111d1890)));
  /* 111b063c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 111b063e mov eax, dword ptr [0x111d0d88] */
  EAX = (r32((uint32_t)(0x111d0d88)));
  /* 111b0643 mov ecx, dword ptr [0x111d1894] */
  ECX = (r32((uint32_t)(0x111d1894)));
  /* 111b0649 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 111b064c mov edx, dword ptr [0x111d0d88] */
  EDX = (r32((uint32_t)(0x111d0d88)));
  /* 111b0652 mov eax, dword ptr [0x111d1898] */
  EAX = (r32((uint32_t)(0x111d1898)));
  /* 111b0657 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 111b065a mov ecx, dword ptr [0x111d0d88] */
  ECX = (r32((uint32_t)(0x111d0d88)));
  /* 111b0660 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b0662 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b0664 mov byte ptr [0x111cfea8], al */
  w8((uint32_t)(0x111cfea8), (AL));
  /* 111b0669 mov dword ptr [0x111cfeac], 1 */
  w32((uint32_t)(0x111cfeac), (0x1u));
  /* 111b0673 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b0675 jmp 0x111b07a2 */
  goto L_111b07a2;
L_111b067a:;
  /* 111b067a push 2 */
  push32((uint32_t)(0x2u));
  /* 111b067c mov ecx, dword ptr [0x111d1890] */
  ECX = (r32((uint32_t)(0x111d1890)));
  /* 111b0682 push ecx */
  push32((uint32_t)(ECX));
  /* 111b0683 call 0x111a5e40 */
  push32(0x111b0688u); f_111a5e40();
  /* 111b0688 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b068b push 2 */
  push32((uint32_t)(0x2u));
  /* 111b068d mov edx, dword ptr [0x111d1894] */
  EDX = (r32((uint32_t)(0x111d1894)));
  /* 111b0693 push edx */
  push32((uint32_t)(EDX));
  /* 111b0694 call 0x111a5e40 */
  push32(0x111b0699u); f_111a5e40();
  /* 111b0699 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b069c push 2 */
  push32((uint32_t)(0x2u));
  /* 111b069e mov eax, dword ptr [0x111d1898] */
  EAX = (r32((uint32_t)(0x111d1898)));
  /* 111b06a3 push eax */
  push32((uint32_t)(EAX));
  /* 111b06a4 call 0x111a5e40 */
  push32(0x111b06a9u); f_111a5e40();
  /* 111b06a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b06ac mov dword ptr [0x111d1890], 0 */
  w32((uint32_t)(0x111d1890), (0x0u));
  /* 111b06b6 mov dword ptr [0x111d1894], 0 */
  w32((uint32_t)(0x111d1894), (0x0u));
  /* 111b06c0 mov dword ptr [0x111d1898], 0 */
  w32((uint32_t)(0x111d1898), (0x0u));
  /* 111b06ca push 0x88 */
  push32((uint32_t)(0x88u));
  /* 111b06cf push 0x111cd314 */
  push32((uint32_t)(0x111cd314u));
  /* 111b06d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b06d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b06d8 call 0x111a53b0 */
  push32(0x111b06ddu); f_111a53b0();
  /* 111b06dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b06e0 mov ecx, dword ptr [0x111d0d88] */
  ECX = (r32((uint32_t)(0x111d0d88)));
  /* 111b06e6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111b06e8 mov edx, dword ptr [0x111d0d88] */
  EDX = (r32((uint32_t)(0x111d0d88)));
  /* 111b06ee cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b06f1 jne 0x111b06fb */
  if (!C.zf) goto L_111b06fb;
  /* 111b06f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b06f6 jmp 0x111b07a2 */
  goto L_111b07a2;
L_111b06fb:;
  /* 111b06fb push 0x111cd2e4 */
  push32((uint32_t)(0x111cd2e4u));
  /* 111b0700 mov eax, dword ptr [0x111d0d88] */
  EAX = (r32((uint32_t)(0x111d0d88)));
  /* 111b0705 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b0707 push ecx */
  push32((uint32_t)(ECX));
  /* 111b0708 call 0x111a8360 */
  push32(0x111b070du); f_111a8360();
  /* 111b070d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0710 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 111b0715 push 0x111cd314 */
  push32((uint32_t)(0x111cd314u));
  /* 111b071a push 2 */
  push32((uint32_t)(0x2u));
  /* 111b071c push 2 */
  push32((uint32_t)(0x2u));
  /* 111b071e call 0x111a53b0 */
  push32(0x111b0723u); f_111a53b0();
  /* 111b0723 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0726 mov edx, dword ptr [0x111d0d88] */
  EDX = (r32((uint32_t)(0x111d0d88)));
  /* 111b072c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 111b072f mov eax, dword ptr [0x111d0d88] */
  EAX = (r32((uint32_t)(0x111d0d88)));
  /* 111b0734 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0738 jne 0x111b073f */
  if (!C.zf) goto L_111b073f;
  /* 111b073a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b073d jmp 0x111b07a2 */
  goto L_111b07a2;
L_111b073f:;
  /* 111b073f mov ecx, dword ptr [0x111d0d88] */
  ECX = (r32((uint32_t)(0x111d0d88)));
  /* 111b0745 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111b0748 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 111b074b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 111b0750 push 0x111cd314 */
  push32((uint32_t)(0x111cd314u));
  /* 111b0755 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0757 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0759 call 0x111a53b0 */
  push32(0x111b075eu); f_111a53b0();
  /* 111b075e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0761 mov ecx, dword ptr [0x111d0d88] */
  ECX = (r32((uint32_t)(0x111d0d88)));
  /* 111b0767 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 111b076a mov edx, dword ptr [0x111d0d88] */
  EDX = (r32((uint32_t)(0x111d0d88)));
  /* 111b0770 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0774 jne 0x111b077b */
  if (!C.zf) goto L_111b077b;
  /* 111b0776 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b0779 jmp 0x111b07a2 */
  goto L_111b07a2;
L_111b077b:;
  /* 111b077b mov eax, dword ptr [0x111d0d88] */
  EAX = (r32((uint32_t)(0x111d0d88)));
  /* 111b0780 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111b0783 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 111b0786 mov edx, dword ptr [0x111d0d88] */
  EDX = (r32((uint32_t)(0x111d0d88)));
  /* 111b078c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111b078e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111b0790 mov byte ptr [0x111cfea8], cl */
  w8((uint32_t)(0x111cfea8), (CL));
  /* 111b0796 mov dword ptr [0x111cfeac], 1 */
  w32((uint32_t)(0x111cfeac), (0x1u));
  /* 111b07a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111b07a2:;
  /* 111b07a2 mov esp, ebp */
  ESP = (EBP);
  /* 111b07a4 pop ebp */
  EBP = (pop32());
  /* 111b07a5 ret  */
  ESPCHK(0x111b0500u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x111b07b0 (125 bytes, 49 insns) */
void f_111b07b0(void) {
  FTRACE(0x111b07b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b07b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b07b1 mov ebp, esp */
  EBP = (ESP);
  /* 111b07b3 push ecx */
  push32((uint32_t)(ECX));
L_111b07b4:;
  /* 111b07b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b07b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111b07ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b07bc je 0x111b0829 */
  if (C.zf) goto L_111b0829;
  /* 111b07be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b07c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111b07c4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b07c7 jl 0x111b07ed */
  if ((C.sf!=C.of)) goto L_111b07ed;
  /* 111b07c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b07cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111b07cf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b07d2 jg 0x111b07ed */
  if ((!C.zf&&C.sf==C.of)) goto L_111b07ed;
  /* 111b07d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b07d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111b07da sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b07dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b07e0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 111b07e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b07e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b07e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111b07eb jmp 0x111b0827 */
  goto L_111b0827;
L_111b07ed:;
  /* 111b07ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b07f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111b07f3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b07f6 jne 0x111b081e */
  if (!C.zf) goto L_111b081e;
  /* 111b07f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b07fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111b07fe:;
  /* 111b07fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0801 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0804 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 111b0807 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 111b0809 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b080c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b080f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111b0812 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0815 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111b0818 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b081a jne 0x111b07fe */
  if (!C.zf) goto L_111b07fe;
  /* 111b081c jmp 0x111b0827 */
  goto L_111b0827;
L_111b081e:;
  /* 111b081e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0821 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0824 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_111b0827:;
  /* 111b0827 jmp 0x111b07b4 */
  goto L_111b07b4;
L_111b0829:;
  /* 111b0829 mov esp, ebp */
  ESP = (EBP);
  /* 111b082b pop ebp */
  EBP = (pop32());
  /* 111b082c ret  */
  ESPCHK(0x111b07b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010830 @ 0x111b0830 (304 bytes, 85 insns) */
void f_111b0830(void) {
  FTRACE(0x111b0830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b0830 push ebp */
  push32((uint32_t)(EBP));
  /* 111b0831 mov ebp, esp */
  EBP = (ESP);
  /* 111b0833 push ecx */
  push32((uint32_t)(ECX));
  /* 111b0834 cmp dword ptr [0x111d1864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b083b je 0x111b08fc */
  if (C.zf) goto L_111b08fc;
  /* 111b0841 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 111b0843 push 0x111cd320 */
  push32((uint32_t)(0x111cd320u));
  /* 111b0848 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b084a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 111b084c push 1 */
  push32((uint32_t)(0x1u));
  /* 111b084e call 0x111a57c0 */
  push32(0x111b0853u); f_111a57c0();
  /* 111b0853 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0856 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b0859 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b085d jne 0x111b0869 */
  if (!C.zf) goto L_111b0869;
  /* 111b085f mov eax, 1 */
  EAX = (0x1u);
  /* 111b0864 jmp 0x111b095c */
  goto L_111b095c;
L_111b0869:;
  /* 111b0869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b086c push eax */
  push32((uint32_t)(EAX));
  /* 111b086d call 0x111b0960 */
  push32(0x111b0872u); f_111b0960();
  /* 111b0872 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0875 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b0877 je 0x111b089d */
  if (C.zf) goto L_111b089d;
  /* 111b0879 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b087c push ecx */
  push32((uint32_t)(ECX));
  /* 111b087d call 0x111b0bf0 */
  push32(0x111b0882u); f_111b0bf0();
  /* 111b0882 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0885 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0887 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b088a push edx */
  push32((uint32_t)(EDX));
  /* 111b088b call 0x111a5e40 */
  push32(0x111b0890u); f_111a5e40();
  /* 111b0890 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0893 mov eax, 1 */
  EAX = (0x1u);
  /* 111b0898 jmp 0x111b095c */
  goto L_111b095c;
L_111b089d:;
  /* 111b089d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b08a0 mov ecx, dword ptr [0x111d0d88] */
  ECX = (r32((uint32_t)(0x111d0d88)));
  /* 111b08a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b08a8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111b08aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b08ad mov ecx, dword ptr [0x111d0d88] */
  ECX = (r32((uint32_t)(0x111d0d88)));
  /* 111b08b3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111b08b6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 111b08b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b08bc mov ecx, dword ptr [0x111d0d88] */
  ECX = (r32((uint32_t)(0x111d0d88)));
  /* 111b08c2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111b08c5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 111b08c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b08cb mov dword ptr [0x111d0d88], eax */
  w32((uint32_t)(0x111d0d88), (EAX));
  /* 111b08d0 mov ecx, dword ptr [0x111d189c] */
  ECX = (r32((uint32_t)(0x111d189c)));
  /* 111b08d6 push ecx */
  push32((uint32_t)(ECX));
  /* 111b08d7 call 0x111b0bf0 */
  push32(0x111b08dcu); f_111b0bf0();
  /* 111b08dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b08df push 2 */
  push32((uint32_t)(0x2u));
  /* 111b08e1 mov edx, dword ptr [0x111d189c] */
  EDX = (r32((uint32_t)(0x111d189c)));
  /* 111b08e7 push edx */
  push32((uint32_t)(EDX));
  /* 111b08e8 call 0x111a5e40 */
  push32(0x111b08edu); f_111a5e40();
  /* 111b08ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b08f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b08f3 mov dword ptr [0x111d189c], eax */
  w32((uint32_t)(0x111d189c), (EAX));
  /* 111b08f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b08fa jmp 0x111b095c */
  goto L_111b095c;
L_111b08fc:;
  /* 111b08fc mov ecx, dword ptr [0x111d0d88] */
  ECX = (r32((uint32_t)(0x111d0d88)));
  /* 111b0902 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b0904 mov dword ptr [0x111d0d58], edx */
  w32((uint32_t)(0x111d0d58), (EDX));
  /* 111b090a mov eax, dword ptr [0x111d0d88] */
  EAX = (r32((uint32_t)(0x111d0d88)));
  /* 111b090f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111b0912 mov dword ptr [0x111d0d5c], ecx */
  w32((uint32_t)(0x111d0d5c), (ECX));
  /* 111b0918 mov edx, dword ptr [0x111d0d88] */
  EDX = (r32((uint32_t)(0x111d0d88)));
  /* 111b091e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 111b0921 mov dword ptr [0x111d0d60], eax */
  w32((uint32_t)(0x111d0d60), (EAX));
  /* 111b0926 mov dword ptr [0x111d0d88], 0x111d0d58 */
  w32((uint32_t)(0x111d0d88), (0x111d0d58u));
  /* 111b0930 mov ecx, dword ptr [0x111d189c] */
  ECX = (r32((uint32_t)(0x111d189c)));
  /* 111b0936 push ecx */
  push32((uint32_t)(ECX));
  /* 111b0937 call 0x111b0bf0 */
  push32(0x111b093cu); f_111b0bf0();
  /* 111b093c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b093f push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0941 mov edx, dword ptr [0x111d189c] */
  EDX = (r32((uint32_t)(0x111d189c)));
  /* 111b0947 push edx */
  push32((uint32_t)(EDX));
  /* 111b0948 call 0x111a5e40 */
  push32(0x111b094du); f_111a5e40();
  /* 111b094d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0950 mov dword ptr [0x111d189c], 0 */
  w32((uint32_t)(0x111d189c), (0x0u));
  /* 111b095a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111b095c:;
  /* 111b095c mov esp, ebp */
  ESP = (EBP);
  /* 111b095e pop ebp */
  EBP = (pop32());
  /* 111b095f ret  */
  ESPCHK(0x111b0830u, _esp0);
  ESP += 4; return;
}

/* FUN_10010960 @ 0x111b0960 (525 bytes, 200 insns) */
void f_111b0960(void) {
  FTRACE(0x111b0960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b0960 push ebp */
  push32((uint32_t)(EBP));
  /* 111b0961 mov ebp, esp */
  EBP = (ESP);
  /* 111b0963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b0966 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111b096d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b096f mov ax, word ptr [0x111d18bc] */
  AX = (r16((uint32_t)(0x111d18bc)));
  /* 111b0975 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b0978 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b097c jne 0x111b0986 */
  if (!C.zf) goto L_111b0986;
  /* 111b097e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b0981 jmp 0x111b0b69 */
  goto L_111b0b69;
L_111b0986:;
  /* 111b0986 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0989 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b098c push ecx */
  push32((uint32_t)(ECX));
  /* 111b098d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 111b098f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0992 push edx */
  push32((uint32_t)(EDX));
  /* 111b0993 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b0995 call 0x111b3570 */
  push32(0x111b099au); f_111b3570();
  /* 111b099a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b099d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b09a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b09a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b09a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b09a8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b09ab push edx */
  push32((uint32_t)(EDX));
  /* 111b09ac push 0x14 */
  push32((uint32_t)(0x14u));
  /* 111b09ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b09b1 push eax */
  push32((uint32_t)(EAX));
  /* 111b09b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b09b4 call 0x111b3570 */
  push32(0x111b09b9u); f_111b3570();
  /* 111b09b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b09bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b09bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b09c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b09c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b09c7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b09ca push edx */
  push32((uint32_t)(EDX));
  /* 111b09cb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 111b09cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b09d0 push eax */
  push32((uint32_t)(EAX));
  /* 111b09d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b09d3 call 0x111b3570 */
  push32(0x111b09d8u); f_111b3570();
  /* 111b09d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b09db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b09de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b09e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b09e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b09e6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b09e9 push edx */
  push32((uint32_t)(EDX));
  /* 111b09ea push 0x17 */
  push32((uint32_t)(0x17u));
  /* 111b09ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b09ef push eax */
  push32((uint32_t)(EAX));
  /* 111b09f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b09f2 call 0x111b3570 */
  push32(0x111b09f7u); f_111b3570();
  /* 111b09f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b09fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b09fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b09ff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b0a02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0a05 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0a08 push edx */
  push32((uint32_t)(EDX));
  /* 111b0a09 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 111b0a0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0a0e push eax */
  push32((uint32_t)(EAX));
  /* 111b0a0f push 1 */
  push32((uint32_t)(0x1u));
  /* 111b0a11 call 0x111b3570 */
  push32(0x111b0a16u); f_111b3570();
  /* 111b0a16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0a19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b0a1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b0a1e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b0a21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0a24 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 111b0a27 push eax */
  push32((uint32_t)(EAX));
  /* 111b0a28 call 0x111b0b70 */
  push32(0x111b0a2du); f_111b0b70();
  /* 111b0a2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0a30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0a33 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0a36 push ecx */
  push32((uint32_t)(ECX));
  /* 111b0a37 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 111b0a39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0a3c push edx */
  push32((uint32_t)(EDX));
  /* 111b0a3d push 1 */
  push32((uint32_t)(0x1u));
  /* 111b0a3f call 0x111b3570 */
  push32(0x111b0a44u); f_111b3570();
  /* 111b0a44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0a47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b0a4a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b0a4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b0a4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0a52 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0a55 push edx */
  push32((uint32_t)(EDX));
  /* 111b0a56 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 111b0a58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0a5b push eax */
  push32((uint32_t)(EAX));
  /* 111b0a5c push 1 */
  push32((uint32_t)(0x1u));
  /* 111b0a5e call 0x111b3570 */
  push32(0x111b0a63u); f_111b3570();
  /* 111b0a63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0a66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b0a69 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b0a6b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b0a6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0a71 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0a74 push edx */
  push32((uint32_t)(EDX));
  /* 111b0a75 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 111b0a77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0a7a push eax */
  push32((uint32_t)(EAX));
  /* 111b0a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 111b0a7d call 0x111b3570 */
  push32(0x111b0a82u); f_111b3570();
  /* 111b0a82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0a85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b0a88 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b0a8a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b0a8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0a90 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0a93 push edx */
  push32((uint32_t)(EDX));
  /* 111b0a94 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 111b0a96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0a99 push eax */
  push32((uint32_t)(EAX));
  /* 111b0a9a push 0 */
  push32((uint32_t)(0x0u));
  /* 111b0a9c call 0x111b3570 */
  push32(0x111b0aa1u); f_111b3570();
  /* 111b0aa1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0aa4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b0aa7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b0aa9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b0aac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0aaf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0ab2 push edx */
  push32((uint32_t)(EDX));
  /* 111b0ab3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 111b0ab5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0ab8 push eax */
  push32((uint32_t)(EAX));
  /* 111b0ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b0abb call 0x111b3570 */
  push32(0x111b0ac0u); f_111b3570();
  /* 111b0ac0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0ac3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b0ac6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b0ac8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b0acb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0ace add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0ad1 push edx */
  push32((uint32_t)(EDX));
  /* 111b0ad2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 111b0ad4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0ad7 push eax */
  push32((uint32_t)(EAX));
  /* 111b0ad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b0ada call 0x111b3570 */
  push32(0x111b0adfu); f_111b3570();
  /* 111b0adf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0ae2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b0ae5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b0ae7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b0aea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0aed add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0af0 push edx */
  push32((uint32_t)(EDX));
  /* 111b0af1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 111b0af3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0af6 push eax */
  push32((uint32_t)(EAX));
  /* 111b0af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b0af9 call 0x111b3570 */
  push32(0x111b0afeu); f_111b3570();
  /* 111b0afe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0b01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b0b04 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b0b06 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b0b09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0b0c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0b0f push edx */
  push32((uint32_t)(EDX));
  /* 111b0b10 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 111b0b12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0b15 push eax */
  push32((uint32_t)(EAX));
  /* 111b0b16 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b0b18 call 0x111b3570 */
  push32(0x111b0b1du); f_111b3570();
  /* 111b0b1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0b20 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b0b23 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b0b25 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b0b28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0b2b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0b2e push edx */
  push32((uint32_t)(EDX));
  /* 111b0b2f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 111b0b31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0b34 push eax */
  push32((uint32_t)(EAX));
  /* 111b0b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b0b37 call 0x111b3570 */
  push32(0x111b0b3cu); f_111b3570();
  /* 111b0b3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0b3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b0b42 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b0b44 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b0b47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0b4a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0b4d push edx */
  push32((uint32_t)(EDX));
  /* 111b0b4e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 111b0b50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0b53 push eax */
  push32((uint32_t)(EAX));
  /* 111b0b54 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b0b56 call 0x111b3570 */
  push32(0x111b0b5bu); f_111b3570();
  /* 111b0b5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0b5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b0b61 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b0b63 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b0b66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_111b0b69:;
  /* 111b0b69 mov esp, ebp */
  ESP = (EBP);
  /* 111b0b6b pop ebp */
  EBP = (pop32());
  /* 111b0b6c ret  */
  ESPCHK(0x111b0960u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x111b0b70 (125 bytes, 49 insns) */
void f_111b0b70(void) {
  FTRACE(0x111b0b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b0b70 push ebp */
  push32((uint32_t)(EBP));
  /* 111b0b71 mov ebp, esp */
  EBP = (ESP);
  /* 111b0b73 push ecx */
  push32((uint32_t)(ECX));
L_111b0b74:;
  /* 111b0b74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0b77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111b0b7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b0b7c je 0x111b0be9 */
  if (C.zf) goto L_111b0be9;
  /* 111b0b7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0b81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111b0b84 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0b87 jl 0x111b0bad */
  if ((C.sf!=C.of)) goto L_111b0bad;
  /* 111b0b89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0b8c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111b0b8f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0b92 jg 0x111b0bad */
  if ((!C.zf&&C.sf==C.of)) goto L_111b0bad;
  /* 111b0b94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0b97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111b0b9a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b0b9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0ba0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 111b0ba2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0ba5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0ba8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111b0bab jmp 0x111b0be7 */
  goto L_111b0be7;
L_111b0bad:;
  /* 111b0bad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0bb0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111b0bb3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0bb6 jne 0x111b0bde */
  if (!C.zf) goto L_111b0bde;
  /* 111b0bb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0bbb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111b0bbe:;
  /* 111b0bbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0bc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0bc4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 111b0bc7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 111b0bc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0bcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0bcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111b0bd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b0bd5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111b0bd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b0bda jne 0x111b0bbe */
  if (!C.zf) goto L_111b0bbe;
  /* 111b0bdc jmp 0x111b0be7 */
  goto L_111b0be7;
L_111b0bde:;
  /* 111b0bde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0be1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0be4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_111b0be7:;
  /* 111b0be7 jmp 0x111b0b74 */
  goto L_111b0b74;
L_111b0be9:;
  /* 111b0be9 mov esp, ebp */
  ESP = (EBP);
  /* 111b0beb pop ebp */
  EBP = (pop32());
  /* 111b0bec ret  */
  ESPCHK(0x111b0b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bf0 @ 0x111b0bf0 (147 bytes, 52 insns) */
void f_111b0bf0(void) {
  FTRACE(0x111b0bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b0bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b0bf1 mov ebp, esp */
  EBP = (ESP);
  /* 111b0bf3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0bf7 jne 0x111b0bfe */
  if (!C.zf) goto L_111b0bfe;
  /* 111b0bf9 jmp 0x111b0c81 */
  goto L_111b0c81;
L_111b0bfe:;
  /* 111b0bfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0c01 cmp dword ptr [eax + 0xc], 0x111d18f8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x111d18f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0c08 je 0x111b0c81 */
  if (C.zf) goto L_111b0c81;
  /* 111b0c0a push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0c0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0c0f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111b0c12 push edx */
  push32((uint32_t)(EDX));
  /* 111b0c13 call 0x111a5e40 */
  push32(0x111b0c18u); f_111a5e40();
  /* 111b0c18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0c1b push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0c1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0c20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111b0c23 push ecx */
  push32((uint32_t)(ECX));
  /* 111b0c24 call 0x111a5e40 */
  push32(0x111b0c29u); f_111a5e40();
  /* 111b0c29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0c2c push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0c2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0c31 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111b0c34 push eax */
  push32((uint32_t)(EAX));
  /* 111b0c35 call 0x111a5e40 */
  push32(0x111b0c3au); f_111a5e40();
  /* 111b0c3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0c3d push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0c3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0c42 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 111b0c45 push edx */
  push32((uint32_t)(EDX));
  /* 111b0c46 call 0x111a5e40 */
  push32(0x111b0c4bu); f_111a5e40();
  /* 111b0c4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0c4e push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0c50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0c53 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 111b0c56 push ecx */
  push32((uint32_t)(ECX));
  /* 111b0c57 call 0x111a5e40 */
  push32(0x111b0c5cu); f_111a5e40();
  /* 111b0c5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0c5f push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0c61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0c64 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 111b0c67 push eax */
  push32((uint32_t)(EAX));
  /* 111b0c68 call 0x111a5e40 */
  push32(0x111b0c6du); f_111a5e40();
  /* 111b0c6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0c70 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0c72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b0c75 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 111b0c78 push edx */
  push32((uint32_t)(EDX));
  /* 111b0c79 call 0x111a5e40 */
  push32(0x111b0c7eu); f_111a5e40();
  /* 111b0c7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b0c81:;
  /* 111b0c81 pop ebp */
  EBP = (pop32());
  /* 111b0c82 ret  */
  ESPCHK(0x111b0bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c90 @ 0x111b0c90 (928 bytes, 284 insns) */
void f_111b0c90(void) {
  FTRACE(0x111b0c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b0c90 push ebp */
  push32((uint32_t)(EBP));
  /* 111b0c91 mov ebp, esp */
  EBP = (ESP);
  /* 111b0c93 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b0c96 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 111b0c9d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 111b0ca4 cmp dword ptr [0x111d1860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0cab je 0x111b0fe1 */
  if (C.zf) goto L_111b0fe1;
  /* 111b0cb1 cmp dword ptr [0x111d1870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0cb8 jne 0x111b0ce0 */
  if (!C.zf) goto L_111b0ce0;
  /* 111b0cba push 0x111d1870 */
  push32((uint32_t)(0x111d1870u));
  /* 111b0cbf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 111b0cc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b0cc6 mov ax, word ptr [0x111d18b4] */
  AX = (r16((uint32_t)(0x111d18b4)));
  /* 111b0ccc push eax */
  push32((uint32_t)(EAX));
  /* 111b0ccd push 0 */
  push32((uint32_t)(0x0u));
  /* 111b0ccf call 0x111b3570 */
  push32(0x111b0cd4u); f_111b3570();
  /* 111b0cd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0cd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b0cd9 je 0x111b0ce0 */
  if (C.zf) goto L_111b0ce0;
  /* 111b0cdb jmp 0x111b0fa2 */
  goto L_111b0fa2;
L_111b0ce0:;
  /* 111b0ce0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 111b0ce2 push 0x111cd32c */
  push32((uint32_t)(0x111cd32cu));
  /* 111b0ce7 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0ce9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 111b0cee call 0x111a53b0 */
  push32(0x111b0cf3u); f_111a53b0();
  /* 111b0cf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0cf6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 111b0cf9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 111b0cfb push 0x111cd32c */
  push32((uint32_t)(0x111cd32cu));
  /* 111b0d00 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0d02 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 111b0d07 call 0x111a53b0 */
  push32(0x111b0d0cu); f_111a53b0();
  /* 111b0d0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0d0f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 111b0d12 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 111b0d14 push 0x111cd32c */
  push32((uint32_t)(0x111cd32cu));
  /* 111b0d19 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0d1b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 111b0d20 call 0x111a53b0 */
  push32(0x111b0d25u); f_111a53b0();
  /* 111b0d25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0d28 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 111b0d2b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 111b0d2d push 0x111cd32c */
  push32((uint32_t)(0x111cd32cu));
  /* 111b0d32 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0d34 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 111b0d39 call 0x111a53b0 */
  push32(0x111b0d3eu); f_111a53b0();
  /* 111b0d3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0d41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 111b0d44 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0d48 je 0x111b0d5c */
  if (C.zf) goto L_111b0d5c;
  /* 111b0d4a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0d4e je 0x111b0d5c */
  if (C.zf) goto L_111b0d5c;
  /* 111b0d50 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0d54 je 0x111b0d5c */
  if (C.zf) goto L_111b0d5c;
  /* 111b0d56 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0d5a jne 0x111b0d61 */
  if (!C.zf) goto L_111b0d61;
L_111b0d5c:;
  /* 111b0d5c jmp 0x111b0fa2 */
  goto L_111b0fa2;
L_111b0d61:;
  /* 111b0d61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111b0d64 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 111b0d67 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 111b0d6e jmp 0x111b0d79 */
  goto L_111b0d79;
L_111b0d70:;
  /* 111b0d70 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 111b0d73 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0d76 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_111b0d79:;
  /* 111b0d79 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0d80 jge 0x111b0d95 */
  if ((C.sf==C.of)) goto L_111b0d95;
  /* 111b0d82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b0d85 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 111b0d88 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 111b0d8a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b0d8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0d90 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 111b0d93 jmp 0x111b0d70 */
  goto L_111b0d70;
L_111b0d95:;
  /* 111b0d95 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 111b0d98 push eax */
  push32((uint32_t)(EAX));
  /* 111b0d99 mov ecx, dword ptr [0x111d1870] */
  ECX = (r32((uint32_t)(0x111d1870)));
  /* 111b0d9f push ecx */
  push32((uint32_t)(ECX));
  /* 111b0da0 call dword ptr [0x111d4328] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4328))), 0x111b0da6u);
  /* 111b0da6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b0da8 jne 0x111b0daf */
  if (!C.zf) goto L_111b0daf;
  /* 111b0daa jmp 0x111b0fa2 */
  goto L_111b0fa2;
L_111b0daf:;
  /* 111b0daf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0db3 jbe 0x111b0dba */
  if ((C.cf||C.zf)) goto L_111b0dba;
  /* 111b0db5 jmp 0x111b0fa2 */
  goto L_111b0fa2;
L_111b0dba:;
  /* 111b0dba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b0dbd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111b0dc3 mov dword ptr [0x111cfea4], edx */
  w32((uint32_t)(0x111cfea4), (EDX));
  /* 111b0dc9 cmp dword ptr [0x111cfea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111cfea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0dd0 jle 0x111b0e29 */
  if ((C.zf||C.sf!=C.of)) goto L_111b0e29;
  /* 111b0dd2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 111b0dd5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111b0dd8 jmp 0x111b0de3 */
  goto L_111b0de3;
L_111b0dda:;
  /* 111b0dda mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b0ddd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0de0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_111b0de3:;
  /* 111b0de3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b0de6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b0de8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b0dea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b0dec je 0x111b0e29 */
  if (C.zf) goto L_111b0e29;
  /* 111b0dee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b0df1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b0df3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 111b0df6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b0df8 je 0x111b0e29 */
  if (C.zf) goto L_111b0e29;
  /* 111b0dfa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b0dfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b0dff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111b0e01 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 111b0e04 jmp 0x111b0e0f */
  goto L_111b0e0f;
L_111b0e06:;
  /* 111b0e06 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 111b0e09 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0e0c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_111b0e0f:;
  /* 111b0e0f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b0e12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b0e14 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 111b0e17 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0e1a jg 0x111b0e27 */
  if ((!C.zf&&C.sf==C.of)) goto L_111b0e27;
  /* 111b0e1c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111b0e1f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0e22 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 111b0e25 jmp 0x111b0e06 */
  goto L_111b0e06;
L_111b0e27:;
  /* 111b0e27 jmp 0x111b0dda */
  goto L_111b0dda;
L_111b0e29:;
  /* 111b0e29 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b0e2b push 0 */
  push32((uint32_t)(0x0u));
  /* 111b0e2d push 0 */
  push32((uint32_t)(0x0u));
  /* 111b0e2f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111b0e32 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0e35 push eax */
  push32((uint32_t)(EAX));
  /* 111b0e36 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 111b0e3b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111b0e3e push ecx */
  push32((uint32_t)(ECX));
  /* 111b0e3f push 1 */
  push32((uint32_t)(0x1u));
  /* 111b0e41 call 0x111ad5e0 */
  push32(0x111b0e46u); f_111ad5e0();
  /* 111b0e46 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0e49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b0e4b jne 0x111b0e52 */
  if (!C.zf) goto L_111b0e52;
  /* 111b0e4d jmp 0x111b0fa2 */
  goto L_111b0fa2;
L_111b0e52:;
  /* 111b0e52 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111b0e55 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 111b0e5a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111b0e5d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 111b0e60 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 111b0e67 jmp 0x111b0e72 */
  goto L_111b0e72;
L_111b0e69:;
  /* 111b0e69 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111b0e6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0e6f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_111b0e72:;
  /* 111b0e72 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0e79 jge 0x111b0e90 */
  if ((C.sf==C.of)) goto L_111b0e90;
  /* 111b0e7b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111b0e7e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 111b0e82 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 111b0e85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111b0e88 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0e8b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 111b0e8e jmp 0x111b0e69 */
  goto L_111b0e69;
L_111b0e90:;
  /* 111b0e90 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b0e92 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b0e94 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111b0e97 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0e9a push edx */
  push32((uint32_t)(EDX));
  /* 111b0e9b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 111b0ea0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111b0ea3 push eax */
  push32((uint32_t)(EAX));
  /* 111b0ea4 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b0ea6 call 0x111b3810 */
  push32(0x111b0eabu); f_111b3810();
  /* 111b0eab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0eae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b0eb0 jne 0x111b0eb7 */
  if (!C.zf) goto L_111b0eb7;
  /* 111b0eb2 jmp 0x111b0fa2 */
  goto L_111b0fa2;
L_111b0eb7:;
  /* 111b0eb7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111b0eba mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 111b0ebf cmp dword ptr [0x111cfea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111cfea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0ec6 jle 0x111b0f23 */
  if ((C.zf||C.sf!=C.of)) goto L_111b0f23;
  /* 111b0ec8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 111b0ecb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 111b0ece jmp 0x111b0ed9 */
  goto L_111b0ed9;
L_111b0ed0:;
  /* 111b0ed0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b0ed3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0ed6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_111b0ed9:;
  /* 111b0ed9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b0edc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b0ede mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111b0ee0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b0ee2 je 0x111b0f23 */
  if (C.zf) goto L_111b0f23;
  /* 111b0ee4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b0ee7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b0ee9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 111b0eec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b0eee je 0x111b0f23 */
  if (C.zf) goto L_111b0f23;
  /* 111b0ef0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b0ef3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b0ef5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b0ef7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 111b0efa jmp 0x111b0f05 */
  goto L_111b0f05;
L_111b0efc:;
  /* 111b0efc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111b0eff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0f02 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_111b0f05:;
  /* 111b0f05 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b0f08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b0f0a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 111b0f0d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0f10 jg 0x111b0f21 */
  if ((!C.zf&&C.sf==C.of)) goto L_111b0f21;
  /* 111b0f12 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111b0f15 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111b0f18 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 111b0f1f jmp 0x111b0efc */
  goto L_111b0efc;
L_111b0f21:;
  /* 111b0f21 jmp 0x111b0ed0 */
  goto L_111b0ed0;
L_111b0f23:;
  /* 111b0f23 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111b0f26 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0f29 mov dword ptr [0x111cfc98], eax */
  w32((uint32_t)(0x111cfc98), (EAX));
  /* 111b0f2e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111b0f31 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0f34 mov dword ptr [0x111cfc9c], ecx */
  w32((uint32_t)(0x111cfc9c), (ECX));
  /* 111b0f3a cmp dword ptr [0x111d18a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0f41 je 0x111b0f54 */
  if (C.zf) goto L_111b0f54;
  /* 111b0f43 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0f45 mov edx, dword ptr [0x111d18a0] */
  EDX = (r32((uint32_t)(0x111d18a0)));
  /* 111b0f4b push edx */
  push32((uint32_t)(EDX));
  /* 111b0f4c call 0x111a5e40 */
  push32(0x111b0f51u); f_111a5e40();
  /* 111b0f51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b0f54:;
  /* 111b0f54 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111b0f57 mov dword ptr [0x111d18a0], eax */
  w32((uint32_t)(0x111d18a0), (EAX));
  /* 111b0f5c cmp dword ptr [0x111d18a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b0f63 je 0x111b0f76 */
  if (C.zf) goto L_111b0f76;
  /* 111b0f65 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0f67 mov ecx, dword ptr [0x111d18a4] */
  ECX = (r32((uint32_t)(0x111d18a4)));
  /* 111b0f6d push ecx */
  push32((uint32_t)(ECX));
  /* 111b0f6e call 0x111a5e40 */
  push32(0x111b0f73u); f_111a5e40();
  /* 111b0f73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b0f76:;
  /* 111b0f76 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111b0f79 mov dword ptr [0x111d18a4], edx */
  w32((uint32_t)(0x111d18a4), (EDX));
  /* 111b0f7f push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0f81 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111b0f84 push eax */
  push32((uint32_t)(EAX));
  /* 111b0f85 call 0x111a5e40 */
  push32(0x111b0f8au); f_111a5e40();
  /* 111b0f8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0f8d push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0f8f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111b0f92 push ecx */
  push32((uint32_t)(ECX));
  /* 111b0f93 call 0x111a5e40 */
  push32(0x111b0f98u); f_111a5e40();
  /* 111b0f98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0f9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b0f9d jmp 0x111b102c */
  goto L_111b102c;
L_111b0fa2:;
  /* 111b0fa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0fa4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111b0fa7 push edx */
  push32((uint32_t)(EDX));
  /* 111b0fa8 call 0x111a5e40 */
  push32(0x111b0fadu); f_111a5e40();
  /* 111b0fad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0fb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0fb2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111b0fb5 push eax */
  push32((uint32_t)(EAX));
  /* 111b0fb6 call 0x111a5e40 */
  push32(0x111b0fbbu); f_111a5e40();
  /* 111b0fbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0fbe push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0fc0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111b0fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 111b0fc4 call 0x111a5e40 */
  push32(0x111b0fc9u); f_111a5e40();
  /* 111b0fc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0fcc push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0fce mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 111b0fd1 push edx */
  push32((uint32_t)(EDX));
  /* 111b0fd2 call 0x111a5e40 */
  push32(0x111b0fd7u); f_111a5e40();
  /* 111b0fd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b0fda mov eax, 1 */
  EAX = (0x1u);
  /* 111b0fdf jmp 0x111b102c */
  goto L_111b102c;
L_111b0fe1:;
  /* 111b0fe1 mov dword ptr [0x111cfc98], 0x111cfca2 */
  w32((uint32_t)(0x111cfc98), (0x111cfca2u));
  /* 111b0feb mov dword ptr [0x111cfc9c], 0x111cfca2 */
  w32((uint32_t)(0x111cfc9c), (0x111cfca2u));
  /* 111b0ff5 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b0ff7 mov eax, dword ptr [0x111d18a0] */
  EAX = (r32((uint32_t)(0x111d18a0)));
  /* 111b0ffc push eax */
  push32((uint32_t)(EAX));
  /* 111b0ffd call 0x111a5e40 */
  push32(0x111b1002u); f_111a5e40();
  /* 111b1002 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1005 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b1007 mov ecx, dword ptr [0x111d18a4] */
  ECX = (r32((uint32_t)(0x111d18a4)));
  /* 111b100d push ecx */
  push32((uint32_t)(ECX));
  /* 111b100e call 0x111a5e40 */
  push32(0x111b1013u); f_111a5e40();
  /* 111b1013 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1016 mov dword ptr [0x111d18a0], 0 */
  w32((uint32_t)(0x111d18a0), (0x0u));
  /* 111b1020 mov dword ptr [0x111d18a4], 0 */
  w32((uint32_t)(0x111d18a4), (0x0u));
  /* 111b102a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111b102c:;
  /* 111b102c mov esp, ebp */
  ESP = (EBP);
  /* 111b102e pop ebp */
  EBP = (pop32());
  /* 111b102f ret  */
  ESPCHK(0x111b0c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011030 @ 0x111b1030 (7 bytes, 5 insns) */
void f_111b1030(void) {
  FTRACE(0x111b1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1030 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1031 mov ebp, esp */
  EBP = (ESP);
  /* 111b1033 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b1035 pop ebp */
  EBP = (pop32());
  /* 111b1036 ret  */
  ESPCHK(0x111b1030u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x111b1040 (129 bytes, 56 insns) */
void f_111b1040(void) {
  FTRACE(0x111b1040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1040 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 111b1044 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 111b1048 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 111b104e jne 0x111b108c */
  if (!C.zf) goto L_111b108c;
L_111b1050:;
  /* 111b1050 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111b1052 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b1054 jne 0x111b1084 */
  if (!C.zf) goto L_111b1084;
  /* 111b1056 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111b1058 je 0x111b1080 */
  if (C.zf) goto L_111b1080;
  /* 111b105a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b105d jne 0x111b1084 */
  if (!C.zf) goto L_111b1084;
  /* 111b105f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 111b1061 je 0x111b1080 */
  if (C.zf) goto L_111b1080;
  /* 111b1063 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 111b1066 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b1069 jne 0x111b1084 */
  if (!C.zf) goto L_111b1084;
  /* 111b106b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111b106d je 0x111b1080 */
  if (C.zf) goto L_111b1080;
  /* 111b106f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b1072 jne 0x111b1084 */
  if (!C.zf) goto L_111b1084;
  /* 111b1074 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1077 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b107a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 111b107c jne 0x111b1050 */
  if (!C.zf) goto L_111b1050;
  /* 111b107e mov edi, edi */
  EDI = (EDI);
L_111b1080:;
  /* 111b1080 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b1082 ret  */
  ESPCHK(0x111b1040u, _esp0);
  ESP += 4; return;
  /* 111b1083 nop  */
  /* nop */
L_111b1084:;
  /* 111b1084 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1086 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111b1088 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111b1089 ret  */
  ESPCHK(0x111b1040u, _esp0);
  ESP += 4; return;
  /* 111b108a mov edi, edi */
  EDI = (EDI);
L_111b108c:;
  /* 111b108c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 111b1092 je 0x111b10a8 */
  if (C.zf) goto L_111b10a8;
  /* 111b1094 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b1096 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 111b1097 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b1099 jne 0x111b1084 */
  if (!C.zf) goto L_111b1084;
  /* 111b109b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111b109c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111b109e je 0x111b1080 */
  if (C.zf) goto L_111b1080;
  /* 111b10a0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 111b10a6 je 0x111b1050 */
  if (C.zf) goto L_111b1050;
L_111b10a8:;
  /* 111b10a8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 111b10ab add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b10ae cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b10b0 jne 0x111b1084 */
  if (!C.zf) goto L_111b1084;
  /* 111b10b2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111b10b4 je 0x111b1080 */
  if (C.zf) goto L_111b1080;
  /* 111b10b6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b10b9 jne 0x111b1084 */
  if (!C.zf) goto L_111b1084;
  /* 111b10bb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 111b10bd je 0x111b1080 */
  if (C.zf) goto L_111b1080;
  /* 111b10bf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b10c2 jmp 0x111b1050 */
  goto L_111b1050;
}

/* FUN_100110d0 @ 0x111b10d0 (62 bytes, 35 insns) */
void f_111b10d0(void) {
  FTRACE(0x111b10d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b10d0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b10d1 mov ebp, esp */
  EBP = (ESP);
  /* 111b10d3 push esi */
  push32((uint32_t)(ESI));
  /* 111b10d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b10d6 push eax */
  push32((uint32_t)(EAX));
  /* 111b10d7 push eax */
  push32((uint32_t)(EAX));
  /* 111b10d8 push eax */
  push32((uint32_t)(EAX));
  /* 111b10d9 push eax */
  push32((uint32_t)(EAX));
  /* 111b10da push eax */
  push32((uint32_t)(EAX));
  /* 111b10db push eax */
  push32((uint32_t)(EAX));
  /* 111b10dc push eax */
  push32((uint32_t)(EAX));
  /* 111b10dd push eax */
  push32((uint32_t)(EAX));
  /* 111b10de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b10e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111b10e4:;
  /* 111b10e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b10e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111b10e8 je 0x111b10f1 */
  if (C.zf) goto L_111b10f1;
  /* 111b10ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 111b10eb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x111b10eb");
  /* 111b10ef jmp 0x111b10e4 */
  goto L_111b10e4;
L_111b10f1:;
  /* 111b10f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 111b10f4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111b10f7 nop  */
  /* nop */
L_111b10f8:;
  /* 111b10f8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111b10f9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111b10fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111b10fd je 0x111b1106 */
  if (C.zf) goto L_111b1106;
  /* 111b10ff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111b1100 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x111b1100");
  /* 111b1104 jae 0x111b10f8 */
  if (!C.cf) goto L_111b10f8;
L_111b1106:;
  /* 111b1106 mov eax, ecx */
  EAX = (ECX);
  /* 111b1108 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b110b pop esi */
  ESI = (pop32());
  /* 111b110c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111b110d ret  */
  ESPCHK(0x111b10d0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x111b1110 (56 bytes, 31 insns) */
void f_111b1110(void) {
  FTRACE(0x111b1110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1110 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1111 mov ebp, esp */
  EBP = (ESP);
  /* 111b1113 push edi */
  push32((uint32_t)(EDI));
  /* 111b1114 push esi */
  push32((uint32_t)(ESI));
  /* 111b1115 push ebx */
  push32((uint32_t)(EBX));
  /* 111b1116 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b1119 jecxz 0x111b1141 */
  x86_unimpl("jecxz @ 0x111b1119");
  /* 111b111b mov ebx, ecx */
  EBX = (ECX);
  /* 111b111d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1120 mov esi, edi */
  ESI = (EDI);
  /* 111b1122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b1124 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 111b1126 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111b1128 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b112a mov edi, esi */
  EDI = (ESI);
  /* 111b112c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 111b112f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 111b1131 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 111b1134 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b1136 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b1139 ja 0x111b113f */
  if ((!C.cf&&!C.zf)) goto L_111b113f;
  /* 111b113b je 0x111b1141 */
  if (C.zf) goto L_111b1141;
  /* 111b113d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111b113e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_111b113f:;
  /* 111b113f not ecx */
  ECX = (~(ECX));
L_111b1141:;
  /* 111b1141 mov eax, ecx */
  EAX = (ECX);
  /* 111b1143 pop ebx */
  EBX = (pop32());
  /* 111b1144 pop esi */
  ESI = (pop32());
  /* 111b1145 pop edi */
  EDI = (pop32());
  /* 111b1146 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111b1147 ret  */
  ESPCHK(0x111b1110u, _esp0);
  ESP += 4; return;
}

/* FUN_10011150 @ 0x111b1150 (58 bytes, 32 insns) */
void f_111b1150(void) {
  FTRACE(0x111b1150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1150 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1151 mov ebp, esp */
  EBP = (ESP);
  /* 111b1153 push esi */
  push32((uint32_t)(ESI));
  /* 111b1154 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b1156 push eax */
  push32((uint32_t)(EAX));
  /* 111b1157 push eax */
  push32((uint32_t)(EAX));
  /* 111b1158 push eax */
  push32((uint32_t)(EAX));
  /* 111b1159 push eax */
  push32((uint32_t)(EAX));
  /* 111b115a push eax */
  push32((uint32_t)(EAX));
  /* 111b115b push eax */
  push32((uint32_t)(EAX));
  /* 111b115c push eax */
  push32((uint32_t)(EAX));
  /* 111b115d push eax */
  push32((uint32_t)(EAX));
  /* 111b115e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b1161 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111b1164:;
  /* 111b1164 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b1166 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111b1168 je 0x111b1171 */
  if (C.zf) goto L_111b1171;
  /* 111b116a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 111b116b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x111b116b");
  /* 111b116f jmp 0x111b1164 */
  goto L_111b1164;
L_111b1171:;
  /* 111b1171 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_111b1174:;
  /* 111b1174 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111b1176 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111b1178 je 0x111b1184 */
  if (C.zf) goto L_111b1184;
  /* 111b117a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111b117b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x111b117b");
  /* 111b117f jae 0x111b1174 */
  if (!C.cf) goto L_111b1174;
  /* 111b1181 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_111b1184:;
  /* 111b1184 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1187 pop esi */
  ESI = (pop32());
  /* 111b1188 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111b1189 ret  */
  ESPCHK(0x111b1150u, _esp0);
  ESP += 4; return;
}

/* FUN_10011190 @ 0x111b1190 (512 bytes, 147 insns) */
void f_111b1190(void) {
  FTRACE(0x111b1190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1190 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1191 mov ebp, esp */
  EBP = (ESP);
  /* 111b1193 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1196 cmp dword ptr [0x111d18ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b119d jne 0x111b11c2 */
  if (!C.zf) goto L_111b11c2;
  /* 111b119f call 0x111b1c60 */
  push32(0x111b11a4u); f_111b1c60();
  /* 111b11a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b11a6 je 0x111b11b2 */
  if (C.zf) goto L_111b11b2;
  /* 111b11a8 mov eax, dword ptr [0x111d42ec] */
  EAX = (r32((uint32_t)(0x111d42ec)));
  /* 111b11ad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111b11b0 jmp 0x111b11b9 */
  goto L_111b11b9;
L_111b11b2:;
  /* 111b11b2 mov dword ptr [ebp - 8], 0x111b1cb0 */
  w32((uint32_t)(EBP + -0x8), (0x111b1cb0u));
L_111b11b9:;
  /* 111b11b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b11bc mov dword ptr [0x111d18ec], ecx */
  w32((uint32_t)(0x111d18ec), (ECX));
L_111b11c2:;
  /* 111b11c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b11c6 jne 0x111b11d2 */
  if (!C.zf) goto L_111b11d2;
  /* 111b11c8 call 0x111b1ab0 */
  push32(0x111b11cdu); f_111b1ab0();
  /* 111b11cd jmp 0x111b129e */
  goto L_111b129e;
L_111b11d2:;
  /* 111b11d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b11d5 mov dword ptr [0x111d18dc], edx */
  w32((uint32_t)(0x111d18dc), (EDX));
  /* 111b11db cmp dword ptr [0x111d18dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b11e2 je 0x111b1204 */
  if (C.zf) goto L_111b1204;
  /* 111b11e4 mov eax, dword ptr [0x111d18dc] */
  EAX = (r32((uint32_t)(0x111d18dc)));
  /* 111b11e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111b11ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b11ee je 0x111b1204 */
  if (C.zf) goto L_111b1204;
  /* 111b11f0 push 0x111d18dc */
  push32((uint32_t)(0x111d18dcu));
  /* 111b11f5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 111b11f7 push 0x111d0a90 */
  push32((uint32_t)(0x111d0a90u));
  /* 111b11fc call 0x111b1390 */
  push32(0x111b1201u); f_111b1390();
  /* 111b1201 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b1204:;
  /* 111b1204 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1207 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b120a mov dword ptr [0x111d18e0], edx */
  w32((uint32_t)(0x111d18e0), (EDX));
  /* 111b1210 cmp dword ptr [0x111d18e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1217 je 0x111b1239 */
  if (C.zf) goto L_111b1239;
  /* 111b1219 mov eax, dword ptr [0x111d18e0] */
  EAX = (r32((uint32_t)(0x111d18e0)));
  /* 111b121e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111b1221 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b1223 je 0x111b1239 */
  if (C.zf) goto L_111b1239;
  /* 111b1225 push 0x111d18e0 */
  push32((uint32_t)(0x111d18e0u));
  /* 111b122a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 111b122c push 0x111d09d8 */
  push32((uint32_t)(0x111d09d8u));
  /* 111b1231 call 0x111b1390 */
  push32(0x111b1236u); f_111b1390();
  /* 111b1236 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b1239:;
  /* 111b1239 mov dword ptr [0x111d18e4], 0 */
  w32((uint32_t)(0x111d18e4), (0x0u));
  /* 111b1243 cmp dword ptr [0x111d18dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b124a je 0x111b127d */
  if (C.zf) goto L_111b127d;
  /* 111b124c mov edx, dword ptr [0x111d18dc] */
  EDX = (r32((uint32_t)(0x111d18dc)));
  /* 111b1252 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111b1255 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b1257 je 0x111b127d */
  if (C.zf) goto L_111b127d;
  /* 111b1259 cmp dword ptr [0x111d18e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1260 je 0x111b1276 */
  if (C.zf) goto L_111b1276;
  /* 111b1262 mov ecx, dword ptr [0x111d18e0] */
  ECX = (r32((uint32_t)(0x111d18e0)));
  /* 111b1268 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111b126b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b126d je 0x111b1276 */
  if (C.zf) goto L_111b1276;
  /* 111b126f call 0x111b1420 */
  push32(0x111b1274u); f_111b1420();
  /* 111b1274 jmp 0x111b127b */
  goto L_111b127b;
L_111b1276:;
  /* 111b1276 call 0x111b1810 */
  push32(0x111b127bu); f_111b1810();
L_111b127b:;
  /* 111b127b jmp 0x111b129e */
  goto L_111b129e;
L_111b127d:;
  /* 111b127d cmp dword ptr [0x111d18e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1284 je 0x111b1299 */
  if (C.zf) goto L_111b1299;
  /* 111b1286 mov eax, dword ptr [0x111d18e0] */
  EAX = (r32((uint32_t)(0x111d18e0)));
  /* 111b128b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111b128e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b1290 je 0x111b1299 */
  if (C.zf) goto L_111b1299;
  /* 111b1292 call 0x111b19b0 */
  push32(0x111b1297u); f_111b19b0();
  /* 111b1297 jmp 0x111b129e */
  goto L_111b129e;
L_111b1299:;
  /* 111b1299 call 0x111b1ab0 */
  push32(0x111b129eu); f_111b1ab0();
L_111b129e:;
  /* 111b129e cmp dword ptr [0x111d18e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b12a5 jne 0x111b12ae */
  if (!C.zf) goto L_111b12ae;
  /* 111b12a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b12a9 jmp 0x111b138c */
  goto L_111b138c;
L_111b12ae:;
  /* 111b12ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b12b1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b12b7 push edx */
  push32((uint32_t)(EDX));
  /* 111b12b8 call 0x111b1ae0 */
  push32(0x111b12bdu); f_111b1ae0();
  /* 111b12bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b12c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b12c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b12c7 je 0x111b12dc */
  if (C.zf) goto L_111b12dc;
  /* 111b12c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b12cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b12d1 push eax */
  push32((uint32_t)(EAX));
  /* 111b12d2 call dword ptr [0x111d42f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42f0))), 0x111b12d8u);
  /* 111b12d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b12da jne 0x111b12e3 */
  if (!C.zf) goto L_111b12e3;
L_111b12dc:;
  /* 111b12dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b12de jmp 0x111b138c */
  goto L_111b138c;
L_111b12e3:;
  /* 111b12e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b12e5 mov ecx, dword ptr [0x111d18cc] */
  ECX = (r32((uint32_t)(0x111d18cc)));
  /* 111b12eb push ecx */
  push32((uint32_t)(ECX));
  /* 111b12ec call dword ptr [0x111d4300] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4300))), 0x111b12f2u);
  /* 111b12f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b12f4 jne 0x111b12fd */
  if (!C.zf) goto L_111b12fd;
  /* 111b12f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b12f8 jmp 0x111b138c */
  goto L_111b138c;
L_111b12fd:;
  /* 111b12fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1301 je 0x111b1328 */
  if (C.zf) goto L_111b1328;
  /* 111b1303 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b1306 mov ax, word ptr [0x111d18cc] */
  AX = (r16((uint32_t)(0x111d18cc)));
  /* 111b130c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 111b130f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b1312 mov dx, word ptr [0x111d18e8] */
  DX = (r16((uint32_t)(0x111d18e8)));
  /* 111b1319 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 111b131d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b1320 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 111b1324 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_111b1328:;
  /* 111b1328 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b132c je 0x111b1387 */
  if (C.zf) goto L_111b1387;
  /* 111b132e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 111b1330 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b1333 push edx */
  push32((uint32_t)(EDX));
  /* 111b1334 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 111b1339 mov eax, dword ptr [0x111d18cc] */
  EAX = (r32((uint32_t)(0x111d18cc)));
  /* 111b133e push eax */
  push32((uint32_t)(EAX));
  /* 111b133f call dword ptr [0x111d18ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d18ec))), 0x111b1345u);
  /* 111b1345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b1347 jne 0x111b134d */
  if (!C.zf) goto L_111b134d;
  /* 111b1349 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b134b jmp 0x111b138c */
  goto L_111b138c;
L_111b134d:;
  /* 111b134d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 111b134f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b1352 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1355 push ecx */
  push32((uint32_t)(ECX));
  /* 111b1356 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 111b135b mov edx, dword ptr [0x111d18e8] */
  EDX = (r32((uint32_t)(0x111d18e8)));
  /* 111b1361 push edx */
  push32((uint32_t)(EDX));
  /* 111b1362 call dword ptr [0x111d18ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d18ec))), 0x111b1368u);
  /* 111b1368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b136a jne 0x111b1370 */
  if (!C.zf) goto L_111b1370;
  /* 111b136c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b136e jmp 0x111b138c */
  goto L_111b138c;
L_111b1370:;
  /* 111b1370 push 0xa */
  push32((uint32_t)(0xau));
  /* 111b1372 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b1375 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b137a push eax */
  push32((uint32_t)(EAX));
  /* 111b137b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b137e push ecx */
  push32((uint32_t)(ECX));
  /* 111b137f call 0x111a7ef0 */
  push32(0x111b1384u); f_111a7ef0();
  /* 111b1384 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b1387:;
  /* 111b1387 mov eax, 1 */
  EAX = (0x1u);
L_111b138c:;
  /* 111b138c mov esp, ebp */
  ESP = (EBP);
  /* 111b138e pop ebp */
  EBP = (pop32());
  /* 111b138f ret  */
  ESPCHK(0x111b1190u, _esp0);
  ESP += 4; return;
}

/* FUN_10011390 @ 0x111b1390 (130 bytes, 47 insns) */
void f_111b1390(void) {
  FTRACE(0x111b1390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1390 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1391 mov ebp, esp */
  EBP = (ESP);
  /* 111b1393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1396 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 111b139d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_111b13a4:;
  /* 111b13a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b13a7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b13aa jg 0x111b140e */
  if ((!C.zf&&C.sf==C.of)) goto L_111b140e;
  /* 111b13ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b13b0 je 0x111b140e */
  if (C.zf) goto L_111b140e;
  /* 111b13b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b13b5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b13b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111b13b9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b13bb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111b13bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b13c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b13c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b13c6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 111b13c9 push eax */
  push32((uint32_t)(EAX));
  /* 111b13ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b13cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b13cf push edx */
  push32((uint32_t)(EDX));
  /* 111b13d0 call 0x111b3a80 */
  push32(0x111b13d5u); f_111b3a80();
  /* 111b13d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b13d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111b13db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b13df jne 0x111b13f2 */
  if (!C.zf) goto L_111b13f2;
  /* 111b13e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b13e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b13e7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 111b13eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b13ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111b13f0 jmp 0x111b140c */
  goto L_111b140c;
L_111b13f2:;
  /* 111b13f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b13f6 jge 0x111b1403 */
  if ((C.sf==C.of)) goto L_111b1403;
  /* 111b13f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b13fb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b13fe mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 111b1401 jmp 0x111b140c */
  goto L_111b140c;
L_111b1403:;
  /* 111b1403 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b1406 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1409 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_111b140c:;
  /* 111b140c jmp 0x111b13a4 */
  goto L_111b13a4;
L_111b140e:;
  /* 111b140e mov esp, ebp */
  ESP = (EBP);
  /* 111b1410 pop ebp */
  EBP = (pop32());
  /* 111b1411 ret  */
  ESPCHK(0x111b1390u, _esp0);
  ESP += 4; return;
}

/* FUN_10011420 @ 0x111b1420 (186 bytes, 50 insns) */
void f_111b1420(void) {
  FTRACE(0x111b1420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1420 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1421 mov ebp, esp */
  EBP = (ESP);
  /* 111b1423 push ecx */
  push32((uint32_t)(ECX));
  /* 111b1424 mov eax, dword ptr [0x111d18dc] */
  EAX = (r32((uint32_t)(0x111d18dc)));
  /* 111b1429 push eax */
  push32((uint32_t)(EAX));
  /* 111b142a call 0x111a81e0 */
  push32(0x111b142fu); f_111a81e0();
  /* 111b142f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1432 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b1434 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1437 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 111b143a mov dword ptr [0x111d18d8], ecx */
  w32((uint32_t)(0x111d18d8), (ECX));
  /* 111b1440 mov edx, dword ptr [0x111d18e0] */
  EDX = (r32((uint32_t)(0x111d18e0)));
  /* 111b1446 push edx */
  push32((uint32_t)(EDX));
  /* 111b1447 call 0x111a81e0 */
  push32(0x111b144cu); f_111a81e0();
  /* 111b144c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b144f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b1451 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1454 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 111b1457 mov dword ptr [0x111d18d0], ecx */
  w32((uint32_t)(0x111d18d0), (ECX));
  /* 111b145d mov dword ptr [0x111d18cc], 0 */
  w32((uint32_t)(0x111d18cc), (0x0u));
  /* 111b1467 cmp dword ptr [0x111d18d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b146e je 0x111b1479 */
  if (C.zf) goto L_111b1479;
  /* 111b1470 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 111b1477 jmp 0x111b148b */
  goto L_111b148b;
L_111b1479:;
  /* 111b1479 mov edx, dword ptr [0x111d18dc] */
  EDX = (r32((uint32_t)(0x111d18dc)));
  /* 111b147f push edx */
  push32((uint32_t)(EDX));
  /* 111b1480 call 0x111b1ec0 */
  push32(0x111b1485u); f_111b1ec0();
  /* 111b1485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1488 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111b148b:;
  /* 111b148b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b148e mov dword ptr [0x111d18d4], eax */
  w32((uint32_t)(0x111d18d4), (EAX));
  /* 111b1493 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b1495 push 0x111b14e0 */
  push32((uint32_t)(0x111b14e0u));
  /* 111b149a call dword ptr [0x111d42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42f4))), 0x111b14a0u);
  /* 111b14a0 mov ecx, dword ptr [0x111d18e4] */
  ECX = (r32((uint32_t)(0x111d18e4)));
  /* 111b14a6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 111b14ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b14ae je 0x111b14cc */
  if (C.zf) goto L_111b14cc;
  /* 111b14b0 mov edx, dword ptr [0x111d18e4] */
  EDX = (r32((uint32_t)(0x111d18e4)));
  /* 111b14b6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 111b14bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b14be je 0x111b14cc */
  if (C.zf) goto L_111b14cc;
  /* 111b14c0 mov eax, dword ptr [0x111d18e4] */
  EAX = (r32((uint32_t)(0x111d18e4)));
  /* 111b14c5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 111b14c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b14ca jne 0x111b14d6 */
  if (!C.zf) goto L_111b14d6;
L_111b14cc:;
  /* 111b14cc mov dword ptr [0x111d18e4], 0 */
  w32((uint32_t)(0x111d18e4), (0x0u));
L_111b14d6:;
  /* 111b14d6 mov esp, ebp */
  ESP = (EBP);
  /* 111b14d8 pop ebp */
  EBP = (pop32());
  /* 111b14d9 ret  */
  ESPCHK(0x111b1420u, _esp0);
  ESP += 4; return;
}

/* FUN_100114e0 @ 0x111b14e0 (804 bytes, 220 insns) */
void f_111b14e0(void) {
  FTRACE(0x111b14e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b14e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b14e1 mov ebp, esp */
  EBP = (ESP);
  /* 111b14e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b14e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b14e9 push eax */
  push32((uint32_t)(EAX));
  /* 111b14ea call 0x111b1e40 */
  push32(0x111b14efu); f_111b1e40();
  /* 111b14ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b14f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 111b14f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 111b14f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 111b14fa push ecx */
  push32((uint32_t)(ECX));
  /* 111b14fb mov edx, dword ptr [0x111d18d0] */
  EDX = (r32((uint32_t)(0x111d18d0)));
  /* 111b1501 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 111b1503 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1505 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 111b150b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1511 push edx */
  push32((uint32_t)(EDX));
  /* 111b1512 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b1515 push eax */
  push32((uint32_t)(EAX));
  /* 111b1516 call dword ptr [0x111d18ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d18ec))), 0x111b151cu);
  /* 111b151c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b151e jne 0x111b1534 */
  if (!C.zf) goto L_111b1534;
  /* 111b1520 mov dword ptr [0x111d18e4], 0 */
  w32((uint32_t)(0x111d18e4), (0x0u));
  /* 111b152a mov eax, 1 */
  EAX = (0x1u);
  /* 111b152f jmp 0x111b17fe */
  goto L_111b17fe;
L_111b1534:;
  /* 111b1534 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 111b1537 push ecx */
  push32((uint32_t)(ECX));
  /* 111b1538 mov edx, dword ptr [0x111d18e0] */
  EDX = (r32((uint32_t)(0x111d18e0)));
  /* 111b153e push edx */
  push32((uint32_t)(EDX));
  /* 111b153f call 0x111b3a80 */
  push32(0x111b1544u); f_111b3a80();
  /* 111b1544 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1547 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b1549 jne 0x111b166f */
  if (!C.zf) goto L_111b166f;
  /* 111b154f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 111b1551 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 111b1554 push eax */
  push32((uint32_t)(EAX));
  /* 111b1555 mov ecx, dword ptr [0x111d18d8] */
  ECX = (r32((uint32_t)(0x111d18d8)));
  /* 111b155b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111b155d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b155f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 111b1565 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b156b push ecx */
  push32((uint32_t)(ECX));
  /* 111b156c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b156f push edx */
  push32((uint32_t)(EDX));
  /* 111b1570 call dword ptr [0x111d18ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d18ec))), 0x111b1576u);
  /* 111b1576 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b1578 jne 0x111b158e */
  if (!C.zf) goto L_111b158e;
  /* 111b157a mov dword ptr [0x111d18e4], 0 */
  w32((uint32_t)(0x111d18e4), (0x0u));
  /* 111b1584 mov eax, 1 */
  EAX = (0x1u);
  /* 111b1589 jmp 0x111b17fe */
  goto L_111b17fe;
L_111b158e:;
  /* 111b158e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 111b1591 push eax */
  push32((uint32_t)(EAX));
  /* 111b1592 mov ecx, dword ptr [0x111d18dc] */
  ECX = (r32((uint32_t)(0x111d18dc)));
  /* 111b1598 push ecx */
  push32((uint32_t)(ECX));
  /* 111b1599 call 0x111b3a80 */
  push32(0x111b159eu); f_111b3a80();
  /* 111b159e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b15a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b15a3 jne 0x111b15d0 */
  if (!C.zf) goto L_111b15d0;
  /* 111b15a5 mov edx, dword ptr [0x111d18e4] */
  EDX = (r32((uint32_t)(0x111d18e4)));
  /* 111b15ab or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 111b15b1 mov dword ptr [0x111d18e4], edx */
  w32((uint32_t)(0x111d18e4), (EDX));
  /* 111b15b7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b15ba mov dword ptr [0x111d18e8], eax */
  w32((uint32_t)(0x111d18e8), (EAX));
  /* 111b15bf mov ecx, dword ptr [0x111d18e8] */
  ECX = (r32((uint32_t)(0x111d18e8)));
  /* 111b15c5 mov dword ptr [0x111d18cc], ecx */
  w32((uint32_t)(0x111d18cc), (ECX));
  /* 111b15cb jmp 0x111b166f */
  goto L_111b166f;
L_111b15d0:;
  /* 111b15d0 mov edx, dword ptr [0x111d18e4] */
  EDX = (r32((uint32_t)(0x111d18e4)));
  /* 111b15d6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 111b15d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b15db jne 0x111b166f */
  if (!C.zf) goto L_111b166f;
  /* 111b15e1 cmp dword ptr [0x111d18d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b15e8 je 0x111b163d */
  if (C.zf) goto L_111b163d;
  /* 111b15ea mov eax, dword ptr [0x111d18d4] */
  EAX = (r32((uint32_t)(0x111d18d4)));
  /* 111b15ef push eax */
  push32((uint32_t)(EAX));
  /* 111b15f0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 111b15f3 push ecx */
  push32((uint32_t)(ECX));
  /* 111b15f4 mov edx, dword ptr [0x111d18dc] */
  EDX = (r32((uint32_t)(0x111d18dc)));
  /* 111b15fa push edx */
  push32((uint32_t)(EDX));
  /* 111b15fb call 0x111b3b50 */
  push32(0x111b1600u); f_111b3b50();
  /* 111b1600 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1603 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b1605 jne 0x111b163d */
  if (!C.zf) goto L_111b163d;
  /* 111b1607 mov eax, dword ptr [0x111d18e4] */
  EAX = (r32((uint32_t)(0x111d18e4)));
  /* 111b160c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 111b160e mov dword ptr [0x111d18e4], eax */
  w32((uint32_t)(0x111d18e4), (EAX));
  /* 111b1613 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b1616 mov dword ptr [0x111d18e8], ecx */
  w32((uint32_t)(0x111d18e8), (ECX));
  /* 111b161c mov edx, dword ptr [0x111d18dc] */
  EDX = (r32((uint32_t)(0x111d18dc)));
  /* 111b1622 push edx */
  push32((uint32_t)(EDX));
  /* 111b1623 call 0x111a81e0 */
  push32(0x111b1628u); f_111a81e0();
  /* 111b1628 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b162b cmp eax, dword ptr [0x111d18d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d18d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1631 jne 0x111b163b */
  if (!C.zf) goto L_111b163b;
  /* 111b1633 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b1636 mov dword ptr [0x111d18cc], eax */
  w32((uint32_t)(0x111d18cc), (EAX));
L_111b163b:;
  /* 111b163b jmp 0x111b166f */
  goto L_111b166f;
L_111b163d:;
  /* 111b163d mov ecx, dword ptr [0x111d18e4] */
  ECX = (r32((uint32_t)(0x111d18e4)));
  /* 111b1643 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 111b1646 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b1648 jne 0x111b166f */
  if (!C.zf) goto L_111b166f;
  /* 111b164a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b164d push edx */
  push32((uint32_t)(EDX));
  /* 111b164e call 0x111b1b80 */
  push32(0x111b1653u); f_111b1b80();
  /* 111b1653 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1656 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b1658 je 0x111b166f */
  if (C.zf) goto L_111b166f;
  /* 111b165a mov eax, dword ptr [0x111d18e4] */
  EAX = (r32((uint32_t)(0x111d18e4)));
  /* 111b165f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 111b1661 mov dword ptr [0x111d18e4], eax */
  w32((uint32_t)(0x111d18e4), (EAX));
  /* 111b1666 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b1669 mov dword ptr [0x111d18e8], ecx */
  w32((uint32_t)(0x111d18e8), (ECX));
L_111b166f:;
  /* 111b166f mov edx, dword ptr [0x111d18e4] */
  EDX = (r32((uint32_t)(0x111d18e4)));
  /* 111b1675 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 111b167b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1681 je 0x111b17f1 */
  if (C.zf) goto L_111b17f1;
  /* 111b1687 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 111b1689 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 111b168c push eax */
  push32((uint32_t)(EAX));
  /* 111b168d mov ecx, dword ptr [0x111d18d8] */
  ECX = (r32((uint32_t)(0x111d18d8)));
  /* 111b1693 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111b1695 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1697 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 111b169d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b16a3 push ecx */
  push32((uint32_t)(ECX));
  /* 111b16a4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b16a7 push edx */
  push32((uint32_t)(EDX));
  /* 111b16a8 call dword ptr [0x111d18ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d18ec))), 0x111b16aeu);
  /* 111b16ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b16b0 jne 0x111b16c6 */
  if (!C.zf) goto L_111b16c6;
  /* 111b16b2 mov dword ptr [0x111d18e4], 0 */
  w32((uint32_t)(0x111d18e4), (0x0u));
  /* 111b16bc mov eax, 1 */
  EAX = (0x1u);
  /* 111b16c1 jmp 0x111b17fe */
  goto L_111b17fe;
L_111b16c6:;
  /* 111b16c6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 111b16c9 push eax */
  push32((uint32_t)(EAX));
  /* 111b16ca mov ecx, dword ptr [0x111d18dc] */
  ECX = (r32((uint32_t)(0x111d18dc)));
  /* 111b16d0 push ecx */
  push32((uint32_t)(ECX));
  /* 111b16d1 call 0x111b3a80 */
  push32(0x111b16d6u); f_111b3a80();
  /* 111b16d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b16d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b16db jne 0x111b1790 */
  if (!C.zf) goto L_111b1790;
  /* 111b16e1 mov edx, dword ptr [0x111d18e4] */
  EDX = (r32((uint32_t)(0x111d18e4)));
  /* 111b16e7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 111b16ea mov dword ptr [0x111d18e4], edx */
  w32((uint32_t)(0x111d18e4), (EDX));
  /* 111b16f0 cmp dword ptr [0x111d18d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b16f7 je 0x111b171a */
  if (C.zf) goto L_111b171a;
  /* 111b16f9 mov eax, dword ptr [0x111d18e4] */
  EAX = (r32((uint32_t)(0x111d18e4)));
  /* 111b16fe or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 111b1701 mov dword ptr [0x111d18e4], eax */
  w32((uint32_t)(0x111d18e4), (EAX));
  /* 111b1706 cmp dword ptr [0x111d18cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b170d jne 0x111b1718 */
  if (!C.zf) goto L_111b1718;
  /* 111b170f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b1712 mov dword ptr [0x111d18cc], ecx */
  w32((uint32_t)(0x111d18cc), (ECX));
L_111b1718:;
  /* 111b1718 jmp 0x111b178e */
  goto L_111b178e;
L_111b171a:;
  /* 111b171a cmp dword ptr [0x111d18d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1721 je 0x111b176f */
  if (C.zf) goto L_111b176f;
  /* 111b1723 mov edx, dword ptr [0x111d18dc] */
  EDX = (r32((uint32_t)(0x111d18dc)));
  /* 111b1729 push edx */
  push32((uint32_t)(EDX));
  /* 111b172a call 0x111a81e0 */
  push32(0x111b172fu); f_111a81e0();
  /* 111b172f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1732 cmp eax, dword ptr [0x111d18d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d18d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1738 jne 0x111b176f */
  if (!C.zf) goto L_111b176f;
  /* 111b173a push 1 */
  push32((uint32_t)(0x1u));
  /* 111b173c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b173f push eax */
  push32((uint32_t)(EAX));
  /* 111b1740 call 0x111b1bd0 */
  push32(0x111b1745u); f_111b1bd0();
  /* 111b1745 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1748 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b174a je 0x111b176d */
  if (C.zf) goto L_111b176d;
  /* 111b174c mov ecx, dword ptr [0x111d18e4] */
  ECX = (r32((uint32_t)(0x111d18e4)));
  /* 111b1752 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 111b1755 mov dword ptr [0x111d18e4], ecx */
  w32((uint32_t)(0x111d18e4), (ECX));
  /* 111b175b cmp dword ptr [0x111d18cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1762 jne 0x111b176d */
  if (!C.zf) goto L_111b176d;
  /* 111b1764 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b1767 mov dword ptr [0x111d18cc], edx */
  w32((uint32_t)(0x111d18cc), (EDX));
L_111b176d:;
  /* 111b176d jmp 0x111b178e */
  goto L_111b178e;
L_111b176f:;
  /* 111b176f mov eax, dword ptr [0x111d18e4] */
  EAX = (r32((uint32_t)(0x111d18e4)));
  /* 111b1774 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 111b1777 mov dword ptr [0x111d18e4], eax */
  w32((uint32_t)(0x111d18e4), (EAX));
  /* 111b177c cmp dword ptr [0x111d18cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1783 jne 0x111b178e */
  if (!C.zf) goto L_111b178e;
  /* 111b1785 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b1788 mov dword ptr [0x111d18cc], ecx */
  w32((uint32_t)(0x111d18cc), (ECX));
L_111b178e:;
  /* 111b178e jmp 0x111b17f1 */
  goto L_111b17f1;
L_111b1790:;
  /* 111b1790 cmp dword ptr [0x111d18d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1797 jne 0x111b17f1 */
  if (!C.zf) goto L_111b17f1;
  /* 111b1799 cmp dword ptr [0x111d18d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b17a0 je 0x111b17f1 */
  if (C.zf) goto L_111b17f1;
  /* 111b17a2 mov edx, dword ptr [0x111d18d4] */
  EDX = (r32((uint32_t)(0x111d18d4)));
  /* 111b17a8 push edx */
  push32((uint32_t)(EDX));
  /* 111b17a9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 111b17ac push eax */
  push32((uint32_t)(EAX));
  /* 111b17ad mov ecx, dword ptr [0x111d18dc] */
  ECX = (r32((uint32_t)(0x111d18dc)));
  /* 111b17b3 push ecx */
  push32((uint32_t)(ECX));
  /* 111b17b4 call 0x111b3b50 */
  push32(0x111b17b9u); f_111b3b50();
  /* 111b17b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b17bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b17be jne 0x111b17f1 */
  if (!C.zf) goto L_111b17f1;
  /* 111b17c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b17c2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b17c5 push edx */
  push32((uint32_t)(EDX));
  /* 111b17c6 call 0x111b1bd0 */
  push32(0x111b17cbu); f_111b1bd0();
  /* 111b17cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b17ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b17d0 je 0x111b17f1 */
  if (C.zf) goto L_111b17f1;
  /* 111b17d2 mov eax, dword ptr [0x111d18e4] */
  EAX = (r32((uint32_t)(0x111d18e4)));
  /* 111b17d7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 111b17da mov dword ptr [0x111d18e4], eax */
  w32((uint32_t)(0x111d18e4), (EAX));
  /* 111b17df cmp dword ptr [0x111d18cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b17e6 jne 0x111b17f1 */
  if (!C.zf) goto L_111b17f1;
  /* 111b17e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b17eb mov dword ptr [0x111d18cc], ecx */
  w32((uint32_t)(0x111d18cc), (ECX));
L_111b17f1:;
  /* 111b17f1 mov eax, dword ptr [0x111d18e4] */
  EAX = (r32((uint32_t)(0x111d18e4)));
  /* 111b17f6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 111b17f9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111b17fb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b17fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_111b17fe:;
  /* 111b17fe mov esp, ebp */
  ESP = (EBP);
  /* 111b1800 pop ebp */
  EBP = (pop32());
  /* 111b1801 ret 4 */
  ESPCHK(0x111b14e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10011810 @ 0x111b1810 (116 bytes, 33 insns) */
void f_111b1810(void) {
  FTRACE(0x111b1810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1810 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1811 mov ebp, esp */
  EBP = (ESP);
  /* 111b1813 push ecx */
  push32((uint32_t)(ECX));
  /* 111b1814 mov eax, dword ptr [0x111d18dc] */
  EAX = (r32((uint32_t)(0x111d18dc)));
  /* 111b1819 push eax */
  push32((uint32_t)(EAX));
  /* 111b181a call 0x111a81e0 */
  push32(0x111b181fu); f_111a81e0();
  /* 111b181f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1822 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b1824 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1827 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 111b182a mov dword ptr [0x111d18d8], ecx */
  w32((uint32_t)(0x111d18d8), (ECX));
  /* 111b1830 cmp dword ptr [0x111d18d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1837 je 0x111b1842 */
  if (C.zf) goto L_111b1842;
  /* 111b1839 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 111b1840 jmp 0x111b1854 */
  goto L_111b1854;
L_111b1842:;
  /* 111b1842 mov edx, dword ptr [0x111d18dc] */
  EDX = (r32((uint32_t)(0x111d18dc)));
  /* 111b1848 push edx */
  push32((uint32_t)(EDX));
  /* 111b1849 call 0x111b1ec0 */
  push32(0x111b184eu); f_111b1ec0();
  /* 111b184e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1851 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111b1854:;
  /* 111b1854 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b1857 mov dword ptr [0x111d18d4], eax */
  w32((uint32_t)(0x111d18d4), (EAX));
  /* 111b185c push 1 */
  push32((uint32_t)(0x1u));
  /* 111b185e push 0x111b1890 */
  push32((uint32_t)(0x111b1890u));
  /* 111b1863 call dword ptr [0x111d42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42f4))), 0x111b1869u);
  /* 111b1869 mov ecx, dword ptr [0x111d18e4] */
  ECX = (r32((uint32_t)(0x111d18e4)));
  /* 111b186f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 111b1872 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b1874 jne 0x111b1880 */
  if (!C.zf) goto L_111b1880;
  /* 111b1876 mov dword ptr [0x111d18e4], 0 */
  w32((uint32_t)(0x111d18e4), (0x0u));
L_111b1880:;
  /* 111b1880 mov esp, ebp */
  ESP = (EBP);
  /* 111b1882 pop ebp */
  EBP = (pop32());
  /* 111b1883 ret  */
  ESPCHK(0x111b1810u, _esp0);
  ESP += 4; return;
}

/* FUN_10011890 @ 0x111b1890 (287 bytes, 86 insns) */
void f_111b1890(void) {
  FTRACE(0x111b1890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1890 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1891 mov ebp, esp */
  EBP = (ESP);
  /* 111b1893 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1896 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1899 push eax */
  push32((uint32_t)(EAX));
  /* 111b189a call 0x111b1e40 */
  push32(0x111b189fu); f_111b1e40();
  /* 111b189f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b18a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 111b18a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 111b18a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 111b18aa push ecx */
  push32((uint32_t)(ECX));
  /* 111b18ab mov edx, dword ptr [0x111d18d8] */
  EDX = (r32((uint32_t)(0x111d18d8)));
  /* 111b18b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 111b18b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b18b5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 111b18bb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b18c1 push edx */
  push32((uint32_t)(EDX));
  /* 111b18c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b18c5 push eax */
  push32((uint32_t)(EAX));
  /* 111b18c6 call dword ptr [0x111d18ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d18ec))), 0x111b18ccu);
  /* 111b18cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b18ce jne 0x111b18e4 */
  if (!C.zf) goto L_111b18e4;
  /* 111b18d0 mov dword ptr [0x111d18e4], 0 */
  w32((uint32_t)(0x111d18e4), (0x0u));
  /* 111b18da mov eax, 1 */
  EAX = (0x1u);
  /* 111b18df jmp 0x111b19a9 */
  goto L_111b19a9;
L_111b18e4:;
  /* 111b18e4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 111b18e7 push ecx */
  push32((uint32_t)(ECX));
  /* 111b18e8 mov edx, dword ptr [0x111d18dc] */
  EDX = (r32((uint32_t)(0x111d18dc)));
  /* 111b18ee push edx */
  push32((uint32_t)(EDX));
  /* 111b18ef call 0x111b3a80 */
  push32(0x111b18f4u); f_111b3a80();
  /* 111b18f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b18f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b18f9 jne 0x111b1939 */
  if (!C.zf) goto L_111b1939;
  /* 111b18fb cmp dword ptr [0x111d18d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1902 jne 0x111b1916 */
  if (!C.zf) goto L_111b1916;
  /* 111b1904 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b1906 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b1909 push eax */
  push32((uint32_t)(EAX));
  /* 111b190a call 0x111b1bd0 */
  push32(0x111b190fu); f_111b1bd0();
  /* 111b190f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1912 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b1914 je 0x111b1937 */
  if (C.zf) goto L_111b1937;
L_111b1916:;
  /* 111b1916 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b1919 mov dword ptr [0x111d18e8], ecx */
  w32((uint32_t)(0x111d18e8), (ECX));
  /* 111b191f mov edx, dword ptr [0x111d18e8] */
  EDX = (r32((uint32_t)(0x111d18e8)));
  /* 111b1925 mov dword ptr [0x111d18cc], edx */
  w32((uint32_t)(0x111d18cc), (EDX));
  /* 111b192b mov eax, dword ptr [0x111d18e4] */
  EAX = (r32((uint32_t)(0x111d18e4)));
  /* 111b1930 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 111b1932 mov dword ptr [0x111d18e4], eax */
  w32((uint32_t)(0x111d18e4), (EAX));
L_111b1937:;
  /* 111b1937 jmp 0x111b199c */
  goto L_111b199c;
L_111b1939:;
  /* 111b1939 cmp dword ptr [0x111d18d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1940 jne 0x111b199c */
  if (!C.zf) goto L_111b199c;
  /* 111b1942 cmp dword ptr [0x111d18d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1949 je 0x111b199c */
  if (C.zf) goto L_111b199c;
  /* 111b194b mov ecx, dword ptr [0x111d18d4] */
  ECX = (r32((uint32_t)(0x111d18d4)));
  /* 111b1951 push ecx */
  push32((uint32_t)(ECX));
  /* 111b1952 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 111b1955 push edx */
  push32((uint32_t)(EDX));
  /* 111b1956 mov eax, dword ptr [0x111d18dc] */
  EAX = (r32((uint32_t)(0x111d18dc)));
  /* 111b195b push eax */
  push32((uint32_t)(EAX));
  /* 111b195c call 0x111b3b50 */
  push32(0x111b1961u); f_111b3b50();
  /* 111b1961 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1964 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b1966 jne 0x111b199c */
  if (!C.zf) goto L_111b199c;
  /* 111b1968 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b196a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b196d push ecx */
  push32((uint32_t)(ECX));
  /* 111b196e call 0x111b1bd0 */
  push32(0x111b1973u); f_111b1bd0();
  /* 111b1973 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1976 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b1978 je 0x111b199c */
  if (C.zf) goto L_111b199c;
  /* 111b197a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b197d mov dword ptr [0x111d18e8], edx */
  w32((uint32_t)(0x111d18e8), (EDX));
  /* 111b1983 mov eax, dword ptr [0x111d18e8] */
  EAX = (r32((uint32_t)(0x111d18e8)));
  /* 111b1988 mov dword ptr [0x111d18cc], eax */
  w32((uint32_t)(0x111d18cc), (EAX));
  /* 111b198d mov ecx, dword ptr [0x111d18e4] */
  ECX = (r32((uint32_t)(0x111d18e4)));
  /* 111b1993 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 111b1996 mov dword ptr [0x111d18e4], ecx */
  w32((uint32_t)(0x111d18e4), (ECX));
L_111b199c:;
  /* 111b199c mov eax, dword ptr [0x111d18e4] */
  EAX = (r32((uint32_t)(0x111d18e4)));
  /* 111b19a1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 111b19a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111b19a6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b19a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_111b19a9:;
  /* 111b19a9 mov esp, ebp */
  ESP = (EBP);
  /* 111b19ab pop ebp */
  EBP = (pop32());
  /* 111b19ac ret 4 */
  ESPCHK(0x111b1890u, _esp0);
  ESP += 8; return;
}

/* FUN_100119b0 @ 0x111b19b0 (69 bytes, 20 insns) */
void f_111b19b0(void) {
  FTRACE(0x111b19b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b19b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b19b1 mov ebp, esp */
  EBP = (ESP);
  /* 111b19b3 mov eax, dword ptr [0x111d18e0] */
  EAX = (r32((uint32_t)(0x111d18e0)));
  /* 111b19b8 push eax */
  push32((uint32_t)(EAX));
  /* 111b19b9 call 0x111a81e0 */
  push32(0x111b19beu); f_111a81e0();
  /* 111b19be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b19c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b19c3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b19c6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 111b19c9 mov dword ptr [0x111d18d0], ecx */
  w32((uint32_t)(0x111d18d0), (ECX));
  /* 111b19cf push 1 */
  push32((uint32_t)(0x1u));
  /* 111b19d1 push 0x111b1a00 */
  push32((uint32_t)(0x111b1a00u));
  /* 111b19d6 call dword ptr [0x111d42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42f4))), 0x111b19dcu);
  /* 111b19dc mov edx, dword ptr [0x111d18e4] */
  EDX = (r32((uint32_t)(0x111d18e4)));
  /* 111b19e2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 111b19e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b19e7 jne 0x111b19f3 */
  if (!C.zf) goto L_111b19f3;
  /* 111b19e9 mov dword ptr [0x111d18e4], 0 */
  w32((uint32_t)(0x111d18e4), (0x0u));
L_111b19f3:;
  /* 111b19f3 pop ebp */
  EBP = (pop32());
  /* 111b19f4 ret  */
  ESPCHK(0x111b19b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a00 @ 0x111b1a00 (172 bytes, 54 insns) */
void f_111b1a00(void) {
  FTRACE(0x111b1a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1a00 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1a01 mov ebp, esp */
  EBP = (ESP);
  /* 111b1a03 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1a06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1a09 push eax */
  push32((uint32_t)(EAX));
  /* 111b1a0a call 0x111b1e40 */
  push32(0x111b1a0fu); f_111b1e40();
  /* 111b1a0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1a12 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 111b1a15 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 111b1a17 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 111b1a1a push ecx */
  push32((uint32_t)(ECX));
  /* 111b1a1b mov edx, dword ptr [0x111d18d0] */
  EDX = (r32((uint32_t)(0x111d18d0)));
  /* 111b1a21 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 111b1a23 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1a25 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 111b1a2b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1a31 push edx */
  push32((uint32_t)(EDX));
  /* 111b1a32 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b1a35 push eax */
  push32((uint32_t)(EAX));
  /* 111b1a36 call dword ptr [0x111d18ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d18ec))), 0x111b1a3cu);
  /* 111b1a3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b1a3e jne 0x111b1a51 */
  if (!C.zf) goto L_111b1a51;
  /* 111b1a40 mov dword ptr [0x111d18e4], 0 */
  w32((uint32_t)(0x111d18e4), (0x0u));
  /* 111b1a4a mov eax, 1 */
  EAX = (0x1u);
  /* 111b1a4f jmp 0x111b1aa6 */
  goto L_111b1aa6;
L_111b1a51:;
  /* 111b1a51 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 111b1a54 push ecx */
  push32((uint32_t)(ECX));
  /* 111b1a55 mov edx, dword ptr [0x111d18e0] */
  EDX = (r32((uint32_t)(0x111d18e0)));
  /* 111b1a5b push edx */
  push32((uint32_t)(EDX));
  /* 111b1a5c call 0x111b3a80 */
  push32(0x111b1a61u); f_111b3a80();
  /* 111b1a61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1a64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b1a66 jne 0x111b1a99 */
  if (!C.zf) goto L_111b1a99;
  /* 111b1a68 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b1a6b push eax */
  push32((uint32_t)(EAX));
  /* 111b1a6c call 0x111b1b80 */
  push32(0x111b1a71u); f_111b1b80();
  /* 111b1a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1a74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b1a76 je 0x111b1a99 */
  if (C.zf) goto L_111b1a99;
  /* 111b1a78 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111b1a7b mov dword ptr [0x111d18e8], ecx */
  w32((uint32_t)(0x111d18e8), (ECX));
  /* 111b1a81 mov edx, dword ptr [0x111d18e8] */
  EDX = (r32((uint32_t)(0x111d18e8)));
  /* 111b1a87 mov dword ptr [0x111d18cc], edx */
  w32((uint32_t)(0x111d18cc), (EDX));
  /* 111b1a8d mov eax, dword ptr [0x111d18e4] */
  EAX = (r32((uint32_t)(0x111d18e4)));
  /* 111b1a92 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 111b1a94 mov dword ptr [0x111d18e4], eax */
  w32((uint32_t)(0x111d18e4), (EAX));
L_111b1a99:;
  /* 111b1a99 mov eax, dword ptr [0x111d18e4] */
  EAX = (r32((uint32_t)(0x111d18e4)));
  /* 111b1a9e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 111b1aa1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111b1aa3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1aa5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_111b1aa6:;
  /* 111b1aa6 mov esp, ebp */
  ESP = (EBP);
  /* 111b1aa8 pop ebp */
  EBP = (pop32());
  /* 111b1aa9 ret 4 */
  ESPCHK(0x111b1a00u, _esp0);
  ESP += 8; return;
}

/* FUN_10011ab0 @ 0x111b1ab0 (43 bytes, 11 insns) */
void f_111b1ab0(void) {
  FTRACE(0x111b1ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1ab1 mov ebp, esp */
  EBP = (ESP);
  /* 111b1ab3 mov eax, dword ptr [0x111d18e4] */
  EAX = (r32((uint32_t)(0x111d18e4)));
  /* 111b1ab8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 111b1abd mov dword ptr [0x111d18e4], eax */
  w32((uint32_t)(0x111d18e4), (EAX));
  /* 111b1ac2 call dword ptr [0x111d42e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42e4))), 0x111b1ac8u);
  /* 111b1ac8 mov dword ptr [0x111d18e8], eax */
  w32((uint32_t)(0x111d18e8), (EAX));
  /* 111b1acd mov ecx, dword ptr [0x111d18e8] */
  ECX = (r32((uint32_t)(0x111d18e8)));
  /* 111b1ad3 mov dword ptr [0x111d18cc], ecx */
  w32((uint32_t)(0x111d18cc), (ECX));
  /* 111b1ad9 pop ebp */
  EBP = (pop32());
  /* 111b1ada ret  */
  ESPCHK(0x111b1ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ae0 @ 0x111b1ae0 (155 bytes, 57 insns) */
void f_111b1ae0(void) {
  FTRACE(0x111b1ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1ae1 mov ebp, esp */
  EBP = (ESP);
  /* 111b1ae3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1ae6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1aea je 0x111b1b0b */
  if (C.zf) goto L_111b1b0b;
  /* 111b1aec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1aef movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111b1af2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b1af4 je 0x111b1b0b */
  if (C.zf) goto L_111b1b0b;
  /* 111b1af6 push 0x111cd9bc */
  push32((uint32_t)(0x111cd9bcu));
  /* 111b1afb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1afe push edx */
  push32((uint32_t)(EDX));
  /* 111b1aff call 0x111b1040 */
  push32(0x111b1b04u); f_111b1040();
  /* 111b1b04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1b07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b1b09 jne 0x111b1b33 */
  if (!C.zf) goto L_111b1b33;
L_111b1b0b:;
  /* 111b1b0b push 8 */
  push32((uint32_t)(0x8u));
  /* 111b1b0d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 111b1b10 push eax */
  push32((uint32_t)(EAX));
  /* 111b1b11 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 111b1b16 mov ecx, dword ptr [0x111d18e8] */
  ECX = (r32((uint32_t)(0x111d18e8)));
  /* 111b1b1c push ecx */
  push32((uint32_t)(ECX));
  /* 111b1b1d call dword ptr [0x111d18ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d18ec))), 0x111b1b23u);
  /* 111b1b23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b1b25 jne 0x111b1b2b */
  if (!C.zf) goto L_111b1b2b;
  /* 111b1b27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b1b29 jmp 0x111b1b77 */
  goto L_111b1b77;
L_111b1b2b:;
  /* 111b1b2b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 111b1b2e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 111b1b31 jmp 0x111b1b6b */
  goto L_111b1b6b;
L_111b1b33:;
  /* 111b1b33 push 0x111cd9b8 */
  push32((uint32_t)(0x111cd9b8u));
  /* 111b1b38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1b3b push eax */
  push32((uint32_t)(EAX));
  /* 111b1b3c call 0x111b1040 */
  push32(0x111b1b41u); f_111b1040();
  /* 111b1b41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1b44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b1b46 jne 0x111b1b6b */
  if (!C.zf) goto L_111b1b6b;
  /* 111b1b48 push 8 */
  push32((uint32_t)(0x8u));
  /* 111b1b4a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 111b1b4d push ecx */
  push32((uint32_t)(ECX));
  /* 111b1b4e push 0xb */
  push32((uint32_t)(0xbu));
  /* 111b1b50 mov edx, dword ptr [0x111d18e8] */
  EDX = (r32((uint32_t)(0x111d18e8)));
  /* 111b1b56 push edx */
  push32((uint32_t)(EDX));
  /* 111b1b57 call dword ptr [0x111d18ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d18ec))), 0x111b1b5du);
  /* 111b1b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b1b5f jne 0x111b1b65 */
  if (!C.zf) goto L_111b1b65;
  /* 111b1b61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b1b63 jmp 0x111b1b77 */
  goto L_111b1b77;
L_111b1b65:;
  /* 111b1b65 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 111b1b68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_111b1b6b:;
  /* 111b1b6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1b6e push ecx */
  push32((uint32_t)(ECX));
  /* 111b1b6f call 0x111b3c60 */
  push32(0x111b1b74u); f_111b3c60();
  /* 111b1b74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b1b77:;
  /* 111b1b77 mov esp, ebp */
  ESP = (EBP);
  /* 111b1b79 pop ebp */
  EBP = (pop32());
  /* 111b1b7a ret  */
  ESPCHK(0x111b1ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b80 @ 0x111b1b80 (79 bytes, 26 insns) */
void f_111b1b80(void) {
  FTRACE(0x111b1b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1b80 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1b81 mov ebp, esp */
  EBP = (ESP);
  /* 111b1b83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1b86 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 111b1b8a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 111b1b8e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111b1b95 jmp 0x111b1ba0 */
  goto L_111b1ba0;
L_111b1b97:;
  /* 111b1b97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b1b9a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1b9d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_111b1ba0:;
  /* 111b1ba0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1ba4 jae 0x111b1bc6 */
  if (!C.cf) goto L_111b1bc6;
  /* 111b1ba6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b1ba9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111b1baf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b1bb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b1bb4 mov cx, word ptr [eax*2 + 0x111d09c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x111d09c4)));
  /* 111b1bbc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1bbe jne 0x111b1bc4 */
  if (!C.zf) goto L_111b1bc4;
  /* 111b1bc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b1bc2 jmp 0x111b1bcb */
  goto L_111b1bcb;
L_111b1bc4:;
  /* 111b1bc4 jmp 0x111b1b97 */
  goto L_111b1b97;
L_111b1bc6:;
  /* 111b1bc6 mov eax, 1 */
  EAX = (0x1u);
L_111b1bcb:;
  /* 111b1bcb mov esp, ebp */
  ESP = (EBP);
  /* 111b1bcd pop ebp */
  EBP = (pop32());
  /* 111b1bce ret  */
  ESPCHK(0x111b1b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011bd0 @ 0x111b1bd0 (135 bytes, 48 insns) */
void f_111b1bd0(void) {
  FTRACE(0x111b1bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1bd1 mov ebp, esp */
  EBP = (ESP);
  /* 111b1bd3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1bd6 push esi */
  push32((uint32_t)(ESI));
  /* 111b1bd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1bda and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b1bdf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b1be4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b1be9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 111b1bec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b1bf1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b1bf4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 111b1bf6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 111b1bf9 push ecx */
  push32((uint32_t)(ECX));
  /* 111b1bfa push 1 */
  push32((uint32_t)(0x1u));
  /* 111b1bfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b1bff push edx */
  push32((uint32_t)(EDX));
  /* 111b1c00 call dword ptr [0x111d18ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d18ec))), 0x111b1c06u);
  /* 111b1c06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b1c08 jne 0x111b1c0e */
  if (!C.zf) goto L_111b1c0e;
  /* 111b1c0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b1c0c jmp 0x111b1c52 */
  goto L_111b1c52;
L_111b1c0e:;
  /* 111b1c0e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 111b1c11 push eax */
  push32((uint32_t)(EAX));
  /* 111b1c12 call 0x111b1e40 */
  push32(0x111b1c17u); f_111b1e40();
  /* 111b1c17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1c1a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1c1d je 0x111b1c4d */
  if (C.zf) goto L_111b1c4d;
  /* 111b1c1f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1c23 je 0x111b1c4d */
  if (C.zf) goto L_111b1c4d;
  /* 111b1c25 mov ecx, dword ptr [0x111d18dc] */
  ECX = (r32((uint32_t)(0x111d18dc)));
  /* 111b1c2b push ecx */
  push32((uint32_t)(ECX));
  /* 111b1c2c call 0x111b1ec0 */
  push32(0x111b1c31u); f_111b1ec0();
  /* 111b1c31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1c34 mov esi, eax */
  ESI = (EAX);
  /* 111b1c36 mov edx, dword ptr [0x111d18dc] */
  EDX = (r32((uint32_t)(0x111d18dc)));
  /* 111b1c3c push edx */
  push32((uint32_t)(EDX));
  /* 111b1c3d call 0x111a81e0 */
  push32(0x111b1c42u); f_111a81e0();
  /* 111b1c42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1c45 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1c47 jne 0x111b1c4d */
  if (!C.zf) goto L_111b1c4d;
  /* 111b1c49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b1c4b jmp 0x111b1c52 */
  goto L_111b1c52;
L_111b1c4d:;
  /* 111b1c4d mov eax, 1 */
  EAX = (0x1u);
L_111b1c52:;
  /* 111b1c52 pop esi */
  ESI = (pop32());
  /* 111b1c53 mov esp, ebp */
  ESP = (EBP);
  /* 111b1c55 pop ebp */
  EBP = (pop32());
  /* 111b1c56 ret  */
  ESPCHK(0x111b1bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c60 @ 0x111b1c60 (77 bytes, 18 insns) */
void f_111b1c60(void) {
  FTRACE(0x111b1c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1c60 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1c61 mov ebp, esp */
  EBP = (ESP);
  /* 111b1c63 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1c69 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 111b1c73 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 111b1c79 push eax */
  push32((uint32_t)(EAX));
  /* 111b1c7a call dword ptr [0x111d42e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42e0))), 0x111b1c80u);
  /* 111b1c80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b1c82 je 0x111b1c99 */
  if (C.zf) goto L_111b1c99;
  /* 111b1c84 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1c8b jne 0x111b1c99 */
  if (!C.zf) goto L_111b1c99;
  /* 111b1c8d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 111b1c97 jmp 0x111b1ca3 */
  goto L_111b1ca3;
L_111b1c99:;
  /* 111b1c99 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_111b1ca3:;
  /* 111b1ca3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 111b1ca9 mov esp, ebp */
  ESP = (EBP);
  /* 111b1cab pop ebp */
  EBP = (pop32());
  /* 111b1cac ret  */
  ESPCHK(0x111b1c60u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x111b1cb0 (388 bytes, 118 insns) */
void f_111b1cb0(void) {
  FTRACE(0x111b1cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1cb1 mov ebp, esp */
  EBP = (ESP);
  /* 111b1cb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1cb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111b1cbd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 111b1cc4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_111b1ccb:;
  /* 111b1ccb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b1cce cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1cd1 jg 0x111b1e18 */
  if ((!C.zf&&C.sf==C.of)) goto L_111b1e18;
  /* 111b1cd7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b1cda add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1cdd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111b1cde sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1ce0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111b1ce2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111b1ce5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b1ce8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b1ceb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1cee cmp edx, dword ptr [ecx + 0x111d0520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x111d0520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1cf4 jne 0x111b1dee */
  if (!C.zf) goto L_111b1dee;
  /* 111b1cfa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b1cfd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111b1d00 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1d04 ja 0x111b1d27 */
  if ((!C.cf&&!C.zf)) goto L_111b1d27;
  /* 111b1d06 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1d0a je 0x111b1d99 */
  if (C.zf) goto L_111b1d99;
  /* 111b1d10 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1d14 je 0x111b1d44 */
  if (C.zf) goto L_111b1d44;
  /* 111b1d16 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1d1a je 0x111b1d66 */
  if (C.zf) goto L_111b1d66;
  /* 111b1d1c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1d20 je 0x111b1d88 */
  if (C.zf) goto L_111b1d88;
  /* 111b1d22 jmp 0x111b1db8 */
  goto L_111b1db8;
L_111b1d27:;
  /* 111b1d27 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1d2e je 0x111b1d55 */
  if (C.zf) goto L_111b1d55;
  /* 111b1d30 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1d37 je 0x111b1d77 */
  if (C.zf) goto L_111b1d77;
  /* 111b1d39 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1d40 je 0x111b1daa */
  if (C.zf) goto L_111b1daa;
  /* 111b1d42 jmp 0x111b1db8 */
  goto L_111b1db8;
L_111b1d44:;
  /* 111b1d44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b1d47 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b1d4a add ecx, 0x111d0524 */
  { uint32_t _a=(ECX),_b=(0x111d0524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1d50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b1d53 jmp 0x111b1db8 */
  goto L_111b1db8;
L_111b1d55:;
  /* 111b1d55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b1d58 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b1d5b mov eax, dword ptr [edx + 0x111d052c] */
  EAX = (r32((uint32_t)(EDX + 0x111d052c)));
  /* 111b1d61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111b1d64 jmp 0x111b1db8 */
  goto L_111b1db8;
L_111b1d66:;
  /* 111b1d66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b1d69 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b1d6c add ecx, 0x111d0530 */
  { uint32_t _a=(ECX),_b=(0x111d0530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1d72 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b1d75 jmp 0x111b1db8 */
  goto L_111b1db8;
L_111b1d77:;
  /* 111b1d77 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b1d7a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b1d7d mov eax, dword ptr [edx + 0x111d0534] */
  EAX = (r32((uint32_t)(EDX + 0x111d0534)));
  /* 111b1d83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111b1d86 jmp 0x111b1db8 */
  goto L_111b1db8;
L_111b1d88:;
  /* 111b1d88 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b1d8b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b1d8e add ecx, 0x111d0538 */
  { uint32_t _a=(ECX),_b=(0x111d0538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1d94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b1d97 jmp 0x111b1db8 */
  goto L_111b1db8;
L_111b1d99:;
  /* 111b1d99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b1d9c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b1d9f add edx, 0x111d053c */
  { uint32_t _a=(EDX),_b=(0x111d053cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1da5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111b1da8 jmp 0x111b1db8 */
  goto L_111b1db8;
L_111b1daa:;
  /* 111b1daa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b1dad imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b1db0 add eax, 0x111d0544 */
  { uint32_t _a=(EAX),_b=(0x111d0544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1db5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111b1db8:;
  /* 111b1db8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1dbc je 0x111b1dc4 */
  if (C.zf) goto L_111b1dc4;
  /* 111b1dbe cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1dc2 jge 0x111b1dc6 */
  if ((C.sf==C.of)) goto L_111b1dc6;
L_111b1dc4:;
  /* 111b1dc4 jmp 0x111b1e18 */
  goto L_111b1e18;
L_111b1dc6:;
  /* 111b1dc6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b1dc9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1dcc push ecx */
  push32((uint32_t)(ECX));
  /* 111b1dcd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b1dd0 push edx */
  push32((uint32_t)(EDX));
  /* 111b1dd1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b1dd4 push eax */
  push32((uint32_t)(EAX));
  /* 111b1dd5 call 0x111a8bd0 */
  push32(0x111b1ddau); f_111a8bd0();
  /* 111b1dda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1ddd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b1de0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1de3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 111b1de7 mov eax, 1 */
  EAX = (0x1u);
  /* 111b1dec jmp 0x111b1e2e */
  goto L_111b1e2e;
L_111b1dee:;
  /* 111b1dee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b1df1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b1df4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1df7 cmp eax, dword ptr [edx + 0x111d0520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x111d0520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1dfd jae 0x111b1e0a */
  if (!C.cf) goto L_111b1e0a;
  /* 111b1dff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b1e02 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1e05 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111b1e08 jmp 0x111b1e13 */
  goto L_111b1e13;
L_111b1e0a:;
  /* 111b1e0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b1e0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1e10 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_111b1e13:;
  /* 111b1e13 jmp 0x111b1ccb */
  goto L_111b1ccb;
L_111b1e18:;
  /* 111b1e18 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b1e1b push eax */
  push32((uint32_t)(EAX));
  /* 111b1e1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b1e1f push ecx */
  push32((uint32_t)(ECX));
  /* 111b1e20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b1e23 push edx */
  push32((uint32_t)(EDX));
  /* 111b1e24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1e27 push eax */
  push32((uint32_t)(EAX));
  /* 111b1e28 call dword ptr [0x111d42ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42ec))), 0x111b1e2eu);
L_111b1e2e:;
  /* 111b1e2e mov esp, ebp */
  ESP = (EBP);
  /* 111b1e30 pop ebp */
  EBP = (pop32());
  /* 111b1e31 ret 0x10 */
  ESPCHK(0x111b1cb0u, _esp0);
  ESP += 20; return;
}

/* FUN_10011e40 @ 0x111b1e40 (118 bytes, 42 insns) */
void f_111b1e40(void) {
  FTRACE(0x111b1e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1e40 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1e41 mov ebp, esp */
  EBP = (ESP);
  /* 111b1e43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1e46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_111b1e4d:;
  /* 111b1e4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1e50 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111b1e52 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 111b1e55 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 111b1e59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1e5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1e5f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111b1e62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b1e64 je 0x111b1eaf */
  if (C.zf) goto L_111b1eaf;
  /* 111b1e66 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 111b1e6a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1e6d jl 0x111b1e82 */
  if ((C.sf!=C.of)) goto L_111b1e82;
  /* 111b1e6f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 111b1e73 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1e76 jg 0x111b1e82 */
  if ((!C.zf&&C.sf==C.of)) goto L_111b1e82;
  /* 111b1e78 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 111b1e7b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 111b1e7d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 111b1e80 jmp 0x111b1e9c */
  goto L_111b1e9c;
L_111b1e82:;
  /* 111b1e82 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 111b1e86 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1e89 jl 0x111b1e9c */
  if ((C.sf!=C.of)) goto L_111b1e9c;
  /* 111b1e8b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 111b1e8f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1e92 jg 0x111b1e9c */
  if ((!C.zf&&C.sf==C.of)) goto L_111b1e9c;
  /* 111b1e94 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 111b1e97 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 111b1e99 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_111b1e9c:;
  /* 111b1e9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b1e9f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 111b1ea2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 111b1ea6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 111b1eaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b1ead jmp 0x111b1e4d */
  goto L_111b1e4d;
L_111b1eaf:;
  /* 111b1eaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b1eb2 mov esp, ebp */
  ESP = (EBP);
  /* 111b1eb4 pop ebp */
  EBP = (pop32());
  /* 111b1eb5 ret  */
  ESPCHK(0x111b1e40u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x111b1ec0 (101 bytes, 36 insns) */
void f_111b1ec0(void) {
  FTRACE(0x111b1ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1ec1 mov ebp, esp */
  EBP = (ESP);
  /* 111b1ec3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b1ec6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111b1ecd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1ed0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111b1ed2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 111b1ed5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1ed8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1edb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_111b1ede:;
  /* 111b1ede movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 111b1ee2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1ee5 jl 0x111b1ef0 */
  if ((C.sf!=C.of)) goto L_111b1ef0;
  /* 111b1ee7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 111b1eeb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1eee jle 0x111b1f02 */
  if ((C.zf||C.sf!=C.of)) goto L_111b1f02;
L_111b1ef0:;
  /* 111b1ef0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 111b1ef4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1ef7 jl 0x111b1f1e */
  if ((C.sf!=C.of)) goto L_111b1f1e;
  /* 111b1ef9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 111b1efd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1f00 jg 0x111b1f1e */
  if ((!C.zf&&C.sf==C.of)) goto L_111b1f1e;
L_111b1f02:;
  /* 111b1f02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b1f05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1f08 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b1f0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1f0e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b1f10 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 111b1f13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1f16 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1f19 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 111b1f1c jmp 0x111b1ede */
  goto L_111b1ede;
L_111b1f1e:;
  /* 111b1f1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b1f21 mov esp, ebp */
  ESP = (EBP);
  /* 111b1f23 pop ebp */
  EBP = (pop32());
  /* 111b1f24 ret  */
  ESPCHK(0x111b1ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f30 @ 0x111b1f30 (122 bytes, 39 insns) */
void f_111b1f30(void) {
  FTRACE(0x111b1f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1f30 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1f31 mov ebp, esp */
  EBP = (ESP);
  /* 111b1f33 push ecx */
  push32((uint32_t)(ECX));
  /* 111b1f34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1f37 cmp eax, dword ptr [0x111d317c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d317c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1f3d jae 0x111b1f61 */
  if (!C.cf) goto L_111b1f61;
  /* 111b1f3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1f42 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111b1f45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1f48 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 111b1f4b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b1f4e mov eax, dword ptr [ecx*4 + 0x111d3040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111d3040)));
  /* 111b1f55 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 111b1f5a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 111b1f5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b1f5f jne 0x111b1f7c */
  if (!C.zf) goto L_111b1f7c;
L_111b1f61:;
  /* 111b1f61 call 0x111ad280 */
  push32(0x111b1f66u); f_111ad280();
  /* 111b1f66 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111b1f6c call 0x111ad290 */
  push32(0x111b1f71u); f_111ad290();
  /* 111b1f71 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111b1f77 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b1f7a jmp 0x111b1fa6 */
  goto L_111b1fa6;
L_111b1f7c:;
  /* 111b1f7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1f7f push edx */
  push32((uint32_t)(EDX));
  /* 111b1f80 call 0x111aeaa0 */
  push32(0x111b1f85u); f_111aeaa0();
  /* 111b1f85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1f88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1f8b push eax */
  push32((uint32_t)(EAX));
  /* 111b1f8c call 0x111b1fb0 */
  push32(0x111b1f91u); f_111b1fb0();
  /* 111b1f91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1f94 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b1f97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1f9a push ecx */
  push32((uint32_t)(ECX));
  /* 111b1f9b call 0x111aeb30 */
  push32(0x111b1fa0u); f_111aeb30();
  /* 111b1fa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1fa3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_111b1fa6:;
  /* 111b1fa6 mov esp, ebp */
  ESP = (EBP);
  /* 111b1fa8 pop ebp */
  EBP = (pop32());
  /* 111b1fa9 ret  */
  ESPCHK(0x111b1f30u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x111b1fb0 (170 bytes, 59 insns) */
void f_111b1fb0(void) {
  FTRACE(0x111b1fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b1fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b1fb1 mov ebp, esp */
  EBP = (ESP);
  /* 111b1fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 111b1fb4 push esi */
  push32((uint32_t)(ESI));
  /* 111b1fb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1fb8 push eax */
  push32((uint32_t)(EAX));
  /* 111b1fb9 call 0x111ae920 */
  push32(0x111b1fbeu); f_111ae920();
  /* 111b1fbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1fc1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1fc4 je 0x111b2003 */
  if (C.zf) goto L_111b2003;
  /* 111b1fc6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1fca je 0x111b1fd2 */
  if (C.zf) goto L_111b1fd2;
  /* 111b1fcc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1fd0 jne 0x111b1fec */
  if (!C.zf) goto L_111b1fec;
L_111b1fd2:;
  /* 111b1fd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b1fd4 call 0x111ae920 */
  push32(0x111b1fd9u); f_111ae920();
  /* 111b1fd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1fdc mov esi, eax */
  ESI = (EAX);
  /* 111b1fde push 2 */
  push32((uint32_t)(0x2u));
  /* 111b1fe0 call 0x111ae920 */
  push32(0x111b1fe5u); f_111ae920();
  /* 111b1fe5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1fe8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b1fea je 0x111b2003 */
  if (C.zf) goto L_111b2003;
L_111b1fec:;
  /* 111b1fec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b1fef push ecx */
  push32((uint32_t)(ECX));
  /* 111b1ff0 call 0x111ae920 */
  push32(0x111b1ff5u); f_111ae920();
  /* 111b1ff5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b1ff8 push eax */
  push32((uint32_t)(EAX));
  /* 111b1ff9 call dword ptr [0x111d42e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42e8))), 0x111b1fffu);
  /* 111b1fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b2001 je 0x111b200c */
  if (C.zf) goto L_111b200c;
L_111b2003:;
  /* 111b2003 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111b200a jmp 0x111b2015 */
  goto L_111b2015;
L_111b200c:;
  /* 111b200c call dword ptr [0x111d43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43ac))), 0x111b2012u);
  /* 111b2012 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111b2015:;
  /* 111b2015 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b2018 push edx */
  push32((uint32_t)(EDX));
  /* 111b2019 call 0x111ae840 */
  push32(0x111b201eu); f_111ae840();
  /* 111b201e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2021 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b2024 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111b2027 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b202a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 111b202d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b2030 mov edx, dword ptr [eax*4 + 0x111d3040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111d3040)));
  /* 111b2037 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 111b203c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2040 je 0x111b2053 */
  if (C.zf) goto L_111b2053;
  /* 111b2042 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b2045 push eax */
  push32((uint32_t)(EAX));
  /* 111b2046 call 0x111ad1e0 */
  push32(0x111b204bu); f_111ad1e0();
  /* 111b204b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b204e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b2051 jmp 0x111b2055 */
  goto L_111b2055;
L_111b2053:;
  /* 111b2053 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111b2055:;
  /* 111b2055 pop esi */
  ESI = (pop32());
  /* 111b2056 mov esp, ebp */
  ESP = (EBP);
  /* 111b2058 pop ebp */
  EBP = (pop32());
  /* 111b2059 ret  */
  ESPCHK(0x111b1fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012060 @ 0x111b2060 (146 bytes, 52 insns) */
void f_111b2060(void) {
  FTRACE(0x111b2060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b2060 push ebp */
  push32((uint32_t)(EBP));
  /* 111b2061 mov ebp, esp */
  EBP = (ESP);
  /* 111b2063 push ebx */
  push32((uint32_t)(EBX));
  /* 111b2064 push esi */
  push32((uint32_t)(ESI));
  /* 111b2065 push edi */
  push32((uint32_t)(EDI));
L_111b2066:;
  /* 111b2066 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b206a jne 0x111b208a */
  if (!C.zf) goto L_111b208a;
  /* 111b206c push 0x111cd2f8 */
  push32((uint32_t)(0x111cd2f8u));
  /* 111b2071 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b2073 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 111b2075 push 0x111cd9c0 */
  push32((uint32_t)(0x111cd9c0u));
  /* 111b207a push 2 */
  push32((uint32_t)(0x2u));
  /* 111b207c call 0x111a4470 */
  push32(0x111b2081u); f_111a4470();
  /* 111b2081 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2084 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2087 jne 0x111b208a */
  if (!C.zf) goto L_111b208a;
  /* 111b2089 int3  */
  x86_unimpl("int3 @ 0x111b2089");
L_111b208a:;
  /* 111b208a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b208c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b208e jne 0x111b2066 */
  if (!C.zf) goto L_111b2066;
  /* 111b2090 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b2093 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111b2096 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 111b209c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b209e je 0x111b20ed */
  if (C.zf) goto L_111b20ed;
  /* 111b20a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b20a3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 111b20a6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 111b20a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b20ab je 0x111b20ed */
  if (C.zf) goto L_111b20ed;
  /* 111b20ad push 2 */
  push32((uint32_t)(0x2u));
  /* 111b20af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b20b2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 111b20b5 push eax */
  push32((uint32_t)(EAX));
  /* 111b20b6 call 0x111a5e40 */
  push32(0x111b20bbu); f_111a5e40();
  /* 111b20bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b20be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b20c1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111b20c4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 111b20ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b20cd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 111b20d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b20d3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 111b20d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b20dc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 111b20e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b20e6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_111b20ed:;
  /* 111b20ed pop edi */
  EDI = (pop32());
  /* 111b20ee pop esi */
  ESI = (pop32());
  /* 111b20ef pop ebx */
  EBX = (pop32());
  /* 111b20f0 pop ebp */
  EBP = (pop32());
  /* 111b20f1 ret  */
  ESPCHK(0x111b2060u, _esp0);
  ESP += 4; return;
}

/* FUN_10012100 @ 0x111b2100 (289 bytes, 97 insns) */
void f_111b2100(void) {
  FTRACE(0x111b2100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b2100 push ebp */
  push32((uint32_t)(EBP));
  /* 111b2101 mov ebp, esp */
  EBP = (ESP);
  /* 111b2103 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b2106 push esi */
  push32((uint32_t)(ESI));
  /* 111b2107 mov eax, dword ptr [0x111d0c98] */
  EAX = (r32((uint32_t)(0x111d0c98)));
  /* 111b210c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111b210f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111b2116 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111b211d jmp 0x111b2128 */
  goto L_111b2128;
L_111b211f:;
  /* 111b211f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b2122 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2125 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_111b2128:;
  /* 111b2128 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b212c jae 0x111b2161 */
  if (!C.cf) goto L_111b2161;
  /* 111b212e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b2131 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b2134 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 111b2137 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2138 call 0x111a81e0 */
  push32(0x111b213du); f_111a81e0();
  /* 111b213d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2140 mov esi, eax */
  ESI = (EAX);
  /* 111b2142 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b2145 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b2148 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 111b214c push ecx */
  push32((uint32_t)(ECX));
  /* 111b214d call 0x111a81e0 */
  push32(0x111b2152u); f_111a81e0();
  /* 111b2152 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2155 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2158 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 111b215c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111b215f jmp 0x111b211f */
  goto L_111b211f;
L_111b2161:;
  /* 111b2161 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b2164 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2167 push eax */
  push32((uint32_t)(EAX));
  /* 111b2168 call 0x111a5390 */
  push32(0x111b216du); f_111a5390();
  /* 111b216d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2170 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b2173 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2177 je 0x111b2219 */
  if (C.zf) goto L_111b2219;
  /* 111b217d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b2180 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 111b2183 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111b218a jmp 0x111b2195 */
  goto L_111b2195;
L_111b218c:;
  /* 111b218c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b218f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2192 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_111b2195:;
  /* 111b2195 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2199 jae 0x111b220a */
  if (!C.cf) goto L_111b220a;
  /* 111b219b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b219e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 111b21a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b21a4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b21a7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 111b21aa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b21ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b21b0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 111b21b3 push ecx */
  push32((uint32_t)(ECX));
  /* 111b21b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b21b7 push edx */
  push32((uint32_t)(EDX));
  /* 111b21b8 call 0x111a8360 */
  push32(0x111b21bdu); f_111a8360();
  /* 111b21bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b21c0 push eax */
  push32((uint32_t)(EAX));
  /* 111b21c1 call 0x111a81e0 */
  push32(0x111b21c6u); f_111a81e0();
  /* 111b21c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b21c9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b21cc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b21ce mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 111b21d1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b21d4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 111b21d7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b21da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b21dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111b21e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b21e3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b21e6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 111b21ea push eax */
  push32((uint32_t)(EAX));
  /* 111b21eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b21ee push ecx */
  push32((uint32_t)(ECX));
  /* 111b21ef call 0x111a8360 */
  push32(0x111b21f4u); f_111a8360();
  /* 111b21f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b21f7 push eax */
  push32((uint32_t)(EAX));
  /* 111b21f8 call 0x111a81e0 */
  push32(0x111b21fdu); f_111a81e0();
  /* 111b21fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2200 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b2203 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2205 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111b2208 jmp 0x111b218c */
  goto L_111b218c;
L_111b220a:;
  /* 111b220a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b220d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 111b2210 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b2213 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2216 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_111b2219:;
  /* 111b2219 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b221c pop esi */
  ESI = (pop32());
  /* 111b221d mov esp, ebp */
  ESP = (EBP);
  /* 111b221f pop ebp */
  EBP = (pop32());
  /* 111b2220 ret  */
  ESPCHK(0x111b2100u, _esp0);
  ESP += 4; return;
}

/* FUN_10012230 @ 0x111b2230 (291 bytes, 97 insns) */
void f_111b2230(void) {
  FTRACE(0x111b2230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b2230 push ebp */
  push32((uint32_t)(EBP));
  /* 111b2231 mov ebp, esp */
  EBP = (ESP);
  /* 111b2233 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b2236 push esi */
  push32((uint32_t)(ESI));
  /* 111b2237 mov eax, dword ptr [0x111d0c98] */
  EAX = (r32((uint32_t)(0x111d0c98)));
  /* 111b223c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111b223f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111b2246 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111b224d jmp 0x111b2258 */
  goto L_111b2258;
L_111b224f:;
  /* 111b224f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b2252 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2255 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_111b2258:;
  /* 111b2258 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b225c jae 0x111b2292 */
  if (!C.cf) goto L_111b2292;
  /* 111b225e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b2261 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b2264 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 111b2268 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2269 call 0x111a81e0 */
  push32(0x111b226eu); f_111a81e0();
  /* 111b226e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2271 mov esi, eax */
  ESI = (EAX);
  /* 111b2273 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b2276 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b2279 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 111b227d push ecx */
  push32((uint32_t)(ECX));
  /* 111b227e call 0x111a81e0 */
  push32(0x111b2283u); f_111a81e0();
  /* 111b2283 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2286 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2289 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 111b228d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111b2290 jmp 0x111b224f */
  goto L_111b224f;
L_111b2292:;
  /* 111b2292 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b2295 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2298 push eax */
  push32((uint32_t)(EAX));
  /* 111b2299 call 0x111a5390 */
  push32(0x111b229eu); f_111a5390();
  /* 111b229e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b22a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b22a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b22a8 je 0x111b234b */
  if (C.zf) goto L_111b234b;
  /* 111b22ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b22b1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 111b22b4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111b22bb jmp 0x111b22c6 */
  goto L_111b22c6;
L_111b22bd:;
  /* 111b22bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b22c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b22c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_111b22c6:;
  /* 111b22c6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b22ca jae 0x111b233c */
  if (!C.cf) goto L_111b233c;
  /* 111b22cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b22cf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 111b22d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b22d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b22d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 111b22db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b22de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b22e1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 111b22e5 push ecx */
  push32((uint32_t)(ECX));
  /* 111b22e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b22e9 push edx */
  push32((uint32_t)(EDX));
  /* 111b22ea call 0x111a8360 */
  push32(0x111b22efu); f_111a8360();
  /* 111b22ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b22f2 push eax */
  push32((uint32_t)(EAX));
  /* 111b22f3 call 0x111a81e0 */
  push32(0x111b22f8u); f_111a81e0();
  /* 111b22f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b22fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b22fe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2300 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 111b2303 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b2306 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 111b2309 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b230c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b230f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111b2312 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b2315 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b2318 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 111b231c push eax */
  push32((uint32_t)(EAX));
  /* 111b231d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b2320 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2321 call 0x111a8360 */
  push32(0x111b2326u); f_111a8360();
  /* 111b2326 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2329 push eax */
  push32((uint32_t)(EAX));
  /* 111b232a call 0x111a81e0 */
  push32(0x111b232fu); f_111a81e0();
  /* 111b232f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2332 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b2335 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2337 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111b233a jmp 0x111b22bd */
  goto L_111b22bd;
L_111b233c:;
  /* 111b233c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b233f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 111b2342 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b2345 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2348 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_111b234b:;
  /* 111b234b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b234e pop esi */
  ESI = (pop32());
  /* 111b234f mov esp, ebp */
  ESP = (EBP);
  /* 111b2351 pop ebp */
  EBP = (pop32());
  /* 111b2352 ret  */
  ESPCHK(0x111b2230u, _esp0);
  ESP += 4; return;
}

/* FUN_10012360 @ 0x111b2360 (878 bytes, 273 insns) */
void f_111b2360(void) {
  FTRACE(0x111b2360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b2360 push ebp */
  push32((uint32_t)(EBP));
  /* 111b2361 mov ebp, esp */
  EBP = (ESP);
  /* 111b2363 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b2366 push esi */
  push32((uint32_t)(ESI));
  /* 111b2367 mov eax, dword ptr [0x111d0c98] */
  EAX = (r32((uint32_t)(0x111d0c98)));
  /* 111b236c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111b236f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111b2376 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111b237d jmp 0x111b2388 */
  goto L_111b2388;
L_111b237f:;
  /* 111b237f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b2382 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2385 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_111b2388:;
  /* 111b2388 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b238c jae 0x111b23c1 */
  if (!C.cf) goto L_111b23c1;
  /* 111b238e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b2391 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b2394 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 111b2397 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2398 call 0x111a81e0 */
  push32(0x111b239du); f_111a81e0();
  /* 111b239d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b23a0 mov esi, eax */
  ESI = (EAX);
  /* 111b23a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b23a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b23a8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 111b23ac push ecx */
  push32((uint32_t)(ECX));
  /* 111b23ad call 0x111a81e0 */
  push32(0x111b23b2u); f_111a81e0();
  /* 111b23b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b23b5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b23b8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 111b23bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111b23bf jmp 0x111b237f */
  goto L_111b237f;
L_111b23c1:;
  /* 111b23c1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111b23c8 jmp 0x111b23d3 */
  goto L_111b23d3;
L_111b23ca:;
  /* 111b23ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b23cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b23d0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_111b23d3:;
  /* 111b23d3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b23d7 jae 0x111b240d */
  if (!C.cf) goto L_111b240d;
  /* 111b23d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b23dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b23df mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 111b23e3 push eax */
  push32((uint32_t)(EAX));
  /* 111b23e4 call 0x111a81e0 */
  push32(0x111b23e9u); f_111a81e0();
  /* 111b23e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b23ec mov esi, eax */
  ESI = (EAX);
  /* 111b23ee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b23f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b23f4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 111b23f8 push eax */
  push32((uint32_t)(EAX));
  /* 111b23f9 call 0x111a81e0 */
  push32(0x111b23feu); f_111a81e0();
  /* 111b23fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2401 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2404 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 111b2408 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b240b jmp 0x111b23ca */
  goto L_111b23ca;
L_111b240d:;
  /* 111b240d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b2410 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 111b2416 push eax */
  push32((uint32_t)(EAX));
  /* 111b2417 call 0x111a81e0 */
  push32(0x111b241cu); f_111a81e0();
  /* 111b241c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b241f mov esi, eax */
  ESI = (EAX);
  /* 111b2421 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b2424 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 111b242a push edx */
  push32((uint32_t)(EDX));
  /* 111b242b call 0x111a81e0 */
  push32(0x111b2430u); f_111a81e0();
  /* 111b2430 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2433 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2436 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 111b243a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111b243d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b2440 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 111b2446 push edx */
  push32((uint32_t)(EDX));
  /* 111b2447 call 0x111a81e0 */
  push32(0x111b244cu); f_111a81e0();
  /* 111b244c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b244f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b2452 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 111b2456 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111b2459 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b245c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 111b2462 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2463 call 0x111a81e0 */
  push32(0x111b2468u); f_111a81e0();
  /* 111b2468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b246b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b246e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 111b2472 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111b2475 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b2478 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 111b247e push edx */
  push32((uint32_t)(EDX));
  /* 111b247f call 0x111a81e0 */
  push32(0x111b2484u); f_111a81e0();
  /* 111b2484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2487 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b248a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 111b248e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111b2491 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b2494 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2499 push eax */
  push32((uint32_t)(EAX));
  /* 111b249a call 0x111a5390 */
  push32(0x111b249fu); f_111a5390();
  /* 111b249f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b24a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b24a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b24a9 je 0x111b26c6 */
  if (C.zf) goto L_111b26c6;
  /* 111b24af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b24b2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 111b24b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b24b8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b24be mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111b24c1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 111b24c6 mov eax, dword ptr [0x111d0c98] */
  EAX = (r32((uint32_t)(0x111d0c98)));
  /* 111b24cb push eax */
  push32((uint32_t)(EAX));
  /* 111b24cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b24cf push ecx */
  push32((uint32_t)(ECX));
  /* 111b24d0 call 0x111abc90 */
  push32(0x111b24d5u); f_111abc90();
  /* 111b24d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b24d8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111b24df jmp 0x111b24ea */
  goto L_111b24ea;
L_111b24e1:;
  /* 111b24e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b24e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b24e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_111b24ea:;
  /* 111b24ea cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b24ee jae 0x111b255e */
  if (!C.cf) goto L_111b255e;
  /* 111b24f0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b24f3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b24f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b24f9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 111b24fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b24ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b2502 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 111b2505 push edx */
  push32((uint32_t)(EDX));
  /* 111b2506 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b2509 push eax */
  push32((uint32_t)(EAX));
  /* 111b250a call 0x111a8360 */
  push32(0x111b250fu); f_111a8360();
  /* 111b250f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2512 push eax */
  push32((uint32_t)(EAX));
  /* 111b2513 call 0x111a81e0 */
  push32(0x111b2518u); f_111a81e0();
  /* 111b2518 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b251b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b251e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 111b2522 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111b2525 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b2528 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b252b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b252e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 111b2532 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b2535 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b2538 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 111b253c push edx */
  push32((uint32_t)(EDX));
  /* 111b253d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b2540 push eax */
  push32((uint32_t)(EAX));
  /* 111b2541 call 0x111a8360 */
  push32(0x111b2546u); f_111a8360();
  /* 111b2546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2549 push eax */
  push32((uint32_t)(EAX));
  /* 111b254a call 0x111a81e0 */
  push32(0x111b254fu); f_111a81e0();
  /* 111b254f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2552 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b2555 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 111b2559 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111b255c jmp 0x111b24e1 */
  goto L_111b24e1;
L_111b255e:;
  /* 111b255e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111b2565 jmp 0x111b2570 */
  goto L_111b2570;
L_111b2567:;
  /* 111b2567 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b256a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b256d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_111b2570:;
  /* 111b2570 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2574 jae 0x111b25e6 */
  if (!C.cf) goto L_111b25e6;
  /* 111b2576 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b2579 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b257c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b257f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 111b2583 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b2586 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b2589 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 111b258d push eax */
  push32((uint32_t)(EAX));
  /* 111b258e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b2591 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2592 call 0x111a8360 */
  push32(0x111b2597u); f_111a8360();
  /* 111b2597 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b259a push eax */
  push32((uint32_t)(EAX));
  /* 111b259b call 0x111a81e0 */
  push32(0x111b25a0u); f_111a81e0();
  /* 111b25a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b25a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b25a6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 111b25aa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111b25ad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b25b0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b25b3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b25b6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 111b25ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b25bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b25c0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 111b25c4 push eax */
  push32((uint32_t)(EAX));
  /* 111b25c5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b25c8 push ecx */
  push32((uint32_t)(ECX));
  /* 111b25c9 call 0x111a8360 */
  push32(0x111b25ceu); f_111a8360();
  /* 111b25ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b25d1 push eax */
  push32((uint32_t)(EAX));
  /* 111b25d2 call 0x111a81e0 */
  push32(0x111b25d7u); f_111a81e0();
  /* 111b25d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b25da mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b25dd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 111b25e1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111b25e4 jmp 0x111b2567 */
  goto L_111b2567;
L_111b25e6:;
  /* 111b25e6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b25e9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b25ec mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 111b25f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b25f5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 111b25fb push ecx */
  push32((uint32_t)(ECX));
  /* 111b25fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b25ff push edx */
  push32((uint32_t)(EDX));
  /* 111b2600 call 0x111a8360 */
  push32(0x111b2605u); f_111a8360();
  /* 111b2605 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2608 push eax */
  push32((uint32_t)(EAX));
  /* 111b2609 call 0x111a81e0 */
  push32(0x111b260eu); f_111a81e0();
  /* 111b260e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2611 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b2614 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 111b2618 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111b261b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b261e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b2621 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 111b2627 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b262a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 111b2630 push eax */
  push32((uint32_t)(EAX));
  /* 111b2631 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b2634 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2635 call 0x111a8360 */
  push32(0x111b263au); f_111a8360();
  /* 111b263a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b263d push eax */
  push32((uint32_t)(EAX));
  /* 111b263e call 0x111a81e0 */
  push32(0x111b2643u); f_111a81e0();
  /* 111b2643 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2646 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b2649 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 111b264d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111b2650 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b2653 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b2656 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 111b265c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b265f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 111b2665 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2666 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b2669 push edx */
  push32((uint32_t)(EDX));
  /* 111b266a call 0x111a8360 */
  push32(0x111b266fu); f_111a8360();
  /* 111b266f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2672 push eax */
  push32((uint32_t)(EAX));
  /* 111b2673 call 0x111a81e0 */
  push32(0x111b2678u); f_111a81e0();
  /* 111b2678 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b267b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b267e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 111b2682 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111b2685 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b2688 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b268b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 111b2691 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b2694 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 111b269a push eax */
  push32((uint32_t)(EAX));
  /* 111b269b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b269e push ecx */
  push32((uint32_t)(ECX));
  /* 111b269f call 0x111a8360 */
  push32(0x111b26a4u); f_111a8360();
  /* 111b26a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b26a7 push eax */
  push32((uint32_t)(EAX));
  /* 111b26a8 call 0x111a81e0 */
  push32(0x111b26adu); f_111a81e0();
  /* 111b26ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b26b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b26b3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 111b26b7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111b26ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b26bd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b26c0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_111b26c6:;
  /* 111b26c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b26c9 pop esi */
  ESI = (pop32());
  /* 111b26ca mov esp, ebp */
  ESP = (EBP);
  /* 111b26cc pop ebp */
  EBP = (pop32());
  /* 111b26cd ret  */
  ESPCHK(0x111b2360u, _esp0);
  ESP += 4; return;
}

/* FUN_100126d0 @ 0x111b26d0 (31 bytes, 15 insns) */
void f_111b26d0(void) {
  FTRACE(0x111b26d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b26d0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b26d1 mov ebp, esp */
  EBP = (ESP);
  /* 111b26d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b26d5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b26d8 push eax */
  push32((uint32_t)(EAX));
  /* 111b26d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b26dc push ecx */
  push32((uint32_t)(ECX));
  /* 111b26dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b26e0 push edx */
  push32((uint32_t)(EDX));
  /* 111b26e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b26e4 push eax */
  push32((uint32_t)(EAX));
  /* 111b26e5 call 0x111b26f0 */
  push32(0x111b26eau); f_111b26f0();
  /* 111b26ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b26ed pop ebp */
  EBP = (pop32());
  /* 111b26ee ret  */
  ESPCHK(0x111b26d0u, _esp0);
  ESP += 4; return;
}

