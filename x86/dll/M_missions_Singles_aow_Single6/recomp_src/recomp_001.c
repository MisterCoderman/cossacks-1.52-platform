#include "recomp.h"

/* FUN_10008620 @ 0x12298620 (10 bytes, 5 insns) */
void f_12298620(void) {
  FTRACE(0x12298620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12298620 push ebp */
  push32((uint32_t)(EBP));
  /* 12298621 mov ebp, esp */
  EBP = (ESP);
  /* 12298623 mov eax, dword ptr [0x122bec94] */
  EAX = (r32((uint32_t)(0x122bec94)));
  /* 12298628 pop ebp */
  EBP = (pop32());
  /* 12298629 ret  */
  ESPCHK(0x12298620u, _esp0);
  ESP += 4; return;
}

/* FUN_10008630 @ 0x12298630 (31 bytes, 11 insns) */
void f_12298630(void) {
  FTRACE(0x12298630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12298630 push ebp */
  push32((uint32_t)(EBP));
  /* 12298631 mov ebp, esp */
  EBP = (ESP);
  /* 12298633 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229863a jbe 0x12298640 */
  if ((C.cf||C.zf)) goto L_12298640;
  /* 1229863c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229863e jmp 0x1229864d */
  goto L_1229864d;
L_12298640:;
  /* 12298640 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298643 mov dword ptr [0x122bec94], eax */
  w32((uint32_t)(0x122bec94), (EAX));
  /* 12298648 mov eax, 1 */
  EAX = (0x1u);
L_1229864d:;
  /* 1229864d pop ebp */
  EBP = (pop32());
  /* 1229864e ret  */
  ESPCHK(0x12298630u, _esp0);
  ESP += 4; return;
}

/* FUN_10008650 @ 0x12298650 (89 bytes, 20 insns) */
void f_12298650(void) {
  FTRACE(0x12298650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12298650 push ebp */
  push32((uint32_t)(EBP));
  /* 12298651 mov ebp, esp */
  EBP = (ESP);
  /* 12298653 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12298658 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229865a mov eax, dword ptr [0x122c1fac] */
  EAX = (r32((uint32_t)(0x122c1fac)));
  /* 1229865f push eax */
  push32((uint32_t)(EAX));
  /* 12298660 call dword ptr [0x122c3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3340))), 0x12298666u);
  /* 12298666 mov dword ptr [0x122c1fa8], eax */
  w32((uint32_t)(0x122c1fa8), (EAX));
  /* 1229866b cmp dword ptr [0x122c1fa8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c1fa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298672 jne 0x12298678 */
  if (!C.zf) goto L_12298678;
  /* 12298674 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12298676 jmp 0x122986a7 */
  goto L_122986a7;
L_12298678:;
  /* 12298678 mov ecx, dword ptr [0x122c1fa8] */
  ECX = (r32((uint32_t)(0x122c1fa8)));
  /* 1229867e mov dword ptr [0x122c1f9c], ecx */
  w32((uint32_t)(0x122c1f9c), (ECX));
  /* 12298684 mov dword ptr [0x122c1fa0], 0 */
  w32((uint32_t)(0x122c1fa0), (0x0u));
  /* 1229868e mov dword ptr [0x122c1fa4], 0 */
  w32((uint32_t)(0x122c1fa4), (0x0u));
  /* 12298698 mov dword ptr [0x122c1f88], 0x10 */
  w32((uint32_t)(0x122c1f88), (0x10u));
  /* 122986a2 mov eax, 1 */
  EAX = (0x1u);
L_122986a7:;
  /* 122986a7 pop ebp */
  EBP = (pop32());
  /* 122986a8 ret  */
  ESPCHK(0x12298650u, _esp0);
  ESP += 4; return;
}

/* FUN_100086b0 @ 0x122986b0 (85 bytes, 29 insns) */
void f_122986b0(void) {
  FTRACE(0x122986b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122986b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122986b1 mov ebp, esp */
  EBP = (ESP);
  /* 122986b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122986b6 mov eax, dword ptr [0x122c1fa4] */
  EAX = (r32((uint32_t)(0x122c1fa4)));
  /* 122986bb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122986be mov ecx, dword ptr [0x122c1fa8] */
  ECX = (r32((uint32_t)(0x122c1fa8)));
  /* 122986c4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122986c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122986c9 mov edx, dword ptr [0x122c1fa8] */
  EDX = (r32((uint32_t)(0x122c1fa8)));
  /* 122986cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_122986d2:;
  /* 122986d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122986d5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122986d8 jae 0x122986ff */
  if (!C.cf) goto L_122986ff;
  /* 122986da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122986dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122986e0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122986e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122986e6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122986ed jae 0x122986f4 */
  if (!C.cf) goto L_122986f4;
  /* 122986ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122986f2 jmp 0x12298701 */
  goto L_12298701;
L_122986f4:;
  /* 122986f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122986f7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122986fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122986fd jmp 0x122986d2 */
  goto L_122986d2;
L_122986ff:;
  /* 122986ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12298701:;
  /* 12298701 mov esp, ebp */
  ESP = (EBP);
  /* 12298703 pop ebp */
  EBP = (pop32());
  /* 12298704 ret  */
  ESPCHK(0x122986b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008710 @ 0x12298710 (95 bytes, 33 insns) */
void f_12298710(void) {
  FTRACE(0x12298710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12298710 push ebp */
  push32((uint32_t)(EBP));
  /* 12298711 mov ebp, esp */
  EBP = (ESP);
  /* 12298713 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298719 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229871c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229871f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12298722 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12298725 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12298728 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1229872b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12298730 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298733 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12298735 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298738 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1229873b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1229873d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229873f jne 0x12298761 */
  if (!C.zf) goto L_12298761;
  /* 12298741 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12298744 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12298747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12298749 jne 0x12298761 */
  if (!C.zf) goto L_12298761;
  /* 1229874b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229874e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12298754 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12298756 je 0x12298761 */
  if (C.zf) goto L_12298761;
  /* 12298758 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1229875f jmp 0x12298768 */
  goto L_12298768;
L_12298761:;
  /* 12298761 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12298768:;
  /* 12298768 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229876b mov esp, ebp */
  ESP = (EBP);
  /* 1229876d pop ebp */
  EBP = (pop32());
  /* 1229876e ret  */
  ESPCHK(0x12298710u, _esp0);
  ESP += 4; return;
}

/* FUN_10008770 @ 0x12298770 (1485 bytes, 453 insns) */
void f_12298770(void) {
  FTRACE(0x12298770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12298770 push ebp */
  push32((uint32_t)(EBP));
  /* 12298771 mov ebp, esp */
  EBP = (ESP);
  /* 12298773 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298776 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298779 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1229877c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1229877f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298782 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12298785 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298788 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1229878b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229878e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12298791 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12298794 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298797 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229879d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122987a0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 122987a7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122987aa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122987ad sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122987b0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 122987b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122987b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122987b8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122987bb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 122987be mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122987c1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122987c4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 122987c7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 122987ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122987cc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122987cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122987d2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 122987d5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122987d8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122987db and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122987de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122987e0 jne 0x12298908 */
  if (!C.zf) goto L_12298908;
  /* 122987e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122987e9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 122987ec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122987ef mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 122987f2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122987f6 jbe 0x122987ff */
  if ((C.cf||C.zf)) goto L_122987ff;
  /* 122987f8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_122987ff:;
  /* 122987ff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12298802 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12298805 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12298808 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229880b jne 0x122988e1 */
  if (!C.zf) goto L_122988e1;
  /* 12298811 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298815 jae 0x12298876 */
  if (!C.cf) goto L_12298876;
  /* 12298817 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1229881c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229881f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12298821 not eax */
  EAX = (~(EAX));
  /* 12298823 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298826 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298829 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1229882d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229882f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298832 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298835 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12298839 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1229883c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229883f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12298842 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12298845 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298848 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229884b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1229884e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298851 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298854 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12298858 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229885a jne 0x12298874 */
  if (!C.zf) goto L_12298874;
  /* 1229885c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12298861 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12298864 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12298866 not eax */
  EAX = (~(EAX));
  /* 12298868 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229886b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1229886d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1229886f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298872 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12298874:;
  /* 12298874 jmp 0x122988e1 */
  goto L_122988e1;
L_12298876:;
  /* 12298876 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12298879 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229887c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12298881 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12298883 not edx */
  EDX = (~(EDX));
  /* 12298885 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298888 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1229888b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12298892 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12298894 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298897 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1229889a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 122988a1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122988a4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122988a7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 122988aa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122988ad mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122988b0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122988b3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 122988b6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122988b9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122988bc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 122988c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122988c2 jne 0x122988e1 */
  if (!C.zf) goto L_122988e1;
  /* 122988c4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122988c7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122988ca mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122988cf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122988d1 not edx */
  EDX = (~(EDX));
  /* 122988d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122988d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122988d9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 122988db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122988de mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_122988e1:;
  /* 122988e1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 122988e4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122988e7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 122988ea mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 122988ed mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 122988f0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 122988f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122988f6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 122988f9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122988fc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 122988ff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12298902 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298905 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12298908:;
  /* 12298908 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1229890b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1229890e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298911 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12298914 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298918 jbe 0x12298921 */
  if ((C.cf||C.zf)) goto L_12298921;
  /* 1229891a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12298921:;
  /* 12298921 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12298924 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12298927 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12298929 jne 0x12298a85 */
  if (!C.zf) goto L_12298a85;
  /* 1229892f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12298932 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298935 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12298938 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229893b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1229893e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298941 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12298944 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298948 jbe 0x12298951 */
  if ((C.cf||C.zf)) goto L_12298951;
  /* 1229894a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12298951:;
  /* 12298951 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12298954 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298957 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1229895a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1229895d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12298960 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298963 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12298966 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229896a jbe 0x12298973 */
  if ((C.cf||C.zf)) goto L_12298973;
  /* 1229896c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12298973:;
  /* 12298973 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12298976 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298979 je 0x12298a7f */
  if (C.zf) goto L_12298a7f;
  /* 1229897f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12298982 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12298985 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12298988 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229898b jne 0x12298a61 */
  if (!C.zf) goto L_12298a61;
  /* 12298991 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298995 jae 0x122989f6 */
  if (!C.cf) goto L_122989f6;
  /* 12298997 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1229899c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229899f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122989a1 not edx */
  EDX = (~(EDX));
  /* 122989a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122989a6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122989a9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 122989ad and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122989af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122989b2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122989b5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 122989b9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122989bc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122989bf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 122989c2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122989c5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122989c8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122989cb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 122989ce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122989d1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122989d4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 122989d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122989da jne 0x122989f4 */
  if (!C.zf) goto L_122989f4;
  /* 122989dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122989e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122989e4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122989e6 not edx */
  EDX = (~(EDX));
  /* 122989e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122989eb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122989ed and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 122989ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122989f2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_122989f4:;
  /* 122989f4 jmp 0x12298a61 */
  goto L_12298a61;
L_122989f6:;
  /* 122989f6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122989f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122989fc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12298a01 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12298a03 not eax */
  EAX = (~(EAX));
  /* 12298a05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298a08 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298a0b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12298a12 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12298a14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298a17 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298a1a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12298a21 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298a24 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298a27 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12298a2a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12298a2d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298a30 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298a33 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12298a36 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298a39 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298a3c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12298a40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12298a42 jne 0x12298a61 */
  if (!C.zf) goto L_12298a61;
  /* 12298a44 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12298a47 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298a4a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12298a4f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12298a51 not eax */
  EAX = (~(EAX));
  /* 12298a53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298a56 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12298a59 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12298a5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298a5e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12298a61:;
  /* 12298a61 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12298a64 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12298a67 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12298a6a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12298a6d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12298a70 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12298a73 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12298a76 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12298a79 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12298a7c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12298a7f:;
  /* 12298a7f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12298a82 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12298a85:;
  /* 12298a85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12298a88 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12298a8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12298a8d jne 0x12298a9b */
  if (!C.zf) goto L_12298a9b;
  /* 12298a8f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12298a92 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298a95 je 0x12298bab */
  if (C.zf) goto L_12298bab;
L_12298a9b:;
  /* 12298a9b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12298a9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12298aa1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12298aa4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12298aa7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12298aaa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12298aad mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12298ab0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12298ab3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12298ab6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12298ab9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12298abc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12298abf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12298ac2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12298ac5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12298ac8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12298acb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12298ace mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12298ad1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12298ad4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12298ad7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12298ada cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298add jne 0x12298bab */
  if (!C.zf) goto L_12298bab;
  /* 12298ae3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298ae7 jae 0x12298b44 */
  if (!C.cf) goto L_12298b44;
  /* 12298ae9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298aec add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298aef movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12298af3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298af6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298af9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12298afc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12298aff mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298b02 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298b05 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12298b08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12298b0a jne 0x12298b22 */
  if (!C.zf) goto L_12298b22;
  /* 12298b0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12298b11 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12298b14 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12298b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298b19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12298b1b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12298b1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298b20 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12298b22:;
  /* 12298b22 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12298b27 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12298b2a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12298b2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298b2f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298b32 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12298b36 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12298b38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298b3b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298b3e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12298b42 jmp 0x12298bab */
  goto L_12298bab;
L_12298b44:;
  /* 12298b44 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298b47 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298b4a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12298b4e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298b51 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298b54 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12298b57 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12298b5a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298b5d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298b60 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12298b63 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12298b65 jne 0x12298b82 */
  if (!C.zf) goto L_12298b82;
  /* 12298b67 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12298b6a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298b6d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12298b72 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12298b74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298b77 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12298b7a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12298b7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298b7f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12298b82:;
  /* 12298b82 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12298b85 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298b88 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12298b8d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12298b8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298b92 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298b95 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12298b9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12298b9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298ba1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12298ba4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12298bab:;
  /* 12298bab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12298bae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12298bb1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12298bb3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12298bb6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298bb9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12298bbc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12298bbf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12298bc2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12298bc4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298bc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12298bca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12298bcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12298bcf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298bd2 jne 0x12298d39 */
  if (!C.zf) goto L_12298d39;
  /* 12298bd8 cmp dword ptr [0x122c1fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c1fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298bdf je 0x12298d28 */
  if (C.zf) goto L_12298d28;
  /* 12298be5 mov eax, dword ptr [0x122c1f98] */
  EAX = (r32((uint32_t)(0x122c1f98)));
  /* 12298bea shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12298bed mov ecx, dword ptr [0x122c1fa0] */
  ECX = (r32((uint32_t)(0x122c1fa0)));
  /* 12298bf3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12298bf6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298bf8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12298bfb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12298c00 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12298c05 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298c08 push eax */
  push32((uint32_t)(EAX));
  /* 12298c09 call dword ptr [0x122c3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3324))), 0x12298c0fu);
  /* 12298c0f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12298c14 mov ecx, dword ptr [0x122c1f98] */
  ECX = (r32((uint32_t)(0x122c1f98)));
  /* 12298c1a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12298c1c mov eax, dword ptr [0x122c1fa0] */
  EAX = (r32((uint32_t)(0x122c1fa0)));
  /* 12298c21 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12298c24 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12298c26 mov edx, dword ptr [0x122c1fa0] */
  EDX = (r32((uint32_t)(0x122c1fa0)));
  /* 12298c2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12298c2f mov eax, dword ptr [0x122c1fa0] */
  EAX = (r32((uint32_t)(0x122c1fa0)));
  /* 12298c34 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12298c37 mov edx, dword ptr [0x122c1f98] */
  EDX = (r32((uint32_t)(0x122c1f98)));
  /* 12298c3d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12298c48 mov eax, dword ptr [0x122c1fa0] */
  EAX = (r32((uint32_t)(0x122c1fa0)));
  /* 12298c4d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12298c50 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12298c53 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12298c56 mov eax, dword ptr [0x122c1fa0] */
  EAX = (r32((uint32_t)(0x122c1fa0)));
  /* 12298c5b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12298c5e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12298c61 mov edx, dword ptr [0x122c1fa0] */
  EDX = (r32((uint32_t)(0x122c1fa0)));
  /* 12298c67 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12298c6a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12298c6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12298c70 jne 0x12298c86 */
  if (!C.zf) goto L_12298c86;
  /* 12298c72 mov edx, dword ptr [0x122c1fa0] */
  EDX = (r32((uint32_t)(0x122c1fa0)));
  /* 12298c78 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12298c7b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12298c7d mov ecx, dword ptr [0x122c1fa0] */
  ECX = (r32((uint32_t)(0x122c1fa0)));
  /* 12298c83 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12298c86:;
  /* 12298c86 mov edx, dword ptr [0x122c1fa0] */
  EDX = (r32((uint32_t)(0x122c1fa0)));
  /* 12298c8c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298c90 jne 0x12298d28 */
  if (!C.zf) goto L_12298d28;
  /* 12298c96 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12298c9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12298c9d mov eax, dword ptr [0x122c1fa0] */
  EAX = (r32((uint32_t)(0x122c1fa0)));
  /* 12298ca2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12298ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 12298ca6 call dword ptr [0x122c3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3324))), 0x12298cacu);
  /* 12298cac mov edx, dword ptr [0x122c1fa0] */
  EDX = (r32((uint32_t)(0x122c1fa0)));
  /* 12298cb2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12298cb5 push eax */
  push32((uint32_t)(EAX));
  /* 12298cb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12298cb8 mov ecx, dword ptr [0x122c1fac] */
  ECX = (r32((uint32_t)(0x122c1fac)));
  /* 12298cbe push ecx */
  push32((uint32_t)(ECX));
  /* 12298cbf call dword ptr [0x122c3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3320))), 0x12298cc5u);
  /* 12298cc5 mov edx, dword ptr [0x122c1fa4] */
  EDX = (r32((uint32_t)(0x122c1fa4)));
  /* 12298ccb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12298cce mov eax, dword ptr [0x122c1fa8] */
  EAX = (r32((uint32_t)(0x122c1fa8)));
  /* 12298cd3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298cd5 mov ecx, dword ptr [0x122c1fa0] */
  ECX = (r32((uint32_t)(0x122c1fa0)));
  /* 12298cdb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298cde sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298ce0 push eax */
  push32((uint32_t)(EAX));
  /* 12298ce1 mov edx, dword ptr [0x122c1fa0] */
  EDX = (r32((uint32_t)(0x122c1fa0)));
  /* 12298ce7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298cea push edx */
  push32((uint32_t)(EDX));
  /* 12298ceb mov eax, dword ptr [0x122c1fa0] */
  EAX = (r32((uint32_t)(0x122c1fa0)));
  /* 12298cf0 push eax */
  push32((uint32_t)(EAX));
  /* 12298cf1 call 0x1229c2a0 */
  push32(0x12298cf6u); f_1229c2a0();
  /* 12298cf6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12298cf9 mov ecx, dword ptr [0x122c1fa4] */
  ECX = (r32((uint32_t)(0x122c1fa4)));
  /* 12298cff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298d02 mov dword ptr [0x122c1fa4], ecx */
  w32((uint32_t)(0x122c1fa4), (ECX));
  /* 12298d08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298d0b cmp edx, dword ptr [0x122c1fa0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x122c1fa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298d11 jbe 0x12298d1c */
  if ((C.cf||C.zf)) goto L_12298d1c;
  /* 12298d13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298d16 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298d19 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12298d1c:;
  /* 12298d1c mov ecx, dword ptr [0x122c1fa8] */
  ECX = (r32((uint32_t)(0x122c1fa8)));
  /* 12298d22 mov dword ptr [0x122c1f9c], ecx */
  w32((uint32_t)(0x122c1f9c), (ECX));
L_12298d28:;
  /* 12298d28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298d2b mov dword ptr [0x122c1fa0], edx */
  w32((uint32_t)(0x122c1fa0), (EDX));
  /* 12298d31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298d34 mov dword ptr [0x122c1f98], eax */
  w32((uint32_t)(0x122c1f98), (EAX));
L_12298d39:;
  /* 12298d39 mov esp, ebp */
  ESP = (EBP);
  /* 12298d3b pop ebp */
  EBP = (pop32());
  /* 12298d3c ret  */
  ESPCHK(0x12298770u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d40 @ 0x12298d40 (1334 bytes, 427 insns) */
void f_12298d40(void) {
  FTRACE(0x12298d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12298d40 push ebp */
  push32((uint32_t)(EBP));
  /* 12298d41 mov ebp, esp */
  EBP = (ESP);
  /* 12298d43 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298d46 push esi */
  push32((uint32_t)(ESI));
  /* 12298d47 mov eax, dword ptr [0x122c1fa4] */
  EAX = (r32((uint32_t)(0x122c1fa4)));
  /* 12298d4c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12298d4f mov ecx, dword ptr [0x122c1fa8] */
  ECX = (r32((uint32_t)(0x122c1fa8)));
  /* 12298d55 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298d57 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12298d5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298d5d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298d60 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12298d63 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12298d66 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12298d69 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12298d6c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298d6f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12298d72 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298d76 jge 0x12298d8c */
  if ((C.sf==C.of)) goto L_12298d8c;
  /* 12298d78 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12298d7b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12298d7e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12298d80 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12298d83 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12298d8a jmp 0x12298da1 */
  goto L_12298da1;
L_12298d8c:;
  /* 12298d8c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12298d93 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12298d96 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298d99 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12298d9c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12298d9e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12298da1:;
  /* 12298da1 mov ecx, dword ptr [0x122c1f9c] */
  ECX = (r32((uint32_t)(0x122c1f9c)));
  /* 12298da7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12298daa:;
  /* 12298daa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298dad cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298db0 jae 0x12298dd6 */
  if (!C.cf) goto L_12298dd6;
  /* 12298db2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298db5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12298db8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12298dba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298dbd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12298dc0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12298dc3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12298dc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12298dc7 je 0x12298dcb */
  if (C.zf) goto L_12298dcb;
  /* 12298dc9 jmp 0x12298dd6 */
  goto L_12298dd6;
L_12298dcb:;
  /* 12298dcb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298dce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298dd1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12298dd4 jmp 0x12298daa */
  goto L_12298daa;
L_12298dd6:;
  /* 12298dd6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298dd9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298ddc jne 0x12298ebd */
  if (!C.zf) goto L_12298ebd;
  /* 12298de2 mov eax, dword ptr [0x122c1fa8] */
  EAX = (r32((uint32_t)(0x122c1fa8)));
  /* 12298de7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12298dea:;
  /* 12298dea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298ded cmp ecx, dword ptr [0x122c1f9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122c1f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298df3 jae 0x12298e19 */
  if (!C.cf) goto L_12298e19;
  /* 12298df5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298df8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12298dfb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12298dfd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298e00 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12298e03 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12298e06 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12298e08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12298e0a je 0x12298e0e */
  if (C.zf) goto L_12298e0e;
  /* 12298e0c jmp 0x12298e19 */
  goto L_12298e19;
L_12298e0e:;
  /* 12298e0e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298e11 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298e14 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12298e17 jmp 0x12298dea */
  goto L_12298dea;
L_12298e19:;
  /* 12298e19 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298e1c cmp ecx, dword ptr [0x122c1f9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122c1f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298e22 jne 0x12298ebd */
  if (!C.zf) goto L_12298ebd;
L_12298e28:;
  /* 12298e28 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298e2b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298e2e jae 0x12298e46 */
  if (!C.cf) goto L_12298e46;
  /* 12298e30 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298e33 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298e37 je 0x12298e3b */
  if (C.zf) goto L_12298e3b;
  /* 12298e39 jmp 0x12298e46 */
  goto L_12298e46;
L_12298e3b:;
  /* 12298e3b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298e3e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298e41 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12298e44 jmp 0x12298e28 */
  goto L_12298e28;
L_12298e46:;
  /* 12298e46 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298e49 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298e4c jne 0x12298e97 */
  if (!C.zf) goto L_12298e97;
  /* 12298e4e mov eax, dword ptr [0x122c1fa8] */
  EAX = (r32((uint32_t)(0x122c1fa8)));
  /* 12298e53 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12298e56:;
  /* 12298e56 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298e59 cmp ecx, dword ptr [0x122c1f9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122c1f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298e5f jae 0x12298e77 */
  if (!C.cf) goto L_12298e77;
  /* 12298e61 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298e64 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298e68 je 0x12298e6c */
  if (C.zf) goto L_12298e6c;
  /* 12298e6a jmp 0x12298e77 */
  goto L_12298e77;
L_12298e6c:;
  /* 12298e6c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298e6f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298e72 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12298e75 jmp 0x12298e56 */
  goto L_12298e56;
L_12298e77:;
  /* 12298e77 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298e7a cmp ecx, dword ptr [0x122c1f9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122c1f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298e80 jne 0x12298e97 */
  if (!C.zf) goto L_12298e97;
  /* 12298e82 call 0x12299280 */
  push32(0x12298e87u); f_12299280();
  /* 12298e87 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12298e8a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298e8e jne 0x12298e97 */
  if (!C.zf) goto L_12298e97;
  /* 12298e90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12298e92 jmp 0x12299271 */
  goto L_12299271;
L_12298e97:;
  /* 12298e97 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298e9a push edx */
  push32((uint32_t)(EDX));
  /* 12298e9b call 0x12299390 */
  push32(0x12298ea0u); f_12299390();
  /* 12298ea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12298ea3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298ea6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12298ea9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12298eab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298eae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12298eb1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298eb4 jne 0x12298ebd */
  if (!C.zf) goto L_12298ebd;
  /* 12298eb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12298eb8 jmp 0x12299271 */
  goto L_12299271;
L_12298ebd:;
  /* 12298ebd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298ec0 mov dword ptr [0x122c1f9c], edx */
  w32((uint32_t)(0x122c1f9c), (EDX));
  /* 12298ec6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298ec9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12298ecc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12298ecf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12298ed2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12298ed4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12298ed7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298edb je 0x12298f00 */
  if (C.zf) goto L_12298f00;
  /* 12298edd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12298ee0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12298ee3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12298ee6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12298eea mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12298eed mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12298ef0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12298ef3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12298efa or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12298efc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12298efe jne 0x12298f35 */
  if (!C.zf) goto L_12298f35;
L_12298f00:;
  /* 12298f00 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12298f07:;
  /* 12298f07 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12298f0a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12298f0d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12298f10 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12298f14 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12298f17 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12298f1a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12298f1d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12298f24 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12298f26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12298f28 jne 0x12298f35 */
  if (!C.zf) goto L_12298f35;
  /* 12298f2a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12298f2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298f30 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12298f33 jmp 0x12298f07 */
  goto L_12298f07;
L_12298f35:;
  /* 12298f35 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12298f38 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12298f3e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12298f41 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12298f48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12298f4b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12298f52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12298f55 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12298f58 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12298f5b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12298f5f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12298f62 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298f66 jne 0x12298f82 */
  if (!C.zf) goto L_12298f82;
  /* 12298f68 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 12298f6f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12298f72 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12298f75 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12298f78 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 12298f7f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12298f82:;
  /* 12298f82 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298f86 jl 0x12298f9b */
  if ((C.sf!=C.of)) goto L_12298f9b;
  /* 12298f88 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12298f8b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12298f8d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12298f90 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12298f93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298f96 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12298f99 jmp 0x12298f82 */
  goto L_12298f82;
L_12298f9b:;
  /* 12298f9b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12298f9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298fa1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12298fa5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12298fa8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12298fab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12298fad sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298fb0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12298fb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12298fb6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12298fb9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298fbc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12298fbf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298fc3 jle 0x12298fcc */
  if ((C.zf||C.sf!=C.of)) goto L_12298fcc;
  /* 12298fc5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_12298fcc:;
  /* 12298fcc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12298fcf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298fd2 je 0x122991f0 */
  if (C.zf) goto L_122991f0;
  /* 12298fd8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12298fdb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12298fde mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12298fe1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298fe4 jne 0x122990ba */
  if (!C.zf) goto L_122990ba;
  /* 12298fea cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298fee jge 0x1229904f */
  if ((C.sf==C.of)) goto L_1229904f;
  /* 12298ff0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12298ff5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12298ff8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12298ffa not eax */
  EAX = (~(EAX));
  /* 12298ffc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12298fff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12299002 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12299006 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12299008 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1229900b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1229900e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12299012 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12299015 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299018 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1229901b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1229901e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12299021 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299024 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12299027 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1229902a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229902d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12299031 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12299033 jne 0x1229904d */
  if (!C.zf) goto L_1229904d;
  /* 12299035 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1229903a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229903d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1229903f not eax */
  EAX = (~(EAX));
  /* 12299041 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12299044 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12299046 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12299048 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229904b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1229904d:;
  /* 1229904d jmp 0x122990ba */
  goto L_122990ba;
L_1229904f:;
  /* 1229904f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12299052 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12299055 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1229905a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1229905c not edx */
  EDX = (~(EDX));
  /* 1229905e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299061 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12299064 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1229906b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1229906d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299070 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12299073 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1229907a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1229907d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299080 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12299083 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12299086 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12299089 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229908c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1229908f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12299092 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299095 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12299099 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229909b jne 0x122990ba */
  if (!C.zf) goto L_122990ba;
  /* 1229909d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122990a0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122990a3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122990a8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122990aa not edx */
  EDX = (~(EDX));
  /* 122990ac mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122990af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122990b2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 122990b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122990b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_122990ba:;
  /* 122990ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122990bd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122990c0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122990c3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 122990c6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 122990c9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122990cc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122990cf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122990d2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122990d5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 122990d8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122990dc je 0x122991f0 */
  if (C.zf) goto L_122991f0;
  /* 122990e2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122990e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122990e8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 122990eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122990ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122990f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122990f4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122990f7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 122990fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122990fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12299100 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12299103 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12299106 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12299109 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1229910c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229910f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12299112 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12299115 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12299118 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229911b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229911e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12299121 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299124 jne 0x122991f0 */
  if (!C.zf) goto L_122991f0;
  /* 1229912a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229912e jge 0x1229918a */
  if ((C.sf==C.of)) goto L_1229918a;
  /* 12299130 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12299133 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299136 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1229913a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1229913d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299140 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12299143 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12299145 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12299148 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229914b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1229914e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12299150 jne 0x12299168 */
  if (!C.zf) goto L_12299168;
  /* 12299152 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12299157 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1229915a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1229915c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229915f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12299161 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12299163 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12299166 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12299168:;
  /* 12299168 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1229916d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12299170 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12299172 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299175 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12299178 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1229917c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1229917e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299181 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12299184 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12299188 jmp 0x122991f0 */
  goto L_122991f0;
L_1229918a:;
  /* 1229918a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1229918d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299190 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12299194 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12299197 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229919a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1229919d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1229919f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 122991a2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122991a5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 122991a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122991aa jne 0x122991c7 */
  if (!C.zf) goto L_122991c7;
  /* 122991ac mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122991af sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122991b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122991b7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122991b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122991bc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122991bf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 122991c1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122991c4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_122991c7:;
  /* 122991c7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122991ca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122991cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122991d2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122991d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122991d7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 122991da mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 122991e1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122991e3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122991e6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 122991e9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_122991f0:;
  /* 122991f0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122991f4 je 0x1229920a */
  if (C.zf) goto L_1229920a;
  /* 122991f6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122991f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122991fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 122991fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12299201 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299204 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12299207 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1229920a:;
  /* 1229920a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229920d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299210 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12299213 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12299216 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299219 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229921c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1229921e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12299221 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299224 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12299227 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229922a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1229922d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12299230 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12299232 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12299235 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12299237 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229923a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229923d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1229923f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12299241 jne 0x12299263 */
  if (!C.zf) goto L_12299263;
  /* 12299243 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12299246 cmp eax, dword ptr [0x122c1fa0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122c1fa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229924c jne 0x12299263 */
  if (!C.zf) goto L_12299263;
  /* 1229924e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299251 cmp ecx, dword ptr [0x122c1f98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122c1f98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299257 jne 0x12299263 */
  if (!C.zf) goto L_12299263;
  /* 12299259 mov dword ptr [0x122c1fa0], 0 */
  w32((uint32_t)(0x122c1fa0), (0x0u));
L_12299263:;
  /* 12299263 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12299266 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299269 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1229926b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229926e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12299271:;
  /* 12299271 pop esi */
  ESI = (pop32());
  /* 12299272 mov esp, ebp */
  ESP = (EBP);
  /* 12299274 pop ebp */
  EBP = (pop32());
  /* 12299275 ret  */
  ESPCHK(0x12298d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009280 @ 0x12299280 (271 bytes, 78 insns) */
void f_12299280(void) {
  FTRACE(0x12299280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12299280 push ebp */
  push32((uint32_t)(EBP));
  /* 12299281 mov ebp, esp */
  EBP = (ESP);
  /* 12299283 push ecx */
  push32((uint32_t)(ECX));
  /* 12299284 mov eax, dword ptr [0x122c1fa4] */
  EAX = (r32((uint32_t)(0x122c1fa4)));
  /* 12299289 cmp eax, dword ptr [0x122c1f88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122c1f88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229928f jne 0x122992db */
  if (!C.zf) goto L_122992db;
  /* 12299291 mov ecx, dword ptr [0x122c1f88] */
  ECX = (r32((uint32_t)(0x122c1f88)));
  /* 12299297 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229929a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229929d push ecx */
  push32((uint32_t)(ECX));
  /* 1229929e mov edx, dword ptr [0x122c1fa8] */
  EDX = (r32((uint32_t)(0x122c1fa8)));
  /* 122992a4 push edx */
  push32((uint32_t)(EDX));
  /* 122992a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122992a7 mov eax, dword ptr [0x122c1fac] */
  EAX = (r32((uint32_t)(0x122c1fac)));
  /* 122992ac push eax */
  push32((uint32_t)(EAX));
  /* 122992ad call dword ptr [0x122c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3344))), 0x122992b3u);
  /* 122992b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122992b6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122992ba jne 0x122992c3 */
  if (!C.zf) goto L_122992c3;
  /* 122992bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122992be jmp 0x1229938b */
  goto L_1229938b;
L_122992c3:;
  /* 122992c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122992c6 mov dword ptr [0x122c1fa8], ecx */
  w32((uint32_t)(0x122c1fa8), (ECX));
  /* 122992cc mov edx, dword ptr [0x122c1f88] */
  EDX = (r32((uint32_t)(0x122c1f88)));
  /* 122992d2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122992d5 mov dword ptr [0x122c1f88], edx */
  w32((uint32_t)(0x122c1f88), (EDX));
L_122992db:;
  /* 122992db mov eax, dword ptr [0x122c1fa4] */
  EAX = (r32((uint32_t)(0x122c1fa4)));
  /* 122992e0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122992e3 mov ecx, dword ptr [0x122c1fa8] */
  ECX = (r32((uint32_t)(0x122c1fa8)));
  /* 122992e9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122992eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122992ee push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 122992f3 push 8 */
  push32((uint32_t)(0x8u));
  /* 122992f5 mov edx, dword ptr [0x122c1fac] */
  EDX = (r32((uint32_t)(0x122c1fac)));
  /* 122992fb push edx */
  push32((uint32_t)(EDX));
  /* 122992fc call dword ptr [0x122c3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3340))), 0x12299302u);
  /* 12299302 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12299305 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12299308 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229930b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229930f jne 0x12299315 */
  if (!C.zf) goto L_12299315;
  /* 12299311 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12299313 jmp 0x1229938b */
  goto L_1229938b;
L_12299315:;
  /* 12299315 push 4 */
  push32((uint32_t)(0x4u));
  /* 12299317 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1229931c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12299321 push 0 */
  push32((uint32_t)(0x0u));
  /* 12299323 call dword ptr [0x122c3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3348))), 0x12299329u);
  /* 12299329 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229932c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1229932f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12299332 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299336 jne 0x12299352 */
  if (!C.zf) goto L_12299352;
  /* 12299338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229933b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1229933e push ecx */
  push32((uint32_t)(ECX));
  /* 1229933f push 0 */
  push32((uint32_t)(0x0u));
  /* 12299341 mov edx, dword ptr [0x122c1fac] */
  EDX = (r32((uint32_t)(0x122c1fac)));
  /* 12299347 push edx */
  push32((uint32_t)(EDX));
  /* 12299348 call dword ptr [0x122c3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3320))), 0x1229934eu);
  /* 1229934e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12299350 jmp 0x1229938b */
  goto L_1229938b;
L_12299352:;
  /* 12299352 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12299355 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1229935b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229935e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12299365 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12299368 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1229936f mov eax, dword ptr [0x122c1fa4] */
  EAX = (r32((uint32_t)(0x122c1fa4)));
  /* 12299374 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299377 mov dword ptr [0x122c1fa4], eax */
  w32((uint32_t)(0x122c1fa4), (EAX));
  /* 1229937c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229937f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12299382 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12299388 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1229938b:;
  /* 1229938b mov esp, ebp */
  ESP = (EBP);
  /* 1229938d pop ebp */
  EBP = (pop32());
  /* 1229938e ret  */
  ESPCHK(0x12299280u, _esp0);
  ESP += 4; return;
}

/* FUN_10009390 @ 0x12299390 (494 bytes, 149 insns) */
void f_12299390(void) {
  FTRACE(0x12299390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12299390 push ebp */
  push32((uint32_t)(EBP));
  /* 12299391 mov ebp, esp */
  EBP = (ESP);
  /* 12299393 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12299396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12299399 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1229939c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1229939f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122993a2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122993a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122993a8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_122993af:;
  /* 122993af cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122993b3 jl 0x122993c8 */
  if ((C.sf!=C.of)) goto L_122993c8;
  /* 122993b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122993b8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 122993ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122993bd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 122993c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122993c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 122993c6 jmp 0x122993af */
  goto L_122993af;
L_122993c8:;
  /* 122993c8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122993cb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122993d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122993d4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 122993db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 122993de mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 122993e5 jmp 0x122993f0 */
  goto L_122993f0;
L_122993e7:;
  /* 122993e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122993ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122993ed mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_122993f0:;
  /* 122993f0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122993f4 jge 0x12299416 */
  if ((C.sf==C.of)) goto L_12299416;
  /* 122993f6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122993f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122993fc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 122993ff mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12299402 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12299405 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12299408 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1229940b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229940e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12299411 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12299414 jmp 0x122993e7 */
  goto L_122993e7;
L_12299416:;
  /* 12299416 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12299419 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1229941c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229941f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12299422 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299424 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12299427 push 4 */
  push32((uint32_t)(0x4u));
  /* 12299429 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1229942e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12299433 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12299436 push edx */
  push32((uint32_t)(EDX));
  /* 12299437 call dword ptr [0x122c3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3348))), 0x1229943du);
  /* 1229943d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229943f jne 0x12299449 */
  if (!C.zf) goto L_12299449;
  /* 12299441 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12299444 jmp 0x1229957a */
  goto L_1229957a;
L_12299449:;
  /* 12299449 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229944c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299451 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12299454 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12299457 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1229945a jmp 0x12299468 */
  goto L_12299468;
L_1229945c:;
  /* 1229945c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229945f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299465 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12299468:;
  /* 12299468 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229946b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229946e ja 0x122994cd */
  if ((!C.cf&&!C.zf)) goto L_122994cd;
  /* 12299470 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12299473 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1229947a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229947d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12299487 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229948a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229948d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12299490 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12299493 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12299499 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229949c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122994a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122994a5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 122994a8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122994ab sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122994b1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122994b4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 122994b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122994ba add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122994bf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 122994c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122994c5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 122994cb jmp 0x1229945c */
  goto L_1229945c;
L_122994cd:;
  /* 122994cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122994d0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122994d6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122994d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122994dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122994df mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122994e2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 122994e5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122994e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 122994eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122994ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122994f1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122994f4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 122994f7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122994fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122994fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12299500 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12299503 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12299506 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12299509 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1229950c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229950f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12299512 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12299515 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12299518 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229951b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12299523 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12299526 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12299529 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12299534 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12299537 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1229953b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229953e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12299541 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12299544 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12299547 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1229954a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229954c jne 0x1229955d */
  if (!C.zf) goto L_1229955d;
  /* 1229954e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12299551 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12299554 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12299557 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229955a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1229955d:;
  /* 1229955d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12299562 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12299565 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12299567 not edx */
  EDX = (~(EDX));
  /* 12299569 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229956c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1229956f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12299571 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12299574 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12299577 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1229957a:;
  /* 1229957a mov esp, ebp */
  ESP = (EBP);
  /* 1229957c pop ebp */
  EBP = (pop32());
  /* 1229957d ret  */
  ESPCHK(0x12299390u, _esp0);
  ESP += 4; return;
}

/* FUN_10009580 @ 0x12299580 (1515 bytes, 489 insns) */
void f_12299580(void) {
  FTRACE(0x12299580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12299580 push ebp */
  push32((uint32_t)(EBP));
  /* 12299581 mov ebp, esp */
  EBP = (ESP);
  /* 12299583 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12299586 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12299589 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229958c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1229958e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12299591 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12299594 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12299597 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1229959a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229959d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122995a0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122995a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122995a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122995a9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 122995ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122995af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122995b2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122995b8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122995bb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 122995c2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122995c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122995c8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122995cb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122995ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122995d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122995d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122995d6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 122995d9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122995dc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122995df mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 122995e2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122995e5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122995e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 122995ea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122995ed cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122995f0 jle 0x122998a6 */
  if ((C.zf||C.sf!=C.of)) goto L_122998a6;
  /* 122995f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122995f9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122995fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122995fe jne 0x1229960b */
  if (!C.zf) goto L_1229960b;
  /* 12299600 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12299603 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299606 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299609 jle 0x12299612 */
  if ((C.zf||C.sf!=C.of)) goto L_12299612;
L_1229960b:;
  /* 1229960b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229960d jmp 0x12299b67 */
  goto L_12299b67;
L_12299612:;
  /* 12299612 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12299615 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12299618 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229961b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1229961e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299622 jbe 0x1229962b */
  if ((C.cf||C.zf)) goto L_1229962b;
  /* 12299624 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1229962b:;
  /* 1229962b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229962e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12299631 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12299634 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299637 jne 0x1229970d */
  if (!C.zf) goto L_1229970d;
  /* 1229963d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299641 jae 0x122996a2 */
  if (!C.cf) goto L_122996a2;
  /* 12299643 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12299648 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229964b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1229964d not edx */
  EDX = (~(EDX));
  /* 1229964f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12299652 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299655 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12299659 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1229965b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229965e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299661 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12299665 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299668 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229966b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1229966e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12299671 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299674 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299677 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1229967a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1229967d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299680 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12299684 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12299686 jne 0x122996a0 */
  if (!C.zf) goto L_122996a0;
  /* 12299688 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1229968d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12299690 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12299692 not edx */
  EDX = (~(EDX));
  /* 12299694 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12299697 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12299699 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1229969b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229969e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_122996a0:;
  /* 122996a0 jmp 0x1229970d */
  goto L_1229970d;
L_122996a2:;
  /* 122996a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122996a5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122996a8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122996ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122996af not eax */
  EAX = (~(EAX));
  /* 122996b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122996b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122996b7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 122996be and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122996c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122996c3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122996c6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 122996cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122996d0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122996d3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 122996d6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122996d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122996dc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122996df mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 122996e2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122996e5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122996e8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 122996ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122996ee jne 0x1229970d */
  if (!C.zf) goto L_1229970d;
  /* 122996f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122996f3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122996f6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122996fb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122996fd not eax */
  EAX = (~(EAX));
  /* 122996ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12299702 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12299705 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12299707 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229970a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1229970d:;
  /* 1229970d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12299710 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12299713 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12299716 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12299719 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1229971c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229971f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12299722 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12299725 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12299728 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1229972b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1229972e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299731 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12299734 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12299737 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229973b jle 0x12299887 */
  if ((C.zf||C.sf!=C.of)) goto L_12299887;
  /* 12299741 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12299744 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299747 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1229974a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229974d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12299750 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12299753 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12299756 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229975a jbe 0x12299763 */
  if ((C.cf||C.zf)) goto L_12299763;
  /* 1229975c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12299763:;
  /* 12299763 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12299766 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12299769 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1229976c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1229976f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12299772 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12299775 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12299778 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1229977b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229977e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12299781 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12299784 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12299787 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229978a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1229978d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12299790 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12299793 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12299796 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12299799 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229979c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229979f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 122997a2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122997a5 jne 0x12299873 */
  if (!C.zf) goto L_12299873;
  /* 122997ab cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122997af jae 0x1229980c */
  if (!C.cf) goto L_1229980c;
  /* 122997b1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122997b4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122997b7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 122997bb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122997be add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122997c1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 122997c4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 122997c7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122997ca add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122997cd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 122997d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122997d2 jne 0x122997ea */
  if (!C.zf) goto L_122997ea;
  /* 122997d4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122997d9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122997dc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122997de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122997e1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122997e3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 122997e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122997e8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_122997ea:;
  /* 122997ea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122997ef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122997f2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122997f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122997f7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122997fa mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 122997fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12299800 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12299803 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299806 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1229980a jmp 0x12299873 */
  goto L_12299873;
L_1229980c:;
  /* 1229980c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1229980f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299812 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12299816 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299819 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229981c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1229981f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12299822 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299825 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299828 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1229982b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229982d jne 0x1229984a */
  if (!C.zf) goto L_1229984a;
  /* 1229982f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12299832 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12299835 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1229983a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1229983c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229983f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12299842 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12299844 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12299847 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1229984a:;
  /* 1229984a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229984d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12299850 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12299855 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12299857 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229985a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1229985d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12299864 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12299866 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12299869 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1229986c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12299873:;
  /* 12299873 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12299876 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12299879 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1229987b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229987e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299881 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12299884 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12299887:;
  /* 12299887 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1229988a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229988d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12299890 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12299892 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12299895 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299898 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1229989b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229989e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 122998a1 jmp 0x12299b62 */
  goto L_12299b62;
L_122998a6:;
  /* 122998a6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122998a9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122998ac jge 0x12299b62 */
  if ((C.sf==C.of)) goto L_12299b62;
  /* 122998b2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122998b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122998b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122998bb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122998bd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122998c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122998c3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122998c6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122998c9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 122998cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122998cf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122998d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122998d5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122998d8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122998db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 122998de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122998e1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 122998e4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122998e7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 122998ea cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122998ee jbe 0x122998f7 */
  if ((C.cf||C.zf)) goto L_122998f7;
  /* 122998f0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_122998f7:;
  /* 122998f7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122998fa and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 122998fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122998ff jne 0x12299a40 */
  if (!C.zf) goto L_12299a40;
  /* 12299905 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12299908 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1229990b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229990e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12299911 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299915 jbe 0x1229991e */
  if ((C.cf||C.zf)) goto L_1229991e;
  /* 12299917 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1229991e:;
  /* 1229991e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12299921 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12299924 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12299927 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229992a jne 0x12299a00 */
  if (!C.zf) goto L_12299a00;
  /* 12299930 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299934 jae 0x12299995 */
  if (!C.cf) goto L_12299995;
  /* 12299936 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1229993b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229993e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12299940 not edx */
  EDX = (~(EDX));
  /* 12299942 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12299945 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299948 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1229994c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1229994e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12299951 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299954 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12299958 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1229995b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229995e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12299961 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12299964 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299967 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229996a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1229996d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299970 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299973 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12299977 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12299979 jne 0x12299993 */
  if (!C.zf) goto L_12299993;
  /* 1229997b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12299980 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12299983 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12299985 not edx */
  EDX = (~(EDX));
  /* 12299987 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229998a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1229998c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1229998e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12299991 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12299993:;
  /* 12299993 jmp 0x12299a00 */
  goto L_12299a00;
L_12299995:;
  /* 12299995 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12299998 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229999b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122999a0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122999a2 not eax */
  EAX = (~(EAX));
  /* 122999a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122999a7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122999aa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 122999b1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122999b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122999b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122999b9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 122999c0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122999c3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122999c6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 122999c9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122999cc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122999cf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122999d2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 122999d5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122999d8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122999db movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 122999df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122999e1 jne 0x12299a00 */
  if (!C.zf) goto L_12299a00;
  /* 122999e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122999e6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122999e9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122999ee shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122999f0 not eax */
  EAX = (~(EAX));
  /* 122999f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122999f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122999f8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 122999fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122999fd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12299a00:;
  /* 12299a00 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12299a03 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12299a06 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12299a09 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12299a0c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12299a0f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12299a12 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12299a15 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12299a18 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12299a1b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12299a1e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12299a21 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299a24 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12299a27 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12299a2a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12299a2d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12299a30 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12299a33 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299a37 jbe 0x12299a40 */
  if ((C.cf||C.zf)) goto L_12299a40;
  /* 12299a39 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12299a40:;
  /* 12299a40 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12299a43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12299a46 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12299a49 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12299a4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12299a4f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12299a52 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12299a55 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12299a58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12299a5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12299a5e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12299a61 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12299a64 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12299a67 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12299a6a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12299a6d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12299a70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12299a73 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12299a76 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12299a79 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12299a7c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12299a7f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299a82 jne 0x12299b4e */
  if (!C.zf) goto L_12299b4e;
  /* 12299a88 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299a8c jae 0x12299ae8 */
  if (!C.cf) goto L_12299ae8;
  /* 12299a8e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299a91 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299a94 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12299a98 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299a9b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299a9e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12299aa1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12299aa3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299aa6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299aa9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12299aac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12299aae jne 0x12299ac6 */
  if (!C.zf) goto L_12299ac6;
  /* 12299ab0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12299ab5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12299ab8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12299aba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12299abd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12299abf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12299ac1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12299ac4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12299ac6:;
  /* 12299ac6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12299acb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12299ace shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12299ad0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12299ad3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299ad6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12299ada or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12299adc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12299adf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299ae2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12299ae6 jmp 0x12299b4e */
  goto L_12299b4e;
L_12299ae8:;
  /* 12299ae8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299aeb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299aee movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12299af2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299af5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299af8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12299afb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12299afd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299b00 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299b03 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12299b06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12299b08 jne 0x12299b25 */
  if (!C.zf) goto L_12299b25;
  /* 12299b0a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12299b0d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12299b10 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12299b15 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12299b17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12299b1a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12299b1d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12299b1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12299b22 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12299b25:;
  /* 12299b25 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12299b28 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12299b2b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12299b30 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12299b32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12299b35 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299b38 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12299b3f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12299b41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12299b44 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12299b47 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12299b4e:;
  /* 12299b4e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12299b51 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12299b54 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12299b56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12299b59 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299b5c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12299b5f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12299b62:;
  /* 12299b62 mov eax, 1 */
  EAX = (0x1u);
L_12299b67:;
  /* 12299b67 mov esp, ebp */
  ESP = (EBP);
  /* 12299b69 pop ebp */
  EBP = (pop32());
  /* 12299b6a ret  */
  ESPCHK(0x12299580u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b70 @ 0x12299b70 (304 bytes, 79 insns) */
void f_12299b70(void) {
  FTRACE(0x12299b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12299b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12299b71 mov ebp, esp */
  EBP = (ESP);
  /* 12299b73 push ecx */
  push32((uint32_t)(ECX));
  /* 12299b74 cmp dword ptr [0x122c1fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c1fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299b7b je 0x12299c9c */
  if (C.zf) goto L_12299c9c;
  /* 12299b81 mov eax, dword ptr [0x122c1f98] */
  EAX = (r32((uint32_t)(0x122c1f98)));
  /* 12299b86 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12299b89 mov ecx, dword ptr [0x122c1fa0] */
  ECX = (r32((uint32_t)(0x122c1fa0)));
  /* 12299b8f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12299b92 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299b94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12299b97 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12299b9c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12299ba1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12299ba4 push eax */
  push32((uint32_t)(EAX));
  /* 12299ba5 call dword ptr [0x122c3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3324))), 0x12299babu);
  /* 12299bab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12299bb0 mov ecx, dword ptr [0x122c1f98] */
  ECX = (r32((uint32_t)(0x122c1f98)));
  /* 12299bb6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12299bb8 mov eax, dword ptr [0x122c1fa0] */
  EAX = (r32((uint32_t)(0x122c1fa0)));
  /* 12299bbd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12299bc0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12299bc2 mov edx, dword ptr [0x122c1fa0] */
  EDX = (r32((uint32_t)(0x122c1fa0)));
  /* 12299bc8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12299bcb mov eax, dword ptr [0x122c1fa0] */
  EAX = (r32((uint32_t)(0x122c1fa0)));
  /* 12299bd0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12299bd3 mov edx, dword ptr [0x122c1f98] */
  EDX = (r32((uint32_t)(0x122c1f98)));
  /* 12299bd9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12299be4 mov eax, dword ptr [0x122c1fa0] */
  EAX = (r32((uint32_t)(0x122c1fa0)));
  /* 12299be9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12299bec mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12299bef sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12299bf2 mov eax, dword ptr [0x122c1fa0] */
  EAX = (r32((uint32_t)(0x122c1fa0)));
  /* 12299bf7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12299bfa mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12299bfd mov edx, dword ptr [0x122c1fa0] */
  EDX = (r32((uint32_t)(0x122c1fa0)));
  /* 12299c03 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12299c06 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12299c0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12299c0c jne 0x12299c22 */
  if (!C.zf) goto L_12299c22;
  /* 12299c0e mov edx, dword ptr [0x122c1fa0] */
  EDX = (r32((uint32_t)(0x122c1fa0)));
  /* 12299c14 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12299c17 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12299c19 mov ecx, dword ptr [0x122c1fa0] */
  ECX = (r32((uint32_t)(0x122c1fa0)));
  /* 12299c1f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12299c22:;
  /* 12299c22 mov edx, dword ptr [0x122c1fa0] */
  EDX = (r32((uint32_t)(0x122c1fa0)));
  /* 12299c28 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299c2c jne 0x12299c92 */
  if (!C.zf) goto L_12299c92;
  /* 12299c2e cmp dword ptr [0x122c1fa4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122c1fa4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299c35 jle 0x12299c92 */
  if ((C.zf||C.sf!=C.of)) goto L_12299c92;
  /* 12299c37 mov eax, dword ptr [0x122c1fa0] */
  EAX = (r32((uint32_t)(0x122c1fa0)));
  /* 12299c3c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12299c3f push ecx */
  push32((uint32_t)(ECX));
  /* 12299c40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12299c42 mov edx, dword ptr [0x122c1fac] */
  EDX = (r32((uint32_t)(0x122c1fac)));
  /* 12299c48 push edx */
  push32((uint32_t)(EDX));
  /* 12299c49 call dword ptr [0x122c3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3320))), 0x12299c4fu);
  /* 12299c4f mov eax, dword ptr [0x122c1fa4] */
  EAX = (r32((uint32_t)(0x122c1fa4)));
  /* 12299c54 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12299c57 mov ecx, dword ptr [0x122c1fa8] */
  ECX = (r32((uint32_t)(0x122c1fa8)));
  /* 12299c5d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299c5f mov edx, dword ptr [0x122c1fa0] */
  EDX = (r32((uint32_t)(0x122c1fa0)));
  /* 12299c65 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299c68 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12299c6a push ecx */
  push32((uint32_t)(ECX));
  /* 12299c6b mov eax, dword ptr [0x122c1fa0] */
  EAX = (r32((uint32_t)(0x122c1fa0)));
  /* 12299c70 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299c73 push eax */
  push32((uint32_t)(EAX));
  /* 12299c74 mov ecx, dword ptr [0x122c1fa0] */
  ECX = (r32((uint32_t)(0x122c1fa0)));
  /* 12299c7a push ecx */
  push32((uint32_t)(ECX));
  /* 12299c7b call 0x1229c2a0 */
  push32(0x12299c80u); f_1229c2a0();
  /* 12299c80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12299c83 mov edx, dword ptr [0x122c1fa4] */
  EDX = (r32((uint32_t)(0x122c1fa4)));
  /* 12299c89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12299c8c mov dword ptr [0x122c1fa4], edx */
  w32((uint32_t)(0x122c1fa4), (EDX));
L_12299c92:;
  /* 12299c92 mov dword ptr [0x122c1fa0], 0 */
  w32((uint32_t)(0x122c1fa0), (0x0u));
L_12299c9c:;
  /* 12299c9c mov esp, ebp */
  ESP = (EBP);
  /* 12299c9e pop ebp */
  EBP = (pop32());
  /* 12299c9f ret  */
  ESPCHK(0x12299b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ca0 @ 0x12299ca0 (1565 bytes, 343 insns) */
void f_12299ca0(void) {
  FTRACE(0x12299ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12299ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12299ca1 mov ebp, esp */
  EBP = (ESP);
  /* 12299ca3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12299ca9 mov eax, dword ptr [0x122c1fa4] */
  EAX = (r32((uint32_t)(0x122c1fa4)));
  /* 12299cae imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12299cb1 push eax */
  push32((uint32_t)(EAX));
  /* 12299cb2 mov ecx, dword ptr [0x122c1fa8] */
  ECX = (r32((uint32_t)(0x122c1fa8)));
  /* 12299cb8 push ecx */
  push32((uint32_t)(ECX));
  /* 12299cb9 call dword ptr [0x122c3244] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3244))), 0x12299cbfu);
  /* 12299cbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12299cc1 je 0x12299ccb */
  if (C.zf) goto L_12299ccb;
  /* 12299cc3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12299cc6 jmp 0x1229a2b9 */
  goto L_1229a2b9;
L_12299ccb:;
  /* 12299ccb mov edx, dword ptr [0x122c1fa8] */
  EDX = (r32((uint32_t)(0x122c1fa8)));
  /* 12299cd1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12299cd7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12299ce1 jmp 0x12299cf2 */
  goto L_12299cf2;
L_12299ce3:;
  /* 12299ce3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12299ce9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299cec mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12299cf2:;
  /* 12299cf2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12299cf8 cmp ecx, dword ptr [0x122c1fa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122c1fa4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299cfe jge 0x1229a2b7 */
  if ((C.sf==C.of)) goto L_1229a2b7;
  /* 12299d04 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12299d0a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12299d0d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12299d13 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12299d18 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12299d1e push ecx */
  push32((uint32_t)(ECX));
  /* 12299d1f call dword ptr [0x122c3244] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3244))), 0x12299d25u);
  /* 12299d25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12299d27 je 0x12299d33 */
  if (C.zf) goto L_12299d33;
  /* 12299d29 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12299d2e jmp 0x1229a2b9 */
  goto L_1229a2b9;
L_12299d33:;
  /* 12299d33 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12299d39 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12299d3c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12299d42 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12299d48 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299d4e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12299d51 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12299d57 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12299d5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12299d5d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12299d67 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12299d71 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12299d78 jmp 0x12299d83 */
  goto L_12299d83;
L_12299d7a:;
  /* 12299d7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12299d7d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299d80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12299d83:;
  /* 12299d83 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299d87 jge 0x1229a27b */
  if ((C.sf==C.of)) goto L_1229a27b;
  /* 12299d8d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12299d97 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12299da1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 12299dab mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12299db5 jmp 0x12299dc6 */
  goto L_12299dc6;
L_12299db7:;
  /* 12299db7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12299dbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299dc0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12299dc6:;
  /* 12299dc6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299dcd jge 0x12299de2 */
  if ((C.sf==C.of)) goto L_12299de2;
  /* 12299dcf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12299dd5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12299de0 jmp 0x12299db7 */
  goto L_12299db7;
L_12299de2:;
  /* 12299de2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299de6 jl 0x1229a21d */
  if ((C.sf!=C.of)) goto L_1229a21d;
  /* 12299dec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12299df1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12299df7 push ecx */
  push32((uint32_t)(ECX));
  /* 12299df8 call dword ptr [0x122c3244] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3244))), 0x12299dfeu);
  /* 12299dfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12299e00 je 0x12299e0c */
  if (C.zf) goto L_12299e0c;
  /* 12299e02 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12299e07 jmp 0x1229a2b9 */
  goto L_1229a2b9;
L_12299e0c:;
  /* 12299e0c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12299e12 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12299e15 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 12299e1f jmp 0x12299e30 */
  goto L_12299e30;
L_12299e21:;
  /* 12299e21 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12299e27 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299e2a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12299e30:;
  /* 12299e30 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299e37 jge 0x12299fb4 */
  if ((C.sf==C.of)) goto L_12299fb4;
  /* 12299e3d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12299e40 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299e43 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12299e49 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12299e4f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299e55 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 12299e5b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12299e61 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299e65 jne 0x12299e72 */
  if (!C.zf) goto L_12299e72;
  /* 12299e67 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 12299e6d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299e70 je 0x12299e7c */
  if (C.zf) goto L_12299e7c;
L_12299e72:;
  /* 12299e72 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12299e77 jmp 0x1229a2b9 */
  goto L_1229a2b9;
L_12299e7c:;
  /* 12299e7c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12299e82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12299e84 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12299e8a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12299e90 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12299e96 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 12299e9c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12299e9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12299ea1 je 0x12299ed9 */
  if (C.zf) goto L_12299ed9;
  /* 12299ea3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12299ea9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12299eac mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12299eb2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299ebc jle 0x12299ec8 */
  if ((C.zf||C.sf!=C.of)) goto L_12299ec8;
  /* 12299ebe mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12299ec3 jmp 0x1229a2b9 */
  goto L_1229a2b9;
L_12299ec8:;
  /* 12299ec8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 12299ece add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299ed1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12299ed7 jmp 0x12299f1b */
  goto L_12299f1b;
L_12299ed9:;
  /* 12299ed9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 12299edf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12299ee2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12299ee5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12299eeb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299ef2 jle 0x12299efe */
  if ((C.zf||C.sf!=C.of)) goto L_12299efe;
  /* 12299ef4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12299efe:;
  /* 12299efe mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12299f04 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 12299f0b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299f0e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12299f14 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_12299f1b:;
  /* 12299f1b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299f22 jl 0x12299f3d */
  if ((C.sf!=C.of)) goto L_12299f3d;
  /* 12299f24 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12299f2a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12299f2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12299f2f jne 0x12299f3d */
  if (!C.zf) goto L_12299f3d;
  /* 12299f31 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299f3b jle 0x12299f47 */
  if ((C.zf||C.sf!=C.of)) goto L_12299f47;
L_12299f3d:;
  /* 12299f3d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12299f42 jmp 0x1229a2b9 */
  goto L_1229a2b9;
L_12299f47:;
  /* 12299f47 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12299f4d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299f53 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12299f56 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299f5c je 0x12299f68 */
  if (C.zf) goto L_12299f68;
  /* 12299f5e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12299f63 jmp 0x1229a2b9 */
  goto L_1229a2b9;
L_12299f68:;
  /* 12299f68 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12299f6e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299f74 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12299f7a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12299f80 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299f86 jb 0x12299e7c */
  if (C.cf) goto L_12299e7c;
  /* 12299f8c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12299f92 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299f98 je 0x12299fa4 */
  if (C.zf) goto L_12299fa4;
  /* 12299f9a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12299f9f jmp 0x1229a2b9 */
  goto L_1229a2b9;
L_12299fa4:;
  /* 12299fa4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12299fa7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299fac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12299faf jmp 0x12299e21 */
  goto L_12299e21;
L_12299fb4:;
  /* 12299fb4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12299fb7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12299fb9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299fbf je 0x12299fcb */
  if (C.zf) goto L_12299fcb;
  /* 12299fc1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12299fc6 jmp 0x1229a2b9 */
  goto L_1229a2b9;
L_12299fcb:;
  /* 12299fcb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12299fce mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12299fd4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12299fdb jmp 0x12299fe6 */
  goto L_12299fe6;
L_12299fdd:;
  /* 12299fdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12299fe0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12299fe3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12299fe6:;
  /* 12299fe6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12299fea jge 0x1229a21d */
  if ((C.sf==C.of)) goto L_1229a21d;
  /* 12299ff0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 12299ffa mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1229a000 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1229a006:;
  /* 1229a006 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1229a00c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1229a00f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1229a015 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1229a01b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a021 je 0x1229a14a */
  if (C.zf) goto L_1229a14a;
  /* 1229a027 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1229a02a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1229a030 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a037 je 0x1229a14a */
  if (C.zf) goto L_1229a14a;
  /* 1229a03d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1229a043 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a049 jb 0x1229a05e */
  if (C.cf) goto L_1229a05e;
  /* 1229a04b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1229a051 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a056 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a05c jb 0x1229a068 */
  if (C.cf) goto L_1229a068;
L_1229a05e:;
  /* 1229a05e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1229a063 jmp 0x1229a2b9 */
  goto L_1229a2b9;
L_1229a068:;
  /* 1229a068 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1229a06e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1229a074 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1229a07a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1229a080 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a083 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1229a086 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229a089 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a08e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1229a094:;
  /* 1229a094 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229a097 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a09d je 0x1229a0be */
  if (C.zf) goto L_1229a0be;
  /* 1229a09f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229a0a2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a0a8 jne 0x1229a0ac */
  if (!C.zf) goto L_1229a0ac;
  /* 1229a0aa jmp 0x1229a0be */
  goto L_1229a0be;
L_1229a0ac:;
  /* 1229a0ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229a0af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1229a0b1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1229a0b4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229a0b7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a0b9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1229a0bc jmp 0x1229a094 */
  goto L_1229a094;
L_1229a0be:;
  /* 1229a0be mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229a0c1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a0c7 jne 0x1229a0d3 */
  if (!C.zf) goto L_1229a0d3;
  /* 1229a0c9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1229a0ce jmp 0x1229a2b9 */
  goto L_1229a2b9;
L_1229a0d3:;
  /* 1229a0d3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1229a0d9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1229a0db sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1229a0de sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229a0e1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1229a0e7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a0ee jle 0x1229a0fa */
  if ((C.zf||C.sf!=C.of)) goto L_1229a0fa;
  /* 1229a0f0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1229a0fa:;
  /* 1229a0fa mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1229a100 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a103 je 0x1229a10f */
  if (C.zf) goto L_1229a10f;
  /* 1229a105 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1229a10a jmp 0x1229a2b9 */
  goto L_1229a2b9;
L_1229a10f:;
  /* 1229a10f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1229a115 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1229a118 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a11e je 0x1229a12a */
  if (C.zf) goto L_1229a12a;
  /* 1229a120 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1229a125 jmp 0x1229a2b9 */
  goto L_1229a2b9;
L_1229a12a:;
  /* 1229a12a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1229a130 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1229a136 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1229a13c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a13f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1229a145 jmp 0x1229a006 */
  goto L_1229a006;
L_1229a14a:;
  /* 1229a14a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a151 je 0x1229a1c1 */
  if (C.zf) goto L_1229a1c1;
  /* 1229a153 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a157 jge 0x1229a18b */
  if ((C.sf==C.of)) goto L_1229a18b;
  /* 1229a159 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1229a15e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1229a161 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1229a163 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1229a169 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1229a16b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1229a171 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1229a176 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1229a179 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1229a17b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1229a181 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1229a183 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1229a189 jmp 0x1229a1c1 */
  goto L_1229a1c1;
L_1229a18b:;
  /* 1229a18b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1229a18e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229a191 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1229a196 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1229a198 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1229a19e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1229a1a0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1229a1a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1229a1a9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229a1ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1229a1b1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1229a1b3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1229a1b9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1229a1bb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1229a1c1:;
  /* 1229a1c1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1229a1c7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1229a1ca cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a1d0 jne 0x1229a1e4 */
  if (!C.zf) goto L_1229a1e4;
  /* 1229a1d2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1229a1d5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1229a1db cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a1e2 je 0x1229a1ee */
  if (C.zf) goto L_1229a1ee;
L_1229a1e4:;
  /* 1229a1e4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1229a1e9 jmp 0x1229a2b9 */
  goto L_1229a2b9;
L_1229a1ee:;
  /* 1229a1ee mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1229a1f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1229a1f7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a1fd je 0x1229a209 */
  if (C.zf) goto L_1229a209;
  /* 1229a1ff mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1229a204 jmp 0x1229a2b9 */
  goto L_1229a2b9;
L_1229a209:;
  /* 1229a209 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1229a20f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a212 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1229a218 jmp 0x12299fdd */
  goto L_12299fdd;
L_1229a21d:;
  /* 1229a21d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229a220 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1229a226 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1229a22c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a230 jne 0x1229a24a */
  if (!C.zf) goto L_1229a24a;
  /* 1229a232 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229a235 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1229a23b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1229a241 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a248 je 0x1229a251 */
  if (C.zf) goto L_1229a251;
L_1229a24a:;
  /* 1229a24a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1229a24f jmp 0x1229a2b9 */
  goto L_1229a2b9;
L_1229a251:;
  /* 1229a251 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1229a257 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a25d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1229a263 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229a266 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a26b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1229a26e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229a271 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1229a273 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1229a276 jmp 0x12299d7a */
  goto L_12299d7a;
L_1229a27b:;
  /* 1229a27b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1229a281 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1229a287 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a289 jne 0x1229a29c */
  if (!C.zf) goto L_1229a29c;
  /* 1229a28b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1229a291 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1229a297 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a29a je 0x1229a2a3 */
  if (C.zf) goto L_1229a2a3;
L_1229a29c:;
  /* 1229a29c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1229a2a1 jmp 0x1229a2b9 */
  goto L_1229a2b9;
L_1229a2a3:;
  /* 1229a2a3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1229a2a9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a2ac mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1229a2b2 jmp 0x12299ce3 */
  goto L_12299ce3;
L_1229a2b7:;
  /* 1229a2b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1229a2b9:;
  /* 1229a2b9 mov esp, ebp */
  ESP = (EBP);
  /* 1229a2bb pop ebp */
  EBP = (pop32());
  /* 1229a2bc ret  */
  ESPCHK(0x12299ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2c0 @ 0x1229a2c0 (250 bytes, 92 insns) */
void f_1229a2c0(void) {
  FTRACE(0x1229a2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229a2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229a2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1229a2c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229a2c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1229a2c7 push esi */
  push32((uint32_t)(ESI));
  /* 1229a2c8 push edi */
  push32((uint32_t)(EDI));
  /* 1229a2c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1229a2cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1229a2cf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1229a2d2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1229a2d5:;
  /* 1229a2d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a2d9 jne 0x1229a2f9 */
  if (!C.zf) goto L_1229a2f9;
  /* 1229a2db push 0x122bc1a0 */
  push32((uint32_t)(0x122bc1a0u));
  /* 1229a2e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229a2e2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1229a2e4 push 0x122bc194 */
  push32((uint32_t)(0x122bc194u));
  /* 1229a2e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229a2eb call 0x12293470 */
  push32(0x1229a2f0u); f_12293470();
  /* 1229a2f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a2f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a2f6 jne 0x1229a2f9 */
  if (!C.zf) goto L_1229a2f9;
  /* 1229a2f8 int3  */
  x86_unimpl("int3 @ 0x1229a2f8");
L_1229a2f9:;
  /* 1229a2f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229a2fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229a2fd jne 0x1229a2d5 */
  if (!C.zf) goto L_1229a2d5;
L_1229a2ff:;
  /* 1229a2ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a303 jne 0x1229a323 */
  if (!C.zf) goto L_1229a323;
  /* 1229a305 push 0x122bc184 */
  push32((uint32_t)(0x122bc184u));
  /* 1229a30a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229a30c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1229a30e push 0x122bc194 */
  push32((uint32_t)(0x122bc194u));
  /* 1229a313 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229a315 call 0x12293470 */
  push32(0x1229a31au); f_12293470();
  /* 1229a31a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a31d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a320 jne 0x1229a323 */
  if (!C.zf) goto L_1229a323;
  /* 1229a322 int3  */
  x86_unimpl("int3 @ 0x1229a322");
L_1229a323:;
  /* 1229a323 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229a325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229a327 jne 0x1229a2ff */
  if (!C.zf) goto L_1229a2ff;
  /* 1229a329 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a32c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1229a333 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229a339 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1229a33c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a33f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229a342 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1229a344 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a347 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1229a34e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229a351 push ecx */
  push32((uint32_t)(ECX));
  /* 1229a352 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229a355 push edx */
  push32((uint32_t)(EDX));
  /* 1229a356 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a359 push eax */
  push32((uint32_t)(EAX));
  /* 1229a35a call 0x1229b340 */
  push32(0x1229a35fu); f_1229b340();
  /* 1229a35f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a362 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1229a365 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a368 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1229a36b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229a36e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a371 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1229a374 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a377 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a37b jl 0x1229a39f */
  if ((C.sf!=C.of)) goto L_1229a39f;
  /* 1229a37d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a380 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1229a382 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1229a385 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229a387 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1229a38d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1229a390 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a393 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1229a395 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a398 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a39b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1229a39d jmp 0x1229a3b0 */
  goto L_1229a3b0;
L_1229a39f:;
  /* 1229a39f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a3a2 push edx */
  push32((uint32_t)(EDX));
  /* 1229a3a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229a3a5 call 0x1229b0c0 */
  push32(0x1229a3aau); f_1229b0c0();
  /* 1229a3aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a3ad mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1229a3b0:;
  /* 1229a3b0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1229a3b3 pop edi */
  EDI = (pop32());
  /* 1229a3b4 pop esi */
  ESI = (pop32());
  /* 1229a3b5 pop ebx */
  EBX = (pop32());
  /* 1229a3b6 mov esp, ebp */
  ESP = (EBP);
  /* 1229a3b8 pop ebp */
  EBP = (pop32());
  /* 1229a3b9 ret  */
  ESPCHK(0x1229a2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3c0 @ 0x1229a3c0 (183 bytes, 58 insns) */
void f_1229a3c0(void) {
  FTRACE(0x1229a3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229a3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229a3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1229a3c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229a3c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229a3c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a3cc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a3d1 ja 0x1229a3ea */
  if ((!C.cf&&!C.zf)) goto L_1229a3ea;
  /* 1229a3d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229a3d6 mov edx, dword ptr [0x122bec98] */
  EDX = (r32((uint32_t)(0x122bec98)));
  /* 1229a3dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229a3de mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1229a3e2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1229a3e5 jmp 0x1229a473 */
  goto L_1229a473;
L_1229a3ea:;
  /* 1229a3ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229a3ed sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1229a3f0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1229a3f6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1229a3fc mov edx, dword ptr [0x122bec98] */
  EDX = (r32((uint32_t)(0x122bec98)));
  /* 1229a402 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229a404 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1229a408 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1229a40d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229a40f je 0x1229a433 */
  if (C.zf) goto L_1229a433;
  /* 1229a411 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229a414 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1229a417 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1229a41d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1229a420 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1229a423 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1229a426 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1229a42a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1229a431 jmp 0x1229a444 */
  goto L_1229a444;
L_1229a433:;
  /* 1229a433 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1229a436 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1229a439 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1229a43d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1229a444:;
  /* 1229a444 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229a446 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229a448 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229a44a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1229a44d push ecx */
  push32((uint32_t)(ECX));
  /* 1229a44e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229a451 push edx */
  push32((uint32_t)(EDX));
  /* 1229a452 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1229a455 push eax */
  push32((uint32_t)(EAX));
  /* 1229a456 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229a458 call 0x1229c5e0 */
  push32(0x1229a45du); f_1229c5e0();
  /* 1229a45d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a460 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229a462 jne 0x1229a468 */
  if (!C.zf) goto L_1229a468;
  /* 1229a464 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229a466 jmp 0x1229a473 */
  goto L_1229a473;
L_1229a468:;
  /* 1229a468 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229a46b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229a470 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1229a473:;
  /* 1229a473 mov esp, ebp */
  ESP = (EBP);
  /* 1229a475 pop ebp */
  EBP = (pop32());
  /* 1229a476 ret  */
  ESPCHK(0x1229a3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a480 @ 0x1229a480 (836 bytes, 238 insns) */
void f_1229a480(void) {
  FTRACE(0x1229a480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229a480 push ebp */
  push32((uint32_t)(EBP));
  /* 1229a481 mov ebp, esp */
  EBP = (ESP);
  /* 1229a483 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229a486 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1229a488 call 0x12297db0 */
  push32(0x1229a48du); f_12297db0();
  /* 1229a48d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229a493 push eax */
  push32((uint32_t)(EAX));
  /* 1229a494 call 0x1229a7d0 */
  push32(0x1229a499u); f_1229a7d0();
  /* 1229a499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a49c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1229a49f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229a4a2 cmp ecx, dword ptr [0x122c1ce4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122c1ce4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a4a8 jne 0x1229a4bb */
  if (!C.zf) goto L_1229a4bb;
  /* 1229a4aa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1229a4ac call 0x12297e50 */
  push32(0x1229a4b1u); f_12297e50();
  /* 1229a4b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a4b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229a4b6 jmp 0x1229a7c0 */
  goto L_1229a7c0;
L_1229a4bb:;
  /* 1229a4bb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a4bf jne 0x1229a4dc */
  if (!C.zf) goto L_1229a4dc;
  /* 1229a4c1 call 0x1229a8b0 */
  push32(0x1229a4c6u); f_1229a8b0();
  /* 1229a4c6 call 0x1229a930 */
  push32(0x1229a4cbu); f_1229a930();
  /* 1229a4cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1229a4cd call 0x12297e50 */
  push32(0x1229a4d2u); f_12297e50();
  /* 1229a4d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a4d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229a4d7 jmp 0x1229a7c0 */
  goto L_1229a7c0;
L_1229a4dc:;
  /* 1229a4dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1229a4e3 jmp 0x1229a4ee */
  goto L_1229a4ee;
L_1229a4e5:;
  /* 1229a4e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229a4e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a4eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1229a4ee:;
  /* 1229a4ee cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a4f2 jae 0x1229a63f */
  if (!C.cf) goto L_1229a63f;
  /* 1229a4f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229a4fb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229a4fe mov ecx, dword ptr [eax + 0x122beeb8] */
  ECX = (r32((uint32_t)(EAX + 0x122beeb8)));
  /* 1229a504 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a507 jne 0x1229a63a */
  if (!C.zf) goto L_1229a63a;
  /* 1229a50d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1229a514 jmp 0x1229a51f */
  goto L_1229a51f;
L_1229a516:;
  /* 1229a516 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a519 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a51c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1229a51f:;
  /* 1229a51f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a526 jae 0x1229a534 */
  if (!C.cf) goto L_1229a534;
  /* 1229a528 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a52b mov byte ptr [eax + 0x122c1e80], 0 */
  w8((uint32_t)(EAX + 0x122c1e80), (0x0u));
  /* 1229a532 jmp 0x1229a516 */
  goto L_1229a516;
L_1229a534:;
  /* 1229a534 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1229a53b jmp 0x1229a546 */
  goto L_1229a546;
L_1229a53d:;
  /* 1229a53d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229a540 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a543 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1229a546:;
  /* 1229a546 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a54a jae 0x1229a5c7 */
  if (!C.cf) goto L_1229a5c7;
  /* 1229a54c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229a54f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229a552 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229a555 lea ecx, [edx + eax*8 + 0x122beec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x122beec8));
  /* 1229a55c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229a55f jmp 0x1229a56a */
  goto L_1229a56a;
L_1229a561:;
  /* 1229a561 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229a564 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a567 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1229a56a:;
  /* 1229a56a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229a56d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229a56f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1229a571 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229a573 je 0x1229a5c2 */
  if (C.zf) goto L_1229a5c2;
  /* 1229a575 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229a578 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229a57a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1229a57d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229a57f je 0x1229a5c2 */
  if (C.zf) goto L_1229a5c2;
  /* 1229a581 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229a584 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229a586 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1229a588 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1229a58b jmp 0x1229a596 */
  goto L_1229a596;
L_1229a58d:;
  /* 1229a58d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a590 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a593 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1229a596:;
  /* 1229a596 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229a599 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229a59b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1229a59e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a5a1 ja 0x1229a5c0 */
  if ((!C.cf&&!C.zf)) goto L_1229a5c0;
  /* 1229a5a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a5a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229a5a9 mov dl, byte ptr [eax + 0x122c1e81] */
  DL = (r8((uint32_t)(EAX + 0x122c1e81)));
  /* 1229a5af or dl, byte ptr [ecx + 0x122beeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x122beeb0))); DL = (_r); fl_logic(_r,8); }
  /* 1229a5b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a5b8 mov byte ptr [eax + 0x122c1e81], dl */
  w8((uint32_t)(EAX + 0x122c1e81), (DL));
  /* 1229a5be jmp 0x1229a58d */
  goto L_1229a58d;
L_1229a5c0:;
  /* 1229a5c0 jmp 0x1229a561 */
  goto L_1229a561;
L_1229a5c2:;
  /* 1229a5c2 jmp 0x1229a53d */
  goto L_1229a53d;
L_1229a5c7:;
  /* 1229a5c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229a5ca mov dword ptr [0x122c1ce4], ecx */
  w32((uint32_t)(0x122c1ce4), (ECX));
  /* 1229a5d0 mov dword ptr [0x122c1d6c], 1 */
  w32((uint32_t)(0x122c1d6c), (0x1u));
  /* 1229a5da mov edx, dword ptr [0x122c1ce4] */
  EDX = (r32((uint32_t)(0x122c1ce4)));
  /* 1229a5e0 push edx */
  push32((uint32_t)(EDX));
  /* 1229a5e1 call 0x1229a830 */
  push32(0x1229a5e6u); f_1229a830();
  /* 1229a5e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a5e9 mov dword ptr [0x122c1f84], eax */
  w32((uint32_t)(0x122c1f84), (EAX));
  /* 1229a5ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1229a5f5 jmp 0x1229a600 */
  goto L_1229a600;
L_1229a5f7:;
  /* 1229a5f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229a5fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a5fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1229a600:;
  /* 1229a600 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a604 jae 0x1229a624 */
  if (!C.cf) goto L_1229a624;
  /* 1229a606 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229a609 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229a60c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229a60f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229a612 mov cx, word ptr [ecx + eax*2 + 0x122beebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x122beebc)));
  /* 1229a61a mov word ptr [edx*2 + 0x122c1d60], cx */
  w16((uint32_t)(EDX*2 + 0x122c1d60), (CX));
  /* 1229a622 jmp 0x1229a5f7 */
  goto L_1229a5f7;
L_1229a624:;
  /* 1229a624 call 0x1229a930 */
  push32(0x1229a629u); f_1229a930();
  /* 1229a629 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1229a62b call 0x12297e50 */
  push32(0x1229a630u); f_12297e50();
  /* 1229a630 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a633 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229a635 jmp 0x1229a7c0 */
  goto L_1229a7c0;
L_1229a63a:;
  /* 1229a63a jmp 0x1229a4e5 */
  goto L_1229a4e5;
L_1229a63f:;
  /* 1229a63f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1229a642 push edx */
  push32((uint32_t)(EDX));
  /* 1229a643 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229a646 push eax */
  push32((uint32_t)(EAX));
  /* 1229a647 call dword ptr [0x122c3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3330))), 0x1229a64du);
  /* 1229a64d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a650 jne 0x1229a792 */
  if (!C.zf) goto L_1229a792;
  /* 1229a656 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1229a65d jmp 0x1229a668 */
  goto L_1229a668;
L_1229a65f:;
  /* 1229a65f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a662 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a665 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1229a668:;
  /* 1229a668 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a66f jae 0x1229a67d */
  if (!C.cf) goto L_1229a67d;
  /* 1229a671 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a674 mov byte ptr [edx + 0x122c1e80], 0 */
  w8((uint32_t)(EDX + 0x122c1e80), (0x0u));
  /* 1229a67b jmp 0x1229a65f */
  goto L_1229a65f;
L_1229a67d:;
  /* 1229a67d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229a680 mov dword ptr [0x122c1ce4], eax */
  w32((uint32_t)(0x122c1ce4), (EAX));
  /* 1229a685 mov dword ptr [0x122c1f84], 0 */
  w32((uint32_t)(0x122c1f84), (0x0u));
  /* 1229a68f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a693 jbe 0x1229a74e */
  if ((C.cf||C.zf)) goto L_1229a74e;
  /* 1229a699 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1229a69c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1229a69f jmp 0x1229a6aa */
  goto L_1229a6aa;
L_1229a6a1:;
  /* 1229a6a1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1229a6a4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a6a7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1229a6aa:;
  /* 1229a6aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1229a6ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229a6af mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1229a6b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229a6b3 je 0x1229a6fc */
  if (C.zf) goto L_1229a6fc;
  /* 1229a6b5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1229a6b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229a6ba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1229a6bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229a6bf je 0x1229a6fc */
  if (C.zf) goto L_1229a6fc;
  /* 1229a6c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1229a6c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229a6c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1229a6c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1229a6cb jmp 0x1229a6d6 */
  goto L_1229a6d6;
L_1229a6cd:;
  /* 1229a6cd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a6d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a6d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1229a6d6:;
  /* 1229a6d6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1229a6d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229a6db mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1229a6de cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a6e1 ja 0x1229a6fa */
  if ((!C.cf&&!C.zf)) goto L_1229a6fa;
  /* 1229a6e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a6e6 mov cl, byte ptr [eax + 0x122c1e81] */
  CL = (r8((uint32_t)(EAX + 0x122c1e81)));
  /* 1229a6ec or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1229a6ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a6f2 mov byte ptr [edx + 0x122c1e81], cl */
  w8((uint32_t)(EDX + 0x122c1e81), (CL));
  /* 1229a6f8 jmp 0x1229a6cd */
  goto L_1229a6cd;
L_1229a6fa:;
  /* 1229a6fa jmp 0x1229a6a1 */
  goto L_1229a6a1;
L_1229a6fc:;
  /* 1229a6fc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1229a703 jmp 0x1229a70e */
  goto L_1229a70e;
L_1229a705:;
  /* 1229a705 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a708 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a70b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1229a70e:;
  /* 1229a70e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a715 jae 0x1229a72e */
  if (!C.cf) goto L_1229a72e;
  /* 1229a717 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a71a mov dl, byte ptr [ecx + 0x122c1e81] */
  DL = (r8((uint32_t)(ECX + 0x122c1e81)));
  /* 1229a720 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1229a723 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229a726 mov byte ptr [eax + 0x122c1e81], dl */
  w8((uint32_t)(EAX + 0x122c1e81), (DL));
  /* 1229a72c jmp 0x1229a705 */
  goto L_1229a705;
L_1229a72e:;
  /* 1229a72e mov ecx, dword ptr [0x122c1ce4] */
  ECX = (r32((uint32_t)(0x122c1ce4)));
  /* 1229a734 push ecx */
  push32((uint32_t)(ECX));
  /* 1229a735 call 0x1229a830 */
  push32(0x1229a73au); f_1229a830();
  /* 1229a73a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a73d mov dword ptr [0x122c1f84], eax */
  w32((uint32_t)(0x122c1f84), (EAX));
  /* 1229a742 mov dword ptr [0x122c1d6c], 1 */
  w32((uint32_t)(0x122c1d6c), (0x1u));
  /* 1229a74c jmp 0x1229a758 */
  goto L_1229a758;
L_1229a74e:;
  /* 1229a74e mov dword ptr [0x122c1d6c], 0 */
  w32((uint32_t)(0x122c1d6c), (0x0u));
L_1229a758:;
  /* 1229a758 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1229a75f jmp 0x1229a76a */
  goto L_1229a76a;
L_1229a761:;
  /* 1229a761 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229a764 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a767 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1229a76a:;
  /* 1229a76a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a76e jae 0x1229a77f */
  if (!C.cf) goto L_1229a77f;
  /* 1229a770 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229a773 mov word ptr [eax*2 + 0x122c1d60], 0 */
  w16((uint32_t)(EAX*2 + 0x122c1d60), (0x0u));
  /* 1229a77d jmp 0x1229a761 */
  goto L_1229a761;
L_1229a77f:;
  /* 1229a77f call 0x1229a930 */
  push32(0x1229a784u); f_1229a930();
  /* 1229a784 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1229a786 call 0x12297e50 */
  push32(0x1229a78bu); f_12297e50();
  /* 1229a78b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a78e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229a790 jmp 0x1229a7c0 */
  goto L_1229a7c0;
L_1229a792:;
  /* 1229a792 cmp dword ptr [0x122c07f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c07f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a799 je 0x1229a7b3 */
  if (C.zf) goto L_1229a7b3;
  /* 1229a79b call 0x1229a8b0 */
  push32(0x1229a7a0u); f_1229a8b0();
  /* 1229a7a0 call 0x1229a930 */
  push32(0x1229a7a5u); f_1229a930();
  /* 1229a7a5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1229a7a7 call 0x12297e50 */
  push32(0x1229a7acu); f_12297e50();
  /* 1229a7ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a7af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229a7b1 jmp 0x1229a7c0 */
  goto L_1229a7c0;
L_1229a7b3:;
  /* 1229a7b3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1229a7b5 call 0x12297e50 */
  push32(0x1229a7bau); f_12297e50();
  /* 1229a7ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a7bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1229a7c0:;
  /* 1229a7c0 mov esp, ebp */
  ESP = (EBP);
  /* 1229a7c2 pop ebp */
  EBP = (pop32());
  /* 1229a7c3 ret  */
  ESPCHK(0x1229a480u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1229a7d0 (89 bytes, 21 insns) */
void f_1229a7d0(void) {
  FTRACE(0x1229a7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229a7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229a7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1229a7d3 mov dword ptr [0x122c07f0], 0 */
  w32((uint32_t)(0x122c07f0), (0x0u));
  /* 1229a7dd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a7e1 jne 0x1229a7f5 */
  if (!C.zf) goto L_1229a7f5;
  /* 1229a7e3 mov dword ptr [0x122c07f0], 1 */
  w32((uint32_t)(0x122c07f0), (0x1u));
  /* 1229a7ed call dword ptr [0x122c3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3350))), 0x1229a7f3u);
  /* 1229a7f3 jmp 0x1229a827 */
  goto L_1229a827;
L_1229a7f5:;
  /* 1229a7f5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a7f9 jne 0x1229a80d */
  if (!C.zf) goto L_1229a80d;
  /* 1229a7fb mov dword ptr [0x122c07f0], 1 */
  w32((uint32_t)(0x122c07f0), (0x1u));
  /* 1229a805 call dword ptr [0x122c3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3334))), 0x1229a80bu);
  /* 1229a80b jmp 0x1229a827 */
  goto L_1229a827;
L_1229a80d:;
  /* 1229a80d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a811 jne 0x1229a824 */
  if (!C.zf) goto L_1229a824;
  /* 1229a813 mov dword ptr [0x122c07f0], 1 */
  w32((uint32_t)(0x122c07f0), (0x1u));
  /* 1229a81d mov eax, dword ptr [0x122c0810] */
  EAX = (r32((uint32_t)(0x122c0810)));
  /* 1229a822 jmp 0x1229a827 */
  goto L_1229a827;
L_1229a824:;
  /* 1229a824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1229a827:;
  /* 1229a827 pop ebp */
  EBP = (pop32());
  /* 1229a828 ret  */
  ESPCHK(0x1229a7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a830 @ 0x1229a830 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1229a830(void) {
  FTRACE(0x1229a830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229a830 push ebp */
  push32((uint32_t)(EBP));
  /* 1229a831 mov ebp, esp */
  EBP = (ESP);
  /* 1229a833 push ecx */
  push32((uint32_t)(ECX));
  /* 1229a834 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229a837 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229a83a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229a83d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229a843 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1229a846 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a84a ja 0x1229a87a */
  if ((!C.cf&&!C.zf)) goto L_1229a87a;
  /* 1229a84c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229a84f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229a851 mov dl, byte ptr [eax + 0x1229a894] */
  DL = (r8((uint32_t)(EAX + 0x1229a894)));
  /* 1229a857 jmp dword ptr [edx*4 + 0x1229a880] */
  switch (EDX) {
    case 0: goto L_1229a85e;
    case 1: goto L_1229a865;
    case 2: goto L_1229a86c;
    case 3: goto L_1229a873;
    case 4: goto L_1229a87a;
    default: x86_unimpl("switch@0x1229a857 out of table"); return;
  }
L_1229a85e:;
  /* 1229a85e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1229a863 jmp 0x1229a87c */
  goto L_1229a87c;
L_1229a865:;
  /* 1229a865 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1229a86a jmp 0x1229a87c */
  goto L_1229a87c;
L_1229a86c:;
  /* 1229a86c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1229a871 jmp 0x1229a87c */
  goto L_1229a87c;
L_1229a873:;
  /* 1229a873 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1229a878 jmp 0x1229a87c */
  goto L_1229a87c;
L_1229a87a:;
  /* 1229a87a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1229a87c:;
  /* 1229a87c mov esp, ebp */
  ESP = (EBP);
  /* 1229a87e pop ebp */
  EBP = (pop32());
  /* 1229a87f ret  */
  ESPCHK(0x1229a830u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1229a8b0 (116 bytes, 29 insns) */
void f_1229a8b0(void) {
  FTRACE(0x1229a8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229a8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229a8b1 mov ebp, esp */
  EBP = (ESP);
  /* 1229a8b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1229a8b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1229a8bb jmp 0x1229a8c6 */
  goto L_1229a8c6;
L_1229a8bd:;
  /* 1229a8bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229a8c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a8c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1229a8c6:;
  /* 1229a8c6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a8cd jge 0x1229a8db */
  if ((C.sf==C.of)) goto L_1229a8db;
  /* 1229a8cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229a8d2 mov byte ptr [ecx + 0x122c1e80], 0 */
  w8((uint32_t)(ECX + 0x122c1e80), (0x0u));
  /* 1229a8d9 jmp 0x1229a8bd */
  goto L_1229a8bd;
L_1229a8db:;
  /* 1229a8db mov dword ptr [0x122c1ce4], 0 */
  w32((uint32_t)(0x122c1ce4), (0x0u));
  /* 1229a8e5 mov dword ptr [0x122c1d6c], 0 */
  w32((uint32_t)(0x122c1d6c), (0x0u));
  /* 1229a8ef mov dword ptr [0x122c1f84], 0 */
  w32((uint32_t)(0x122c1f84), (0x0u));
  /* 1229a8f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1229a900 jmp 0x1229a90b */
  goto L_1229a90b;
L_1229a902:;
  /* 1229a902 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229a905 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a908 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1229a90b:;
  /* 1229a90b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a90f jge 0x1229a920 */
  if ((C.sf==C.of)) goto L_1229a920;
  /* 1229a911 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229a914 mov word ptr [eax*2 + 0x122c1d60], 0 */
  w16((uint32_t)(EAX*2 + 0x122c1d60), (0x0u));
  /* 1229a91e jmp 0x1229a902 */
  goto L_1229a902;
L_1229a920:;
  /* 1229a920 mov esp, ebp */
  ESP = (EBP);
  /* 1229a922 pop ebp */
  EBP = (pop32());
  /* 1229a923 ret  */
  ESPCHK(0x1229a8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a930 @ 0x1229a930 (770 bytes, 175 insns) */
void f_1229a930(void) {
  FTRACE(0x1229a930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229a930 push ebp */
  push32((uint32_t)(EBP));
  /* 1229a931 mov ebp, esp */
  EBP = (ESP);
  /* 1229a933 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229a939 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1229a93f push eax */
  push32((uint32_t)(EAX));
  /* 1229a940 mov ecx, dword ptr [0x122c1ce4] */
  ECX = (r32((uint32_t)(0x122c1ce4)));
  /* 1229a946 push ecx */
  push32((uint32_t)(ECX));
  /* 1229a947 call dword ptr [0x122c3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3330))), 0x1229a94du);
  /* 1229a94d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a950 jne 0x1229ab69 */
  if (!C.zf) goto L_1229ab69;
  /* 1229a956 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1229a960 jmp 0x1229a971 */
  goto L_1229a971;
L_1229a962:;
  /* 1229a962 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229a968 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a96b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1229a971:;
  /* 1229a971 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a97b jae 0x1229a992 */
  if (!C.cf) goto L_1229a992;
  /* 1229a97d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229a983 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1229a989 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1229a990 jmp 0x1229a962 */
  goto L_1229a962;
L_1229a992:;
  /* 1229a992 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1229a999 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1229a99f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1229a9a2 jmp 0x1229a9ad */
  goto L_1229a9ad;
L_1229a9a4:;
  /* 1229a9a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229a9a7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a9aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1229a9ad:;
  /* 1229a9ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229a9b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229a9b2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1229a9b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229a9b6 je 0x1229a9f8 */
  if (C.zf) goto L_1229a9f8;
  /* 1229a9b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229a9bb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229a9bd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1229a9bf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1229a9c5 jmp 0x1229a9d6 */
  goto L_1229a9d6;
L_1229a9c7:;
  /* 1229a9c7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229a9cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229a9d0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1229a9d6:;
  /* 1229a9d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229a9d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229a9db mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1229a9de cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229a9e4 ja 0x1229a9f6 */
  if ((!C.cf&&!C.zf)) goto L_1229a9f6;
  /* 1229a9e6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229a9ec mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1229a9f4 jmp 0x1229a9c7 */
  goto L_1229a9c7;
L_1229a9f6:;
  /* 1229a9f6 jmp 0x1229a9a4 */
  goto L_1229a9a4;
L_1229a9f8:;
  /* 1229a9f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229a9fa mov eax, dword ptr [0x122c1f84] */
  EAX = (r32((uint32_t)(0x122c1f84)));
  /* 1229a9ff push eax */
  push32((uint32_t)(EAX));
  /* 1229aa00 mov ecx, dword ptr [0x122c1ce4] */
  ECX = (r32((uint32_t)(0x122c1ce4)));
  /* 1229aa06 push ecx */
  push32((uint32_t)(ECX));
  /* 1229aa07 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1229aa0d push edx */
  push32((uint32_t)(EDX));
  /* 1229aa0e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1229aa13 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1229aa19 push eax */
  push32((uint32_t)(EAX));
  /* 1229aa1a push 1 */
  push32((uint32_t)(0x1u));
  /* 1229aa1c call 0x1229c5e0 */
  push32(0x1229aa21u); f_1229c5e0();
  /* 1229aa21 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229aa24 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229aa26 mov ecx, dword ptr [0x122c1ce4] */
  ECX = (r32((uint32_t)(0x122c1ce4)));
  /* 1229aa2c push ecx */
  push32((uint32_t)(ECX));
  /* 1229aa2d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1229aa32 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1229aa38 push edx */
  push32((uint32_t)(EDX));
  /* 1229aa39 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1229aa3e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1229aa44 push eax */
  push32((uint32_t)(EAX));
  /* 1229aa45 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1229aa4a mov ecx, dword ptr [0x122c1f84] */
  ECX = (r32((uint32_t)(0x122c1f84)));
  /* 1229aa50 push ecx */
  push32((uint32_t)(ECX));
  /* 1229aa51 call 0x1229c7a0 */
  push32(0x1229aa56u); f_1229c7a0();
  /* 1229aa56 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229aa59 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229aa5b mov edx, dword ptr [0x122c1ce4] */
  EDX = (r32((uint32_t)(0x122c1ce4)));
  /* 1229aa61 push edx */
  push32((uint32_t)(EDX));
  /* 1229aa62 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1229aa67 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1229aa6d push eax */
  push32((uint32_t)(EAX));
  /* 1229aa6e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1229aa73 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1229aa79 push ecx */
  push32((uint32_t)(ECX));
  /* 1229aa7a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1229aa7f mov edx, dword ptr [0x122c1f84] */
  EDX = (r32((uint32_t)(0x122c1f84)));
  /* 1229aa85 push edx */
  push32((uint32_t)(EDX));
  /* 1229aa86 call 0x1229c7a0 */
  push32(0x1229aa8bu); f_1229c7a0();
  /* 1229aa8b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229aa8e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1229aa98 jmp 0x1229aaa9 */
  goto L_1229aaa9;
L_1229aa9a:;
  /* 1229aa9a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229aaa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229aaa3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1229aaa9:;
  /* 1229aaa9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229aab3 jae 0x1229ab64 */
  if (!C.cf) goto L_1229ab64;
  /* 1229aab9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229aabf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229aac1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1229aac9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1229aacc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229aace je 0x1229ab06 */
  if (C.zf) goto L_1229ab06;
  /* 1229aad0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229aad6 mov cl, byte ptr [eax + 0x122c1e81] */
  CL = (r8((uint32_t)(EAX + 0x122c1e81)));
  /* 1229aadc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1229aadf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229aae5 mov byte ptr [edx + 0x122c1e81], cl */
  w8((uint32_t)(EDX + 0x122c1e81), (CL));
  /* 1229aaeb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229aaf1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229aaf7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1229aafe mov byte ptr [eax + 0x122c1d80], dl */
  w8((uint32_t)(EAX + 0x122c1d80), (DL));
  /* 1229ab04 jmp 0x1229ab5f */
  goto L_1229ab5f;
L_1229ab06:;
  /* 1229ab06 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229ab0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ab0e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1229ab16 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1229ab19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229ab1b je 0x1229ab52 */
  if (C.zf) goto L_1229ab52;
  /* 1229ab1d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229ab23 mov al, byte ptr [edx + 0x122c1e81] */
  AL = (r8((uint32_t)(EDX + 0x122c1e81)));
  /* 1229ab29 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1229ab2b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229ab31 mov byte ptr [ecx + 0x122c1e81], al */
  w8((uint32_t)(ECX + 0x122c1e81), (AL));
  /* 1229ab37 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229ab3d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229ab43 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1229ab4a mov byte ptr [edx + 0x122c1d80], cl */
  w8((uint32_t)(EDX + 0x122c1d80), (CL));
  /* 1229ab50 jmp 0x1229ab5f */
  goto L_1229ab5f;
L_1229ab52:;
  /* 1229ab52 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229ab58 mov byte ptr [edx + 0x122c1d80], 0 */
  w8((uint32_t)(EDX + 0x122c1d80), (0x0u));
L_1229ab5f:;
  /* 1229ab5f jmp 0x1229aa9a */
  goto L_1229aa9a;
L_1229ab64:;
  /* 1229ab64 jmp 0x1229ac2e */
  goto L_1229ac2e;
L_1229ab69:;
  /* 1229ab69 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1229ab73 jmp 0x1229ab84 */
  goto L_1229ab84;
L_1229ab75:;
  /* 1229ab75 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229ab7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ab7e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1229ab84:;
  /* 1229ab84 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ab8e jae 0x1229ac2e */
  if (!C.cf) goto L_1229ac2e;
  /* 1229ab94 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ab9b jb 0x1229abd8 */
  if (C.cf) goto L_1229abd8;
  /* 1229ab9d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229aba4 ja 0x1229abd8 */
  if ((!C.cf&&!C.zf)) goto L_1229abd8;
  /* 1229aba6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229abac mov dl, byte ptr [ecx + 0x122c1e81] */
  DL = (r8((uint32_t)(ECX + 0x122c1e81)));
  /* 1229abb2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1229abb5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229abbb mov byte ptr [eax + 0x122c1e81], dl */
  w8((uint32_t)(EAX + 0x122c1e81), (DL));
  /* 1229abc1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229abc7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229abca mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229abd0 mov byte ptr [edx + 0x122c1d80], cl */
  w8((uint32_t)(EDX + 0x122c1d80), (CL));
  /* 1229abd6 jmp 0x1229ac29 */
  goto L_1229ac29;
L_1229abd8:;
  /* 1229abd8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229abdf jb 0x1229ac1c */
  if (C.cf) goto L_1229ac1c;
  /* 1229abe1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229abe8 ja 0x1229ac1c */
  if ((!C.cf&&!C.zf)) goto L_1229ac1c;
  /* 1229abea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229abf0 mov cl, byte ptr [eax + 0x122c1e81] */
  CL = (r8((uint32_t)(EAX + 0x122c1e81)));
  /* 1229abf6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1229abf9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229abff mov byte ptr [edx + 0x122c1e81], cl */
  w8((uint32_t)(EDX + 0x122c1e81), (CL));
  /* 1229ac05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229ac0b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229ac0e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229ac14 mov byte ptr [ecx + 0x122c1d80], al */
  w8((uint32_t)(ECX + 0x122c1d80), (AL));
  /* 1229ac1a jmp 0x1229ac29 */
  goto L_1229ac29;
L_1229ac1c:;
  /* 1229ac1c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1229ac22 mov byte ptr [edx + 0x122c1d80], 0 */
  w8((uint32_t)(EDX + 0x122c1d80), (0x0u));
L_1229ac29:;
  /* 1229ac29 jmp 0x1229ab75 */
  goto L_1229ab75;
L_1229ac2e:;
  /* 1229ac2e mov esp, ebp */
  ESP = (EBP);
  /* 1229ac30 pop ebp */
  EBP = (pop32());
  /* 1229ac31 ret  */
  ESPCHK(0x1229a930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac40 @ 0x1229ac40 (23 bytes, 9 insns) */
void f_1229ac40(void) {
  FTRACE(0x1229ac40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229ac40 push ebp */
  push32((uint32_t)(EBP));
  /* 1229ac41 mov ebp, esp */
  EBP = (ESP);
  /* 1229ac43 cmp dword ptr [0x122c1d6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c1d6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ac4a je 0x1229ac53 */
  if (C.zf) goto L_1229ac53;
  /* 1229ac4c mov eax, dword ptr [0x122c1ce4] */
  EAX = (r32((uint32_t)(0x122c1ce4)));
  /* 1229ac51 jmp 0x1229ac55 */
  goto L_1229ac55;
L_1229ac53:;
  /* 1229ac53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1229ac55:;
  /* 1229ac55 pop ebp */
  EBP = (pop32());
  /* 1229ac56 ret  */
  ESPCHK(0x1229ac40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac60 @ 0x1229ac60 (34 bytes, 10 insns) */
void f_1229ac60(void) {
  FTRACE(0x1229ac60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229ac60 push ebp */
  push32((uint32_t)(EBP));
  /* 1229ac61 mov ebp, esp */
  EBP = (ESP);
  /* 1229ac63 cmp dword ptr [0x122c2130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c2130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ac6a jne 0x1229ac80 */
  if (!C.zf) goto L_1229ac80;
  /* 1229ac6c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1229ac6e call 0x1229a480 */
  push32(0x1229ac73u); f_1229a480();
  /* 1229ac73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ac76 mov dword ptr [0x122c2130], 1 */
  w32((uint32_t)(0x122c2130), (0x1u));
L_1229ac80:;
  /* 1229ac80 pop ebp */
  EBP = (pop32());
  /* 1229ac81 ret  */
  ESPCHK(0x1229ac60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac90 @ 0x1229ac90 (664 bytes, 268 insns) [15 switch table(s)] */
void f_1229ac90(void) {
  FTRACE(0x1229ac90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229ac90 push ebp */
  push32((uint32_t)(EBP));
  /* 1229ac91 mov ebp, esp */
  EBP = (ESP);
  /* 1229ac93 push edi */
  push32((uint32_t)(EDI));
  /* 1229ac94 push esi */
  push32((uint32_t)(ESI));
  /* 1229ac95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1229ac98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229ac9b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ac9e mov eax, ecx */
  EAX = (ECX);
  /* 1229aca0 mov edx, ecx */
  EDX = (ECX);
  /* 1229aca2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229aca4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229aca6 jbe 0x1229acb0 */
  if ((C.cf||C.zf)) goto L_1229acb0;
  /* 1229aca8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229acaa jb 0x1229ae28 */
  if (C.cf) goto L_1229ae28;
L_1229acb0:;
  /* 1229acb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1229acb6 jne 0x1229accc */
  if (!C.zf) goto L_1229accc;
  /* 1229acb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1229acbb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1229acbe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229acc1 jb 0x1229acec */
  if (C.cf) goto L_1229acec;
  /* 1229acc3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1229acc5 jmp dword ptr [edx*4 + 0x1229add8] */
  switch (EDX) {
    case 0: goto L_1229ade8;
    case 1: goto L_1229adf0;
    case 2: goto L_1229adfc;
    case 3: goto L_1229ae10;
    default: x86_unimpl("switch@0x1229acc5 out of table"); return;
  }
L_1229accc:;
  /* 1229accc mov eax, edi */
  EAX = (EDI);
  /* 1229acce mov edx, 3 */
  EDX = (0x3u);
  /* 1229acd3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229acd6 jb 0x1229ace4 */
  if (C.cf) goto L_1229ace4;
  /* 1229acd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1229acdb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229acdd jmp dword ptr [eax*4 + 0x1229acf0] */
  switch (EAX) {
    case 1: goto L_1229ad00;
    case 2: goto L_1229ad2c;
    case 3: goto L_1229ad50;
    default: x86_unimpl("switch@0x1229acdd out of table"); return;
  }
L_1229ace4:;
  /* 1229ace4 jmp dword ptr [ecx*4 + 0x1229ade8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1229ade8)))); return;
  /* 1229aceb nop  */
  /* nop */
L_1229acec:;
  /* 1229acec jmp dword ptr [ecx*4 + 0x1229ad6c] */
  switch (ECX) {
    case 0: goto L_1229adcf;
    case 1: goto L_1229adbc;
    case 2: goto L_1229adb4;
    case 3: goto L_1229adac;
    case 4: goto L_1229ada4;
    case 5: goto L_1229ad9c;
    case 6: goto L_1229ad94;
    case 7: goto L_1229ad8c;
    default: x86_unimpl("switch@0x1229acec out of table"); return;
  }
  /* 1229acf3 nop  */
  /* nop */
L_1229ad00:;
  /* 1229ad00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1229ad02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1229ad04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1229ad06 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1229ad09 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1229ad0c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1229ad0f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1229ad12 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1229ad15 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ad18 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ad1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ad1e jb 0x1229acec */
  if (C.cf) goto L_1229acec;
  /* 1229ad20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1229ad22 jmp dword ptr [edx*4 + 0x1229add8] */
  switch (EDX) {
    case 0: goto L_1229ade8;
    case 1: goto L_1229adf0;
    case 2: goto L_1229adfc;
    case 3: goto L_1229ae10;
    default: x86_unimpl("switch@0x1229ad22 out of table"); return;
  }
  /* 1229ad29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1229ad2c:;
  /* 1229ad2c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1229ad2e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1229ad30 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1229ad32 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1229ad35 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1229ad38 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1229ad3b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ad3e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ad41 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ad44 jb 0x1229acec */
  if (C.cf) goto L_1229acec;
  /* 1229ad46 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1229ad48 jmp dword ptr [edx*4 + 0x1229add8] */
  switch (EDX) {
    case 0: goto L_1229ade8;
    case 1: goto L_1229adf0;
    case 2: goto L_1229adfc;
    case 3: goto L_1229ae10;
    default: x86_unimpl("switch@0x1229ad48 out of table"); return;
  }
  /* 1229ad4f nop  */
  /* nop */
L_1229ad50:;
  /* 1229ad50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1229ad52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1229ad54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1229ad56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1229ad57 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1229ad5a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1229ad5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ad5e jb 0x1229acec */
  if (C.cf) goto L_1229acec;
  /* 1229ad60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1229ad62 jmp dword ptr [edx*4 + 0x1229add8] */
  switch (EDX) {
    case 0: goto L_1229ade8;
    case 1: goto L_1229adf0;
    case 2: goto L_1229adfc;
    case 3: goto L_1229ae10;
    default: x86_unimpl("switch@0x1229ad62 out of table"); return;
  }
  /* 1229ad69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1229ad8c:;
  /* 1229ad8c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1229ad90 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1229ad94:;
  /* 1229ad94 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1229ad98 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1229ad9c:;
  /* 1229ad9c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1229ada0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1229ada4:;
  /* 1229ada4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1229ada8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1229adac:;
  /* 1229adac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1229adb0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1229adb4:;
  /* 1229adb4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1229adb8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1229adbc:;
  /* 1229adbc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1229adc0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1229adc4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1229adcb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1229adcd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1229adcf:;
  /* 1229adcf jmp dword ptr [edx*4 + 0x1229add8] */
  switch (EDX) {
    case 0: goto L_1229ade8;
    case 1: goto L_1229adf0;
    case 2: goto L_1229adfc;
    case 3: goto L_1229ae10;
    default: x86_unimpl("switch@0x1229adcf out of table"); return;
  }
  /* 1229add6 mov edi, edi */
  EDI = (EDI);
L_1229ade8:;
  /* 1229ade8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229adeb pop esi */
  ESI = (pop32());
  /* 1229adec pop edi */
  EDI = (pop32());
  /* 1229aded leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1229adee ret  */
  ESPCHK(0x1229ac90u, _esp0);
  ESP += 4; return;
  /* 1229adef nop  */
  /* nop */
L_1229adf0:;
  /* 1229adf0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1229adf2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1229adf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229adf7 pop esi */
  ESI = (pop32());
  /* 1229adf8 pop edi */
  EDI = (pop32());
  /* 1229adf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1229adfa ret  */
  ESPCHK(0x1229ac90u, _esp0);
  ESP += 4; return;
  /* 1229adfb nop  */
  /* nop */
L_1229adfc:;
  /* 1229adfc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1229adfe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1229ae00 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1229ae03 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1229ae06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ae09 pop esi */
  ESI = (pop32());
  /* 1229ae0a pop edi */
  EDI = (pop32());
  /* 1229ae0b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1229ae0c ret  */
  ESPCHK(0x1229ac90u, _esp0);
  ESP += 4; return;
  /* 1229ae0d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1229ae10:;
  /* 1229ae10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1229ae12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1229ae14 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1229ae17 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1229ae1a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1229ae1d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1229ae20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ae23 pop esi */
  ESI = (pop32());
  /* 1229ae24 pop edi */
  EDI = (pop32());
  /* 1229ae25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1229ae26 ret  */
  ESPCHK(0x1229ac90u, _esp0);
  ESP += 4; return;
  /* 1229ae27 nop  */
  /* nop */
L_1229ae28:;
  /* 1229ae28 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1229ae2c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1229ae30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1229ae36 jne 0x1229ae5c */
  if (!C.zf) goto L_1229ae5c;
  /* 1229ae38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1229ae3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1229ae3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ae41 jb 0x1229ae50 */
  if (C.cf) goto L_1229ae50;
  /* 1229ae43 std  */
  C.df=1;
  /* 1229ae44 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1229ae46 cld  */
  C.df=0;
  /* 1229ae47 jmp dword ptr [edx*4 + 0x1229af70] */
  switch (EDX) {
    case 0: goto L_1229af80;
    case 1: goto L_1229af88;
    case 2: goto L_1229af98;
    case 3: goto L_1229afac;
    default: x86_unimpl("switch@0x1229ae47 out of table"); return;
  }
  /* 1229ae4e mov edi, edi */
  EDI = (EDI);
L_1229ae50:;
  /* 1229ae50 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1229ae52 jmp dword ptr [ecx*4 + 0x1229af20] */
  switch (ECX) {
    case 0: goto L_1229af67;
    default: x86_unimpl("switch@0x1229ae52 out of table"); return;
  }
  /* 1229ae59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1229ae5c:;
  /* 1229ae5c mov eax, edi */
  EAX = (EDI);
  /* 1229ae5e mov edx, 3 */
  EDX = (0x3u);
  /* 1229ae63 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ae66 jb 0x1229ae74 */
  if (C.cf) goto L_1229ae74;
  /* 1229ae68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1229ae6b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229ae6d jmp dword ptr [eax*4 + 0x1229ae78] */
  switch (EAX) {
    case 1: goto L_1229ae88;
    case 2: goto L_1229aea8;
    case 3: goto L_1229aed0;
    default: x86_unimpl("switch@0x1229ae6d out of table"); return;
  }
L_1229ae74:;
  /* 1229ae74 jmp dword ptr [ecx*4 + 0x1229af70] */
  switch (ECX) {
    case 0: goto L_1229af80;
    case 1: goto L_1229af88;
    case 2: goto L_1229af98;
    case 3: goto L_1229afac;
    default: x86_unimpl("switch@0x1229ae74 out of table"); return;
  }
  /* 1229ae7b nop  */
  /* nop */
L_1229ae88:;
  /* 1229ae88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1229ae8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1229ae8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1229ae90 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1229ae91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1229ae94 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1229ae95 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ae98 jb 0x1229ae50 */
  if (C.cf) goto L_1229ae50;
  /* 1229ae9a std  */
  C.df=1;
  /* 1229ae9b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1229ae9d cld  */
  C.df=0;
  /* 1229ae9e jmp dword ptr [edx*4 + 0x1229af70] */
  switch (EDX) {
    case 0: goto L_1229af80;
    case 1: goto L_1229af88;
    case 2: goto L_1229af98;
    case 3: goto L_1229afac;
    default: x86_unimpl("switch@0x1229ae9e out of table"); return;
  }
  /* 1229aea5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1229aea8:;
  /* 1229aea8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1229aeab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1229aead mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1229aeb0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1229aeb3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1229aeb6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1229aeb9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229aebc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229aebf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229aec2 jb 0x1229ae50 */
  if (C.cf) goto L_1229ae50;
  /* 1229aec4 std  */
  C.df=1;
  /* 1229aec5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1229aec7 cld  */
  C.df=0;
  /* 1229aec8 jmp dword ptr [edx*4 + 0x1229af70] */
  switch (EDX) {
    case 0: goto L_1229af80;
    case 1: goto L_1229af88;
    case 2: goto L_1229af98;
    case 3: goto L_1229afac;
    default: x86_unimpl("switch@0x1229aec8 out of table"); return;
  }
  /* 1229aecf nop  */
  /* nop */
L_1229aed0:;
  /* 1229aed0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1229aed3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1229aed5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1229aed8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1229aedb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1229aede mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1229aee1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1229aee4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1229aee7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229aeea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229aeed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229aef0 jb 0x1229ae50 */
  if (C.cf) goto L_1229ae50;
  /* 1229aef6 std  */
  C.df=1;
  /* 1229aef7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1229aef9 cld  */
  C.df=0;
  /* 1229aefa jmp dword ptr [edx*4 + 0x1229af70] */
  switch (EDX) {
    case 0: goto L_1229af80;
    case 1: goto L_1229af88;
    case 2: goto L_1229af98;
    case 3: goto L_1229afac;
    default: x86_unimpl("switch@0x1229aefa out of table"); return;
  }
  /* 1229af01 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1229af04 and al, 0xaf */
  { uint32_t _r=(AL)&(0xafu); AL = (_r); fl_logic(_r,8); }
  /* 1229af06 sub dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1229af08 sub al, 0xaf */
  { uint32_t _a=(AL),_b=(0xafu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1229af0a sub dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1229af0c xor al, 0xaf */
  { uint32_t _r=(AL)^(0xafu); AL = (_r); fl_logic(_r,8); }
  /* 1229af0e sub dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1229af10 cmp al, 0xaf */
  { uint32_t _a=(AL),_b=(0xafu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1229af12 sub dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1229af14 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1229af15 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 1229af16 sub dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1229af18 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 1229af19 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 1229af1a sub dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1229af1c push esp */
  push32((uint32_t)(ESP));
  /* 1229af1d scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 1229af1e sub dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1229af24 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1229af28 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1229af2c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1229af30 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1229af34 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1229af38 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1229af3c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1229af40 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1229af44 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1229af48 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1229af4c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1229af50 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1229af54 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1229af58 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1229af5c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1229af63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1229af65 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1229af67:;
  /* 1229af67 jmp dword ptr [edx*4 + 0x1229af70] */
  switch (EDX) {
    case 0: goto L_1229af80;
    case 1: goto L_1229af88;
    case 2: goto L_1229af98;
    case 3: goto L_1229afac;
    default: x86_unimpl("switch@0x1229af67 out of table"); return;
  }
  /* 1229af6e mov edi, edi */
  EDI = (EDI);
L_1229af80:;
  /* 1229af80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229af83 pop esi */
  ESI = (pop32());
  /* 1229af84 pop edi */
  EDI = (pop32());
  /* 1229af85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1229af86 ret  */
  ESPCHK(0x1229ac90u, _esp0);
  ESP += 4; return;
  /* 1229af87 nop  */
  /* nop */
L_1229af88:;
  /* 1229af88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1229af8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1229af8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229af91 pop esi */
  ESI = (pop32());
  /* 1229af92 pop edi */
  EDI = (pop32());
  /* 1229af93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1229af94 ret  */
  ESPCHK(0x1229ac90u, _esp0);
  ESP += 4; return;
  /* 1229af95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1229af98:;
  /* 1229af98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1229af9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1229af9e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1229afa1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1229afa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229afa7 pop esi */
  ESI = (pop32());
  /* 1229afa8 pop edi */
  EDI = (pop32());
  /* 1229afa9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1229afaa ret  */
  ESPCHK(0x1229ac90u, _esp0);
  ESP += 4; return;
  /* 1229afab nop  */
  /* nop */
L_1229afac:;
  /* 1229afac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1229afaf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1229afb2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1229afb5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1229afb8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1229afbb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1229afbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229afc1 pop esi */
  ESI = (pop32());
  /* 1229afc2 pop edi */
  EDI = (pop32());
  /* 1229afc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1229afc4 ret  */
  ESPCHK(0x1229ac90u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1229afd0 (104 bytes, 43 insns) */
void f_1229afd0(void) {
  FTRACE(0x1229afd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229afd0 push ebx */
  push32((uint32_t)(EBX));
  /* 1229afd1 push esi */
  push32((uint32_t)(ESI));
  /* 1229afd2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1229afd6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229afd8 jne 0x1229aff2 */
  if (!C.zf) goto L_1229aff2;
  /* 1229afda mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1229afde mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1229afe2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229afe4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1229afe6 mov ebx, eax */
  EBX = (EAX);
  /* 1229afe8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1229afec div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1229afee mov edx, ebx */
  EDX = (EBX);
  /* 1229aff0 jmp 0x1229b033 */
  goto L_1229b033;
L_1229aff2:;
  /* 1229aff2 mov ecx, eax */
  ECX = (EAX);
  /* 1229aff4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1229aff8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1229affc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1229b000:;
  /* 1229b000 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1229b002 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1229b004 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1229b006 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1229b008 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229b00a jne 0x1229b000 */
  if (!C.zf) goto L_1229b000;
  /* 1229b00c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1229b00e mov esi, eax */
  ESI = (EAX);
  /* 1229b010 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1229b014 mov ecx, eax */
  ECX = (EAX);
  /* 1229b016 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1229b01a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1229b01c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b01e jb 0x1229b02e */
  if (C.cf) goto L_1229b02e;
  /* 1229b020 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b024 ja 0x1229b02e */
  if ((!C.cf&&!C.zf)) goto L_1229b02e;
  /* 1229b026 jb 0x1229b02f */
  if (C.cf) goto L_1229b02f;
  /* 1229b028 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b02c jbe 0x1229b02f */
  if ((C.cf||C.zf)) goto L_1229b02f;
L_1229b02e:;
  /* 1229b02e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1229b02f:;
  /* 1229b02f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229b031 mov eax, esi */
  EAX = (ESI);
L_1229b033:;
  /* 1229b033 pop esi */
  ESI = (pop32());
  /* 1229b034 pop ebx */
  EBX = (pop32());
  /* 1229b035 ret 0x10 */
  ESPCHK(0x1229afd0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1229b040 (117 bytes, 44 insns) */
void f_1229b040(void) {
  FTRACE(0x1229b040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229b040 push ebx */
  push32((uint32_t)(EBX));
  /* 1229b041 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1229b045 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229b047 jne 0x1229b061 */
  if (!C.zf) goto L_1229b061;
  /* 1229b049 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1229b04d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1229b051 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229b053 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1229b055 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1229b059 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1229b05b mov eax, edx */
  EAX = (EDX);
  /* 1229b05d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229b05f jmp 0x1229b0b1 */
  goto L_1229b0b1;
L_1229b061:;
  /* 1229b061 mov ecx, eax */
  ECX = (EAX);
  /* 1229b063 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1229b067 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1229b06b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1229b06f:;
  /* 1229b06f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1229b071 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1229b073 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1229b075 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1229b077 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229b079 jne 0x1229b06f */
  if (!C.zf) goto L_1229b06f;
  /* 1229b07b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1229b07d mov ecx, eax */
  ECX = (EAX);
  /* 1229b07f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1229b083 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1229b084 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1229b088 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b08a jb 0x1229b09a */
  if (C.cf) goto L_1229b09a;
  /* 1229b08c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b090 ja 0x1229b09a */
  if ((!C.cf&&!C.zf)) goto L_1229b09a;
  /* 1229b092 jb 0x1229b0a2 */
  if (C.cf) goto L_1229b0a2;
  /* 1229b094 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b098 jbe 0x1229b0a2 */
  if ((C.cf||C.zf)) goto L_1229b0a2;
L_1229b09a:;
  /* 1229b09a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229b09e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1229b0a2:;
  /* 1229b0a2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229b0a6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229b0aa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1229b0ac neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1229b0ae sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1229b0b1:;
  /* 1229b0b1 pop ebx */
  EBX = (pop32());
  /* 1229b0b2 ret 0x10 */
  ESPCHK(0x1229b040u, _esp0);
  ESP += 20; return;
}

/* FUN_1000b0c0 @ 0x1229b0c0 (628 bytes, 214 insns) */
void f_1229b0c0(void) {
  FTRACE(0x1229b0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229b0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229b0c1 mov ebp, esp */
  EBP = (ESP);
  /* 1229b0c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229b0c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1229b0c7 push esi */
  push32((uint32_t)(ESI));
  /* 1229b0c8 push edi */
  push32((uint32_t)(EDI));
L_1229b0c9:;
  /* 1229b0c9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b0cd jne 0x1229b0ed */
  if (!C.zf) goto L_1229b0ed;
  /* 1229b0cf push 0x122bc24c */
  push32((uint32_t)(0x122bc24cu));
  /* 1229b0d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229b0d6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1229b0d8 push 0x122bc240 */
  push32((uint32_t)(0x122bc240u));
  /* 1229b0dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1229b0df call 0x12293470 */
  push32(0x1229b0e4u); f_12293470();
  /* 1229b0e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b0e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b0ea jne 0x1229b0ed */
  if (!C.zf) goto L_1229b0ed;
  /* 1229b0ec int3  */
  x86_unimpl("int3 @ 0x1229b0ec");
L_1229b0ed:;
  /* 1229b0ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229b0ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229b0f1 jne 0x1229b0c9 */
  if (!C.zf) goto L_1229b0c9;
  /* 1229b0f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229b0f6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229b0f9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b0fc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1229b0ff mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1229b102 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b105 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1229b108 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1229b10e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229b110 je 0x1229b11f */
  if (C.zf) goto L_1229b11f;
  /* 1229b112 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b115 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1229b118 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1229b11b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229b11d je 0x1229b135 */
  if (C.zf) goto L_1229b135;
L_1229b11f:;
  /* 1229b11f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b122 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1229b125 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1229b127 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b12a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1229b12d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229b130 jmp 0x1229b32d */
  goto L_1229b32d;
L_1229b135:;
  /* 1229b135 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b138 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1229b13b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1229b13e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229b140 je 0x1229b18c */
  if (C.zf) goto L_1229b18c;
  /* 1229b142 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b145 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1229b14c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b14f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1229b152 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1229b155 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229b157 je 0x1229b175 */
  if (C.zf) goto L_1229b175;
  /* 1229b159 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b15c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b15f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1229b162 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1229b164 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b167 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1229b16a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1229b16d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b170 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1229b173 jmp 0x1229b18c */
  goto L_1229b18c;
L_1229b175:;
  /* 1229b175 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b178 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1229b17b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1229b17e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b181 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1229b184 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229b187 jmp 0x1229b32d */
  goto L_1229b32d;
L_1229b18c:;
  /* 1229b18c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b18f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1229b192 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1229b195 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b198 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1229b19b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b19e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1229b1a1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1229b1a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b1a7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1229b1aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b1ad mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1229b1b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1229b1bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b1be mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1229b1c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b1c4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1229b1c7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1229b1cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229b1cf jne 0x1229b1ff */
  if (!C.zf) goto L_1229b1ff;
  /* 1229b1d1 cmp dword ptr [ebp - 8], 0x122bf140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x122bf140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b1d8 je 0x1229b1e3 */
  if (C.zf) goto L_1229b1e3;
  /* 1229b1da cmp dword ptr [ebp - 8], 0x122bf160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x122bf160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b1e1 jne 0x1229b1f3 */
  if (!C.zf) goto L_1229b1f3;
L_1229b1e3:;
  /* 1229b1e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229b1e6 push edx */
  push32((uint32_t)(EDX));
  /* 1229b1e7 call 0x1229d030 */
  push32(0x1229b1ecu); f_1229d030();
  /* 1229b1ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b1ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229b1f1 jne 0x1229b1ff */
  if (!C.zf) goto L_1229b1ff;
L_1229b1f3:;
  /* 1229b1f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b1f6 push eax */
  push32((uint32_t)(EAX));
  /* 1229b1f7 call 0x1229cf60 */
  push32(0x1229b1fcu); f_1229cf60();
  /* 1229b1fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229b1ff:;
  /* 1229b1ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b202 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1229b205 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1229b20b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229b20d je 0x1229b2eb */
  if (C.zf) goto L_1229b2eb;
L_1229b213:;
  /* 1229b213 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b216 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b219 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1229b21b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229b21e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229b220 jge 0x1229b243 */
  if ((C.sf==C.of)) goto L_1229b243;
  /* 1229b222 push 0x122bc200 */
  push32((uint32_t)(0x122bc200u));
  /* 1229b227 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229b229 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1229b22e push 0x122bc240 */
  push32((uint32_t)(0x122bc240u));
  /* 1229b233 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229b235 call 0x12293470 */
  push32(0x1229b23au); f_12293470();
  /* 1229b23a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b23d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b240 jne 0x1229b243 */
  if (!C.zf) goto L_1229b243;
  /* 1229b242 int3  */
  x86_unimpl("int3 @ 0x1229b242");
L_1229b243:;
  /* 1229b243 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229b245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229b247 jne 0x1229b213 */
  if (!C.zf) goto L_1229b213;
  /* 1229b249 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b24c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b24f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1229b251 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229b254 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229b257 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b25a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1229b25d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b260 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b263 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1229b265 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b268 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1229b26b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229b26e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b271 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1229b274 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b278 jle 0x1229b296 */
  if ((C.zf||C.sf!=C.of)) goto L_1229b296;
  /* 1229b27a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b27d push ecx */
  push32((uint32_t)(ECX));
  /* 1229b27e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b281 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1229b284 push eax */
  push32((uint32_t)(EAX));
  /* 1229b285 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229b288 push ecx */
  push32((uint32_t)(ECX));
  /* 1229b289 call 0x1229cc50 */
  push32(0x1229b28eu); f_1229cc50();
  /* 1229b28e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b291 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1229b294 jmp 0x1229b2de */
  goto L_1229b2de;
L_1229b296:;
  /* 1229b296 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b29a je 0x1229b2b9 */
  if (C.zf) goto L_1229b2b9;
  /* 1229b29c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229b29f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1229b2a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229b2a5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1229b2a8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229b2ab mov ecx, dword ptr [edx*4 + 0x122c1fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x122c1fe0)));
  /* 1229b2b2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b2b4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1229b2b7 jmp 0x1229b2c0 */
  goto L_1229b2c0;
L_1229b2b9:;
  /* 1229b2b9 mov dword ptr [ebp - 0x14], 0x122bea60 */
  w32((uint32_t)(EBP + -0x14), (0x122bea60u));
L_1229b2c0:;
  /* 1229b2c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1229b2c3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1229b2c7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1229b2ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229b2cc je 0x1229b2de */
  if (C.zf) goto L_1229b2de;
  /* 1229b2ce push 2 */
  push32((uint32_t)(0x2u));
  /* 1229b2d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229b2d2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229b2d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1229b2d6 call 0x1229cb00 */
  push32(0x1229b2dbu); f_1229cb00();
  /* 1229b2db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229b2de:;
  /* 1229b2de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b2e1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1229b2e4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1229b2e7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1229b2e9 jmp 0x1229b309 */
  goto L_1229b309;
L_1229b2eb:;
  /* 1229b2eb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1229b2f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b2f5 push edx */
  push32((uint32_t)(EDX));
  /* 1229b2f6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1229b2f9 push eax */
  push32((uint32_t)(EAX));
  /* 1229b2fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229b2fd push ecx */
  push32((uint32_t)(ECX));
  /* 1229b2fe call 0x1229cc50 */
  push32(0x1229b303u); f_1229cc50();
  /* 1229b303 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b306 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1229b309:;
  /* 1229b309 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229b30c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b30f je 0x1229b325 */
  if (C.zf) goto L_1229b325;
  /* 1229b311 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b314 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1229b317 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1229b31a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b31d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1229b320 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229b323 jmp 0x1229b32d */
  goto L_1229b32d;
L_1229b325:;
  /* 1229b325 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229b328 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1229b32d:;
  /* 1229b32d pop edi */
  EDI = (pop32());
  /* 1229b32e pop esi */
  ESI = (pop32());
  /* 1229b32f pop ebx */
  EBX = (pop32());
  /* 1229b330 mov esp, ebp */
  ESP = (EBP);
  /* 1229b332 pop ebp */
  EBP = (pop32());
  /* 1229b333 ret  */
  ESPCHK(0x1229b0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b340 @ 0x1229b340 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1229b340(void) {
  FTRACE(0x1229b340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229b340 push ebp */
  push32((uint32_t)(EBP));
  /* 1229b341 mov ebp, esp */
  EBP = (ESP);
  /* 1229b343 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229b349 push ebx */
  push32((uint32_t)(EBX));
  /* 1229b34a push esi */
  push32((uint32_t)(ESI));
  /* 1229b34b push edi */
  push32((uint32_t)(EDI));
  /* 1229b34c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1229b353 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1229b35d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1229b364:;
  /* 1229b364 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229b367 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1229b369 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1229b36c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1229b370 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229b373 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b376 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1229b379 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229b37b je 0x1229bf57 */
  if (C.zf) goto L_1229bf57;
  /* 1229b381 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b388 jl 0x1229bf57 */
  if ((C.sf!=C.of)) goto L_1229bf57;
  /* 1229b38e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1229b392 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b395 jl 0x1229b3b6 */
  if ((C.sf!=C.of)) goto L_1229b3b6;
  /* 1229b397 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1229b39b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b39e jg 0x1229b3b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1229b3b6;
  /* 1229b3a0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1229b3a4 movsx ecx, byte ptr [eax + 0x122bc238] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x122bc238))));
  /* 1229b3ab and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1229b3ae mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1229b3b4 jmp 0x1229b3c0 */
  goto L_1229b3c0;
L_1229b3b6:;
  /* 1229b3b6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1229b3c0:;
  /* 1229b3c0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1229b3c6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1229b3c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229b3cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229b3cf movsx edx, byte ptr [ecx + eax*8 + 0x122bc258] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x122bc258))));
  /* 1229b3d7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1229b3da mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1229b3dd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229b3e0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1229b3e6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b3ed ja 0x1229bf52 */
  if ((!C.cf&&!C.zf)) goto L_1229bf52;
  /* 1229b3f3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1229b3f9 jmp dword ptr [ecx*4 + 0x1229bf64] */
  switch (ECX) {
    case 0: goto L_1229b400;
    case 1: goto L_1229b49a;
    case 2: goto L_1229b4dc;
    case 3: goto L_1229b54b;
    case 4: goto L_1229b5a3;
    case 5: goto L_1229b5b2;
    case 6: goto L_1229b5fe;
    case 7: goto L_1229b691;
    case 8: goto L_1229b528;
    case 9: goto L_1229b533;
    case 10: goto L_1229b51e;
    case 11: goto L_1229b513;
    case 12: goto L_1229b53e;
    case 13: goto L_1229b546;
    default: x86_unimpl("switch@0x1229b3f9 out of table"); return;
  }
L_1229b400:;
  /* 1229b400 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1229b407 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1229b40a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1229b410 mov eax, dword ptr [0x122bec98] */
  EAX = (r32((uint32_t)(0x122bec98)));
  /* 1229b415 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229b417 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1229b41b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1229b421 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229b423 je 0x1229b47d */
  if (C.zf) goto L_1229b47d;
  /* 1229b425 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1229b42b push edx */
  push32((uint32_t)(EDX));
  /* 1229b42c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229b42f push eax */
  push32((uint32_t)(EAX));
  /* 1229b430 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1229b434 push ecx */
  push32((uint32_t)(ECX));
  /* 1229b435 call 0x1229c070 */
  push32(0x1229b43au); f_1229c070();
  /* 1229b43a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b43d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229b440 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1229b442 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1229b445 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229b448 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b44b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1229b44e:;
  /* 1229b44e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1229b452 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229b454 jne 0x1229b477 */
  if (!C.zf) goto L_1229b477;
  /* 1229b456 push 0x122bc2d8 */
  push32((uint32_t)(0x122bc2d8u));
  /* 1229b45b push 0 */
  push32((uint32_t)(0x0u));
  /* 1229b45d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1229b462 push 0x122bc2cc */
  push32((uint32_t)(0x122bc2ccu));
  /* 1229b467 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229b469 call 0x12293470 */
  push32(0x1229b46eu); f_12293470();
  /* 1229b46e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b471 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b474 jne 0x1229b477 */
  if (!C.zf) goto L_1229b477;
  /* 1229b476 int3  */
  x86_unimpl("int3 @ 0x1229b476");
L_1229b477:;
  /* 1229b477 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229b479 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229b47b jne 0x1229b44e */
  if (!C.zf) goto L_1229b44e;
L_1229b47d:;
  /* 1229b47d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1229b483 push ecx */
  push32((uint32_t)(ECX));
  /* 1229b484 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229b487 push edx */
  push32((uint32_t)(EDX));
  /* 1229b488 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1229b48c push eax */
  push32((uint32_t)(EAX));
  /* 1229b48d call 0x1229c070 */
  push32(0x1229b492u); f_1229c070();
  /* 1229b492 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b495 jmp 0x1229bf52 */
  goto L_1229bf52;
L_1229b49a:;
  /* 1229b49a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1229b4a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b4a4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1229b4aa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1229b4b0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1229b4b6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1229b4bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1229b4bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1229b4c6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1229b4d0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1229b4d7 jmp 0x1229bf52 */
  goto L_1229bf52;
L_1229b4dc:;
  /* 1229b4dc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1229b4e0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1229b4e6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1229b4ec sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229b4ef mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1229b4f5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b4fc ja 0x1229b546 */
  if ((!C.cf&&!C.zf)) goto L_1229b546;
  /* 1229b4fe mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1229b504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229b506 mov al, byte ptr [ecx + 0x1229bf9c] */
  AL = (r8((uint32_t)(ECX + 0x1229bf9c)));
  /* 1229b50c jmp dword ptr [eax*4 + 0x1229bf84] */
  switch (EAX) {
    case 0: goto L_1229b528;
    case 1: goto L_1229b533;
    case 2: goto L_1229b51e;
    case 3: goto L_1229b513;
    case 4: goto L_1229b53e;
    case 5: goto L_1229b546;
    default: x86_unimpl("switch@0x1229b50c out of table"); return;
  }
L_1229b513:;
  /* 1229b513 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b516 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1229b519 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1229b51c jmp 0x1229b546 */
  goto L_1229b546;
L_1229b51e:;
  /* 1229b51e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b521 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1229b523 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229b526 jmp 0x1229b546 */
  goto L_1229b546;
L_1229b528:;
  /* 1229b528 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b52b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1229b52e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1229b531 jmp 0x1229b546 */
  goto L_1229b546;
L_1229b533:;
  /* 1229b533 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b536 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1229b539 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1229b53c jmp 0x1229b546 */
  goto L_1229b546;
L_1229b53e:;
  /* 1229b53e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b541 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1229b543 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1229b546:;
  /* 1229b546 jmp 0x1229bf52 */
  goto L_1229bf52;
L_1229b54b:;
  /* 1229b54b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1229b54f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b552 jne 0x1229b587 */
  if (!C.zf) goto L_1229b587;
  /* 1229b554 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1229b557 push edx */
  push32((uint32_t)(EDX));
  /* 1229b558 call 0x1229c180 */
  push32(0x1229b55du); f_1229c180();
  /* 1229b55d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b560 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1229b566 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b56d jge 0x1229b585 */
  if ((C.sf==C.of)) goto L_1229b585;
  /* 1229b56f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b572 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1229b574 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229b577 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1229b57d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1229b57f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1229b585:;
  /* 1229b585 jmp 0x1229b59e */
  goto L_1229b59e;
L_1229b587:;
  /* 1229b587 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1229b58d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229b590 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1229b594 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1229b598 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1229b59e:;
  /* 1229b59e jmp 0x1229bf52 */
  goto L_1229bf52;
L_1229b5a3:;
  /* 1229b5a3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1229b5ad jmp 0x1229bf52 */
  goto L_1229bf52;
L_1229b5b2:;
  /* 1229b5b2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1229b5b6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b5b9 jne 0x1229b5e2 */
  if (!C.zf) goto L_1229b5e2;
  /* 1229b5bb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1229b5be push eax */
  push32((uint32_t)(EAX));
  /* 1229b5bf call 0x1229c180 */
  push32(0x1229b5c4u); f_1229c180();
  /* 1229b5c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b5c7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1229b5cd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b5d4 jge 0x1229b5e0 */
  if ((C.sf==C.of)) goto L_1229b5e0;
  /* 1229b5d6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1229b5e0:;
  /* 1229b5e0 jmp 0x1229b5f9 */
  goto L_1229b5f9;
L_1229b5e2:;
  /* 1229b5e2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1229b5e8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229b5eb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1229b5ef lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1229b5f3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1229b5f9:;
  /* 1229b5f9 jmp 0x1229bf52 */
  goto L_1229bf52;
L_1229b5fe:;
  /* 1229b5fe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1229b602 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1229b608 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1229b60e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229b611 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1229b617 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b61e ja 0x1229b68c */
  if ((!C.cf&&!C.zf)) goto L_1229b68c;
  /* 1229b620 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1229b626 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229b628 mov al, byte ptr [ecx + 0x1229bfc1] */
  AL = (r8((uint32_t)(ECX + 0x1229bfc1)));
  /* 1229b62e jmp dword ptr [eax*4 + 0x1229bfad] */
  switch (EAX) {
    case 0: goto L_1229b640;
    case 1: goto L_1229b679;
    case 2: goto L_1229b635;
    case 3: goto L_1229b683;
    case 4: goto L_1229b68c;
    default: x86_unimpl("switch@0x1229b62e out of table"); return;
  }
L_1229b635:;
  /* 1229b635 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b638 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1229b63b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1229b63e jmp 0x1229b68c */
  goto L_1229b68c;
L_1229b640:;
  /* 1229b640 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229b643 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1229b646 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b649 jne 0x1229b66b */
  if (!C.zf) goto L_1229b66b;
  /* 1229b64b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229b64e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1229b652 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b655 jne 0x1229b66b */
  if (!C.zf) goto L_1229b66b;
  /* 1229b657 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229b65a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b65d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1229b660 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b663 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1229b666 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1229b669 jmp 0x1229b677 */
  goto L_1229b677;
L_1229b66b:;
  /* 1229b66b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1229b672 jmp 0x1229b400 */
  goto L_1229b400;
L_1229b677:;
  /* 1229b677 jmp 0x1229b68c */
  goto L_1229b68c;
L_1229b679:;
  /* 1229b679 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b67c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1229b67e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229b681 jmp 0x1229b68c */
  goto L_1229b68c;
L_1229b683:;
  /* 1229b683 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b686 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1229b689 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1229b68c:;
  /* 1229b68c jmp 0x1229bf52 */
  goto L_1229bf52;
L_1229b691:;
  /* 1229b691 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1229b695 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1229b69b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1229b6a1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229b6a4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1229b6aa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b6b1 ja 0x1229bd77 */
  if ((!C.cf&&!C.zf)) goto L_1229bd77;
  /* 1229b6b7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1229b6bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229b6bf mov cl, byte ptr [edx + 0x1229c02c] */
  CL = (r8((uint32_t)(EDX + 0x1229c02c)));
  /* 1229b6c5 jmp dword ptr [ecx*4 + 0x1229bff0] */
  switch (ECX) {
    case 0: goto L_1229b6cc;
    case 1: goto L_1229b960;
    case 2: goto L_1229b7f0;
    case 3: goto L_1229ba99;
    case 4: goto L_1229b75b;
    case 5: goto L_1229b6e1;
    case 6: goto L_1229ba6b;
    case 7: goto L_1229b970;
    case 8: goto L_1229b915;
    case 9: goto L_1229bae5;
    case 10: goto L_1229ba8f;
    case 11: goto L_1229b806;
    case 12: goto L_1229ba83;
    case 13: goto L_1229baa5;
    case 14: goto L_1229bd77;
    default: x86_unimpl("switch@0x1229b6c5 out of table"); return;
  }
L_1229b6cc:;
  /* 1229b6cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b6cf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1229b6d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229b6d6 jne 0x1229b6e1 */
  if (!C.zf) goto L_1229b6e1;
  /* 1229b6d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b6db or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1229b6de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1229b6e1:;
  /* 1229b6e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b6e4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1229b6ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229b6ec je 0x1229b727 */
  if (C.zf) goto L_1229b727;
  /* 1229b6ee lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1229b6f1 push eax */
  push32((uint32_t)(EAX));
  /* 1229b6f2 call 0x1229c1c0 */
  push32(0x1229b6f7u); f_1229c1c0();
  /* 1229b6f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b6fa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1229b6fe mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1229b702 push ecx */
  push32((uint32_t)(ECX));
  /* 1229b703 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1229b709 push edx */
  push32((uint32_t)(EDX));
  /* 1229b70a call 0x1229d2a0 */
  push32(0x1229b70fu); f_1229d2a0();
  /* 1229b70f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b712 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1229b715 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b719 jge 0x1229b725 */
  if ((C.sf==C.of)) goto L_1229b725;
  /* 1229b71b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1229b725:;
  /* 1229b725 jmp 0x1229b74d */
  goto L_1229b74d;
L_1229b727:;
  /* 1229b727 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1229b72a push eax */
  push32((uint32_t)(EAX));
  /* 1229b72b call 0x1229c180 */
  push32(0x1229b730u); f_1229c180();
  /* 1229b730 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b733 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1229b73a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1229b740 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1229b746 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1229b74d:;
  /* 1229b74d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1229b753 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1229b756 jmp 0x1229bd77 */
  goto L_1229bd77;
L_1229b75b:;
  /* 1229b75b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1229b75e push eax */
  push32((uint32_t)(EAX));
  /* 1229b75f call 0x1229c180 */
  push32(0x1229b764u); f_1229c180();
  /* 1229b764 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b767 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1229b76d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b774 je 0x1229b782 */
  if (C.zf) goto L_1229b782;
  /* 1229b776 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1229b77c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b780 jne 0x1229b79c */
  if (!C.zf) goto L_1229b79c;
L_1229b782:;
  /* 1229b782 mov edx, dword ptr [0x122befb0] */
  EDX = (r32((uint32_t)(0x122befb0)));
  /* 1229b788 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1229b78b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229b78e push eax */
  push32((uint32_t)(EAX));
  /* 1229b78f call 0x122971e0 */
  push32(0x1229b794u); f_122971e0();
  /* 1229b794 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b797 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1229b79a jmp 0x1229b7eb */
  goto L_1229b7eb;
L_1229b79c:;
  /* 1229b79c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b79f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1229b7a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229b7a7 je 0x1229b7cc */
  if (C.zf) goto L_1229b7cc;
  /* 1229b7a9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1229b7af mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1229b7b2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1229b7b5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1229b7bb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1229b7be shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1229b7c0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1229b7c3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1229b7ca jmp 0x1229b7eb */
  goto L_1229b7eb;
L_1229b7cc:;
  /* 1229b7cc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1229b7d3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1229b7d9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1229b7dc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1229b7df mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1229b7e5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1229b7e8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1229b7eb:;
  /* 1229b7eb jmp 0x1229bd77 */
  goto L_1229bd77;
L_1229b7f0:;
  /* 1229b7f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b7f3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1229b7f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229b7fb jne 0x1229b806 */
  if (!C.zf) goto L_1229b806;
  /* 1229b7fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b800 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1229b803 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1229b806:;
  /* 1229b806 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b80d jne 0x1229b81b */
  if (!C.zf) goto L_1229b81b;
  /* 1229b80f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1229b819 jmp 0x1229b827 */
  goto L_1229b827;
L_1229b81b:;
  /* 1229b81b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1229b821 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1229b827:;
  /* 1229b827 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1229b82d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1229b833 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1229b836 push edx */
  push32((uint32_t)(EDX));
  /* 1229b837 call 0x1229c180 */
  push32(0x1229b83cu); f_1229c180();
  /* 1229b83c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b83f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1229b842 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b845 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1229b84a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229b84c je 0x1229b8b6 */
  if (C.zf) goto L_1229b8b6;
  /* 1229b84e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b852 jne 0x1229b85d */
  if (!C.zf) goto L_1229b85d;
  /* 1229b854 mov ecx, dword ptr [0x122befb4] */
  ECX = (r32((uint32_t)(0x122befb4)));
  /* 1229b85a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1229b85d:;
  /* 1229b85d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1229b864 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229b867 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1229b86d:;
  /* 1229b86d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1229b873 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1229b879 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229b87c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1229b882 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229b884 je 0x1229b8a6 */
  if (C.zf) goto L_1229b8a6;
  /* 1229b886 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1229b88c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229b88e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1229b891 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229b893 je 0x1229b8a6 */
  if (C.zf) goto L_1229b8a6;
  /* 1229b895 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1229b89b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b89e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1229b8a4 jmp 0x1229b86d */
  goto L_1229b86d;
L_1229b8a6:;
  /* 1229b8a6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1229b8ac sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229b8af sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1229b8b1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1229b8b4 jmp 0x1229b910 */
  goto L_1229b910;
L_1229b8b6:;
  /* 1229b8b6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b8ba jne 0x1229b8c4 */
  if (!C.zf) goto L_1229b8c4;
  /* 1229b8bc mov eax, dword ptr [0x122befb0] */
  EAX = (r32((uint32_t)(0x122befb0)));
  /* 1229b8c1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1229b8c4:;
  /* 1229b8c4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229b8c7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1229b8cd:;
  /* 1229b8cd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1229b8d3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1229b8d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229b8dc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1229b8e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229b8e4 je 0x1229b904 */
  if (C.zf) goto L_1229b904;
  /* 1229b8e6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1229b8ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1229b8ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229b8f1 je 0x1229b904 */
  if (C.zf) goto L_1229b904;
  /* 1229b8f3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1229b8f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b8fc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1229b902 jmp 0x1229b8cd */
  goto L_1229b8cd;
L_1229b904:;
  /* 1229b904 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1229b90a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229b90d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1229b910:;
  /* 1229b910 jmp 0x1229bd77 */
  goto L_1229bd77;
L_1229b915:;
  /* 1229b915 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1229b918 push edx */
  push32((uint32_t)(EDX));
  /* 1229b919 call 0x1229c180 */
  push32(0x1229b91eu); f_1229c180();
  /* 1229b91e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b921 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1229b927 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b92a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1229b92d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229b92f je 0x1229b943 */
  if (C.zf) goto L_1229b943;
  /* 1229b931 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1229b937 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1229b93e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1229b941 jmp 0x1229b951 */
  goto L_1229b951;
L_1229b943:;
  /* 1229b943 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1229b949 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1229b94f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1229b951:;
  /* 1229b951 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1229b95b jmp 0x1229bd77 */
  goto L_1229bd77;
L_1229b960:;
  /* 1229b960 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1229b967 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1229b96a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1229b96d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1229b970:;
  /* 1229b970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b973 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1229b975 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229b978 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1229b97e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1229b981 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b988 jge 0x1229b996 */
  if ((C.sf==C.of)) goto L_1229b996;
  /* 1229b98a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1229b994 jmp 0x1229b9b2 */
  goto L_1229b9b2;
L_1229b996:;
  /* 1229b996 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b99d jne 0x1229b9b2 */
  if (!C.zf) goto L_1229b9b2;
  /* 1229b99f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1229b9a3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229b9a6 jne 0x1229b9b2 */
  if (!C.zf) goto L_1229b9b2;
  /* 1229b9a8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1229b9b2:;
  /* 1229b9b2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229b9b5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b9b8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1229b9bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229b9be sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229b9c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1229b9c3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1229b9c6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1229b9cc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1229b9d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229b9d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1229b9d6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1229b9dc push edx */
  push32((uint32_t)(EDX));
  /* 1229b9dd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1229b9e1 push eax */
  push32((uint32_t)(EAX));
  /* 1229b9e2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229b9e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1229b9e6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1229b9ec push edx */
  push32((uint32_t)(EDX));
  /* 1229b9ed call dword ptr [0x122bf3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122bf3a0))), 0x1229b9f3u);
  /* 1229b9f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229b9f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229b9f9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1229b9fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229ba00 je 0x1229ba18 */
  if (C.zf) goto L_1229ba18;
  /* 1229ba02 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ba09 jne 0x1229ba18 */
  if (!C.zf) goto L_1229ba18;
  /* 1229ba0b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229ba0e push ecx */
  push32((uint32_t)(ECX));
  /* 1229ba0f call dword ptr [0x122bf3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x122bf3ac))), 0x1229ba15u);
  /* 1229ba15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229ba18:;
  /* 1229ba18 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1229ba1c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ba1f jne 0x1229ba3a */
  if (!C.zf) goto L_1229ba3a;
  /* 1229ba21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ba24 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1229ba29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229ba2b jne 0x1229ba3a */
  if (!C.zf) goto L_1229ba3a;
  /* 1229ba2d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229ba30 push ecx */
  push32((uint32_t)(ECX));
  /* 1229ba31 call dword ptr [0x122bf3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122bf3a4))), 0x1229ba37u);
  /* 1229ba37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229ba3a:;
  /* 1229ba3a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229ba3d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1229ba40 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ba43 jne 0x1229ba57 */
  if (!C.zf) goto L_1229ba57;
  /* 1229ba45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ba48 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1229ba4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1229ba4e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229ba51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ba54 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1229ba57:;
  /* 1229ba57 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229ba5a push eax */
  push32((uint32_t)(EAX));
  /* 1229ba5b call 0x122971e0 */
  push32(0x1229ba60u); f_122971e0();
  /* 1229ba60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ba63 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1229ba66 jmp 0x1229bd77 */
  goto L_1229bd77;
L_1229ba6b:;
  /* 1229ba6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ba6e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1229ba71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1229ba74 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1229ba7e jmp 0x1229bb05 */
  goto L_1229bb05;
L_1229ba83:;
  /* 1229ba83 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1229ba8d jmp 0x1229bb05 */
  goto L_1229bb05;
L_1229ba8f:;
  /* 1229ba8f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1229ba99:;
  /* 1229ba99 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1229baa3 jmp 0x1229baaf */
  goto L_1229baaf;
L_1229baa5:;
  /* 1229baa5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1229baaf:;
  /* 1229baaf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1229bab9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229babc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1229bac2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229bac4 je 0x1229bae3 */
  if (C.zf) goto L_1229bae3;
  /* 1229bac6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1229bacd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1229bad3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229bad6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1229badc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1229bae3:;
  /* 1229bae3 jmp 0x1229bb05 */
  goto L_1229bb05;
L_1229bae5:;
  /* 1229bae5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1229baef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229baf2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1229baf8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229bafa je 0x1229bb05 */
  if (C.zf) goto L_1229bb05;
  /* 1229bafc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229baff or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1229bb02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1229bb05:;
  /* 1229bb05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229bb08 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1229bb0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229bb0f je 0x1229bb2e */
  if (C.zf) goto L_1229bb2e;
  /* 1229bb11 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1229bb14 push ecx */
  push32((uint32_t)(ECX));
  /* 1229bb15 call 0x1229c1a0 */
  push32(0x1229bb1au); f_1229c1a0();
  /* 1229bb1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229bb1d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1229bb23 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1229bb29 jmp 0x1229bbbf */
  goto L_1229bbbf;
L_1229bb2e:;
  /* 1229bb2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229bb31 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1229bb34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229bb36 je 0x1229bb80 */
  if (C.zf) goto L_1229bb80;
  /* 1229bb38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229bb3b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1229bb3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229bb40 je 0x1229bb60 */
  if (C.zf) goto L_1229bb60;
  /* 1229bb42 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1229bb45 push ecx */
  push32((uint32_t)(ECX));
  /* 1229bb46 call 0x1229c180 */
  push32(0x1229bb4bu); f_1229c180();
  /* 1229bb4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229bb4e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1229bb51 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1229bb52 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1229bb58 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1229bb5e jmp 0x1229bb7e */
  goto L_1229bb7e;
L_1229bb60:;
  /* 1229bb60 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1229bb63 push edx */
  push32((uint32_t)(EDX));
  /* 1229bb64 call 0x1229c180 */
  push32(0x1229bb69u); f_1229c180();
  /* 1229bb69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229bb6c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229bb71 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1229bb72 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1229bb78 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1229bb7e:;
  /* 1229bb7e jmp 0x1229bbbf */
  goto L_1229bbbf;
L_1229bb80:;
  /* 1229bb80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229bb83 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1229bb86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229bb88 je 0x1229bba5 */
  if (C.zf) goto L_1229bba5;
  /* 1229bb8a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1229bb8d push ecx */
  push32((uint32_t)(ECX));
  /* 1229bb8e call 0x1229c180 */
  push32(0x1229bb93u); f_1229c180();
  /* 1229bb93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229bb96 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1229bb97 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1229bb9d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1229bba3 jmp 0x1229bbbf */
  goto L_1229bbbf;
L_1229bba5:;
  /* 1229bba5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1229bba8 push edx */
  push32((uint32_t)(EDX));
  /* 1229bba9 call 0x1229c180 */
  push32(0x1229bbaeu); f_1229c180();
  /* 1229bbae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229bbb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229bbb3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1229bbb9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1229bbbf:;
  /* 1229bbbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229bbc2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1229bbc5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229bbc7 je 0x1229bc07 */
  if (C.zf) goto L_1229bc07;
  /* 1229bbc9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229bbd0 jg 0x1229bc07 */
  if ((!C.zf&&C.sf==C.of)) goto L_1229bc07;
  /* 1229bbd2 jl 0x1229bbdd */
  if ((C.sf!=C.of)) goto L_1229bbdd;
  /* 1229bbd4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229bbdb jae 0x1229bc07 */
  if (!C.cf) goto L_1229bc07;
L_1229bbdd:;
  /* 1229bbdd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1229bbe3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1229bbe5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1229bbeb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229bbee neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1229bbf0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1229bbf6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1229bbfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229bbff or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1229bc02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1229bc05 jmp 0x1229bc1f */
  goto L_1229bc1f;
L_1229bc07:;
  /* 1229bc07 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1229bc0d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1229bc13 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1229bc19 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1229bc1f:;
  /* 1229bc1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229bc22 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1229bc28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229bc2a jne 0x1229bc47 */
  if (!C.zf) goto L_1229bc47;
  /* 1229bc2c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1229bc32 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1229bc38 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1229bc3b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1229bc41 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1229bc47:;
  /* 1229bc47 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229bc4e jge 0x1229bc5c */
  if ((C.sf==C.of)) goto L_1229bc5c;
  /* 1229bc50 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1229bc5a jmp 0x1229bc65 */
  goto L_1229bc65;
L_1229bc5c:;
  /* 1229bc5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229bc5f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1229bc62 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1229bc65:;
  /* 1229bc65 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1229bc6b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1229bc71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229bc73 jne 0x1229bc7c */
  if (!C.zf) goto L_1229bc7c;
  /* 1229bc75 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1229bc7c:;
  /* 1229bc7c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1229bc7f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1229bc82:;
  /* 1229bc82 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1229bc88 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1229bc8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229bc91 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1229bc97 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229bc99 jg 0x1229bcaf */
  if ((!C.zf&&C.sf==C.of)) goto L_1229bcaf;
  /* 1229bc9b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1229bca1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1229bca7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229bca9 je 0x1229bd30 */
  if (C.zf) goto L_1229bd30;
L_1229bcaf:;
  /* 1229bcaf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1229bcb5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1229bcb6 push edx */
  push32((uint32_t)(EDX));
  /* 1229bcb7 push eax */
  push32((uint32_t)(EAX));
  /* 1229bcb8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1229bcbe push edx */
  push32((uint32_t)(EDX));
  /* 1229bcbf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1229bcc5 push eax */
  push32((uint32_t)(EAX));
  /* 1229bcc6 call 0x1229b040 */
  push32(0x1229bccbu); f_1229b040();
  /* 1229bccb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229bcce mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1229bcd4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1229bcda cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1229bcdb push edx */
  push32((uint32_t)(EDX));
  /* 1229bcdc push eax */
  push32((uint32_t)(EAX));
  /* 1229bcdd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1229bce3 push ecx */
  push32((uint32_t)(ECX));
  /* 1229bce4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1229bcea push edx */
  push32((uint32_t)(EDX));
  /* 1229bceb call 0x1229afd0 */
  push32(0x1229bcf0u); f_1229afd0();
  /* 1229bcf0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1229bcf6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1229bcfc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229bd03 jle 0x1229bd17 */
  if ((C.zf||C.sf!=C.of)) goto L_1229bd17;
  /* 1229bd05 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1229bd0b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229bd11 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1229bd17:;
  /* 1229bd17 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229bd1a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1229bd20 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1229bd22 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229bd25 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229bd28 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1229bd2b jmp 0x1229bc82 */
  goto L_1229bc82;
L_1229bd30:;
  /* 1229bd30 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1229bd33 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229bd36 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1229bd39 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229bd3c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229bd3f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1229bd42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229bd45 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1229bd4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229bd4c je 0x1229bd77 */
  if (C.zf) goto L_1229bd77;
  /* 1229bd4e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229bd51 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1229bd54 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229bd57 jne 0x1229bd5f */
  if (!C.zf) goto L_1229bd5f;
  /* 1229bd59 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229bd5d jne 0x1229bd77 */
  if (!C.zf) goto L_1229bd77;
L_1229bd5f:;
  /* 1229bd5f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229bd62 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229bd65 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1229bd68 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229bd6b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1229bd6e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229bd71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229bd74 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1229bd77:;
  /* 1229bd77 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229bd7e jne 0x1229bf52 */
  if (!C.zf) goto L_1229bf52;
  /* 1229bd84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229bd87 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1229bd8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229bd8c je 0x1229bddd */
  if (C.zf) goto L_1229bddd;
  /* 1229bd8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229bd91 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1229bd97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229bd99 je 0x1229bdab */
  if (C.zf) goto L_1229bdab;
  /* 1229bd9b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1229bda2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1229bda9 jmp 0x1229bddd */
  goto L_1229bddd;
L_1229bdab:;
  /* 1229bdab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229bdae and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1229bdb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229bdb3 je 0x1229bdc5 */
  if (C.zf) goto L_1229bdc5;
  /* 1229bdb5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1229bdbc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1229bdc3 jmp 0x1229bddd */
  goto L_1229bddd;
L_1229bdc5:;
  /* 1229bdc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229bdc8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1229bdcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229bdcd je 0x1229bddd */
  if (C.zf) goto L_1229bddd;
  /* 1229bdcf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1229bdd6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1229bddd:;
  /* 1229bddd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1229bde3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229bde6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229bde9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1229bdef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229bdf2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1229bdf5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229bdf7 jne 0x1229be15 */
  if (!C.zf) goto L_1229be15;
  /* 1229bdf9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1229bdff push eax */
  push32((uint32_t)(EAX));
  /* 1229be00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229be03 push ecx */
  push32((uint32_t)(ECX));
  /* 1229be04 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1229be0a push edx */
  push32((uint32_t)(EDX));
  /* 1229be0b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1229be0d call 0x1229c0f0 */
  push32(0x1229be12u); f_1229c0f0();
  /* 1229be12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229be15:;
  /* 1229be15 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1229be1b push eax */
  push32((uint32_t)(EAX));
  /* 1229be1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229be1f push ecx */
  push32((uint32_t)(ECX));
  /* 1229be20 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229be23 push edx */
  push32((uint32_t)(EDX));
  /* 1229be24 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1229be2a push eax */
  push32((uint32_t)(EAX));
  /* 1229be2b call 0x1229c130 */
  push32(0x1229be30u); f_1229c130();
  /* 1229be30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229be33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229be36 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1229be39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229be3b je 0x1229be63 */
  if (C.zf) goto L_1229be63;
  /* 1229be3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229be40 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1229be43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229be45 jne 0x1229be63 */
  if (!C.zf) goto L_1229be63;
  /* 1229be47 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1229be4d push eax */
  push32((uint32_t)(EAX));
  /* 1229be4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229be51 push ecx */
  push32((uint32_t)(ECX));
  /* 1229be52 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1229be58 push edx */
  push32((uint32_t)(EDX));
  /* 1229be59 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1229be5b call 0x1229c0f0 */
  push32(0x1229be60u); f_1229c0f0();
  /* 1229be60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229be63:;
  /* 1229be63 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229be67 je 0x1229bf11 */
  if (C.zf) goto L_1229bf11;
  /* 1229be6d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229be71 jle 0x1229bf11 */
  if ((C.zf||C.sf!=C.of)) goto L_1229bf11;
  /* 1229be77 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229be7a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1229be80 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229be83 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1229be89:;
  /* 1229be89 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1229be8f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1229be95 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229be98 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1229be9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229bea0 je 0x1229bf0f */
  if (C.zf) goto L_1229bf0f;
  /* 1229bea2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1229bea8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1229beab mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1229beb2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1229beb9 push eax */
  push32((uint32_t)(EAX));
  /* 1229beba lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1229bec0 push ecx */
  push32((uint32_t)(ECX));
  /* 1229bec1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1229bec7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229beca mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1229bed0 call 0x1229d2a0 */
  push32(0x1229bed5u); f_1229d2a0();
  /* 1229bed5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229bed8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1229bede cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229bee5 jg 0x1229bee9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1229bee9;
  /* 1229bee7 jmp 0x1229bf0f */
  goto L_1229bf0f;
L_1229bee9:;
  /* 1229bee9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1229beef push eax */
  push32((uint32_t)(EAX));
  /* 1229bef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229bef3 push ecx */
  push32((uint32_t)(ECX));
  /* 1229bef4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1229befa push edx */
  push32((uint32_t)(EDX));
  /* 1229befb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1229bf01 push eax */
  push32((uint32_t)(EAX));
  /* 1229bf02 call 0x1229c130 */
  push32(0x1229bf07u); f_1229c130();
  /* 1229bf07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229bf0a jmp 0x1229be89 */
  goto L_1229be89;
L_1229bf0f:;
  /* 1229bf0f jmp 0x1229bf2c */
  goto L_1229bf2c;
L_1229bf11:;
  /* 1229bf11 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1229bf17 push ecx */
  push32((uint32_t)(ECX));
  /* 1229bf18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229bf1b push edx */
  push32((uint32_t)(EDX));
  /* 1229bf1c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229bf1f push eax */
  push32((uint32_t)(EAX));
  /* 1229bf20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229bf23 push ecx */
  push32((uint32_t)(ECX));
  /* 1229bf24 call 0x1229c130 */
  push32(0x1229bf29u); f_1229c130();
  /* 1229bf29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229bf2c:;
  /* 1229bf2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229bf2f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1229bf32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229bf34 je 0x1229bf52 */
  if (C.zf) goto L_1229bf52;
  /* 1229bf36 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1229bf3c push eax */
  push32((uint32_t)(EAX));
  /* 1229bf3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229bf40 push ecx */
  push32((uint32_t)(ECX));
  /* 1229bf41 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1229bf47 push edx */
  push32((uint32_t)(EDX));
  /* 1229bf48 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1229bf4a call 0x1229c0f0 */
  push32(0x1229bf4fu); f_1229c0f0();
  /* 1229bf4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229bf52:;
  /* 1229bf52 jmp 0x1229b364 */
  goto L_1229b364;
L_1229bf57:;
  /* 1229bf57 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1229bf5d pop edi */
  EDI = (pop32());
  /* 1229bf5e pop esi */
  ESI = (pop32());
  /* 1229bf5f pop ebx */
  EBX = (pop32());
  /* 1229bf60 mov esp, ebp */
  ESP = (EBP);
  /* 1229bf62 pop ebp */
  EBP = (pop32());
  /* 1229bf63 ret  */
  ESPCHK(0x1229b340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c070 @ 0x1229c070 (119 bytes, 44 insns) */
void f_1229c070(void) {
  FTRACE(0x1229c070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229c070 push ebp */
  push32((uint32_t)(EBP));
  /* 1229c071 mov ebp, esp */
  EBP = (ESP);
  /* 1229c073 push ecx */
  push32((uint32_t)(ECX));
  /* 1229c074 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c077 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1229c07a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229c07d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c080 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1229c083 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c086 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c08a jl 0x1229c0b2 */
  if ((C.sf!=C.of)) goto L_1229c0b2;
  /* 1229c08c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c08f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1229c091 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1229c094 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1229c096 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1229c09a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1229c0a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1229c0a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c0a6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1229c0a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c0ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c0ae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1229c0b0 jmp 0x1229c0c5 */
  goto L_1229c0c5;
L_1229c0b2:;
  /* 1229c0b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c0b5 push edx */
  push32((uint32_t)(EDX));
  /* 1229c0b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c0b9 push eax */
  push32((uint32_t)(EAX));
  /* 1229c0ba call 0x1229b0c0 */
  push32(0x1229c0bfu); f_1229b0c0();
  /* 1229c0bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c0c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1229c0c5:;
  /* 1229c0c5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c0c9 jne 0x1229c0d6 */
  if (!C.zf) goto L_1229c0d6;
  /* 1229c0cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229c0ce mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1229c0d4 jmp 0x1229c0e3 */
  goto L_1229c0e3;
L_1229c0d6:;
  /* 1229c0d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229c0d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1229c0db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c0de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229c0e1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1229c0e3:;
  /* 1229c0e3 mov esp, ebp */
  ESP = (EBP);
  /* 1229c0e5 pop ebp */
  EBP = (pop32());
  /* 1229c0e6 ret  */
  ESPCHK(0x1229c070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0f0 @ 0x1229c0f0 (53 bytes, 23 insns) */
void f_1229c0f0(void) {
  FTRACE(0x1229c0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229c0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229c0f1 mov ebp, esp */
  EBP = (ESP);
L_1229c0f3:;
  /* 1229c0f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c0f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c0f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229c0fc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1229c0ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229c101 jle 0x1229c123 */
  if ((C.zf||C.sf!=C.of)) goto L_1229c123;
  /* 1229c103 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229c106 push edx */
  push32((uint32_t)(EDX));
  /* 1229c107 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229c10a push eax */
  push32((uint32_t)(EAX));
  /* 1229c10b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c10e push ecx */
  push32((uint32_t)(ECX));
  /* 1229c10f call 0x1229c070 */
  push32(0x1229c114u); f_1229c070();
  /* 1229c114 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c117 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229c11a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c11d jne 0x1229c121 */
  if (!C.zf) goto L_1229c121;
  /* 1229c11f jmp 0x1229c123 */
  goto L_1229c123;
L_1229c121:;
  /* 1229c121 jmp 0x1229c0f3 */
  goto L_1229c0f3;
L_1229c123:;
  /* 1229c123 pop ebp */
  EBP = (pop32());
  /* 1229c124 ret  */
  ESPCHK(0x1229c0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c130 @ 0x1229c130 (74 bytes, 31 insns) */
void f_1229c130(void) {
  FTRACE(0x1229c130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229c130 push ebp */
  push32((uint32_t)(EBP));
  /* 1229c131 mov ebp, esp */
  EBP = (ESP);
  /* 1229c133 push ecx */
  push32((uint32_t)(ECX));
L_1229c134:;
  /* 1229c134 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c137 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c13a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229c13d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1229c140 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229c142 jle 0x1229c176 */
  if ((C.zf||C.sf!=C.of)) goto L_1229c176;
  /* 1229c144 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229c147 push edx */
  push32((uint32_t)(EDX));
  /* 1229c148 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229c14b push eax */
  push32((uint32_t)(EAX));
  /* 1229c14c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c14f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1229c152 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1229c155 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229c158 push eax */
  push32((uint32_t)(EAX));
  /* 1229c159 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c15c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c15f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1229c162 call 0x1229c070 */
  push32(0x1229c167u); f_1229c070();
  /* 1229c167 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c16a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229c16d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c170 jne 0x1229c174 */
  if (!C.zf) goto L_1229c174;
  /* 1229c172 jmp 0x1229c176 */
  goto L_1229c176;
L_1229c174:;
  /* 1229c174 jmp 0x1229c134 */
  goto L_1229c134;
L_1229c176:;
  /* 1229c176 mov esp, ebp */
  ESP = (EBP);
  /* 1229c178 pop ebp */
  EBP = (pop32());
  /* 1229c179 ret  */
  ESPCHK(0x1229c130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c180 @ 0x1229c180 (26 bytes, 12 insns) */
void f_1229c180(void) {
  FTRACE(0x1229c180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229c180 push ebp */
  push32((uint32_t)(EBP));
  /* 1229c181 mov ebp, esp */
  EBP = (ESP);
  /* 1229c183 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c186 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1229c188 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c18b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c18e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1229c190 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c193 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1229c195 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1229c198 pop ebp */
  EBP = (pop32());
  /* 1229c199 ret  */
  ESPCHK(0x1229c180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1a0 @ 0x1229c1a0 (31 bytes, 14 insns) */
void f_1229c1a0(void) {
  FTRACE(0x1229c1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229c1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229c1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1229c1a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c1a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1229c1a8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c1ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c1ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1229c1b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c1b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1229c1b5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229c1b8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1229c1ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1229c1bd pop ebp */
  EBP = (pop32());
  /* 1229c1be ret  */
  ESPCHK(0x1229c1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1c0 @ 0x1229c1c0 (27 bytes, 12 insns) */
void f_1229c1c0(void) {
  FTRACE(0x1229c1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229c1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229c1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1229c1c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c1c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1229c1c8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c1cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c1ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1229c1d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c1d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1229c1d5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1229c1d9 pop ebp */
  EBP = (pop32());
  /* 1229c1da ret  */
  ESPCHK(0x1229c1c0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1229c1e0 (145 bytes, 42 insns) */
void f_1229c1e0(void) {
  FTRACE(0x1229c1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229c1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229c1e1 mov ebp, esp */
  EBP = (ESP);
  /* 1229c1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1229c1e4 call 0x1229c290 */
  push32(0x1229c1e9u); f_1229c290();
  /* 1229c1e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c1ec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1229c1ee mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1229c1f5 jmp 0x1229c200 */
  goto L_1229c200;
L_1229c1f7:;
  /* 1229c1f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229c1fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c1fd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1229c200:;
  /* 1229c200 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c204 jae 0x1229c22a */
  if (!C.cf) goto L_1229c22a;
  /* 1229c206 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229c209 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c20c cmp ecx, dword ptr [eax*8 + 0x122befb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x122befb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c213 jne 0x1229c228 */
  if (!C.zf) goto L_1229c228;
  /* 1229c215 call 0x1229c280 */
  push32(0x1229c21au); f_1229c280();
  /* 1229c21a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229c21d mov ecx, dword ptr [edx*8 + 0x122befbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x122befbc)));
  /* 1229c224 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1229c226 jmp 0x1229c26d */
  goto L_1229c26d;
L_1229c228:;
  /* 1229c228 jmp 0x1229c1f7 */
  goto L_1229c1f7;
L_1229c22a:;
  /* 1229c22a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c22e jb 0x1229c243 */
  if (C.cf) goto L_1229c243;
  /* 1229c230 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c234 ja 0x1229c243 */
  if ((!C.cf&&!C.zf)) goto L_1229c243;
  /* 1229c236 call 0x1229c280 */
  push32(0x1229c23bu); f_1229c280();
  /* 1229c23b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1229c241 jmp 0x1229c26d */
  goto L_1229c26d;
L_1229c243:;
  /* 1229c243 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c24a jb 0x1229c262 */
  if (C.cf) goto L_1229c262;
  /* 1229c24c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c253 ja 0x1229c262 */
  if ((!C.cf&&!C.zf)) goto L_1229c262;
  /* 1229c255 call 0x1229c280 */
  push32(0x1229c25au); f_1229c280();
  /* 1229c25a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1229c260 jmp 0x1229c26d */
  goto L_1229c26d;
L_1229c262:;
  /* 1229c262 call 0x1229c280 */
  push32(0x1229c267u); f_1229c280();
  /* 1229c267 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1229c26d:;
  /* 1229c26d mov esp, ebp */
  ESP = (EBP);
  /* 1229c26f pop ebp */
  EBP = (pop32());
  /* 1229c270 ret  */
  ESPCHK(0x1229c1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c280 @ 0x1229c280 (13 bytes, 6 insns) */
void f_1229c280(void) {
  FTRACE(0x1229c280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229c280 push ebp */
  push32((uint32_t)(EBP));
  /* 1229c281 mov ebp, esp */
  EBP = (ESP);
  /* 1229c283 call 0x12293df0 */
  push32(0x1229c288u); f_12293df0();
  /* 1229c288 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c28b pop ebp */
  EBP = (pop32());
  /* 1229c28c ret  */
  ESPCHK(0x1229c280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c290 @ 0x1229c290 (13 bytes, 6 insns) */
void f_1229c290(void) {
  FTRACE(0x1229c290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229c290 push ebp */
  push32((uint32_t)(EBP));
  /* 1229c291 mov ebp, esp */
  EBP = (ESP);
  /* 1229c293 call 0x12293df0 */
  push32(0x1229c298u); f_12293df0();
  /* 1229c298 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c29b pop ebp */
  EBP = (pop32());
  /* 1229c29c ret  */
  ESPCHK(0x1229c290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2a0 @ 0x1229c2a0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_1229c2a0(void) {
  FTRACE(0x1229c2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229c2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229c2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1229c2a3 push edi */
  push32((uint32_t)(EDI));
  /* 1229c2a4 push esi */
  push32((uint32_t)(ESI));
  /* 1229c2a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c2a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229c2ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c2ae mov eax, ecx */
  EAX = (ECX);
  /* 1229c2b0 mov edx, ecx */
  EDX = (ECX);
  /* 1229c2b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c2b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c2b6 jbe 0x1229c2c0 */
  if ((C.cf||C.zf)) goto L_1229c2c0;
  /* 1229c2b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c2ba jb 0x1229c438 */
  if (C.cf) goto L_1229c438;
L_1229c2c0:;
  /* 1229c2c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1229c2c6 jne 0x1229c2dc */
  if (!C.zf) goto L_1229c2dc;
  /* 1229c2c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1229c2cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1229c2ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c2d1 jb 0x1229c2fc */
  if (C.cf) goto L_1229c2fc;
  /* 1229c2d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1229c2d5 jmp dword ptr [edx*4 + 0x1229c3e8] */
  switch (EDX) {
    case 0: goto L_1229c3f8;
    case 1: goto L_1229c400;
    case 2: goto L_1229c40c;
    case 3: goto L_1229c420;
    default: x86_unimpl("switch@0x1229c2d5 out of table"); return;
  }
L_1229c2dc:;
  /* 1229c2dc mov eax, edi */
  EAX = (EDI);
  /* 1229c2de mov edx, 3 */
  EDX = (0x3u);
  /* 1229c2e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229c2e6 jb 0x1229c2f4 */
  if (C.cf) goto L_1229c2f4;
  /* 1229c2e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1229c2eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c2ed jmp dword ptr [eax*4 + 0x1229c300] */
  switch (EAX) {
    case 1: goto L_1229c310;
    case 2: goto L_1229c33c;
    case 3: goto L_1229c360;
    default: x86_unimpl("switch@0x1229c2ed out of table"); return;
  }
L_1229c2f4:;
  /* 1229c2f4 jmp dword ptr [ecx*4 + 0x1229c3f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1229c3f8)))); return;
  /* 1229c2fb nop  */
  /* nop */
L_1229c2fc:;
  /* 1229c2fc jmp dword ptr [ecx*4 + 0x1229c37c] */
  switch (ECX) {
    case 0: goto L_1229c3df;
    case 1: goto L_1229c3cc;
    case 2: goto L_1229c3c4;
    case 3: goto L_1229c3bc;
    case 4: goto L_1229c3b4;
    case 5: goto L_1229c3ac;
    case 6: goto L_1229c3a4;
    case 7: goto L_1229c39c;
    default: x86_unimpl("switch@0x1229c2fc out of table"); return;
  }
  /* 1229c303 nop  */
  /* nop */
L_1229c310:;
  /* 1229c310 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1229c312 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1229c314 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1229c316 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1229c319 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1229c31c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1229c31f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1229c322 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1229c325 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c328 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c32b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c32e jb 0x1229c2fc */
  if (C.cf) goto L_1229c2fc;
  /* 1229c330 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1229c332 jmp dword ptr [edx*4 + 0x1229c3e8] */
  switch (EDX) {
    case 0: goto L_1229c3f8;
    case 1: goto L_1229c400;
    case 2: goto L_1229c40c;
    case 3: goto L_1229c420;
    default: x86_unimpl("switch@0x1229c332 out of table"); return;
  }
  /* 1229c339 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1229c33c:;
  /* 1229c33c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1229c33e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1229c340 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1229c342 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1229c345 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1229c348 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1229c34b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c34e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c351 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c354 jb 0x1229c2fc */
  if (C.cf) goto L_1229c2fc;
  /* 1229c356 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1229c358 jmp dword ptr [edx*4 + 0x1229c3e8] */
  switch (EDX) {
    case 0: goto L_1229c3f8;
    case 1: goto L_1229c400;
    case 2: goto L_1229c40c;
    case 3: goto L_1229c420;
    default: x86_unimpl("switch@0x1229c358 out of table"); return;
  }
  /* 1229c35f nop  */
  /* nop */
L_1229c360:;
  /* 1229c360 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1229c362 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1229c364 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1229c366 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1229c367 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1229c36a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1229c36b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c36e jb 0x1229c2fc */
  if (C.cf) goto L_1229c2fc;
  /* 1229c370 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1229c372 jmp dword ptr [edx*4 + 0x1229c3e8] */
  switch (EDX) {
    case 0: goto L_1229c3f8;
    case 1: goto L_1229c400;
    case 2: goto L_1229c40c;
    case 3: goto L_1229c420;
    default: x86_unimpl("switch@0x1229c372 out of table"); return;
  }
  /* 1229c379 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1229c39c:;
  /* 1229c39c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1229c3a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1229c3a4:;
  /* 1229c3a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1229c3a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1229c3ac:;
  /* 1229c3ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1229c3b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1229c3b4:;
  /* 1229c3b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1229c3b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1229c3bc:;
  /* 1229c3bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1229c3c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1229c3c4:;
  /* 1229c3c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1229c3c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1229c3cc:;
  /* 1229c3cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1229c3d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1229c3d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1229c3db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c3dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1229c3df:;
  /* 1229c3df jmp dword ptr [edx*4 + 0x1229c3e8] */
  switch (EDX) {
    case 0: goto L_1229c3f8;
    case 1: goto L_1229c400;
    case 2: goto L_1229c40c;
    case 3: goto L_1229c420;
    default: x86_unimpl("switch@0x1229c3df out of table"); return;
  }
  /* 1229c3e6 mov edi, edi */
  EDI = (EDI);
L_1229c3f8:;
  /* 1229c3f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c3fb pop esi */
  ESI = (pop32());
  /* 1229c3fc pop edi */
  EDI = (pop32());
  /* 1229c3fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1229c3fe ret  */
  ESPCHK(0x1229c2a0u, _esp0);
  ESP += 4; return;
  /* 1229c3ff nop  */
  /* nop */
L_1229c400:;
  /* 1229c400 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1229c402 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1229c404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c407 pop esi */
  ESI = (pop32());
  /* 1229c408 pop edi */
  EDI = (pop32());
  /* 1229c409 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1229c40a ret  */
  ESPCHK(0x1229c2a0u, _esp0);
  ESP += 4; return;
  /* 1229c40b nop  */
  /* nop */
L_1229c40c:;
  /* 1229c40c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1229c40e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1229c410 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1229c413 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1229c416 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c419 pop esi */
  ESI = (pop32());
  /* 1229c41a pop edi */
  EDI = (pop32());
  /* 1229c41b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1229c41c ret  */
  ESPCHK(0x1229c2a0u, _esp0);
  ESP += 4; return;
  /* 1229c41d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1229c420:;
  /* 1229c420 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1229c422 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1229c424 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1229c427 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1229c42a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1229c42d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1229c430 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c433 pop esi */
  ESI = (pop32());
  /* 1229c434 pop edi */
  EDI = (pop32());
  /* 1229c435 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1229c436 ret  */
  ESPCHK(0x1229c2a0u, _esp0);
  ESP += 4; return;
  /* 1229c437 nop  */
  /* nop */
L_1229c438:;
  /* 1229c438 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1229c43c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1229c440 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1229c446 jne 0x1229c46c */
  if (!C.zf) goto L_1229c46c;
  /* 1229c448 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1229c44b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1229c44e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c451 jb 0x1229c460 */
  if (C.cf) goto L_1229c460;
  /* 1229c453 std  */
  C.df=1;
  /* 1229c454 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1229c456 cld  */
  C.df=0;
  /* 1229c457 jmp dword ptr [edx*4 + 0x1229c580] */
  switch (EDX) {
    case 0: goto L_1229c590;
    case 1: goto L_1229c598;
    case 2: goto L_1229c5a8;
    case 3: goto L_1229c5bc;
    default: x86_unimpl("switch@0x1229c457 out of table"); return;
  }
  /* 1229c45e mov edi, edi */
  EDI = (EDI);
L_1229c460:;
  /* 1229c460 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1229c462 jmp dword ptr [ecx*4 + 0x1229c530] */
  switch (ECX) {
    case 0: goto L_1229c577;
    default: x86_unimpl("switch@0x1229c462 out of table"); return;
  }
  /* 1229c469 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1229c46c:;
  /* 1229c46c mov eax, edi */
  EAX = (EDI);
  /* 1229c46e mov edx, 3 */
  EDX = (0x3u);
  /* 1229c473 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c476 jb 0x1229c484 */
  if (C.cf) goto L_1229c484;
  /* 1229c478 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1229c47b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229c47d jmp dword ptr [eax*4 + 0x1229c488] */
  switch (EAX) {
    case 1: goto L_1229c498;
    case 2: goto L_1229c4b8;
    case 3: goto L_1229c4e0;
    default: x86_unimpl("switch@0x1229c47d out of table"); return;
  }
L_1229c484:;
  /* 1229c484 jmp dword ptr [ecx*4 + 0x1229c580] */
  switch (ECX) {
    case 0: goto L_1229c590;
    case 1: goto L_1229c598;
    case 2: goto L_1229c5a8;
    case 3: goto L_1229c5bc;
    default: x86_unimpl("switch@0x1229c484 out of table"); return;
  }
  /* 1229c48b nop  */
  /* nop */
L_1229c498:;
  /* 1229c498 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1229c49b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1229c49d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1229c4a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1229c4a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1229c4a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1229c4a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c4a8 jb 0x1229c460 */
  if (C.cf) goto L_1229c460;
  /* 1229c4aa std  */
  C.df=1;
  /* 1229c4ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1229c4ad cld  */
  C.df=0;
  /* 1229c4ae jmp dword ptr [edx*4 + 0x1229c580] */
  switch (EDX) {
    case 0: goto L_1229c590;
    case 1: goto L_1229c598;
    case 2: goto L_1229c5a8;
    case 3: goto L_1229c5bc;
    default: x86_unimpl("switch@0x1229c4ae out of table"); return;
  }
  /* 1229c4b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1229c4b8:;
  /* 1229c4b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1229c4bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1229c4bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1229c4c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1229c4c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1229c4c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1229c4c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229c4cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229c4cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c4d2 jb 0x1229c460 */
  if (C.cf) goto L_1229c460;
  /* 1229c4d4 std  */
  C.df=1;
  /* 1229c4d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1229c4d7 cld  */
  C.df=0;
  /* 1229c4d8 jmp dword ptr [edx*4 + 0x1229c580] */
  switch (EDX) {
    case 0: goto L_1229c590;
    case 1: goto L_1229c598;
    case 2: goto L_1229c5a8;
    case 3: goto L_1229c5bc;
    default: x86_unimpl("switch@0x1229c4d8 out of table"); return;
  }
  /* 1229c4df nop  */
  /* nop */
L_1229c4e0:;
  /* 1229c4e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1229c4e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1229c4e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1229c4e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1229c4eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1229c4ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1229c4f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1229c4f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1229c4f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229c4fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229c4fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c500 jb 0x1229c460 */
  if (C.cf) goto L_1229c460;
  /* 1229c506 std  */
  C.df=1;
  /* 1229c507 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1229c509 cld  */
  C.df=0;
  /* 1229c50a jmp dword ptr [edx*4 + 0x1229c580] */
  switch (EDX) {
    case 0: goto L_1229c590;
    case 1: goto L_1229c598;
    case 2: goto L_1229c5a8;
    case 3: goto L_1229c5bc;
    default: x86_unimpl("switch@0x1229c50a out of table"); return;
  }
  /* 1229c511 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1229c514 xor al, 0xc5 */
  { uint32_t _r=(AL)^(0xc5u); AL = (_r); fl_logic(_r,8); }
  /* 1229c516 sub dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1229c518 cmp al, 0xc5 */
  { uint32_t _a=(AL),_b=(0xc5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1229c51a sub dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1229c51c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1229c51d lds ebp, ptr [ecx] */
  x86_unimpl("lds @ 0x1229c51d");
  /* 1229c51f adc cl, byte ptr [ebp + eax*8 + 0x29] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + EAX*8 + 0x29))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1229c523 adc dl, byte ptr [ebp + eax*8 + 0x29] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EBP + EAX*8 + 0x29))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1229c527 adc bl, byte ptr [ebp + eax*8 + 0x29] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EBP + EAX*8 + 0x29))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 1229c52b adc ah, byte ptr [ebp + eax*8 + 0x29] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(EBP + EAX*8 + 0x29))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1229c534 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1229c538 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1229c53c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1229c540 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1229c544 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1229c548 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1229c54c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1229c550 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1229c554 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1229c558 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1229c55c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1229c560 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1229c564 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1229c568 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1229c56c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1229c573 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c575 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1229c577:;
  /* 1229c577 jmp dword ptr [edx*4 + 0x1229c580] */
  switch (EDX) {
    case 0: goto L_1229c590;
    case 1: goto L_1229c598;
    case 2: goto L_1229c5a8;
    case 3: goto L_1229c5bc;
    default: x86_unimpl("switch@0x1229c577 out of table"); return;
  }
  /* 1229c57e mov edi, edi */
  EDI = (EDI);
L_1229c590:;
  /* 1229c590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c593 pop esi */
  ESI = (pop32());
  /* 1229c594 pop edi */
  EDI = (pop32());
  /* 1229c595 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1229c596 ret  */
  ESPCHK(0x1229c2a0u, _esp0);
  ESP += 4; return;
  /* 1229c597 nop  */
  /* nop */
L_1229c598:;
  /* 1229c598 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1229c59b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1229c59e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c5a1 pop esi */
  ESI = (pop32());
  /* 1229c5a2 pop edi */
  EDI = (pop32());
  /* 1229c5a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1229c5a4 ret  */
  ESPCHK(0x1229c2a0u, _esp0);
  ESP += 4; return;
  /* 1229c5a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1229c5a8:;
  /* 1229c5a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1229c5ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1229c5ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1229c5b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1229c5b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c5b7 pop esi */
  ESI = (pop32());
  /* 1229c5b8 pop edi */
  EDI = (pop32());
  /* 1229c5b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1229c5ba ret  */
  ESPCHK(0x1229c2a0u, _esp0);
  ESP += 4; return;
  /* 1229c5bb nop  */
  /* nop */
L_1229c5bc:;
  /* 1229c5bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1229c5bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1229c5c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1229c5c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1229c5c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1229c5cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1229c5ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c5d1 pop esi */
  ESI = (pop32());
  /* 1229c5d2 pop edi */
  EDI = (pop32());
  /* 1229c5d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1229c5d4 ret  */
  ESPCHK(0x1229c2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5e0 @ 0x1229c5e0 (421 bytes, 148 insns) */
void f_1229c5e0(void) {
  FTRACE(0x1229c5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229c5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229c5e1 mov ebp, esp */
  EBP = (ESP);
  /* 1229c5e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1229c5e5 push 0x122bc2f0 */
  push32((uint32_t)(0x122bc2f0u));
  /* 1229c5ea push 0x1229d4b8 */
  push32((uint32_t)(0x1229d4b8u));
  /* 1229c5ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1229c5f5 push eax */
  push32((uint32_t)(EAX));
  /* 1229c5f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1229c5fd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c600 push ebx */
  push32((uint32_t)(EBX));
  /* 1229c601 push esi */
  push32((uint32_t)(ESI));
  /* 1229c602 push edi */
  push32((uint32_t)(EDI));
  /* 1229c603 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1229c606 cmp dword ptr [0x122c07f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c07f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c60d jne 0x1229c65e */
  if (!C.zf) goto L_1229c65e;
  /* 1229c60f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1229c612 push eax */
  push32((uint32_t)(EAX));
  /* 1229c613 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229c615 push 0x122bc2ec */
  push32((uint32_t)(0x122bc2ecu));
  /* 1229c61a push 1 */
  push32((uint32_t)(0x1u));
  /* 1229c61c call dword ptr [0x122c335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c335c))), 0x1229c622u);
  /* 1229c622 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229c624 je 0x1229c632 */
  if (C.zf) goto L_1229c632;
  /* 1229c626 mov dword ptr [0x122c07f4], 1 */
  w32((uint32_t)(0x122c07f4), (0x1u));
  /* 1229c630 jmp 0x1229c65e */
  goto L_1229c65e;
L_1229c632:;
  /* 1229c632 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1229c635 push ecx */
  push32((uint32_t)(ECX));
  /* 1229c636 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229c638 push 0x122bc2e8 */
  push32((uint32_t)(0x122bc2e8u));
  /* 1229c63d push 1 */
  push32((uint32_t)(0x1u));
  /* 1229c63f push 0 */
  push32((uint32_t)(0x0u));
  /* 1229c641 call dword ptr [0x122c3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3358))), 0x1229c647u);
  /* 1229c647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229c649 je 0x1229c657 */
  if (C.zf) goto L_1229c657;
  /* 1229c64b mov dword ptr [0x122c07f4], 2 */
  w32((uint32_t)(0x122c07f4), (0x2u));
  /* 1229c655 jmp 0x1229c65e */
  goto L_1229c65e;
L_1229c657:;
  /* 1229c657 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229c659 jmp 0x1229c788 */
  goto L_1229c788;
L_1229c65e:;
  /* 1229c65e cmp dword ptr [0x122c07f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x122c07f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c665 jne 0x1229c695 */
  if (!C.zf) goto L_1229c695;
  /* 1229c667 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c66b jne 0x1229c676 */
  if (!C.zf) goto L_1229c676;
  /* 1229c66d mov edx, dword ptr [0x122c0800] */
  EDX = (r32((uint32_t)(0x122c0800)));
  /* 1229c673 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1229c676:;
  /* 1229c676 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229c679 push eax */
  push32((uint32_t)(EAX));
  /* 1229c67a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229c67d push ecx */
  push32((uint32_t)(ECX));
  /* 1229c67e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c681 push edx */
  push32((uint32_t)(EDX));
  /* 1229c682 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c685 push eax */
  push32((uint32_t)(EAX));
  /* 1229c686 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1229c689 push ecx */
  push32((uint32_t)(ECX));
  /* 1229c68a call dword ptr [0x122c3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3358))), 0x1229c690u);
  /* 1229c690 jmp 0x1229c788 */
  goto L_1229c788;
L_1229c695:;
  /* 1229c695 cmp dword ptr [0x122c07f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122c07f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c69c jne 0x1229c786 */
  if (!C.zf) goto L_1229c786;
  /* 1229c6a2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c6a6 jne 0x1229c6b1 */
  if (!C.zf) goto L_1229c6b1;
  /* 1229c6a8 mov edx, dword ptr [0x122c0810] */
  EDX = (r32((uint32_t)(0x122c0810)));
  /* 1229c6ae mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1229c6b1:;
  /* 1229c6b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229c6b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229c6b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229c6b8 push eax */
  push32((uint32_t)(EAX));
  /* 1229c6b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c6bc push ecx */
  push32((uint32_t)(ECX));
  /* 1229c6bd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1229c6c0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1229c6c2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229c6c4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1229c6c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c6ca push edx */
  push32((uint32_t)(EDX));
  /* 1229c6cb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1229c6ce push eax */
  push32((uint32_t)(EAX));
  /* 1229c6cf call dword ptr [0x122c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3354))), 0x1229c6d5u);
  /* 1229c6d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1229c6d8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c6dc jne 0x1229c6e5 */
  if (!C.zf) goto L_1229c6e5;
  /* 1229c6de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229c6e0 jmp 0x1229c788 */
  goto L_1229c788;
L_1229c6e5:;
  /* 1229c6e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1229c6ec mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229c6ef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1229c6f1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c6f4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1229c6f6 call 0x12297550 */
  push32(0x1229c6fbu); f_12297550();
  /* 1229c6fb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1229c6fe mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1229c701 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229c704 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1229c707 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229c70a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1229c70c push edx */
  push32((uint32_t)(EDX));
  /* 1229c70d push 0 */
  push32((uint32_t)(0x0u));
  /* 1229c70f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229c712 push eax */
  push32((uint32_t)(EAX));
  /* 1229c713 call 0x12298120 */
  push32(0x1229c718u); f_12298120();
  /* 1229c718 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c71b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1229c722 jmp 0x1229c73b */
  goto L_1229c73b;
  /* 1229c724 mov eax, 1 */
  EAX = (0x1u);
  /* 1229c729 ret  */
  ESPCHK(0x1229c5e0u, _esp0);
  ESP += 4; return;
  /* 1229c72a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1229c72d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1229c734 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1229c73b:;
  /* 1229c73b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c73f jne 0x1229c745 */
  if (!C.zf) goto L_1229c745;
  /* 1229c741 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229c743 jmp 0x1229c788 */
  goto L_1229c788;
L_1229c745:;
  /* 1229c745 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229c748 push ecx */
  push32((uint32_t)(ECX));
  /* 1229c749 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229c74c push edx */
  push32((uint32_t)(EDX));
  /* 1229c74d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229c750 push eax */
  push32((uint32_t)(EAX));
  /* 1229c751 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c754 push ecx */
  push32((uint32_t)(ECX));
  /* 1229c755 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229c757 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1229c75a push edx */
  push32((uint32_t)(EDX));
  /* 1229c75b call dword ptr [0x122c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3354))), 0x1229c761u);
  /* 1229c761 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1229c764 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c768 jne 0x1229c76e */
  if (!C.zf) goto L_1229c76e;
  /* 1229c76a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229c76c jmp 0x1229c788 */
  goto L_1229c788;
L_1229c76e:;
  /* 1229c76e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229c771 push eax */
  push32((uint32_t)(EAX));
  /* 1229c772 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1229c775 push ecx */
  push32((uint32_t)(ECX));
  /* 1229c776 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229c779 push edx */
  push32((uint32_t)(EDX));
  /* 1229c77a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c77d push eax */
  push32((uint32_t)(EAX));
  /* 1229c77e call dword ptr [0x122c335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c335c))), 0x1229c784u);
  /* 1229c784 jmp 0x1229c788 */
  goto L_1229c788;
L_1229c786:;
  /* 1229c786 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1229c788:;
  /* 1229c788 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1229c78b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229c78e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1229c795 pop edi */
  EDI = (pop32());
  /* 1229c796 pop esi */
  ESI = (pop32());
  /* 1229c797 pop ebx */
  EBX = (pop32());
  /* 1229c798 mov esp, ebp */
  ESP = (EBP);
  /* 1229c79a pop ebp */
  EBP = (pop32());
  /* 1229c79b ret  */
  ESPCHK(0x1229c5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7a0 @ 0x1229c7a0 (727 bytes, 263 insns) */
void f_1229c7a0(void) {
  FTRACE(0x1229c7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229c7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229c7a1 mov ebp, esp */
  EBP = (ESP);
  /* 1229c7a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1229c7a5 push 0x122bc300 */
  push32((uint32_t)(0x122bc300u));
  /* 1229c7aa push 0x1229d4b8 */
  push32((uint32_t)(0x1229d4b8u));
  /* 1229c7af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1229c7b5 push eax */
  push32((uint32_t)(EAX));
  /* 1229c7b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1229c7bd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c7c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1229c7c1 push esi */
  push32((uint32_t)(ESI));
  /* 1229c7c2 push edi */
  push32((uint32_t)(EDI));
  /* 1229c7c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1229c7c6 cmp dword ptr [0x122c0818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c7cd jne 0x1229c826 */
  if (!C.zf) goto L_1229c826;
  /* 1229c7cf push 0 */
  push32((uint32_t)(0x0u));
  /* 1229c7d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229c7d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229c7d5 push 0x122bc2ec */
  push32((uint32_t)(0x122bc2ecu));
  /* 1229c7da push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1229c7df push 0 */
  push32((uint32_t)(0x0u));
  /* 1229c7e1 call dword ptr [0x122c3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3360))), 0x1229c7e7u);
  /* 1229c7e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229c7e9 je 0x1229c7f7 */
  if (C.zf) goto L_1229c7f7;
  /* 1229c7eb mov dword ptr [0x122c0818], 1 */
  w32((uint32_t)(0x122c0818), (0x1u));
  /* 1229c7f5 jmp 0x1229c826 */
  goto L_1229c826;
L_1229c7f7:;
  /* 1229c7f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229c7f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229c7fb push 1 */
  push32((uint32_t)(0x1u));
  /* 1229c7fd push 0x122bc2e8 */
  push32((uint32_t)(0x122bc2e8u));
  /* 1229c802 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1229c807 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229c809 call dword ptr [0x122c334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c334c))), 0x1229c80fu);
  /* 1229c80f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229c811 je 0x1229c81f */
  if (C.zf) goto L_1229c81f;
  /* 1229c813 mov dword ptr [0x122c0818], 2 */
  w32((uint32_t)(0x122c0818), (0x2u));
  /* 1229c81d jmp 0x1229c826 */
  goto L_1229c826;
L_1229c81f:;
  /* 1229c81f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229c821 jmp 0x1229ca91 */
  goto L_1229ca91;
L_1229c826:;
  /* 1229c826 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c82a jle 0x1229c83f */
  if ((C.zf||C.sf!=C.of)) goto L_1229c83f;
  /* 1229c82c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229c82f push eax */
  push32((uint32_t)(EAX));
  /* 1229c830 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229c833 push ecx */
  push32((uint32_t)(ECX));
  /* 1229c834 call 0x1229cab0 */
  push32(0x1229c839u); f_1229cab0();
  /* 1229c839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c83c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1229c83f:;
  /* 1229c83f cmp dword ptr [0x122c0818], 2 */
  { uint32_t _a=(r32((uint32_t)(0x122c0818))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c846 jne 0x1229c86b */
  if (!C.zf) goto L_1229c86b;
  /* 1229c848 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1229c84b push edx */
  push32((uint32_t)(EDX));
  /* 1229c84c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1229c84f push eax */
  push32((uint32_t)(EAX));
  /* 1229c850 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229c853 push ecx */
  push32((uint32_t)(ECX));
  /* 1229c854 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229c857 push edx */
  push32((uint32_t)(EDX));
  /* 1229c858 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c85b push eax */
  push32((uint32_t)(EAX));
  /* 1229c85c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c85f push ecx */
  push32((uint32_t)(ECX));
  /* 1229c860 call dword ptr [0x122c334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c334c))), 0x1229c866u);
  /* 1229c866 jmp 0x1229ca91 */
  goto L_1229ca91;
L_1229c86b:;
  /* 1229c86b cmp dword ptr [0x122c0818], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122c0818))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c872 jne 0x1229ca8f */
  if (!C.zf) goto L_1229ca8f;
  /* 1229c878 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c87c jne 0x1229c887 */
  if (!C.zf) goto L_1229c887;
  /* 1229c87e mov edx, dword ptr [0x122c0810] */
  EDX = (r32((uint32_t)(0x122c0810)));
  /* 1229c884 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1229c887:;
  /* 1229c887 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229c889 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229c88b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229c88e push eax */
  push32((uint32_t)(EAX));
  /* 1229c88f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229c892 push ecx */
  push32((uint32_t)(ECX));
  /* 1229c893 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1229c896 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1229c898 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229c89a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1229c89d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c8a0 push edx */
  push32((uint32_t)(EDX));
  /* 1229c8a1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1229c8a4 push eax */
  push32((uint32_t)(EAX));
  /* 1229c8a5 call dword ptr [0x122c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3354))), 0x1229c8abu);
  /* 1229c8ab mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1229c8ae cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c8b2 jne 0x1229c8bb */
  if (!C.zf) goto L_1229c8bb;
  /* 1229c8b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229c8b6 jmp 0x1229ca91 */
  goto L_1229ca91;
L_1229c8bb:;
  /* 1229c8bb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1229c8c2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1229c8c5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1229c8c7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c8ca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1229c8cc call 0x12297550 */
  push32(0x1229c8d1u); f_12297550();
  /* 1229c8d1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1229c8d4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1229c8d7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1229c8da mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1229c8dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1229c8e4 jmp 0x1229c8fd */
  goto L_1229c8fd;
  /* 1229c8e6 mov eax, 1 */
  EAX = (0x1u);
  /* 1229c8eb ret  */
  ESPCHK(0x1229c7a0u, _esp0);
  ESP += 4; return;
  /* 1229c8ec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1229c8ef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1229c8f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1229c8fd:;
  /* 1229c8fd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c901 jne 0x1229c90a */
  if (!C.zf) goto L_1229c90a;
  /* 1229c903 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229c905 jmp 0x1229ca91 */
  goto L_1229ca91;
L_1229c90a:;
  /* 1229c90a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1229c90d push edx */
  push32((uint32_t)(EDX));
  /* 1229c90e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229c911 push eax */
  push32((uint32_t)(EAX));
  /* 1229c912 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229c915 push ecx */
  push32((uint32_t)(ECX));
  /* 1229c916 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229c919 push edx */
  push32((uint32_t)(EDX));
  /* 1229c91a push 1 */
  push32((uint32_t)(0x1u));
  /* 1229c91c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1229c91f push eax */
  push32((uint32_t)(EAX));
  /* 1229c920 call dword ptr [0x122c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3354))), 0x1229c926u);
  /* 1229c926 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229c928 jne 0x1229c931 */
  if (!C.zf) goto L_1229c931;
  /* 1229c92a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229c92c jmp 0x1229ca91 */
  goto L_1229ca91;
L_1229c931:;
  /* 1229c931 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229c933 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229c935 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1229c938 push ecx */
  push32((uint32_t)(ECX));
  /* 1229c939 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229c93c push edx */
  push32((uint32_t)(EDX));
  /* 1229c93d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c940 push eax */
  push32((uint32_t)(EAX));
  /* 1229c941 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c944 push ecx */
  push32((uint32_t)(ECX));
  /* 1229c945 call dword ptr [0x122c3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3360))), 0x1229c94bu);
  /* 1229c94b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1229c94e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c952 jne 0x1229c95b */
  if (!C.zf) goto L_1229c95b;
  /* 1229c954 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229c956 jmp 0x1229ca91 */
  goto L_1229ca91;
L_1229c95b:;
  /* 1229c95b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c95e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1229c964 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229c966 je 0x1229c9ab */
  if (C.zf) goto L_1229c9ab;
  /* 1229c968 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c96c je 0x1229c9a6 */
  if (C.zf) goto L_1229c9a6;
  /* 1229c96e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1229c971 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c974 jle 0x1229c97d */
  if ((C.zf||C.sf!=C.of)) goto L_1229c97d;
  /* 1229c976 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229c978 jmp 0x1229ca91 */
  goto L_1229ca91;
L_1229c97d:;
  /* 1229c97d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1229c980 push ecx */
  push32((uint32_t)(ECX));
  /* 1229c981 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1229c984 push edx */
  push32((uint32_t)(EDX));
  /* 1229c985 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1229c988 push eax */
  push32((uint32_t)(EAX));
  /* 1229c989 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229c98c push ecx */
  push32((uint32_t)(ECX));
  /* 1229c98d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229c990 push edx */
  push32((uint32_t)(EDX));
  /* 1229c991 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229c994 push eax */
  push32((uint32_t)(EAX));
  /* 1229c995 call dword ptr [0x122c3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3360))), 0x1229c99bu);
  /* 1229c99b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229c99d jne 0x1229c9a6 */
  if (!C.zf) goto L_1229c9a6;
  /* 1229c99f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229c9a1 jmp 0x1229ca91 */
  goto L_1229ca91;
L_1229c9a6:;
  /* 1229c9a6 jmp 0x1229ca8a */
  goto L_1229ca8a;
L_1229c9ab:;
  /* 1229c9ab mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1229c9ae mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1229c9b1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1229c9b8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229c9bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1229c9bd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229c9c0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1229c9c2 call 0x12297550 */
  push32(0x1229c9c7u); f_12297550();
  /* 1229c9c7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1229c9ca mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1229c9cd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1229c9d0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1229c9d3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1229c9da jmp 0x1229c9f3 */
  goto L_1229c9f3;
  /* 1229c9dc mov eax, 1 */
  EAX = (0x1u);
  /* 1229c9e1 ret  */
  ESPCHK(0x1229c7a0u, _esp0);
  ESP += 4; return;
  /* 1229c9e2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1229c9e5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1229c9ec mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1229c9f3:;
  /* 1229c9f3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229c9f7 jne 0x1229ca00 */
  if (!C.zf) goto L_1229ca00;
  /* 1229c9f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229c9fb jmp 0x1229ca91 */
  goto L_1229ca91;
L_1229ca00:;
  /* 1229ca00 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229ca03 push eax */
  push32((uint32_t)(EAX));
  /* 1229ca04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229ca07 push ecx */
  push32((uint32_t)(ECX));
  /* 1229ca08 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1229ca0b push edx */
  push32((uint32_t)(EDX));
  /* 1229ca0c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229ca0f push eax */
  push32((uint32_t)(EAX));
  /* 1229ca10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229ca13 push ecx */
  push32((uint32_t)(ECX));
  /* 1229ca14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ca17 push edx */
  push32((uint32_t)(EDX));
  /* 1229ca18 call dword ptr [0x122c3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3360))), 0x1229ca1eu);
  /* 1229ca1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229ca20 jne 0x1229ca26 */
  if (!C.zf) goto L_1229ca26;
  /* 1229ca22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229ca24 jmp 0x1229ca91 */
  goto L_1229ca91;
L_1229ca26:;
  /* 1229ca26 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ca2a jne 0x1229ca5a */
  if (!C.zf) goto L_1229ca5a;
  /* 1229ca2c push 0 */
  push32((uint32_t)(0x0u));
  /* 1229ca2e push 0 */
  push32((uint32_t)(0x0u));
  /* 1229ca30 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229ca32 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229ca34 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229ca37 push eax */
  push32((uint32_t)(EAX));
  /* 1229ca38 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229ca3b push ecx */
  push32((uint32_t)(ECX));
  /* 1229ca3c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1229ca41 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1229ca44 push edx */
  push32((uint32_t)(EDX));
  /* 1229ca45 call dword ptr [0x122c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c330c))), 0x1229ca4bu);
  /* 1229ca4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1229ca4e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ca52 jne 0x1229ca58 */
  if (!C.zf) goto L_1229ca58;
  /* 1229ca54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229ca56 jmp 0x1229ca91 */
  goto L_1229ca91;
L_1229ca58:;
  /* 1229ca58 jmp 0x1229ca8a */
  goto L_1229ca8a;
L_1229ca5a:;
  /* 1229ca5a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229ca5c push 0 */
  push32((uint32_t)(0x0u));
  /* 1229ca5e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1229ca61 push eax */
  push32((uint32_t)(EAX));
  /* 1229ca62 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1229ca65 push ecx */
  push32((uint32_t)(ECX));
  /* 1229ca66 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229ca69 push edx */
  push32((uint32_t)(EDX));
  /* 1229ca6a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229ca6d push eax */
  push32((uint32_t)(EAX));
  /* 1229ca6e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1229ca73 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1229ca76 push ecx */
  push32((uint32_t)(ECX));
  /* 1229ca77 call dword ptr [0x122c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c330c))), 0x1229ca7du);
  /* 1229ca7d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1229ca80 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ca84 jne 0x1229ca8a */
  if (!C.zf) goto L_1229ca8a;
  /* 1229ca86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229ca88 jmp 0x1229ca91 */
  goto L_1229ca91;
L_1229ca8a:;
  /* 1229ca8a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1229ca8d jmp 0x1229ca91 */
  goto L_1229ca91;
L_1229ca8f:;
  /* 1229ca8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1229ca91:;
  /* 1229ca91 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1229ca94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229ca97 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1229ca9e pop edi */
  EDI = (pop32());
  /* 1229ca9f pop esi */
  ESI = (pop32());
  /* 1229caa0 pop ebx */
  EBX = (pop32());
  /* 1229caa1 mov esp, ebp */
  ESP = (EBP);
  /* 1229caa3 pop ebp */
  EBP = (pop32());
  /* 1229caa4 ret  */
  ESPCHK(0x1229c7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cab0 @ 0x1229cab0 (80 bytes, 32 insns) */
void f_1229cab0(void) {
  FTRACE(0x1229cab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229cab0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229cab1 mov ebp, esp */
  EBP = (ESP);
  /* 1229cab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229cab6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229cab9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1229cabc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cabf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1229cac2:;
  /* 1229cac2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229cac5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229cac8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229cacb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1229cace test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229cad0 je 0x1229cae7 */
  if (C.zf) goto L_1229cae7;
  /* 1229cad2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229cad5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1229cad8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229cada je 0x1229cae7 */
  if (C.zf) goto L_1229cae7;
  /* 1229cadc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229cadf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229cae2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229cae5 jmp 0x1229cac2 */
  goto L_1229cac2;
L_1229cae7:;
  /* 1229cae7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229caea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1229caed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229caef jne 0x1229caf9 */
  if (!C.zf) goto L_1229caf9;
  /* 1229caf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229caf4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229caf7 jmp 0x1229cafc */
  goto L_1229cafc;
L_1229caf9:;
  /* 1229caf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1229cafc:;
  /* 1229cafc mov esp, ebp */
  ESP = (EBP);
  /* 1229cafe pop ebp */
  EBP = (pop32());
  /* 1229caff ret  */
  ESPCHK(0x1229cab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb00 @ 0x1229cb00 (130 bytes, 43 insns) */
void f_1229cb00(void) {
  FTRACE(0x1229cb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229cb00 push ebp */
  push32((uint32_t)(EBP));
  /* 1229cb01 mov ebp, esp */
  EBP = (ESP);
  /* 1229cb03 push ecx */
  push32((uint32_t)(ECX));
  /* 1229cb04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cb07 cmp eax, dword ptr [0x122c211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122c211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229cb0d jae 0x1229cb31 */
  if (!C.cf) goto L_1229cb31;
  /* 1229cb0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cb12 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1229cb15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cb18 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1229cb1b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229cb1e mov eax, dword ptr [ecx*4 + 0x122c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122c1fe0)));
  /* 1229cb25 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1229cb2a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1229cb2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229cb2f jne 0x1229cb4c */
  if (!C.zf) goto L_1229cb4c;
L_1229cb31:;
  /* 1229cb31 call 0x1229c280 */
  push32(0x1229cb36u); f_1229c280();
  /* 1229cb36 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1229cb3c call 0x1229c290 */
  push32(0x1229cb41u); f_1229c290();
  /* 1229cb41 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1229cb47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229cb4a jmp 0x1229cb7e */
  goto L_1229cb7e;
L_1229cb4c:;
  /* 1229cb4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cb4f push edx */
  push32((uint32_t)(EDX));
  /* 1229cb50 call 0x1229daa0 */
  push32(0x1229cb55u); f_1229daa0();
  /* 1229cb55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229cb58 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229cb5b push eax */
  push32((uint32_t)(EAX));
  /* 1229cb5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229cb5f push ecx */
  push32((uint32_t)(ECX));
  /* 1229cb60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cb63 push edx */
  push32((uint32_t)(EDX));
  /* 1229cb64 call 0x1229cb90 */
  push32(0x1229cb69u); f_1229cb90();
  /* 1229cb69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229cb6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229cb6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cb72 push eax */
  push32((uint32_t)(EAX));
  /* 1229cb73 call 0x1229db30 */
  push32(0x1229cb78u); f_1229db30();
  /* 1229cb78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229cb7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1229cb7e:;
  /* 1229cb7e mov esp, ebp */
  ESP = (EBP);
  /* 1229cb80 pop ebp */
  EBP = (pop32());
  /* 1229cb81 ret  */
  ESPCHK(0x1229cb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb90 @ 0x1229cb90 (178 bytes, 56 insns) */
void f_1229cb90(void) {
  FTRACE(0x1229cb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229cb90 push ebp */
  push32((uint32_t)(EBP));
  /* 1229cb91 mov ebp, esp */
  EBP = (ESP);
  /* 1229cb93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229cb96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cb99 push eax */
  push32((uint32_t)(EAX));
  /* 1229cb9a call 0x1229d920 */
  push32(0x1229cb9fu); f_1229d920();
  /* 1229cb9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229cba2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1229cba5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229cba9 jne 0x1229cbbe */
  if (!C.zf) goto L_1229cbbe;
  /* 1229cbab call 0x1229c280 */
  push32(0x1229cbb0u); f_1229c280();
  /* 1229cbb0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1229cbb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229cbb9 jmp 0x1229cc3e */
  goto L_1229cc3e;
L_1229cbbe:;
  /* 1229cbbe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229cbc1 push ecx */
  push32((uint32_t)(ECX));
  /* 1229cbc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229cbc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229cbc7 push edx */
  push32((uint32_t)(EDX));
  /* 1229cbc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229cbcb push eax */
  push32((uint32_t)(EAX));
  /* 1229cbcc call dword ptr [0x122c3288] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3288))), 0x1229cbd2u);
  /* 1229cbd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1229cbd5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229cbd9 jne 0x1229cbe6 */
  if (!C.zf) goto L_1229cbe6;
  /* 1229cbdb call dword ptr [0x122c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32e0))), 0x1229cbe1u);
  /* 1229cbe1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229cbe4 jmp 0x1229cbed */
  goto L_1229cbed;
L_1229cbe6:;
  /* 1229cbe6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1229cbed:;
  /* 1229cbed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229cbf1 je 0x1229cc04 */
  if (C.zf) goto L_1229cc04;
  /* 1229cbf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229cbf6 push ecx */
  push32((uint32_t)(ECX));
  /* 1229cbf7 call 0x1229c1e0 */
  push32(0x1229cbfcu); f_1229c1e0();
  /* 1229cbfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229cbff or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229cc02 jmp 0x1229cc3e */
  goto L_1229cc3e;
L_1229cc04:;
  /* 1229cc04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cc07 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1229cc0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cc0d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1229cc10 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229cc13 mov ecx, dword ptr [edx*4 + 0x122c1fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x122c1fe0)));
  /* 1229cc1a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1229cc1e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1229cc21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cc24 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1229cc27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cc2a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1229cc2d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229cc30 mov eax, dword ptr [eax*4 + 0x122c1fe0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x122c1fe0)));
  /* 1229cc37 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1229cc3b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1229cc3e:;
  /* 1229cc3e mov esp, ebp */
  ESP = (EBP);
  /* 1229cc40 pop ebp */
  EBP = (pop32());
  /* 1229cc41 ret  */
  ESPCHK(0x1229cb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc50 @ 0x1229cc50 (130 bytes, 43 insns) */
void f_1229cc50(void) {
  FTRACE(0x1229cc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229cc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1229cc51 mov ebp, esp */
  EBP = (ESP);
  /* 1229cc53 push ecx */
  push32((uint32_t)(ECX));
  /* 1229cc54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cc57 cmp eax, dword ptr [0x122c211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122c211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229cc5d jae 0x1229cc81 */
  if (!C.cf) goto L_1229cc81;
  /* 1229cc5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cc62 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1229cc65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cc68 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1229cc6b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229cc6e mov eax, dword ptr [ecx*4 + 0x122c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122c1fe0)));
  /* 1229cc75 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1229cc7a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1229cc7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229cc7f jne 0x1229cc9c */
  if (!C.zf) goto L_1229cc9c;
L_1229cc81:;
  /* 1229cc81 call 0x1229c280 */
  push32(0x1229cc86u); f_1229c280();
  /* 1229cc86 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1229cc8c call 0x1229c290 */
  push32(0x1229cc91u); f_1229c290();
  /* 1229cc91 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1229cc97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229cc9a jmp 0x1229ccce */
  goto L_1229ccce;
L_1229cc9c:;
  /* 1229cc9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cc9f push edx */
  push32((uint32_t)(EDX));
  /* 1229cca0 call 0x1229daa0 */
  push32(0x1229cca5u); f_1229daa0();
  /* 1229cca5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229cca8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229ccab push eax */
  push32((uint32_t)(EAX));
  /* 1229ccac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229ccaf push ecx */
  push32((uint32_t)(ECX));
  /* 1229ccb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ccb3 push edx */
  push32((uint32_t)(EDX));
  /* 1229ccb4 call 0x1229cce0 */
  push32(0x1229ccb9u); f_1229cce0();
  /* 1229ccb9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ccbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229ccbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ccc2 push eax */
  push32((uint32_t)(EAX));
  /* 1229ccc3 call 0x1229db30 */
  push32(0x1229ccc8u); f_1229db30();
  /* 1229ccc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229cccb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1229ccce:;
  /* 1229ccce mov esp, ebp */
  ESP = (EBP);
  /* 1229ccd0 pop ebp */
  EBP = (pop32());
  /* 1229ccd1 ret  */
  ESPCHK(0x1229cc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cce0 @ 0x1229cce0 (627 bytes, 182 insns) */
void f_1229cce0(void) {
  FTRACE(0x1229cce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229cce0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229cce1 mov ebp, esp */
  EBP = (ESP);
  /* 1229cce3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229cce9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1229ccf0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229ccf3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1229ccf9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ccfd jne 0x1229cd06 */
  if (!C.zf) goto L_1229cd06;
  /* 1229ccff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229cd01 jmp 0x1229cf4f */
  goto L_1229cf4f;
L_1229cd06:;
  /* 1229cd06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cd09 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1229cd0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cd0f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1229cd12 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229cd15 mov eax, dword ptr [ecx*4 + 0x122c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122c1fe0)));
  /* 1229cd1c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1229cd21 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1229cd24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229cd26 je 0x1229cd38 */
  if (C.zf) goto L_1229cd38;
  /* 1229cd28 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229cd2a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229cd2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cd2f push edx */
  push32((uint32_t)(EDX));
  /* 1229cd30 call 0x1229cb90 */
  push32(0x1229cd35u); f_1229cb90();
  /* 1229cd35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229cd38:;
  /* 1229cd38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cd3b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1229cd3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cd41 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1229cd44 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229cd47 mov edx, dword ptr [eax*4 + 0x122c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122c1fe0)));
  /* 1229cd4e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1229cd53 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1229cd58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229cd5a je 0x1229ce6c */
  if (C.zf) goto L_1229ce6c;
  /* 1229cd60 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229cd63 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1229cd66 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1229cd6d:;
  /* 1229cd6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229cd70 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229cd73 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229cd76 jae 0x1229ce6a */
  if (!C.cf) goto L_1229ce6a;
  /* 1229cd7c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1229cd82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1229cd85:;
  /* 1229cd85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229cd88 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1229cd8e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229cd90 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229cd96 jge 0x1229cdf7 */
  if ((C.sf==C.of)) goto L_1229cdf7;
  /* 1229cd98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229cd9b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229cd9e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229cda1 jae 0x1229cdf7 */
  if (!C.cf) goto L_1229cdf7;
  /* 1229cda3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229cda6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1229cda8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1229cdae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229cdb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229cdb4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229cdb7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1229cdbe cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229cdc1 jne 0x1229cde1 */
  if (!C.zf) goto L_1229cde1;
  /* 1229cdc3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1229cdc9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229cdcc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1229cdd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229cdd5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1229cdd8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229cddb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229cdde mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1229cde1:;
  /* 1229cde1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229cde4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1229cdea mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1229cdec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229cdef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229cdf2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229cdf5 jmp 0x1229cd85 */
  goto L_1229cd85;
L_1229cdf7:;
  /* 1229cdf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229cdf9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1229cdff push edx */
  push32((uint32_t)(EDX));
  /* 1229ce00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229ce03 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1229ce09 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229ce0b push eax */
  push32((uint32_t)(EAX));
  /* 1229ce0c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1229ce12 push edx */
  push32((uint32_t)(EDX));
  /* 1229ce13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ce16 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1229ce19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ce1c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1229ce1f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229ce22 mov edx, dword ptr [eax*4 + 0x122c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122c1fe0)));
  /* 1229ce29 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1229ce2c push eax */
  push32((uint32_t)(EAX));
  /* 1229ce2d call dword ptr [0x122c32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32a0))), 0x1229ce33u);
  /* 1229ce33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229ce35 je 0x1229ce5a */
  if (C.zf) goto L_1229ce5a;
  /* 1229ce37 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229ce3a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ce40 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1229ce43 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229ce46 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1229ce4c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229ce4e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ce54 jge 0x1229ce58 */
  if ((C.sf==C.of)) goto L_1229ce58;
  /* 1229ce56 jmp 0x1229ce6a */
  goto L_1229ce6a;
L_1229ce58:;
  /* 1229ce58 jmp 0x1229ce65 */
  goto L_1229ce65;
L_1229ce5a:;
  /* 1229ce5a call dword ptr [0x122c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32e0))), 0x1229ce60u);
  /* 1229ce60 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1229ce63 jmp 0x1229ce6a */
  goto L_1229ce6a;
L_1229ce65:;
  /* 1229ce65 jmp 0x1229cd6d */
  goto L_1229cd6d;
L_1229ce6a:;
  /* 1229ce6a jmp 0x1229cebc */
  goto L_1229cebc;
L_1229ce6c:;
  /* 1229ce6c push 0 */
  push32((uint32_t)(0x0u));
  /* 1229ce6e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1229ce74 push ecx */
  push32((uint32_t)(ECX));
  /* 1229ce75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229ce78 push edx */
  push32((uint32_t)(EDX));
  /* 1229ce79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229ce7c push eax */
  push32((uint32_t)(EAX));
  /* 1229ce7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ce80 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1229ce83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ce86 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1229ce89 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229ce8c mov eax, dword ptr [ecx*4 + 0x122c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122c1fe0)));
  /* 1229ce93 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1229ce96 push ecx */
  push32((uint32_t)(ECX));
  /* 1229ce97 call dword ptr [0x122c32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32a0))), 0x1229ce9du);
  /* 1229ce9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229ce9f je 0x1229ceb3 */
  if (C.zf) goto L_1229ceb3;
  /* 1229cea1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1229cea8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1229ceae mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1229ceb1 jmp 0x1229cebc */
  goto L_1229cebc;
L_1229ceb3:;
  /* 1229ceb3 call dword ptr [0x122c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32e0))), 0x1229ceb9u);
  /* 1229ceb9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1229cebc:;
  /* 1229cebc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229cec0 jne 0x1229cf46 */
  if (!C.zf) goto L_1229cf46;
  /* 1229cec6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ceca je 0x1229cefa */
  if (C.zf) goto L_1229cefa;
  /* 1229cecc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ced0 jne 0x1229cee9 */
  if (!C.zf) goto L_1229cee9;
  /* 1229ced2 call 0x1229c280 */
  push32(0x1229ced7u); f_1229c280();
  /* 1229ced7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1229cedd call 0x1229c290 */
  push32(0x1229cee2u); f_1229c290();
  /* 1229cee2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229cee5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1229cee7 jmp 0x1229cef5 */
  goto L_1229cef5;
L_1229cee9:;
  /* 1229cee9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ceec push edx */
  push32((uint32_t)(EDX));
  /* 1229ceed call 0x1229c1e0 */
  push32(0x1229cef2u); f_1229c1e0();
  /* 1229cef2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229cef5:;
  /* 1229cef5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229cef8 jmp 0x1229cf4f */
  goto L_1229cf4f;
L_1229cefa:;
  /* 1229cefa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cefd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1229cf00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cf03 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1229cf06 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229cf09 mov edx, dword ptr [eax*4 + 0x122c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122c1fe0)));
  /* 1229cf10 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1229cf15 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1229cf18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229cf1a je 0x1229cf2b */
  if (C.zf) goto L_1229cf2b;
  /* 1229cf1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229cf1f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1229cf22 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229cf25 jne 0x1229cf2b */
  if (!C.zf) goto L_1229cf2b;
  /* 1229cf27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229cf29 jmp 0x1229cf4f */
  goto L_1229cf4f;
L_1229cf2b:;
  /* 1229cf2b call 0x1229c280 */
  push32(0x1229cf30u); f_1229c280();
  /* 1229cf30 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1229cf36 call 0x1229c290 */
  push32(0x1229cf3bu); f_1229c290();
  /* 1229cf3b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1229cf41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229cf44 jmp 0x1229cf4f */
  goto L_1229cf4f;
L_1229cf46:;
  /* 1229cf46 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229cf49 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1229cf4f:;
  /* 1229cf4f mov esp, ebp */
  ESP = (EBP);
  /* 1229cf51 pop ebp */
  EBP = (pop32());
  /* 1229cf52 ret  */
  ESPCHK(0x1229cce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf60 @ 0x1229cf60 (199 bytes, 68 insns) */
void f_1229cf60(void) {
  FTRACE(0x1229cf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229cf60 push ebp */
  push32((uint32_t)(EBP));
  /* 1229cf61 mov ebp, esp */
  EBP = (ESP);
  /* 1229cf63 push ecx */
  push32((uint32_t)(ECX));
  /* 1229cf64 push ebx */
  push32((uint32_t)(EBX));
  /* 1229cf65 push esi */
  push32((uint32_t)(ESI));
  /* 1229cf66 push edi */
  push32((uint32_t)(EDI));
L_1229cf67:;
  /* 1229cf67 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229cf6b jne 0x1229cf8b */
  if (!C.zf) goto L_1229cf8b;
  /* 1229cf6d push 0x122bc24c */
  push32((uint32_t)(0x122bc24cu));
  /* 1229cf72 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229cf74 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1229cf76 push 0x122bc318 */
  push32((uint32_t)(0x122bc318u));
  /* 1229cf7b push 2 */
  push32((uint32_t)(0x2u));
  /* 1229cf7d call 0x12293470 */
  push32(0x1229cf82u); f_12293470();
  /* 1229cf82 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229cf85 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229cf88 jne 0x1229cf8b */
  if (!C.zf) goto L_1229cf8b;
  /* 1229cf8a int3  */
  x86_unimpl("int3 @ 0x1229cf8a");
L_1229cf8b:;
  /* 1229cf8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229cf8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229cf8f jne 0x1229cf67 */
  if (!C.zf) goto L_1229cf67;
  /* 1229cf91 mov ecx, dword ptr [0x122c081c] */
  ECX = (r32((uint32_t)(0x122c081c)));
  /* 1229cf97 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229cf9a mov dword ptr [0x122c081c], ecx */
  w32((uint32_t)(0x122c081c), (ECX));
  /* 1229cfa0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229cfa3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1229cfa6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1229cfa8 push 0x122bc318 */
  push32((uint32_t)(0x122bc318u));
  /* 1229cfad push 2 */
  push32((uint32_t)(0x2u));
  /* 1229cfaf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1229cfb4 call 0x122943b0 */
  push32(0x1229cfb9u); f_122943b0();
  /* 1229cfb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229cfbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229cfbf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1229cfc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229cfc5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229cfc9 je 0x1229cfe6 */
  if (C.zf) goto L_1229cfe6;
  /* 1229cfcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229cfce mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1229cfd1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1229cfd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229cfd7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1229cfda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229cfdd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1229cfe4 jmp 0x1229d00b */
  goto L_1229d00b;
L_1229cfe6:;
  /* 1229cfe6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229cfe9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1229cfec or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1229cfef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229cff2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1229cff5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229cff8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229cffb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229cffe mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1229d001 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d004 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1229d00b:;
  /* 1229d00b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d00e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d011 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1229d014 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1229d016 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d019 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1229d020 pop edi */
  EDI = (pop32());
  /* 1229d021 pop esi */
  ESI = (pop32());
  /* 1229d022 pop ebx */
  EBX = (pop32());
  /* 1229d023 mov esp, ebp */
  ESP = (EBP);
  /* 1229d025 pop ebp */
  EBP = (pop32());
  /* 1229d026 ret  */
  ESPCHK(0x1229cf60u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1229d030 (50 bytes, 17 insns) */
void f_1229d030(void) {
  FTRACE(0x1229d030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229d030 push ebp */
  push32((uint32_t)(EBP));
  /* 1229d031 mov ebp, esp */
  EBP = (ESP);
  /* 1229d033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d036 cmp eax, dword ptr [0x122c211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122c211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d03c jb 0x1229d042 */
  if (C.cf) goto L_1229d042;
  /* 1229d03e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229d040 jmp 0x1229d060 */
  goto L_1229d060;
L_1229d042:;
  /* 1229d042 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d045 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1229d048 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d04b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1229d04e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229d051 mov eax, dword ptr [ecx*4 + 0x122c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122c1fe0)));
  /* 1229d058 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1229d05d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1229d060:;
  /* 1229d060 pop ebp */
  EBP = (pop32());
  /* 1229d061 ret  */
  ESPCHK(0x1229d030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d070 @ 0x1229d070 (300 bytes, 80 insns) */
void f_1229d070(void) {
  FTRACE(0x1229d070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229d070 push ebp */
  push32((uint32_t)(EBP));
  /* 1229d071 mov ebp, esp */
  EBP = (ESP);
  /* 1229d073 push ecx */
  push32((uint32_t)(ECX));
  /* 1229d074 cmp dword ptr [0x122c1ce0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c1ce0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d07b jne 0x1229d089 */
  if (!C.zf) goto L_1229d089;
  /* 1229d07d mov dword ptr [0x122c1ce0], 0x200 */
  w32((uint32_t)(0x122c1ce0), (0x200u));
  /* 1229d087 jmp 0x1229d09c */
  goto L_1229d09c;
L_1229d089:;
  /* 1229d089 cmp dword ptr [0x122c1ce0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x122c1ce0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d090 jge 0x1229d09c */
  if ((C.sf==C.of)) goto L_1229d09c;
  /* 1229d092 mov dword ptr [0x122c1ce0], 0x14 */
  w32((uint32_t)(0x122c1ce0), (0x14u));
L_1229d09c:;
  /* 1229d09c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1229d0a1 push 0x122bc324 */
  push32((uint32_t)(0x122bc324u));
  /* 1229d0a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229d0a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1229d0aa mov eax, dword ptr [0x122c1ce0] */
  EAX = (r32((uint32_t)(0x122c1ce0)));
  /* 1229d0af push eax */
  push32((uint32_t)(EAX));
  /* 1229d0b0 call 0x122947c0 */
  push32(0x1229d0b5u); f_122947c0();
  /* 1229d0b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d0b8 mov dword ptr [0x122c0990], eax */
  w32((uint32_t)(0x122c0990), (EAX));
  /* 1229d0bd cmp dword ptr [0x122c0990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d0c4 jne 0x1229d105 */
  if (!C.zf) goto L_1229d105;
  /* 1229d0c6 mov dword ptr [0x122c1ce0], 0x14 */
  w32((uint32_t)(0x122c1ce0), (0x14u));
  /* 1229d0d0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1229d0d5 push 0x122bc324 */
  push32((uint32_t)(0x122bc324u));
  /* 1229d0da push 2 */
  push32((uint32_t)(0x2u));
  /* 1229d0dc push 4 */
  push32((uint32_t)(0x4u));
  /* 1229d0de mov ecx, dword ptr [0x122c1ce0] */
  ECX = (r32((uint32_t)(0x122c1ce0)));
  /* 1229d0e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1229d0e5 call 0x122947c0 */
  push32(0x1229d0eau); f_122947c0();
  /* 1229d0ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d0ed mov dword ptr [0x122c0990], eax */
  w32((uint32_t)(0x122c0990), (EAX));
  /* 1229d0f2 cmp dword ptr [0x122c0990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d0f9 jne 0x1229d105 */
  if (!C.zf) goto L_1229d105;
  /* 1229d0fb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1229d0fd call 0x12293320 */
  push32(0x1229d102u); f_12293320();
  /* 1229d102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229d105:;
  /* 1229d105 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1229d10c jmp 0x1229d117 */
  goto L_1229d117;
L_1229d10e:;
  /* 1229d10e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d111 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d114 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1229d117:;
  /* 1229d117 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d11b jge 0x1229d136 */
  if ((C.sf==C.of)) goto L_1229d136;
  /* 1229d11d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d120 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1229d123 add eax, 0x122bf120 */
  { uint32_t _a=(EAX),_b=(0x122bf120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d128 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d12b mov edx, dword ptr [0x122c0990] */
  EDX = (r32((uint32_t)(0x122c0990)));
  /* 1229d131 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1229d134 jmp 0x1229d10e */
  goto L_1229d10e;
L_1229d136:;
  /* 1229d136 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1229d13d jmp 0x1229d148 */
  goto L_1229d148;
L_1229d13f:;
  /* 1229d13f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d142 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d145 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1229d148:;
  /* 1229d148 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d14c jge 0x1229d198 */
  if ((C.sf==C.of)) goto L_1229d198;
  /* 1229d14e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d151 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1229d154 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d157 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1229d15a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229d15d mov eax, dword ptr [ecx*4 + 0x122c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122c1fe0)));
  /* 1229d164 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d168 je 0x1229d186 */
  if (C.zf) goto L_1229d186;
  /* 1229d16a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d16d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1229d170 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d173 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1229d176 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229d179 mov eax, dword ptr [ecx*4 + 0x122c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122c1fe0)));
  /* 1229d180 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d184 jne 0x1229d196 */
  if (!C.zf) goto L_1229d196;
L_1229d186:;
  /* 1229d186 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d189 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1229d18c mov dword ptr [ecx + 0x122bf130], 0xffffffff */
  w32((uint32_t)(ECX + 0x122bf130), (0xffffffffu));
L_1229d196:;
  /* 1229d196 jmp 0x1229d13f */
  goto L_1229d13f;
L_1229d198:;
  /* 1229d198 mov esp, ebp */
  ESP = (EBP);
  /* 1229d19a pop ebp */
  EBP = (pop32());
  /* 1229d19b ret  */
  ESPCHK(0x1229d070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1a0 @ 0x1229d1a0 (26 bytes, 9 insns) */
void f_1229d1a0(void) {
  FTRACE(0x1229d1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229d1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229d1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1229d1a3 call 0x1229dda0 */
  push32(0x1229d1a8u); f_1229dda0();
  /* 1229d1a8 movsx eax, byte ptr [0x122c0634] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x122c0634))));
  /* 1229d1af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229d1b1 je 0x1229d1b8 */
  if (C.zf) goto L_1229d1b8;
  /* 1229d1b3 call 0x1229db60 */
  push32(0x1229d1b8u); f_1229db60();
L_1229d1b8:;
  /* 1229d1b8 pop ebp */
  EBP = (pop32());
  /* 1229d1b9 ret  */
  ESPCHK(0x1229d1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1c0 @ 0x1229d1c0 (61 bytes, 20 insns) */
void f_1229d1c0(void) {
  FTRACE(0x1229d1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229d1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229d1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1229d1c3 cmp dword ptr [ebp + 8], 0x122bf120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x122bf120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d1ca jb 0x1229d1ee */
  if (C.cf) goto L_1229d1ee;
  /* 1229d1cc cmp dword ptr [ebp + 8], 0x122bf380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x122bf380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d1d3 ja 0x1229d1ee */
  if ((!C.cf&&!C.zf)) goto L_1229d1ee;
  /* 1229d1d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d1d8 sub eax, 0x122bf120 */
  { uint32_t _a=(EAX),_b=(0x122bf120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229d1dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1229d1e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d1e3 push eax */
  push32((uint32_t)(EAX));
  /* 1229d1e4 call 0x12297db0 */
  push32(0x1229d1e9u); f_12297db0();
  /* 1229d1e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d1ec jmp 0x1229d1fb */
  goto L_1229d1fb;
L_1229d1ee:;
  /* 1229d1ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d1f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d1f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1229d1f5 call dword ptr [0x122c32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32f8))), 0x1229d1fbu);
L_1229d1fb:;
  /* 1229d1fb pop ebp */
  EBP = (pop32());
  /* 1229d1fc ret  */
  ESPCHK(0x1229d1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d200 @ 0x1229d200 (41 bytes, 16 insns) */
void f_1229d200(void) {
  FTRACE(0x1229d200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229d200 push ebp */
  push32((uint32_t)(EBP));
  /* 1229d201 mov ebp, esp */
  EBP = (ESP);
  /* 1229d203 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d207 jge 0x1229d21a */
  if ((C.sf==C.of)) goto L_1229d21a;
  /* 1229d209 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d20c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d20f push eax */
  push32((uint32_t)(EAX));
  /* 1229d210 call 0x12297db0 */
  push32(0x1229d215u); f_12297db0();
  /* 1229d215 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d218 jmp 0x1229d227 */
  goto L_1229d227;
L_1229d21a:;
  /* 1229d21a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229d21d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d220 push ecx */
  push32((uint32_t)(ECX));
  /* 1229d221 call dword ptr [0x122c32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32f8))), 0x1229d227u);
L_1229d227:;
  /* 1229d227 pop ebp */
  EBP = (pop32());
  /* 1229d228 ret  */
  ESPCHK(0x1229d200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d230 @ 0x1229d230 (61 bytes, 20 insns) */
void f_1229d230(void) {
  FTRACE(0x1229d230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229d230 push ebp */
  push32((uint32_t)(EBP));
  /* 1229d231 mov ebp, esp */
  EBP = (ESP);
  /* 1229d233 cmp dword ptr [ebp + 8], 0x122bf120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x122bf120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d23a jb 0x1229d25e */
  if (C.cf) goto L_1229d25e;
  /* 1229d23c cmp dword ptr [ebp + 8], 0x122bf380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x122bf380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d243 ja 0x1229d25e */
  if ((!C.cf&&!C.zf)) goto L_1229d25e;
  /* 1229d245 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d248 sub eax, 0x122bf120 */
  { uint32_t _a=(EAX),_b=(0x122bf120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229d24d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1229d250 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d253 push eax */
  push32((uint32_t)(EAX));
  /* 1229d254 call 0x12297e50 */
  push32(0x1229d259u); f_12297e50();
  /* 1229d259 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d25c jmp 0x1229d26b */
  goto L_1229d26b;
L_1229d25e:;
  /* 1229d25e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d261 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d264 push ecx */
  push32((uint32_t)(ECX));
  /* 1229d265 call dword ptr [0x122c32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32fc))), 0x1229d26bu);
L_1229d26b:;
  /* 1229d26b pop ebp */
  EBP = (pop32());
  /* 1229d26c ret  */
  ESPCHK(0x1229d230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d270 @ 0x1229d270 (41 bytes, 16 insns) */
void f_1229d270(void) {
  FTRACE(0x1229d270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229d270 push ebp */
  push32((uint32_t)(EBP));
  /* 1229d271 mov ebp, esp */
  EBP = (ESP);
  /* 1229d273 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d277 jge 0x1229d28a */
  if ((C.sf==C.of)) goto L_1229d28a;
  /* 1229d279 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d27c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d27f push eax */
  push32((uint32_t)(EAX));
  /* 1229d280 call 0x12297e50 */
  push32(0x1229d285u); f_12297e50();
  /* 1229d285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d288 jmp 0x1229d297 */
  goto L_1229d297;
L_1229d28a:;
  /* 1229d28a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229d28d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d290 push ecx */
  push32((uint32_t)(ECX));
  /* 1229d291 call dword ptr [0x122c32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32fc))), 0x1229d297u);
L_1229d297:;
  /* 1229d297 pop ebp */
  EBP = (pop32());
  /* 1229d298 ret  */
  ESPCHK(0x1229d270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2a0 @ 0x1229d2a0 (119 bytes, 34 insns) */
void f_1229d2a0(void) {
  FTRACE(0x1229d2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229d2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229d2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1229d2a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229d2a6 push 0x122c098c */
  push32((uint32_t)(0x122c098cu));
  /* 1229d2ab call dword ptr [0x122c32b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32b4))), 0x1229d2b1u);
  /* 1229d2b1 cmp dword ptr [0x122c097c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c097c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d2b8 je 0x1229d2d8 */
  if (C.zf) goto L_1229d2d8;
  /* 1229d2ba push 0x122c098c */
  push32((uint32_t)(0x122c098cu));
  /* 1229d2bf call dword ptr [0x122c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32a4))), 0x1229d2c5u);
  /* 1229d2c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1229d2c7 call 0x12297db0 */
  push32(0x1229d2ccu); f_12297db0();
  /* 1229d2cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d2cf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1229d2d6 jmp 0x1229d2df */
  goto L_1229d2df;
L_1229d2d8:;
  /* 1229d2d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1229d2df:;
  /* 1229d2df mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1229d2e3 push eax */
  push32((uint32_t)(EAX));
  /* 1229d2e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d2e7 push ecx */
  push32((uint32_t)(ECX));
  /* 1229d2e8 call 0x1229d320 */
  push32(0x1229d2edu); f_1229d320();
  /* 1229d2ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d2f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1229d2f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d2f7 je 0x1229d305 */
  if (C.zf) goto L_1229d305;
  /* 1229d2f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1229d2fb call 0x12297e50 */
  push32(0x1229d300u); f_12297e50();
  /* 1229d300 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d303 jmp 0x1229d310 */
  goto L_1229d310;
L_1229d305:;
  /* 1229d305 push 0x122c098c */
  push32((uint32_t)(0x122c098cu));
  /* 1229d30a call dword ptr [0x122c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32a4))), 0x1229d310u);
L_1229d310:;
  /* 1229d310 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229d313 mov esp, ebp */
  ESP = (EBP);
  /* 1229d315 pop ebp */
  EBP = (pop32());
  /* 1229d316 ret  */
  ESPCHK(0x1229d2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d320 @ 0x1229d320 (160 bytes, 50 insns) */
void f_1229d320(void) {
  FTRACE(0x1229d320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229d320 push ebp */
  push32((uint32_t)(EBP));
  /* 1229d321 mov ebp, esp */
  EBP = (ESP);
  /* 1229d323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229d326 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d32a jne 0x1229d333 */
  if (!C.zf) goto L_1229d333;
  /* 1229d32c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229d32e jmp 0x1229d3bc */
  goto L_1229d3bc;
L_1229d333:;
  /* 1229d333 cmp dword ptr [0x122c0800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d33a jne 0x1229d36a */
  if (!C.zf) goto L_1229d36a;
  /* 1229d33c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229d33f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229d344 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d349 jle 0x1229d35b */
  if ((C.zf||C.sf!=C.of)) goto L_1229d35b;
  /* 1229d34b call 0x1229c280 */
  push32(0x1229d350u); f_1229c280();
  /* 1229d350 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1229d356 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229d359 jmp 0x1229d3bc */
  goto L_1229d3bc;
L_1229d35b:;
  /* 1229d35b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d35e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1229d361 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1229d363 mov eax, 1 */
  EAX = (0x1u);
  /* 1229d368 jmp 0x1229d3bc */
  goto L_1229d3bc;
L_1229d36a:;
  /* 1229d36a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1229d371 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1229d374 push eax */
  push32((uint32_t)(EAX));
  /* 1229d375 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229d377 mov ecx, dword ptr [0x122beea4] */
  ECX = (r32((uint32_t)(0x122beea4)));
  /* 1229d37d push ecx */
  push32((uint32_t)(ECX));
  /* 1229d37e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d381 push edx */
  push32((uint32_t)(EDX));
  /* 1229d382 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229d384 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1229d387 push eax */
  push32((uint32_t)(EAX));
  /* 1229d388 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1229d38d mov ecx, dword ptr [0x122c0810] */
  ECX = (r32((uint32_t)(0x122c0810)));
  /* 1229d393 push ecx */
  push32((uint32_t)(ECX));
  /* 1229d394 call dword ptr [0x122c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c330c))), 0x1229d39au);
  /* 1229d39a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229d39d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d3a1 je 0x1229d3a9 */
  if (C.zf) goto L_1229d3a9;
  /* 1229d3a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d3a7 je 0x1229d3b9 */
  if (C.zf) goto L_1229d3b9;
L_1229d3a9:;
  /* 1229d3a9 call 0x1229c280 */
  push32(0x1229d3aeu); f_1229c280();
  /* 1229d3ae mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1229d3b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229d3b7 jmp 0x1229d3bc */
  goto L_1229d3bc;
L_1229d3b9:;
  /* 1229d3b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1229d3bc:;
  /* 1229d3bc mov esp, ebp */
  ESP = (EBP);
  /* 1229d3be pop ebp */
  EBP = (pop32());
  /* 1229d3bf ret  */
  ESPCHK(0x1229d320u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1229d3c0 (32 bytes, 18 insns) */
void f_1229d3c0(void) {
  FTRACE(0x1229d3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229d3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229d3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1229d3c3 push ebx */
  push32((uint32_t)(EBX));
  /* 1229d3c4 push esi */
  push32((uint32_t)(ESI));
  /* 1229d3c5 push edi */
  push32((uint32_t)(EDI));
  /* 1229d3c6 push ebp */
  push32((uint32_t)(EBP));
  /* 1229d3c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229d3c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229d3cb push 0x1229d3d8 */
  push32((uint32_t)(0x1229d3d8u));
  /* 1229d3d0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1229d3d3 call 0x122a4b0c */
  push32(0x1229d3d8u); f_122a4b0c();
  /* 1229d3d8 pop ebp */
  EBP = (pop32());
  /* 1229d3d9 pop edi */
  EDI = (pop32());
  /* 1229d3da pop esi */
  ESI = (pop32());
  /* 1229d3db pop ebx */
  EBX = (pop32());
  /* 1229d3dc mov esp, ebp */
  ESP = (EBP);
  /* 1229d3de pop ebp */
  EBP = (pop32());
  /* 1229d3df ret  */
  ESPCHK(0x1229d3c0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1229d402 (104 bytes, 33 insns) */
void f_1229d402(void) {
  FTRACE(0x1229d402u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229d402 push ebx */
  push32((uint32_t)(EBX));
  /* 1229d403 push esi */
  push32((uint32_t)(ESI));
  /* 1229d404 push edi */
  push32((uint32_t)(EDI));
  /* 1229d405 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1229d409 push eax */
  push32((uint32_t)(EAX));
  /* 1229d40a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1229d40c push 0x1229d3e0 */
  push32((uint32_t)(0x1229d3e0u));
  /* 1229d411 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1229d418 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1229d41f:;
  /* 1229d41f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1229d423 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1229d426 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1229d429 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d42c je 0x1229d45c */
  if (C.zf) goto L_1229d45c;
  /* 1229d42e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d432 je 0x1229d45c */
  if (C.zf) goto L_1229d45c;
  /* 1229d434 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1229d437 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1229d43a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1229d43e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1229d441 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d446 jne 0x1229d45a */
  if (!C.zf) goto L_1229d45a;
  /* 1229d448 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1229d44d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1229d451 call 0x1229d496 */
  push32(0x1229d456u); f_1229d496();
  /* 1229d456 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1229d45au);
L_1229d45a:;
  /* 1229d45a jmp 0x1229d41f */
  goto L_1229d41f;
L_1229d45c:;
  /* 1229d45c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1229d463 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d466 pop edi */
  EDI = (pop32());
  /* 1229d467 pop esi */
  ESI = (pop32());
  /* 1229d468 pop ebx */
  EBX = (pop32());
  /* 1229d469 ret  */
  ESPCHK(0x1229d402u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d496 @ 0x1229d496 (24 bytes, 10 insns) */
void f_1229d496(void) {
  FTRACE(0x1229d496u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229d496 push ebx */
  push32((uint32_t)(EBX));
  /* 1229d497 push ecx */
  push32((uint32_t)(ECX));
  /* 1229d498 mov ebx, 0x122bf3b8 */
  EBX = (0x122bf3b8u);
  /* 1229d49d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d4a0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1229d4a3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1229d4a6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1229d4a9 pop ecx */
  ECX = (pop32());
  /* 1229d4aa pop ebx */
  EBX = (pop32());
  /* 1229d4ab ret 4 */
  ESPCHK(0x1229d496u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d575 @ 0x1229d575 (27 bytes, 11 insns) */
void f_1229d575(void) {
  FTRACE(0x1229d575u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229d575 push ebp */
  push32((uint32_t)(EBP));
  /* 1229d576 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1229d57a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1229d57c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1229d57f push eax */
  push32((uint32_t)(EAX));
  /* 1229d580 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1229d583 push eax */
  push32((uint32_t)(EAX));
  /* 1229d584 call 0x1229d402 */
  push32(0x1229d589u); f_1229d402();
  /* 1229d589 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d58c pop ebp */
  EBP = (pop32());
  /* 1229d58d ret 4 */
  ESPCHK(0x1229d575u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d590 @ 0x1229d590 (482 bytes, 138 insns) */
void f_1229d590(void) {
  FTRACE(0x1229d590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229d590 push ebp */
  push32((uint32_t)(EBP));
  /* 1229d591 mov ebp, esp */
  EBP = (ESP);
  /* 1229d593 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229d596 push esi */
  push32((uint32_t)(ESI));
  /* 1229d597 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1229d59e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1229d5a0 call 0x12297db0 */
  push32(0x1229d5a5u); f_12297db0();
  /* 1229d5a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d5a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1229d5af jmp 0x1229d5ba */
  goto L_1229d5ba;
L_1229d5b1:;
  /* 1229d5b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229d5b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d5b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1229d5ba:;
  /* 1229d5ba cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d5be jge 0x1229d760 */
  if ((C.sf==C.of)) goto L_1229d760;
  /* 1229d5c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229d5c7 cmp dword ptr [ecx*4 + 0x122c1fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x122c1fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d5cf je 0x1229d6c6 */
  if (C.zf) goto L_1229d6c6;
  /* 1229d5d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229d5d8 mov eax, dword ptr [edx*4 + 0x122c1fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x122c1fe0)));
  /* 1229d5df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229d5e2 jmp 0x1229d5ed */
  goto L_1229d5ed;
L_1229d5e4:;
  /* 1229d5e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d5e7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d5ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1229d5ed:;
  /* 1229d5ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229d5f0 mov eax, dword ptr [edx*4 + 0x122c1fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x122c1fe0)));
  /* 1229d5f7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d5fc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d5ff jae 0x1229d6b6 */
  if (!C.cf) goto L_1229d6b6;
  /* 1229d605 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d608 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1229d60c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1229d60f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229d611 jne 0x1229d6b1 */
  if (!C.zf) goto L_1229d6b1;
  /* 1229d617 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d61a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d61e jne 0x1229d659 */
  if (!C.zf) goto L_1229d659;
  /* 1229d620 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1229d622 call 0x12297db0 */
  push32(0x1229d627u); f_12297db0();
  /* 1229d627 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d62a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d62d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d631 jne 0x1229d64f */
  if (!C.zf) goto L_1229d64f;
  /* 1229d633 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d636 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d639 push edx */
  push32((uint32_t)(EDX));
  /* 1229d63a call dword ptr [0x122c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c332c))), 0x1229d640u);
  /* 1229d640 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d643 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1229d646 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d649 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d64c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1229d64f:;
  /* 1229d64f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1229d651 call 0x12297e50 */
  push32(0x1229d656u); f_12297e50();
  /* 1229d656 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229d659:;
  /* 1229d659 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d65c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d65f push eax */
  push32((uint32_t)(EAX));
  /* 1229d660 call dword ptr [0x122c32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32f8))), 0x1229d666u);
  /* 1229d666 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d669 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1229d66d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1229d670 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229d672 je 0x1229d686 */
  if (C.zf) goto L_1229d686;
  /* 1229d674 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d677 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d67a push eax */
  push32((uint32_t)(EAX));
  /* 1229d67b call dword ptr [0x122c32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32fc))), 0x1229d681u);
  /* 1229d681 jmp 0x1229d5e4 */
  goto L_1229d5e4;
L_1229d686:;
  /* 1229d686 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d689 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1229d68f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229d692 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1229d695 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229d698 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d69b sub eax, dword ptr [edx*4 + 0x122c1fe0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x122c1fe0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229d6a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1229d6a3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1229d6a8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1229d6aa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d6ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229d6af jmp 0x1229d6b6 */
  goto L_1229d6b6;
L_1229d6b1:;
  /* 1229d6b1 jmp 0x1229d5e4 */
  goto L_1229d5e4;
L_1229d6b6:;
  /* 1229d6b6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d6ba je 0x1229d6c1 */
  if (C.zf) goto L_1229d6c1;
  /* 1229d6bc jmp 0x1229d760 */
  goto L_1229d760;
L_1229d6c1:;
  /* 1229d6c1 jmp 0x1229d75b */
  goto L_1229d75b;
L_1229d6c6:;
  /* 1229d6c6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1229d6c8 push 0x122bc32c */
  push32((uint32_t)(0x122bc32cu));
  /* 1229d6cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1229d6cf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1229d6d4 call 0x122943b0 */
  push32(0x1229d6d9u); f_122943b0();
  /* 1229d6d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d6dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229d6df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d6e3 je 0x1229d759 */
  if (C.zf) goto L_1229d759;
  /* 1229d6e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229d6e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d6eb mov dword ptr [eax*4 + 0x122c1fe0], ecx */
  w32((uint32_t)(EAX*4 + 0x122c1fe0), (ECX));
  /* 1229d6f2 mov edx, dword ptr [0x122c211c] */
  EDX = (r32((uint32_t)(0x122c211c)));
  /* 1229d6f8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d6fb mov dword ptr [0x122c211c], edx */
  w32((uint32_t)(0x122c211c), (EDX));
  /* 1229d701 jmp 0x1229d70c */
  goto L_1229d70c;
L_1229d703:;
  /* 1229d703 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d706 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d709 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1229d70c:;
  /* 1229d70c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229d70f mov edx, dword ptr [ecx*4 + 0x122c1fe0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x122c1fe0)));
  /* 1229d716 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d71c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d71f jae 0x1229d744 */
  if (!C.cf) goto L_1229d744;
  /* 1229d721 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d724 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1229d728 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d72b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1229d731 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d734 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1229d738 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229d73b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1229d742 jmp 0x1229d703 */
  goto L_1229d703;
L_1229d744:;
  /* 1229d744 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229d747 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1229d74a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229d74d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229d750 push edx */
  push32((uint32_t)(EDX));
  /* 1229d751 call 0x1229daa0 */
  push32(0x1229d756u); f_1229daa0();
  /* 1229d756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229d759:;
  /* 1229d759 jmp 0x1229d760 */
  goto L_1229d760;
L_1229d75b:;
  /* 1229d75b jmp 0x1229d5b1 */
  goto L_1229d5b1;
L_1229d760:;
  /* 1229d760 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1229d762 call 0x12297e50 */
  push32(0x1229d767u); f_12297e50();
  /* 1229d767 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d76a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229d76d pop esi */
  ESI = (pop32());
  /* 1229d76e mov esp, ebp */
  ESP = (EBP);
  /* 1229d770 pop ebp */
  EBP = (pop32());
  /* 1229d771 ret  */
  ESPCHK(0x1229d590u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1229d780 (183 bytes, 57 insns) */
void f_1229d780(void) {
  FTRACE(0x1229d780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229d780 push ebp */
  push32((uint32_t)(EBP));
  /* 1229d781 mov ebp, esp */
  EBP = (ESP);
  /* 1229d783 push ecx */
  push32((uint32_t)(ECX));
  /* 1229d784 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d787 cmp eax, dword ptr [0x122c211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122c211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d78d jae 0x1229d81a */
  if (!C.cf) goto L_1229d81a;
  /* 1229d793 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d796 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1229d799 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d79c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1229d79f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229d7a2 mov eax, dword ptr [ecx*4 + 0x122c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122c1fe0)));
  /* 1229d7a9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d7ad jne 0x1229d81a */
  if (!C.zf) goto L_1229d81a;
  /* 1229d7af cmp dword ptr [0x122c05f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122c05f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d7b6 jne 0x1229d7fa */
  if (!C.zf) goto L_1229d7fa;
  /* 1229d7b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d7bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1229d7be cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d7c2 je 0x1229d7d2 */
  if (C.zf) goto L_1229d7d2;
  /* 1229d7c4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d7c8 je 0x1229d7e0 */
  if (C.zf) goto L_1229d7e0;
  /* 1229d7ca cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d7ce je 0x1229d7ee */
  if (C.zf) goto L_1229d7ee;
  /* 1229d7d0 jmp 0x1229d7fa */
  goto L_1229d7fa;
L_1229d7d2:;
  /* 1229d7d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229d7d5 push edx */
  push32((uint32_t)(EDX));
  /* 1229d7d6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1229d7d8 call dword ptr [0x122c328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c328c))), 0x1229d7deu);
  /* 1229d7de jmp 0x1229d7fa */
  goto L_1229d7fa;
L_1229d7e0:;
  /* 1229d7e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229d7e3 push eax */
  push32((uint32_t)(EAX));
  /* 1229d7e4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1229d7e6 call dword ptr [0x122c328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c328c))), 0x1229d7ecu);
  /* 1229d7ec jmp 0x1229d7fa */
  goto L_1229d7fa;
L_1229d7ee:;
  /* 1229d7ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229d7f1 push ecx */
  push32((uint32_t)(ECX));
  /* 1229d7f2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1229d7f4 call dword ptr [0x122c328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c328c))), 0x1229d7fau);
L_1229d7fa:;
  /* 1229d7fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d7fd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1229d800 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d803 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1229d806 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229d809 mov ecx, dword ptr [edx*4 + 0x122c1fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x122c1fe0)));
  /* 1229d810 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229d813 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1229d816 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229d818 jmp 0x1229d833 */
  goto L_1229d833;
L_1229d81a:;
  /* 1229d81a call 0x1229c280 */
  push32(0x1229d81fu); f_1229c280();
  /* 1229d81f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1229d825 call 0x1229c290 */
  push32(0x1229d82au); f_1229c290();
  /* 1229d82a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1229d830 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1229d833:;
  /* 1229d833 mov esp, ebp */
  ESP = (EBP);
  /* 1229d835 pop ebp */
  EBP = (pop32());
  /* 1229d836 ret  */
  ESPCHK(0x1229d780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d840 @ 0x1229d840 (216 bytes, 63 insns) */
void f_1229d840(void) {
  FTRACE(0x1229d840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229d840 push ebp */
  push32((uint32_t)(EBP));
  /* 1229d841 mov ebp, esp */
  EBP = (ESP);
  /* 1229d843 push ecx */
  push32((uint32_t)(ECX));
  /* 1229d844 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d847 cmp eax, dword ptr [0x122c211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122c211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d84d jae 0x1229d8fb */
  if (!C.cf) goto L_1229d8fb;
  /* 1229d853 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d856 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1229d859 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d85c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1229d85f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229d862 mov eax, dword ptr [ecx*4 + 0x122c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122c1fe0)));
  /* 1229d869 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1229d86e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1229d871 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229d873 je 0x1229d8fb */
  if (C.zf) goto L_1229d8fb;
  /* 1229d879 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d87c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1229d87f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d882 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1229d885 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229d888 mov ecx, dword ptr [edx*4 + 0x122c1fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x122c1fe0)));
  /* 1229d88f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d893 je 0x1229d8fb */
  if (C.zf) goto L_1229d8fb;
  /* 1229d895 cmp dword ptr [0x122c05f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122c05f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d89c jne 0x1229d8da */
  if (!C.zf) goto L_1229d8da;
  /* 1229d89e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d8a1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1229d8a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d8a8 je 0x1229d8b8 */
  if (C.zf) goto L_1229d8b8;
  /* 1229d8aa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d8ae je 0x1229d8c4 */
  if (C.zf) goto L_1229d8c4;
  /* 1229d8b0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d8b4 je 0x1229d8d0 */
  if (C.zf) goto L_1229d8d0;
  /* 1229d8b6 jmp 0x1229d8da */
  goto L_1229d8da;
L_1229d8b8:;
  /* 1229d8b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229d8ba push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1229d8bc call dword ptr [0x122c328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c328c))), 0x1229d8c2u);
  /* 1229d8c2 jmp 0x1229d8da */
  goto L_1229d8da;
L_1229d8c4:;
  /* 1229d8c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229d8c6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1229d8c8 call dword ptr [0x122c328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c328c))), 0x1229d8ceu);
  /* 1229d8ce jmp 0x1229d8da */
  goto L_1229d8da;
L_1229d8d0:;
  /* 1229d8d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229d8d2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1229d8d4 call dword ptr [0x122c328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c328c))), 0x1229d8dau);
L_1229d8da:;
  /* 1229d8da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d8dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1229d8e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d8e3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1229d8e6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229d8e9 mov edx, dword ptr [eax*4 + 0x122c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122c1fe0)));
  /* 1229d8f0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1229d8f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229d8f9 jmp 0x1229d914 */
  goto L_1229d914;
L_1229d8fb:;
  /* 1229d8fb call 0x1229c280 */
  push32(0x1229d900u); f_1229c280();
  /* 1229d900 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1229d906 call 0x1229c290 */
  push32(0x1229d90bu); f_1229c290();
  /* 1229d90b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1229d911 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1229d914:;
  /* 1229d914 mov esp, ebp */
  ESP = (EBP);
  /* 1229d916 pop ebp */
  EBP = (pop32());
  /* 1229d917 ret  */
  ESPCHK(0x1229d840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d920 @ 0x1229d920 (102 bytes, 30 insns) */
void f_1229d920(void) {
  FTRACE(0x1229d920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229d920 push ebp */
  push32((uint32_t)(EBP));
  /* 1229d921 mov ebp, esp */
  EBP = (ESP);
  /* 1229d923 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d926 cmp eax, dword ptr [0x122c211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122c211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d92c jae 0x1229d96b */
  if (!C.cf) goto L_1229d96b;
  /* 1229d92e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d931 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1229d934 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d937 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1229d93a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229d93d mov eax, dword ptr [ecx*4 + 0x122c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122c1fe0)));
  /* 1229d944 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1229d949 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1229d94c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229d94e je 0x1229d96b */
  if (C.zf) goto L_1229d96b;
  /* 1229d950 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d953 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1229d956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d959 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1229d95c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229d95f mov ecx, dword ptr [edx*4 + 0x122c1fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x122c1fe0)));
  /* 1229d966 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1229d969 jmp 0x1229d984 */
  goto L_1229d984;
L_1229d96b:;
  /* 1229d96b call 0x1229c280 */
  push32(0x1229d970u); f_1229c280();
  /* 1229d970 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1229d976 call 0x1229c290 */
  push32(0x1229d97bu); f_1229c290();
  /* 1229d97b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1229d981 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1229d984:;
  /* 1229d984 pop ebp */
  EBP = (pop32());
  /* 1229d985 ret  */
  ESPCHK(0x1229d920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d990 @ 0x1229d990 (260 bytes, 83 insns) */
void f_1229d990(void) {
  FTRACE(0x1229d990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229d990 push ebp */
  push32((uint32_t)(EBP));
  /* 1229d991 mov ebp, esp */
  EBP = (ESP);
  /* 1229d993 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229d996 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1229d99a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229d99d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1229d9a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229d9a2 je 0x1229d9ad */
  if (C.zf) goto L_1229d9ad;
  /* 1229d9a4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1229d9a7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1229d9aa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1229d9ad:;
  /* 1229d9ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229d9b0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1229d9b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229d9b8 je 0x1229d9c2 */
  if (C.zf) goto L_1229d9c2;
  /* 1229d9ba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1229d9bd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1229d9bf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1229d9c2:;
  /* 1229d9c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229d9c5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1229d9cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229d9cd je 0x1229d9d8 */
  if (C.zf) goto L_1229d9d8;
  /* 1229d9cf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1229d9d2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1229d9d5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1229d9d8:;
  /* 1229d9d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229d9db push eax */
  push32((uint32_t)(EAX));
  /* 1229d9dc call dword ptr [0x122c32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32ec))), 0x1229d9e2u);
  /* 1229d9e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229d9e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229d9e9 jne 0x1229da02 */
  if (!C.zf) goto L_1229da02;
  /* 1229d9eb call dword ptr [0x122c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32e0))), 0x1229d9f1u);
  /* 1229d9f1 push eax */
  push32((uint32_t)(EAX));
  /* 1229d9f2 call 0x1229c1e0 */
  push32(0x1229d9f7u); f_1229c1e0();
  /* 1229d9f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229d9fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229d9fd jmp 0x1229da90 */
  goto L_1229da90;
L_1229da02:;
  /* 1229da02 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229da06 jne 0x1229da13 */
  if (!C.zf) goto L_1229da13;
  /* 1229da08 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1229da0b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1229da0e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1229da11 jmp 0x1229da22 */
  goto L_1229da22;
L_1229da13:;
  /* 1229da13 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229da17 jne 0x1229da22 */
  if (!C.zf) goto L_1229da22;
  /* 1229da19 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1229da1c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1229da1f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1229da22:;
  /* 1229da22 call 0x1229d590 */
  push32(0x1229da27u); f_1229d590();
  /* 1229da27 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1229da2a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229da2e jne 0x1229da4b */
  if (!C.zf) goto L_1229da4b;
  /* 1229da30 call 0x1229c280 */
  push32(0x1229da35u); f_1229c280();
  /* 1229da35 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1229da3b call 0x1229c290 */
  push32(0x1229da40u); f_1229c290();
  /* 1229da40 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1229da46 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229da49 jmp 0x1229da90 */
  goto L_1229da90;
L_1229da4b:;
  /* 1229da4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229da4e push eax */
  push32((uint32_t)(EAX));
  /* 1229da4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229da52 push ecx */
  push32((uint32_t)(ECX));
  /* 1229da53 call 0x1229d780 */
  push32(0x1229da58u); f_1229d780();
  /* 1229da58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229da5b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1229da5e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1229da61 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1229da64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229da67 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1229da6a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229da6d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1229da70 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229da73 mov edx, dword ptr [eax*4 + 0x122c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122c1fe0)));
  /* 1229da7a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1229da7d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1229da81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229da84 push ecx */
  push32((uint32_t)(ECX));
  /* 1229da85 call 0x1229db30 */
  push32(0x1229da8au); f_1229db30();
  /* 1229da8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229da8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1229da90:;
  /* 1229da90 mov esp, ebp */
  ESP = (EBP);
  /* 1229da92 pop ebp */
  EBP = (pop32());
  /* 1229da93 ret  */
  ESPCHK(0x1229d990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000daa0 @ 0x1229daa0 (134 bytes, 44 insns) */
void f_1229daa0(void) {
  FTRACE(0x1229daa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229daa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229daa1 mov ebp, esp */
  EBP = (ESP);
  /* 1229daa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1229daa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229daa7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1229daaa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229daad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1229dab0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229dab3 mov edx, dword ptr [eax*4 + 0x122c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122c1fe0)));
  /* 1229daba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dabc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1229dabf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229dac2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229dac6 jne 0x1229db01 */
  if (!C.zf) goto L_1229db01;
  /* 1229dac8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1229daca call 0x12297db0 */
  push32(0x1229dacfu); f_12297db0();
  /* 1229dacf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dad2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229dad5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229dad9 jne 0x1229daf7 */
  if (!C.zf) goto L_1229daf7;
  /* 1229dadb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229dade add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dae1 push edx */
  push32((uint32_t)(EDX));
  /* 1229dae2 call dword ptr [0x122c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c332c))), 0x1229dae8u);
  /* 1229dae8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229daeb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1229daee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229daf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229daf4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1229daf7:;
  /* 1229daf7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1229daf9 call 0x12297e50 */
  push32(0x1229dafeu); f_12297e50();
  /* 1229dafe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229db01:;
  /* 1229db01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229db04 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1229db07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229db0a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1229db0d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229db10 mov edx, dword ptr [eax*4 + 0x122c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122c1fe0)));
  /* 1229db17 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1229db1b push eax */
  push32((uint32_t)(EAX));
  /* 1229db1c call dword ptr [0x122c32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32f8))), 0x1229db22u);
  /* 1229db22 mov esp, ebp */
  ESP = (EBP);
  /* 1229db24 pop ebp */
  EBP = (pop32());
  /* 1229db25 ret  */
  ESPCHK(0x1229daa0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1229db30 (38 bytes, 13 insns) */
void f_1229db30(void) {
  FTRACE(0x1229db30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229db30 push ebp */
  push32((uint32_t)(EBP));
  /* 1229db31 mov ebp, esp */
  EBP = (ESP);
  /* 1229db33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229db36 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1229db39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229db3c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1229db3f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229db42 mov edx, dword ptr [eax*4 + 0x122c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122c1fe0)));
  /* 1229db49 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1229db4d push eax */
  push32((uint32_t)(EAX));
  /* 1229db4e call dword ptr [0x122c32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32fc))), 0x1229db54u);
  /* 1229db54 pop ebp */
  EBP = (pop32());
  /* 1229db55 ret  */
  ESPCHK(0x1229db30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db60 @ 0x1229db60 (218 bytes, 63 insns) */
void f_1229db60(void) {
  FTRACE(0x1229db60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229db60 push ebp */
  push32((uint32_t)(EBP));
  /* 1229db61 mov ebp, esp */
  EBP = (ESP);
  /* 1229db63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229db66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1229db6d push 2 */
  push32((uint32_t)(0x2u));
  /* 1229db6f call 0x12297db0 */
  push32(0x1229db74u); f_12297db0();
  /* 1229db74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229db77 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1229db7e jmp 0x1229db89 */
  goto L_1229db89;
L_1229db80:;
  /* 1229db80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229db83 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229db86 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1229db89:;
  /* 1229db89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229db8c cmp ecx, dword ptr [0x122c1ce0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122c1ce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229db92 jge 0x1229dc29 */
  if ((C.sf==C.of)) goto L_1229dc29;
  /* 1229db98 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229db9b mov eax, dword ptr [0x122c0990] */
  EAX = (r32((uint32_t)(0x122c0990)));
  /* 1229dba0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229dba4 je 0x1229dc24 */
  if (C.zf) goto L_1229dc24;
  /* 1229dba6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dba9 mov edx, dword ptr [0x122c0990] */
  EDX = (r32((uint32_t)(0x122c0990)));
  /* 1229dbaf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1229dbb2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1229dbb5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1229dbbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229dbbd je 0x1229dbe1 */
  if (C.zf) goto L_1229dbe1;
  /* 1229dbbf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dbc2 mov eax, dword ptr [0x122c0990] */
  EAX = (r32((uint32_t)(0x122c0990)));
  /* 1229dbc7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1229dbca push ecx */
  push32((uint32_t)(ECX));
  /* 1229dbcb call 0x1229e950 */
  push32(0x1229dbd0u); f_1229e950();
  /* 1229dbd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dbd3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229dbd6 je 0x1229dbe1 */
  if (C.zf) goto L_1229dbe1;
  /* 1229dbd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229dbdb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dbde mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1229dbe1:;
  /* 1229dbe1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229dbe5 jl 0x1229dc24 */
  if ((C.sf!=C.of)) goto L_1229dc24;
  /* 1229dbe7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dbea mov ecx, dword ptr [0x122c0990] */
  ECX = (r32((uint32_t)(0x122c0990)));
  /* 1229dbf0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1229dbf3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dbf6 push edx */
  push32((uint32_t)(EDX));
  /* 1229dbf7 call dword ptr [0x122c32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32f4))), 0x1229dbfdu);
  /* 1229dbfd push 2 */
  push32((uint32_t)(0x2u));
  /* 1229dbff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dc02 mov ecx, dword ptr [0x122c0990] */
  ECX = (r32((uint32_t)(0x122c0990)));
  /* 1229dc08 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1229dc0b push edx */
  push32((uint32_t)(EDX));
  /* 1229dc0c call 0x12294e40 */
  push32(0x1229dc11u); f_12294e40();
  /* 1229dc11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dc14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dc17 mov ecx, dword ptr [0x122c0990] */
  ECX = (r32((uint32_t)(0x122c0990)));
  /* 1229dc1d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1229dc24:;
  /* 1229dc24 jmp 0x1229db80 */
  goto L_1229db80;
L_1229dc29:;
  /* 1229dc29 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229dc2b call 0x12297e50 */
  push32(0x1229dc30u); f_12297e50();
  /* 1229dc30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dc33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229dc36 mov esp, ebp */
  ESP = (EBP);
  /* 1229dc38 pop ebp */
  EBP = (pop32());
  /* 1229dc39 ret  */
  ESPCHK(0x1229db60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc40 @ 0x1229dc40 (68 bytes, 26 insns) */
void f_1229dc40(void) {
  FTRACE(0x1229dc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229dc40 push ebp */
  push32((uint32_t)(EBP));
  /* 1229dc41 mov ebp, esp */
  EBP = (ESP);
  /* 1229dc43 push ecx */
  push32((uint32_t)(ECX));
  /* 1229dc44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229dc48 jne 0x1229dc56 */
  if (!C.zf) goto L_1229dc56;
  /* 1229dc4a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229dc4c call 0x1229ddb0 */
  push32(0x1229dc51u); f_1229ddb0();
  /* 1229dc51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dc54 jmp 0x1229dc80 */
  goto L_1229dc80;
L_1229dc56:;
  /* 1229dc56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229dc59 push eax */
  push32((uint32_t)(EAX));
  /* 1229dc5a call 0x1229d1c0 */
  push32(0x1229dc5fu); f_1229d1c0();
  /* 1229dc5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dc62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229dc65 push ecx */
  push32((uint32_t)(ECX));
  /* 1229dc66 call 0x1229dc90 */
  push32(0x1229dc6bu); f_1229dc90();
  /* 1229dc6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dc6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229dc71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229dc74 push edx */
  push32((uint32_t)(EDX));
  /* 1229dc75 call 0x1229d230 */
  push32(0x1229dc7au); f_1229d230();
  /* 1229dc7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dc7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1229dc80:;
  /* 1229dc80 mov esp, ebp */
  ESP = (EBP);
  /* 1229dc82 pop ebp */
  EBP = (pop32());
  /* 1229dc83 ret  */
  ESPCHK(0x1229dc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc90 @ 0x1229dc90 (65 bytes, 26 insns) */
void f_1229dc90(void) {
  FTRACE(0x1229dc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229dc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1229dc91 mov ebp, esp */
  EBP = (ESP);
  /* 1229dc93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229dc96 push eax */
  push32((uint32_t)(EAX));
  /* 1229dc97 call 0x1229dce0 */
  push32(0x1229dc9cu); f_1229dce0();
  /* 1229dc9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dc9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229dca1 je 0x1229dca8 */
  if (C.zf) goto L_1229dca8;
  /* 1229dca3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229dca6 jmp 0x1229dccf */
  goto L_1229dccf;
L_1229dca8:;
  /* 1229dca8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229dcab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1229dcae and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1229dcb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229dcb6 je 0x1229dccd */
  if (C.zf) goto L_1229dccd;
  /* 1229dcb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229dcbb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1229dcbe push ecx */
  push32((uint32_t)(ECX));
  /* 1229dcbf call 0x1229eaa0 */
  push32(0x1229dcc4u); f_1229eaa0();
  /* 1229dcc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dcc7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1229dcc9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229dccb jmp 0x1229dccf */
  goto L_1229dccf;
L_1229dccd:;
  /* 1229dccd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1229dccf:;
  /* 1229dccf pop ebp */
  EBP = (pop32());
  /* 1229dcd0 ret  */
  ESPCHK(0x1229dc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dce0 @ 0x1229dce0 (183 bytes, 62 insns) */
void f_1229dce0(void) {
  FTRACE(0x1229dce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229dce0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229dce1 mov ebp, esp */
  EBP = (ESP);
  /* 1229dce3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229dce6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1229dced mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229dcf0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1229dcf3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dcf6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1229dcf9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1229dcfc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229dcff jne 0x1229dd7b */
  if (!C.zf) goto L_1229dd7b;
  /* 1229dd01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dd04 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1229dd07 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1229dd0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229dd0f je 0x1229dd7b */
  if (C.zf) goto L_1229dd7b;
  /* 1229dd11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dd14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dd17 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1229dd19 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229dd1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229dd1f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229dd23 jle 0x1229dd7b */
  if ((C.zf||C.sf!=C.of)) goto L_1229dd7b;
  /* 1229dd25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229dd28 push edx */
  push32((uint32_t)(EDX));
  /* 1229dd29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dd2c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1229dd2f push ecx */
  push32((uint32_t)(ECX));
  /* 1229dd30 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dd33 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1229dd36 push eax */
  push32((uint32_t)(EAX));
  /* 1229dd37 call 0x1229cc50 */
  push32(0x1229dd3cu); f_1229cc50();
  /* 1229dd3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dd3f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229dd42 jne 0x1229dd65 */
  if (!C.zf) goto L_1229dd65;
  /* 1229dd44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dd47 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1229dd4a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1229dd50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229dd52 je 0x1229dd63 */
  if (C.zf) goto L_1229dd63;
  /* 1229dd54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dd57 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1229dd5a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1229dd5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dd60 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1229dd63:;
  /* 1229dd63 jmp 0x1229dd7b */
  goto L_1229dd7b;
L_1229dd65:;
  /* 1229dd65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dd68 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1229dd6b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1229dd6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dd71 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1229dd74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1229dd7b:;
  /* 1229dd7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dd7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dd81 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1229dd84 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1229dd86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229dd89 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1229dd90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229dd93 mov esp, ebp */
  ESP = (EBP);
  /* 1229dd95 pop ebp */
  EBP = (pop32());
  /* 1229dd96 ret  */
  ESPCHK(0x1229dce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dda0 @ 0x1229dda0 (15 bytes, 7 insns) */
void f_1229dda0(void) {
  FTRACE(0x1229dda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229dda0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229dda1 mov ebp, esp */
  EBP = (ESP);
  /* 1229dda3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229dda5 call 0x1229ddb0 */
  push32(0x1229ddaau); f_1229ddb0();
  /* 1229ddaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ddad pop ebp */
  EBP = (pop32());
  /* 1229ddae ret  */
  ESPCHK(0x1229dda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddb0 @ 0x1229ddb0 (319 bytes, 94 insns) */
void f_1229ddb0(void) {
  FTRACE(0x1229ddb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229ddb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229ddb1 mov ebp, esp */
  EBP = (ESP);
  /* 1229ddb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229ddb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1229ddbd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1229ddc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229ddc6 call 0x12297db0 */
  push32(0x1229ddcbu); f_12297db0();
  /* 1229ddcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ddce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1229ddd5 jmp 0x1229dde0 */
  goto L_1229dde0;
L_1229ddd7:;
  /* 1229ddd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ddda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dddd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1229dde0:;
  /* 1229dde0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229dde3 cmp ecx, dword ptr [0x122c1ce0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122c1ce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229dde9 jge 0x1229ded3 */
  if ((C.sf==C.of)) goto L_1229ded3;
  /* 1229ddef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ddf2 mov eax, dword ptr [0x122c0990] */
  EAX = (r32((uint32_t)(0x122c0990)));
  /* 1229ddf7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ddfb je 0x1229dece */
  if (C.zf) goto L_1229dece;
  /* 1229de01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229de04 mov edx, dword ptr [0x122c0990] */
  EDX = (r32((uint32_t)(0x122c0990)));
  /* 1229de0a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1229de0d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1229de10 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1229de16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229de18 je 0x1229dece */
  if (C.zf) goto L_1229dece;
  /* 1229de1e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229de21 mov eax, dword ptr [0x122c0990] */
  EAX = (r32((uint32_t)(0x122c0990)));
  /* 1229de26 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1229de29 push ecx */
  push32((uint32_t)(ECX));
  /* 1229de2a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229de2d push edx */
  push32((uint32_t)(EDX));
  /* 1229de2e call 0x1229d200 */
  push32(0x1229de33u); f_1229d200();
  /* 1229de33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229de36 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229de39 mov ecx, dword ptr [0x122c0990] */
  ECX = (r32((uint32_t)(0x122c0990)));
  /* 1229de3f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1229de42 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1229de45 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1229de4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229de4c je 0x1229deb5 */
  if (C.zf) goto L_1229deb5;
  /* 1229de4e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229de52 jne 0x1229de79 */
  if (!C.zf) goto L_1229de79;
  /* 1229de54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229de57 mov edx, dword ptr [0x122c0990] */
  EDX = (r32((uint32_t)(0x122c0990)));
  /* 1229de5d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1229de60 push eax */
  push32((uint32_t)(EAX));
  /* 1229de61 call 0x1229dc90 */
  push32(0x1229de66u); f_1229dc90();
  /* 1229de66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229de69 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229de6c je 0x1229de77 */
  if (C.zf) goto L_1229de77;
  /* 1229de6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229de71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229de74 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1229de77:;
  /* 1229de77 jmp 0x1229deb5 */
  goto L_1229deb5;
L_1229de79:;
  /* 1229de79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229de7d jne 0x1229deb5 */
  if (!C.zf) goto L_1229deb5;
  /* 1229de7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229de82 mov eax, dword ptr [0x122c0990] */
  EAX = (r32((uint32_t)(0x122c0990)));
  /* 1229de87 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1229de8a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1229de8d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1229de90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229de92 je 0x1229deb5 */
  if (C.zf) goto L_1229deb5;
  /* 1229de94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229de97 mov ecx, dword ptr [0x122c0990] */
  ECX = (r32((uint32_t)(0x122c0990)));
  /* 1229de9d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1229dea0 push edx */
  push32((uint32_t)(EDX));
  /* 1229dea1 call 0x1229dc90 */
  push32(0x1229dea6u); f_1229dc90();
  /* 1229dea6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dea9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229deac jne 0x1229deb5 */
  if (!C.zf) goto L_1229deb5;
  /* 1229deae mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1229deb5:;
  /* 1229deb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229deb8 mov ecx, dword ptr [0x122c0990] */
  ECX = (r32((uint32_t)(0x122c0990)));
  /* 1229debe mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1229dec1 push edx */
  push32((uint32_t)(EDX));
  /* 1229dec2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229dec5 push eax */
  push32((uint32_t)(EAX));
  /* 1229dec6 call 0x1229d270 */
  push32(0x1229decbu); f_1229d270();
  /* 1229decb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229dece:;
  /* 1229dece jmp 0x1229ddd7 */
  goto L_1229ddd7;
L_1229ded3:;
  /* 1229ded3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229ded5 call 0x12297e50 */
  push32(0x1229dedau); f_12297e50();
  /* 1229deda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dedd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229dee1 jne 0x1229dee8 */
  if (!C.zf) goto L_1229dee8;
  /* 1229dee3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229dee6 jmp 0x1229deeb */
  goto L_1229deeb;
L_1229dee8:;
  /* 1229dee8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1229deeb:;
  /* 1229deeb mov esp, ebp */
  ESP = (EBP);
  /* 1229deed pop ebp */
  EBP = (pop32());
  /* 1229deee ret  */
  ESPCHK(0x1229ddb0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1229def0 (15 bytes, 7 insns) */
void f_1229def0(void) {
  FTRACE(0x1229def0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229def0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229def1 mov ebp, esp */
  EBP = (ESP);
  /* 1229def3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229def5 call 0x12293320 */
  push32(0x1229defau); f_12293320();
  /* 1229defa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229defd pop ebp */
  EBP = (pop32());
  /* 1229defe ret  */
  ESPCHK(0x1229def0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df00 @ 0x1229df00 (1007 bytes, 269 insns) */
void f_1229df00(void) {
  FTRACE(0x1229df00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229df00 push ebp */
  push32((uint32_t)(EBP));
  /* 1229df01 mov ebp, esp */
  EBP = (ESP);
  /* 1229df03 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229df09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229df0d jl 0x1229df15 */
  if ((C.sf!=C.of)) goto L_1229df15;
  /* 1229df0f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229df13 jle 0x1229df1c */
  if ((C.zf||C.sf!=C.of)) goto L_1229df1c;
L_1229df15:;
  /* 1229df15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229df17 jmp 0x1229e2eb */
  goto L_1229e2eb;
L_1229df1c:;
  /* 1229df1c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1229df1e call 0x12297db0 */
  push32(0x1229df23u); f_12297db0();
  /* 1229df23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229df26 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1229df2d mov eax, dword ptr [0x122c097c] */
  EAX = (r32((uint32_t)(0x122c097c)));
  /* 1229df32 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229df35 mov dword ptr [0x122c097c], eax */
  w32((uint32_t)(0x122c097c), (EAX));
L_1229df3a:;
  /* 1229df3a cmp dword ptr [0x122c098c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c098c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229df41 je 0x1229df4d */
  if (C.zf) goto L_1229df4d;
  /* 1229df43 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229df45 call dword ptr [0x122c327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c327c))), 0x1229df4bu);
  /* 1229df4b jmp 0x1229df3a */
  goto L_1229df3a;
L_1229df4d:;
  /* 1229df4d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229df51 je 0x1229df91 */
  if (C.zf) goto L_1229df91;
  /* 1229df53 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229df57 je 0x1229df71 */
  if (C.zf) goto L_1229df71;
  /* 1229df59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229df5c push ecx */
  push32((uint32_t)(ECX));
  /* 1229df5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229df60 push edx */
  push32((uint32_t)(EDX));
  /* 1229df61 call 0x1229e2f0 */
  push32(0x1229df66u); f_1229e2f0();
  /* 1229df66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229df69 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1229df6f jmp 0x1229df83 */
  goto L_1229df83;
L_1229df71:;
  /* 1229df71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229df74 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229df77 mov ecx, dword ptr [eax + 0x122bf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x122bf4dc)));
  /* 1229df7d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1229df83:;
  /* 1229df83 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1229df89 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1229df8c jmp 0x1229e2cb */
  goto L_1229e2cb;
L_1229df91:;
  /* 1229df91 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1229df98 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1229df9f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229dfa3 je 0x1229e2c3 */
  if (C.zf) goto L_1229e2c3;
  /* 1229dfa9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229dfac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1229dfaf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229dfb2 jne 0x1229e1d4 */
  if (!C.zf) goto L_1229e1d4;
  /* 1229dfb8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229dfbb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1229dfbf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229dfc2 jne 0x1229e1d4 */
  if (!C.zf) goto L_1229e1d4;
  /* 1229dfc8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229dfcb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1229dfcf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229dfd2 jne 0x1229e1d4 */
  if (!C.zf) goto L_1229e1d4;
  /* 1229dfd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229dfdb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1229dfe1:;
  /* 1229dfe1 push 0x122bc37c */
  push32((uint32_t)(0x122bc37cu));
  /* 1229dfe6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1229dfec push ecx */
  push32((uint32_t)(ECX));
  /* 1229dfed call 0x122a0150 */
  push32(0x1229dff2u); f_122a0150();
  /* 1229dff2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229dff5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1229dffb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e002 je 0x1229e02d */
  if (C.zf) goto L_1229e02d;
  /* 1229e004 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1229e00a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229e010 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1229e016 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e01d je 0x1229e02d */
  if (C.zf) goto L_1229e02d;
  /* 1229e01f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1229e025 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1229e028 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e02b jne 0x1229e053 */
  if (!C.zf) goto L_1229e053;
L_1229e02d:;
  /* 1229e02d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e031 je 0x1229e04c */
  if (C.zf) goto L_1229e04c;
  /* 1229e033 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1229e035 call 0x12297e50 */
  push32(0x1229e03au); f_12297e50();
  /* 1229e03a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e03d mov edx, dword ptr [0x122c097c] */
  EDX = (r32((uint32_t)(0x122c097c)));
  /* 1229e043 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229e046 mov dword ptr [0x122c097c], edx */
  w32((uint32_t)(0x122c097c), (EDX));
L_1229e04c:;
  /* 1229e04c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229e04e jmp 0x1229e2eb */
  goto L_1229e2eb;
L_1229e053:;
  /* 1229e053 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1229e05a jmp 0x1229e065 */
  goto L_1229e065;
L_1229e05c:;
  /* 1229e05c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229e05f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e062 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1229e065:;
  /* 1229e065 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e069 jg 0x1229e0b3 */
  if ((!C.zf&&C.sf==C.of)) goto L_1229e0b3;
  /* 1229e06b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1229e071 push ecx */
  push32((uint32_t)(ECX));
  /* 1229e072 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1229e078 push edx */
  push32((uint32_t)(EDX));
  /* 1229e079 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229e07c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229e07f mov ecx, dword ptr [eax + 0x122bf4d8] */
  ECX = (r32((uint32_t)(EAX + 0x122bf4d8)));
  /* 1229e085 push ecx */
  push32((uint32_t)(ECX));
  /* 1229e086 call 0x122a0110 */
  push32(0x1229e08bu); f_122a0110();
  /* 1229e08b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e08e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e090 jne 0x1229e0b1 */
  if (!C.zf) goto L_1229e0b1;
  /* 1229e092 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229e095 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229e098 mov eax, dword ptr [edx + 0x122bf4d8] */
  EAX = (r32((uint32_t)(EDX + 0x122bf4d8)));
  /* 1229e09e push eax */
  push32((uint32_t)(EAX));
  /* 1229e09f call 0x122971e0 */
  push32(0x1229e0a4u); f_122971e0();
  /* 1229e0a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e0a7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e0ad jne 0x1229e0b1 */
  if (!C.zf) goto L_1229e0b1;
  /* 1229e0af jmp 0x1229e0b3 */
  goto L_1229e0b3;
L_1229e0b1:;
  /* 1229e0b1 jmp 0x1229e05c */
  goto L_1229e05c;
L_1229e0b3:;
  /* 1229e0b3 push 0x122bc378 */
  push32((uint32_t)(0x122bc378u));
  /* 1229e0b8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1229e0be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e0c1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1229e0c7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1229e0cd push edx */
  push32((uint32_t)(EDX));
  /* 1229e0ce call 0x122a00d0 */
  push32(0x1229e0d3u); f_122a00d0();
  /* 1229e0d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e0d6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1229e0dc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e0e3 jne 0x1229e119 */
  if (!C.zf) goto L_1229e119;
  /* 1229e0e5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1229e0eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1229e0ee cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e0f1 je 0x1229e119 */
  if (C.zf) goto L_1229e119;
  /* 1229e0f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e0f7 je 0x1229e112 */
  if (C.zf) goto L_1229e112;
  /* 1229e0f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1229e0fb call 0x12297e50 */
  push32(0x1229e100u); f_12297e50();
  /* 1229e100 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e103 mov edx, dword ptr [0x122c097c] */
  EDX = (r32((uint32_t)(0x122c097c)));
  /* 1229e109 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229e10c mov dword ptr [0x122c097c], edx */
  w32((uint32_t)(0x122c097c), (EDX));
L_1229e112:;
  /* 1229e112 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229e114 jmp 0x1229e2eb */
  goto L_1229e2eb;
L_1229e119:;
  /* 1229e119 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e11d jg 0x1229e16a */
  if ((!C.zf&&C.sf==C.of)) goto L_1229e16a;
  /* 1229e11f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1229e125 push eax */
  push32((uint32_t)(EAX));
  /* 1229e126 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1229e12c push ecx */
  push32((uint32_t)(ECX));
  /* 1229e12d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1229e133 push edx */
  push32((uint32_t)(EDX));
  /* 1229e134 call 0x12297bd0 */
  push32(0x1229e139u); f_12297bd0();
  /* 1229e139 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e13c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1229e142 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1229e14a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1229e150 push ecx */
  push32((uint32_t)(ECX));
  /* 1229e151 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229e154 push edx */
  push32((uint32_t)(EDX));
  /* 1229e155 call 0x1229e2f0 */
  push32(0x1229e15au); f_1229e2f0();
  /* 1229e15a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e15d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e15f je 0x1229e16a */
  if (C.zf) goto L_1229e16a;
  /* 1229e161 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229e164 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e167 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1229e16a:;
  /* 1229e16a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1229e170 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e176 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1229e17c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1229e182 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1229e185 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e187 je 0x1229e198 */
  if (C.zf) goto L_1229e198;
  /* 1229e189 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1229e18f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e192 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1229e198:;
  /* 1229e198 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1229e19e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1229e1a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e1a3 jne 0x1229dfe1 */
  if (!C.zf) goto L_1229dfe1;
  /* 1229e1a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e1ad je 0x1229e1bc */
  if (C.zf) goto L_1229e1bc;
  /* 1229e1af call 0x1229e490 */
  push32(0x1229e1b4u); f_1229e490();
  /* 1229e1b4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1229e1ba jmp 0x1229e1c6 */
  goto L_1229e1c6;
L_1229e1bc:;
  /* 1229e1bc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1229e1c6:;
  /* 1229e1c6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1229e1cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229e1cf jmp 0x1229e2c1 */
  goto L_1229e2c1;
L_1229e1d4:;
  /* 1229e1d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e1d7 push edx */
  push32((uint32_t)(EDX));
  /* 1229e1d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229e1da push 0 */
  push32((uint32_t)(0x0u));
  /* 1229e1dc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1229e1e2 push eax */
  push32((uint32_t)(EAX));
  /* 1229e1e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e1e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1229e1e7 call 0x1229e590 */
  push32(0x1229e1ecu); f_1229e590();
  /* 1229e1ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e1ef mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1229e1f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e1f6 je 0x1229e2c1 */
  if (C.zf) goto L_1229e2c1;
  /* 1229e1fc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1229e203 jmp 0x1229e20e */
  goto L_1229e20e;
L_1229e205:;
  /* 1229e205 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229e208 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e20b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1229e20e:;
  /* 1229e20e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e212 jg 0x1229e270 */
  if ((!C.zf&&C.sf==C.of)) goto L_1229e270;
  /* 1229e214 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e218 je 0x1229e26e */
  if (C.zf) goto L_1229e26e;
  /* 1229e21a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229e21d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229e220 mov ecx, dword ptr [eax + 0x122bf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x122bf4dc)));
  /* 1229e226 push ecx */
  push32((uint32_t)(ECX));
  /* 1229e227 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1229e22d push edx */
  push32((uint32_t)(EDX));
  /* 1229e22e call 0x122a0040 */
  push32(0x1229e233u); f_122a0040();
  /* 1229e233 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e236 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e238 je 0x1229e265 */
  if (C.zf) goto L_1229e265;
  /* 1229e23a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1229e240 push eax */
  push32((uint32_t)(EAX));
  /* 1229e241 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229e244 push ecx */
  push32((uint32_t)(ECX));
  /* 1229e245 call 0x1229e2f0 */
  push32(0x1229e24au); f_1229e2f0();
  /* 1229e24a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e24d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e24f je 0x1229e25c */
  if (C.zf) goto L_1229e25c;
  /* 1229e251 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229e254 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e257 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1229e25a jmp 0x1229e263 */
  goto L_1229e263;
L_1229e25c:;
  /* 1229e25c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1229e263:;
  /* 1229e263 jmp 0x1229e26e */
  goto L_1229e26e;
L_1229e265:;
  /* 1229e265 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229e268 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e26b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1229e26e:;
  /* 1229e26e jmp 0x1229e205 */
  goto L_1229e205;
L_1229e270:;
  /* 1229e270 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e274 je 0x1229e29b */
  if (C.zf) goto L_1229e29b;
  /* 1229e276 call 0x1229e490 */
  push32(0x1229e27bu); f_1229e490();
  /* 1229e27b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1229e27e push 2 */
  push32((uint32_t)(0x2u));
  /* 1229e280 mov ecx, dword ptr [0x122bf4dc] */
  ECX = (r32((uint32_t)(0x122bf4dc)));
  /* 1229e286 push ecx */
  push32((uint32_t)(ECX));
  /* 1229e287 call 0x12294e40 */
  push32(0x1229e28cu); f_12294e40();
  /* 1229e28c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e28f mov dword ptr [0x122bf4dc], 0 */
  w32((uint32_t)(0x122bf4dc), (0x0u));
  /* 1229e299 jmp 0x1229e2c1 */
  goto L_1229e2c1;
L_1229e29b:;
  /* 1229e29b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e29f je 0x1229e2ae */
  if (C.zf) goto L_1229e2ae;
  /* 1229e2a1 call 0x1229e490 */
  push32(0x1229e2a6u); f_1229e490();
  /* 1229e2a6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1229e2ac jmp 0x1229e2b8 */
  goto L_1229e2b8;
L_1229e2ae:;
  /* 1229e2ae mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1229e2b8:;
  /* 1229e2b8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1229e2be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1229e2c1:;
  /* 1229e2c1 jmp 0x1229e2cb */
  goto L_1229e2cb;
L_1229e2c3:;
  /* 1229e2c3 call 0x1229e490 */
  push32(0x1229e2c8u); f_1229e490();
  /* 1229e2c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1229e2cb:;
  /* 1229e2cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e2cf je 0x1229e2e8 */
  if (C.zf) goto L_1229e2e8;
  /* 1229e2d1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1229e2d3 call 0x12297e50 */
  push32(0x1229e2d8u); f_12297e50();
  /* 1229e2d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e2db mov eax, dword ptr [0x122c097c] */
  EAX = (r32((uint32_t)(0x122c097c)));
  /* 1229e2e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229e2e3 mov dword ptr [0x122c097c], eax */
  w32((uint32_t)(0x122c097c), (EAX));
L_1229e2e8:;
  /* 1229e2e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1229e2eb:;
  /* 1229e2eb mov esp, ebp */
  ESP = (EBP);
  /* 1229e2ed pop ebp */
  EBP = (pop32());
  /* 1229e2ee ret  */
  ESPCHK(0x1229df00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2f0 @ 0x1229e2f0 (403 bytes, 117 insns) */
void f_1229e2f0(void) {
  FTRACE(0x1229e2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229e2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229e2f1 mov ebp, esp */
  EBP = (ESP);
  /* 1229e2f3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229e2f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e2fc push eax */
  push32((uint32_t)(EAX));
  /* 1229e2fd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1229e303 push ecx */
  push32((uint32_t)(ECX));
  /* 1229e304 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1229e30a push edx */
  push32((uint32_t)(EDX));
  /* 1229e30b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1229e311 push eax */
  push32((uint32_t)(EAX));
  /* 1229e312 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e315 push ecx */
  push32((uint32_t)(ECX));
  /* 1229e316 call 0x1229e590 */
  push32(0x1229e31bu); f_1229e590();
  /* 1229e31b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e31e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e320 jne 0x1229e329 */
  if (!C.zf) goto L_1229e329;
  /* 1229e322 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229e324 jmp 0x1229e47f */
  goto L_1229e47f;
L_1229e329:;
  /* 1229e329 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1229e32e push 0x122bc380 */
  push32((uint32_t)(0x122bc380u));
  /* 1229e333 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229e335 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1229e33b push edx */
  push32((uint32_t)(EDX));
  /* 1229e33c call 0x122971e0 */
  push32(0x1229e341u); f_122971e0();
  /* 1229e341 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e344 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e347 push eax */
  push32((uint32_t)(EAX));
  /* 1229e348 call 0x122943b0 */
  push32(0x1229e34du); f_122943b0();
  /* 1229e34d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e350 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1229e353 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e357 jne 0x1229e360 */
  if (!C.zf) goto L_1229e360;
  /* 1229e359 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229e35b jmp 0x1229e47f */
  goto L_1229e47f;
L_1229e360:;
  /* 1229e360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e363 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229e366 mov ecx, dword ptr [eax + 0x122bf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x122bf4dc)));
  /* 1229e36c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229e36f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e372 mov eax, dword ptr [edx*4 + 0x122c07f8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x122c07f8)));
  /* 1229e379 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229e37c push 6 */
  push32((uint32_t)(0x6u));
  /* 1229e37e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e381 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229e384 add ecx, 0x122c0848 */
  { uint32_t _a=(ECX),_b=(0x122c0848u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e38a push ecx */
  push32((uint32_t)(ECX));
  /* 1229e38b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1229e38e push edx */
  push32((uint32_t)(EDX));
  /* 1229e38f call 0x1229ac90 */
  push32(0x1229e394u); f_1229ac90();
  /* 1229e394 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e397 mov eax, dword ptr [0x122c0810] */
  EAX = (r32((uint32_t)(0x122c0810)));
  /* 1229e39c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1229e39f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1229e3a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1229e3a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229e3a9 push edx */
  push32((uint32_t)(EDX));
  /* 1229e3aa call 0x12297360 */
  push32(0x1229e3afu); f_12297360();
  /* 1229e3af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e3b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e3b5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229e3b8 mov dword ptr [ecx + 0x122bf4dc], eax */
  w32((uint32_t)(ECX + 0x122bf4dc), (EAX));
  /* 1229e3be mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1229e3c4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1229e3ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e3cd mov dword ptr [eax*4 + 0x122c07f8], edx */
  w32((uint32_t)(EAX*4 + 0x122c07f8), (EDX));
  /* 1229e3d4 push 6 */
  push32((uint32_t)(0x6u));
  /* 1229e3d6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1229e3dc push ecx */
  push32((uint32_t)(ECX));
  /* 1229e3dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e3e0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229e3e3 add edx, 0x122c0848 */
  { uint32_t _a=(EDX),_b=(0x122c0848u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e3e9 push edx */
  push32((uint32_t)(EDX));
  /* 1229e3ea call 0x1229ac90 */
  push32(0x1229e3efu); f_1229ac90();
  /* 1229e3ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e3f2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e3f6 jne 0x1229e403 */
  if (!C.zf) goto L_1229e403;
  /* 1229e3f8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1229e3fe mov dword ptr [0x122c0810], eax */
  w32((uint32_t)(0x122c0810), (EAX));
L_1229e403:;
  /* 1229e403 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e407 jne 0x1229e415 */
  if (!C.zf) goto L_1229e415;
  /* 1229e409 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1229e40f mov dword ptr [0x122c0814], ecx */
  w32((uint32_t)(0x122c0814), (ECX));
L_1229e415:;
  /* 1229e415 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e418 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229e41b call dword ptr [edx + 0x122bf4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x122bf4e0))), 0x1229e421u);
  /* 1229e421 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e423 je 0x1229e45c */
  if (C.zf) goto L_1229e45c;
  /* 1229e425 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e428 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229e42b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229e42e mov dword ptr [eax + 0x122bf4dc], ecx */
  w32((uint32_t)(EAX + 0x122bf4dc), (ECX));
  /* 1229e434 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229e436 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229e439 push edx */
  push32((uint32_t)(EDX));
  /* 1229e43a call 0x12294e40 */
  push32(0x1229e43fu); f_12294e40();
  /* 1229e43f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e442 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e445 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229e448 mov dword ptr [eax*4 + 0x122c07f8], ecx */
  w32((uint32_t)(EAX*4 + 0x122c07f8), (ECX));
  /* 1229e44f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229e452 mov dword ptr [0x122c0810], edx */
  w32((uint32_t)(0x122c0810), (EDX));
  /* 1229e458 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229e45a jmp 0x1229e47f */
  goto L_1229e47f;
L_1229e45c:;
  /* 1229e45c cmp dword ptr [ebp - 0xc], 0x122bf3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x122bf3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e463 je 0x1229e473 */
  if (C.zf) goto L_1229e473;
  /* 1229e465 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229e467 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229e46a push eax */
  push32((uint32_t)(EAX));
  /* 1229e46b call 0x12294e40 */
  push32(0x1229e470u); f_12294e40();
  /* 1229e470 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229e473:;
  /* 1229e473 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e476 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229e479 mov eax, dword ptr [ecx + 0x122bf4dc] */
  EAX = (r32((uint32_t)(ECX + 0x122bf4dc)));
L_1229e47f:;
  /* 1229e47f mov esp, ebp */
  ESP = (EBP);
  /* 1229e481 pop ebp */
  EBP = (pop32());
  /* 1229e482 ret  */
  ESPCHK(0x1229e2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e490 @ 0x1229e490 (256 bytes, 72 insns) */
void f_1229e490(void) {
  FTRACE(0x1229e490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229e490 push ebp */
  push32((uint32_t)(EBP));
  /* 1229e491 mov ebp, esp */
  EBP = (ESP);
  /* 1229e493 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229e496 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1229e49d cmp dword ptr [0x122bf4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122bf4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e4a4 jne 0x1229e4c4 */
  if (!C.zf) goto L_1229e4c4;
  /* 1229e4a6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1229e4ab push 0x122bc380 */
  push32((uint32_t)(0x122bc380u));
  /* 1229e4b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229e4b2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1229e4b7 call 0x122943b0 */
  push32(0x1229e4bcu); f_122943b0();
  /* 1229e4bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e4bf mov dword ptr [0x122bf4dc], eax */
  w32((uint32_t)(0x122bf4dc), (EAX));
L_1229e4c4:;
  /* 1229e4c4 mov eax, dword ptr [0x122bf4dc] */
  EAX = (r32((uint32_t)(0x122bf4dc)));
  /* 1229e4c9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1229e4cc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1229e4d3 jmp 0x1229e4de */
  goto L_1229e4de;
L_1229e4d5:;
  /* 1229e4d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229e4d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e4db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1229e4de:;
  /* 1229e4de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229e4e1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229e4e4 mov eax, dword ptr [edx + 0x122bf4dc] */
  EAX = (r32((uint32_t)(EDX + 0x122bf4dc)));
  /* 1229e4ea push eax */
  push32((uint32_t)(EAX));
  /* 1229e4eb push 0x122bc38c */
  push32((uint32_t)(0x122bc38cu));
  /* 1229e4f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229e4f3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229e4f6 mov edx, dword ptr [ecx + 0x122bf4d8] */
  EDX = (r32((uint32_t)(ECX + 0x122bf4d8)));
  /* 1229e4fc push edx */
  push32((uint32_t)(EDX));
  /* 1229e4fd push 3 */
  push32((uint32_t)(0x3u));
  /* 1229e4ff mov eax, dword ptr [0x122bf4dc] */
  EAX = (r32((uint32_t)(0x122bf4dc)));
  /* 1229e504 push eax */
  push32((uint32_t)(EAX));
  /* 1229e505 call 0x1229e730 */
  push32(0x1229e50au); f_1229e730();
  /* 1229e50a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e50d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e511 jge 0x1229e559 */
  if ((C.sf==C.of)) goto L_1229e559;
  /* 1229e513 push 0x122bc378 */
  push32((uint32_t)(0x122bc378u));
  /* 1229e518 mov ecx, dword ptr [0x122bf4dc] */
  ECX = (r32((uint32_t)(0x122bf4dc)));
  /* 1229e51e push ecx */
  push32((uint32_t)(ECX));
  /* 1229e51f call 0x12297370 */
  push32(0x1229e524u); f_12297370();
  /* 1229e524 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e527 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229e52a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e52d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229e530 mov eax, dword ptr [edx + 0x122bf4dc] */
  EAX = (r32((uint32_t)(EDX + 0x122bf4dc)));
  /* 1229e536 push eax */
  push32((uint32_t)(EAX));
  /* 1229e537 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229e53a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229e53d mov edx, dword ptr [ecx + 0x122bf4dc] */
  EDX = (r32((uint32_t)(ECX + 0x122bf4dc)));
  /* 1229e543 push edx */
  push32((uint32_t)(EDX));
  /* 1229e544 call 0x122a0040 */
  push32(0x1229e549u); f_122a0040();
  /* 1229e549 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e54c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e54e je 0x1229e557 */
  if (C.zf) goto L_1229e557;
  /* 1229e550 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1229e557:;
  /* 1229e557 jmp 0x1229e587 */
  goto L_1229e587;
L_1229e559:;
  /* 1229e559 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e55d jne 0x1229e566 */
  if (!C.zf) goto L_1229e566;
  /* 1229e55f mov eax, dword ptr [0x122bf4dc] */
  EAX = (r32((uint32_t)(0x122bf4dc)));
  /* 1229e564 jmp 0x1229e58c */
  goto L_1229e58c;
L_1229e566:;
  /* 1229e566 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229e568 mov eax, dword ptr [0x122bf4dc] */
  EAX = (r32((uint32_t)(0x122bf4dc)));
  /* 1229e56d push eax */
  push32((uint32_t)(EAX));
  /* 1229e56e call 0x12294e40 */
  push32(0x1229e573u); f_12294e40();
  /* 1229e573 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e576 mov dword ptr [0x122bf4dc], 0 */
  w32((uint32_t)(0x122bf4dc), (0x0u));
  /* 1229e580 mov eax, dword ptr [0x122bf4f4] */
  EAX = (r32((uint32_t)(0x122bf4f4)));
  /* 1229e585 jmp 0x1229e58c */
  goto L_1229e58c;
L_1229e587:;
  /* 1229e587 jmp 0x1229e4d5 */
  goto L_1229e4d5;
L_1229e58c:;
  /* 1229e58c mov esp, ebp */
  ESP = (EBP);
  /* 1229e58e pop ebp */
  EBP = (pop32());
  /* 1229e58f ret  */
  ESPCHK(0x1229e490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e590 @ 0x1229e590 (388 bytes, 115 insns) */
void f_1229e590(void) {
  FTRACE(0x1229e590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229e590 push ebp */
  push32((uint32_t)(EBP));
  /* 1229e591 mov ebp, esp */
  EBP = (ESP);
  /* 1229e593 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229e599 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e59d jne 0x1229e5a6 */
  if (!C.zf) goto L_1229e5a6;
  /* 1229e59f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229e5a1 jmp 0x1229e710 */
  goto L_1229e710;
L_1229e5a6:;
  /* 1229e5a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e5a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1229e5ac cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e5af jne 0x1229e600 */
  if (!C.zf) goto L_1229e600;
  /* 1229e5b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e5b4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1229e5b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e5ba jne 0x1229e600 */
  if (!C.zf) goto L_1229e600;
  /* 1229e5bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e5bf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1229e5c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e5c5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1229e5c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e5cd je 0x1229e5e9 */
  if (C.zf) goto L_1229e5e9;
  /* 1229e5cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229e5d2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1229e5d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229e5da mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1229e5e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229e5e3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1229e5e9:;
  /* 1229e5e9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e5ed je 0x1229e5f8 */
  if (C.zf) goto L_1229e5f8;
  /* 1229e5ef mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229e5f2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1229e5f8:;
  /* 1229e5f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e5fb jmp 0x1229e710 */
  goto L_1229e710;
L_1229e600:;
  /* 1229e600 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e603 push ecx */
  push32((uint32_t)(ECX));
  /* 1229e604 push 0x122bf450 */
  push32((uint32_t)(0x122bf450u));
  /* 1229e609 call 0x122a0040 */
  push32(0x1229e60eu); f_122a0040();
  /* 1229e60e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e611 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e613 je 0x1229e6c8 */
  if (C.zf) goto L_1229e6c8;
  /* 1229e619 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e61c push edx */
  push32((uint32_t)(EDX));
  /* 1229e61d push 0x122bf3cc */
  push32((uint32_t)(0x122bf3ccu));
  /* 1229e622 call 0x122a0040 */
  push32(0x1229e627u); f_122a0040();
  /* 1229e627 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e62a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e62c je 0x1229e6c8 */
  if (C.zf) goto L_1229e6c8;
  /* 1229e632 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e635 push eax */
  push32((uint32_t)(EAX));
  /* 1229e636 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1229e63c push ecx */
  push32((uint32_t)(ECX));
  /* 1229e63d call 0x1229e780 */
  push32(0x1229e642u); f_1229e780();
  /* 1229e642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e645 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e647 je 0x1229e650 */
  if (C.zf) goto L_1229e650;
  /* 1229e649 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229e64b jmp 0x1229e710 */
  goto L_1229e710;
L_1229e650:;
  /* 1229e650 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1229e656 push edx */
  push32((uint32_t)(EDX));
  /* 1229e657 push 0x122c0820 */
  push32((uint32_t)(0x122c0820u));
  /* 1229e65c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1229e662 push eax */
  push32((uint32_t)(EAX));
  /* 1229e663 call 0x122a0190 */
  push32(0x1229e668u); f_122a0190();
  /* 1229e668 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e66b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e66d jne 0x1229e676 */
  if (!C.zf) goto L_1229e676;
  /* 1229e66f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229e671 jmp 0x1229e710 */
  goto L_1229e710;
L_1229e676:;
  /* 1229e676 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229e678 mov cx, word ptr [0x122c0824] */
  CX = (r16((uint32_t)(0x122c0824)));
  /* 1229e67f mov dword ptr [0x122c0828], ecx */
  w32((uint32_t)(0x122c0828), (ECX));
  /* 1229e685 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1229e68b push edx */
  push32((uint32_t)(EDX));
  /* 1229e68c push 0x122bf450 */
  push32((uint32_t)(0x122bf450u));
  /* 1229e691 call 0x1229e8e0 */
  push32(0x1229e696u); f_1229e8e0();
  /* 1229e696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e699 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e69c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1229e69f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229e6a1 je 0x1229e6b6 */
  if (C.zf) goto L_1229e6b6;
  /* 1229e6a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e6a6 push edx */
  push32((uint32_t)(EDX));
  /* 1229e6a7 push 0x122bf3cc */
  push32((uint32_t)(0x122bf3ccu));
  /* 1229e6ac call 0x12297360 */
  push32(0x1229e6b1u); f_12297360();
  /* 1229e6b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e6b4 jmp 0x1229e6c8 */
  goto L_1229e6c8;
L_1229e6b6:;
  /* 1229e6b6 push 0x122bf450 */
  push32((uint32_t)(0x122bf450u));
  /* 1229e6bb push 0x122bf3cc */
  push32((uint32_t)(0x122bf3ccu));
  /* 1229e6c0 call 0x12297360 */
  push32(0x1229e6c5u); f_12297360();
  /* 1229e6c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229e6c8:;
  /* 1229e6c8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e6cc je 0x1229e6e1 */
  if (C.zf) goto L_1229e6e1;
  /* 1229e6ce push 6 */
  push32((uint32_t)(0x6u));
  /* 1229e6d0 push 0x122c0820 */
  push32((uint32_t)(0x122c0820u));
  /* 1229e6d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229e6d8 push eax */
  push32((uint32_t)(EAX));
  /* 1229e6d9 call 0x1229ac90 */
  push32(0x1229e6deu); f_1229ac90();
  /* 1229e6de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229e6e1:;
  /* 1229e6e1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e6e5 je 0x1229e6fa */
  if (C.zf) goto L_1229e6fa;
  /* 1229e6e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1229e6e9 push 0x122c0828 */
  push32((uint32_t)(0x122c0828u));
  /* 1229e6ee mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229e6f1 push ecx */
  push32((uint32_t)(ECX));
  /* 1229e6f2 call 0x1229ac90 */
  push32(0x1229e6f7u); f_1229ac90();
  /* 1229e6f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229e6fa:;
  /* 1229e6fa push 0x122bf450 */
  push32((uint32_t)(0x122bf450u));
  /* 1229e6ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e702 push edx */
  push32((uint32_t)(EDX));
  /* 1229e703 call 0x12297360 */
  push32(0x1229e708u); f_12297360();
  /* 1229e708 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e70b mov eax, 0x122bf450 */
  EAX = (0x122bf450u);
L_1229e710:;
  /* 1229e710 mov esp, ebp */
  ESP = (EBP);
  /* 1229e712 pop ebp */
  EBP = (pop32());
  /* 1229e713 ret  */
  ESPCHK(0x1229e590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e720 @ 0x1229e720 (7 bytes, 5 insns) */
void f_1229e720(void) {
  FTRACE(0x1229e720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229e720 push ebp */
  push32((uint32_t)(EBP));
  /* 1229e721 mov ebp, esp */
  EBP = (ESP);
  /* 1229e723 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229e725 pop ebp */
  EBP = (pop32());
  /* 1229e726 ret  */
  ESPCHK(0x1229e720u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1229e730 (79 bytes, 28 insns) */
void f_1229e730(void) {
  FTRACE(0x1229e730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229e730 push ebp */
  push32((uint32_t)(EBP));
  /* 1229e731 mov ebp, esp */
  EBP = (ESP);
  /* 1229e733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229e736 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1229e739 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229e73c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1229e743 jmp 0x1229e74e */
  goto L_1229e74e;
L_1229e745:;
  /* 1229e745 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229e748 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e74b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1229e74e:;
  /* 1229e74e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229e751 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e754 jge 0x1229e774 */
  if ((C.sf==C.of)) goto L_1229e774;
  /* 1229e756 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229e759 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e75c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229e75f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229e762 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1229e765 push edx */
  push32((uint32_t)(EDX));
  /* 1229e766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e769 push eax */
  push32((uint32_t)(EAX));
  /* 1229e76a call 0x12297370 */
  push32(0x1229e76fu); f_12297370();
  /* 1229e76f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e772 jmp 0x1229e745 */
  goto L_1229e745;
L_1229e774:;
  /* 1229e774 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1229e77b mov esp, ebp */
  ESP = (EBP);
  /* 1229e77d pop ebp */
  EBP = (pop32());
  /* 1229e77e ret  */
  ESPCHK(0x1229e730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e780 @ 0x1229e780 (349 bytes, 122 insns) */
void f_1229e780(void) {
  FTRACE(0x1229e780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229e780 push ebp */
  push32((uint32_t)(EBP));
  /* 1229e781 mov ebp, esp */
  EBP = (ESP);
  /* 1229e783 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229e786 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1229e78b push 0 */
  push32((uint32_t)(0x0u));
  /* 1229e78d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e790 push eax */
  push32((uint32_t)(EAX));
  /* 1229e791 call 0x12298120 */
  push32(0x1229e796u); f_12298120();
  /* 1229e796 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e799 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e79c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1229e79f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229e7a1 jne 0x1229e7aa */
  if (!C.zf) goto L_1229e7aa;
  /* 1229e7a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229e7a5 jmp 0x1229e8d9 */
  goto L_1229e8d9;
L_1229e7aa:;
  /* 1229e7aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e7ad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1229e7b0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e7b3 jne 0x1229e7e0 */
  if (!C.zf) goto L_1229e7e0;
  /* 1229e7b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e7b8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1229e7bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e7be je 0x1229e7e0 */
  if (C.zf) goto L_1229e7e0;
  /* 1229e7c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e7c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e7c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1229e7c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e7ca add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e7d0 push edx */
  push32((uint32_t)(EDX));
  /* 1229e7d1 call 0x12297360 */
  push32(0x1229e7d6u); f_12297360();
  /* 1229e7d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e7d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229e7db jmp 0x1229e8d9 */
  goto L_1229e8d9;
L_1229e7e0:;
  /* 1229e7e0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1229e7e7 jmp 0x1229e7f2 */
  goto L_1229e7f2;
L_1229e7e9:;
  /* 1229e7e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229e7ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e7ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1229e7f2:;
  /* 1229e7f2 push 0x122bc390 */
  push32((uint32_t)(0x122bc390u));
  /* 1229e7f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e7fa push ecx */
  push32((uint32_t)(ECX));
  /* 1229e7fb call 0x122a00d0 */
  push32(0x1229e800u); f_122a00d0();
  /* 1229e800 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e803 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1229e806 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e80a jne 0x1229e814 */
  if (!C.zf) goto L_1229e814;
  /* 1229e80c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229e80f jmp 0x1229e8d9 */
  goto L_1229e8d9;
L_1229e814:;
  /* 1229e814 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e817 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e81a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1229e81c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1229e81f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e823 jne 0x1229e84a */
  if (!C.zf) goto L_1229e84a;
  /* 1229e825 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e829 jge 0x1229e84a */
  if ((C.sf==C.of)) goto L_1229e84a;
  /* 1229e82b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1229e82f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e832 je 0x1229e84a */
  if (C.zf) goto L_1229e84a;
  /* 1229e834 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229e837 push edx */
  push32((uint32_t)(EDX));
  /* 1229e838 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e83b push eax */
  push32((uint32_t)(EAX));
  /* 1229e83c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e83f push ecx */
  push32((uint32_t)(ECX));
  /* 1229e840 call 0x12297bd0 */
  push32(0x1229e845u); f_12297bd0();
  /* 1229e845 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e848 jmp 0x1229e8b0 */
  goto L_1229e8b0;
L_1229e84a:;
  /* 1229e84a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e84e jne 0x1229e878 */
  if (!C.zf) goto L_1229e878;
  /* 1229e850 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e854 jge 0x1229e878 */
  if ((C.sf==C.of)) goto L_1229e878;
  /* 1229e856 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1229e85a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e85d je 0x1229e878 */
  if (C.zf) goto L_1229e878;
  /* 1229e85f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229e862 push eax */
  push32((uint32_t)(EAX));
  /* 1229e863 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e866 push ecx */
  push32((uint32_t)(ECX));
  /* 1229e867 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e86a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e86d push edx */
  push32((uint32_t)(EDX));
  /* 1229e86e call 0x12297bd0 */
  push32(0x1229e873u); f_12297bd0();
  /* 1229e873 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e876 jmp 0x1229e8b0 */
  goto L_1229e8b0;
L_1229e878:;
  /* 1229e878 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e87c jne 0x1229e8ab */
  if (!C.zf) goto L_1229e8ab;
  /* 1229e87e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1229e882 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e884 je 0x1229e88f */
  if (C.zf) goto L_1229e88f;
  /* 1229e886 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1229e88a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e88d jne 0x1229e8ab */
  if (!C.zf) goto L_1229e8ab;
L_1229e88f:;
  /* 1229e88f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229e892 push edx */
  push32((uint32_t)(EDX));
  /* 1229e893 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e896 push eax */
  push32((uint32_t)(EAX));
  /* 1229e897 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e89a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e8a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1229e8a1 call 0x12297bd0 */
  push32(0x1229e8a6u); f_12297bd0();
  /* 1229e8a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e8a9 jmp 0x1229e8b0 */
  goto L_1229e8b0;
L_1229e8ab:;
  /* 1229e8ab or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229e8ae jmp 0x1229e8d9 */
  goto L_1229e8d9;
L_1229e8b0:;
  /* 1229e8b0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1229e8b4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e8b7 jne 0x1229e8bb */
  if (!C.zf) goto L_1229e8bb;
  /* 1229e8b9 jmp 0x1229e8d7 */
  goto L_1229e8d7;
L_1229e8bb:;
  /* 1229e8bb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1229e8bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e8c1 jne 0x1229e8c5 */
  if (!C.zf) goto L_1229e8c5;
  /* 1229e8c3 jmp 0x1229e8d7 */
  goto L_1229e8d7;
L_1229e8c5:;
  /* 1229e8c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229e8c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e8cb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1229e8cf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1229e8d2 jmp 0x1229e7e9 */
  goto L_1229e7e9;
L_1229e8d7:;
  /* 1229e8d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1229e8d9:;
  /* 1229e8d9 mov esp, ebp */
  ESP = (EBP);
  /* 1229e8db pop ebp */
  EBP = (pop32());
  /* 1229e8dc ret  */
  ESPCHK(0x1229e780u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1229e8e0 (101 bytes, 36 insns) */
void f_1229e8e0(void) {
  FTRACE(0x1229e8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229e8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229e8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1229e8e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e8e6 push eax */
  push32((uint32_t)(EAX));
  /* 1229e8e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e8ea push ecx */
  push32((uint32_t)(ECX));
  /* 1229e8eb call 0x12297360 */
  push32(0x1229e8f0u); f_12297360();
  /* 1229e8f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e8f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e8f6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1229e8fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e8fc je 0x1229e918 */
  if (C.zf) goto L_1229e918;
  /* 1229e8fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e901 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e904 push ecx */
  push32((uint32_t)(ECX));
  /* 1229e905 push 0x122bc398 */
  push32((uint32_t)(0x122bc398u));
  /* 1229e90a push 2 */
  push32((uint32_t)(0x2u));
  /* 1229e90c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e90f push edx */
  push32((uint32_t)(EDX));
  /* 1229e910 call 0x1229e730 */
  push32(0x1229e915u); f_1229e730();
  /* 1229e915 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229e918:;
  /* 1229e918 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e91b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1229e922 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229e924 je 0x1229e943 */
  if (C.zf) goto L_1229e943;
  /* 1229e926 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229e929 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e92f push edx */
  push32((uint32_t)(EDX));
  /* 1229e930 push 0x122bc394 */
  push32((uint32_t)(0x122bc394u));
  /* 1229e935 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229e937 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e93a push eax */
  push32((uint32_t)(EAX));
  /* 1229e93b call 0x1229e730 */
  push32(0x1229e940u); f_1229e730();
  /* 1229e940 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229e943:;
  /* 1229e943 pop ebp */
  EBP = (pop32());
  /* 1229e944 ret  */
  ESPCHK(0x1229e8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e950 @ 0x1229e950 (130 bytes, 50 insns) */
void f_1229e950(void) {
  FTRACE(0x1229e950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229e950 push ebp */
  push32((uint32_t)(EBP));
  /* 1229e951 mov ebp, esp */
  EBP = (ESP);
  /* 1229e953 push ecx */
  push32((uint32_t)(ECX));
  /* 1229e954 push ebx */
  push32((uint32_t)(EBX));
  /* 1229e955 push esi */
  push32((uint32_t)(ESI));
  /* 1229e956 push edi */
  push32((uint32_t)(EDI));
  /* 1229e957 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1229e95e:;
  /* 1229e95e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e962 jne 0x1229e982 */
  if (!C.zf) goto L_1229e982;
  /* 1229e964 push 0x122bc3a8 */
  push32((uint32_t)(0x122bc3a8u));
  /* 1229e969 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229e96b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1229e96d push 0x122bc39c */
  push32((uint32_t)(0x122bc39cu));
  /* 1229e972 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229e974 call 0x12293470 */
  push32(0x1229e979u); f_12293470();
  /* 1229e979 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e97c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e97f jne 0x1229e982 */
  if (!C.zf) goto L_1229e982;
  /* 1229e981 int3  */
  x86_unimpl("int3 @ 0x1229e981");
L_1229e982:;
  /* 1229e982 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229e984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229e986 jne 0x1229e95e */
  if (!C.zf) goto L_1229e95e;
  /* 1229e988 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e98b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1229e98e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1229e991 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229e993 je 0x1229e9a1 */
  if (C.zf) goto L_1229e9a1;
  /* 1229e995 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e998 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1229e99f jmp 0x1229e9c8 */
  goto L_1229e9c8;
L_1229e9a1:;
  /* 1229e9a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e9a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1229e9a5 call 0x1229d1c0 */
  push32(0x1229e9aau); f_1229d1c0();
  /* 1229e9aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e9ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e9b0 push edx */
  push32((uint32_t)(EDX));
  /* 1229e9b1 call 0x1229e9e0 */
  push32(0x1229e9b6u); f_1229e9e0();
  /* 1229e9b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229e9b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229e9bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e9bf push eax */
  push32((uint32_t)(EAX));
  /* 1229e9c0 call 0x1229d230 */
  push32(0x1229e9c5u); f_1229d230();
  /* 1229e9c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229e9c8:;
  /* 1229e9c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229e9cb pop edi */
  EDI = (pop32());
  /* 1229e9cc pop esi */
  ESI = (pop32());
  /* 1229e9cd pop ebx */
  EBX = (pop32());
  /* 1229e9ce mov esp, ebp */
  ESP = (EBP);
  /* 1229e9d0 pop ebp */
  EBP = (pop32());
  /* 1229e9d1 ret  */
  ESPCHK(0x1229e950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9e0 @ 0x1229e9e0 (190 bytes, 67 insns) */
void f_1229e9e0(void) {
  FTRACE(0x1229e9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229e9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229e9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1229e9e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229e9e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1229e9e7 push esi */
  push32((uint32_t)(ESI));
  /* 1229e9e8 push edi */
  push32((uint32_t)(EDI));
  /* 1229e9e9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1229e9f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229e9f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1229e9f6:;
  /* 1229e9f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229e9fa jne 0x1229ea1a */
  if (!C.zf) goto L_1229ea1a;
  /* 1229e9fc push 0x122bc24c */
  push32((uint32_t)(0x122bc24cu));
  /* 1229ea01 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229ea03 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1229ea05 push 0x122bc39c */
  push32((uint32_t)(0x122bc39cu));
  /* 1229ea0a push 2 */
  push32((uint32_t)(0x2u));
  /* 1229ea0c call 0x12293470 */
  push32(0x1229ea11u); f_12293470();
  /* 1229ea11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ea14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ea17 jne 0x1229ea1a */
  if (!C.zf) goto L_1229ea1a;
  /* 1229ea19 int3  */
  x86_unimpl("int3 @ 0x1229ea19");
L_1229ea1a:;
  /* 1229ea1a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ea1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229ea1e jne 0x1229e9f6 */
  if (!C.zf) goto L_1229e9f6;
  /* 1229ea20 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229ea23 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1229ea26 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1229ea2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229ea2d je 0x1229ea8a */
  if (C.zf) goto L_1229ea8a;
  /* 1229ea2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229ea32 push ecx */
  push32((uint32_t)(ECX));
  /* 1229ea33 call 0x1229dce0 */
  push32(0x1229ea38u); f_1229dce0();
  /* 1229ea38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ea3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229ea3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229ea41 push edx */
  push32((uint32_t)(EDX));
  /* 1229ea42 call 0x122a1060 */
  push32(0x1229ea47u); f_122a1060();
  /* 1229ea47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ea4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229ea4d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1229ea50 push ecx */
  push32((uint32_t)(ECX));
  /* 1229ea51 call 0x122a0f30 */
  push32(0x1229ea56u); f_122a0f30();
  /* 1229ea56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ea59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229ea5b jge 0x1229ea66 */
  if ((C.sf==C.of)) goto L_1229ea66;
  /* 1229ea5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1229ea64 jmp 0x1229ea8a */
  goto L_1229ea8a;
L_1229ea66:;
  /* 1229ea66 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229ea69 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ea6d je 0x1229ea8a */
  if (C.zf) goto L_1229ea8a;
  /* 1229ea6f push 2 */
  push32((uint32_t)(0x2u));
  /* 1229ea71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229ea74 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1229ea77 push ecx */
  push32((uint32_t)(ECX));
  /* 1229ea78 call 0x12294e40 */
  push32(0x1229ea7du); f_12294e40();
  /* 1229ea7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ea80 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229ea83 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1229ea8a:;
  /* 1229ea8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229ea8d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1229ea94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ea97 pop edi */
  EDI = (pop32());
  /* 1229ea98 pop esi */
  ESI = (pop32());
  /* 1229ea99 pop ebx */
  EBX = (pop32());
  /* 1229ea9a mov esp, ebp */
  ESP = (EBP);
  /* 1229ea9c pop ebp */
  EBP = (pop32());
  /* 1229ea9d ret  */
  ESPCHK(0x1229e9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaa0 @ 0x1229eaa0 (210 bytes, 63 insns) */
void f_1229eaa0(void) {
  FTRACE(0x1229eaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229eaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229eaa1 mov ebp, esp */
  EBP = (ESP);
  /* 1229eaa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1229eaa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229eaa7 cmp eax, dword ptr [0x122c211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122c211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229eaad jae 0x1229ead1 */
  if (!C.cf) goto L_1229ead1;
  /* 1229eaaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229eab2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1229eab5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229eab8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1229eabb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229eabe mov eax, dword ptr [ecx*4 + 0x122c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122c1fe0)));
  /* 1229eac5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1229eaca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1229eacd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229eacf jne 0x1229eae4 */
  if (!C.zf) goto L_1229eae4;
L_1229ead1:;
  /* 1229ead1 call 0x1229c280 */
  push32(0x1229ead6u); f_1229c280();
  /* 1229ead6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1229eadc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229eadf jmp 0x1229eb6e */
  goto L_1229eb6e;
L_1229eae4:;
  /* 1229eae4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229eae7 push edx */
  push32((uint32_t)(EDX));
  /* 1229eae8 call 0x1229daa0 */
  push32(0x1229eaedu); f_1229daa0();
  /* 1229eaed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229eaf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229eaf3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1229eaf6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229eaf9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1229eafc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229eaff mov edx, dword ptr [eax*4 + 0x122c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122c1fe0)));
  /* 1229eb06 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1229eb0b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1229eb0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229eb10 je 0x1229eb4d */
  if (C.zf) goto L_1229eb4d;
  /* 1229eb12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229eb15 push ecx */
  push32((uint32_t)(ECX));
  /* 1229eb16 call 0x1229d920 */
  push32(0x1229eb1bu); f_1229d920();
  /* 1229eb1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229eb1e push eax */
  push32((uint32_t)(EAX));
  /* 1229eb1f call dword ptr [0x122c3278] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3278))), 0x1229eb25u);
  /* 1229eb25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229eb27 jne 0x1229eb34 */
  if (!C.zf) goto L_1229eb34;
  /* 1229eb29 call dword ptr [0x122c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32e0))), 0x1229eb2fu);
  /* 1229eb2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229eb32 jmp 0x1229eb3b */
  goto L_1229eb3b;
L_1229eb34:;
  /* 1229eb34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1229eb3b:;
  /* 1229eb3b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229eb3f jne 0x1229eb43 */
  if (!C.zf) goto L_1229eb43;
  /* 1229eb41 jmp 0x1229eb5f */
  goto L_1229eb5f;
L_1229eb43:;
  /* 1229eb43 call 0x1229c290 */
  push32(0x1229eb48u); f_1229c290();
  /* 1229eb48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229eb4b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1229eb4d:;
  /* 1229eb4d call 0x1229c280 */
  push32(0x1229eb52u); f_1229c280();
  /* 1229eb52 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1229eb58 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1229eb5f:;
  /* 1229eb5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229eb62 push eax */
  push32((uint32_t)(EAX));
  /* 1229eb63 call 0x1229db30 */
  push32(0x1229eb68u); f_1229db30();
  /* 1229eb68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229eb6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1229eb6e:;
  /* 1229eb6e mov esp, ebp */
  ESP = (EBP);
  /* 1229eb70 pop ebp */
  EBP = (pop32());
  /* 1229eb71 ret  */
  ESPCHK(0x1229eaa0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1229eb80 (219 bytes, 64 insns) */
void f_1229eb80(void) {
  FTRACE(0x1229eb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229eb80 push ebp */
  push32((uint32_t)(EBP));
  /* 1229eb81 mov ebp, esp */
  EBP = (ESP);
  /* 1229eb83 push ecx */
  push32((uint32_t)(ECX));
  /* 1229eb84 cmp dword ptr [0x122c080c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c080c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229eb8b je 0x1229ec21 */
  if (C.zf) goto L_1229ec21;
  /* 1229eb91 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1229eb93 push 0x122bc3b8 */
  push32((uint32_t)(0x122bc3b8u));
  /* 1229eb98 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229eb9a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1229eb9f push 1 */
  push32((uint32_t)(0x1u));
  /* 1229eba1 call 0x122947c0 */
  push32(0x1229eba6u); f_122947c0();
  /* 1229eba6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229eba9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229ebac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ebb0 jne 0x1229ebbc */
  if (!C.zf) goto L_1229ebbc;
  /* 1229ebb2 mov eax, 1 */
  EAX = (0x1u);
  /* 1229ebb7 jmp 0x1229ec57 */
  goto L_1229ec57;
L_1229ebbc:;
  /* 1229ebbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ebbf push eax */
  push32((uint32_t)(EAX));
  /* 1229ebc0 call 0x1229ec60 */
  push32(0x1229ebc5u); f_1229ec60();
  /* 1229ebc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ebc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229ebca je 0x1229ebed */
  if (C.zf) goto L_1229ebed;
  /* 1229ebcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ebcf push ecx */
  push32((uint32_t)(ECX));
  /* 1229ebd0 call 0x1229f1f0 */
  push32(0x1229ebd5u); f_1229f1f0();
  /* 1229ebd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ebd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229ebda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ebdd push edx */
  push32((uint32_t)(EDX));
  /* 1229ebde call 0x12294e40 */
  push32(0x1229ebe3u); f_12294e40();
  /* 1229ebe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ebe6 mov eax, 1 */
  EAX = (0x1u);
  /* 1229ebeb jmp 0x1229ec57 */
  goto L_1229ec57;
L_1229ebed:;
  /* 1229ebed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ebf0 mov dword ptr [0x122bfc98], eax */
  w32((uint32_t)(0x122bfc98), (EAX));
  /* 1229ebf5 mov ecx, dword ptr [0x122c082c] */
  ECX = (r32((uint32_t)(0x122c082c)));
  /* 1229ebfb push ecx */
  push32((uint32_t)(ECX));
  /* 1229ebfc call 0x1229f1f0 */
  push32(0x1229ec01u); f_1229f1f0();
  /* 1229ec01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ec04 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229ec06 mov edx, dword ptr [0x122c082c] */
  EDX = (r32((uint32_t)(0x122c082c)));
  /* 1229ec0c push edx */
  push32((uint32_t)(EDX));
  /* 1229ec0d call 0x12294e40 */
  push32(0x1229ec12u); f_12294e40();
  /* 1229ec12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ec15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ec18 mov dword ptr [0x122c082c], eax */
  w32((uint32_t)(0x122c082c), (EAX));
  /* 1229ec1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229ec1f jmp 0x1229ec57 */
  goto L_1229ec57;
L_1229ec21:;
  /* 1229ec21 mov dword ptr [0x122bfc98], 0x122bfca0 */
  w32((uint32_t)(0x122bfc98), (0x122bfca0u));
  /* 1229ec2b mov ecx, dword ptr [0x122c082c] */
  ECX = (r32((uint32_t)(0x122c082c)));
  /* 1229ec31 push ecx */
  push32((uint32_t)(ECX));
  /* 1229ec32 call 0x1229f1f0 */
  push32(0x1229ec37u); f_1229f1f0();
  /* 1229ec37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ec3a push 2 */
  push32((uint32_t)(0x2u));
  /* 1229ec3c mov edx, dword ptr [0x122c082c] */
  EDX = (r32((uint32_t)(0x122c082c)));
  /* 1229ec42 push edx */
  push32((uint32_t)(EDX));
  /* 1229ec43 call 0x12294e40 */
  push32(0x1229ec48u); f_12294e40();
  /* 1229ec48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ec4b mov dword ptr [0x122c082c], 0 */
  w32((uint32_t)(0x122c082c), (0x0u));
  /* 1229ec55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1229ec57:;
  /* 1229ec57 mov esp, ebp */
  ESP = (EBP);
  /* 1229ec59 pop ebp */
  EBP = (pop32());
  /* 1229ec5a ret  */
  ESPCHK(0x1229eb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec60 @ 0x1229ec60 (1423 bytes, 533 insns) */
void f_1229ec60(void) {
  FTRACE(0x1229ec60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229ec60 push ebp */
  push32((uint32_t)(EBP));
  /* 1229ec61 mov ebp, esp */
  EBP = (ESP);
  /* 1229ec63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229ec66 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1229ec6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229ec6f mov ax, word ptr [0x122c0866] */
  AX = (r16((uint32_t)(0x122c0866)));
  /* 1229ec75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229ec78 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ec7a mov cx, word ptr [0x122c0868] */
  CX = (r16((uint32_t)(0x122c0868)));
  /* 1229ec81 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229ec84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ec88 jne 0x1229ec92 */
  if (!C.zf) goto L_1229ec92;
  /* 1229ec8a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229ec8d jmp 0x1229f1eb */
  goto L_1229f1eb;
L_1229ec92:;
  /* 1229ec92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ec95 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ec98 push edx */
  push32((uint32_t)(EDX));
  /* 1229ec99 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1229ec9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ec9e push eax */
  push32((uint32_t)(EAX));
  /* 1229ec9f push 1 */
  push32((uint32_t)(0x1u));
  /* 1229eca1 call 0x122a2570 */
  push32(0x1229eca6u); f_122a2570();
  /* 1229eca6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229eca9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ecac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ecae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ecb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ecb4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ecb7 push edx */
  push32((uint32_t)(EDX));
  /* 1229ecb8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1229ecba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ecbd push eax */
  push32((uint32_t)(EAX));
  /* 1229ecbe push 1 */
  push32((uint32_t)(0x1u));
  /* 1229ecc0 call 0x122a2570 */
  push32(0x1229ecc5u); f_122a2570();
  /* 1229ecc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ecc8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229eccb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229eccd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ecd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ecd3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ecd6 push edx */
  push32((uint32_t)(EDX));
  /* 1229ecd7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1229ecd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ecdc push eax */
  push32((uint32_t)(EAX));
  /* 1229ecdd push 1 */
  push32((uint32_t)(0x1u));
  /* 1229ecdf call 0x122a2570 */
  push32(0x1229ece4u); f_122a2570();
  /* 1229ece4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ece7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ecea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ecec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ecef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ecf2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ecf5 push edx */
  push32((uint32_t)(EDX));
  /* 1229ecf6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1229ecf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ecfb push eax */
  push32((uint32_t)(EAX));
  /* 1229ecfc push 1 */
  push32((uint32_t)(0x1u));
  /* 1229ecfe call 0x122a2570 */
  push32(0x1229ed03u); f_122a2570();
  /* 1229ed03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ed06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ed09 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ed0b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ed0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ed11 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ed14 push edx */
  push32((uint32_t)(EDX));
  /* 1229ed15 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1229ed17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ed1a push eax */
  push32((uint32_t)(EAX));
  /* 1229ed1b push 1 */
  push32((uint32_t)(0x1u));
  /* 1229ed1d call 0x122a2570 */
  push32(0x1229ed22u); f_122a2570();
  /* 1229ed22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ed25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ed28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ed2a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ed2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ed30 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ed33 push edx */
  push32((uint32_t)(EDX));
  /* 1229ed34 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1229ed36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ed39 push eax */
  push32((uint32_t)(EAX));
  /* 1229ed3a push 1 */
  push32((uint32_t)(0x1u));
  /* 1229ed3c call 0x122a2570 */
  push32(0x1229ed41u); f_122a2570();
  /* 1229ed41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ed44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ed47 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ed49 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ed4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ed4f push edx */
  push32((uint32_t)(EDX));
  /* 1229ed50 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1229ed52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ed55 push eax */
  push32((uint32_t)(EAX));
  /* 1229ed56 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229ed58 call 0x122a2570 */
  push32(0x1229ed5du); f_122a2570();
  /* 1229ed5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ed60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ed63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ed65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ed68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ed6b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ed6e push edx */
  push32((uint32_t)(EDX));
  /* 1229ed6f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1229ed71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ed74 push eax */
  push32((uint32_t)(EAX));
  /* 1229ed75 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229ed77 call 0x122a2570 */
  push32(0x1229ed7cu); f_122a2570();
  /* 1229ed7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ed7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ed82 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ed84 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ed87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ed8a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ed8d push edx */
  push32((uint32_t)(EDX));
  /* 1229ed8e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1229ed90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ed93 push eax */
  push32((uint32_t)(EAX));
  /* 1229ed94 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229ed96 call 0x122a2570 */
  push32(0x1229ed9bu); f_122a2570();
  /* 1229ed9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ed9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229eda1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229eda3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229eda6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229eda9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229edac push edx */
  push32((uint32_t)(EDX));
  /* 1229edad push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1229edaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229edb2 push eax */
  push32((uint32_t)(EAX));
  /* 1229edb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229edb5 call 0x122a2570 */
  push32(0x1229edbau); f_122a2570();
  /* 1229edba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229edbd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229edc0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229edc2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229edc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229edc8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229edcb push edx */
  push32((uint32_t)(EDX));
  /* 1229edcc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1229edce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229edd1 push eax */
  push32((uint32_t)(EAX));
  /* 1229edd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229edd4 call 0x122a2570 */
  push32(0x1229edd9u); f_122a2570();
  /* 1229edd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229eddc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229eddf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ede1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ede4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ede7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229edea push edx */
  push32((uint32_t)(EDX));
  /* 1229edeb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1229eded mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229edf0 push eax */
  push32((uint32_t)(EAX));
  /* 1229edf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229edf3 call 0x122a2570 */
  push32(0x1229edf8u); f_122a2570();
  /* 1229edf8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229edfb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229edfe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ee00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ee03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ee06 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ee09 push edx */
  push32((uint32_t)(EDX));
  /* 1229ee0a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1229ee0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ee0f push eax */
  push32((uint32_t)(EAX));
  /* 1229ee10 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229ee12 call 0x122a2570 */
  push32(0x1229ee17u); f_122a2570();
  /* 1229ee17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ee1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ee1d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ee1f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ee22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ee25 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ee28 push edx */
  push32((uint32_t)(EDX));
  /* 1229ee29 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1229ee2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ee2e push eax */
  push32((uint32_t)(EAX));
  /* 1229ee2f push 1 */
  push32((uint32_t)(0x1u));
  /* 1229ee31 call 0x122a2570 */
  push32(0x1229ee36u); f_122a2570();
  /* 1229ee36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ee39 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ee3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ee3e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ee41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ee44 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ee47 push edx */
  push32((uint32_t)(EDX));
  /* 1229ee48 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1229ee4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ee4d push eax */
  push32((uint32_t)(EAX));
  /* 1229ee4e push 1 */
  push32((uint32_t)(0x1u));
  /* 1229ee50 call 0x122a2570 */
  push32(0x1229ee55u); f_122a2570();
  /* 1229ee55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ee58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ee5b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ee5d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ee60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ee63 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ee66 push edx */
  push32((uint32_t)(EDX));
  /* 1229ee67 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1229ee69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ee6c push eax */
  push32((uint32_t)(EAX));
  /* 1229ee6d push 1 */
  push32((uint32_t)(0x1u));
  /* 1229ee6f call 0x122a2570 */
  push32(0x1229ee74u); f_122a2570();
  /* 1229ee74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ee77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ee7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ee7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ee7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ee82 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ee85 push edx */
  push32((uint32_t)(EDX));
  /* 1229ee86 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1229ee88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ee8b push eax */
  push32((uint32_t)(EAX));
  /* 1229ee8c push 1 */
  push32((uint32_t)(0x1u));
  /* 1229ee8e call 0x122a2570 */
  push32(0x1229ee93u); f_122a2570();
  /* 1229ee93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ee96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ee99 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ee9b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ee9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229eea1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229eea4 push edx */
  push32((uint32_t)(EDX));
  /* 1229eea5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1229eea7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229eeaa push eax */
  push32((uint32_t)(EAX));
  /* 1229eeab push 1 */
  push32((uint32_t)(0x1u));
  /* 1229eead call 0x122a2570 */
  push32(0x1229eeb2u); f_122a2570();
  /* 1229eeb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229eeb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229eeb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229eeba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229eebd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229eec0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229eec3 push edx */
  push32((uint32_t)(EDX));
  /* 1229eec4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1229eec6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229eec9 push eax */
  push32((uint32_t)(EAX));
  /* 1229eeca push 1 */
  push32((uint32_t)(0x1u));
  /* 1229eecc call 0x122a2570 */
  push32(0x1229eed1u); f_122a2570();
  /* 1229eed1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229eed4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229eed7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229eed9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229eedc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229eedf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229eee2 push edx */
  push32((uint32_t)(EDX));
  /* 1229eee3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1229eee5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229eee8 push eax */
  push32((uint32_t)(EAX));
  /* 1229eee9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229eeeb call 0x122a2570 */
  push32(0x1229eef0u); f_122a2570();
  /* 1229eef0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229eef3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229eef6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229eef8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229eefb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229eefe add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ef01 push edx */
  push32((uint32_t)(EDX));
  /* 1229ef02 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1229ef04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ef07 push eax */
  push32((uint32_t)(EAX));
  /* 1229ef08 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229ef0a call 0x122a2570 */
  push32(0x1229ef0fu); f_122a2570();
  /* 1229ef0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ef12 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ef15 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ef17 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ef1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ef1d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ef20 push edx */
  push32((uint32_t)(EDX));
  /* 1229ef21 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1229ef23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ef26 push eax */
  push32((uint32_t)(EAX));
  /* 1229ef27 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229ef29 call 0x122a2570 */
  push32(0x1229ef2eu); f_122a2570();
  /* 1229ef2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ef31 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ef34 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ef36 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ef39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ef3c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ef3f push edx */
  push32((uint32_t)(EDX));
  /* 1229ef40 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1229ef42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ef45 push eax */
  push32((uint32_t)(EAX));
  /* 1229ef46 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229ef48 call 0x122a2570 */
  push32(0x1229ef4du); f_122a2570();
  /* 1229ef4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ef50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ef53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ef55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ef58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ef5b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ef5e push edx */
  push32((uint32_t)(EDX));
  /* 1229ef5f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1229ef61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ef64 push eax */
  push32((uint32_t)(EAX));
  /* 1229ef65 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229ef67 call 0x122a2570 */
  push32(0x1229ef6cu); f_122a2570();
  /* 1229ef6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ef6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ef72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ef74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ef77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ef7a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ef7d push edx */
  push32((uint32_t)(EDX));
  /* 1229ef7e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1229ef80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229ef83 push eax */
  push32((uint32_t)(EAX));
  /* 1229ef84 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229ef86 call 0x122a2570 */
  push32(0x1229ef8bu); f_122a2570();
  /* 1229ef8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ef8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229ef91 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229ef93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229ef96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229ef99 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ef9c push edx */
  push32((uint32_t)(EDX));
  /* 1229ef9d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1229ef9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229efa2 push eax */
  push32((uint32_t)(EAX));
  /* 1229efa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229efa5 call 0x122a2570 */
  push32(0x1229efaau); f_122a2570();
  /* 1229efaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229efad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229efb0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229efb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229efb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229efb8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229efbb push edx */
  push32((uint32_t)(EDX));
  /* 1229efbc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1229efbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229efc1 push eax */
  push32((uint32_t)(EAX));
  /* 1229efc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229efc4 call 0x122a2570 */
  push32(0x1229efc9u); f_122a2570();
  /* 1229efc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229efcc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229efcf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229efd1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229efd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229efd7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229efda push edx */
  push32((uint32_t)(EDX));
  /* 1229efdb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1229efdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229efe0 push eax */
  push32((uint32_t)(EAX));
  /* 1229efe1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229efe3 call 0x122a2570 */
  push32(0x1229efe8u); f_122a2570();
  /* 1229efe8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229efeb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229efee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229eff0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229eff3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229eff6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229eff9 push edx */
  push32((uint32_t)(EDX));
  /* 1229effa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1229effc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229efff push eax */
  push32((uint32_t)(EAX));
  /* 1229f000 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f002 call 0x122a2570 */
  push32(0x1229f007u); f_122a2570();
  /* 1229f007 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f00a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229f00d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f00f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229f012 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f015 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f018 push edx */
  push32((uint32_t)(EDX));
  /* 1229f019 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1229f01b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f01e push eax */
  push32((uint32_t)(EAX));
  /* 1229f01f push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f021 call 0x122a2570 */
  push32(0x1229f026u); f_122a2570();
  /* 1229f026 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f029 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229f02c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f02e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229f031 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f034 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f037 push edx */
  push32((uint32_t)(EDX));
  /* 1229f038 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1229f03a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f03d push eax */
  push32((uint32_t)(EAX));
  /* 1229f03e push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f040 call 0x122a2570 */
  push32(0x1229f045u); f_122a2570();
  /* 1229f045 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f048 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229f04b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f04d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229f050 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f053 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f056 push edx */
  push32((uint32_t)(EDX));
  /* 1229f057 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1229f059 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f05c push eax */
  push32((uint32_t)(EAX));
  /* 1229f05d push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f05f call 0x122a2570 */
  push32(0x1229f064u); f_122a2570();
  /* 1229f064 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f067 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229f06a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f06c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229f06f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f072 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f078 push edx */
  push32((uint32_t)(EDX));
  /* 1229f079 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1229f07b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f07e push eax */
  push32((uint32_t)(EAX));
  /* 1229f07f push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f081 call 0x122a2570 */
  push32(0x1229f086u); f_122a2570();
  /* 1229f086 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f089 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229f08c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f08e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229f091 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f094 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f09a push edx */
  push32((uint32_t)(EDX));
  /* 1229f09b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1229f09d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f0a0 push eax */
  push32((uint32_t)(EAX));
  /* 1229f0a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f0a3 call 0x122a2570 */
  push32(0x1229f0a8u); f_122a2570();
  /* 1229f0a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f0ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229f0ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f0b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229f0b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f0b6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f0bc push edx */
  push32((uint32_t)(EDX));
  /* 1229f0bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1229f0bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f0c2 push eax */
  push32((uint32_t)(EAX));
  /* 1229f0c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f0c5 call 0x122a2570 */
  push32(0x1229f0cau); f_122a2570();
  /* 1229f0ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f0cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229f0d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f0d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229f0d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f0d8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f0de push edx */
  push32((uint32_t)(EDX));
  /* 1229f0df push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1229f0e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f0e4 push eax */
  push32((uint32_t)(EAX));
  /* 1229f0e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f0e7 call 0x122a2570 */
  push32(0x1229f0ecu); f_122a2570();
  /* 1229f0ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f0ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229f0f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f0f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229f0f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f0fa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f100 push edx */
  push32((uint32_t)(EDX));
  /* 1229f101 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1229f103 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f106 push eax */
  push32((uint32_t)(EAX));
  /* 1229f107 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f109 call 0x122a2570 */
  push32(0x1229f10eu); f_122a2570();
  /* 1229f10e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f111 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229f114 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f116 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229f119 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f11c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f122 push edx */
  push32((uint32_t)(EDX));
  /* 1229f123 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1229f125 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f128 push eax */
  push32((uint32_t)(EAX));
  /* 1229f129 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f12b call 0x122a2570 */
  push32(0x1229f130u); f_122a2570();
  /* 1229f130 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f133 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229f136 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f138 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229f13b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f13e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f144 push edx */
  push32((uint32_t)(EDX));
  /* 1229f145 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1229f147 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f14a push eax */
  push32((uint32_t)(EAX));
  /* 1229f14b push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f14d call 0x122a2570 */
  push32(0x1229f152u); f_122a2570();
  /* 1229f152 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f155 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229f158 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f15a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229f15d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f160 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f166 push edx */
  push32((uint32_t)(EDX));
  /* 1229f167 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1229f169 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f16c push eax */
  push32((uint32_t)(EAX));
  /* 1229f16d push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f16f call 0x122a2570 */
  push32(0x1229f174u); f_122a2570();
  /* 1229f174 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f177 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229f17a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f17c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229f17f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f182 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f188 push edx */
  push32((uint32_t)(EDX));
  /* 1229f189 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1229f18b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229f18e push eax */
  push32((uint32_t)(EAX));
  /* 1229f18f push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f191 call 0x122a2570 */
  push32(0x1229f196u); f_122a2570();
  /* 1229f196 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f199 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229f19c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f19e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229f1a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f1a4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f1aa push edx */
  push32((uint32_t)(EDX));
  /* 1229f1ab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1229f1ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229f1b0 push eax */
  push32((uint32_t)(EAX));
  /* 1229f1b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f1b3 call 0x122a2570 */
  push32(0x1229f1b8u); f_122a2570();
  /* 1229f1b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f1bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229f1be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f1c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229f1c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f1c6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f1cc push edx */
  push32((uint32_t)(EDX));
  /* 1229f1cd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1229f1d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229f1d5 push eax */
  push32((uint32_t)(EAX));
  /* 1229f1d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f1d8 call 0x122a2570 */
  push32(0x1229f1ddu); f_122a2570();
  /* 1229f1dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f1e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229f1e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f1e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229f1e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1229f1eb:;
  /* 1229f1eb mov esp, ebp */
  ESP = (EBP);
  /* 1229f1ed pop ebp */
  EBP = (pop32());
  /* 1229f1ee ret  */
  ESPCHK(0x1229ec60u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1229f1f0 (779 bytes, 265 insns) */
void f_1229f1f0(void) {
  FTRACE(0x1229f1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229f1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229f1f1 mov ebp, esp */
  EBP = (ESP);
  /* 1229f1f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229f1f7 jne 0x1229f1fe */
  if (!C.zf) goto L_1229f1fe;
  /* 1229f1f9 jmp 0x1229f4f9 */
  goto L_1229f4f9;
L_1229f1fe:;
  /* 1229f1fe push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f200 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f203 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1229f206 push ecx */
  push32((uint32_t)(ECX));
  /* 1229f207 call 0x12294e40 */
  push32(0x1229f20cu); f_12294e40();
  /* 1229f20c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f20f push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f211 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f214 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1229f217 push eax */
  push32((uint32_t)(EAX));
  /* 1229f218 call 0x12294e40 */
  push32(0x1229f21du); f_12294e40();
  /* 1229f21d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f220 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f222 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f225 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1229f228 push edx */
  push32((uint32_t)(EDX));
  /* 1229f229 call 0x12294e40 */
  push32(0x1229f22eu); f_12294e40();
  /* 1229f22e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f231 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f233 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f236 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1229f239 push ecx */
  push32((uint32_t)(ECX));
  /* 1229f23a call 0x12294e40 */
  push32(0x1229f23fu); f_12294e40();
  /* 1229f23f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f242 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f244 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f247 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1229f24a push eax */
  push32((uint32_t)(EAX));
  /* 1229f24b call 0x12294e40 */
  push32(0x1229f250u); f_12294e40();
  /* 1229f250 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f253 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f255 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f258 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1229f25b push edx */
  push32((uint32_t)(EDX));
  /* 1229f25c call 0x12294e40 */
  push32(0x1229f261u); f_12294e40();
  /* 1229f261 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f264 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f269 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1229f26b push ecx */
  push32((uint32_t)(ECX));
  /* 1229f26c call 0x12294e40 */
  push32(0x1229f271u); f_12294e40();
  /* 1229f271 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f274 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f276 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f279 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1229f27c push eax */
  push32((uint32_t)(EAX));
  /* 1229f27d call 0x12294e40 */
  push32(0x1229f282u); f_12294e40();
  /* 1229f282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f285 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f287 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f28a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1229f28d push edx */
  push32((uint32_t)(EDX));
  /* 1229f28e call 0x12294e40 */
  push32(0x1229f293u); f_12294e40();
  /* 1229f293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f296 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f298 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f29b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1229f29e push ecx */
  push32((uint32_t)(ECX));
  /* 1229f29f call 0x12294e40 */
  push32(0x1229f2a4u); f_12294e40();
  /* 1229f2a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f2a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f2a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f2ac mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1229f2af push eax */
  push32((uint32_t)(EAX));
  /* 1229f2b0 call 0x12294e40 */
  push32(0x1229f2b5u); f_12294e40();
  /* 1229f2b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f2b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f2ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f2bd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1229f2c0 push edx */
  push32((uint32_t)(EDX));
  /* 1229f2c1 call 0x12294e40 */
  push32(0x1229f2c6u); f_12294e40();
  /* 1229f2c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f2c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f2cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f2ce mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1229f2d1 push ecx */
  push32((uint32_t)(ECX));
  /* 1229f2d2 call 0x12294e40 */
  push32(0x1229f2d7u); f_12294e40();
  /* 1229f2d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f2da push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f2dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f2df mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1229f2e2 push eax */
  push32((uint32_t)(EAX));
  /* 1229f2e3 call 0x12294e40 */
  push32(0x1229f2e8u); f_12294e40();
  /* 1229f2e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f2eb push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f2ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f2f0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1229f2f3 push edx */
  push32((uint32_t)(EDX));
  /* 1229f2f4 call 0x12294e40 */
  push32(0x1229f2f9u); f_12294e40();
  /* 1229f2f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f2fc push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f2fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f301 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1229f304 push ecx */
  push32((uint32_t)(ECX));
  /* 1229f305 call 0x12294e40 */
  push32(0x1229f30au); f_12294e40();
  /* 1229f30a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f30d push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f30f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f312 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1229f315 push eax */
  push32((uint32_t)(EAX));
  /* 1229f316 call 0x12294e40 */
  push32(0x1229f31bu); f_12294e40();
  /* 1229f31b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f31e push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f320 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f323 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1229f326 push edx */
  push32((uint32_t)(EDX));
  /* 1229f327 call 0x12294e40 */
  push32(0x1229f32cu); f_12294e40();
  /* 1229f32c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f32f push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f331 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f334 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1229f337 push ecx */
  push32((uint32_t)(ECX));
  /* 1229f338 call 0x12294e40 */
  push32(0x1229f33du); f_12294e40();
  /* 1229f33d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f340 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f342 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f345 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1229f348 push eax */
  push32((uint32_t)(EAX));
  /* 1229f349 call 0x12294e40 */
  push32(0x1229f34eu); f_12294e40();
  /* 1229f34e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f351 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f353 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f356 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1229f359 push edx */
  push32((uint32_t)(EDX));
  /* 1229f35a call 0x12294e40 */
  push32(0x1229f35fu); f_12294e40();
  /* 1229f35f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f362 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f367 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1229f36a push ecx */
  push32((uint32_t)(ECX));
  /* 1229f36b call 0x12294e40 */
  push32(0x1229f370u); f_12294e40();
  /* 1229f370 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f373 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f375 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f378 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1229f37b push eax */
  push32((uint32_t)(EAX));
  /* 1229f37c call 0x12294e40 */
  push32(0x1229f381u); f_12294e40();
  /* 1229f381 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f384 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f386 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f389 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1229f38c push edx */
  push32((uint32_t)(EDX));
  /* 1229f38d call 0x12294e40 */
  push32(0x1229f392u); f_12294e40();
  /* 1229f392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f395 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f397 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f39a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1229f39d push ecx */
  push32((uint32_t)(ECX));
  /* 1229f39e call 0x12294e40 */
  push32(0x1229f3a3u); f_12294e40();
  /* 1229f3a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f3a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f3a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f3ab mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1229f3ae push eax */
  push32((uint32_t)(EAX));
  /* 1229f3af call 0x12294e40 */
  push32(0x1229f3b4u); f_12294e40();
  /* 1229f3b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f3b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f3b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f3bc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1229f3bf push edx */
  push32((uint32_t)(EDX));
  /* 1229f3c0 call 0x12294e40 */
  push32(0x1229f3c5u); f_12294e40();
  /* 1229f3c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f3c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f3ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f3cd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1229f3d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1229f3d1 call 0x12294e40 */
  push32(0x1229f3d6u); f_12294e40();
  /* 1229f3d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f3d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f3db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f3de mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1229f3e1 push eax */
  push32((uint32_t)(EAX));
  /* 1229f3e2 call 0x12294e40 */
  push32(0x1229f3e7u); f_12294e40();
  /* 1229f3e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f3ea push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f3ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f3ef mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1229f3f2 push edx */
  push32((uint32_t)(EDX));
  /* 1229f3f3 call 0x12294e40 */
  push32(0x1229f3f8u); f_12294e40();
  /* 1229f3f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f3fb push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f3fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f400 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1229f403 push ecx */
  push32((uint32_t)(ECX));
  /* 1229f404 call 0x12294e40 */
  push32(0x1229f409u); f_12294e40();
  /* 1229f409 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f40c push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f40e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f411 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1229f414 push eax */
  push32((uint32_t)(EAX));
  /* 1229f415 call 0x12294e40 */
  push32(0x1229f41au); f_12294e40();
  /* 1229f41a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f41d push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f41f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f422 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1229f428 push edx */
  push32((uint32_t)(EDX));
  /* 1229f429 call 0x12294e40 */
  push32(0x1229f42eu); f_12294e40();
  /* 1229f42e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f431 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f433 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f436 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1229f43c push ecx */
  push32((uint32_t)(ECX));
  /* 1229f43d call 0x12294e40 */
  push32(0x1229f442u); f_12294e40();
  /* 1229f442 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f445 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f447 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f44a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1229f450 push eax */
  push32((uint32_t)(EAX));
  /* 1229f451 call 0x12294e40 */
  push32(0x1229f456u); f_12294e40();
  /* 1229f456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f459 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f45b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f45e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1229f464 push edx */
  push32((uint32_t)(EDX));
  /* 1229f465 call 0x12294e40 */
  push32(0x1229f46au); f_12294e40();
  /* 1229f46a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f46d push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f46f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f472 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1229f478 push ecx */
  push32((uint32_t)(ECX));
  /* 1229f479 call 0x12294e40 */
  push32(0x1229f47eu); f_12294e40();
  /* 1229f47e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f481 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f483 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f486 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1229f48c push eax */
  push32((uint32_t)(EAX));
  /* 1229f48d call 0x12294e40 */
  push32(0x1229f492u); f_12294e40();
  /* 1229f492 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f495 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f497 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f49a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1229f4a0 push edx */
  push32((uint32_t)(EDX));
  /* 1229f4a1 call 0x12294e40 */
  push32(0x1229f4a6u); f_12294e40();
  /* 1229f4a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f4a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f4ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f4ae mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1229f4b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1229f4b5 call 0x12294e40 */
  push32(0x1229f4bau); f_12294e40();
  /* 1229f4ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f4bd push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f4bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f4c2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1229f4c8 push eax */
  push32((uint32_t)(EAX));
  /* 1229f4c9 call 0x12294e40 */
  push32(0x1229f4ceu); f_12294e40();
  /* 1229f4ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f4d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f4d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f4d6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1229f4dc push edx */
  push32((uint32_t)(EDX));
  /* 1229f4dd call 0x12294e40 */
  push32(0x1229f4e2u); f_12294e40();
  /* 1229f4e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f4e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f4e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f4ea mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1229f4f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1229f4f1 call 0x12294e40 */
  push32(0x1229f4f6u); f_12294e40();
  /* 1229f4f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229f4f9:;
  /* 1229f4f9 pop ebp */
  EBP = (pop32());
  /* 1229f4fa ret  */
  ESPCHK(0x1229f1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f500 @ 0x1229f500 (678 bytes, 180 insns) */
void f_1229f500(void) {
  FTRACE(0x1229f500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229f500 push ebp */
  push32((uint32_t)(EBP));
  /* 1229f501 mov ebp, esp */
  EBP = (ESP);
  /* 1229f503 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229f506 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1229f50d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229f50f mov ax, word ptr [0x122c0862] */
  AX = (r16((uint32_t)(0x122c0862)));
  /* 1229f515 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229f518 cmp dword ptr [0x122c0808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229f51f je 0x1229f67a */
  if (C.zf) goto L_1229f67a;
  /* 1229f525 push 0x122c0830 */
  push32((uint32_t)(0x122c0830u));
  /* 1229f52a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1229f52c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f52f push ecx */
  push32((uint32_t)(ECX));
  /* 1229f530 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f532 call 0x122a2570 */
  push32(0x1229f537u); f_122a2570();
  /* 1229f537 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f53a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229f53d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1229f53f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1229f542 push 0x122c0834 */
  push32((uint32_t)(0x122c0834u));
  /* 1229f547 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1229f549 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f54c push eax */
  push32((uint32_t)(EAX));
  /* 1229f54d push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f54f call 0x122a2570 */
  push32(0x1229f554u); f_122a2570();
  /* 1229f554 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f557 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229f55a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f55c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229f55f push 0x122c0838 */
  push32((uint32_t)(0x122c0838u));
  /* 1229f564 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1229f566 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f569 push edx */
  push32((uint32_t)(EDX));
  /* 1229f56a push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f56c call 0x122a2570 */
  push32(0x1229f571u); f_122a2570();
  /* 1229f571 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f574 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229f577 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f579 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229f57c mov edx, dword ptr [0x122c0838] */
  EDX = (r32((uint32_t)(0x122c0838)));
  /* 1229f582 push edx */
  push32((uint32_t)(EDX));
  /* 1229f583 call 0x1229f7b0 */
  push32(0x1229f588u); f_1229f7b0();
  /* 1229f588 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f58b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229f58f je 0x1229f5e9 */
  if (C.zf) goto L_1229f5e9;
  /* 1229f591 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f593 mov eax, dword ptr [0x122c0830] */
  EAX = (r32((uint32_t)(0x122c0830)));
  /* 1229f598 push eax */
  push32((uint32_t)(EAX));
  /* 1229f599 call 0x12294e40 */
  push32(0x1229f59eu); f_12294e40();
  /* 1229f59e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f5a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f5a3 mov ecx, dword ptr [0x122c0834] */
  ECX = (r32((uint32_t)(0x122c0834)));
  /* 1229f5a9 push ecx */
  push32((uint32_t)(ECX));
  /* 1229f5aa call 0x12294e40 */
  push32(0x1229f5afu); f_12294e40();
  /* 1229f5af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f5b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f5b4 mov edx, dword ptr [0x122c0838] */
  EDX = (r32((uint32_t)(0x122c0838)));
  /* 1229f5ba push edx */
  push32((uint32_t)(EDX));
  /* 1229f5bb call 0x12294e40 */
  push32(0x1229f5c0u); f_12294e40();
  /* 1229f5c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f5c3 mov dword ptr [0x122c0830], 0 */
  w32((uint32_t)(0x122c0830), (0x0u));
  /* 1229f5cd mov dword ptr [0x122c0834], 0 */
  w32((uint32_t)(0x122c0834), (0x0u));
  /* 1229f5d7 mov dword ptr [0x122c0838], 0 */
  w32((uint32_t)(0x122c0838), (0x0u));
  /* 1229f5e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229f5e4 jmp 0x1229f7a2 */
  goto L_1229f7a2;
L_1229f5e9:;
  /* 1229f5e9 mov eax, dword ptr [0x122bfd88] */
  EAX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f5ee cmp dword ptr [eax], 0x122bfd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x122bfd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229f5f4 je 0x1229f630 */
  if (C.zf) goto L_1229f630;
  /* 1229f5f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f5f8 mov ecx, dword ptr [0x122bfd88] */
  ECX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f5fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1229f600 push edx */
  push32((uint32_t)(EDX));
  /* 1229f601 call 0x12294e40 */
  push32(0x1229f606u); f_12294e40();
  /* 1229f606 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f609 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f60b mov eax, dword ptr [0x122bfd88] */
  EAX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f610 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1229f613 push ecx */
  push32((uint32_t)(ECX));
  /* 1229f614 call 0x12294e40 */
  push32(0x1229f619u); f_12294e40();
  /* 1229f619 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f61c push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f61e mov edx, dword ptr [0x122bfd88] */
  EDX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f624 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1229f627 push eax */
  push32((uint32_t)(EAX));
  /* 1229f628 call 0x12294e40 */
  push32(0x1229f62du); f_12294e40();
  /* 1229f62d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229f630:;
  /* 1229f630 mov ecx, dword ptr [0x122bfd88] */
  ECX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f636 mov edx, dword ptr [0x122c0830] */
  EDX = (r32((uint32_t)(0x122c0830)));
  /* 1229f63c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1229f63e mov eax, dword ptr [0x122bfd88] */
  EAX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f643 mov ecx, dword ptr [0x122c0834] */
  ECX = (r32((uint32_t)(0x122c0834)));
  /* 1229f649 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1229f64c mov edx, dword ptr [0x122bfd88] */
  EDX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f652 mov eax, dword ptr [0x122c0838] */
  EAX = (r32((uint32_t)(0x122c0838)));
  /* 1229f657 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1229f65a mov ecx, dword ptr [0x122bfd88] */
  ECX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f660 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1229f662 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1229f664 mov byte ptr [0x122beea8], al */
  w8((uint32_t)(0x122beea8), (AL));
  /* 1229f669 mov dword ptr [0x122beeac], 1 */
  w32((uint32_t)(0x122beeac), (0x1u));
  /* 1229f673 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229f675 jmp 0x1229f7a2 */
  goto L_1229f7a2;
L_1229f67a:;
  /* 1229f67a push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f67c mov ecx, dword ptr [0x122c0830] */
  ECX = (r32((uint32_t)(0x122c0830)));
  /* 1229f682 push ecx */
  push32((uint32_t)(ECX));
  /* 1229f683 call 0x12294e40 */
  push32(0x1229f688u); f_12294e40();
  /* 1229f688 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f68b push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f68d mov edx, dword ptr [0x122c0834] */
  EDX = (r32((uint32_t)(0x122c0834)));
  /* 1229f693 push edx */
  push32((uint32_t)(EDX));
  /* 1229f694 call 0x12294e40 */
  push32(0x1229f699u); f_12294e40();
  /* 1229f699 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f69c push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f69e mov eax, dword ptr [0x122c0838] */
  EAX = (r32((uint32_t)(0x122c0838)));
  /* 1229f6a3 push eax */
  push32((uint32_t)(EAX));
  /* 1229f6a4 call 0x12294e40 */
  push32(0x1229f6a9u); f_12294e40();
  /* 1229f6a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f6ac mov dword ptr [0x122c0830], 0 */
  w32((uint32_t)(0x122c0830), (0x0u));
  /* 1229f6b6 mov dword ptr [0x122c0834], 0 */
  w32((uint32_t)(0x122c0834), (0x0u));
  /* 1229f6c0 mov dword ptr [0x122c0838], 0 */
  w32((uint32_t)(0x122c0838), (0x0u));
  /* 1229f6ca push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1229f6cf push 0x122bc3c4 */
  push32((uint32_t)(0x122bc3c4u));
  /* 1229f6d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f6d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f6d8 call 0x122943b0 */
  push32(0x1229f6ddu); f_122943b0();
  /* 1229f6dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f6e0 mov ecx, dword ptr [0x122bfd88] */
  ECX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f6e6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1229f6e8 mov edx, dword ptr [0x122bfd88] */
  EDX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f6ee cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229f6f1 jne 0x1229f6fb */
  if (!C.zf) goto L_1229f6fb;
  /* 1229f6f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229f6f6 jmp 0x1229f7a2 */
  goto L_1229f7a2;
L_1229f6fb:;
  /* 1229f6fb push 0x122bc394 */
  push32((uint32_t)(0x122bc394u));
  /* 1229f700 mov eax, dword ptr [0x122bfd88] */
  EAX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f705 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1229f707 push ecx */
  push32((uint32_t)(ECX));
  /* 1229f708 call 0x12297360 */
  push32(0x1229f70du); f_12297360();
  /* 1229f70d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f710 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1229f715 push 0x122bc3c4 */
  push32((uint32_t)(0x122bc3c4u));
  /* 1229f71a push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f71c push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f71e call 0x122943b0 */
  push32(0x1229f723u); f_122943b0();
  /* 1229f723 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f726 mov edx, dword ptr [0x122bfd88] */
  EDX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f72c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1229f72f mov eax, dword ptr [0x122bfd88] */
  EAX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f734 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229f738 jne 0x1229f73f */
  if (!C.zf) goto L_1229f73f;
  /* 1229f73a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229f73d jmp 0x1229f7a2 */
  goto L_1229f7a2;
L_1229f73f:;
  /* 1229f73f mov ecx, dword ptr [0x122bfd88] */
  ECX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f745 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1229f748 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1229f74b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1229f750 push 0x122bc3c4 */
  push32((uint32_t)(0x122bc3c4u));
  /* 1229f755 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f757 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f759 call 0x122943b0 */
  push32(0x1229f75eu); f_122943b0();
  /* 1229f75e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f761 mov ecx, dword ptr [0x122bfd88] */
  ECX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f767 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1229f76a mov edx, dword ptr [0x122bfd88] */
  EDX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f770 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229f774 jne 0x1229f77b */
  if (!C.zf) goto L_1229f77b;
  /* 1229f776 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229f779 jmp 0x1229f7a2 */
  goto L_1229f7a2;
L_1229f77b:;
  /* 1229f77b mov eax, dword ptr [0x122bfd88] */
  EAX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f780 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1229f783 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1229f786 mov edx, dword ptr [0x122bfd88] */
  EDX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f78c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1229f78e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1229f790 mov byte ptr [0x122beea8], cl */
  w8((uint32_t)(0x122beea8), (CL));
  /* 1229f796 mov dword ptr [0x122beeac], 1 */
  w32((uint32_t)(0x122beeac), (0x1u));
  /* 1229f7a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1229f7a2:;
  /* 1229f7a2 mov esp, ebp */
  ESP = (EBP);
  /* 1229f7a4 pop ebp */
  EBP = (pop32());
  /* 1229f7a5 ret  */
  ESPCHK(0x1229f500u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1229f7b0 (125 bytes, 49 insns) */
void f_1229f7b0(void) {
  FTRACE(0x1229f7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229f7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229f7b1 mov ebp, esp */
  EBP = (ESP);
  /* 1229f7b3 push ecx */
  push32((uint32_t)(ECX));
L_1229f7b4:;
  /* 1229f7b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f7b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1229f7ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229f7bc je 0x1229f829 */
  if (C.zf) goto L_1229f829;
  /* 1229f7be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f7c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1229f7c4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229f7c7 jl 0x1229f7ed */
  if ((C.sf!=C.of)) goto L_1229f7ed;
  /* 1229f7c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f7cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1229f7cf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229f7d2 jg 0x1229f7ed */
  if ((!C.zf&&C.sf==C.of)) goto L_1229f7ed;
  /* 1229f7d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f7d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1229f7da sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229f7dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f7e0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1229f7e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f7e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f7e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1229f7eb jmp 0x1229f827 */
  goto L_1229f827;
L_1229f7ed:;
  /* 1229f7ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f7f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1229f7f3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229f7f6 jne 0x1229f81e */
  if (!C.zf) goto L_1229f81e;
  /* 1229f7f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f7fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1229f7fe:;
  /* 1229f7fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f801 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f804 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1229f807 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1229f809 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f80c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f80f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1229f812 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f815 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1229f818 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229f81a jne 0x1229f7fe */
  if (!C.zf) goto L_1229f7fe;
  /* 1229f81c jmp 0x1229f827 */
  goto L_1229f827;
L_1229f81e:;
  /* 1229f81e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f821 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f824 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1229f827:;
  /* 1229f827 jmp 0x1229f7b4 */
  goto L_1229f7b4;
L_1229f829:;
  /* 1229f829 mov esp, ebp */
  ESP = (EBP);
  /* 1229f82b pop ebp */
  EBP = (pop32());
  /* 1229f82c ret  */
  ESPCHK(0x1229f7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f830 @ 0x1229f830 (304 bytes, 85 insns) */
void f_1229f830(void) {
  FTRACE(0x1229f830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229f830 push ebp */
  push32((uint32_t)(EBP));
  /* 1229f831 mov ebp, esp */
  EBP = (ESP);
  /* 1229f833 push ecx */
  push32((uint32_t)(ECX));
  /* 1229f834 cmp dword ptr [0x122c0804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229f83b je 0x1229f8fc */
  if (C.zf) goto L_1229f8fc;
  /* 1229f841 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1229f843 push 0x122bc3d0 */
  push32((uint32_t)(0x122bc3d0u));
  /* 1229f848 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f84a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1229f84c push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f84e call 0x122947c0 */
  push32(0x1229f853u); f_122947c0();
  /* 1229f853 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f856 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229f859 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229f85d jne 0x1229f869 */
  if (!C.zf) goto L_1229f869;
  /* 1229f85f mov eax, 1 */
  EAX = (0x1u);
  /* 1229f864 jmp 0x1229f95c */
  goto L_1229f95c;
L_1229f869:;
  /* 1229f869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f86c push eax */
  push32((uint32_t)(EAX));
  /* 1229f86d call 0x1229f960 */
  push32(0x1229f872u); f_1229f960();
  /* 1229f872 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f875 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229f877 je 0x1229f89d */
  if (C.zf) goto L_1229f89d;
  /* 1229f879 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f87c push ecx */
  push32((uint32_t)(ECX));
  /* 1229f87d call 0x1229fbf0 */
  push32(0x1229f882u); f_1229fbf0();
  /* 1229f882 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f885 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f887 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f88a push edx */
  push32((uint32_t)(EDX));
  /* 1229f88b call 0x12294e40 */
  push32(0x1229f890u); f_12294e40();
  /* 1229f890 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f893 mov eax, 1 */
  EAX = (0x1u);
  /* 1229f898 jmp 0x1229f95c */
  goto L_1229f95c;
L_1229f89d:;
  /* 1229f89d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f8a0 mov ecx, dword ptr [0x122bfd88] */
  ECX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f8a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1229f8a8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1229f8aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f8ad mov ecx, dword ptr [0x122bfd88] */
  ECX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f8b3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1229f8b6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1229f8b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f8bc mov ecx, dword ptr [0x122bfd88] */
  ECX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f8c2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1229f8c5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1229f8c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f8cb mov dword ptr [0x122bfd88], eax */
  w32((uint32_t)(0x122bfd88), (EAX));
  /* 1229f8d0 mov ecx, dword ptr [0x122c083c] */
  ECX = (r32((uint32_t)(0x122c083c)));
  /* 1229f8d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1229f8d7 call 0x1229fbf0 */
  push32(0x1229f8dcu); f_1229fbf0();
  /* 1229f8dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f8df push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f8e1 mov edx, dword ptr [0x122c083c] */
  EDX = (r32((uint32_t)(0x122c083c)));
  /* 1229f8e7 push edx */
  push32((uint32_t)(EDX));
  /* 1229f8e8 call 0x12294e40 */
  push32(0x1229f8edu); f_12294e40();
  /* 1229f8ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f8f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f8f3 mov dword ptr [0x122c083c], eax */
  w32((uint32_t)(0x122c083c), (EAX));
  /* 1229f8f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229f8fa jmp 0x1229f95c */
  goto L_1229f95c;
L_1229f8fc:;
  /* 1229f8fc mov ecx, dword ptr [0x122bfd88] */
  ECX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f902 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1229f904 mov dword ptr [0x122bfd58], edx */
  w32((uint32_t)(0x122bfd58), (EDX));
  /* 1229f90a mov eax, dword ptr [0x122bfd88] */
  EAX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f90f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1229f912 mov dword ptr [0x122bfd5c], ecx */
  w32((uint32_t)(0x122bfd5c), (ECX));
  /* 1229f918 mov edx, dword ptr [0x122bfd88] */
  EDX = (r32((uint32_t)(0x122bfd88)));
  /* 1229f91e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1229f921 mov dword ptr [0x122bfd60], eax */
  w32((uint32_t)(0x122bfd60), (EAX));
  /* 1229f926 mov dword ptr [0x122bfd88], 0x122bfd58 */
  w32((uint32_t)(0x122bfd88), (0x122bfd58u));
  /* 1229f930 mov ecx, dword ptr [0x122c083c] */
  ECX = (r32((uint32_t)(0x122c083c)));
  /* 1229f936 push ecx */
  push32((uint32_t)(ECX));
  /* 1229f937 call 0x1229fbf0 */
  push32(0x1229f93cu); f_1229fbf0();
  /* 1229f93c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f93f push 2 */
  push32((uint32_t)(0x2u));
  /* 1229f941 mov edx, dword ptr [0x122c083c] */
  EDX = (r32((uint32_t)(0x122c083c)));
  /* 1229f947 push edx */
  push32((uint32_t)(EDX));
  /* 1229f948 call 0x12294e40 */
  push32(0x1229f94du); f_12294e40();
  /* 1229f94d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f950 mov dword ptr [0x122c083c], 0 */
  w32((uint32_t)(0x122c083c), (0x0u));
  /* 1229f95a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1229f95c:;
  /* 1229f95c mov esp, ebp */
  ESP = (EBP);
  /* 1229f95e pop ebp */
  EBP = (pop32());
  /* 1229f95f ret  */
  ESPCHK(0x1229f830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f960 @ 0x1229f960 (525 bytes, 200 insns) */
void f_1229f960(void) {
  FTRACE(0x1229f960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229f960 push ebp */
  push32((uint32_t)(EBP));
  /* 1229f961 mov ebp, esp */
  EBP = (ESP);
  /* 1229f963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229f966 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1229f96d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229f96f mov ax, word ptr [0x122c085c] */
  AX = (r16((uint32_t)(0x122c085c)));
  /* 1229f975 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229f978 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229f97c jne 0x1229f986 */
  if (!C.zf) goto L_1229f986;
  /* 1229f97e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229f981 jmp 0x1229fb69 */
  goto L_1229fb69;
L_1229f986:;
  /* 1229f986 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f989 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f98c push ecx */
  push32((uint32_t)(ECX));
  /* 1229f98d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1229f98f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f992 push edx */
  push32((uint32_t)(EDX));
  /* 1229f993 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f995 call 0x122a2570 */
  push32(0x1229f99au); f_122a2570();
  /* 1229f99a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f99d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229f9a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f9a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229f9a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f9a8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f9ab push edx */
  push32((uint32_t)(EDX));
  /* 1229f9ac push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1229f9ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f9b1 push eax */
  push32((uint32_t)(EAX));
  /* 1229f9b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f9b4 call 0x122a2570 */
  push32(0x1229f9b9u); f_122a2570();
  /* 1229f9b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f9bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229f9bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f9c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229f9c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f9c7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f9ca push edx */
  push32((uint32_t)(EDX));
  /* 1229f9cb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1229f9cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f9d0 push eax */
  push32((uint32_t)(EAX));
  /* 1229f9d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f9d3 call 0x122a2570 */
  push32(0x1229f9d8u); f_122a2570();
  /* 1229f9d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f9db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229f9de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f9e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229f9e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229f9e6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f9e9 push edx */
  push32((uint32_t)(EDX));
  /* 1229f9ea push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1229f9ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229f9ef push eax */
  push32((uint32_t)(EAX));
  /* 1229f9f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229f9f2 call 0x122a2570 */
  push32(0x1229f9f7u); f_122a2570();
  /* 1229f9f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229f9fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229f9fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229f9ff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229fa02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fa05 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fa08 push edx */
  push32((uint32_t)(EDX));
  /* 1229fa09 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1229fa0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229fa0e push eax */
  push32((uint32_t)(EAX));
  /* 1229fa0f push 1 */
  push32((uint32_t)(0x1u));
  /* 1229fa11 call 0x122a2570 */
  push32(0x1229fa16u); f_122a2570();
  /* 1229fa16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fa19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229fa1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229fa1e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229fa21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fa24 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1229fa27 push eax */
  push32((uint32_t)(EAX));
  /* 1229fa28 call 0x1229fb70 */
  push32(0x1229fa2du); f_1229fb70();
  /* 1229fa2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fa30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fa33 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fa36 push ecx */
  push32((uint32_t)(ECX));
  /* 1229fa37 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1229fa39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229fa3c push edx */
  push32((uint32_t)(EDX));
  /* 1229fa3d push 1 */
  push32((uint32_t)(0x1u));
  /* 1229fa3f call 0x122a2570 */
  push32(0x1229fa44u); f_122a2570();
  /* 1229fa44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fa47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229fa4a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229fa4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229fa4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fa52 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fa55 push edx */
  push32((uint32_t)(EDX));
  /* 1229fa56 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1229fa58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229fa5b push eax */
  push32((uint32_t)(EAX));
  /* 1229fa5c push 1 */
  push32((uint32_t)(0x1u));
  /* 1229fa5e call 0x122a2570 */
  push32(0x1229fa63u); f_122a2570();
  /* 1229fa63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fa66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229fa69 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229fa6b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229fa6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fa71 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fa74 push edx */
  push32((uint32_t)(EDX));
  /* 1229fa75 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1229fa77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229fa7a push eax */
  push32((uint32_t)(EAX));
  /* 1229fa7b push 0 */
  push32((uint32_t)(0x0u));
  /* 1229fa7d call 0x122a2570 */
  push32(0x1229fa82u); f_122a2570();
  /* 1229fa82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fa85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229fa88 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229fa8a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229fa8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fa90 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fa93 push edx */
  push32((uint32_t)(EDX));
  /* 1229fa94 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1229fa96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229fa99 push eax */
  push32((uint32_t)(EAX));
  /* 1229fa9a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229fa9c call 0x122a2570 */
  push32(0x1229faa1u); f_122a2570();
  /* 1229faa1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229faa4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229faa7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229faa9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229faac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229faaf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fab2 push edx */
  push32((uint32_t)(EDX));
  /* 1229fab3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1229fab5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229fab8 push eax */
  push32((uint32_t)(EAX));
  /* 1229fab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229fabb call 0x122a2570 */
  push32(0x1229fac0u); f_122a2570();
  /* 1229fac0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fac3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229fac6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229fac8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229facb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229face add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fad1 push edx */
  push32((uint32_t)(EDX));
  /* 1229fad2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1229fad4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229fad7 push eax */
  push32((uint32_t)(EAX));
  /* 1229fad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229fada call 0x122a2570 */
  push32(0x1229fadfu); f_122a2570();
  /* 1229fadf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fae2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229fae5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229fae7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229faea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229faed add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229faf0 push edx */
  push32((uint32_t)(EDX));
  /* 1229faf1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1229faf3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229faf6 push eax */
  push32((uint32_t)(EAX));
  /* 1229faf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229faf9 call 0x122a2570 */
  push32(0x1229fafeu); f_122a2570();
  /* 1229fafe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fb01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229fb04 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229fb06 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229fb09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fb0c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fb0f push edx */
  push32((uint32_t)(EDX));
  /* 1229fb10 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1229fb12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229fb15 push eax */
  push32((uint32_t)(EAX));
  /* 1229fb16 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229fb18 call 0x122a2570 */
  push32(0x1229fb1du); f_122a2570();
  /* 1229fb1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fb20 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229fb23 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229fb25 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229fb28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fb2b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fb2e push edx */
  push32((uint32_t)(EDX));
  /* 1229fb2f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1229fb31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229fb34 push eax */
  push32((uint32_t)(EAX));
  /* 1229fb35 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229fb37 call 0x122a2570 */
  push32(0x1229fb3cu); f_122a2570();
  /* 1229fb3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fb3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229fb42 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229fb44 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229fb47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fb4a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fb4d push edx */
  push32((uint32_t)(EDX));
  /* 1229fb4e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1229fb50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229fb53 push eax */
  push32((uint32_t)(EAX));
  /* 1229fb54 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229fb56 call 0x122a2570 */
  push32(0x1229fb5bu); f_122a2570();
  /* 1229fb5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fb5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229fb61 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1229fb63 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1229fb66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1229fb69:;
  /* 1229fb69 mov esp, ebp */
  ESP = (EBP);
  /* 1229fb6b pop ebp */
  EBP = (pop32());
  /* 1229fb6c ret  */
  ESPCHK(0x1229f960u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1229fb70 (125 bytes, 49 insns) */
void f_1229fb70(void) {
  FTRACE(0x1229fb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229fb70 push ebp */
  push32((uint32_t)(EBP));
  /* 1229fb71 mov ebp, esp */
  EBP = (ESP);
  /* 1229fb73 push ecx */
  push32((uint32_t)(ECX));
L_1229fb74:;
  /* 1229fb74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fb77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1229fb7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229fb7c je 0x1229fbe9 */
  if (C.zf) goto L_1229fbe9;
  /* 1229fb7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fb81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1229fb84 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229fb87 jl 0x1229fbad */
  if ((C.sf!=C.of)) goto L_1229fbad;
  /* 1229fb89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fb8c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1229fb8f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229fb92 jg 0x1229fbad */
  if ((!C.zf&&C.sf==C.of)) goto L_1229fbad;
  /* 1229fb94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fb97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1229fb9a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229fb9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fba0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1229fba2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fba5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fba8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1229fbab jmp 0x1229fbe7 */
  goto L_1229fbe7;
L_1229fbad:;
  /* 1229fbad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fbb0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1229fbb3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229fbb6 jne 0x1229fbde */
  if (!C.zf) goto L_1229fbde;
  /* 1229fbb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fbbb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1229fbbe:;
  /* 1229fbbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229fbc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229fbc4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1229fbc7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1229fbc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229fbcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fbcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1229fbd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229fbd5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1229fbd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229fbda jne 0x1229fbbe */
  if (!C.zf) goto L_1229fbbe;
  /* 1229fbdc jmp 0x1229fbe7 */
  goto L_1229fbe7;
L_1229fbde:;
  /* 1229fbde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fbe1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fbe4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1229fbe7:;
  /* 1229fbe7 jmp 0x1229fb74 */
  goto L_1229fb74;
L_1229fbe9:;
  /* 1229fbe9 mov esp, ebp */
  ESP = (EBP);
  /* 1229fbeb pop ebp */
  EBP = (pop32());
  /* 1229fbec ret  */
  ESPCHK(0x1229fb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbf0 @ 0x1229fbf0 (147 bytes, 52 insns) */
void f_1229fbf0(void) {
  FTRACE(0x1229fbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229fbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1229fbf1 mov ebp, esp */
  EBP = (ESP);
  /* 1229fbf3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229fbf7 jne 0x1229fbfe */
  if (!C.zf) goto L_1229fbfe;
  /* 1229fbf9 jmp 0x1229fc81 */
  goto L_1229fc81;
L_1229fbfe:;
  /* 1229fbfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fc01 cmp dword ptr [eax + 0xc], 0x122c0898 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x122c0898u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229fc08 je 0x1229fc81 */
  if (C.zf) goto L_1229fc81;
  /* 1229fc0a push 2 */
  push32((uint32_t)(0x2u));
  /* 1229fc0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fc0f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1229fc12 push edx */
  push32((uint32_t)(EDX));
  /* 1229fc13 call 0x12294e40 */
  push32(0x1229fc18u); f_12294e40();
  /* 1229fc18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fc1b push 2 */
  push32((uint32_t)(0x2u));
  /* 1229fc1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fc20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1229fc23 push ecx */
  push32((uint32_t)(ECX));
  /* 1229fc24 call 0x12294e40 */
  push32(0x1229fc29u); f_12294e40();
  /* 1229fc29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fc2c push 2 */
  push32((uint32_t)(0x2u));
  /* 1229fc2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fc31 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1229fc34 push eax */
  push32((uint32_t)(EAX));
  /* 1229fc35 call 0x12294e40 */
  push32(0x1229fc3au); f_12294e40();
  /* 1229fc3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fc3d push 2 */
  push32((uint32_t)(0x2u));
  /* 1229fc3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fc42 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1229fc45 push edx */
  push32((uint32_t)(EDX));
  /* 1229fc46 call 0x12294e40 */
  push32(0x1229fc4bu); f_12294e40();
  /* 1229fc4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fc4e push 2 */
  push32((uint32_t)(0x2u));
  /* 1229fc50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fc53 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1229fc56 push ecx */
  push32((uint32_t)(ECX));
  /* 1229fc57 call 0x12294e40 */
  push32(0x1229fc5cu); f_12294e40();
  /* 1229fc5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fc5f push 2 */
  push32((uint32_t)(0x2u));
  /* 1229fc61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fc64 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1229fc67 push eax */
  push32((uint32_t)(EAX));
  /* 1229fc68 call 0x12294e40 */
  push32(0x1229fc6du); f_12294e40();
  /* 1229fc6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fc70 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229fc72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229fc75 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1229fc78 push edx */
  push32((uint32_t)(EDX));
  /* 1229fc79 call 0x12294e40 */
  push32(0x1229fc7eu); f_12294e40();
  /* 1229fc7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229fc81:;
  /* 1229fc81 pop ebp */
  EBP = (pop32());
  /* 1229fc82 ret  */
  ESPCHK(0x1229fbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc90 @ 0x1229fc90 (928 bytes, 284 insns) */
void f_1229fc90(void) {
  FTRACE(0x1229fc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229fc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1229fc91 mov ebp, esp */
  EBP = (ESP);
  /* 1229fc93 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229fc96 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1229fc9d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1229fca4 cmp dword ptr [0x122c0800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229fcab je 0x1229ffe1 */
  if (C.zf) goto L_1229ffe1;
  /* 1229fcb1 cmp dword ptr [0x122c0810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229fcb8 jne 0x1229fce0 */
  if (!C.zf) goto L_1229fce0;
  /* 1229fcba push 0x122c0810 */
  push32((uint32_t)(0x122c0810u));
  /* 1229fcbf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1229fcc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229fcc6 mov ax, word ptr [0x122c0854] */
  AX = (r16((uint32_t)(0x122c0854)));
  /* 1229fccc push eax */
  push32((uint32_t)(EAX));
  /* 1229fccd push 0 */
  push32((uint32_t)(0x0u));
  /* 1229fccf call 0x122a2570 */
  push32(0x1229fcd4u); f_122a2570();
  /* 1229fcd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fcd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229fcd9 je 0x1229fce0 */
  if (C.zf) goto L_1229fce0;
  /* 1229fcdb jmp 0x1229ffa2 */
  goto L_1229ffa2;
L_1229fce0:;
  /* 1229fce0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1229fce2 push 0x122bc3dc */
  push32((uint32_t)(0x122bc3dcu));
  /* 1229fce7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229fce9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1229fcee call 0x122943b0 */
  push32(0x1229fcf3u); f_122943b0();
  /* 1229fcf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fcf6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1229fcf9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1229fcfb push 0x122bc3dc */
  push32((uint32_t)(0x122bc3dcu));
  /* 1229fd00 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229fd02 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1229fd07 call 0x122943b0 */
  push32(0x1229fd0cu); f_122943b0();
  /* 1229fd0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fd0f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1229fd12 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1229fd14 push 0x122bc3dc */
  push32((uint32_t)(0x122bc3dcu));
  /* 1229fd19 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229fd1b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1229fd20 call 0x122943b0 */
  push32(0x1229fd25u); f_122943b0();
  /* 1229fd25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fd28 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1229fd2b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1229fd2d push 0x122bc3dc */
  push32((uint32_t)(0x122bc3dcu));
  /* 1229fd32 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229fd34 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1229fd39 call 0x122943b0 */
  push32(0x1229fd3eu); f_122943b0();
  /* 1229fd3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fd41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1229fd44 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229fd48 je 0x1229fd5c */
  if (C.zf) goto L_1229fd5c;
  /* 1229fd4a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229fd4e je 0x1229fd5c */
  if (C.zf) goto L_1229fd5c;
  /* 1229fd50 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229fd54 je 0x1229fd5c */
  if (C.zf) goto L_1229fd5c;
  /* 1229fd56 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229fd5a jne 0x1229fd61 */
  if (!C.zf) goto L_1229fd61;
L_1229fd5c:;
  /* 1229fd5c jmp 0x1229ffa2 */
  goto L_1229ffa2;
L_1229fd61:;
  /* 1229fd61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229fd64 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1229fd67 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1229fd6e jmp 0x1229fd79 */
  goto L_1229fd79;
L_1229fd70:;
  /* 1229fd70 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229fd73 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fd76 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1229fd79:;
  /* 1229fd79 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229fd80 jge 0x1229fd95 */
  if ((C.sf==C.of)) goto L_1229fd95;
  /* 1229fd82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229fd85 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1229fd88 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1229fd8a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229fd8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fd90 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1229fd93 jmp 0x1229fd70 */
  goto L_1229fd70;
L_1229fd95:;
  /* 1229fd95 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1229fd98 push eax */
  push32((uint32_t)(EAX));
  /* 1229fd99 mov ecx, dword ptr [0x122c0810] */
  ECX = (r32((uint32_t)(0x122c0810)));
  /* 1229fd9f push ecx */
  push32((uint32_t)(ECX));
  /* 1229fda0 call dword ptr [0x122c3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3330))), 0x1229fda6u);
  /* 1229fda6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229fda8 jne 0x1229fdaf */
  if (!C.zf) goto L_1229fdaf;
  /* 1229fdaa jmp 0x1229ffa2 */
  goto L_1229ffa2;
L_1229fdaf:;
  /* 1229fdaf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229fdb3 jbe 0x1229fdba */
  if ((C.cf||C.zf)) goto L_1229fdba;
  /* 1229fdb5 jmp 0x1229ffa2 */
  goto L_1229ffa2;
L_1229fdba:;
  /* 1229fdba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1229fdbd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1229fdc3 mov dword ptr [0x122beea4], edx */
  w32((uint32_t)(0x122beea4), (EDX));
  /* 1229fdc9 cmp dword ptr [0x122beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229fdd0 jle 0x1229fe29 */
  if ((C.zf||C.sf!=C.of)) goto L_1229fe29;
  /* 1229fdd2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1229fdd5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1229fdd8 jmp 0x1229fde3 */
  goto L_1229fde3;
L_1229fdda:;
  /* 1229fdda mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229fddd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fde0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1229fde3:;
  /* 1229fde3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229fde6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229fde8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1229fdea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229fdec je 0x1229fe29 */
  if (C.zf) goto L_1229fe29;
  /* 1229fdee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229fdf1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229fdf3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1229fdf6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229fdf8 je 0x1229fe29 */
  if (C.zf) goto L_1229fe29;
  /* 1229fdfa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229fdfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229fdff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1229fe01 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1229fe04 jmp 0x1229fe0f */
  goto L_1229fe0f;
L_1229fe06:;
  /* 1229fe06 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229fe09 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fe0c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1229fe0f:;
  /* 1229fe0f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229fe12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229fe14 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1229fe17 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229fe1a jg 0x1229fe27 */
  if ((!C.zf&&C.sf==C.of)) goto L_1229fe27;
  /* 1229fe1c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229fe1f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fe22 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1229fe25 jmp 0x1229fe06 */
  goto L_1229fe06;
L_1229fe27:;
  /* 1229fe27 jmp 0x1229fdda */
  goto L_1229fdda;
L_1229fe29:;
  /* 1229fe29 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229fe2b push 0 */
  push32((uint32_t)(0x0u));
  /* 1229fe2d push 0 */
  push32((uint32_t)(0x0u));
  /* 1229fe2f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1229fe32 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fe35 push eax */
  push32((uint32_t)(EAX));
  /* 1229fe36 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1229fe3b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229fe3e push ecx */
  push32((uint32_t)(ECX));
  /* 1229fe3f push 1 */
  push32((uint32_t)(0x1u));
  /* 1229fe41 call 0x1229c5e0 */
  push32(0x1229fe46u); f_1229c5e0();
  /* 1229fe46 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fe49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229fe4b jne 0x1229fe52 */
  if (!C.zf) goto L_1229fe52;
  /* 1229fe4d jmp 0x1229ffa2 */
  goto L_1229ffa2;
L_1229fe52:;
  /* 1229fe52 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1229fe55 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1229fe5a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1229fe5d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1229fe60 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1229fe67 jmp 0x1229fe72 */
  goto L_1229fe72;
L_1229fe69:;
  /* 1229fe69 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229fe6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fe6f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1229fe72:;
  /* 1229fe72 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229fe79 jge 0x1229fe90 */
  if ((C.sf==C.of)) goto L_1229fe90;
  /* 1229fe7b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229fe7e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1229fe82 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1229fe85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229fe88 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fe8b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1229fe8e jmp 0x1229fe69 */
  goto L_1229fe69;
L_1229fe90:;
  /* 1229fe90 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229fe92 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229fe94 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1229fe97 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fe9a push edx */
  push32((uint32_t)(EDX));
  /* 1229fe9b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1229fea0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1229fea3 push eax */
  push32((uint32_t)(EAX));
  /* 1229fea4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1229fea6 call 0x122a2810 */
  push32(0x1229feabu); f_122a2810();
  /* 1229feab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229feae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229feb0 jne 0x1229feb7 */
  if (!C.zf) goto L_1229feb7;
  /* 1229feb2 jmp 0x1229ffa2 */
  goto L_1229ffa2;
L_1229feb7:;
  /* 1229feb7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1229feba mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1229febf cmp dword ptr [0x122beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229fec6 jle 0x1229ff23 */
  if ((C.zf||C.sf!=C.of)) goto L_1229ff23;
  /* 1229fec8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1229fecb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1229fece jmp 0x1229fed9 */
  goto L_1229fed9;
L_1229fed0:;
  /* 1229fed0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229fed3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229fed6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1229fed9:;
  /* 1229fed9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229fedc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229fede mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1229fee0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229fee2 je 0x1229ff23 */
  if (C.zf) goto L_1229ff23;
  /* 1229fee4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229fee7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229fee9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1229feec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229feee je 0x1229ff23 */
  if (C.zf) goto L_1229ff23;
  /* 1229fef0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229fef3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229fef5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1229fef7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1229fefa jmp 0x1229ff05 */
  goto L_1229ff05;
L_1229fefc:;
  /* 1229fefc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229feff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ff02 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1229ff05:;
  /* 1229ff05 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1229ff08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229ff0a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1229ff0d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ff10 jg 0x1229ff21 */
  if ((!C.zf&&C.sf==C.of)) goto L_1229ff21;
  /* 1229ff12 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1229ff15 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1229ff18 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1229ff1f jmp 0x1229fefc */
  goto L_1229fefc;
L_1229ff21:;
  /* 1229ff21 jmp 0x1229fed0 */
  goto L_1229fed0;
L_1229ff23:;
  /* 1229ff23 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1229ff26 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ff29 mov dword ptr [0x122bec98], eax */
  w32((uint32_t)(0x122bec98), (EAX));
  /* 1229ff2e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1229ff31 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ff34 mov dword ptr [0x122bec9c], ecx */
  w32((uint32_t)(0x122bec9c), (ECX));
  /* 1229ff3a cmp dword ptr [0x122c0840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ff41 je 0x1229ff54 */
  if (C.zf) goto L_1229ff54;
  /* 1229ff43 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229ff45 mov edx, dword ptr [0x122c0840] */
  EDX = (r32((uint32_t)(0x122c0840)));
  /* 1229ff4b push edx */
  push32((uint32_t)(EDX));
  /* 1229ff4c call 0x12294e40 */
  push32(0x1229ff51u); f_12294e40();
  /* 1229ff51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229ff54:;
  /* 1229ff54 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1229ff57 mov dword ptr [0x122c0840], eax */
  w32((uint32_t)(0x122c0840), (EAX));
  /* 1229ff5c cmp dword ptr [0x122c0844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229ff63 je 0x1229ff76 */
  if (C.zf) goto L_1229ff76;
  /* 1229ff65 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229ff67 mov ecx, dword ptr [0x122c0844] */
  ECX = (r32((uint32_t)(0x122c0844)));
  /* 1229ff6d push ecx */
  push32((uint32_t)(ECX));
  /* 1229ff6e call 0x12294e40 */
  push32(0x1229ff73u); f_12294e40();
  /* 1229ff73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229ff76:;
  /* 1229ff76 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1229ff79 mov dword ptr [0x122c0844], edx */
  w32((uint32_t)(0x122c0844), (EDX));
  /* 1229ff7f push 2 */
  push32((uint32_t)(0x2u));
  /* 1229ff81 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229ff84 push eax */
  push32((uint32_t)(EAX));
  /* 1229ff85 call 0x12294e40 */
  push32(0x1229ff8au); f_12294e40();
  /* 1229ff8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ff8d push 2 */
  push32((uint32_t)(0x2u));
  /* 1229ff8f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1229ff92 push ecx */
  push32((uint32_t)(ECX));
  /* 1229ff93 call 0x12294e40 */
  push32(0x1229ff98u); f_12294e40();
  /* 1229ff98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ff9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229ff9d jmp 0x122a002c */
  goto L_122a002c;
L_1229ffa2:;
  /* 1229ffa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229ffa4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1229ffa7 push edx */
  push32((uint32_t)(EDX));
  /* 1229ffa8 call 0x12294e40 */
  push32(0x1229ffadu); f_12294e40();
  /* 1229ffad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ffb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229ffb2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1229ffb5 push eax */
  push32((uint32_t)(EAX));
  /* 1229ffb6 call 0x12294e40 */
  push32(0x1229ffbbu); f_12294e40();
  /* 1229ffbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ffbe push 2 */
  push32((uint32_t)(0x2u));
  /* 1229ffc0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1229ffc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1229ffc4 call 0x12294e40 */
  push32(0x1229ffc9u); f_12294e40();
  /* 1229ffc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ffcc push 2 */
  push32((uint32_t)(0x2u));
  /* 1229ffce mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1229ffd1 push edx */
  push32((uint32_t)(EDX));
  /* 1229ffd2 call 0x12294e40 */
  push32(0x1229ffd7u); f_12294e40();
  /* 1229ffd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229ffda mov eax, 1 */
  EAX = (0x1u);
  /* 1229ffdf jmp 0x122a002c */
  goto L_122a002c;
L_1229ffe1:;
  /* 1229ffe1 mov dword ptr [0x122bec98], 0x122beca2 */
  w32((uint32_t)(0x122bec98), (0x122beca2u));
  /* 1229ffeb mov dword ptr [0x122bec9c], 0x122beca2 */
  w32((uint32_t)(0x122bec9c), (0x122beca2u));
  /* 1229fff5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229fff7 mov eax, dword ptr [0x122c0840] */
  EAX = (r32((uint32_t)(0x122c0840)));
  /* 1229fffc push eax */
  push32((uint32_t)(EAX));
  /* 1229fffd call 0x12294e40 */
  push32(0x122a0002u); f_12294e40();
  /* 122a0002 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0005 push 2 */
  push32((uint32_t)(0x2u));
  /* 122a0007 mov ecx, dword ptr [0x122c0844] */
  ECX = (r32((uint32_t)(0x122c0844)));
  /* 122a000d push ecx */
  push32((uint32_t)(ECX));
  /* 122a000e call 0x12294e40 */
  push32(0x122a0013u); f_12294e40();
  /* 122a0013 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0016 mov dword ptr [0x122c0840], 0 */
  w32((uint32_t)(0x122c0840), (0x0u));
  /* 122a0020 mov dword ptr [0x122c0844], 0 */
  w32((uint32_t)(0x122c0844), (0x0u));
  /* 122a002a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122a002c:;
  /* 122a002c mov esp, ebp */
  ESP = (EBP);
  /* 122a002e pop ebp */
  EBP = (pop32());
  /* 122a002f ret  */
  ESPCHK(0x1229fc90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010030 @ 0x122a0030 (7 bytes, 5 insns) */
void f_122a0030(void) {
  FTRACE(0x122a0030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0030 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0031 mov ebp, esp */
  EBP = (ESP);
  /* 122a0033 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a0035 pop ebp */
  EBP = (pop32());
  /* 122a0036 ret  */
  ESPCHK(0x122a0030u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x122a0040 (129 bytes, 56 insns) */
void f_122a0040(void) {
  FTRACE(0x122a0040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0040 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 122a0044 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 122a0048 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 122a004e jne 0x122a008c */
  if (!C.zf) goto L_122a008c;
L_122a0050:;
  /* 122a0050 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122a0052 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a0054 jne 0x122a0084 */
  if (!C.zf) goto L_122a0084;
  /* 122a0056 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122a0058 je 0x122a0080 */
  if (C.zf) goto L_122a0080;
  /* 122a005a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a005d jne 0x122a0084 */
  if (!C.zf) goto L_122a0084;
  /* 122a005f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 122a0061 je 0x122a0080 */
  if (C.zf) goto L_122a0080;
  /* 122a0063 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 122a0066 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a0069 jne 0x122a0084 */
  if (!C.zf) goto L_122a0084;
  /* 122a006b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122a006d je 0x122a0080 */
  if (C.zf) goto L_122a0080;
  /* 122a006f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a0072 jne 0x122a0084 */
  if (!C.zf) goto L_122a0084;
  /* 122a0074 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0077 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a007a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 122a007c jne 0x122a0050 */
  if (!C.zf) goto L_122a0050;
  /* 122a007e mov edi, edi */
  EDI = (EDI);
L_122a0080:;
  /* 122a0080 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a0082 ret  */
  ESPCHK(0x122a0040u, _esp0);
  ESP += 4; return;
  /* 122a0083 nop  */
  /* nop */
L_122a0084:;
  /* 122a0084 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0086 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122a0088 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 122a0089 ret  */
  ESPCHK(0x122a0040u, _esp0);
  ESP += 4; return;
  /* 122a008a mov edi, edi */
  EDI = (EDI);
L_122a008c:;
  /* 122a008c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 122a0092 je 0x122a00a8 */
  if (C.zf) goto L_122a00a8;
  /* 122a0094 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a0096 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 122a0097 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a0099 jne 0x122a0084 */
  if (!C.zf) goto L_122a0084;
  /* 122a009b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 122a009c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122a009e je 0x122a0080 */
  if (C.zf) goto L_122a0080;
  /* 122a00a0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 122a00a6 je 0x122a0050 */
  if (C.zf) goto L_122a0050;
L_122a00a8:;
  /* 122a00a8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 122a00ab add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a00ae cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a00b0 jne 0x122a0084 */
  if (!C.zf) goto L_122a0084;
  /* 122a00b2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122a00b4 je 0x122a0080 */
  if (C.zf) goto L_122a0080;
  /* 122a00b6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a00b9 jne 0x122a0084 */
  if (!C.zf) goto L_122a0084;
  /* 122a00bb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 122a00bd je 0x122a0080 */
  if (C.zf) goto L_122a0080;
  /* 122a00bf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a00c2 jmp 0x122a0050 */
  goto L_122a0050;
}

/* FUN_100100d0 @ 0x122a00d0 (62 bytes, 35 insns) */
void f_122a00d0(void) {
  FTRACE(0x122a00d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a00d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a00d1 mov ebp, esp */
  EBP = (ESP);
  /* 122a00d3 push esi */
  push32((uint32_t)(ESI));
  /* 122a00d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a00d6 push eax */
  push32((uint32_t)(EAX));
  /* 122a00d7 push eax */
  push32((uint32_t)(EAX));
  /* 122a00d8 push eax */
  push32((uint32_t)(EAX));
  /* 122a00d9 push eax */
  push32((uint32_t)(EAX));
  /* 122a00da push eax */
  push32((uint32_t)(EAX));
  /* 122a00db push eax */
  push32((uint32_t)(EAX));
  /* 122a00dc push eax */
  push32((uint32_t)(EAX));
  /* 122a00dd push eax */
  push32((uint32_t)(EAX));
  /* 122a00de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a00e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122a00e4:;
  /* 122a00e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a00e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122a00e8 je 0x122a00f1 */
  if (C.zf) goto L_122a00f1;
  /* 122a00ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 122a00eb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x122a00eb");
  /* 122a00ef jmp 0x122a00e4 */
  goto L_122a00e4;
L_122a00f1:;
  /* 122a00f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 122a00f4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 122a00f7 nop  */
  /* nop */
L_122a00f8:;
  /* 122a00f8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 122a00f9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122a00fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122a00fd je 0x122a0106 */
  if (C.zf) goto L_122a0106;
  /* 122a00ff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 122a0100 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x122a0100");
  /* 122a0104 jae 0x122a00f8 */
  if (!C.cf) goto L_122a00f8;
L_122a0106:;
  /* 122a0106 mov eax, ecx */
  EAX = (ECX);
  /* 122a0108 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a010b pop esi */
  ESI = (pop32());
  /* 122a010c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122a010d ret  */
  ESPCHK(0x122a00d0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x122a0110 (56 bytes, 31 insns) */
void f_122a0110(void) {
  FTRACE(0x122a0110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0110 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0111 mov ebp, esp */
  EBP = (ESP);
  /* 122a0113 push edi */
  push32((uint32_t)(EDI));
  /* 122a0114 push esi */
  push32((uint32_t)(ESI));
  /* 122a0115 push ebx */
  push32((uint32_t)(EBX));
  /* 122a0116 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a0119 jecxz 0x122a0141 */
  x86_unimpl("jecxz @ 0x122a0119");
  /* 122a011b mov ebx, ecx */
  EBX = (ECX);
  /* 122a011d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0120 mov esi, edi */
  ESI = (EDI);
  /* 122a0122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a0124 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 122a0126 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122a0128 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a012a mov edi, esi */
  EDI = (ESI);
  /* 122a012c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 122a012f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 122a0131 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 122a0134 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a0136 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a0139 ja 0x122a013f */
  if ((!C.cf&&!C.zf)) goto L_122a013f;
  /* 122a013b je 0x122a0141 */
  if (C.zf) goto L_122a0141;
  /* 122a013d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 122a013e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_122a013f:;
  /* 122a013f not ecx */
  ECX = (~(ECX));
L_122a0141:;
  /* 122a0141 mov eax, ecx */
  EAX = (ECX);
  /* 122a0143 pop ebx */
  EBX = (pop32());
  /* 122a0144 pop esi */
  ESI = (pop32());
  /* 122a0145 pop edi */
  EDI = (pop32());
  /* 122a0146 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122a0147 ret  */
  ESPCHK(0x122a0110u, _esp0);
  ESP += 4; return;
}

/* FUN_10010150 @ 0x122a0150 (58 bytes, 32 insns) */
void f_122a0150(void) {
  FTRACE(0x122a0150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0150 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0151 mov ebp, esp */
  EBP = (ESP);
  /* 122a0153 push esi */
  push32((uint32_t)(ESI));
  /* 122a0154 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a0156 push eax */
  push32((uint32_t)(EAX));
  /* 122a0157 push eax */
  push32((uint32_t)(EAX));
  /* 122a0158 push eax */
  push32((uint32_t)(EAX));
  /* 122a0159 push eax */
  push32((uint32_t)(EAX));
  /* 122a015a push eax */
  push32((uint32_t)(EAX));
  /* 122a015b push eax */
  push32((uint32_t)(EAX));
  /* 122a015c push eax */
  push32((uint32_t)(EAX));
  /* 122a015d push eax */
  push32((uint32_t)(EAX));
  /* 122a015e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a0161 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122a0164:;
  /* 122a0164 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a0166 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122a0168 je 0x122a0171 */
  if (C.zf) goto L_122a0171;
  /* 122a016a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 122a016b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x122a016b");
  /* 122a016f jmp 0x122a0164 */
  goto L_122a0164;
L_122a0171:;
  /* 122a0171 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_122a0174:;
  /* 122a0174 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122a0176 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122a0178 je 0x122a0184 */
  if (C.zf) goto L_122a0184;
  /* 122a017a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 122a017b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x122a017b");
  /* 122a017f jae 0x122a0174 */
  if (!C.cf) goto L_122a0174;
  /* 122a0181 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_122a0184:;
  /* 122a0184 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0187 pop esi */
  ESI = (pop32());
  /* 122a0188 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122a0189 ret  */
  ESPCHK(0x122a0150u, _esp0);
  ESP += 4; return;
}

/* FUN_10010190 @ 0x122a0190 (512 bytes, 147 insns) */
void f_122a0190(void) {
  FTRACE(0x122a0190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0190 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0191 mov ebp, esp */
  EBP = (ESP);
  /* 122a0193 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0196 cmp dword ptr [0x122c088c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c088c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a019d jne 0x122a01c2 */
  if (!C.zf) goto L_122a01c2;
  /* 122a019f call 0x122a0c60 */
  push32(0x122a01a4u); f_122a0c60();
  /* 122a01a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a01a6 je 0x122a01b2 */
  if (C.zf) goto L_122a01b2;
  /* 122a01a8 mov eax, dword ptr [0x122c326c] */
  EAX = (r32((uint32_t)(0x122c326c)));
  /* 122a01ad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122a01b0 jmp 0x122a01b9 */
  goto L_122a01b9;
L_122a01b2:;
  /* 122a01b2 mov dword ptr [ebp - 8], 0x122a0cb0 */
  w32((uint32_t)(EBP + -0x8), (0x122a0cb0u));
L_122a01b9:;
  /* 122a01b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a01bc mov dword ptr [0x122c088c], ecx */
  w32((uint32_t)(0x122c088c), (ECX));
L_122a01c2:;
  /* 122a01c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a01c6 jne 0x122a01d2 */
  if (!C.zf) goto L_122a01d2;
  /* 122a01c8 call 0x122a0ab0 */
  push32(0x122a01cdu); f_122a0ab0();
  /* 122a01cd jmp 0x122a029e */
  goto L_122a029e;
L_122a01d2:;
  /* 122a01d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a01d5 mov dword ptr [0x122c087c], edx */
  w32((uint32_t)(0x122c087c), (EDX));
  /* 122a01db cmp dword ptr [0x122c087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a01e2 je 0x122a0204 */
  if (C.zf) goto L_122a0204;
  /* 122a01e4 mov eax, dword ptr [0x122c087c] */
  EAX = (r32((uint32_t)(0x122c087c)));
  /* 122a01e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122a01ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a01ee je 0x122a0204 */
  if (C.zf) goto L_122a0204;
  /* 122a01f0 push 0x122c087c */
  push32((uint32_t)(0x122c087cu));
  /* 122a01f5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 122a01f7 push 0x122bfa90 */
  push32((uint32_t)(0x122bfa90u));
  /* 122a01fc call 0x122a0390 */
  push32(0x122a0201u); f_122a0390();
  /* 122a0201 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122a0204:;
  /* 122a0204 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0207 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a020a mov dword ptr [0x122c0880], edx */
  w32((uint32_t)(0x122c0880), (EDX));
  /* 122a0210 cmp dword ptr [0x122c0880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0217 je 0x122a0239 */
  if (C.zf) goto L_122a0239;
  /* 122a0219 mov eax, dword ptr [0x122c0880] */
  EAX = (r32((uint32_t)(0x122c0880)));
  /* 122a021e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122a0221 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a0223 je 0x122a0239 */
  if (C.zf) goto L_122a0239;
  /* 122a0225 push 0x122c0880 */
  push32((uint32_t)(0x122c0880u));
  /* 122a022a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 122a022c push 0x122bf9d8 */
  push32((uint32_t)(0x122bf9d8u));
  /* 122a0231 call 0x122a0390 */
  push32(0x122a0236u); f_122a0390();
  /* 122a0236 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122a0239:;
  /* 122a0239 mov dword ptr [0x122c0884], 0 */
  w32((uint32_t)(0x122c0884), (0x0u));
  /* 122a0243 cmp dword ptr [0x122c087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a024a je 0x122a027d */
  if (C.zf) goto L_122a027d;
  /* 122a024c mov edx, dword ptr [0x122c087c] */
  EDX = (r32((uint32_t)(0x122c087c)));
  /* 122a0252 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122a0255 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a0257 je 0x122a027d */
  if (C.zf) goto L_122a027d;
  /* 122a0259 cmp dword ptr [0x122c0880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0260 je 0x122a0276 */
  if (C.zf) goto L_122a0276;
  /* 122a0262 mov ecx, dword ptr [0x122c0880] */
  ECX = (r32((uint32_t)(0x122c0880)));
  /* 122a0268 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122a026b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a026d je 0x122a0276 */
  if (C.zf) goto L_122a0276;
  /* 122a026f call 0x122a0420 */
  push32(0x122a0274u); f_122a0420();
  /* 122a0274 jmp 0x122a027b */
  goto L_122a027b;
L_122a0276:;
  /* 122a0276 call 0x122a0810 */
  push32(0x122a027bu); f_122a0810();
L_122a027b:;
  /* 122a027b jmp 0x122a029e */
  goto L_122a029e;
L_122a027d:;
  /* 122a027d cmp dword ptr [0x122c0880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0284 je 0x122a0299 */
  if (C.zf) goto L_122a0299;
  /* 122a0286 mov eax, dword ptr [0x122c0880] */
  EAX = (r32((uint32_t)(0x122c0880)));
  /* 122a028b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122a028e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a0290 je 0x122a0299 */
  if (C.zf) goto L_122a0299;
  /* 122a0292 call 0x122a09b0 */
  push32(0x122a0297u); f_122a09b0();
  /* 122a0297 jmp 0x122a029e */
  goto L_122a029e;
L_122a0299:;
  /* 122a0299 call 0x122a0ab0 */
  push32(0x122a029eu); f_122a0ab0();
L_122a029e:;
  /* 122a029e cmp dword ptr [0x122c0884], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0884))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a02a5 jne 0x122a02ae */
  if (!C.zf) goto L_122a02ae;
  /* 122a02a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a02a9 jmp 0x122a038c */
  goto L_122a038c;
L_122a02ae:;
  /* 122a02ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a02b1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a02b7 push edx */
  push32((uint32_t)(EDX));
  /* 122a02b8 call 0x122a0ae0 */
  push32(0x122a02bdu); f_122a0ae0();
  /* 122a02bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a02c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a02c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a02c7 je 0x122a02dc */
  if (C.zf) goto L_122a02dc;
  /* 122a02c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a02cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a02d1 push eax */
  push32((uint32_t)(EAX));
  /* 122a02d2 call dword ptr [0x122c3270] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3270))), 0x122a02d8u);
  /* 122a02d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a02da jne 0x122a02e3 */
  if (!C.zf) goto L_122a02e3;
L_122a02dc:;
  /* 122a02dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a02de jmp 0x122a038c */
  goto L_122a038c;
L_122a02e3:;
  /* 122a02e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 122a02e5 mov ecx, dword ptr [0x122c086c] */
  ECX = (r32((uint32_t)(0x122c086c)));
  /* 122a02eb push ecx */
  push32((uint32_t)(ECX));
  /* 122a02ec call dword ptr [0x122c3280] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3280))), 0x122a02f2u);
  /* 122a02f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a02f4 jne 0x122a02fd */
  if (!C.zf) goto L_122a02fd;
  /* 122a02f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a02f8 jmp 0x122a038c */
  goto L_122a038c;
L_122a02fd:;
  /* 122a02fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0301 je 0x122a0328 */
  if (C.zf) goto L_122a0328;
  /* 122a0303 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a0306 mov ax, word ptr [0x122c086c] */
  AX = (r16((uint32_t)(0x122c086c)));
  /* 122a030c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 122a030f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a0312 mov dx, word ptr [0x122c0888] */
  DX = (r16((uint32_t)(0x122c0888)));
  /* 122a0319 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 122a031d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a0320 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 122a0324 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_122a0328:;
  /* 122a0328 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a032c je 0x122a0387 */
  if (C.zf) goto L_122a0387;
  /* 122a032e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 122a0330 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a0333 push edx */
  push32((uint32_t)(EDX));
  /* 122a0334 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 122a0339 mov eax, dword ptr [0x122c086c] */
  EAX = (r32((uint32_t)(0x122c086c)));
  /* 122a033e push eax */
  push32((uint32_t)(EAX));
  /* 122a033f call dword ptr [0x122c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c088c))), 0x122a0345u);
  /* 122a0345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a0347 jne 0x122a034d */
  if (!C.zf) goto L_122a034d;
  /* 122a0349 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a034b jmp 0x122a038c */
  goto L_122a038c;
L_122a034d:;
  /* 122a034d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 122a034f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a0352 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0355 push ecx */
  push32((uint32_t)(ECX));
  /* 122a0356 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 122a035b mov edx, dword ptr [0x122c0888] */
  EDX = (r32((uint32_t)(0x122c0888)));
  /* 122a0361 push edx */
  push32((uint32_t)(EDX));
  /* 122a0362 call dword ptr [0x122c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c088c))), 0x122a0368u);
  /* 122a0368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a036a jne 0x122a0370 */
  if (!C.zf) goto L_122a0370;
  /* 122a036c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a036e jmp 0x122a038c */
  goto L_122a038c;
L_122a0370:;
  /* 122a0370 push 0xa */
  push32((uint32_t)(0xau));
  /* 122a0372 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a0375 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a037a push eax */
  push32((uint32_t)(EAX));
  /* 122a037b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a037e push ecx */
  push32((uint32_t)(ECX));
  /* 122a037f call 0x12296ef0 */
  push32(0x122a0384u); f_12296ef0();
  /* 122a0384 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122a0387:;
  /* 122a0387 mov eax, 1 */
  EAX = (0x1u);
L_122a038c:;
  /* 122a038c mov esp, ebp */
  ESP = (EBP);
  /* 122a038e pop ebp */
  EBP = (pop32());
  /* 122a038f ret  */
  ESPCHK(0x122a0190u, _esp0);
  ESP += 4; return;
}

/* FUN_10010390 @ 0x122a0390 (130 bytes, 47 insns) */
void f_122a0390(void) {
  FTRACE(0x122a0390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0390 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0391 mov ebp, esp */
  EBP = (ESP);
  /* 122a0393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0396 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 122a039d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_122a03a4:;
  /* 122a03a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a03a7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a03aa jg 0x122a040e */
  if ((!C.zf&&C.sf==C.of)) goto L_122a040e;
  /* 122a03ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a03b0 je 0x122a040e */
  if (C.zf) goto L_122a040e;
  /* 122a03b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a03b5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a03b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122a03b9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a03bb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122a03bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a03c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a03c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a03c6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 122a03c9 push eax */
  push32((uint32_t)(EAX));
  /* 122a03ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a03cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a03cf push edx */
  push32((uint32_t)(EDX));
  /* 122a03d0 call 0x122a2a80 */
  push32(0x122a03d5u); f_122a2a80();
  /* 122a03d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a03d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122a03db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a03df jne 0x122a03f2 */
  if (!C.zf) goto L_122a03f2;
  /* 122a03e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a03e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a03e7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 122a03eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a03ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122a03f0 jmp 0x122a040c */
  goto L_122a040c;
L_122a03f2:;
  /* 122a03f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a03f6 jge 0x122a0403 */
  if ((C.sf==C.of)) goto L_122a0403;
  /* 122a03f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a03fb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a03fe mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 122a0401 jmp 0x122a040c */
  goto L_122a040c;
L_122a0403:;
  /* 122a0403 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a0406 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0409 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_122a040c:;
  /* 122a040c jmp 0x122a03a4 */
  goto L_122a03a4;
L_122a040e:;
  /* 122a040e mov esp, ebp */
  ESP = (EBP);
  /* 122a0410 pop ebp */
  EBP = (pop32());
  /* 122a0411 ret  */
  ESPCHK(0x122a0390u, _esp0);
  ESP += 4; return;
}

/* FUN_10010420 @ 0x122a0420 (186 bytes, 50 insns) */
void f_122a0420(void) {
  FTRACE(0x122a0420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0420 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0421 mov ebp, esp */
  EBP = (ESP);
  /* 122a0423 push ecx */
  push32((uint32_t)(ECX));
  /* 122a0424 mov eax, dword ptr [0x122c087c] */
  EAX = (r32((uint32_t)(0x122c087c)));
  /* 122a0429 push eax */
  push32((uint32_t)(EAX));
  /* 122a042a call 0x122971e0 */
  push32(0x122a042fu); f_122971e0();
  /* 122a042f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0432 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a0434 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0437 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 122a043a mov dword ptr [0x122c0878], ecx */
  w32((uint32_t)(0x122c0878), (ECX));
  /* 122a0440 mov edx, dword ptr [0x122c0880] */
  EDX = (r32((uint32_t)(0x122c0880)));
  /* 122a0446 push edx */
  push32((uint32_t)(EDX));
  /* 122a0447 call 0x122971e0 */
  push32(0x122a044cu); f_122971e0();
  /* 122a044c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a044f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a0451 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0454 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 122a0457 mov dword ptr [0x122c0870], ecx */
  w32((uint32_t)(0x122c0870), (ECX));
  /* 122a045d mov dword ptr [0x122c086c], 0 */
  w32((uint32_t)(0x122c086c), (0x0u));
  /* 122a0467 cmp dword ptr [0x122c0878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a046e je 0x122a0479 */
  if (C.zf) goto L_122a0479;
  /* 122a0470 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 122a0477 jmp 0x122a048b */
  goto L_122a048b;
L_122a0479:;
  /* 122a0479 mov edx, dword ptr [0x122c087c] */
  EDX = (r32((uint32_t)(0x122c087c)));
  /* 122a047f push edx */
  push32((uint32_t)(EDX));
  /* 122a0480 call 0x122a0ec0 */
  push32(0x122a0485u); f_122a0ec0();
  /* 122a0485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0488 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122a048b:;
  /* 122a048b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a048e mov dword ptr [0x122c0874], eax */
  w32((uint32_t)(0x122c0874), (EAX));
  /* 122a0493 push 1 */
  push32((uint32_t)(0x1u));
  /* 122a0495 push 0x122a04e0 */
  push32((uint32_t)(0x122a04e0u));
  /* 122a049a call dword ptr [0x122c3274] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3274))), 0x122a04a0u);
  /* 122a04a0 mov ecx, dword ptr [0x122c0884] */
  ECX = (r32((uint32_t)(0x122c0884)));
  /* 122a04a6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 122a04ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a04ae je 0x122a04cc */
  if (C.zf) goto L_122a04cc;
  /* 122a04b0 mov edx, dword ptr [0x122c0884] */
  EDX = (r32((uint32_t)(0x122c0884)));
  /* 122a04b6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 122a04bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a04be je 0x122a04cc */
  if (C.zf) goto L_122a04cc;
  /* 122a04c0 mov eax, dword ptr [0x122c0884] */
  EAX = (r32((uint32_t)(0x122c0884)));
  /* 122a04c5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 122a04c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a04ca jne 0x122a04d6 */
  if (!C.zf) goto L_122a04d6;
L_122a04cc:;
  /* 122a04cc mov dword ptr [0x122c0884], 0 */
  w32((uint32_t)(0x122c0884), (0x0u));
L_122a04d6:;
  /* 122a04d6 mov esp, ebp */
  ESP = (EBP);
  /* 122a04d8 pop ebp */
  EBP = (pop32());
  /* 122a04d9 ret  */
  ESPCHK(0x122a0420u, _esp0);
  ESP += 4; return;
}

/* FUN_100104e0 @ 0x122a04e0 (804 bytes, 220 insns) */
void f_122a04e0(void) {
  FTRACE(0x122a04e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a04e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a04e1 mov ebp, esp */
  EBP = (ESP);
  /* 122a04e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a04e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a04e9 push eax */
  push32((uint32_t)(EAX));
  /* 122a04ea call 0x122a0e40 */
  push32(0x122a04efu); f_122a0e40();
  /* 122a04ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a04f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 122a04f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 122a04f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 122a04fa push ecx */
  push32((uint32_t)(ECX));
  /* 122a04fb mov edx, dword ptr [0x122c0870] */
  EDX = (r32((uint32_t)(0x122c0870)));
  /* 122a0501 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122a0503 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0505 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 122a050b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0511 push edx */
  push32((uint32_t)(EDX));
  /* 122a0512 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a0515 push eax */
  push32((uint32_t)(EAX));
  /* 122a0516 call dword ptr [0x122c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c088c))), 0x122a051cu);
  /* 122a051c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a051e jne 0x122a0534 */
  if (!C.zf) goto L_122a0534;
  /* 122a0520 mov dword ptr [0x122c0884], 0 */
  w32((uint32_t)(0x122c0884), (0x0u));
  /* 122a052a mov eax, 1 */
  EAX = (0x1u);
  /* 122a052f jmp 0x122a07fe */
  goto L_122a07fe;
L_122a0534:;
  /* 122a0534 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 122a0537 push ecx */
  push32((uint32_t)(ECX));
  /* 122a0538 mov edx, dword ptr [0x122c0880] */
  EDX = (r32((uint32_t)(0x122c0880)));
  /* 122a053e push edx */
  push32((uint32_t)(EDX));
  /* 122a053f call 0x122a2a80 */
  push32(0x122a0544u); f_122a2a80();
  /* 122a0544 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0547 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a0549 jne 0x122a066f */
  if (!C.zf) goto L_122a066f;
  /* 122a054f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 122a0551 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 122a0554 push eax */
  push32((uint32_t)(EAX));
  /* 122a0555 mov ecx, dword ptr [0x122c0878] */
  ECX = (r32((uint32_t)(0x122c0878)));
  /* 122a055b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122a055d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a055f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 122a0565 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a056b push ecx */
  push32((uint32_t)(ECX));
  /* 122a056c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a056f push edx */
  push32((uint32_t)(EDX));
  /* 122a0570 call dword ptr [0x122c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c088c))), 0x122a0576u);
  /* 122a0576 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a0578 jne 0x122a058e */
  if (!C.zf) goto L_122a058e;
  /* 122a057a mov dword ptr [0x122c0884], 0 */
  w32((uint32_t)(0x122c0884), (0x0u));
  /* 122a0584 mov eax, 1 */
  EAX = (0x1u);
  /* 122a0589 jmp 0x122a07fe */
  goto L_122a07fe;
L_122a058e:;
  /* 122a058e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 122a0591 push eax */
  push32((uint32_t)(EAX));
  /* 122a0592 mov ecx, dword ptr [0x122c087c] */
  ECX = (r32((uint32_t)(0x122c087c)));
  /* 122a0598 push ecx */
  push32((uint32_t)(ECX));
  /* 122a0599 call 0x122a2a80 */
  push32(0x122a059eu); f_122a2a80();
  /* 122a059e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a05a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a05a3 jne 0x122a05d0 */
  if (!C.zf) goto L_122a05d0;
  /* 122a05a5 mov edx, dword ptr [0x122c0884] */
  EDX = (r32((uint32_t)(0x122c0884)));
  /* 122a05ab or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 122a05b1 mov dword ptr [0x122c0884], edx */
  w32((uint32_t)(0x122c0884), (EDX));
  /* 122a05b7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a05ba mov dword ptr [0x122c0888], eax */
  w32((uint32_t)(0x122c0888), (EAX));
  /* 122a05bf mov ecx, dword ptr [0x122c0888] */
  ECX = (r32((uint32_t)(0x122c0888)));
  /* 122a05c5 mov dword ptr [0x122c086c], ecx */
  w32((uint32_t)(0x122c086c), (ECX));
  /* 122a05cb jmp 0x122a066f */
  goto L_122a066f;
L_122a05d0:;
  /* 122a05d0 mov edx, dword ptr [0x122c0884] */
  EDX = (r32((uint32_t)(0x122c0884)));
  /* 122a05d6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 122a05d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a05db jne 0x122a066f */
  if (!C.zf) goto L_122a066f;
  /* 122a05e1 cmp dword ptr [0x122c0874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a05e8 je 0x122a063d */
  if (C.zf) goto L_122a063d;
  /* 122a05ea mov eax, dword ptr [0x122c0874] */
  EAX = (r32((uint32_t)(0x122c0874)));
  /* 122a05ef push eax */
  push32((uint32_t)(EAX));
  /* 122a05f0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 122a05f3 push ecx */
  push32((uint32_t)(ECX));
  /* 122a05f4 mov edx, dword ptr [0x122c087c] */
  EDX = (r32((uint32_t)(0x122c087c)));
  /* 122a05fa push edx */
  push32((uint32_t)(EDX));
  /* 122a05fb call 0x122a2b50 */
  push32(0x122a0600u); f_122a2b50();
  /* 122a0600 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0603 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a0605 jne 0x122a063d */
  if (!C.zf) goto L_122a063d;
  /* 122a0607 mov eax, dword ptr [0x122c0884] */
  EAX = (r32((uint32_t)(0x122c0884)));
  /* 122a060c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 122a060e mov dword ptr [0x122c0884], eax */
  w32((uint32_t)(0x122c0884), (EAX));
  /* 122a0613 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a0616 mov dword ptr [0x122c0888], ecx */
  w32((uint32_t)(0x122c0888), (ECX));
  /* 122a061c mov edx, dword ptr [0x122c087c] */
  EDX = (r32((uint32_t)(0x122c087c)));
  /* 122a0622 push edx */
  push32((uint32_t)(EDX));
  /* 122a0623 call 0x122971e0 */
  push32(0x122a0628u); f_122971e0();
  /* 122a0628 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a062b cmp eax, dword ptr [0x122c0874] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122c0874))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0631 jne 0x122a063b */
  if (!C.zf) goto L_122a063b;
  /* 122a0633 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a0636 mov dword ptr [0x122c086c], eax */
  w32((uint32_t)(0x122c086c), (EAX));
L_122a063b:;
  /* 122a063b jmp 0x122a066f */
  goto L_122a066f;
L_122a063d:;
  /* 122a063d mov ecx, dword ptr [0x122c0884] */
  ECX = (r32((uint32_t)(0x122c0884)));
  /* 122a0643 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122a0646 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a0648 jne 0x122a066f */
  if (!C.zf) goto L_122a066f;
  /* 122a064a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a064d push edx */
  push32((uint32_t)(EDX));
  /* 122a064e call 0x122a0b80 */
  push32(0x122a0653u); f_122a0b80();
  /* 122a0653 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0656 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a0658 je 0x122a066f */
  if (C.zf) goto L_122a066f;
  /* 122a065a mov eax, dword ptr [0x122c0884] */
  EAX = (r32((uint32_t)(0x122c0884)));
  /* 122a065f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 122a0661 mov dword ptr [0x122c0884], eax */
  w32((uint32_t)(0x122c0884), (EAX));
  /* 122a0666 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a0669 mov dword ptr [0x122c0888], ecx */
  w32((uint32_t)(0x122c0888), (ECX));
L_122a066f:;
  /* 122a066f mov edx, dword ptr [0x122c0884] */
  EDX = (r32((uint32_t)(0x122c0884)));
  /* 122a0675 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 122a067b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0681 je 0x122a07f1 */
  if (C.zf) goto L_122a07f1;
  /* 122a0687 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 122a0689 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 122a068c push eax */
  push32((uint32_t)(EAX));
  /* 122a068d mov ecx, dword ptr [0x122c0878] */
  ECX = (r32((uint32_t)(0x122c0878)));
  /* 122a0693 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122a0695 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0697 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 122a069d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a06a3 push ecx */
  push32((uint32_t)(ECX));
  /* 122a06a4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a06a7 push edx */
  push32((uint32_t)(EDX));
  /* 122a06a8 call dword ptr [0x122c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c088c))), 0x122a06aeu);
  /* 122a06ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a06b0 jne 0x122a06c6 */
  if (!C.zf) goto L_122a06c6;
  /* 122a06b2 mov dword ptr [0x122c0884], 0 */
  w32((uint32_t)(0x122c0884), (0x0u));
  /* 122a06bc mov eax, 1 */
  EAX = (0x1u);
  /* 122a06c1 jmp 0x122a07fe */
  goto L_122a07fe;
L_122a06c6:;
  /* 122a06c6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 122a06c9 push eax */
  push32((uint32_t)(EAX));
  /* 122a06ca mov ecx, dword ptr [0x122c087c] */
  ECX = (r32((uint32_t)(0x122c087c)));
  /* 122a06d0 push ecx */
  push32((uint32_t)(ECX));
  /* 122a06d1 call 0x122a2a80 */
  push32(0x122a06d6u); f_122a2a80();
  /* 122a06d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a06d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a06db jne 0x122a0790 */
  if (!C.zf) goto L_122a0790;
  /* 122a06e1 mov edx, dword ptr [0x122c0884] */
  EDX = (r32((uint32_t)(0x122c0884)));
  /* 122a06e7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 122a06ea mov dword ptr [0x122c0884], edx */
  w32((uint32_t)(0x122c0884), (EDX));
  /* 122a06f0 cmp dword ptr [0x122c0878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a06f7 je 0x122a071a */
  if (C.zf) goto L_122a071a;
  /* 122a06f9 mov eax, dword ptr [0x122c0884] */
  EAX = (r32((uint32_t)(0x122c0884)));
  /* 122a06fe or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 122a0701 mov dword ptr [0x122c0884], eax */
  w32((uint32_t)(0x122c0884), (EAX));
  /* 122a0706 cmp dword ptr [0x122c086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a070d jne 0x122a0718 */
  if (!C.zf) goto L_122a0718;
  /* 122a070f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a0712 mov dword ptr [0x122c086c], ecx */
  w32((uint32_t)(0x122c086c), (ECX));
L_122a0718:;
  /* 122a0718 jmp 0x122a078e */
  goto L_122a078e;
L_122a071a:;
  /* 122a071a cmp dword ptr [0x122c0874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0721 je 0x122a076f */
  if (C.zf) goto L_122a076f;
  /* 122a0723 mov edx, dword ptr [0x122c087c] */
  EDX = (r32((uint32_t)(0x122c087c)));
  /* 122a0729 push edx */
  push32((uint32_t)(EDX));
  /* 122a072a call 0x122971e0 */
  push32(0x122a072fu); f_122971e0();
  /* 122a072f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0732 cmp eax, dword ptr [0x122c0874] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122c0874))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0738 jne 0x122a076f */
  if (!C.zf) goto L_122a076f;
  /* 122a073a push 1 */
  push32((uint32_t)(0x1u));
  /* 122a073c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a073f push eax */
  push32((uint32_t)(EAX));
  /* 122a0740 call 0x122a0bd0 */
  push32(0x122a0745u); f_122a0bd0();
  /* 122a0745 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0748 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a074a je 0x122a076d */
  if (C.zf) goto L_122a076d;
  /* 122a074c mov ecx, dword ptr [0x122c0884] */
  ECX = (r32((uint32_t)(0x122c0884)));
  /* 122a0752 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 122a0755 mov dword ptr [0x122c0884], ecx */
  w32((uint32_t)(0x122c0884), (ECX));
  /* 122a075b cmp dword ptr [0x122c086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0762 jne 0x122a076d */
  if (!C.zf) goto L_122a076d;
  /* 122a0764 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a0767 mov dword ptr [0x122c086c], edx */
  w32((uint32_t)(0x122c086c), (EDX));
L_122a076d:;
  /* 122a076d jmp 0x122a078e */
  goto L_122a078e;
L_122a076f:;
  /* 122a076f mov eax, dword ptr [0x122c0884] */
  EAX = (r32((uint32_t)(0x122c0884)));
  /* 122a0774 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 122a0777 mov dword ptr [0x122c0884], eax */
  w32((uint32_t)(0x122c0884), (EAX));
  /* 122a077c cmp dword ptr [0x122c086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0783 jne 0x122a078e */
  if (!C.zf) goto L_122a078e;
  /* 122a0785 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a0788 mov dword ptr [0x122c086c], ecx */
  w32((uint32_t)(0x122c086c), (ECX));
L_122a078e:;
  /* 122a078e jmp 0x122a07f1 */
  goto L_122a07f1;
L_122a0790:;
  /* 122a0790 cmp dword ptr [0x122c0878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0797 jne 0x122a07f1 */
  if (!C.zf) goto L_122a07f1;
  /* 122a0799 cmp dword ptr [0x122c0874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a07a0 je 0x122a07f1 */
  if (C.zf) goto L_122a07f1;
  /* 122a07a2 mov edx, dword ptr [0x122c0874] */
  EDX = (r32((uint32_t)(0x122c0874)));
  /* 122a07a8 push edx */
  push32((uint32_t)(EDX));
  /* 122a07a9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 122a07ac push eax */
  push32((uint32_t)(EAX));
  /* 122a07ad mov ecx, dword ptr [0x122c087c] */
  ECX = (r32((uint32_t)(0x122c087c)));
  /* 122a07b3 push ecx */
  push32((uint32_t)(ECX));
  /* 122a07b4 call 0x122a2b50 */
  push32(0x122a07b9u); f_122a2b50();
  /* 122a07b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a07bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a07be jne 0x122a07f1 */
  if (!C.zf) goto L_122a07f1;
  /* 122a07c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a07c2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a07c5 push edx */
  push32((uint32_t)(EDX));
  /* 122a07c6 call 0x122a0bd0 */
  push32(0x122a07cbu); f_122a0bd0();
  /* 122a07cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a07ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a07d0 je 0x122a07f1 */
  if (C.zf) goto L_122a07f1;
  /* 122a07d2 mov eax, dword ptr [0x122c0884] */
  EAX = (r32((uint32_t)(0x122c0884)));
  /* 122a07d7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 122a07da mov dword ptr [0x122c0884], eax */
  w32((uint32_t)(0x122c0884), (EAX));
  /* 122a07df cmp dword ptr [0x122c086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a07e6 jne 0x122a07f1 */
  if (!C.zf) goto L_122a07f1;
  /* 122a07e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a07eb mov dword ptr [0x122c086c], ecx */
  w32((uint32_t)(0x122c086c), (ECX));
L_122a07f1:;
  /* 122a07f1 mov eax, dword ptr [0x122c0884] */
  EAX = (r32((uint32_t)(0x122c0884)));
  /* 122a07f6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 122a07f9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122a07fb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a07fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_122a07fe:;
  /* 122a07fe mov esp, ebp */
  ESP = (EBP);
  /* 122a0800 pop ebp */
  EBP = (pop32());
  /* 122a0801 ret 4 */
  ESPCHK(0x122a04e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010810 @ 0x122a0810 (116 bytes, 33 insns) */
void f_122a0810(void) {
  FTRACE(0x122a0810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0810 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0811 mov ebp, esp */
  EBP = (ESP);
  /* 122a0813 push ecx */
  push32((uint32_t)(ECX));
  /* 122a0814 mov eax, dword ptr [0x122c087c] */
  EAX = (r32((uint32_t)(0x122c087c)));
  /* 122a0819 push eax */
  push32((uint32_t)(EAX));
  /* 122a081a call 0x122971e0 */
  push32(0x122a081fu); f_122971e0();
  /* 122a081f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0822 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a0824 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0827 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 122a082a mov dword ptr [0x122c0878], ecx */
  w32((uint32_t)(0x122c0878), (ECX));
  /* 122a0830 cmp dword ptr [0x122c0878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0837 je 0x122a0842 */
  if (C.zf) goto L_122a0842;
  /* 122a0839 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 122a0840 jmp 0x122a0854 */
  goto L_122a0854;
L_122a0842:;
  /* 122a0842 mov edx, dword ptr [0x122c087c] */
  EDX = (r32((uint32_t)(0x122c087c)));
  /* 122a0848 push edx */
  push32((uint32_t)(EDX));
  /* 122a0849 call 0x122a0ec0 */
  push32(0x122a084eu); f_122a0ec0();
  /* 122a084e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0851 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122a0854:;
  /* 122a0854 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a0857 mov dword ptr [0x122c0874], eax */
  w32((uint32_t)(0x122c0874), (EAX));
  /* 122a085c push 1 */
  push32((uint32_t)(0x1u));
  /* 122a085e push 0x122a0890 */
  push32((uint32_t)(0x122a0890u));
  /* 122a0863 call dword ptr [0x122c3274] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3274))), 0x122a0869u);
  /* 122a0869 mov ecx, dword ptr [0x122c0884] */
  ECX = (r32((uint32_t)(0x122c0884)));
  /* 122a086f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 122a0872 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a0874 jne 0x122a0880 */
  if (!C.zf) goto L_122a0880;
  /* 122a0876 mov dword ptr [0x122c0884], 0 */
  w32((uint32_t)(0x122c0884), (0x0u));
L_122a0880:;
  /* 122a0880 mov esp, ebp */
  ESP = (EBP);
  /* 122a0882 pop ebp */
  EBP = (pop32());
  /* 122a0883 ret  */
  ESPCHK(0x122a0810u, _esp0);
  ESP += 4; return;
}

/* FUN_10010890 @ 0x122a0890 (287 bytes, 86 insns) */
void f_122a0890(void) {
  FTRACE(0x122a0890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0890 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0891 mov ebp, esp */
  EBP = (ESP);
  /* 122a0893 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0896 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0899 push eax */
  push32((uint32_t)(EAX));
  /* 122a089a call 0x122a0e40 */
  push32(0x122a089fu); f_122a0e40();
  /* 122a089f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a08a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 122a08a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 122a08a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 122a08aa push ecx */
  push32((uint32_t)(ECX));
  /* 122a08ab mov edx, dword ptr [0x122c0878] */
  EDX = (r32((uint32_t)(0x122c0878)));
  /* 122a08b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122a08b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a08b5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 122a08bb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a08c1 push edx */
  push32((uint32_t)(EDX));
  /* 122a08c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a08c5 push eax */
  push32((uint32_t)(EAX));
  /* 122a08c6 call dword ptr [0x122c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c088c))), 0x122a08ccu);
  /* 122a08cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a08ce jne 0x122a08e4 */
  if (!C.zf) goto L_122a08e4;
  /* 122a08d0 mov dword ptr [0x122c0884], 0 */
  w32((uint32_t)(0x122c0884), (0x0u));
  /* 122a08da mov eax, 1 */
  EAX = (0x1u);
  /* 122a08df jmp 0x122a09a9 */
  goto L_122a09a9;
L_122a08e4:;
  /* 122a08e4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 122a08e7 push ecx */
  push32((uint32_t)(ECX));
  /* 122a08e8 mov edx, dword ptr [0x122c087c] */
  EDX = (r32((uint32_t)(0x122c087c)));
  /* 122a08ee push edx */
  push32((uint32_t)(EDX));
  /* 122a08ef call 0x122a2a80 */
  push32(0x122a08f4u); f_122a2a80();
  /* 122a08f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a08f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a08f9 jne 0x122a0939 */
  if (!C.zf) goto L_122a0939;
  /* 122a08fb cmp dword ptr [0x122c0878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0902 jne 0x122a0916 */
  if (!C.zf) goto L_122a0916;
  /* 122a0904 push 1 */
  push32((uint32_t)(0x1u));
  /* 122a0906 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a0909 push eax */
  push32((uint32_t)(EAX));
  /* 122a090a call 0x122a0bd0 */
  push32(0x122a090fu); f_122a0bd0();
  /* 122a090f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0912 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a0914 je 0x122a0937 */
  if (C.zf) goto L_122a0937;
L_122a0916:;
  /* 122a0916 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a0919 mov dword ptr [0x122c0888], ecx */
  w32((uint32_t)(0x122c0888), (ECX));
  /* 122a091f mov edx, dword ptr [0x122c0888] */
  EDX = (r32((uint32_t)(0x122c0888)));
  /* 122a0925 mov dword ptr [0x122c086c], edx */
  w32((uint32_t)(0x122c086c), (EDX));
  /* 122a092b mov eax, dword ptr [0x122c0884] */
  EAX = (r32((uint32_t)(0x122c0884)));
  /* 122a0930 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 122a0932 mov dword ptr [0x122c0884], eax */
  w32((uint32_t)(0x122c0884), (EAX));
L_122a0937:;
  /* 122a0937 jmp 0x122a099c */
  goto L_122a099c;
L_122a0939:;
  /* 122a0939 cmp dword ptr [0x122c0878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0940 jne 0x122a099c */
  if (!C.zf) goto L_122a099c;
  /* 122a0942 cmp dword ptr [0x122c0874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0949 je 0x122a099c */
  if (C.zf) goto L_122a099c;
  /* 122a094b mov ecx, dword ptr [0x122c0874] */
  ECX = (r32((uint32_t)(0x122c0874)));
  /* 122a0951 push ecx */
  push32((uint32_t)(ECX));
  /* 122a0952 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 122a0955 push edx */
  push32((uint32_t)(EDX));
  /* 122a0956 mov eax, dword ptr [0x122c087c] */
  EAX = (r32((uint32_t)(0x122c087c)));
  /* 122a095b push eax */
  push32((uint32_t)(EAX));
  /* 122a095c call 0x122a2b50 */
  push32(0x122a0961u); f_122a2b50();
  /* 122a0961 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0964 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a0966 jne 0x122a099c */
  if (!C.zf) goto L_122a099c;
  /* 122a0968 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a096a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a096d push ecx */
  push32((uint32_t)(ECX));
  /* 122a096e call 0x122a0bd0 */
  push32(0x122a0973u); f_122a0bd0();
  /* 122a0973 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0976 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a0978 je 0x122a099c */
  if (C.zf) goto L_122a099c;
  /* 122a097a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a097d mov dword ptr [0x122c0888], edx */
  w32((uint32_t)(0x122c0888), (EDX));
  /* 122a0983 mov eax, dword ptr [0x122c0888] */
  EAX = (r32((uint32_t)(0x122c0888)));
  /* 122a0988 mov dword ptr [0x122c086c], eax */
  w32((uint32_t)(0x122c086c), (EAX));
  /* 122a098d mov ecx, dword ptr [0x122c0884] */
  ECX = (r32((uint32_t)(0x122c0884)));
  /* 122a0993 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 122a0996 mov dword ptr [0x122c0884], ecx */
  w32((uint32_t)(0x122c0884), (ECX));
L_122a099c:;
  /* 122a099c mov eax, dword ptr [0x122c0884] */
  EAX = (r32((uint32_t)(0x122c0884)));
  /* 122a09a1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 122a09a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122a09a6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a09a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_122a09a9:;
  /* 122a09a9 mov esp, ebp */
  ESP = (EBP);
  /* 122a09ab pop ebp */
  EBP = (pop32());
  /* 122a09ac ret 4 */
  ESPCHK(0x122a0890u, _esp0);
  ESP += 8; return;
}

/* FUN_100109b0 @ 0x122a09b0 (69 bytes, 20 insns) */
void f_122a09b0(void) {
  FTRACE(0x122a09b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a09b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a09b1 mov ebp, esp */
  EBP = (ESP);
  /* 122a09b3 mov eax, dword ptr [0x122c0880] */
  EAX = (r32((uint32_t)(0x122c0880)));
  /* 122a09b8 push eax */
  push32((uint32_t)(EAX));
  /* 122a09b9 call 0x122971e0 */
  push32(0x122a09beu); f_122971e0();
  /* 122a09be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a09c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a09c3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a09c6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 122a09c9 mov dword ptr [0x122c0870], ecx */
  w32((uint32_t)(0x122c0870), (ECX));
  /* 122a09cf push 1 */
  push32((uint32_t)(0x1u));
  /* 122a09d1 push 0x122a0a00 */
  push32((uint32_t)(0x122a0a00u));
  /* 122a09d6 call dword ptr [0x122c3274] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3274))), 0x122a09dcu);
  /* 122a09dc mov edx, dword ptr [0x122c0884] */
  EDX = (r32((uint32_t)(0x122c0884)));
  /* 122a09e2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 122a09e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a09e7 jne 0x122a09f3 */
  if (!C.zf) goto L_122a09f3;
  /* 122a09e9 mov dword ptr [0x122c0884], 0 */
  w32((uint32_t)(0x122c0884), (0x0u));
L_122a09f3:;
  /* 122a09f3 pop ebp */
  EBP = (pop32());
  /* 122a09f4 ret  */
  ESPCHK(0x122a09b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a00 @ 0x122a0a00 (172 bytes, 54 insns) */
void f_122a0a00(void) {
  FTRACE(0x122a0a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0a00 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0a01 mov ebp, esp */
  EBP = (ESP);
  /* 122a0a03 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0a06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0a09 push eax */
  push32((uint32_t)(EAX));
  /* 122a0a0a call 0x122a0e40 */
  push32(0x122a0a0fu); f_122a0e40();
  /* 122a0a0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0a12 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 122a0a15 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 122a0a17 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 122a0a1a push ecx */
  push32((uint32_t)(ECX));
  /* 122a0a1b mov edx, dword ptr [0x122c0870] */
  EDX = (r32((uint32_t)(0x122c0870)));
  /* 122a0a21 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122a0a23 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0a25 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 122a0a2b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0a31 push edx */
  push32((uint32_t)(EDX));
  /* 122a0a32 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a0a35 push eax */
  push32((uint32_t)(EAX));
  /* 122a0a36 call dword ptr [0x122c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c088c))), 0x122a0a3cu);
  /* 122a0a3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a0a3e jne 0x122a0a51 */
  if (!C.zf) goto L_122a0a51;
  /* 122a0a40 mov dword ptr [0x122c0884], 0 */
  w32((uint32_t)(0x122c0884), (0x0u));
  /* 122a0a4a mov eax, 1 */
  EAX = (0x1u);
  /* 122a0a4f jmp 0x122a0aa6 */
  goto L_122a0aa6;
L_122a0a51:;
  /* 122a0a51 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 122a0a54 push ecx */
  push32((uint32_t)(ECX));
  /* 122a0a55 mov edx, dword ptr [0x122c0880] */
  EDX = (r32((uint32_t)(0x122c0880)));
  /* 122a0a5b push edx */
  push32((uint32_t)(EDX));
  /* 122a0a5c call 0x122a2a80 */
  push32(0x122a0a61u); f_122a2a80();
  /* 122a0a61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0a64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a0a66 jne 0x122a0a99 */
  if (!C.zf) goto L_122a0a99;
  /* 122a0a68 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a0a6b push eax */
  push32((uint32_t)(EAX));
  /* 122a0a6c call 0x122a0b80 */
  push32(0x122a0a71u); f_122a0b80();
  /* 122a0a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0a74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a0a76 je 0x122a0a99 */
  if (C.zf) goto L_122a0a99;
  /* 122a0a78 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122a0a7b mov dword ptr [0x122c0888], ecx */
  w32((uint32_t)(0x122c0888), (ECX));
  /* 122a0a81 mov edx, dword ptr [0x122c0888] */
  EDX = (r32((uint32_t)(0x122c0888)));
  /* 122a0a87 mov dword ptr [0x122c086c], edx */
  w32((uint32_t)(0x122c086c), (EDX));
  /* 122a0a8d mov eax, dword ptr [0x122c0884] */
  EAX = (r32((uint32_t)(0x122c0884)));
  /* 122a0a92 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 122a0a94 mov dword ptr [0x122c0884], eax */
  w32((uint32_t)(0x122c0884), (EAX));
L_122a0a99:;
  /* 122a0a99 mov eax, dword ptr [0x122c0884] */
  EAX = (r32((uint32_t)(0x122c0884)));
  /* 122a0a9e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 122a0aa1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122a0aa3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0aa5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_122a0aa6:;
  /* 122a0aa6 mov esp, ebp */
  ESP = (EBP);
  /* 122a0aa8 pop ebp */
  EBP = (pop32());
  /* 122a0aa9 ret 4 */
  ESPCHK(0x122a0a00u, _esp0);
  ESP += 8; return;
}

/* FUN_10010ab0 @ 0x122a0ab0 (43 bytes, 11 insns) */
void f_122a0ab0(void) {
  FTRACE(0x122a0ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0ab1 mov ebp, esp */
  EBP = (ESP);
  /* 122a0ab3 mov eax, dword ptr [0x122c0884] */
  EAX = (r32((uint32_t)(0x122c0884)));
  /* 122a0ab8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 122a0abd mov dword ptr [0x122c0884], eax */
  w32((uint32_t)(0x122c0884), (EAX));
  /* 122a0ac2 call dword ptr [0x122c3264] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3264))), 0x122a0ac8u);
  /* 122a0ac8 mov dword ptr [0x122c0888], eax */
  w32((uint32_t)(0x122c0888), (EAX));
  /* 122a0acd mov ecx, dword ptr [0x122c0888] */
  ECX = (r32((uint32_t)(0x122c0888)));
  /* 122a0ad3 mov dword ptr [0x122c086c], ecx */
  w32((uint32_t)(0x122c086c), (ECX));
  /* 122a0ad9 pop ebp */
  EBP = (pop32());
  /* 122a0ada ret  */
  ESPCHK(0x122a0ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ae0 @ 0x122a0ae0 (155 bytes, 57 insns) */
void f_122a0ae0(void) {
  FTRACE(0x122a0ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0ae1 mov ebp, esp */
  EBP = (ESP);
  /* 122a0ae3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0ae6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0aea je 0x122a0b0b */
  if (C.zf) goto L_122a0b0b;
  /* 122a0aec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0aef movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122a0af2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a0af4 je 0x122a0b0b */
  if (C.zf) goto L_122a0b0b;
  /* 122a0af6 push 0x122bca6c */
  push32((uint32_t)(0x122bca6cu));
  /* 122a0afb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0afe push edx */
  push32((uint32_t)(EDX));
  /* 122a0aff call 0x122a0040 */
  push32(0x122a0b04u); f_122a0040();
  /* 122a0b04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0b07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a0b09 jne 0x122a0b33 */
  if (!C.zf) goto L_122a0b33;
L_122a0b0b:;
  /* 122a0b0b push 8 */
  push32((uint32_t)(0x8u));
  /* 122a0b0d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 122a0b10 push eax */
  push32((uint32_t)(EAX));
  /* 122a0b11 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 122a0b16 mov ecx, dword ptr [0x122c0888] */
  ECX = (r32((uint32_t)(0x122c0888)));
  /* 122a0b1c push ecx */
  push32((uint32_t)(ECX));
  /* 122a0b1d call dword ptr [0x122c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c088c))), 0x122a0b23u);
  /* 122a0b23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a0b25 jne 0x122a0b2b */
  if (!C.zf) goto L_122a0b2b;
  /* 122a0b27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a0b29 jmp 0x122a0b77 */
  goto L_122a0b77;
L_122a0b2b:;
  /* 122a0b2b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 122a0b2e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 122a0b31 jmp 0x122a0b6b */
  goto L_122a0b6b;
L_122a0b33:;
  /* 122a0b33 push 0x122bca68 */
  push32((uint32_t)(0x122bca68u));
  /* 122a0b38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0b3b push eax */
  push32((uint32_t)(EAX));
  /* 122a0b3c call 0x122a0040 */
  push32(0x122a0b41u); f_122a0040();
  /* 122a0b41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0b44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a0b46 jne 0x122a0b6b */
  if (!C.zf) goto L_122a0b6b;
  /* 122a0b48 push 8 */
  push32((uint32_t)(0x8u));
  /* 122a0b4a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 122a0b4d push ecx */
  push32((uint32_t)(ECX));
  /* 122a0b4e push 0xb */
  push32((uint32_t)(0xbu));
  /* 122a0b50 mov edx, dword ptr [0x122c0888] */
  EDX = (r32((uint32_t)(0x122c0888)));
  /* 122a0b56 push edx */
  push32((uint32_t)(EDX));
  /* 122a0b57 call dword ptr [0x122c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c088c))), 0x122a0b5du);
  /* 122a0b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a0b5f jne 0x122a0b65 */
  if (!C.zf) goto L_122a0b65;
  /* 122a0b61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a0b63 jmp 0x122a0b77 */
  goto L_122a0b77;
L_122a0b65:;
  /* 122a0b65 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 122a0b68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_122a0b6b:;
  /* 122a0b6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0b6e push ecx */
  push32((uint32_t)(ECX));
  /* 122a0b6f call 0x122a2c60 */
  push32(0x122a0b74u); f_122a2c60();
  /* 122a0b74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122a0b77:;
  /* 122a0b77 mov esp, ebp */
  ESP = (EBP);
  /* 122a0b79 pop ebp */
  EBP = (pop32());
  /* 122a0b7a ret  */
  ESPCHK(0x122a0ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b80 @ 0x122a0b80 (79 bytes, 26 insns) */
void f_122a0b80(void) {
  FTRACE(0x122a0b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0b80 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0b81 mov ebp, esp */
  EBP = (ESP);
  /* 122a0b83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0b86 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 122a0b8a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 122a0b8e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122a0b95 jmp 0x122a0ba0 */
  goto L_122a0ba0;
L_122a0b97:;
  /* 122a0b97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a0b9a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0b9d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_122a0ba0:;
  /* 122a0ba0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0ba4 jae 0x122a0bc6 */
  if (!C.cf) goto L_122a0bc6;
  /* 122a0ba6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a0ba9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122a0baf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a0bb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a0bb4 mov cx, word ptr [eax*2 + 0x122bf9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x122bf9c4)));
  /* 122a0bbc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0bbe jne 0x122a0bc4 */
  if (!C.zf) goto L_122a0bc4;
  /* 122a0bc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a0bc2 jmp 0x122a0bcb */
  goto L_122a0bcb;
L_122a0bc4:;
  /* 122a0bc4 jmp 0x122a0b97 */
  goto L_122a0b97;
L_122a0bc6:;
  /* 122a0bc6 mov eax, 1 */
  EAX = (0x1u);
L_122a0bcb:;
  /* 122a0bcb mov esp, ebp */
  ESP = (EBP);
  /* 122a0bcd pop ebp */
  EBP = (pop32());
  /* 122a0bce ret  */
  ESPCHK(0x122a0b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bd0 @ 0x122a0bd0 (135 bytes, 48 insns) */
void f_122a0bd0(void) {
  FTRACE(0x122a0bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0bd1 mov ebp, esp */
  EBP = (ESP);
  /* 122a0bd3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0bd6 push esi */
  push32((uint32_t)(ESI));
  /* 122a0bd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0bda and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a0bdf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a0be4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a0be9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 122a0bec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a0bf1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a0bf4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 122a0bf6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 122a0bf9 push ecx */
  push32((uint32_t)(ECX));
  /* 122a0bfa push 1 */
  push32((uint32_t)(0x1u));
  /* 122a0bfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a0bff push edx */
  push32((uint32_t)(EDX));
  /* 122a0c00 call dword ptr [0x122c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c088c))), 0x122a0c06u);
  /* 122a0c06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a0c08 jne 0x122a0c0e */
  if (!C.zf) goto L_122a0c0e;
  /* 122a0c0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a0c0c jmp 0x122a0c52 */
  goto L_122a0c52;
L_122a0c0e:;
  /* 122a0c0e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 122a0c11 push eax */
  push32((uint32_t)(EAX));
  /* 122a0c12 call 0x122a0e40 */
  push32(0x122a0c17u); f_122a0e40();
  /* 122a0c17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0c1a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0c1d je 0x122a0c4d */
  if (C.zf) goto L_122a0c4d;
  /* 122a0c1f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0c23 je 0x122a0c4d */
  if (C.zf) goto L_122a0c4d;
  /* 122a0c25 mov ecx, dword ptr [0x122c087c] */
  ECX = (r32((uint32_t)(0x122c087c)));
  /* 122a0c2b push ecx */
  push32((uint32_t)(ECX));
  /* 122a0c2c call 0x122a0ec0 */
  push32(0x122a0c31u); f_122a0ec0();
  /* 122a0c31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0c34 mov esi, eax */
  ESI = (EAX);
  /* 122a0c36 mov edx, dword ptr [0x122c087c] */
  EDX = (r32((uint32_t)(0x122c087c)));
  /* 122a0c3c push edx */
  push32((uint32_t)(EDX));
  /* 122a0c3d call 0x122971e0 */
  push32(0x122a0c42u); f_122971e0();
  /* 122a0c42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0c45 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0c47 jne 0x122a0c4d */
  if (!C.zf) goto L_122a0c4d;
  /* 122a0c49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a0c4b jmp 0x122a0c52 */
  goto L_122a0c52;
L_122a0c4d:;
  /* 122a0c4d mov eax, 1 */
  EAX = (0x1u);
L_122a0c52:;
  /* 122a0c52 pop esi */
  ESI = (pop32());
  /* 122a0c53 mov esp, ebp */
  ESP = (EBP);
  /* 122a0c55 pop ebp */
  EBP = (pop32());
  /* 122a0c56 ret  */
  ESPCHK(0x122a0bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c60 @ 0x122a0c60 (77 bytes, 18 insns) */
void f_122a0c60(void) {
  FTRACE(0x122a0c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0c60 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0c61 mov ebp, esp */
  EBP = (ESP);
  /* 122a0c63 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0c69 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 122a0c73 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 122a0c79 push eax */
  push32((uint32_t)(EAX));
  /* 122a0c7a call dword ptr [0x122c3260] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3260))), 0x122a0c80u);
  /* 122a0c80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a0c82 je 0x122a0c99 */
  if (C.zf) goto L_122a0c99;
  /* 122a0c84 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0c8b jne 0x122a0c99 */
  if (!C.zf) goto L_122a0c99;
  /* 122a0c8d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 122a0c97 jmp 0x122a0ca3 */
  goto L_122a0ca3;
L_122a0c99:;
  /* 122a0c99 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_122a0ca3:;
  /* 122a0ca3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 122a0ca9 mov esp, ebp */
  ESP = (EBP);
  /* 122a0cab pop ebp */
  EBP = (pop32());
  /* 122a0cac ret  */
  ESPCHK(0x122a0c60u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x122a0cb0 (388 bytes, 118 insns) */
void f_122a0cb0(void) {
  FTRACE(0x122a0cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0cb1 mov ebp, esp */
  EBP = (ESP);
  /* 122a0cb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0cb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122a0cbd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 122a0cc4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_122a0ccb:;
  /* 122a0ccb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a0cce cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0cd1 jg 0x122a0e18 */
  if ((!C.zf&&C.sf==C.of)) goto L_122a0e18;
  /* 122a0cd7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a0cda add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0cdd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122a0cde sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0ce0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122a0ce2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122a0ce5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a0ce8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a0ceb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0cee cmp edx, dword ptr [ecx + 0x122bf520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x122bf520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0cf4 jne 0x122a0dee */
  if (!C.zf) goto L_122a0dee;
  /* 122a0cfa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a0cfd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122a0d00 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0d04 ja 0x122a0d27 */
  if ((!C.cf&&!C.zf)) goto L_122a0d27;
  /* 122a0d06 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0d0a je 0x122a0d99 */
  if (C.zf) goto L_122a0d99;
  /* 122a0d10 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0d14 je 0x122a0d44 */
  if (C.zf) goto L_122a0d44;
  /* 122a0d16 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0d1a je 0x122a0d66 */
  if (C.zf) goto L_122a0d66;
  /* 122a0d1c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0d20 je 0x122a0d88 */
  if (C.zf) goto L_122a0d88;
  /* 122a0d22 jmp 0x122a0db8 */
  goto L_122a0db8;
L_122a0d27:;
  /* 122a0d27 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0d2e je 0x122a0d55 */
  if (C.zf) goto L_122a0d55;
  /* 122a0d30 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0d37 je 0x122a0d77 */
  if (C.zf) goto L_122a0d77;
  /* 122a0d39 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0d40 je 0x122a0daa */
  if (C.zf) goto L_122a0daa;
  /* 122a0d42 jmp 0x122a0db8 */
  goto L_122a0db8;
L_122a0d44:;
  /* 122a0d44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a0d47 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a0d4a add ecx, 0x122bf524 */
  { uint32_t _a=(ECX),_b=(0x122bf524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0d50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122a0d53 jmp 0x122a0db8 */
  goto L_122a0db8;
L_122a0d55:;
  /* 122a0d55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a0d58 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a0d5b mov eax, dword ptr [edx + 0x122bf52c] */
  EAX = (r32((uint32_t)(EDX + 0x122bf52c)));
  /* 122a0d61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122a0d64 jmp 0x122a0db8 */
  goto L_122a0db8;
L_122a0d66:;
  /* 122a0d66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a0d69 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a0d6c add ecx, 0x122bf530 */
  { uint32_t _a=(ECX),_b=(0x122bf530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0d72 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122a0d75 jmp 0x122a0db8 */
  goto L_122a0db8;
L_122a0d77:;
  /* 122a0d77 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a0d7a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a0d7d mov eax, dword ptr [edx + 0x122bf534] */
  EAX = (r32((uint32_t)(EDX + 0x122bf534)));
  /* 122a0d83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122a0d86 jmp 0x122a0db8 */
  goto L_122a0db8;
L_122a0d88:;
  /* 122a0d88 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a0d8b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a0d8e add ecx, 0x122bf538 */
  { uint32_t _a=(ECX),_b=(0x122bf538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0d94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122a0d97 jmp 0x122a0db8 */
  goto L_122a0db8;
L_122a0d99:;
  /* 122a0d99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a0d9c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a0d9f add edx, 0x122bf53c */
  { uint32_t _a=(EDX),_b=(0x122bf53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0da5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122a0da8 jmp 0x122a0db8 */
  goto L_122a0db8;
L_122a0daa:;
  /* 122a0daa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a0dad imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a0db0 add eax, 0x122bf544 */
  { uint32_t _a=(EAX),_b=(0x122bf544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0db5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122a0db8:;
  /* 122a0db8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0dbc je 0x122a0dc4 */
  if (C.zf) goto L_122a0dc4;
  /* 122a0dbe cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0dc2 jge 0x122a0dc6 */
  if ((C.sf==C.of)) goto L_122a0dc6;
L_122a0dc4:;
  /* 122a0dc4 jmp 0x122a0e18 */
  goto L_122a0e18;
L_122a0dc6:;
  /* 122a0dc6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a0dc9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0dcc push ecx */
  push32((uint32_t)(ECX));
  /* 122a0dcd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a0dd0 push edx */
  push32((uint32_t)(EDX));
  /* 122a0dd1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a0dd4 push eax */
  push32((uint32_t)(EAX));
  /* 122a0dd5 call 0x12297bd0 */
  push32(0x122a0ddau); f_12297bd0();
  /* 122a0dda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0ddd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a0de0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0de3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 122a0de7 mov eax, 1 */
  EAX = (0x1u);
  /* 122a0dec jmp 0x122a0e2e */
  goto L_122a0e2e;
L_122a0dee:;
  /* 122a0dee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a0df1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a0df4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0df7 cmp eax, dword ptr [edx + 0x122bf520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x122bf520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0dfd jae 0x122a0e0a */
  if (!C.cf) goto L_122a0e0a;
  /* 122a0dff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a0e02 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0e05 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122a0e08 jmp 0x122a0e13 */
  goto L_122a0e13;
L_122a0e0a:;
  /* 122a0e0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a0e0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0e10 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_122a0e13:;
  /* 122a0e13 jmp 0x122a0ccb */
  goto L_122a0ccb;
L_122a0e18:;
  /* 122a0e18 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a0e1b push eax */
  push32((uint32_t)(EAX));
  /* 122a0e1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a0e1f push ecx */
  push32((uint32_t)(ECX));
  /* 122a0e20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a0e23 push edx */
  push32((uint32_t)(EDX));
  /* 122a0e24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0e27 push eax */
  push32((uint32_t)(EAX));
  /* 122a0e28 call dword ptr [0x122c326c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c326c))), 0x122a0e2eu);
L_122a0e2e:;
  /* 122a0e2e mov esp, ebp */
  ESP = (EBP);
  /* 122a0e30 pop ebp */
  EBP = (pop32());
  /* 122a0e31 ret 0x10 */
  ESPCHK(0x122a0cb0u, _esp0);
  ESP += 20; return;
}

/* FUN_10010e40 @ 0x122a0e40 (118 bytes, 42 insns) */
void f_122a0e40(void) {
  FTRACE(0x122a0e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0e40 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0e41 mov ebp, esp */
  EBP = (ESP);
  /* 122a0e43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0e46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_122a0e4d:;
  /* 122a0e4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0e50 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122a0e52 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 122a0e55 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122a0e59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0e5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0e5f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122a0e62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a0e64 je 0x122a0eaf */
  if (C.zf) goto L_122a0eaf;
  /* 122a0e66 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122a0e6a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0e6d jl 0x122a0e82 */
  if ((C.sf!=C.of)) goto L_122a0e82;
  /* 122a0e6f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122a0e73 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0e76 jg 0x122a0e82 */
  if ((!C.zf&&C.sf==C.of)) goto L_122a0e82;
  /* 122a0e78 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 122a0e7b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122a0e7d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 122a0e80 jmp 0x122a0e9c */
  goto L_122a0e9c;
L_122a0e82:;
  /* 122a0e82 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122a0e86 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0e89 jl 0x122a0e9c */
  if ((C.sf!=C.of)) goto L_122a0e9c;
  /* 122a0e8b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122a0e8f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0e92 jg 0x122a0e9c */
  if ((!C.zf&&C.sf==C.of)) goto L_122a0e9c;
  /* 122a0e94 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 122a0e97 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122a0e99 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_122a0e9c:;
  /* 122a0e9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a0e9f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 122a0ea2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122a0ea6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 122a0eaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a0ead jmp 0x122a0e4d */
  goto L_122a0e4d;
L_122a0eaf:;
  /* 122a0eaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a0eb2 mov esp, ebp */
  ESP = (EBP);
  /* 122a0eb4 pop ebp */
  EBP = (pop32());
  /* 122a0eb5 ret  */
  ESPCHK(0x122a0e40u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x122a0ec0 (101 bytes, 36 insns) */
void f_122a0ec0(void) {
  FTRACE(0x122a0ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0ec1 mov ebp, esp */
  EBP = (ESP);
  /* 122a0ec3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a0ec6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122a0ecd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0ed0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122a0ed2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 122a0ed5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0ed8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0edb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_122a0ede:;
  /* 122a0ede movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 122a0ee2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0ee5 jl 0x122a0ef0 */
  if ((C.sf!=C.of)) goto L_122a0ef0;
  /* 122a0ee7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 122a0eeb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0eee jle 0x122a0f02 */
  if ((C.zf||C.sf!=C.of)) goto L_122a0f02;
L_122a0ef0:;
  /* 122a0ef0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 122a0ef4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0ef7 jl 0x122a0f1e */
  if ((C.sf!=C.of)) goto L_122a0f1e;
  /* 122a0ef9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 122a0efd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0f00 jg 0x122a0f1e */
  if ((!C.zf&&C.sf==C.of)) goto L_122a0f1e;
L_122a0f02:;
  /* 122a0f02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a0f05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0f08 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122a0f0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0f0e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a0f10 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 122a0f13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0f16 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0f19 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 122a0f1c jmp 0x122a0ede */
  goto L_122a0ede;
L_122a0f1e:;
  /* 122a0f1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a0f21 mov esp, ebp */
  ESP = (EBP);
  /* 122a0f23 pop ebp */
  EBP = (pop32());
  /* 122a0f24 ret  */
  ESPCHK(0x122a0ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f30 @ 0x122a0f30 (122 bytes, 39 insns) */
void f_122a0f30(void) {
  FTRACE(0x122a0f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0f30 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0f31 mov ebp, esp */
  EBP = (ESP);
  /* 122a0f33 push ecx */
  push32((uint32_t)(ECX));
  /* 122a0f34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0f37 cmp eax, dword ptr [0x122c211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122c211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0f3d jae 0x122a0f61 */
  if (!C.cf) goto L_122a0f61;
  /* 122a0f3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0f42 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122a0f45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0f48 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 122a0f4b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a0f4e mov eax, dword ptr [ecx*4 + 0x122c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122c1fe0)));
  /* 122a0f55 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 122a0f5a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122a0f5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a0f5f jne 0x122a0f7c */
  if (!C.zf) goto L_122a0f7c;
L_122a0f61:;
  /* 122a0f61 call 0x1229c280 */
  push32(0x122a0f66u); f_1229c280();
  /* 122a0f66 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 122a0f6c call 0x1229c290 */
  push32(0x122a0f71u); f_1229c290();
  /* 122a0f71 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122a0f77 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a0f7a jmp 0x122a0fa6 */
  goto L_122a0fa6;
L_122a0f7c:;
  /* 122a0f7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0f7f push edx */
  push32((uint32_t)(EDX));
  /* 122a0f80 call 0x1229daa0 */
  push32(0x122a0f85u); f_1229daa0();
  /* 122a0f85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0f88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0f8b push eax */
  push32((uint32_t)(EAX));
  /* 122a0f8c call 0x122a0fb0 */
  push32(0x122a0f91u); f_122a0fb0();
  /* 122a0f91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0f94 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a0f97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0f9a push ecx */
  push32((uint32_t)(ECX));
  /* 122a0f9b call 0x1229db30 */
  push32(0x122a0fa0u); f_1229db30();
  /* 122a0fa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0fa3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_122a0fa6:;
  /* 122a0fa6 mov esp, ebp */
  ESP = (EBP);
  /* 122a0fa8 pop ebp */
  EBP = (pop32());
  /* 122a0fa9 ret  */
  ESPCHK(0x122a0f30u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x122a0fb0 (170 bytes, 59 insns) */
void f_122a0fb0(void) {
  FTRACE(0x122a0fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a0fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a0fb1 mov ebp, esp */
  EBP = (ESP);
  /* 122a0fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 122a0fb4 push esi */
  push32((uint32_t)(ESI));
  /* 122a0fb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0fb8 push eax */
  push32((uint32_t)(EAX));
  /* 122a0fb9 call 0x1229d920 */
  push32(0x122a0fbeu); f_1229d920();
  /* 122a0fbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0fc1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0fc4 je 0x122a1003 */
  if (C.zf) goto L_122a1003;
  /* 122a0fc6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0fca je 0x122a0fd2 */
  if (C.zf) goto L_122a0fd2;
  /* 122a0fcc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0fd0 jne 0x122a0fec */
  if (!C.zf) goto L_122a0fec;
L_122a0fd2:;
  /* 122a0fd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 122a0fd4 call 0x1229d920 */
  push32(0x122a0fd9u); f_1229d920();
  /* 122a0fd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0fdc mov esi, eax */
  ESI = (EAX);
  /* 122a0fde push 2 */
  push32((uint32_t)(0x2u));
  /* 122a0fe0 call 0x1229d920 */
  push32(0x122a0fe5u); f_1229d920();
  /* 122a0fe5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0fe8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a0fea je 0x122a1003 */
  if (C.zf) goto L_122a1003;
L_122a0fec:;
  /* 122a0fec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a0fef push ecx */
  push32((uint32_t)(ECX));
  /* 122a0ff0 call 0x1229d920 */
  push32(0x122a0ff5u); f_1229d920();
  /* 122a0ff5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a0ff8 push eax */
  push32((uint32_t)(EAX));
  /* 122a0ff9 call dword ptr [0x122c3268] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3268))), 0x122a0fffu);
  /* 122a0fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a1001 je 0x122a100c */
  if (C.zf) goto L_122a100c;
L_122a1003:;
  /* 122a1003 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122a100a jmp 0x122a1015 */
  goto L_122a1015;
L_122a100c:;
  /* 122a100c call dword ptr [0x122c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32e0))), 0x122a1012u);
  /* 122a1012 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122a1015:;
  /* 122a1015 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a1018 push edx */
  push32((uint32_t)(EDX));
  /* 122a1019 call 0x1229d840 */
  push32(0x122a101eu); f_1229d840();
  /* 122a101e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1021 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a1024 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 122a1027 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a102a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 122a102d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a1030 mov edx, dword ptr [eax*4 + 0x122c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122c1fe0)));
  /* 122a1037 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 122a103c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1040 je 0x122a1053 */
  if (C.zf) goto L_122a1053;
  /* 122a1042 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a1045 push eax */
  push32((uint32_t)(EAX));
  /* 122a1046 call 0x1229c1e0 */
  push32(0x122a104bu); f_1229c1e0();
  /* 122a104b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a104e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a1051 jmp 0x122a1055 */
  goto L_122a1055;
L_122a1053:;
  /* 122a1053 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122a1055:;
  /* 122a1055 pop esi */
  ESI = (pop32());
  /* 122a1056 mov esp, ebp */
  ESP = (EBP);
  /* 122a1058 pop ebp */
  EBP = (pop32());
  /* 122a1059 ret  */
  ESPCHK(0x122a0fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011060 @ 0x122a1060 (146 bytes, 52 insns) */
void f_122a1060(void) {
  FTRACE(0x122a1060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a1060 push ebp */
  push32((uint32_t)(EBP));
  /* 122a1061 mov ebp, esp */
  EBP = (ESP);
  /* 122a1063 push ebx */
  push32((uint32_t)(EBX));
  /* 122a1064 push esi */
  push32((uint32_t)(ESI));
  /* 122a1065 push edi */
  push32((uint32_t)(EDI));
L_122a1066:;
  /* 122a1066 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a106a jne 0x122a108a */
  if (!C.zf) goto L_122a108a;
  /* 122a106c push 0x122bc3a8 */
  push32((uint32_t)(0x122bc3a8u));
  /* 122a1071 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a1073 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 122a1075 push 0x122bca70 */
  push32((uint32_t)(0x122bca70u));
  /* 122a107a push 2 */
  push32((uint32_t)(0x2u));
  /* 122a107c call 0x12293470 */
  push32(0x122a1081u); f_12293470();
  /* 122a1081 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1084 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1087 jne 0x122a108a */
  if (!C.zf) goto L_122a108a;
  /* 122a1089 int3  */
  x86_unimpl("int3 @ 0x122a1089");
L_122a108a:;
  /* 122a108a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a108c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a108e jne 0x122a1066 */
  if (!C.zf) goto L_122a1066;
  /* 122a1090 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a1093 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122a1096 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 122a109c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a109e je 0x122a10ed */
  if (C.zf) goto L_122a10ed;
  /* 122a10a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a10a3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 122a10a6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 122a10a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a10ab je 0x122a10ed */
  if (C.zf) goto L_122a10ed;
  /* 122a10ad push 2 */
  push32((uint32_t)(0x2u));
  /* 122a10af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a10b2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122a10b5 push eax */
  push32((uint32_t)(EAX));
  /* 122a10b6 call 0x12294e40 */
  push32(0x122a10bbu); f_12294e40();
  /* 122a10bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a10be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a10c1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122a10c4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 122a10ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a10cd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 122a10d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a10d3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 122a10d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a10dc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 122a10e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a10e6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_122a10ed:;
  /* 122a10ed pop edi */
  EDI = (pop32());
  /* 122a10ee pop esi */
  ESI = (pop32());
  /* 122a10ef pop ebx */
  EBX = (pop32());
  /* 122a10f0 pop ebp */
  EBP = (pop32());
  /* 122a10f1 ret  */
  ESPCHK(0x122a1060u, _esp0);
  ESP += 4; return;
}

/* FUN_10011100 @ 0x122a1100 (289 bytes, 97 insns) */
void f_122a1100(void) {
  FTRACE(0x122a1100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a1100 push ebp */
  push32((uint32_t)(EBP));
  /* 122a1101 mov ebp, esp */
  EBP = (ESP);
  /* 122a1103 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a1106 push esi */
  push32((uint32_t)(ESI));
  /* 122a1107 mov eax, dword ptr [0x122bfc98] */
  EAX = (r32((uint32_t)(0x122bfc98)));
  /* 122a110c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122a110f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122a1116 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122a111d jmp 0x122a1128 */
  goto L_122a1128;
L_122a111f:;
  /* 122a111f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a1122 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1125 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_122a1128:;
  /* 122a1128 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a112c jae 0x122a1161 */
  if (!C.cf) goto L_122a1161;
  /* 122a112e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a1131 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a1134 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 122a1137 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1138 call 0x122971e0 */
  push32(0x122a113du); f_122971e0();
  /* 122a113d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1140 mov esi, eax */
  ESI = (EAX);
  /* 122a1142 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a1145 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a1148 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 122a114c push ecx */
  push32((uint32_t)(ECX));
  /* 122a114d call 0x122971e0 */
  push32(0x122a1152u); f_122971e0();
  /* 122a1152 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1155 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1158 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 122a115c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122a115f jmp 0x122a111f */
  goto L_122a111f;
L_122a1161:;
  /* 122a1161 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a1164 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1167 push eax */
  push32((uint32_t)(EAX));
  /* 122a1168 call 0x12294390 */
  push32(0x122a116du); f_12294390();
  /* 122a116d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1170 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a1173 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1177 je 0x122a1219 */
  if (C.zf) goto L_122a1219;
  /* 122a117d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a1180 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122a1183 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122a118a jmp 0x122a1195 */
  goto L_122a1195;
L_122a118c:;
  /* 122a118c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a118f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1192 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_122a1195:;
  /* 122a1195 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1199 jae 0x122a120a */
  if (!C.cf) goto L_122a120a;
  /* 122a119b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a119e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 122a11a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a11a4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a11a7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122a11aa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a11ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a11b0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 122a11b3 push ecx */
  push32((uint32_t)(ECX));
  /* 122a11b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a11b7 push edx */
  push32((uint32_t)(EDX));
  /* 122a11b8 call 0x12297360 */
  push32(0x122a11bdu); f_12297360();
  /* 122a11bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a11c0 push eax */
  push32((uint32_t)(EAX));
  /* 122a11c1 call 0x122971e0 */
  push32(0x122a11c6u); f_122971e0();
  /* 122a11c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a11c9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a11cc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a11ce mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122a11d1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a11d4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 122a11d7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a11da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a11dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122a11e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a11e3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a11e6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 122a11ea push eax */
  push32((uint32_t)(EAX));
  /* 122a11eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a11ee push ecx */
  push32((uint32_t)(ECX));
  /* 122a11ef call 0x12297360 */
  push32(0x122a11f4u); f_12297360();
  /* 122a11f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a11f7 push eax */
  push32((uint32_t)(EAX));
  /* 122a11f8 call 0x122971e0 */
  push32(0x122a11fdu); f_122971e0();
  /* 122a11fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1200 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a1203 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1205 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122a1208 jmp 0x122a118c */
  goto L_122a118c;
L_122a120a:;
  /* 122a120a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a120d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 122a1210 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a1213 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1216 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_122a1219:;
  /* 122a1219 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a121c pop esi */
  ESI = (pop32());
  /* 122a121d mov esp, ebp */
  ESP = (EBP);
  /* 122a121f pop ebp */
  EBP = (pop32());
  /* 122a1220 ret  */
  ESPCHK(0x122a1100u, _esp0);
  ESP += 4; return;
}

/* FUN_10011230 @ 0x122a1230 (291 bytes, 97 insns) */
void f_122a1230(void) {
  FTRACE(0x122a1230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a1230 push ebp */
  push32((uint32_t)(EBP));
  /* 122a1231 mov ebp, esp */
  EBP = (ESP);
  /* 122a1233 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a1236 push esi */
  push32((uint32_t)(ESI));
  /* 122a1237 mov eax, dword ptr [0x122bfc98] */
  EAX = (r32((uint32_t)(0x122bfc98)));
  /* 122a123c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122a123f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122a1246 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122a124d jmp 0x122a1258 */
  goto L_122a1258;
L_122a124f:;
  /* 122a124f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a1252 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1255 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_122a1258:;
  /* 122a1258 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a125c jae 0x122a1292 */
  if (!C.cf) goto L_122a1292;
  /* 122a125e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a1261 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a1264 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 122a1268 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1269 call 0x122971e0 */
  push32(0x122a126eu); f_122971e0();
  /* 122a126e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1271 mov esi, eax */
  ESI = (EAX);
  /* 122a1273 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a1276 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a1279 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 122a127d push ecx */
  push32((uint32_t)(ECX));
  /* 122a127e call 0x122971e0 */
  push32(0x122a1283u); f_122971e0();
  /* 122a1283 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1286 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1289 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 122a128d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122a1290 jmp 0x122a124f */
  goto L_122a124f;
L_122a1292:;
  /* 122a1292 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a1295 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1298 push eax */
  push32((uint32_t)(EAX));
  /* 122a1299 call 0x12294390 */
  push32(0x122a129eu); f_12294390();
  /* 122a129e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a12a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a12a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a12a8 je 0x122a134b */
  if (C.zf) goto L_122a134b;
  /* 122a12ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a12b1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122a12b4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122a12bb jmp 0x122a12c6 */
  goto L_122a12c6;
L_122a12bd:;
  /* 122a12bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a12c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a12c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_122a12c6:;
  /* 122a12c6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a12ca jae 0x122a133c */
  if (!C.cf) goto L_122a133c;
  /* 122a12cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a12cf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 122a12d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a12d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a12d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122a12db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a12de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a12e1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 122a12e5 push ecx */
  push32((uint32_t)(ECX));
  /* 122a12e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a12e9 push edx */
  push32((uint32_t)(EDX));
  /* 122a12ea call 0x12297360 */
  push32(0x122a12efu); f_12297360();
  /* 122a12ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a12f2 push eax */
  push32((uint32_t)(EAX));
  /* 122a12f3 call 0x122971e0 */
  push32(0x122a12f8u); f_122971e0();
  /* 122a12f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a12fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a12fe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1300 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122a1303 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a1306 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 122a1309 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a130c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a130f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122a1312 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a1315 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a1318 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 122a131c push eax */
  push32((uint32_t)(EAX));
  /* 122a131d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a1320 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1321 call 0x12297360 */
  push32(0x122a1326u); f_12297360();
  /* 122a1326 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1329 push eax */
  push32((uint32_t)(EAX));
  /* 122a132a call 0x122971e0 */
  push32(0x122a132fu); f_122971e0();
  /* 122a132f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1332 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a1335 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1337 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122a133a jmp 0x122a12bd */
  goto L_122a12bd;
L_122a133c:;
  /* 122a133c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a133f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 122a1342 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a1345 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1348 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_122a134b:;
  /* 122a134b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a134e pop esi */
  ESI = (pop32());
  /* 122a134f mov esp, ebp */
  ESP = (EBP);
  /* 122a1351 pop ebp */
  EBP = (pop32());
  /* 122a1352 ret  */
  ESPCHK(0x122a1230u, _esp0);
  ESP += 4; return;
}

/* FUN_10011360 @ 0x122a1360 (878 bytes, 273 insns) */
void f_122a1360(void) {
  FTRACE(0x122a1360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a1360 push ebp */
  push32((uint32_t)(EBP));
  /* 122a1361 mov ebp, esp */
  EBP = (ESP);
  /* 122a1363 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a1366 push esi */
  push32((uint32_t)(ESI));
  /* 122a1367 mov eax, dword ptr [0x122bfc98] */
  EAX = (r32((uint32_t)(0x122bfc98)));
  /* 122a136c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122a136f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122a1376 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122a137d jmp 0x122a1388 */
  goto L_122a1388;
L_122a137f:;
  /* 122a137f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a1382 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1385 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_122a1388:;
  /* 122a1388 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a138c jae 0x122a13c1 */
  if (!C.cf) goto L_122a13c1;
  /* 122a138e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a1391 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a1394 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 122a1397 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1398 call 0x122971e0 */
  push32(0x122a139du); f_122971e0();
  /* 122a139d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a13a0 mov esi, eax */
  ESI = (EAX);
  /* 122a13a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a13a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a13a8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 122a13ac push ecx */
  push32((uint32_t)(ECX));
  /* 122a13ad call 0x122971e0 */
  push32(0x122a13b2u); f_122971e0();
  /* 122a13b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a13b5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a13b8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 122a13bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122a13bf jmp 0x122a137f */
  goto L_122a137f;
L_122a13c1:;
  /* 122a13c1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122a13c8 jmp 0x122a13d3 */
  goto L_122a13d3;
L_122a13ca:;
  /* 122a13ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a13cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a13d0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_122a13d3:;
  /* 122a13d3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a13d7 jae 0x122a140d */
  if (!C.cf) goto L_122a140d;
  /* 122a13d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a13dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a13df mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 122a13e3 push eax */
  push32((uint32_t)(EAX));
  /* 122a13e4 call 0x122971e0 */
  push32(0x122a13e9u); f_122971e0();
  /* 122a13e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a13ec mov esi, eax */
  ESI = (EAX);
  /* 122a13ee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a13f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a13f4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 122a13f8 push eax */
  push32((uint32_t)(EAX));
  /* 122a13f9 call 0x122971e0 */
  push32(0x122a13feu); f_122971e0();
  /* 122a13fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1401 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1404 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 122a1408 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122a140b jmp 0x122a13ca */
  goto L_122a13ca;
L_122a140d:;
  /* 122a140d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a1410 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 122a1416 push eax */
  push32((uint32_t)(EAX));
  /* 122a1417 call 0x122971e0 */
  push32(0x122a141cu); f_122971e0();
  /* 122a141c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a141f mov esi, eax */
  ESI = (EAX);
  /* 122a1421 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a1424 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 122a142a push edx */
  push32((uint32_t)(EDX));
  /* 122a142b call 0x122971e0 */
  push32(0x122a1430u); f_122971e0();
  /* 122a1430 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1433 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1436 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 122a143a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122a143d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a1440 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 122a1446 push edx */
  push32((uint32_t)(EDX));
  /* 122a1447 call 0x122971e0 */
  push32(0x122a144cu); f_122971e0();
  /* 122a144c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a144f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a1452 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122a1456 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122a1459 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a145c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 122a1462 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1463 call 0x122971e0 */
  push32(0x122a1468u); f_122971e0();
  /* 122a1468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a146b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a146e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 122a1472 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122a1475 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a1478 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 122a147e push edx */
  push32((uint32_t)(EDX));
  /* 122a147f call 0x122971e0 */
  push32(0x122a1484u); f_122971e0();
  /* 122a1484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1487 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a148a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122a148e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122a1491 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a1494 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1499 push eax */
  push32((uint32_t)(EAX));
  /* 122a149a call 0x12294390 */
  push32(0x122a149fu); f_12294390();
  /* 122a149f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a14a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a14a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a14a9 je 0x122a16c6 */
  if (C.zf) goto L_122a16c6;
  /* 122a14af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a14b2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 122a14b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a14b8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a14be mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122a14c1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 122a14c6 mov eax, dword ptr [0x122bfc98] */
  EAX = (r32((uint32_t)(0x122bfc98)));
  /* 122a14cb push eax */
  push32((uint32_t)(EAX));
  /* 122a14cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a14cf push ecx */
  push32((uint32_t)(ECX));
  /* 122a14d0 call 0x1229ac90 */
  push32(0x122a14d5u); f_1229ac90();
  /* 122a14d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a14d8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122a14df jmp 0x122a14ea */
  goto L_122a14ea;
L_122a14e1:;
  /* 122a14e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a14e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a14e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_122a14ea:;
  /* 122a14ea cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a14ee jae 0x122a155e */
  if (!C.cf) goto L_122a155e;
  /* 122a14f0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a14f3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122a14f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a14f9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 122a14fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a14ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a1502 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 122a1505 push edx */
  push32((uint32_t)(EDX));
  /* 122a1506 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a1509 push eax */
  push32((uint32_t)(EAX));
  /* 122a150a call 0x12297360 */
  push32(0x122a150fu); f_12297360();
  /* 122a150f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1512 push eax */
  push32((uint32_t)(EAX));
  /* 122a1513 call 0x122971e0 */
  push32(0x122a1518u); f_122971e0();
  /* 122a1518 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a151b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a151e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122a1522 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122a1525 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a1528 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122a152b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a152e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 122a1532 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a1535 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a1538 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 122a153c push edx */
  push32((uint32_t)(EDX));
  /* 122a153d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a1540 push eax */
  push32((uint32_t)(EAX));
  /* 122a1541 call 0x12297360 */
  push32(0x122a1546u); f_12297360();
  /* 122a1546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1549 push eax */
  push32((uint32_t)(EAX));
  /* 122a154a call 0x122971e0 */
  push32(0x122a154fu); f_122971e0();
  /* 122a154f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1552 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a1555 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122a1559 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122a155c jmp 0x122a14e1 */
  goto L_122a14e1;
L_122a155e:;
  /* 122a155e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122a1565 jmp 0x122a1570 */
  goto L_122a1570;
L_122a1567:;
  /* 122a1567 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a156a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a156d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_122a1570:;
  /* 122a1570 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1574 jae 0x122a15e6 */
  if (!C.cf) goto L_122a15e6;
  /* 122a1576 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a1579 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122a157c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a157f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 122a1583 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a1586 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a1589 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 122a158d push eax */
  push32((uint32_t)(EAX));
  /* 122a158e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a1591 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1592 call 0x12297360 */
  push32(0x122a1597u); f_12297360();
  /* 122a1597 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a159a push eax */
  push32((uint32_t)(EAX));
  /* 122a159b call 0x122971e0 */
  push32(0x122a15a0u); f_122971e0();
  /* 122a15a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a15a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a15a6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 122a15aa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122a15ad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a15b0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122a15b3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a15b6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 122a15ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a15bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a15c0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 122a15c4 push eax */
  push32((uint32_t)(EAX));
  /* 122a15c5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a15c8 push ecx */
  push32((uint32_t)(ECX));
  /* 122a15c9 call 0x12297360 */
  push32(0x122a15ceu); f_12297360();
  /* 122a15ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a15d1 push eax */
  push32((uint32_t)(EAX));
  /* 122a15d2 call 0x122971e0 */
  push32(0x122a15d7u); f_122971e0();
  /* 122a15d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a15da mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a15dd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 122a15e1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122a15e4 jmp 0x122a1567 */
  goto L_122a1567;
L_122a15e6:;
  /* 122a15e6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122a15e9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a15ec mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 122a15f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a15f5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 122a15fb push ecx */
  push32((uint32_t)(ECX));
  /* 122a15fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a15ff push edx */
  push32((uint32_t)(EDX));
  /* 122a1600 call 0x12297360 */
  push32(0x122a1605u); f_12297360();
  /* 122a1605 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1608 push eax */
  push32((uint32_t)(EAX));
  /* 122a1609 call 0x122971e0 */
  push32(0x122a160eu); f_122971e0();
  /* 122a160e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1611 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a1614 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122a1618 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122a161b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122a161e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a1621 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 122a1627 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a162a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 122a1630 push eax */
  push32((uint32_t)(EAX));
  /* 122a1631 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a1634 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1635 call 0x12297360 */
  push32(0x122a163au); f_12297360();
  /* 122a163a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a163d push eax */
  push32((uint32_t)(EAX));
  /* 122a163e call 0x122971e0 */
  push32(0x122a1643u); f_122971e0();
  /* 122a1643 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1646 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a1649 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 122a164d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122a1650 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122a1653 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a1656 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 122a165c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a165f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 122a1665 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1666 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a1669 push edx */
  push32((uint32_t)(EDX));
  /* 122a166a call 0x12297360 */
  push32(0x122a166fu); f_12297360();
  /* 122a166f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1672 push eax */
  push32((uint32_t)(EAX));
  /* 122a1673 call 0x122971e0 */
  push32(0x122a1678u); f_122971e0();
  /* 122a1678 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a167b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a167e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122a1682 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122a1685 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122a1688 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a168b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 122a1691 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a1694 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 122a169a push eax */
  push32((uint32_t)(EAX));
  /* 122a169b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a169e push ecx */
  push32((uint32_t)(ECX));
  /* 122a169f call 0x12297360 */
  push32(0x122a16a4u); f_12297360();
  /* 122a16a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a16a7 push eax */
  push32((uint32_t)(EAX));
  /* 122a16a8 call 0x122971e0 */
  push32(0x122a16adu); f_122971e0();
  /* 122a16ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a16b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a16b3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 122a16b7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122a16ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122a16bd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a16c0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_122a16c6:;
  /* 122a16c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a16c9 pop esi */
  ESI = (pop32());
  /* 122a16ca mov esp, ebp */
  ESP = (EBP);
  /* 122a16cc pop ebp */
  EBP = (pop32());
  /* 122a16cd ret  */
  ESPCHK(0x122a1360u, _esp0);
  ESP += 4; return;
}

/* FUN_100116d0 @ 0x122a16d0 (31 bytes, 15 insns) */
void f_122a16d0(void) {
  FTRACE(0x122a16d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a16d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a16d1 mov ebp, esp */
  EBP = (ESP);
  /* 122a16d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a16d5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a16d8 push eax */
  push32((uint32_t)(EAX));
  /* 122a16d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a16dc push ecx */
  push32((uint32_t)(ECX));
  /* 122a16dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a16e0 push edx */
  push32((uint32_t)(EDX));
  /* 122a16e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a16e4 push eax */
  push32((uint32_t)(EAX));
  /* 122a16e5 call 0x122a16f0 */
  push32(0x122a16eau); f_122a16f0();
  /* 122a16ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a16ed pop ebp */
  EBP = (pop32());
  /* 122a16ee ret  */
  ESPCHK(0x122a16d0u, _esp0);
  ESP += 4; return;
}

