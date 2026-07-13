#include "recomp.h"

/* FUN_10008620 @ 0x11098620 (10 bytes, 5 insns) */
void f_11098620(void) {
  FTRACE(0x11098620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11098620 push ebp */
  push32((uint32_t)(EBP));
  /* 11098621 mov ebp, esp */
  EBP = (ESP);
  /* 11098623 mov eax, dword ptr [0x110bec94] */
  EAX = (r32((uint32_t)(0x110bec94)));
  /* 11098628 pop ebp */
  EBP = (pop32());
  /* 11098629 ret  */
  ESPCHK(0x11098620u, _esp0);
  ESP += 4; return;
}

/* FUN_10008630 @ 0x11098630 (31 bytes, 11 insns) */
void f_11098630(void) {
  FTRACE(0x11098630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11098630 push ebp */
  push32((uint32_t)(EBP));
  /* 11098631 mov ebp, esp */
  EBP = (ESP);
  /* 11098633 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109863a jbe 0x11098640 */
  if ((C.cf||C.zf)) goto L_11098640;
  /* 1109863c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109863e jmp 0x1109864d */
  goto L_1109864d;
L_11098640:;
  /* 11098640 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098643 mov dword ptr [0x110bec94], eax */
  w32((uint32_t)(0x110bec94), (EAX));
  /* 11098648 mov eax, 1 */
  EAX = (0x1u);
L_1109864d:;
  /* 1109864d pop ebp */
  EBP = (pop32());
  /* 1109864e ret  */
  ESPCHK(0x11098630u, _esp0);
  ESP += 4; return;
}

/* FUN_10008650 @ 0x11098650 (89 bytes, 20 insns) */
void f_11098650(void) {
  FTRACE(0x11098650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11098650 push ebp */
  push32((uint32_t)(EBP));
  /* 11098651 mov ebp, esp */
  EBP = (ESP);
  /* 11098653 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11098658 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109865a mov eax, dword ptr [0x110c1fac] */
  EAX = (r32((uint32_t)(0x110c1fac)));
  /* 1109865f push eax */
  push32((uint32_t)(EAX));
  /* 11098660 call dword ptr [0x110c3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3340))), 0x11098666u);
  /* 11098666 mov dword ptr [0x110c1fa8], eax */
  w32((uint32_t)(0x110c1fa8), (EAX));
  /* 1109866b cmp dword ptr [0x110c1fa8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c1fa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098672 jne 0x11098678 */
  if (!C.zf) goto L_11098678;
  /* 11098674 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11098676 jmp 0x110986a7 */
  goto L_110986a7;
L_11098678:;
  /* 11098678 mov ecx, dword ptr [0x110c1fa8] */
  ECX = (r32((uint32_t)(0x110c1fa8)));
  /* 1109867e mov dword ptr [0x110c1f9c], ecx */
  w32((uint32_t)(0x110c1f9c), (ECX));
  /* 11098684 mov dword ptr [0x110c1fa0], 0 */
  w32((uint32_t)(0x110c1fa0), (0x0u));
  /* 1109868e mov dword ptr [0x110c1fa4], 0 */
  w32((uint32_t)(0x110c1fa4), (0x0u));
  /* 11098698 mov dword ptr [0x110c1f88], 0x10 */
  w32((uint32_t)(0x110c1f88), (0x10u));
  /* 110986a2 mov eax, 1 */
  EAX = (0x1u);
L_110986a7:;
  /* 110986a7 pop ebp */
  EBP = (pop32());
  /* 110986a8 ret  */
  ESPCHK(0x11098650u, _esp0);
  ESP += 4; return;
}

/* FUN_100086b0 @ 0x110986b0 (85 bytes, 29 insns) */
void f_110986b0(void) {
  FTRACE(0x110986b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110986b0 push ebp */
  push32((uint32_t)(EBP));
  /* 110986b1 mov ebp, esp */
  EBP = (ESP);
  /* 110986b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110986b6 mov eax, dword ptr [0x110c1fa4] */
  EAX = (r32((uint32_t)(0x110c1fa4)));
  /* 110986bb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110986be mov ecx, dword ptr [0x110c1fa8] */
  ECX = (r32((uint32_t)(0x110c1fa8)));
  /* 110986c4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110986c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110986c9 mov edx, dword ptr [0x110c1fa8] */
  EDX = (r32((uint32_t)(0x110c1fa8)));
  /* 110986cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_110986d2:;
  /* 110986d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110986d5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110986d8 jae 0x110986ff */
  if (!C.cf) goto L_110986ff;
  /* 110986da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110986dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110986e0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110986e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110986e6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110986ed jae 0x110986f4 */
  if (!C.cf) goto L_110986f4;
  /* 110986ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110986f2 jmp 0x11098701 */
  goto L_11098701;
L_110986f4:;
  /* 110986f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110986f7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110986fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110986fd jmp 0x110986d2 */
  goto L_110986d2;
L_110986ff:;
  /* 110986ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11098701:;
  /* 11098701 mov esp, ebp */
  ESP = (EBP);
  /* 11098703 pop ebp */
  EBP = (pop32());
  /* 11098704 ret  */
  ESPCHK(0x110986b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008710 @ 0x11098710 (95 bytes, 33 insns) */
void f_11098710(void) {
  FTRACE(0x11098710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11098710 push ebp */
  push32((uint32_t)(EBP));
  /* 11098711 mov ebp, esp */
  EBP = (ESP);
  /* 11098713 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098719 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109871c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109871f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11098722 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11098725 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11098728 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1109872b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11098730 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098733 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11098735 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098738 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1109873b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1109873d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109873f jne 0x11098761 */
  if (!C.zf) goto L_11098761;
  /* 11098741 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11098744 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11098747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11098749 jne 0x11098761 */
  if (!C.zf) goto L_11098761;
  /* 1109874b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109874e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 11098754 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11098756 je 0x11098761 */
  if (C.zf) goto L_11098761;
  /* 11098758 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1109875f jmp 0x11098768 */
  goto L_11098768;
L_11098761:;
  /* 11098761 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11098768:;
  /* 11098768 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109876b mov esp, ebp */
  ESP = (EBP);
  /* 1109876d pop ebp */
  EBP = (pop32());
  /* 1109876e ret  */
  ESPCHK(0x11098710u, _esp0);
  ESP += 4; return;
}

/* FUN_10008770 @ 0x11098770 (1485 bytes, 453 insns) */
void f_11098770(void) {
  FTRACE(0x11098770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11098770 push ebp */
  push32((uint32_t)(EBP));
  /* 11098771 mov ebp, esp */
  EBP = (ESP);
  /* 11098773 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098776 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098779 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1109877c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1109877f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098782 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11098785 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098788 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1109878b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109878e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11098791 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11098794 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098797 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109879d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110987a0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 110987a7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110987aa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110987ad sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110987b0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 110987b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110987b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110987b8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110987bb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 110987be mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110987c1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110987c4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 110987c7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 110987ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110987cc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 110987cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110987d2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 110987d5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110987d8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110987db and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 110987de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110987e0 jne 0x11098908 */
  if (!C.zf) goto L_11098908;
  /* 110987e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110987e9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 110987ec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110987ef mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 110987f2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110987f6 jbe 0x110987ff */
  if ((C.cf||C.zf)) goto L_110987ff;
  /* 110987f8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_110987ff:;
  /* 110987ff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11098802 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11098805 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11098808 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109880b jne 0x110988e1 */
  if (!C.zf) goto L_110988e1;
  /* 11098811 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098815 jae 0x11098876 */
  if (!C.cf) goto L_11098876;
  /* 11098817 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1109881c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109881f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11098821 not eax */
  EAX = (~(EAX));
  /* 11098823 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098826 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098829 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1109882d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109882f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098832 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098835 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11098839 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1109883c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109883f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11098842 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11098845 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098848 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109884b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1109884e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098851 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098854 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11098858 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109885a jne 0x11098874 */
  if (!C.zf) goto L_11098874;
  /* 1109885c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11098861 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11098864 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11098866 not eax */
  EAX = (~(EAX));
  /* 11098868 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109886b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1109886d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1109886f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098872 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11098874:;
  /* 11098874 jmp 0x110988e1 */
  goto L_110988e1;
L_11098876:;
  /* 11098876 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11098879 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109887c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11098881 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11098883 not edx */
  EDX = (~(EDX));
  /* 11098885 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098888 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1109888b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11098892 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11098894 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098897 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1109889a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 110988a1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110988a4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110988a7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 110988aa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110988ad mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110988b0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110988b3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 110988b6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110988b9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110988bc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 110988c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110988c2 jne 0x110988e1 */
  if (!C.zf) goto L_110988e1;
  /* 110988c4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110988c7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110988ca mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 110988cf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 110988d1 not edx */
  EDX = (~(EDX));
  /* 110988d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110988d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 110988d9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 110988db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110988de mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_110988e1:;
  /* 110988e1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 110988e4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 110988e7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 110988ea mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 110988ed mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 110988f0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 110988f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 110988f6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 110988f9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 110988fc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 110988ff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11098902 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098905 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11098908:;
  /* 11098908 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1109890b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1109890e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098911 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11098914 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098918 jbe 0x11098921 */
  if ((C.cf||C.zf)) goto L_11098921;
  /* 1109891a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11098921:;
  /* 11098921 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11098924 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11098927 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11098929 jne 0x11098a85 */
  if (!C.zf) goto L_11098a85;
  /* 1109892f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11098932 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098935 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11098938 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109893b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1109893e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098941 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11098944 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098948 jbe 0x11098951 */
  if ((C.cf||C.zf)) goto L_11098951;
  /* 1109894a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11098951:;
  /* 11098951 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11098954 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098957 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1109895a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1109895d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11098960 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098963 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11098966 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109896a jbe 0x11098973 */
  if ((C.cf||C.zf)) goto L_11098973;
  /* 1109896c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11098973:;
  /* 11098973 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11098976 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098979 je 0x11098a7f */
  if (C.zf) goto L_11098a7f;
  /* 1109897f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11098982 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11098985 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11098988 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109898b jne 0x11098a61 */
  if (!C.zf) goto L_11098a61;
  /* 11098991 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098995 jae 0x110989f6 */
  if (!C.cf) goto L_110989f6;
  /* 11098997 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1109899c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109899f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 110989a1 not edx */
  EDX = (~(EDX));
  /* 110989a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110989a6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110989a9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 110989ad and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 110989af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110989b2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110989b5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 110989b9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110989bc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110989bf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 110989c2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110989c5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110989c8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110989cb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 110989ce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110989d1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110989d4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 110989d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110989da jne 0x110989f4 */
  if (!C.zf) goto L_110989f4;
  /* 110989dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 110989e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 110989e4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 110989e6 not edx */
  EDX = (~(EDX));
  /* 110989e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110989eb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110989ed and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 110989ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110989f2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_110989f4:;
  /* 110989f4 jmp 0x11098a61 */
  goto L_11098a61;
L_110989f6:;
  /* 110989f6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 110989f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110989fc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11098a01 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11098a03 not eax */
  EAX = (~(EAX));
  /* 11098a05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098a08 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098a0b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11098a12 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11098a14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098a17 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098a1a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11098a21 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098a24 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098a27 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11098a2a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11098a2d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098a30 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098a33 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11098a36 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098a39 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098a3c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11098a40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11098a42 jne 0x11098a61 */
  if (!C.zf) goto L_11098a61;
  /* 11098a44 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11098a47 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098a4a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11098a4f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11098a51 not eax */
  EAX = (~(EAX));
  /* 11098a53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098a56 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11098a59 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11098a5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098a5e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11098a61:;
  /* 11098a61 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11098a64 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11098a67 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11098a6a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11098a6d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11098a70 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11098a73 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11098a76 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11098a79 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11098a7c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11098a7f:;
  /* 11098a7f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11098a82 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11098a85:;
  /* 11098a85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11098a88 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11098a8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11098a8d jne 0x11098a9b */
  if (!C.zf) goto L_11098a9b;
  /* 11098a8f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11098a92 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098a95 je 0x11098bab */
  if (C.zf) goto L_11098bab;
L_11098a9b:;
  /* 11098a9b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11098a9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11098aa1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11098aa4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11098aa7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11098aaa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11098aad mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11098ab0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11098ab3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11098ab6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11098ab9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11098abc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11098abf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11098ac2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11098ac5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11098ac8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11098acb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11098ace mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11098ad1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11098ad4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11098ad7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11098ada cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098add jne 0x11098bab */
  if (!C.zf) goto L_11098bab;
  /* 11098ae3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098ae7 jae 0x11098b44 */
  if (!C.cf) goto L_11098b44;
  /* 11098ae9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098aec add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098aef movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11098af3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098af6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098af9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11098afc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11098aff mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098b02 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098b05 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11098b08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11098b0a jne 0x11098b22 */
  if (!C.zf) goto L_11098b22;
  /* 11098b0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11098b11 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11098b14 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11098b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098b19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11098b1b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11098b1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098b20 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11098b22:;
  /* 11098b22 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11098b27 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11098b2a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11098b2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098b2f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098b32 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11098b36 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11098b38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098b3b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098b3e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11098b42 jmp 0x11098bab */
  goto L_11098bab;
L_11098b44:;
  /* 11098b44 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098b47 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098b4a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11098b4e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098b51 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098b54 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11098b57 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11098b5a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098b5d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098b60 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11098b63 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11098b65 jne 0x11098b82 */
  if (!C.zf) goto L_11098b82;
  /* 11098b67 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11098b6a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098b6d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11098b72 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11098b74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098b77 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11098b7a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11098b7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098b7f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11098b82:;
  /* 11098b82 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11098b85 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098b88 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11098b8d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11098b8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098b92 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098b95 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11098b9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11098b9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098ba1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11098ba4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11098bab:;
  /* 11098bab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11098bae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11098bb1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11098bb3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11098bb6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098bb9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11098bbc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11098bbf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11098bc2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11098bc4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098bc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11098bca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11098bcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11098bcf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098bd2 jne 0x11098d39 */
  if (!C.zf) goto L_11098d39;
  /* 11098bd8 cmp dword ptr [0x110c1fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c1fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098bdf je 0x11098d28 */
  if (C.zf) goto L_11098d28;
  /* 11098be5 mov eax, dword ptr [0x110c1f98] */
  EAX = (r32((uint32_t)(0x110c1f98)));
  /* 11098bea shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11098bed mov ecx, dword ptr [0x110c1fa0] */
  ECX = (r32((uint32_t)(0x110c1fa0)));
  /* 11098bf3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11098bf6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098bf8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11098bfb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11098c00 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11098c05 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098c08 push eax */
  push32((uint32_t)(EAX));
  /* 11098c09 call dword ptr [0x110c3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3324))), 0x11098c0fu);
  /* 11098c0f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11098c14 mov ecx, dword ptr [0x110c1f98] */
  ECX = (r32((uint32_t)(0x110c1f98)));
  /* 11098c1a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11098c1c mov eax, dword ptr [0x110c1fa0] */
  EAX = (r32((uint32_t)(0x110c1fa0)));
  /* 11098c21 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11098c24 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11098c26 mov edx, dword ptr [0x110c1fa0] */
  EDX = (r32((uint32_t)(0x110c1fa0)));
  /* 11098c2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11098c2f mov eax, dword ptr [0x110c1fa0] */
  EAX = (r32((uint32_t)(0x110c1fa0)));
  /* 11098c34 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11098c37 mov edx, dword ptr [0x110c1f98] */
  EDX = (r32((uint32_t)(0x110c1f98)));
  /* 11098c3d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11098c48 mov eax, dword ptr [0x110c1fa0] */
  EAX = (r32((uint32_t)(0x110c1fa0)));
  /* 11098c4d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11098c50 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11098c53 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11098c56 mov eax, dword ptr [0x110c1fa0] */
  EAX = (r32((uint32_t)(0x110c1fa0)));
  /* 11098c5b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11098c5e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11098c61 mov edx, dword ptr [0x110c1fa0] */
  EDX = (r32((uint32_t)(0x110c1fa0)));
  /* 11098c67 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11098c6a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11098c6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11098c70 jne 0x11098c86 */
  if (!C.zf) goto L_11098c86;
  /* 11098c72 mov edx, dword ptr [0x110c1fa0] */
  EDX = (r32((uint32_t)(0x110c1fa0)));
  /* 11098c78 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11098c7b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11098c7d mov ecx, dword ptr [0x110c1fa0] */
  ECX = (r32((uint32_t)(0x110c1fa0)));
  /* 11098c83 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11098c86:;
  /* 11098c86 mov edx, dword ptr [0x110c1fa0] */
  EDX = (r32((uint32_t)(0x110c1fa0)));
  /* 11098c8c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098c90 jne 0x11098d28 */
  if (!C.zf) goto L_11098d28;
  /* 11098c96 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11098c9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11098c9d mov eax, dword ptr [0x110c1fa0] */
  EAX = (r32((uint32_t)(0x110c1fa0)));
  /* 11098ca2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11098ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 11098ca6 call dword ptr [0x110c3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3324))), 0x11098cacu);
  /* 11098cac mov edx, dword ptr [0x110c1fa0] */
  EDX = (r32((uint32_t)(0x110c1fa0)));
  /* 11098cb2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11098cb5 push eax */
  push32((uint32_t)(EAX));
  /* 11098cb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11098cb8 mov ecx, dword ptr [0x110c1fac] */
  ECX = (r32((uint32_t)(0x110c1fac)));
  /* 11098cbe push ecx */
  push32((uint32_t)(ECX));
  /* 11098cbf call dword ptr [0x110c3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3320))), 0x11098cc5u);
  /* 11098cc5 mov edx, dword ptr [0x110c1fa4] */
  EDX = (r32((uint32_t)(0x110c1fa4)));
  /* 11098ccb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11098cce mov eax, dword ptr [0x110c1fa8] */
  EAX = (r32((uint32_t)(0x110c1fa8)));
  /* 11098cd3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098cd5 mov ecx, dword ptr [0x110c1fa0] */
  ECX = (r32((uint32_t)(0x110c1fa0)));
  /* 11098cdb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098cde sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098ce0 push eax */
  push32((uint32_t)(EAX));
  /* 11098ce1 mov edx, dword ptr [0x110c1fa0] */
  EDX = (r32((uint32_t)(0x110c1fa0)));
  /* 11098ce7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098cea push edx */
  push32((uint32_t)(EDX));
  /* 11098ceb mov eax, dword ptr [0x110c1fa0] */
  EAX = (r32((uint32_t)(0x110c1fa0)));
  /* 11098cf0 push eax */
  push32((uint32_t)(EAX));
  /* 11098cf1 call 0x1109c2a0 */
  push32(0x11098cf6u); f_1109c2a0();
  /* 11098cf6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11098cf9 mov ecx, dword ptr [0x110c1fa4] */
  ECX = (r32((uint32_t)(0x110c1fa4)));
  /* 11098cff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098d02 mov dword ptr [0x110c1fa4], ecx */
  w32((uint32_t)(0x110c1fa4), (ECX));
  /* 11098d08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098d0b cmp edx, dword ptr [0x110c1fa0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x110c1fa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098d11 jbe 0x11098d1c */
  if ((C.cf||C.zf)) goto L_11098d1c;
  /* 11098d13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098d16 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098d19 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11098d1c:;
  /* 11098d1c mov ecx, dword ptr [0x110c1fa8] */
  ECX = (r32((uint32_t)(0x110c1fa8)));
  /* 11098d22 mov dword ptr [0x110c1f9c], ecx */
  w32((uint32_t)(0x110c1f9c), (ECX));
L_11098d28:;
  /* 11098d28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098d2b mov dword ptr [0x110c1fa0], edx */
  w32((uint32_t)(0x110c1fa0), (EDX));
  /* 11098d31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098d34 mov dword ptr [0x110c1f98], eax */
  w32((uint32_t)(0x110c1f98), (EAX));
L_11098d39:;
  /* 11098d39 mov esp, ebp */
  ESP = (EBP);
  /* 11098d3b pop ebp */
  EBP = (pop32());
  /* 11098d3c ret  */
  ESPCHK(0x11098770u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d40 @ 0x11098d40 (1334 bytes, 427 insns) */
void f_11098d40(void) {
  FTRACE(0x11098d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11098d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11098d41 mov ebp, esp */
  EBP = (ESP);
  /* 11098d43 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098d46 push esi */
  push32((uint32_t)(ESI));
  /* 11098d47 mov eax, dword ptr [0x110c1fa4] */
  EAX = (r32((uint32_t)(0x110c1fa4)));
  /* 11098d4c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11098d4f mov ecx, dword ptr [0x110c1fa8] */
  ECX = (r32((uint32_t)(0x110c1fa8)));
  /* 11098d55 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098d57 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11098d5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098d5d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098d60 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11098d63 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11098d66 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11098d69 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11098d6c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098d6f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11098d72 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098d76 jge 0x11098d8c */
  if ((C.sf==C.of)) goto L_11098d8c;
  /* 11098d78 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11098d7b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11098d7e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11098d80 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11098d83 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11098d8a jmp 0x11098da1 */
  goto L_11098da1;
L_11098d8c:;
  /* 11098d8c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11098d93 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11098d96 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098d99 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11098d9c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11098d9e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11098da1:;
  /* 11098da1 mov ecx, dword ptr [0x110c1f9c] */
  ECX = (r32((uint32_t)(0x110c1f9c)));
  /* 11098da7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11098daa:;
  /* 11098daa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098dad cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098db0 jae 0x11098dd6 */
  if (!C.cf) goto L_11098dd6;
  /* 11098db2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098db5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11098db8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11098dba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098dbd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11098dc0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11098dc3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11098dc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11098dc7 je 0x11098dcb */
  if (C.zf) goto L_11098dcb;
  /* 11098dc9 jmp 0x11098dd6 */
  goto L_11098dd6;
L_11098dcb:;
  /* 11098dcb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098dce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098dd1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11098dd4 jmp 0x11098daa */
  goto L_11098daa;
L_11098dd6:;
  /* 11098dd6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098dd9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098ddc jne 0x11098ebd */
  if (!C.zf) goto L_11098ebd;
  /* 11098de2 mov eax, dword ptr [0x110c1fa8] */
  EAX = (r32((uint32_t)(0x110c1fa8)));
  /* 11098de7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11098dea:;
  /* 11098dea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098ded cmp ecx, dword ptr [0x110c1f9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110c1f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098df3 jae 0x11098e19 */
  if (!C.cf) goto L_11098e19;
  /* 11098df5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098df8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11098dfb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11098dfd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098e00 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11098e03 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11098e06 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11098e08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11098e0a je 0x11098e0e */
  if (C.zf) goto L_11098e0e;
  /* 11098e0c jmp 0x11098e19 */
  goto L_11098e19;
L_11098e0e:;
  /* 11098e0e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098e11 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098e14 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11098e17 jmp 0x11098dea */
  goto L_11098dea;
L_11098e19:;
  /* 11098e19 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098e1c cmp ecx, dword ptr [0x110c1f9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110c1f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098e22 jne 0x11098ebd */
  if (!C.zf) goto L_11098ebd;
L_11098e28:;
  /* 11098e28 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098e2b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098e2e jae 0x11098e46 */
  if (!C.cf) goto L_11098e46;
  /* 11098e30 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098e33 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098e37 je 0x11098e3b */
  if (C.zf) goto L_11098e3b;
  /* 11098e39 jmp 0x11098e46 */
  goto L_11098e46;
L_11098e3b:;
  /* 11098e3b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098e3e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098e41 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11098e44 jmp 0x11098e28 */
  goto L_11098e28;
L_11098e46:;
  /* 11098e46 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098e49 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098e4c jne 0x11098e97 */
  if (!C.zf) goto L_11098e97;
  /* 11098e4e mov eax, dword ptr [0x110c1fa8] */
  EAX = (r32((uint32_t)(0x110c1fa8)));
  /* 11098e53 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11098e56:;
  /* 11098e56 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098e59 cmp ecx, dword ptr [0x110c1f9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110c1f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098e5f jae 0x11098e77 */
  if (!C.cf) goto L_11098e77;
  /* 11098e61 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098e64 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098e68 je 0x11098e6c */
  if (C.zf) goto L_11098e6c;
  /* 11098e6a jmp 0x11098e77 */
  goto L_11098e77;
L_11098e6c:;
  /* 11098e6c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098e6f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098e72 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11098e75 jmp 0x11098e56 */
  goto L_11098e56;
L_11098e77:;
  /* 11098e77 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098e7a cmp ecx, dword ptr [0x110c1f9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110c1f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098e80 jne 0x11098e97 */
  if (!C.zf) goto L_11098e97;
  /* 11098e82 call 0x11099280 */
  push32(0x11098e87u); f_11099280();
  /* 11098e87 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11098e8a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098e8e jne 0x11098e97 */
  if (!C.zf) goto L_11098e97;
  /* 11098e90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11098e92 jmp 0x11099271 */
  goto L_11099271;
L_11098e97:;
  /* 11098e97 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098e9a push edx */
  push32((uint32_t)(EDX));
  /* 11098e9b call 0x11099390 */
  push32(0x11098ea0u); f_11099390();
  /* 11098ea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11098ea3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098ea6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11098ea9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11098eab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098eae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11098eb1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098eb4 jne 0x11098ebd */
  if (!C.zf) goto L_11098ebd;
  /* 11098eb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11098eb8 jmp 0x11099271 */
  goto L_11099271;
L_11098ebd:;
  /* 11098ebd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098ec0 mov dword ptr [0x110c1f9c], edx */
  w32((uint32_t)(0x110c1f9c), (EDX));
  /* 11098ec6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098ec9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11098ecc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 11098ecf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11098ed2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11098ed4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11098ed7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098edb je 0x11098f00 */
  if (C.zf) goto L_11098f00;
  /* 11098edd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11098ee0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11098ee3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11098ee6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 11098eea mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11098eed mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11098ef0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11098ef3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11098efa or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11098efc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11098efe jne 0x11098f35 */
  if (!C.zf) goto L_11098f35;
L_11098f00:;
  /* 11098f00 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11098f07:;
  /* 11098f07 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11098f0a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11098f0d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11098f10 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11098f14 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11098f17 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11098f1a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11098f1d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11098f24 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11098f26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11098f28 jne 0x11098f35 */
  if (!C.zf) goto L_11098f35;
  /* 11098f2a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11098f2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098f30 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11098f33 jmp 0x11098f07 */
  goto L_11098f07;
L_11098f35:;
  /* 11098f35 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11098f38 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11098f3e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11098f41 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11098f48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11098f4b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11098f52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11098f55 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11098f58 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11098f5b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11098f5f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11098f62 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098f66 jne 0x11098f82 */
  if (!C.zf) goto L_11098f82;
  /* 11098f68 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11098f6f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11098f72 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11098f75 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11098f78 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11098f7f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11098f82:;
  /* 11098f82 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098f86 jl 0x11098f9b */
  if ((C.sf!=C.of)) goto L_11098f9b;
  /* 11098f88 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11098f8b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11098f8d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11098f90 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11098f93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098f96 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11098f99 jmp 0x11098f82 */
  goto L_11098f82;
L_11098f9b:;
  /* 11098f9b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11098f9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098fa1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11098fa5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11098fa8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11098fab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11098fad sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098fb0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11098fb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11098fb6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11098fb9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098fbc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11098fbf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098fc3 jle 0x11098fcc */
  if ((C.zf||C.sf!=C.of)) goto L_11098fcc;
  /* 11098fc5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11098fcc:;
  /* 11098fcc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11098fcf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098fd2 je 0x110991f0 */
  if (C.zf) goto L_110991f0;
  /* 11098fd8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11098fdb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11098fde mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11098fe1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098fe4 jne 0x110990ba */
  if (!C.zf) goto L_110990ba;
  /* 11098fea cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098fee jge 0x1109904f */
  if ((C.sf==C.of)) goto L_1109904f;
  /* 11098ff0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11098ff5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11098ff8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11098ffa not eax */
  EAX = (~(EAX));
  /* 11098ffc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11098fff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11099002 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11099006 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11099008 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1109900b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1109900e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11099012 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11099015 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099018 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1109901b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1109901e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11099021 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099024 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11099027 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1109902a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109902d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11099031 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11099033 jne 0x1109904d */
  if (!C.zf) goto L_1109904d;
  /* 11099035 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1109903a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109903d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1109903f not eax */
  EAX = (~(EAX));
  /* 11099041 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11099044 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11099046 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11099048 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109904b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1109904d:;
  /* 1109904d jmp 0x110990ba */
  goto L_110990ba;
L_1109904f:;
  /* 1109904f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11099052 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11099055 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1109905a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1109905c not edx */
  EDX = (~(EDX));
  /* 1109905e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099061 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11099064 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1109906b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1109906d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099070 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11099073 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1109907a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1109907d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099080 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11099083 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11099086 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11099089 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109908c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1109908f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11099092 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099095 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11099099 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109909b jne 0x110990ba */
  if (!C.zf) goto L_110990ba;
  /* 1109909d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 110990a0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110990a3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 110990a8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 110990aa not edx */
  EDX = (~(EDX));
  /* 110990ac mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 110990af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 110990b2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 110990b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 110990b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_110990ba:;
  /* 110990ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110990bd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 110990c0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110990c3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 110990c6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 110990c9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110990cc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 110990cf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110990d2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 110990d5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 110990d8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110990dc je 0x110991f0 */
  if (C.zf) goto L_110991f0;
  /* 110990e2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110990e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110990e8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 110990eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110990ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110990f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110990f4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 110990f7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 110990fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110990fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11099100 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11099103 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11099106 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11099109 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1109910c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109910f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11099112 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11099115 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11099118 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109911b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109911e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11099121 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099124 jne 0x110991f0 */
  if (!C.zf) goto L_110991f0;
  /* 1109912a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109912e jge 0x1109918a */
  if ((C.sf==C.of)) goto L_1109918a;
  /* 11099130 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11099133 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099136 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1109913a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1109913d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099140 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11099143 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11099145 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11099148 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109914b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1109914e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11099150 jne 0x11099168 */
  if (!C.zf) goto L_11099168;
  /* 11099152 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11099157 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1109915a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1109915c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109915f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11099161 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11099163 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11099166 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11099168:;
  /* 11099168 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1109916d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11099170 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11099172 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099175 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11099178 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1109917c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1109917e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099181 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11099184 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11099188 jmp 0x110991f0 */
  goto L_110991f0;
L_1109918a:;
  /* 1109918a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1109918d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099190 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11099194 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11099197 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109919a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1109919d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1109919f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 110991a2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110991a5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 110991a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110991aa jne 0x110991c7 */
  if (!C.zf) goto L_110991c7;
  /* 110991ac mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110991af sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110991b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 110991b7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 110991b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 110991bc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 110991bf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 110991c1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 110991c4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_110991c7:;
  /* 110991c7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110991ca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110991cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 110991d2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 110991d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 110991d7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 110991da mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 110991e1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 110991e3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 110991e6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 110991e9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_110991f0:;
  /* 110991f0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110991f4 je 0x1109920a */
  if (C.zf) goto L_1109920a;
  /* 110991f6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110991f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110991fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 110991fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11099201 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099204 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11099207 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1109920a:;
  /* 1109920a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109920d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099210 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11099213 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11099216 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099219 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109921c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1109921e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11099221 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099224 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11099227 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109922a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1109922d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11099230 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11099232 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11099235 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11099237 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109923a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109923d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1109923f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11099241 jne 0x11099263 */
  if (!C.zf) goto L_11099263;
  /* 11099243 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11099246 cmp eax, dword ptr [0x110c1fa0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110c1fa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109924c jne 0x11099263 */
  if (!C.zf) goto L_11099263;
  /* 1109924e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099251 cmp ecx, dword ptr [0x110c1f98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110c1f98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099257 jne 0x11099263 */
  if (!C.zf) goto L_11099263;
  /* 11099259 mov dword ptr [0x110c1fa0], 0 */
  w32((uint32_t)(0x110c1fa0), (0x0u));
L_11099263:;
  /* 11099263 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11099266 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099269 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1109926b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109926e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11099271:;
  /* 11099271 pop esi */
  ESI = (pop32());
  /* 11099272 mov esp, ebp */
  ESP = (EBP);
  /* 11099274 pop ebp */
  EBP = (pop32());
  /* 11099275 ret  */
  ESPCHK(0x11098d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009280 @ 0x11099280 (271 bytes, 78 insns) */
void f_11099280(void) {
  FTRACE(0x11099280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11099280 push ebp */
  push32((uint32_t)(EBP));
  /* 11099281 mov ebp, esp */
  EBP = (ESP);
  /* 11099283 push ecx */
  push32((uint32_t)(ECX));
  /* 11099284 mov eax, dword ptr [0x110c1fa4] */
  EAX = (r32((uint32_t)(0x110c1fa4)));
  /* 11099289 cmp eax, dword ptr [0x110c1f88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110c1f88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109928f jne 0x110992db */
  if (!C.zf) goto L_110992db;
  /* 11099291 mov ecx, dword ptr [0x110c1f88] */
  ECX = (r32((uint32_t)(0x110c1f88)));
  /* 11099297 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109929a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109929d push ecx */
  push32((uint32_t)(ECX));
  /* 1109929e mov edx, dword ptr [0x110c1fa8] */
  EDX = (r32((uint32_t)(0x110c1fa8)));
  /* 110992a4 push edx */
  push32((uint32_t)(EDX));
  /* 110992a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110992a7 mov eax, dword ptr [0x110c1fac] */
  EAX = (r32((uint32_t)(0x110c1fac)));
  /* 110992ac push eax */
  push32((uint32_t)(EAX));
  /* 110992ad call dword ptr [0x110c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3344))), 0x110992b3u);
  /* 110992b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110992b6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110992ba jne 0x110992c3 */
  if (!C.zf) goto L_110992c3;
  /* 110992bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110992be jmp 0x1109938b */
  goto L_1109938b;
L_110992c3:;
  /* 110992c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110992c6 mov dword ptr [0x110c1fa8], ecx */
  w32((uint32_t)(0x110c1fa8), (ECX));
  /* 110992cc mov edx, dword ptr [0x110c1f88] */
  EDX = (r32((uint32_t)(0x110c1f88)));
  /* 110992d2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110992d5 mov dword ptr [0x110c1f88], edx */
  w32((uint32_t)(0x110c1f88), (EDX));
L_110992db:;
  /* 110992db mov eax, dword ptr [0x110c1fa4] */
  EAX = (r32((uint32_t)(0x110c1fa4)));
  /* 110992e0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110992e3 mov ecx, dword ptr [0x110c1fa8] */
  ECX = (r32((uint32_t)(0x110c1fa8)));
  /* 110992e9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110992eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110992ee push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 110992f3 push 8 */
  push32((uint32_t)(0x8u));
  /* 110992f5 mov edx, dword ptr [0x110c1fac] */
  EDX = (r32((uint32_t)(0x110c1fac)));
  /* 110992fb push edx */
  push32((uint32_t)(EDX));
  /* 110992fc call dword ptr [0x110c3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3340))), 0x11099302u);
  /* 11099302 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11099305 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11099308 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109930b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109930f jne 0x11099315 */
  if (!C.zf) goto L_11099315;
  /* 11099311 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11099313 jmp 0x1109938b */
  goto L_1109938b;
L_11099315:;
  /* 11099315 push 4 */
  push32((uint32_t)(0x4u));
  /* 11099317 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1109931c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11099321 push 0 */
  push32((uint32_t)(0x0u));
  /* 11099323 call dword ptr [0x110c3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3348))), 0x11099329u);
  /* 11099329 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109932c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1109932f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11099332 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099336 jne 0x11099352 */
  if (!C.zf) goto L_11099352;
  /* 11099338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109933b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1109933e push ecx */
  push32((uint32_t)(ECX));
  /* 1109933f push 0 */
  push32((uint32_t)(0x0u));
  /* 11099341 mov edx, dword ptr [0x110c1fac] */
  EDX = (r32((uint32_t)(0x110c1fac)));
  /* 11099347 push edx */
  push32((uint32_t)(EDX));
  /* 11099348 call dword ptr [0x110c3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3320))), 0x1109934eu);
  /* 1109934e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11099350 jmp 0x1109938b */
  goto L_1109938b;
L_11099352:;
  /* 11099352 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11099355 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1109935b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109935e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11099365 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11099368 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1109936f mov eax, dword ptr [0x110c1fa4] */
  EAX = (r32((uint32_t)(0x110c1fa4)));
  /* 11099374 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099377 mov dword ptr [0x110c1fa4], eax */
  w32((uint32_t)(0x110c1fa4), (EAX));
  /* 1109937c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109937f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11099382 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11099388 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1109938b:;
  /* 1109938b mov esp, ebp */
  ESP = (EBP);
  /* 1109938d pop ebp */
  EBP = (pop32());
  /* 1109938e ret  */
  ESPCHK(0x11099280u, _esp0);
  ESP += 4; return;
}

/* FUN_10009390 @ 0x11099390 (494 bytes, 149 insns) */
void f_11099390(void) {
  FTRACE(0x11099390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11099390 push ebp */
  push32((uint32_t)(EBP));
  /* 11099391 mov ebp, esp */
  EBP = (ESP);
  /* 11099393 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11099396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11099399 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1109939c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1109939f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110993a2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 110993a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110993a8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_110993af:;
  /* 110993af cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110993b3 jl 0x110993c8 */
  if ((C.sf!=C.of)) goto L_110993c8;
  /* 110993b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110993b8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 110993ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110993bd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 110993c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110993c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 110993c6 jmp 0x110993af */
  goto L_110993af;
L_110993c8:;
  /* 110993c8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 110993cb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110993d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 110993d4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 110993db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 110993de mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 110993e5 jmp 0x110993f0 */
  goto L_110993f0;
L_110993e7:;
  /* 110993e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 110993ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110993ed mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_110993f0:;
  /* 110993f0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110993f4 jge 0x11099416 */
  if ((C.sf==C.of)) goto L_11099416;
  /* 110993f6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 110993f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110993fc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 110993ff mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11099402 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11099405 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11099408 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1109940b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109940e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11099411 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11099414 jmp 0x110993e7 */
  goto L_110993e7;
L_11099416:;
  /* 11099416 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11099419 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1109941c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109941f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11099422 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099424 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11099427 push 4 */
  push32((uint32_t)(0x4u));
  /* 11099429 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1109942e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11099433 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11099436 push edx */
  push32((uint32_t)(EDX));
  /* 11099437 call dword ptr [0x110c3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3348))), 0x1109943du);
  /* 1109943d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109943f jne 0x11099449 */
  if (!C.zf) goto L_11099449;
  /* 11099441 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11099444 jmp 0x1109957a */
  goto L_1109957a;
L_11099449:;
  /* 11099449 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109944c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099451 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11099454 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11099457 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1109945a jmp 0x11099468 */
  goto L_11099468;
L_1109945c:;
  /* 1109945c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109945f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099465 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11099468:;
  /* 11099468 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109946b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109946e ja 0x110994cd */
  if ((!C.cf&&!C.zf)) goto L_110994cd;
  /* 11099470 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11099473 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1109947a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109947d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11099487 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109948a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109948d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11099490 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11099493 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11099499 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109949c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110994a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 110994a5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 110994a8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 110994ab sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110994b1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 110994b4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 110994b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 110994ba add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110994bf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 110994c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110994c5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 110994cb jmp 0x1109945c */
  goto L_1109945c;
L_110994cd:;
  /* 110994cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110994d0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110994d6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 110994d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110994dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110994df mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110994e2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 110994e5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110994e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 110994eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 110994ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 110994f1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110994f4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 110994f7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110994fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110994fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11099500 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11099503 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11099506 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11099509 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1109950c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109950f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11099512 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11099515 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11099518 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109951b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 11099523 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11099526 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11099529 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 11099534 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11099537 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1109953b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109953e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 11099541 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11099544 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11099547 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1109954a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109954c jne 0x1109955d */
  if (!C.zf) goto L_1109955d;
  /* 1109954e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11099551 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11099554 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11099557 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109955a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1109955d:;
  /* 1109955d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11099562 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11099565 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11099567 not edx */
  EDX = (~(EDX));
  /* 11099569 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109956c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1109956f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11099571 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11099574 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11099577 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1109957a:;
  /* 1109957a mov esp, ebp */
  ESP = (EBP);
  /* 1109957c pop ebp */
  EBP = (pop32());
  /* 1109957d ret  */
  ESPCHK(0x11099390u, _esp0);
  ESP += 4; return;
}

/* FUN_10009580 @ 0x11099580 (1515 bytes, 489 insns) */
void f_11099580(void) {
  FTRACE(0x11099580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11099580 push ebp */
  push32((uint32_t)(EBP));
  /* 11099581 mov ebp, esp */
  EBP = (ESP);
  /* 11099583 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11099586 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11099589 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109958c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1109958e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11099591 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11099594 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11099597 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1109959a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109959d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110995a0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110995a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110995a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110995a9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 110995ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110995af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110995b2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110995b8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 110995bb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 110995c2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110995c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110995c8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110995cb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 110995ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110995d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110995d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110995d6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 110995d9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110995dc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110995df mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 110995e2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 110995e5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110995e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 110995ea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110995ed cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110995f0 jle 0x110998a6 */
  if ((C.zf||C.sf!=C.of)) goto L_110998a6;
  /* 110995f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110995f9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 110995fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110995fe jne 0x1109960b */
  if (!C.zf) goto L_1109960b;
  /* 11099600 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11099603 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099606 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099609 jle 0x11099612 */
  if ((C.zf||C.sf!=C.of)) goto L_11099612;
L_1109960b:;
  /* 1109960b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109960d jmp 0x11099b67 */
  goto L_11099b67;
L_11099612:;
  /* 11099612 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11099615 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11099618 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109961b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1109961e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099622 jbe 0x1109962b */
  if ((C.cf||C.zf)) goto L_1109962b;
  /* 11099624 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1109962b:;
  /* 1109962b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109962e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11099631 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11099634 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099637 jne 0x1109970d */
  if (!C.zf) goto L_1109970d;
  /* 1109963d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099641 jae 0x110996a2 */
  if (!C.cf) goto L_110996a2;
  /* 11099643 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11099648 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109964b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1109964d not edx */
  EDX = (~(EDX));
  /* 1109964f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11099652 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099655 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11099659 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1109965b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109965e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099661 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11099665 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099668 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109966b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1109966e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11099671 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099674 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099677 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1109967a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1109967d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099680 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11099684 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11099686 jne 0x110996a0 */
  if (!C.zf) goto L_110996a0;
  /* 11099688 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1109968d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11099690 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11099692 not edx */
  EDX = (~(EDX));
  /* 11099694 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11099697 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11099699 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1109969b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109969e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_110996a0:;
  /* 110996a0 jmp 0x1109970d */
  goto L_1109970d;
L_110996a2:;
  /* 110996a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 110996a5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110996a8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 110996ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 110996af not eax */
  EAX = (~(EAX));
  /* 110996b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110996b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 110996b7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 110996be and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110996c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110996c3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 110996c6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 110996cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 110996d0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110996d3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 110996d6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110996d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 110996dc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110996df mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 110996e2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 110996e5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110996e8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 110996ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110996ee jne 0x1109970d */
  if (!C.zf) goto L_1109970d;
  /* 110996f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 110996f3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110996f6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 110996fb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 110996fd not eax */
  EAX = (~(EAX));
  /* 110996ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11099702 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11099705 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11099707 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109970a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1109970d:;
  /* 1109970d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11099710 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11099713 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11099716 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11099719 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1109971c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109971f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11099722 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11099725 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11099728 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1109972b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1109972e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099731 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11099734 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11099737 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109973b jle 0x11099887 */
  if ((C.zf||C.sf!=C.of)) goto L_11099887;
  /* 11099741 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11099744 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099747 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1109974a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109974d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11099750 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11099753 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11099756 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109975a jbe 0x11099763 */
  if ((C.cf||C.zf)) goto L_11099763;
  /* 1109975c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11099763:;
  /* 11099763 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11099766 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11099769 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1109976c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1109976f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11099772 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11099775 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11099778 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1109977b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109977e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11099781 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11099784 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11099787 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109978a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1109978d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11099790 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11099793 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11099796 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11099799 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109979c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109979f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 110997a2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110997a5 jne 0x11099873 */
  if (!C.zf) goto L_11099873;
  /* 110997ab cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110997af jae 0x1109980c */
  if (!C.cf) goto L_1109980c;
  /* 110997b1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 110997b4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110997b7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 110997bb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 110997be add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110997c1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 110997c4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 110997c7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 110997ca add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110997cd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 110997d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110997d2 jne 0x110997ea */
  if (!C.zf) goto L_110997ea;
  /* 110997d4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 110997d9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 110997dc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 110997de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110997e1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110997e3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 110997e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110997e8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_110997ea:;
  /* 110997ea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 110997ef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 110997f2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 110997f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110997f7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 110997fa mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 110997fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11099800 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11099803 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099806 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1109980a jmp 0x11099873 */
  goto L_11099873;
L_1109980c:;
  /* 1109980c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1109980f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099812 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11099816 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099819 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109981c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1109981f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11099822 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099825 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099828 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1109982b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109982d jne 0x1109984a */
  if (!C.zf) goto L_1109984a;
  /* 1109982f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11099832 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11099835 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1109983a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1109983c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109983f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11099842 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11099844 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11099847 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1109984a:;
  /* 1109984a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109984d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11099850 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11099855 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11099857 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109985a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1109985d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11099864 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11099866 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11099869 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1109986c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11099873:;
  /* 11099873 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11099876 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11099879 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1109987b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109987e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099881 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11099884 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11099887:;
  /* 11099887 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1109988a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109988d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11099890 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11099892 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11099895 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099898 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1109989b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109989e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 110998a1 jmp 0x11099b62 */
  goto L_11099b62;
L_110998a6:;
  /* 110998a6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110998a9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110998ac jge 0x11099b62 */
  if ((C.sf==C.of)) goto L_11099b62;
  /* 110998b2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110998b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110998b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110998bb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 110998bd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110998c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110998c3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110998c6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110998c9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 110998cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110998cf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110998d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 110998d5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 110998d8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110998db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 110998de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 110998e1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 110998e4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110998e7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 110998ea cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110998ee jbe 0x110998f7 */
  if ((C.cf||C.zf)) goto L_110998f7;
  /* 110998f0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_110998f7:;
  /* 110998f7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110998fa and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 110998fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110998ff jne 0x11099a40 */
  if (!C.zf) goto L_11099a40;
  /* 11099905 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11099908 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1109990b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109990e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11099911 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099915 jbe 0x1109991e */
  if ((C.cf||C.zf)) goto L_1109991e;
  /* 11099917 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1109991e:;
  /* 1109991e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11099921 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11099924 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11099927 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109992a jne 0x11099a00 */
  if (!C.zf) goto L_11099a00;
  /* 11099930 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099934 jae 0x11099995 */
  if (!C.cf) goto L_11099995;
  /* 11099936 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1109993b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109993e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11099940 not edx */
  EDX = (~(EDX));
  /* 11099942 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11099945 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099948 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1109994c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1109994e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11099951 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099954 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11099958 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1109995b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109995e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11099961 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11099964 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099967 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109996a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1109996d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099970 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099973 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11099977 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11099979 jne 0x11099993 */
  if (!C.zf) goto L_11099993;
  /* 1109997b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11099980 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11099983 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11099985 not edx */
  EDX = (~(EDX));
  /* 11099987 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109998a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1109998c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1109998e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11099991 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11099993:;
  /* 11099993 jmp 0x11099a00 */
  goto L_11099a00;
L_11099995:;
  /* 11099995 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11099998 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109999b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 110999a0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 110999a2 not eax */
  EAX = (~(EAX));
  /* 110999a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110999a7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 110999aa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 110999b1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110999b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110999b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 110999b9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 110999c0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 110999c3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110999c6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 110999c9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110999cc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 110999cf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110999d2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 110999d5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 110999d8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110999db movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 110999df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110999e1 jne 0x11099a00 */
  if (!C.zf) goto L_11099a00;
  /* 110999e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 110999e6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110999e9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 110999ee shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 110999f0 not eax */
  EAX = (~(EAX));
  /* 110999f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110999f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 110999f8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 110999fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110999fd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11099a00:;
  /* 11099a00 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11099a03 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11099a06 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11099a09 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11099a0c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11099a0f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11099a12 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11099a15 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11099a18 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11099a1b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11099a1e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11099a21 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099a24 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11099a27 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11099a2a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11099a2d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11099a30 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11099a33 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099a37 jbe 0x11099a40 */
  if ((C.cf||C.zf)) goto L_11099a40;
  /* 11099a39 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11099a40:;
  /* 11099a40 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11099a43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11099a46 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11099a49 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11099a4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11099a4f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11099a52 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11099a55 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11099a58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11099a5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11099a5e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11099a61 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11099a64 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11099a67 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11099a6a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11099a6d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11099a70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11099a73 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11099a76 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11099a79 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11099a7c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11099a7f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099a82 jne 0x11099b4e */
  if (!C.zf) goto L_11099b4e;
  /* 11099a88 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099a8c jae 0x11099ae8 */
  if (!C.cf) goto L_11099ae8;
  /* 11099a8e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099a91 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099a94 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11099a98 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099a9b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099a9e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11099aa1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11099aa3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099aa6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099aa9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11099aac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11099aae jne 0x11099ac6 */
  if (!C.zf) goto L_11099ac6;
  /* 11099ab0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11099ab5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11099ab8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11099aba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11099abd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11099abf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11099ac1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11099ac4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11099ac6:;
  /* 11099ac6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11099acb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11099ace shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11099ad0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11099ad3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099ad6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11099ada or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11099adc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11099adf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099ae2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11099ae6 jmp 0x11099b4e */
  goto L_11099b4e;
L_11099ae8:;
  /* 11099ae8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099aeb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099aee movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11099af2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099af5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099af8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11099afb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11099afd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099b00 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099b03 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11099b06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11099b08 jne 0x11099b25 */
  if (!C.zf) goto L_11099b25;
  /* 11099b0a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11099b0d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11099b10 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11099b15 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11099b17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11099b1a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11099b1d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11099b1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11099b22 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11099b25:;
  /* 11099b25 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11099b28 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11099b2b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11099b30 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11099b32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11099b35 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099b38 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11099b3f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11099b41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11099b44 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11099b47 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11099b4e:;
  /* 11099b4e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11099b51 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11099b54 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11099b56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11099b59 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099b5c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11099b5f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11099b62:;
  /* 11099b62 mov eax, 1 */
  EAX = (0x1u);
L_11099b67:;
  /* 11099b67 mov esp, ebp */
  ESP = (EBP);
  /* 11099b69 pop ebp */
  EBP = (pop32());
  /* 11099b6a ret  */
  ESPCHK(0x11099580u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b70 @ 0x11099b70 (304 bytes, 79 insns) */
void f_11099b70(void) {
  FTRACE(0x11099b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11099b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11099b71 mov ebp, esp */
  EBP = (ESP);
  /* 11099b73 push ecx */
  push32((uint32_t)(ECX));
  /* 11099b74 cmp dword ptr [0x110c1fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c1fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099b7b je 0x11099c9c */
  if (C.zf) goto L_11099c9c;
  /* 11099b81 mov eax, dword ptr [0x110c1f98] */
  EAX = (r32((uint32_t)(0x110c1f98)));
  /* 11099b86 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11099b89 mov ecx, dword ptr [0x110c1fa0] */
  ECX = (r32((uint32_t)(0x110c1fa0)));
  /* 11099b8f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11099b92 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099b94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11099b97 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11099b9c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11099ba1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11099ba4 push eax */
  push32((uint32_t)(EAX));
  /* 11099ba5 call dword ptr [0x110c3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3324))), 0x11099babu);
  /* 11099bab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11099bb0 mov ecx, dword ptr [0x110c1f98] */
  ECX = (r32((uint32_t)(0x110c1f98)));
  /* 11099bb6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11099bb8 mov eax, dword ptr [0x110c1fa0] */
  EAX = (r32((uint32_t)(0x110c1fa0)));
  /* 11099bbd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11099bc0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11099bc2 mov edx, dword ptr [0x110c1fa0] */
  EDX = (r32((uint32_t)(0x110c1fa0)));
  /* 11099bc8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11099bcb mov eax, dword ptr [0x110c1fa0] */
  EAX = (r32((uint32_t)(0x110c1fa0)));
  /* 11099bd0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11099bd3 mov edx, dword ptr [0x110c1f98] */
  EDX = (r32((uint32_t)(0x110c1f98)));
  /* 11099bd9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11099be4 mov eax, dword ptr [0x110c1fa0] */
  EAX = (r32((uint32_t)(0x110c1fa0)));
  /* 11099be9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11099bec mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11099bef sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11099bf2 mov eax, dword ptr [0x110c1fa0] */
  EAX = (r32((uint32_t)(0x110c1fa0)));
  /* 11099bf7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11099bfa mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11099bfd mov edx, dword ptr [0x110c1fa0] */
  EDX = (r32((uint32_t)(0x110c1fa0)));
  /* 11099c03 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11099c06 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11099c0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11099c0c jne 0x11099c22 */
  if (!C.zf) goto L_11099c22;
  /* 11099c0e mov edx, dword ptr [0x110c1fa0] */
  EDX = (r32((uint32_t)(0x110c1fa0)));
  /* 11099c14 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11099c17 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11099c19 mov ecx, dword ptr [0x110c1fa0] */
  ECX = (r32((uint32_t)(0x110c1fa0)));
  /* 11099c1f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11099c22:;
  /* 11099c22 mov edx, dword ptr [0x110c1fa0] */
  EDX = (r32((uint32_t)(0x110c1fa0)));
  /* 11099c28 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099c2c jne 0x11099c92 */
  if (!C.zf) goto L_11099c92;
  /* 11099c2e cmp dword ptr [0x110c1fa4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110c1fa4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099c35 jle 0x11099c92 */
  if ((C.zf||C.sf!=C.of)) goto L_11099c92;
  /* 11099c37 mov eax, dword ptr [0x110c1fa0] */
  EAX = (r32((uint32_t)(0x110c1fa0)));
  /* 11099c3c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11099c3f push ecx */
  push32((uint32_t)(ECX));
  /* 11099c40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11099c42 mov edx, dword ptr [0x110c1fac] */
  EDX = (r32((uint32_t)(0x110c1fac)));
  /* 11099c48 push edx */
  push32((uint32_t)(EDX));
  /* 11099c49 call dword ptr [0x110c3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3320))), 0x11099c4fu);
  /* 11099c4f mov eax, dword ptr [0x110c1fa4] */
  EAX = (r32((uint32_t)(0x110c1fa4)));
  /* 11099c54 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11099c57 mov ecx, dword ptr [0x110c1fa8] */
  ECX = (r32((uint32_t)(0x110c1fa8)));
  /* 11099c5d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099c5f mov edx, dword ptr [0x110c1fa0] */
  EDX = (r32((uint32_t)(0x110c1fa0)));
  /* 11099c65 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099c68 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11099c6a push ecx */
  push32((uint32_t)(ECX));
  /* 11099c6b mov eax, dword ptr [0x110c1fa0] */
  EAX = (r32((uint32_t)(0x110c1fa0)));
  /* 11099c70 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099c73 push eax */
  push32((uint32_t)(EAX));
  /* 11099c74 mov ecx, dword ptr [0x110c1fa0] */
  ECX = (r32((uint32_t)(0x110c1fa0)));
  /* 11099c7a push ecx */
  push32((uint32_t)(ECX));
  /* 11099c7b call 0x1109c2a0 */
  push32(0x11099c80u); f_1109c2a0();
  /* 11099c80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11099c83 mov edx, dword ptr [0x110c1fa4] */
  EDX = (r32((uint32_t)(0x110c1fa4)));
  /* 11099c89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11099c8c mov dword ptr [0x110c1fa4], edx */
  w32((uint32_t)(0x110c1fa4), (EDX));
L_11099c92:;
  /* 11099c92 mov dword ptr [0x110c1fa0], 0 */
  w32((uint32_t)(0x110c1fa0), (0x0u));
L_11099c9c:;
  /* 11099c9c mov esp, ebp */
  ESP = (EBP);
  /* 11099c9e pop ebp */
  EBP = (pop32());
  /* 11099c9f ret  */
  ESPCHK(0x11099b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ca0 @ 0x11099ca0 (1565 bytes, 343 insns) */
void f_11099ca0(void) {
  FTRACE(0x11099ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11099ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11099ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11099ca3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11099ca9 mov eax, dword ptr [0x110c1fa4] */
  EAX = (r32((uint32_t)(0x110c1fa4)));
  /* 11099cae imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11099cb1 push eax */
  push32((uint32_t)(EAX));
  /* 11099cb2 mov ecx, dword ptr [0x110c1fa8] */
  ECX = (r32((uint32_t)(0x110c1fa8)));
  /* 11099cb8 push ecx */
  push32((uint32_t)(ECX));
  /* 11099cb9 call dword ptr [0x110c3244] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3244))), 0x11099cbfu);
  /* 11099cbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11099cc1 je 0x11099ccb */
  if (C.zf) goto L_11099ccb;
  /* 11099cc3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11099cc6 jmp 0x1109a2b9 */
  goto L_1109a2b9;
L_11099ccb:;
  /* 11099ccb mov edx, dword ptr [0x110c1fa8] */
  EDX = (r32((uint32_t)(0x110c1fa8)));
  /* 11099cd1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11099cd7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11099ce1 jmp 0x11099cf2 */
  goto L_11099cf2;
L_11099ce3:;
  /* 11099ce3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11099ce9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099cec mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11099cf2:;
  /* 11099cf2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11099cf8 cmp ecx, dword ptr [0x110c1fa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110c1fa4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099cfe jge 0x1109a2b7 */
  if ((C.sf==C.of)) goto L_1109a2b7;
  /* 11099d04 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11099d0a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11099d0d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11099d13 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11099d18 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11099d1e push ecx */
  push32((uint32_t)(ECX));
  /* 11099d1f call dword ptr [0x110c3244] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3244))), 0x11099d25u);
  /* 11099d25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11099d27 je 0x11099d33 */
  if (C.zf) goto L_11099d33;
  /* 11099d29 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11099d2e jmp 0x1109a2b9 */
  goto L_1109a2b9;
L_11099d33:;
  /* 11099d33 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11099d39 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11099d3c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11099d42 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11099d48 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099d4e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11099d51 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11099d57 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11099d5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11099d5d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11099d67 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11099d71 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11099d78 jmp 0x11099d83 */
  goto L_11099d83;
L_11099d7a:;
  /* 11099d7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11099d7d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099d80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11099d83:;
  /* 11099d83 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099d87 jge 0x1109a27b */
  if ((C.sf==C.of)) goto L_1109a27b;
  /* 11099d8d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11099d97 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11099da1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11099dab mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11099db5 jmp 0x11099dc6 */
  goto L_11099dc6;
L_11099db7:;
  /* 11099db7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11099dbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099dc0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11099dc6:;
  /* 11099dc6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099dcd jge 0x11099de2 */
  if ((C.sf==C.of)) goto L_11099de2;
  /* 11099dcf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11099dd5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11099de0 jmp 0x11099db7 */
  goto L_11099db7;
L_11099de2:;
  /* 11099de2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099de6 jl 0x1109a21d */
  if ((C.sf!=C.of)) goto L_1109a21d;
  /* 11099dec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11099df1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11099df7 push ecx */
  push32((uint32_t)(ECX));
  /* 11099df8 call dword ptr [0x110c3244] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3244))), 0x11099dfeu);
  /* 11099dfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11099e00 je 0x11099e0c */
  if (C.zf) goto L_11099e0c;
  /* 11099e02 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11099e07 jmp 0x1109a2b9 */
  goto L_1109a2b9;
L_11099e0c:;
  /* 11099e0c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11099e12 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11099e15 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11099e1f jmp 0x11099e30 */
  goto L_11099e30;
L_11099e21:;
  /* 11099e21 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11099e27 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099e2a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11099e30:;
  /* 11099e30 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099e37 jge 0x11099fb4 */
  if ((C.sf==C.of)) goto L_11099fb4;
  /* 11099e3d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11099e40 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099e43 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11099e49 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11099e4f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099e55 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11099e5b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11099e61 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099e65 jne 0x11099e72 */
  if (!C.zf) goto L_11099e72;
  /* 11099e67 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 11099e6d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099e70 je 0x11099e7c */
  if (C.zf) goto L_11099e7c;
L_11099e72:;
  /* 11099e72 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11099e77 jmp 0x1109a2b9 */
  goto L_1109a2b9;
L_11099e7c:;
  /* 11099e7c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11099e82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11099e84 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11099e8a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11099e90 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11099e96 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 11099e9c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11099e9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11099ea1 je 0x11099ed9 */
  if (C.zf) goto L_11099ed9;
  /* 11099ea3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11099ea9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11099eac mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11099eb2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099ebc jle 0x11099ec8 */
  if ((C.zf||C.sf!=C.of)) goto L_11099ec8;
  /* 11099ebe mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11099ec3 jmp 0x1109a2b9 */
  goto L_1109a2b9;
L_11099ec8:;
  /* 11099ec8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 11099ece add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099ed1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11099ed7 jmp 0x11099f1b */
  goto L_11099f1b;
L_11099ed9:;
  /* 11099ed9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 11099edf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11099ee2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11099ee5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11099eeb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099ef2 jle 0x11099efe */
  if ((C.zf||C.sf!=C.of)) goto L_11099efe;
  /* 11099ef4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11099efe:;
  /* 11099efe mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11099f04 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 11099f0b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099f0e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11099f14 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_11099f1b:;
  /* 11099f1b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099f22 jl 0x11099f3d */
  if ((C.sf!=C.of)) goto L_11099f3d;
  /* 11099f24 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11099f2a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11099f2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11099f2f jne 0x11099f3d */
  if (!C.zf) goto L_11099f3d;
  /* 11099f31 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099f3b jle 0x11099f47 */
  if ((C.zf||C.sf!=C.of)) goto L_11099f47;
L_11099f3d:;
  /* 11099f3d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 11099f42 jmp 0x1109a2b9 */
  goto L_1109a2b9;
L_11099f47:;
  /* 11099f47 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11099f4d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099f53 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11099f56 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099f5c je 0x11099f68 */
  if (C.zf) goto L_11099f68;
  /* 11099f5e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11099f63 jmp 0x1109a2b9 */
  goto L_1109a2b9;
L_11099f68:;
  /* 11099f68 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11099f6e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099f74 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11099f7a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11099f80 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099f86 jb 0x11099e7c */
  if (C.cf) goto L_11099e7c;
  /* 11099f8c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11099f92 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099f98 je 0x11099fa4 */
  if (C.zf) goto L_11099fa4;
  /* 11099f9a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11099f9f jmp 0x1109a2b9 */
  goto L_1109a2b9;
L_11099fa4:;
  /* 11099fa4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11099fa7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099fac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11099faf jmp 0x11099e21 */
  goto L_11099e21;
L_11099fb4:;
  /* 11099fb4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11099fb7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11099fb9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099fbf je 0x11099fcb */
  if (C.zf) goto L_11099fcb;
  /* 11099fc1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11099fc6 jmp 0x1109a2b9 */
  goto L_1109a2b9;
L_11099fcb:;
  /* 11099fcb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11099fce mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11099fd4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11099fdb jmp 0x11099fe6 */
  goto L_11099fe6;
L_11099fdd:;
  /* 11099fdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11099fe0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11099fe3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11099fe6:;
  /* 11099fe6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11099fea jge 0x1109a21d */
  if ((C.sf==C.of)) goto L_1109a21d;
  /* 11099ff0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 11099ffa mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1109a000 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1109a006:;
  /* 1109a006 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1109a00c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1109a00f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1109a015 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1109a01b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a021 je 0x1109a14a */
  if (C.zf) goto L_1109a14a;
  /* 1109a027 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1109a02a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1109a030 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a037 je 0x1109a14a */
  if (C.zf) goto L_1109a14a;
  /* 1109a03d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1109a043 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a049 jb 0x1109a05e */
  if (C.cf) goto L_1109a05e;
  /* 1109a04b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1109a051 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a056 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a05c jb 0x1109a068 */
  if (C.cf) goto L_1109a068;
L_1109a05e:;
  /* 1109a05e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1109a063 jmp 0x1109a2b9 */
  goto L_1109a2b9;
L_1109a068:;
  /* 1109a068 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1109a06e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1109a074 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1109a07a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1109a080 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a083 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1109a086 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109a089 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a08e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1109a094:;
  /* 1109a094 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109a097 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a09d je 0x1109a0be */
  if (C.zf) goto L_1109a0be;
  /* 1109a09f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109a0a2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a0a8 jne 0x1109a0ac */
  if (!C.zf) goto L_1109a0ac;
  /* 1109a0aa jmp 0x1109a0be */
  goto L_1109a0be;
L_1109a0ac:;
  /* 1109a0ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109a0af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1109a0b1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1109a0b4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109a0b7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a0b9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1109a0bc jmp 0x1109a094 */
  goto L_1109a094;
L_1109a0be:;
  /* 1109a0be mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109a0c1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a0c7 jne 0x1109a0d3 */
  if (!C.zf) goto L_1109a0d3;
  /* 1109a0c9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1109a0ce jmp 0x1109a2b9 */
  goto L_1109a2b9;
L_1109a0d3:;
  /* 1109a0d3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1109a0d9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1109a0db sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1109a0de sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109a0e1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1109a0e7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a0ee jle 0x1109a0fa */
  if ((C.zf||C.sf!=C.of)) goto L_1109a0fa;
  /* 1109a0f0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1109a0fa:;
  /* 1109a0fa mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1109a100 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a103 je 0x1109a10f */
  if (C.zf) goto L_1109a10f;
  /* 1109a105 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1109a10a jmp 0x1109a2b9 */
  goto L_1109a2b9;
L_1109a10f:;
  /* 1109a10f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1109a115 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1109a118 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a11e je 0x1109a12a */
  if (C.zf) goto L_1109a12a;
  /* 1109a120 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1109a125 jmp 0x1109a2b9 */
  goto L_1109a2b9;
L_1109a12a:;
  /* 1109a12a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1109a130 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1109a136 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1109a13c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a13f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1109a145 jmp 0x1109a006 */
  goto L_1109a006;
L_1109a14a:;
  /* 1109a14a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a151 je 0x1109a1c1 */
  if (C.zf) goto L_1109a1c1;
  /* 1109a153 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a157 jge 0x1109a18b */
  if ((C.sf==C.of)) goto L_1109a18b;
  /* 1109a159 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1109a15e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1109a161 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1109a163 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1109a169 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1109a16b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1109a171 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1109a176 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1109a179 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1109a17b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1109a181 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1109a183 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1109a189 jmp 0x1109a1c1 */
  goto L_1109a1c1;
L_1109a18b:;
  /* 1109a18b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1109a18e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109a191 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1109a196 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1109a198 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1109a19e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1109a1a0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1109a1a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1109a1a9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109a1ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1109a1b1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1109a1b3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1109a1b9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1109a1bb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1109a1c1:;
  /* 1109a1c1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1109a1c7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1109a1ca cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a1d0 jne 0x1109a1e4 */
  if (!C.zf) goto L_1109a1e4;
  /* 1109a1d2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1109a1d5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1109a1db cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a1e2 je 0x1109a1ee */
  if (C.zf) goto L_1109a1ee;
L_1109a1e4:;
  /* 1109a1e4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1109a1e9 jmp 0x1109a2b9 */
  goto L_1109a2b9;
L_1109a1ee:;
  /* 1109a1ee mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1109a1f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1109a1f7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a1fd je 0x1109a209 */
  if (C.zf) goto L_1109a209;
  /* 1109a1ff mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1109a204 jmp 0x1109a2b9 */
  goto L_1109a2b9;
L_1109a209:;
  /* 1109a209 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1109a20f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a212 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1109a218 jmp 0x11099fdd */
  goto L_11099fdd;
L_1109a21d:;
  /* 1109a21d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109a220 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1109a226 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1109a22c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a230 jne 0x1109a24a */
  if (!C.zf) goto L_1109a24a;
  /* 1109a232 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109a235 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1109a23b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1109a241 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a248 je 0x1109a251 */
  if (C.zf) goto L_1109a251;
L_1109a24a:;
  /* 1109a24a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1109a24f jmp 0x1109a2b9 */
  goto L_1109a2b9;
L_1109a251:;
  /* 1109a251 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1109a257 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a25d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1109a263 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109a266 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a26b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1109a26e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109a271 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1109a273 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1109a276 jmp 0x11099d7a */
  goto L_11099d7a;
L_1109a27b:;
  /* 1109a27b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1109a281 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1109a287 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a289 jne 0x1109a29c */
  if (!C.zf) goto L_1109a29c;
  /* 1109a28b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1109a291 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1109a297 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a29a je 0x1109a2a3 */
  if (C.zf) goto L_1109a2a3;
L_1109a29c:;
  /* 1109a29c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1109a2a1 jmp 0x1109a2b9 */
  goto L_1109a2b9;
L_1109a2a3:;
  /* 1109a2a3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1109a2a9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a2ac mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1109a2b2 jmp 0x11099ce3 */
  goto L_11099ce3;
L_1109a2b7:;
  /* 1109a2b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1109a2b9:;
  /* 1109a2b9 mov esp, ebp */
  ESP = (EBP);
  /* 1109a2bb pop ebp */
  EBP = (pop32());
  /* 1109a2bc ret  */
  ESPCHK(0x11099ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2c0 @ 0x1109a2c0 (250 bytes, 92 insns) */
void f_1109a2c0(void) {
  FTRACE(0x1109a2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109a2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109a2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1109a2c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109a2c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1109a2c7 push esi */
  push32((uint32_t)(ESI));
  /* 1109a2c8 push edi */
  push32((uint32_t)(EDI));
  /* 1109a2c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1109a2cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1109a2cf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1109a2d2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1109a2d5:;
  /* 1109a2d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a2d9 jne 0x1109a2f9 */
  if (!C.zf) goto L_1109a2f9;
  /* 1109a2db push 0x110bc1a0 */
  push32((uint32_t)(0x110bc1a0u));
  /* 1109a2e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109a2e2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1109a2e4 push 0x110bc194 */
  push32((uint32_t)(0x110bc194u));
  /* 1109a2e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109a2eb call 0x11093470 */
  push32(0x1109a2f0u); f_11093470();
  /* 1109a2f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a2f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a2f6 jne 0x1109a2f9 */
  if (!C.zf) goto L_1109a2f9;
  /* 1109a2f8 int3  */
  x86_unimpl("int3 @ 0x1109a2f8");
L_1109a2f9:;
  /* 1109a2f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109a2fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109a2fd jne 0x1109a2d5 */
  if (!C.zf) goto L_1109a2d5;
L_1109a2ff:;
  /* 1109a2ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a303 jne 0x1109a323 */
  if (!C.zf) goto L_1109a323;
  /* 1109a305 push 0x110bc184 */
  push32((uint32_t)(0x110bc184u));
  /* 1109a30a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109a30c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1109a30e push 0x110bc194 */
  push32((uint32_t)(0x110bc194u));
  /* 1109a313 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109a315 call 0x11093470 */
  push32(0x1109a31au); f_11093470();
  /* 1109a31a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a31d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a320 jne 0x1109a323 */
  if (!C.zf) goto L_1109a323;
  /* 1109a322 int3  */
  x86_unimpl("int3 @ 0x1109a322");
L_1109a323:;
  /* 1109a323 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109a325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109a327 jne 0x1109a2ff */
  if (!C.zf) goto L_1109a2ff;
  /* 1109a329 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a32c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1109a333 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109a339 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1109a33c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a33f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109a342 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1109a344 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a347 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1109a34e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109a351 push ecx */
  push32((uint32_t)(ECX));
  /* 1109a352 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109a355 push edx */
  push32((uint32_t)(EDX));
  /* 1109a356 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a359 push eax */
  push32((uint32_t)(EAX));
  /* 1109a35a call 0x1109b340 */
  push32(0x1109a35fu); f_1109b340();
  /* 1109a35f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a362 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1109a365 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a368 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1109a36b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109a36e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a371 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1109a374 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a377 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a37b jl 0x1109a39f */
  if ((C.sf!=C.of)) goto L_1109a39f;
  /* 1109a37d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a380 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1109a382 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1109a385 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109a387 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1109a38d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1109a390 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a393 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1109a395 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a398 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a39b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1109a39d jmp 0x1109a3b0 */
  goto L_1109a3b0;
L_1109a39f:;
  /* 1109a39f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a3a2 push edx */
  push32((uint32_t)(EDX));
  /* 1109a3a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109a3a5 call 0x1109b0c0 */
  push32(0x1109a3aau); f_1109b0c0();
  /* 1109a3aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a3ad mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1109a3b0:;
  /* 1109a3b0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1109a3b3 pop edi */
  EDI = (pop32());
  /* 1109a3b4 pop esi */
  ESI = (pop32());
  /* 1109a3b5 pop ebx */
  EBX = (pop32());
  /* 1109a3b6 mov esp, ebp */
  ESP = (EBP);
  /* 1109a3b8 pop ebp */
  EBP = (pop32());
  /* 1109a3b9 ret  */
  ESPCHK(0x1109a2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3c0 @ 0x1109a3c0 (183 bytes, 58 insns) */
void f_1109a3c0(void) {
  FTRACE(0x1109a3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109a3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109a3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1109a3c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109a3c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109a3c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a3cc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a3d1 ja 0x1109a3ea */
  if ((!C.cf&&!C.zf)) goto L_1109a3ea;
  /* 1109a3d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109a3d6 mov edx, dword ptr [0x110bec98] */
  EDX = (r32((uint32_t)(0x110bec98)));
  /* 1109a3dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109a3de mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1109a3e2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1109a3e5 jmp 0x1109a473 */
  goto L_1109a473;
L_1109a3ea:;
  /* 1109a3ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109a3ed sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1109a3f0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1109a3f6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1109a3fc mov edx, dword ptr [0x110bec98] */
  EDX = (r32((uint32_t)(0x110bec98)));
  /* 1109a402 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109a404 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1109a408 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1109a40d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109a40f je 0x1109a433 */
  if (C.zf) goto L_1109a433;
  /* 1109a411 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109a414 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1109a417 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1109a41d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1109a420 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1109a423 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1109a426 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1109a42a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1109a431 jmp 0x1109a444 */
  goto L_1109a444;
L_1109a433:;
  /* 1109a433 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1109a436 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1109a439 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1109a43d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1109a444:;
  /* 1109a444 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109a446 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109a448 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109a44a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1109a44d push ecx */
  push32((uint32_t)(ECX));
  /* 1109a44e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109a451 push edx */
  push32((uint32_t)(EDX));
  /* 1109a452 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1109a455 push eax */
  push32((uint32_t)(EAX));
  /* 1109a456 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109a458 call 0x1109c5e0 */
  push32(0x1109a45du); f_1109c5e0();
  /* 1109a45d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a460 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109a462 jne 0x1109a468 */
  if (!C.zf) goto L_1109a468;
  /* 1109a464 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109a466 jmp 0x1109a473 */
  goto L_1109a473;
L_1109a468:;
  /* 1109a468 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109a46b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109a470 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1109a473:;
  /* 1109a473 mov esp, ebp */
  ESP = (EBP);
  /* 1109a475 pop ebp */
  EBP = (pop32());
  /* 1109a476 ret  */
  ESPCHK(0x1109a3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a480 @ 0x1109a480 (836 bytes, 238 insns) */
void f_1109a480(void) {
  FTRACE(0x1109a480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109a480 push ebp */
  push32((uint32_t)(EBP));
  /* 1109a481 mov ebp, esp */
  EBP = (ESP);
  /* 1109a483 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109a486 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1109a488 call 0x11097db0 */
  push32(0x1109a48du); f_11097db0();
  /* 1109a48d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109a493 push eax */
  push32((uint32_t)(EAX));
  /* 1109a494 call 0x1109a7d0 */
  push32(0x1109a499u); f_1109a7d0();
  /* 1109a499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a49c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1109a49f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109a4a2 cmp ecx, dword ptr [0x110c1ce4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110c1ce4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a4a8 jne 0x1109a4bb */
  if (!C.zf) goto L_1109a4bb;
  /* 1109a4aa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1109a4ac call 0x11097e50 */
  push32(0x1109a4b1u); f_11097e50();
  /* 1109a4b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a4b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109a4b6 jmp 0x1109a7c0 */
  goto L_1109a7c0;
L_1109a4bb:;
  /* 1109a4bb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a4bf jne 0x1109a4dc */
  if (!C.zf) goto L_1109a4dc;
  /* 1109a4c1 call 0x1109a8b0 */
  push32(0x1109a4c6u); f_1109a8b0();
  /* 1109a4c6 call 0x1109a930 */
  push32(0x1109a4cbu); f_1109a930();
  /* 1109a4cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1109a4cd call 0x11097e50 */
  push32(0x1109a4d2u); f_11097e50();
  /* 1109a4d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a4d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109a4d7 jmp 0x1109a7c0 */
  goto L_1109a7c0;
L_1109a4dc:;
  /* 1109a4dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1109a4e3 jmp 0x1109a4ee */
  goto L_1109a4ee;
L_1109a4e5:;
  /* 1109a4e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109a4e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a4eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1109a4ee:;
  /* 1109a4ee cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a4f2 jae 0x1109a63f */
  if (!C.cf) goto L_1109a63f;
  /* 1109a4f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109a4fb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109a4fe mov ecx, dword ptr [eax + 0x110beeb8] */
  ECX = (r32((uint32_t)(EAX + 0x110beeb8)));
  /* 1109a504 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a507 jne 0x1109a63a */
  if (!C.zf) goto L_1109a63a;
  /* 1109a50d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1109a514 jmp 0x1109a51f */
  goto L_1109a51f;
L_1109a516:;
  /* 1109a516 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a519 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a51c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1109a51f:;
  /* 1109a51f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a526 jae 0x1109a534 */
  if (!C.cf) goto L_1109a534;
  /* 1109a528 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a52b mov byte ptr [eax + 0x110c1e80], 0 */
  w8((uint32_t)(EAX + 0x110c1e80), (0x0u));
  /* 1109a532 jmp 0x1109a516 */
  goto L_1109a516;
L_1109a534:;
  /* 1109a534 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1109a53b jmp 0x1109a546 */
  goto L_1109a546;
L_1109a53d:;
  /* 1109a53d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109a540 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a543 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1109a546:;
  /* 1109a546 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a54a jae 0x1109a5c7 */
  if (!C.cf) goto L_1109a5c7;
  /* 1109a54c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109a54f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109a552 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109a555 lea ecx, [edx + eax*8 + 0x110beec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x110beec8));
  /* 1109a55c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109a55f jmp 0x1109a56a */
  goto L_1109a56a;
L_1109a561:;
  /* 1109a561 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109a564 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a567 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1109a56a:;
  /* 1109a56a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109a56d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109a56f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1109a571 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109a573 je 0x1109a5c2 */
  if (C.zf) goto L_1109a5c2;
  /* 1109a575 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109a578 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109a57a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1109a57d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109a57f je 0x1109a5c2 */
  if (C.zf) goto L_1109a5c2;
  /* 1109a581 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109a584 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109a586 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1109a588 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1109a58b jmp 0x1109a596 */
  goto L_1109a596;
L_1109a58d:;
  /* 1109a58d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a590 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a593 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1109a596:;
  /* 1109a596 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109a599 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109a59b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1109a59e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a5a1 ja 0x1109a5c0 */
  if ((!C.cf&&!C.zf)) goto L_1109a5c0;
  /* 1109a5a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a5a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109a5a9 mov dl, byte ptr [eax + 0x110c1e81] */
  DL = (r8((uint32_t)(EAX + 0x110c1e81)));
  /* 1109a5af or dl, byte ptr [ecx + 0x110beeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x110beeb0))); DL = (_r); fl_logic(_r,8); }
  /* 1109a5b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a5b8 mov byte ptr [eax + 0x110c1e81], dl */
  w8((uint32_t)(EAX + 0x110c1e81), (DL));
  /* 1109a5be jmp 0x1109a58d */
  goto L_1109a58d;
L_1109a5c0:;
  /* 1109a5c0 jmp 0x1109a561 */
  goto L_1109a561;
L_1109a5c2:;
  /* 1109a5c2 jmp 0x1109a53d */
  goto L_1109a53d;
L_1109a5c7:;
  /* 1109a5c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109a5ca mov dword ptr [0x110c1ce4], ecx */
  w32((uint32_t)(0x110c1ce4), (ECX));
  /* 1109a5d0 mov dword ptr [0x110c1d6c], 1 */
  w32((uint32_t)(0x110c1d6c), (0x1u));
  /* 1109a5da mov edx, dword ptr [0x110c1ce4] */
  EDX = (r32((uint32_t)(0x110c1ce4)));
  /* 1109a5e0 push edx */
  push32((uint32_t)(EDX));
  /* 1109a5e1 call 0x1109a830 */
  push32(0x1109a5e6u); f_1109a830();
  /* 1109a5e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a5e9 mov dword ptr [0x110c1f84], eax */
  w32((uint32_t)(0x110c1f84), (EAX));
  /* 1109a5ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1109a5f5 jmp 0x1109a600 */
  goto L_1109a600;
L_1109a5f7:;
  /* 1109a5f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109a5fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a5fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1109a600:;
  /* 1109a600 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a604 jae 0x1109a624 */
  if (!C.cf) goto L_1109a624;
  /* 1109a606 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109a609 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109a60c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109a60f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109a612 mov cx, word ptr [ecx + eax*2 + 0x110beebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x110beebc)));
  /* 1109a61a mov word ptr [edx*2 + 0x110c1d60], cx */
  w16((uint32_t)(EDX*2 + 0x110c1d60), (CX));
  /* 1109a622 jmp 0x1109a5f7 */
  goto L_1109a5f7;
L_1109a624:;
  /* 1109a624 call 0x1109a930 */
  push32(0x1109a629u); f_1109a930();
  /* 1109a629 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1109a62b call 0x11097e50 */
  push32(0x1109a630u); f_11097e50();
  /* 1109a630 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a633 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109a635 jmp 0x1109a7c0 */
  goto L_1109a7c0;
L_1109a63a:;
  /* 1109a63a jmp 0x1109a4e5 */
  goto L_1109a4e5;
L_1109a63f:;
  /* 1109a63f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1109a642 push edx */
  push32((uint32_t)(EDX));
  /* 1109a643 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109a646 push eax */
  push32((uint32_t)(EAX));
  /* 1109a647 call dword ptr [0x110c3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3330))), 0x1109a64du);
  /* 1109a64d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a650 jne 0x1109a792 */
  if (!C.zf) goto L_1109a792;
  /* 1109a656 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1109a65d jmp 0x1109a668 */
  goto L_1109a668;
L_1109a65f:;
  /* 1109a65f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a662 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a665 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1109a668:;
  /* 1109a668 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a66f jae 0x1109a67d */
  if (!C.cf) goto L_1109a67d;
  /* 1109a671 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a674 mov byte ptr [edx + 0x110c1e80], 0 */
  w8((uint32_t)(EDX + 0x110c1e80), (0x0u));
  /* 1109a67b jmp 0x1109a65f */
  goto L_1109a65f;
L_1109a67d:;
  /* 1109a67d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109a680 mov dword ptr [0x110c1ce4], eax */
  w32((uint32_t)(0x110c1ce4), (EAX));
  /* 1109a685 mov dword ptr [0x110c1f84], 0 */
  w32((uint32_t)(0x110c1f84), (0x0u));
  /* 1109a68f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a693 jbe 0x1109a74e */
  if ((C.cf||C.zf)) goto L_1109a74e;
  /* 1109a699 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1109a69c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1109a69f jmp 0x1109a6aa */
  goto L_1109a6aa;
L_1109a6a1:;
  /* 1109a6a1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1109a6a4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a6a7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1109a6aa:;
  /* 1109a6aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1109a6ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109a6af mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1109a6b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109a6b3 je 0x1109a6fc */
  if (C.zf) goto L_1109a6fc;
  /* 1109a6b5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1109a6b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109a6ba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1109a6bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109a6bf je 0x1109a6fc */
  if (C.zf) goto L_1109a6fc;
  /* 1109a6c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1109a6c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109a6c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1109a6c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1109a6cb jmp 0x1109a6d6 */
  goto L_1109a6d6;
L_1109a6cd:;
  /* 1109a6cd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a6d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a6d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1109a6d6:;
  /* 1109a6d6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1109a6d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109a6db mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1109a6de cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a6e1 ja 0x1109a6fa */
  if ((!C.cf&&!C.zf)) goto L_1109a6fa;
  /* 1109a6e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a6e6 mov cl, byte ptr [eax + 0x110c1e81] */
  CL = (r8((uint32_t)(EAX + 0x110c1e81)));
  /* 1109a6ec or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1109a6ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a6f2 mov byte ptr [edx + 0x110c1e81], cl */
  w8((uint32_t)(EDX + 0x110c1e81), (CL));
  /* 1109a6f8 jmp 0x1109a6cd */
  goto L_1109a6cd;
L_1109a6fa:;
  /* 1109a6fa jmp 0x1109a6a1 */
  goto L_1109a6a1;
L_1109a6fc:;
  /* 1109a6fc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1109a703 jmp 0x1109a70e */
  goto L_1109a70e;
L_1109a705:;
  /* 1109a705 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a708 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a70b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1109a70e:;
  /* 1109a70e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a715 jae 0x1109a72e */
  if (!C.cf) goto L_1109a72e;
  /* 1109a717 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a71a mov dl, byte ptr [ecx + 0x110c1e81] */
  DL = (r8((uint32_t)(ECX + 0x110c1e81)));
  /* 1109a720 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1109a723 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109a726 mov byte ptr [eax + 0x110c1e81], dl */
  w8((uint32_t)(EAX + 0x110c1e81), (DL));
  /* 1109a72c jmp 0x1109a705 */
  goto L_1109a705;
L_1109a72e:;
  /* 1109a72e mov ecx, dword ptr [0x110c1ce4] */
  ECX = (r32((uint32_t)(0x110c1ce4)));
  /* 1109a734 push ecx */
  push32((uint32_t)(ECX));
  /* 1109a735 call 0x1109a830 */
  push32(0x1109a73au); f_1109a830();
  /* 1109a73a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a73d mov dword ptr [0x110c1f84], eax */
  w32((uint32_t)(0x110c1f84), (EAX));
  /* 1109a742 mov dword ptr [0x110c1d6c], 1 */
  w32((uint32_t)(0x110c1d6c), (0x1u));
  /* 1109a74c jmp 0x1109a758 */
  goto L_1109a758;
L_1109a74e:;
  /* 1109a74e mov dword ptr [0x110c1d6c], 0 */
  w32((uint32_t)(0x110c1d6c), (0x0u));
L_1109a758:;
  /* 1109a758 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1109a75f jmp 0x1109a76a */
  goto L_1109a76a;
L_1109a761:;
  /* 1109a761 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109a764 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a767 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1109a76a:;
  /* 1109a76a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a76e jae 0x1109a77f */
  if (!C.cf) goto L_1109a77f;
  /* 1109a770 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109a773 mov word ptr [eax*2 + 0x110c1d60], 0 */
  w16((uint32_t)(EAX*2 + 0x110c1d60), (0x0u));
  /* 1109a77d jmp 0x1109a761 */
  goto L_1109a761;
L_1109a77f:;
  /* 1109a77f call 0x1109a930 */
  push32(0x1109a784u); f_1109a930();
  /* 1109a784 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1109a786 call 0x11097e50 */
  push32(0x1109a78bu); f_11097e50();
  /* 1109a78b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a78e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109a790 jmp 0x1109a7c0 */
  goto L_1109a7c0;
L_1109a792:;
  /* 1109a792 cmp dword ptr [0x110c07f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c07f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a799 je 0x1109a7b3 */
  if (C.zf) goto L_1109a7b3;
  /* 1109a79b call 0x1109a8b0 */
  push32(0x1109a7a0u); f_1109a8b0();
  /* 1109a7a0 call 0x1109a930 */
  push32(0x1109a7a5u); f_1109a930();
  /* 1109a7a5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1109a7a7 call 0x11097e50 */
  push32(0x1109a7acu); f_11097e50();
  /* 1109a7ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a7af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109a7b1 jmp 0x1109a7c0 */
  goto L_1109a7c0;
L_1109a7b3:;
  /* 1109a7b3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1109a7b5 call 0x11097e50 */
  push32(0x1109a7bau); f_11097e50();
  /* 1109a7ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a7bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1109a7c0:;
  /* 1109a7c0 mov esp, ebp */
  ESP = (EBP);
  /* 1109a7c2 pop ebp */
  EBP = (pop32());
  /* 1109a7c3 ret  */
  ESPCHK(0x1109a480u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1109a7d0 (89 bytes, 21 insns) */
void f_1109a7d0(void) {
  FTRACE(0x1109a7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109a7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109a7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1109a7d3 mov dword ptr [0x110c07f0], 0 */
  w32((uint32_t)(0x110c07f0), (0x0u));
  /* 1109a7dd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a7e1 jne 0x1109a7f5 */
  if (!C.zf) goto L_1109a7f5;
  /* 1109a7e3 mov dword ptr [0x110c07f0], 1 */
  w32((uint32_t)(0x110c07f0), (0x1u));
  /* 1109a7ed call dword ptr [0x110c3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3350))), 0x1109a7f3u);
  /* 1109a7f3 jmp 0x1109a827 */
  goto L_1109a827;
L_1109a7f5:;
  /* 1109a7f5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a7f9 jne 0x1109a80d */
  if (!C.zf) goto L_1109a80d;
  /* 1109a7fb mov dword ptr [0x110c07f0], 1 */
  w32((uint32_t)(0x110c07f0), (0x1u));
  /* 1109a805 call dword ptr [0x110c3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3334))), 0x1109a80bu);
  /* 1109a80b jmp 0x1109a827 */
  goto L_1109a827;
L_1109a80d:;
  /* 1109a80d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a811 jne 0x1109a824 */
  if (!C.zf) goto L_1109a824;
  /* 1109a813 mov dword ptr [0x110c07f0], 1 */
  w32((uint32_t)(0x110c07f0), (0x1u));
  /* 1109a81d mov eax, dword ptr [0x110c0810] */
  EAX = (r32((uint32_t)(0x110c0810)));
  /* 1109a822 jmp 0x1109a827 */
  goto L_1109a827;
L_1109a824:;
  /* 1109a824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1109a827:;
  /* 1109a827 pop ebp */
  EBP = (pop32());
  /* 1109a828 ret  */
  ESPCHK(0x1109a7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a830 @ 0x1109a830 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1109a830(void) {
  FTRACE(0x1109a830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109a830 push ebp */
  push32((uint32_t)(EBP));
  /* 1109a831 mov ebp, esp */
  EBP = (ESP);
  /* 1109a833 push ecx */
  push32((uint32_t)(ECX));
  /* 1109a834 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109a837 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109a83a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109a83d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109a843 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1109a846 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a84a ja 0x1109a87a */
  if ((!C.cf&&!C.zf)) goto L_1109a87a;
  /* 1109a84c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109a84f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109a851 mov dl, byte ptr [eax + 0x1109a894] */
  DL = (r8((uint32_t)(EAX + 0x1109a894)));
  /* 1109a857 jmp dword ptr [edx*4 + 0x1109a880] */
  switch (EDX) {
    case 0: goto L_1109a85e;
    case 1: goto L_1109a865;
    case 2: goto L_1109a86c;
    case 3: goto L_1109a873;
    case 4: goto L_1109a87a;
    default: x86_unimpl("switch@0x1109a857 out of table"); return;
  }
L_1109a85e:;
  /* 1109a85e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1109a863 jmp 0x1109a87c */
  goto L_1109a87c;
L_1109a865:;
  /* 1109a865 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1109a86a jmp 0x1109a87c */
  goto L_1109a87c;
L_1109a86c:;
  /* 1109a86c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1109a871 jmp 0x1109a87c */
  goto L_1109a87c;
L_1109a873:;
  /* 1109a873 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1109a878 jmp 0x1109a87c */
  goto L_1109a87c;
L_1109a87a:;
  /* 1109a87a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1109a87c:;
  /* 1109a87c mov esp, ebp */
  ESP = (EBP);
  /* 1109a87e pop ebp */
  EBP = (pop32());
  /* 1109a87f ret  */
  ESPCHK(0x1109a830u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1109a8b0 (116 bytes, 29 insns) */
void f_1109a8b0(void) {
  FTRACE(0x1109a8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109a8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109a8b1 mov ebp, esp */
  EBP = (ESP);
  /* 1109a8b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1109a8b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1109a8bb jmp 0x1109a8c6 */
  goto L_1109a8c6;
L_1109a8bd:;
  /* 1109a8bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109a8c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a8c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1109a8c6:;
  /* 1109a8c6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a8cd jge 0x1109a8db */
  if ((C.sf==C.of)) goto L_1109a8db;
  /* 1109a8cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109a8d2 mov byte ptr [ecx + 0x110c1e80], 0 */
  w8((uint32_t)(ECX + 0x110c1e80), (0x0u));
  /* 1109a8d9 jmp 0x1109a8bd */
  goto L_1109a8bd;
L_1109a8db:;
  /* 1109a8db mov dword ptr [0x110c1ce4], 0 */
  w32((uint32_t)(0x110c1ce4), (0x0u));
  /* 1109a8e5 mov dword ptr [0x110c1d6c], 0 */
  w32((uint32_t)(0x110c1d6c), (0x0u));
  /* 1109a8ef mov dword ptr [0x110c1f84], 0 */
  w32((uint32_t)(0x110c1f84), (0x0u));
  /* 1109a8f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1109a900 jmp 0x1109a90b */
  goto L_1109a90b;
L_1109a902:;
  /* 1109a902 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109a905 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a908 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1109a90b:;
  /* 1109a90b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a90f jge 0x1109a920 */
  if ((C.sf==C.of)) goto L_1109a920;
  /* 1109a911 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109a914 mov word ptr [eax*2 + 0x110c1d60], 0 */
  w16((uint32_t)(EAX*2 + 0x110c1d60), (0x0u));
  /* 1109a91e jmp 0x1109a902 */
  goto L_1109a902;
L_1109a920:;
  /* 1109a920 mov esp, ebp */
  ESP = (EBP);
  /* 1109a922 pop ebp */
  EBP = (pop32());
  /* 1109a923 ret  */
  ESPCHK(0x1109a8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a930 @ 0x1109a930 (770 bytes, 175 insns) */
void f_1109a930(void) {
  FTRACE(0x1109a930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109a930 push ebp */
  push32((uint32_t)(EBP));
  /* 1109a931 mov ebp, esp */
  EBP = (ESP);
  /* 1109a933 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109a939 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1109a93f push eax */
  push32((uint32_t)(EAX));
  /* 1109a940 mov ecx, dword ptr [0x110c1ce4] */
  ECX = (r32((uint32_t)(0x110c1ce4)));
  /* 1109a946 push ecx */
  push32((uint32_t)(ECX));
  /* 1109a947 call dword ptr [0x110c3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3330))), 0x1109a94du);
  /* 1109a94d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a950 jne 0x1109ab69 */
  if (!C.zf) goto L_1109ab69;
  /* 1109a956 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1109a960 jmp 0x1109a971 */
  goto L_1109a971;
L_1109a962:;
  /* 1109a962 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109a968 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a96b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1109a971:;
  /* 1109a971 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a97b jae 0x1109a992 */
  if (!C.cf) goto L_1109a992;
  /* 1109a97d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109a983 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1109a989 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1109a990 jmp 0x1109a962 */
  goto L_1109a962;
L_1109a992:;
  /* 1109a992 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1109a999 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1109a99f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1109a9a2 jmp 0x1109a9ad */
  goto L_1109a9ad;
L_1109a9a4:;
  /* 1109a9a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109a9a7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a9aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1109a9ad:;
  /* 1109a9ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109a9b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109a9b2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1109a9b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109a9b6 je 0x1109a9f8 */
  if (C.zf) goto L_1109a9f8;
  /* 1109a9b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109a9bb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109a9bd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1109a9bf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1109a9c5 jmp 0x1109a9d6 */
  goto L_1109a9d6;
L_1109a9c7:;
  /* 1109a9c7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109a9cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109a9d0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1109a9d6:;
  /* 1109a9d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109a9d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109a9db mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1109a9de cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109a9e4 ja 0x1109a9f6 */
  if ((!C.cf&&!C.zf)) goto L_1109a9f6;
  /* 1109a9e6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109a9ec mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1109a9f4 jmp 0x1109a9c7 */
  goto L_1109a9c7;
L_1109a9f6:;
  /* 1109a9f6 jmp 0x1109a9a4 */
  goto L_1109a9a4;
L_1109a9f8:;
  /* 1109a9f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109a9fa mov eax, dword ptr [0x110c1f84] */
  EAX = (r32((uint32_t)(0x110c1f84)));
  /* 1109a9ff push eax */
  push32((uint32_t)(EAX));
  /* 1109aa00 mov ecx, dword ptr [0x110c1ce4] */
  ECX = (r32((uint32_t)(0x110c1ce4)));
  /* 1109aa06 push ecx */
  push32((uint32_t)(ECX));
  /* 1109aa07 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1109aa0d push edx */
  push32((uint32_t)(EDX));
  /* 1109aa0e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1109aa13 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1109aa19 push eax */
  push32((uint32_t)(EAX));
  /* 1109aa1a push 1 */
  push32((uint32_t)(0x1u));
  /* 1109aa1c call 0x1109c5e0 */
  push32(0x1109aa21u); f_1109c5e0();
  /* 1109aa21 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109aa24 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109aa26 mov ecx, dword ptr [0x110c1ce4] */
  ECX = (r32((uint32_t)(0x110c1ce4)));
  /* 1109aa2c push ecx */
  push32((uint32_t)(ECX));
  /* 1109aa2d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1109aa32 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1109aa38 push edx */
  push32((uint32_t)(EDX));
  /* 1109aa39 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1109aa3e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1109aa44 push eax */
  push32((uint32_t)(EAX));
  /* 1109aa45 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1109aa4a mov ecx, dword ptr [0x110c1f84] */
  ECX = (r32((uint32_t)(0x110c1f84)));
  /* 1109aa50 push ecx */
  push32((uint32_t)(ECX));
  /* 1109aa51 call 0x1109c7a0 */
  push32(0x1109aa56u); f_1109c7a0();
  /* 1109aa56 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109aa59 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109aa5b mov edx, dword ptr [0x110c1ce4] */
  EDX = (r32((uint32_t)(0x110c1ce4)));
  /* 1109aa61 push edx */
  push32((uint32_t)(EDX));
  /* 1109aa62 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1109aa67 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1109aa6d push eax */
  push32((uint32_t)(EAX));
  /* 1109aa6e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1109aa73 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1109aa79 push ecx */
  push32((uint32_t)(ECX));
  /* 1109aa7a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1109aa7f mov edx, dword ptr [0x110c1f84] */
  EDX = (r32((uint32_t)(0x110c1f84)));
  /* 1109aa85 push edx */
  push32((uint32_t)(EDX));
  /* 1109aa86 call 0x1109c7a0 */
  push32(0x1109aa8bu); f_1109c7a0();
  /* 1109aa8b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109aa8e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1109aa98 jmp 0x1109aaa9 */
  goto L_1109aaa9;
L_1109aa9a:;
  /* 1109aa9a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109aaa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109aaa3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1109aaa9:;
  /* 1109aaa9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109aab3 jae 0x1109ab64 */
  if (!C.cf) goto L_1109ab64;
  /* 1109aab9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109aabf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109aac1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1109aac9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1109aacc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109aace je 0x1109ab06 */
  if (C.zf) goto L_1109ab06;
  /* 1109aad0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109aad6 mov cl, byte ptr [eax + 0x110c1e81] */
  CL = (r8((uint32_t)(EAX + 0x110c1e81)));
  /* 1109aadc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1109aadf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109aae5 mov byte ptr [edx + 0x110c1e81], cl */
  w8((uint32_t)(EDX + 0x110c1e81), (CL));
  /* 1109aaeb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109aaf1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109aaf7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1109aafe mov byte ptr [eax + 0x110c1d80], dl */
  w8((uint32_t)(EAX + 0x110c1d80), (DL));
  /* 1109ab04 jmp 0x1109ab5f */
  goto L_1109ab5f;
L_1109ab06:;
  /* 1109ab06 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109ab0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ab0e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1109ab16 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1109ab19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109ab1b je 0x1109ab52 */
  if (C.zf) goto L_1109ab52;
  /* 1109ab1d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109ab23 mov al, byte ptr [edx + 0x110c1e81] */
  AL = (r8((uint32_t)(EDX + 0x110c1e81)));
  /* 1109ab29 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1109ab2b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109ab31 mov byte ptr [ecx + 0x110c1e81], al */
  w8((uint32_t)(ECX + 0x110c1e81), (AL));
  /* 1109ab37 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109ab3d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109ab43 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1109ab4a mov byte ptr [edx + 0x110c1d80], cl */
  w8((uint32_t)(EDX + 0x110c1d80), (CL));
  /* 1109ab50 jmp 0x1109ab5f */
  goto L_1109ab5f;
L_1109ab52:;
  /* 1109ab52 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109ab58 mov byte ptr [edx + 0x110c1d80], 0 */
  w8((uint32_t)(EDX + 0x110c1d80), (0x0u));
L_1109ab5f:;
  /* 1109ab5f jmp 0x1109aa9a */
  goto L_1109aa9a;
L_1109ab64:;
  /* 1109ab64 jmp 0x1109ac2e */
  goto L_1109ac2e;
L_1109ab69:;
  /* 1109ab69 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1109ab73 jmp 0x1109ab84 */
  goto L_1109ab84;
L_1109ab75:;
  /* 1109ab75 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109ab7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ab7e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1109ab84:;
  /* 1109ab84 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ab8e jae 0x1109ac2e */
  if (!C.cf) goto L_1109ac2e;
  /* 1109ab94 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ab9b jb 0x1109abd8 */
  if (C.cf) goto L_1109abd8;
  /* 1109ab9d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109aba4 ja 0x1109abd8 */
  if ((!C.cf&&!C.zf)) goto L_1109abd8;
  /* 1109aba6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109abac mov dl, byte ptr [ecx + 0x110c1e81] */
  DL = (r8((uint32_t)(ECX + 0x110c1e81)));
  /* 1109abb2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1109abb5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109abbb mov byte ptr [eax + 0x110c1e81], dl */
  w8((uint32_t)(EAX + 0x110c1e81), (DL));
  /* 1109abc1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109abc7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109abca mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109abd0 mov byte ptr [edx + 0x110c1d80], cl */
  w8((uint32_t)(EDX + 0x110c1d80), (CL));
  /* 1109abd6 jmp 0x1109ac29 */
  goto L_1109ac29;
L_1109abd8:;
  /* 1109abd8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109abdf jb 0x1109ac1c */
  if (C.cf) goto L_1109ac1c;
  /* 1109abe1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109abe8 ja 0x1109ac1c */
  if ((!C.cf&&!C.zf)) goto L_1109ac1c;
  /* 1109abea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109abf0 mov cl, byte ptr [eax + 0x110c1e81] */
  CL = (r8((uint32_t)(EAX + 0x110c1e81)));
  /* 1109abf6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1109abf9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109abff mov byte ptr [edx + 0x110c1e81], cl */
  w8((uint32_t)(EDX + 0x110c1e81), (CL));
  /* 1109ac05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109ac0b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109ac0e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109ac14 mov byte ptr [ecx + 0x110c1d80], al */
  w8((uint32_t)(ECX + 0x110c1d80), (AL));
  /* 1109ac1a jmp 0x1109ac29 */
  goto L_1109ac29;
L_1109ac1c:;
  /* 1109ac1c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1109ac22 mov byte ptr [edx + 0x110c1d80], 0 */
  w8((uint32_t)(EDX + 0x110c1d80), (0x0u));
L_1109ac29:;
  /* 1109ac29 jmp 0x1109ab75 */
  goto L_1109ab75;
L_1109ac2e:;
  /* 1109ac2e mov esp, ebp */
  ESP = (EBP);
  /* 1109ac30 pop ebp */
  EBP = (pop32());
  /* 1109ac31 ret  */
  ESPCHK(0x1109a930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac40 @ 0x1109ac40 (23 bytes, 9 insns) */
void f_1109ac40(void) {
  FTRACE(0x1109ac40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109ac40 push ebp */
  push32((uint32_t)(EBP));
  /* 1109ac41 mov ebp, esp */
  EBP = (ESP);
  /* 1109ac43 cmp dword ptr [0x110c1d6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c1d6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ac4a je 0x1109ac53 */
  if (C.zf) goto L_1109ac53;
  /* 1109ac4c mov eax, dword ptr [0x110c1ce4] */
  EAX = (r32((uint32_t)(0x110c1ce4)));
  /* 1109ac51 jmp 0x1109ac55 */
  goto L_1109ac55;
L_1109ac53:;
  /* 1109ac53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1109ac55:;
  /* 1109ac55 pop ebp */
  EBP = (pop32());
  /* 1109ac56 ret  */
  ESPCHK(0x1109ac40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac60 @ 0x1109ac60 (34 bytes, 10 insns) */
void f_1109ac60(void) {
  FTRACE(0x1109ac60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109ac60 push ebp */
  push32((uint32_t)(EBP));
  /* 1109ac61 mov ebp, esp */
  EBP = (ESP);
  /* 1109ac63 cmp dword ptr [0x110c2130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c2130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ac6a jne 0x1109ac80 */
  if (!C.zf) goto L_1109ac80;
  /* 1109ac6c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1109ac6e call 0x1109a480 */
  push32(0x1109ac73u); f_1109a480();
  /* 1109ac73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ac76 mov dword ptr [0x110c2130], 1 */
  w32((uint32_t)(0x110c2130), (0x1u));
L_1109ac80:;
  /* 1109ac80 pop ebp */
  EBP = (pop32());
  /* 1109ac81 ret  */
  ESPCHK(0x1109ac60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac90 @ 0x1109ac90 (664 bytes, 268 insns) [15 switch table(s)] */
void f_1109ac90(void) {
  FTRACE(0x1109ac90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109ac90 push ebp */
  push32((uint32_t)(EBP));
  /* 1109ac91 mov ebp, esp */
  EBP = (ESP);
  /* 1109ac93 push edi */
  push32((uint32_t)(EDI));
  /* 1109ac94 push esi */
  push32((uint32_t)(ESI));
  /* 1109ac95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1109ac98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109ac9b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ac9e mov eax, ecx */
  EAX = (ECX);
  /* 1109aca0 mov edx, ecx */
  EDX = (ECX);
  /* 1109aca2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109aca4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109aca6 jbe 0x1109acb0 */
  if ((C.cf||C.zf)) goto L_1109acb0;
  /* 1109aca8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109acaa jb 0x1109ae28 */
  if (C.cf) goto L_1109ae28;
L_1109acb0:;
  /* 1109acb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1109acb6 jne 0x1109accc */
  if (!C.zf) goto L_1109accc;
  /* 1109acb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1109acbb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1109acbe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109acc1 jb 0x1109acec */
  if (C.cf) goto L_1109acec;
  /* 1109acc3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1109acc5 jmp dword ptr [edx*4 + 0x1109add8] */
  switch (EDX) {
    case 0: goto L_1109ade8;
    case 1: goto L_1109adf0;
    case 2: goto L_1109adfc;
    case 3: goto L_1109ae10;
    default: x86_unimpl("switch@0x1109acc5 out of table"); return;
  }
L_1109accc:;
  /* 1109accc mov eax, edi */
  EAX = (EDI);
  /* 1109acce mov edx, 3 */
  EDX = (0x3u);
  /* 1109acd3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109acd6 jb 0x1109ace4 */
  if (C.cf) goto L_1109ace4;
  /* 1109acd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1109acdb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109acdd jmp dword ptr [eax*4 + 0x1109acf0] */
  switch (EAX) {
    case 1: goto L_1109ad00;
    case 2: goto L_1109ad2c;
    case 3: goto L_1109ad50;
    default: x86_unimpl("switch@0x1109acdd out of table"); return;
  }
L_1109ace4:;
  /* 1109ace4 jmp dword ptr [ecx*4 + 0x1109ade8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1109ade8)))); return;
  /* 1109aceb nop  */
  /* nop */
L_1109acec:;
  /* 1109acec jmp dword ptr [ecx*4 + 0x1109ad6c] */
  switch (ECX) {
    case 0: goto L_1109adcf;
    case 1: goto L_1109adbc;
    case 2: goto L_1109adb4;
    case 3: goto L_1109adac;
    case 4: goto L_1109ada4;
    case 5: goto L_1109ad9c;
    case 6: goto L_1109ad94;
    case 7: goto L_1109ad8c;
    default: x86_unimpl("switch@0x1109acec out of table"); return;
  }
  /* 1109acf3 nop  */
  /* nop */
L_1109ad00:;
  /* 1109ad00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1109ad02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1109ad04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1109ad06 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1109ad09 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1109ad0c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1109ad0f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1109ad12 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1109ad15 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ad18 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ad1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ad1e jb 0x1109acec */
  if (C.cf) goto L_1109acec;
  /* 1109ad20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1109ad22 jmp dword ptr [edx*4 + 0x1109add8] */
  switch (EDX) {
    case 0: goto L_1109ade8;
    case 1: goto L_1109adf0;
    case 2: goto L_1109adfc;
    case 3: goto L_1109ae10;
    default: x86_unimpl("switch@0x1109ad22 out of table"); return;
  }
  /* 1109ad29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1109ad2c:;
  /* 1109ad2c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1109ad2e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1109ad30 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1109ad32 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1109ad35 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1109ad38 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1109ad3b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ad3e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ad41 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ad44 jb 0x1109acec */
  if (C.cf) goto L_1109acec;
  /* 1109ad46 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1109ad48 jmp dword ptr [edx*4 + 0x1109add8] */
  switch (EDX) {
    case 0: goto L_1109ade8;
    case 1: goto L_1109adf0;
    case 2: goto L_1109adfc;
    case 3: goto L_1109ae10;
    default: x86_unimpl("switch@0x1109ad48 out of table"); return;
  }
  /* 1109ad4f nop  */
  /* nop */
L_1109ad50:;
  /* 1109ad50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1109ad52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1109ad54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1109ad56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1109ad57 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1109ad5a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1109ad5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ad5e jb 0x1109acec */
  if (C.cf) goto L_1109acec;
  /* 1109ad60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1109ad62 jmp dword ptr [edx*4 + 0x1109add8] */
  switch (EDX) {
    case 0: goto L_1109ade8;
    case 1: goto L_1109adf0;
    case 2: goto L_1109adfc;
    case 3: goto L_1109ae10;
    default: x86_unimpl("switch@0x1109ad62 out of table"); return;
  }
  /* 1109ad69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1109ad8c:;
  /* 1109ad8c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1109ad90 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1109ad94:;
  /* 1109ad94 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1109ad98 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1109ad9c:;
  /* 1109ad9c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1109ada0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1109ada4:;
  /* 1109ada4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1109ada8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1109adac:;
  /* 1109adac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1109adb0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1109adb4:;
  /* 1109adb4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1109adb8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1109adbc:;
  /* 1109adbc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1109adc0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1109adc4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1109adcb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1109adcd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1109adcf:;
  /* 1109adcf jmp dword ptr [edx*4 + 0x1109add8] */
  switch (EDX) {
    case 0: goto L_1109ade8;
    case 1: goto L_1109adf0;
    case 2: goto L_1109adfc;
    case 3: goto L_1109ae10;
    default: x86_unimpl("switch@0x1109adcf out of table"); return;
  }
  /* 1109add6 mov edi, edi */
  EDI = (EDI);
L_1109ade8:;
  /* 1109ade8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109adeb pop esi */
  ESI = (pop32());
  /* 1109adec pop edi */
  EDI = (pop32());
  /* 1109aded leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1109adee ret  */
  ESPCHK(0x1109ac90u, _esp0);
  ESP += 4; return;
  /* 1109adef nop  */
  /* nop */
L_1109adf0:;
  /* 1109adf0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1109adf2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1109adf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109adf7 pop esi */
  ESI = (pop32());
  /* 1109adf8 pop edi */
  EDI = (pop32());
  /* 1109adf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1109adfa ret  */
  ESPCHK(0x1109ac90u, _esp0);
  ESP += 4; return;
  /* 1109adfb nop  */
  /* nop */
L_1109adfc:;
  /* 1109adfc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1109adfe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1109ae00 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1109ae03 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1109ae06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ae09 pop esi */
  ESI = (pop32());
  /* 1109ae0a pop edi */
  EDI = (pop32());
  /* 1109ae0b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1109ae0c ret  */
  ESPCHK(0x1109ac90u, _esp0);
  ESP += 4; return;
  /* 1109ae0d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1109ae10:;
  /* 1109ae10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1109ae12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1109ae14 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1109ae17 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1109ae1a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1109ae1d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1109ae20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ae23 pop esi */
  ESI = (pop32());
  /* 1109ae24 pop edi */
  EDI = (pop32());
  /* 1109ae25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1109ae26 ret  */
  ESPCHK(0x1109ac90u, _esp0);
  ESP += 4; return;
  /* 1109ae27 nop  */
  /* nop */
L_1109ae28:;
  /* 1109ae28 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1109ae2c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1109ae30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1109ae36 jne 0x1109ae5c */
  if (!C.zf) goto L_1109ae5c;
  /* 1109ae38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1109ae3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1109ae3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ae41 jb 0x1109ae50 */
  if (C.cf) goto L_1109ae50;
  /* 1109ae43 std  */
  C.df=1;
  /* 1109ae44 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1109ae46 cld  */
  C.df=0;
  /* 1109ae47 jmp dword ptr [edx*4 + 0x1109af70] */
  switch (EDX) {
    case 0: goto L_1109af80;
    case 1: goto L_1109af88;
    case 2: goto L_1109af98;
    case 3: goto L_1109afac;
    default: x86_unimpl("switch@0x1109ae47 out of table"); return;
  }
  /* 1109ae4e mov edi, edi */
  EDI = (EDI);
L_1109ae50:;
  /* 1109ae50 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1109ae52 jmp dword ptr [ecx*4 + 0x1109af20] */
  switch (ECX) {
    case 0: goto L_1109af67;
    default: x86_unimpl("switch@0x1109ae52 out of table"); return;
  }
  /* 1109ae59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1109ae5c:;
  /* 1109ae5c mov eax, edi */
  EAX = (EDI);
  /* 1109ae5e mov edx, 3 */
  EDX = (0x3u);
  /* 1109ae63 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ae66 jb 0x1109ae74 */
  if (C.cf) goto L_1109ae74;
  /* 1109ae68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1109ae6b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109ae6d jmp dword ptr [eax*4 + 0x1109ae78] */
  switch (EAX) {
    case 1: goto L_1109ae88;
    case 2: goto L_1109aea8;
    case 3: goto L_1109aed0;
    default: x86_unimpl("switch@0x1109ae6d out of table"); return;
  }
L_1109ae74:;
  /* 1109ae74 jmp dword ptr [ecx*4 + 0x1109af70] */
  switch (ECX) {
    case 0: goto L_1109af80;
    case 1: goto L_1109af88;
    case 2: goto L_1109af98;
    case 3: goto L_1109afac;
    default: x86_unimpl("switch@0x1109ae74 out of table"); return;
  }
  /* 1109ae7b nop  */
  /* nop */
L_1109ae88:;
  /* 1109ae88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1109ae8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1109ae8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1109ae90 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1109ae91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1109ae94 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1109ae95 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ae98 jb 0x1109ae50 */
  if (C.cf) goto L_1109ae50;
  /* 1109ae9a std  */
  C.df=1;
  /* 1109ae9b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1109ae9d cld  */
  C.df=0;
  /* 1109ae9e jmp dword ptr [edx*4 + 0x1109af70] */
  switch (EDX) {
    case 0: goto L_1109af80;
    case 1: goto L_1109af88;
    case 2: goto L_1109af98;
    case 3: goto L_1109afac;
    default: x86_unimpl("switch@0x1109ae9e out of table"); return;
  }
  /* 1109aea5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1109aea8:;
  /* 1109aea8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1109aeab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1109aead mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1109aeb0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1109aeb3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1109aeb6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1109aeb9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109aebc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109aebf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109aec2 jb 0x1109ae50 */
  if (C.cf) goto L_1109ae50;
  /* 1109aec4 std  */
  C.df=1;
  /* 1109aec5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1109aec7 cld  */
  C.df=0;
  /* 1109aec8 jmp dword ptr [edx*4 + 0x1109af70] */
  switch (EDX) {
    case 0: goto L_1109af80;
    case 1: goto L_1109af88;
    case 2: goto L_1109af98;
    case 3: goto L_1109afac;
    default: x86_unimpl("switch@0x1109aec8 out of table"); return;
  }
  /* 1109aecf nop  */
  /* nop */
L_1109aed0:;
  /* 1109aed0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1109aed3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1109aed5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1109aed8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1109aedb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1109aede mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1109aee1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1109aee4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1109aee7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109aeea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109aeed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109aef0 jb 0x1109ae50 */
  if (C.cf) goto L_1109ae50;
  /* 1109aef6 std  */
  C.df=1;
  /* 1109aef7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1109aef9 cld  */
  C.df=0;
  /* 1109aefa jmp dword ptr [edx*4 + 0x1109af70] */
  switch (EDX) {
    case 0: goto L_1109af80;
    case 1: goto L_1109af88;
    case 2: goto L_1109af98;
    case 3: goto L_1109afac;
    default: x86_unimpl("switch@0x1109aefa out of table"); return;
  }
  /* 1109af01 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1109af04 and al, 0xaf */
  { uint32_t _r=(AL)&(0xafu); AL = (_r); fl_logic(_r,8); }
  /* 1109af06 or dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1109af08 sub al, 0xaf */
  { uint32_t _a=(AL),_b=(0xafu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1109af0a or dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1109af0c xor al, 0xaf */
  { uint32_t _r=(AL)^(0xafu); AL = (_r); fl_logic(_r,8); }
  /* 1109af0e or dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1109af10 cmp al, 0xaf */
  { uint32_t _a=(AL),_b=(0xafu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1109af12 or dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1109af14 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1109af15 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 1109af16 or dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1109af18 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 1109af19 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 1109af1a or dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1109af1c push esp */
  push32((uint32_t)(ESP));
  /* 1109af1d scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 1109af1e or dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1109af24 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1109af28 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1109af2c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1109af30 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1109af34 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1109af38 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1109af3c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1109af40 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1109af44 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1109af48 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1109af4c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1109af50 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1109af54 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1109af58 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1109af5c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1109af63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1109af65 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1109af67:;
  /* 1109af67 jmp dword ptr [edx*4 + 0x1109af70] */
  switch (EDX) {
    case 0: goto L_1109af80;
    case 1: goto L_1109af88;
    case 2: goto L_1109af98;
    case 3: goto L_1109afac;
    default: x86_unimpl("switch@0x1109af67 out of table"); return;
  }
  /* 1109af6e mov edi, edi */
  EDI = (EDI);
L_1109af80:;
  /* 1109af80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109af83 pop esi */
  ESI = (pop32());
  /* 1109af84 pop edi */
  EDI = (pop32());
  /* 1109af85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1109af86 ret  */
  ESPCHK(0x1109ac90u, _esp0);
  ESP += 4; return;
  /* 1109af87 nop  */
  /* nop */
L_1109af88:;
  /* 1109af88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1109af8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1109af8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109af91 pop esi */
  ESI = (pop32());
  /* 1109af92 pop edi */
  EDI = (pop32());
  /* 1109af93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1109af94 ret  */
  ESPCHK(0x1109ac90u, _esp0);
  ESP += 4; return;
  /* 1109af95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1109af98:;
  /* 1109af98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1109af9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1109af9e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1109afa1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1109afa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109afa7 pop esi */
  ESI = (pop32());
  /* 1109afa8 pop edi */
  EDI = (pop32());
  /* 1109afa9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1109afaa ret  */
  ESPCHK(0x1109ac90u, _esp0);
  ESP += 4; return;
  /* 1109afab nop  */
  /* nop */
L_1109afac:;
  /* 1109afac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1109afaf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1109afb2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1109afb5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1109afb8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1109afbb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1109afbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109afc1 pop esi */
  ESI = (pop32());
  /* 1109afc2 pop edi */
  EDI = (pop32());
  /* 1109afc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1109afc4 ret  */
  ESPCHK(0x1109ac90u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1109afd0 (104 bytes, 43 insns) */
void f_1109afd0(void) {
  FTRACE(0x1109afd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109afd0 push ebx */
  push32((uint32_t)(EBX));
  /* 1109afd1 push esi */
  push32((uint32_t)(ESI));
  /* 1109afd2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1109afd6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109afd8 jne 0x1109aff2 */
  if (!C.zf) goto L_1109aff2;
  /* 1109afda mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1109afde mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1109afe2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109afe4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1109afe6 mov ebx, eax */
  EBX = (EAX);
  /* 1109afe8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1109afec div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1109afee mov edx, ebx */
  EDX = (EBX);
  /* 1109aff0 jmp 0x1109b033 */
  goto L_1109b033;
L_1109aff2:;
  /* 1109aff2 mov ecx, eax */
  ECX = (EAX);
  /* 1109aff4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1109aff8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1109affc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1109b000:;
  /* 1109b000 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1109b002 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1109b004 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1109b006 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1109b008 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109b00a jne 0x1109b000 */
  if (!C.zf) goto L_1109b000;
  /* 1109b00c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1109b00e mov esi, eax */
  ESI = (EAX);
  /* 1109b010 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1109b014 mov ecx, eax */
  ECX = (EAX);
  /* 1109b016 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1109b01a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1109b01c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b01e jb 0x1109b02e */
  if (C.cf) goto L_1109b02e;
  /* 1109b020 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b024 ja 0x1109b02e */
  if ((!C.cf&&!C.zf)) goto L_1109b02e;
  /* 1109b026 jb 0x1109b02f */
  if (C.cf) goto L_1109b02f;
  /* 1109b028 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b02c jbe 0x1109b02f */
  if ((C.cf||C.zf)) goto L_1109b02f;
L_1109b02e:;
  /* 1109b02e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1109b02f:;
  /* 1109b02f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109b031 mov eax, esi */
  EAX = (ESI);
L_1109b033:;
  /* 1109b033 pop esi */
  ESI = (pop32());
  /* 1109b034 pop ebx */
  EBX = (pop32());
  /* 1109b035 ret 0x10 */
  ESPCHK(0x1109afd0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1109b040 (117 bytes, 44 insns) */
void f_1109b040(void) {
  FTRACE(0x1109b040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109b040 push ebx */
  push32((uint32_t)(EBX));
  /* 1109b041 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1109b045 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109b047 jne 0x1109b061 */
  if (!C.zf) goto L_1109b061;
  /* 1109b049 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1109b04d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1109b051 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109b053 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1109b055 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1109b059 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1109b05b mov eax, edx */
  EAX = (EDX);
  /* 1109b05d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109b05f jmp 0x1109b0b1 */
  goto L_1109b0b1;
L_1109b061:;
  /* 1109b061 mov ecx, eax */
  ECX = (EAX);
  /* 1109b063 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1109b067 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1109b06b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1109b06f:;
  /* 1109b06f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1109b071 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1109b073 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1109b075 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1109b077 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109b079 jne 0x1109b06f */
  if (!C.zf) goto L_1109b06f;
  /* 1109b07b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1109b07d mov ecx, eax */
  ECX = (EAX);
  /* 1109b07f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1109b083 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1109b084 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1109b088 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b08a jb 0x1109b09a */
  if (C.cf) goto L_1109b09a;
  /* 1109b08c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b090 ja 0x1109b09a */
  if ((!C.cf&&!C.zf)) goto L_1109b09a;
  /* 1109b092 jb 0x1109b0a2 */
  if (C.cf) goto L_1109b0a2;
  /* 1109b094 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b098 jbe 0x1109b0a2 */
  if ((C.cf||C.zf)) goto L_1109b0a2;
L_1109b09a:;
  /* 1109b09a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109b09e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1109b0a2:;
  /* 1109b0a2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109b0a6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109b0aa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1109b0ac neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1109b0ae sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1109b0b1:;
  /* 1109b0b1 pop ebx */
  EBX = (pop32());
  /* 1109b0b2 ret 0x10 */
  ESPCHK(0x1109b040u, _esp0);
  ESP += 20; return;
}

/* FUN_1000b0c0 @ 0x1109b0c0 (628 bytes, 214 insns) */
void f_1109b0c0(void) {
  FTRACE(0x1109b0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109b0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109b0c1 mov ebp, esp */
  EBP = (ESP);
  /* 1109b0c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109b0c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1109b0c7 push esi */
  push32((uint32_t)(ESI));
  /* 1109b0c8 push edi */
  push32((uint32_t)(EDI));
L_1109b0c9:;
  /* 1109b0c9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b0cd jne 0x1109b0ed */
  if (!C.zf) goto L_1109b0ed;
  /* 1109b0cf push 0x110bc24c */
  push32((uint32_t)(0x110bc24cu));
  /* 1109b0d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109b0d6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1109b0d8 push 0x110bc240 */
  push32((uint32_t)(0x110bc240u));
  /* 1109b0dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1109b0df call 0x11093470 */
  push32(0x1109b0e4u); f_11093470();
  /* 1109b0e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b0e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b0ea jne 0x1109b0ed */
  if (!C.zf) goto L_1109b0ed;
  /* 1109b0ec int3  */
  x86_unimpl("int3 @ 0x1109b0ec");
L_1109b0ed:;
  /* 1109b0ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109b0ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109b0f1 jne 0x1109b0c9 */
  if (!C.zf) goto L_1109b0c9;
  /* 1109b0f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109b0f6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109b0f9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b0fc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1109b0ff mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1109b102 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b105 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1109b108 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1109b10e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109b110 je 0x1109b11f */
  if (C.zf) goto L_1109b11f;
  /* 1109b112 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b115 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1109b118 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1109b11b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109b11d je 0x1109b135 */
  if (C.zf) goto L_1109b135;
L_1109b11f:;
  /* 1109b11f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b122 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1109b125 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1109b127 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b12a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1109b12d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109b130 jmp 0x1109b32d */
  goto L_1109b32d;
L_1109b135:;
  /* 1109b135 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b138 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1109b13b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1109b13e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109b140 je 0x1109b18c */
  if (C.zf) goto L_1109b18c;
  /* 1109b142 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b145 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1109b14c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b14f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1109b152 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1109b155 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109b157 je 0x1109b175 */
  if (C.zf) goto L_1109b175;
  /* 1109b159 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b15c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b15f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1109b162 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1109b164 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b167 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1109b16a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1109b16d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b170 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1109b173 jmp 0x1109b18c */
  goto L_1109b18c;
L_1109b175:;
  /* 1109b175 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b178 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1109b17b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1109b17e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b181 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1109b184 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109b187 jmp 0x1109b32d */
  goto L_1109b32d;
L_1109b18c:;
  /* 1109b18c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b18f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1109b192 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1109b195 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b198 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1109b19b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b19e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1109b1a1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1109b1a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b1a7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1109b1aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b1ad mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1109b1b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1109b1bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b1be mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1109b1c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b1c4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1109b1c7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1109b1cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109b1cf jne 0x1109b1ff */
  if (!C.zf) goto L_1109b1ff;
  /* 1109b1d1 cmp dword ptr [ebp - 8], 0x110bf140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x110bf140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b1d8 je 0x1109b1e3 */
  if (C.zf) goto L_1109b1e3;
  /* 1109b1da cmp dword ptr [ebp - 8], 0x110bf160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x110bf160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b1e1 jne 0x1109b1f3 */
  if (!C.zf) goto L_1109b1f3;
L_1109b1e3:;
  /* 1109b1e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109b1e6 push edx */
  push32((uint32_t)(EDX));
  /* 1109b1e7 call 0x1109d030 */
  push32(0x1109b1ecu); f_1109d030();
  /* 1109b1ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b1ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109b1f1 jne 0x1109b1ff */
  if (!C.zf) goto L_1109b1ff;
L_1109b1f3:;
  /* 1109b1f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b1f6 push eax */
  push32((uint32_t)(EAX));
  /* 1109b1f7 call 0x1109cf60 */
  push32(0x1109b1fcu); f_1109cf60();
  /* 1109b1fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109b1ff:;
  /* 1109b1ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b202 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1109b205 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1109b20b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109b20d je 0x1109b2eb */
  if (C.zf) goto L_1109b2eb;
L_1109b213:;
  /* 1109b213 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b216 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b219 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1109b21b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109b21e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109b220 jge 0x1109b243 */
  if ((C.sf==C.of)) goto L_1109b243;
  /* 1109b222 push 0x110bc200 */
  push32((uint32_t)(0x110bc200u));
  /* 1109b227 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109b229 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1109b22e push 0x110bc240 */
  push32((uint32_t)(0x110bc240u));
  /* 1109b233 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109b235 call 0x11093470 */
  push32(0x1109b23au); f_11093470();
  /* 1109b23a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b23d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b240 jne 0x1109b243 */
  if (!C.zf) goto L_1109b243;
  /* 1109b242 int3  */
  x86_unimpl("int3 @ 0x1109b242");
L_1109b243:;
  /* 1109b243 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109b245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109b247 jne 0x1109b213 */
  if (!C.zf) goto L_1109b213;
  /* 1109b249 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b24c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b24f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1109b251 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109b254 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109b257 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b25a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1109b25d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b260 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b263 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1109b265 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b268 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1109b26b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109b26e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b271 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1109b274 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b278 jle 0x1109b296 */
  if ((C.zf||C.sf!=C.of)) goto L_1109b296;
  /* 1109b27a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b27d push ecx */
  push32((uint32_t)(ECX));
  /* 1109b27e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b281 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1109b284 push eax */
  push32((uint32_t)(EAX));
  /* 1109b285 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109b288 push ecx */
  push32((uint32_t)(ECX));
  /* 1109b289 call 0x1109cc50 */
  push32(0x1109b28eu); f_1109cc50();
  /* 1109b28e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b291 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1109b294 jmp 0x1109b2de */
  goto L_1109b2de;
L_1109b296:;
  /* 1109b296 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b29a je 0x1109b2b9 */
  if (C.zf) goto L_1109b2b9;
  /* 1109b29c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109b29f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1109b2a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109b2a5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1109b2a8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109b2ab mov ecx, dword ptr [edx*4 + 0x110c1fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x110c1fe0)));
  /* 1109b2b2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b2b4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1109b2b7 jmp 0x1109b2c0 */
  goto L_1109b2c0;
L_1109b2b9:;
  /* 1109b2b9 mov dword ptr [ebp - 0x14], 0x110bea60 */
  w32((uint32_t)(EBP + -0x14), (0x110bea60u));
L_1109b2c0:;
  /* 1109b2c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1109b2c3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1109b2c7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1109b2ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109b2cc je 0x1109b2de */
  if (C.zf) goto L_1109b2de;
  /* 1109b2ce push 2 */
  push32((uint32_t)(0x2u));
  /* 1109b2d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109b2d2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109b2d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1109b2d6 call 0x1109cb00 */
  push32(0x1109b2dbu); f_1109cb00();
  /* 1109b2db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109b2de:;
  /* 1109b2de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b2e1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1109b2e4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1109b2e7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1109b2e9 jmp 0x1109b309 */
  goto L_1109b309;
L_1109b2eb:;
  /* 1109b2eb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1109b2f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b2f5 push edx */
  push32((uint32_t)(EDX));
  /* 1109b2f6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1109b2f9 push eax */
  push32((uint32_t)(EAX));
  /* 1109b2fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109b2fd push ecx */
  push32((uint32_t)(ECX));
  /* 1109b2fe call 0x1109cc50 */
  push32(0x1109b303u); f_1109cc50();
  /* 1109b303 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b306 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1109b309:;
  /* 1109b309 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109b30c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b30f je 0x1109b325 */
  if (C.zf) goto L_1109b325;
  /* 1109b311 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b314 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1109b317 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1109b31a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b31d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1109b320 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109b323 jmp 0x1109b32d */
  goto L_1109b32d;
L_1109b325:;
  /* 1109b325 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109b328 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1109b32d:;
  /* 1109b32d pop edi */
  EDI = (pop32());
  /* 1109b32e pop esi */
  ESI = (pop32());
  /* 1109b32f pop ebx */
  EBX = (pop32());
  /* 1109b330 mov esp, ebp */
  ESP = (EBP);
  /* 1109b332 pop ebp */
  EBP = (pop32());
  /* 1109b333 ret  */
  ESPCHK(0x1109b0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b340 @ 0x1109b340 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1109b340(void) {
  FTRACE(0x1109b340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109b340 push ebp */
  push32((uint32_t)(EBP));
  /* 1109b341 mov ebp, esp */
  EBP = (ESP);
  /* 1109b343 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109b349 push ebx */
  push32((uint32_t)(EBX));
  /* 1109b34a push esi */
  push32((uint32_t)(ESI));
  /* 1109b34b push edi */
  push32((uint32_t)(EDI));
  /* 1109b34c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1109b353 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1109b35d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1109b364:;
  /* 1109b364 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109b367 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1109b369 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1109b36c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1109b370 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109b373 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b376 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1109b379 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109b37b je 0x1109bf57 */
  if (C.zf) goto L_1109bf57;
  /* 1109b381 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b388 jl 0x1109bf57 */
  if ((C.sf!=C.of)) goto L_1109bf57;
  /* 1109b38e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1109b392 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b395 jl 0x1109b3b6 */
  if ((C.sf!=C.of)) goto L_1109b3b6;
  /* 1109b397 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1109b39b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b39e jg 0x1109b3b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1109b3b6;
  /* 1109b3a0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1109b3a4 movsx ecx, byte ptr [eax + 0x110bc238] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x110bc238))));
  /* 1109b3ab and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1109b3ae mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1109b3b4 jmp 0x1109b3c0 */
  goto L_1109b3c0;
L_1109b3b6:;
  /* 1109b3b6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1109b3c0:;
  /* 1109b3c0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1109b3c6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1109b3c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109b3cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109b3cf movsx edx, byte ptr [ecx + eax*8 + 0x110bc258] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x110bc258))));
  /* 1109b3d7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1109b3da mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1109b3dd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109b3e0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1109b3e6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b3ed ja 0x1109bf52 */
  if ((!C.cf&&!C.zf)) goto L_1109bf52;
  /* 1109b3f3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1109b3f9 jmp dword ptr [ecx*4 + 0x1109bf64] */
  switch (ECX) {
    case 0: goto L_1109b400;
    case 1: goto L_1109b49a;
    case 2: goto L_1109b4dc;
    case 3: goto L_1109b54b;
    case 4: goto L_1109b5a3;
    case 5: goto L_1109b5b2;
    case 6: goto L_1109b5fe;
    case 7: goto L_1109b691;
    case 8: goto L_1109b528;
    case 9: goto L_1109b533;
    case 10: goto L_1109b51e;
    case 11: goto L_1109b513;
    case 12: goto L_1109b53e;
    case 13: goto L_1109b546;
    default: x86_unimpl("switch@0x1109b3f9 out of table"); return;
  }
L_1109b400:;
  /* 1109b400 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1109b407 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1109b40a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1109b410 mov eax, dword ptr [0x110bec98] */
  EAX = (r32((uint32_t)(0x110bec98)));
  /* 1109b415 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109b417 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1109b41b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1109b421 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109b423 je 0x1109b47d */
  if (C.zf) goto L_1109b47d;
  /* 1109b425 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1109b42b push edx */
  push32((uint32_t)(EDX));
  /* 1109b42c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109b42f push eax */
  push32((uint32_t)(EAX));
  /* 1109b430 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1109b434 push ecx */
  push32((uint32_t)(ECX));
  /* 1109b435 call 0x1109c070 */
  push32(0x1109b43au); f_1109c070();
  /* 1109b43a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b43d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109b440 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1109b442 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1109b445 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109b448 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b44b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1109b44e:;
  /* 1109b44e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1109b452 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109b454 jne 0x1109b477 */
  if (!C.zf) goto L_1109b477;
  /* 1109b456 push 0x110bc2d8 */
  push32((uint32_t)(0x110bc2d8u));
  /* 1109b45b push 0 */
  push32((uint32_t)(0x0u));
  /* 1109b45d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1109b462 push 0x110bc2cc */
  push32((uint32_t)(0x110bc2ccu));
  /* 1109b467 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109b469 call 0x11093470 */
  push32(0x1109b46eu); f_11093470();
  /* 1109b46e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b471 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b474 jne 0x1109b477 */
  if (!C.zf) goto L_1109b477;
  /* 1109b476 int3  */
  x86_unimpl("int3 @ 0x1109b476");
L_1109b477:;
  /* 1109b477 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109b479 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109b47b jne 0x1109b44e */
  if (!C.zf) goto L_1109b44e;
L_1109b47d:;
  /* 1109b47d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1109b483 push ecx */
  push32((uint32_t)(ECX));
  /* 1109b484 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109b487 push edx */
  push32((uint32_t)(EDX));
  /* 1109b488 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1109b48c push eax */
  push32((uint32_t)(EAX));
  /* 1109b48d call 0x1109c070 */
  push32(0x1109b492u); f_1109c070();
  /* 1109b492 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b495 jmp 0x1109bf52 */
  goto L_1109bf52;
L_1109b49a:;
  /* 1109b49a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1109b4a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b4a4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1109b4aa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1109b4b0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1109b4b6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1109b4bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1109b4bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1109b4c6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1109b4d0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1109b4d7 jmp 0x1109bf52 */
  goto L_1109bf52;
L_1109b4dc:;
  /* 1109b4dc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1109b4e0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1109b4e6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1109b4ec sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109b4ef mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1109b4f5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b4fc ja 0x1109b546 */
  if ((!C.cf&&!C.zf)) goto L_1109b546;
  /* 1109b4fe mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1109b504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109b506 mov al, byte ptr [ecx + 0x1109bf9c] */
  AL = (r8((uint32_t)(ECX + 0x1109bf9c)));
  /* 1109b50c jmp dword ptr [eax*4 + 0x1109bf84] */
  switch (EAX) {
    case 0: goto L_1109b528;
    case 1: goto L_1109b533;
    case 2: goto L_1109b51e;
    case 3: goto L_1109b513;
    case 4: goto L_1109b53e;
    case 5: goto L_1109b546;
    default: x86_unimpl("switch@0x1109b50c out of table"); return;
  }
L_1109b513:;
  /* 1109b513 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b516 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1109b519 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1109b51c jmp 0x1109b546 */
  goto L_1109b546;
L_1109b51e:;
  /* 1109b51e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b521 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1109b523 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109b526 jmp 0x1109b546 */
  goto L_1109b546;
L_1109b528:;
  /* 1109b528 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b52b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1109b52e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1109b531 jmp 0x1109b546 */
  goto L_1109b546;
L_1109b533:;
  /* 1109b533 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b536 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1109b539 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1109b53c jmp 0x1109b546 */
  goto L_1109b546;
L_1109b53e:;
  /* 1109b53e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b541 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1109b543 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1109b546:;
  /* 1109b546 jmp 0x1109bf52 */
  goto L_1109bf52;
L_1109b54b:;
  /* 1109b54b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1109b54f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b552 jne 0x1109b587 */
  if (!C.zf) goto L_1109b587;
  /* 1109b554 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1109b557 push edx */
  push32((uint32_t)(EDX));
  /* 1109b558 call 0x1109c180 */
  push32(0x1109b55du); f_1109c180();
  /* 1109b55d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b560 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1109b566 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b56d jge 0x1109b585 */
  if ((C.sf==C.of)) goto L_1109b585;
  /* 1109b56f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b572 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1109b574 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109b577 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1109b57d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1109b57f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1109b585:;
  /* 1109b585 jmp 0x1109b59e */
  goto L_1109b59e;
L_1109b587:;
  /* 1109b587 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1109b58d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109b590 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1109b594 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1109b598 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1109b59e:;
  /* 1109b59e jmp 0x1109bf52 */
  goto L_1109bf52;
L_1109b5a3:;
  /* 1109b5a3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1109b5ad jmp 0x1109bf52 */
  goto L_1109bf52;
L_1109b5b2:;
  /* 1109b5b2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1109b5b6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b5b9 jne 0x1109b5e2 */
  if (!C.zf) goto L_1109b5e2;
  /* 1109b5bb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1109b5be push eax */
  push32((uint32_t)(EAX));
  /* 1109b5bf call 0x1109c180 */
  push32(0x1109b5c4u); f_1109c180();
  /* 1109b5c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b5c7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1109b5cd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b5d4 jge 0x1109b5e0 */
  if ((C.sf==C.of)) goto L_1109b5e0;
  /* 1109b5d6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1109b5e0:;
  /* 1109b5e0 jmp 0x1109b5f9 */
  goto L_1109b5f9;
L_1109b5e2:;
  /* 1109b5e2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1109b5e8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109b5eb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1109b5ef lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1109b5f3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1109b5f9:;
  /* 1109b5f9 jmp 0x1109bf52 */
  goto L_1109bf52;
L_1109b5fe:;
  /* 1109b5fe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1109b602 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1109b608 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1109b60e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109b611 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1109b617 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b61e ja 0x1109b68c */
  if ((!C.cf&&!C.zf)) goto L_1109b68c;
  /* 1109b620 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1109b626 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109b628 mov al, byte ptr [ecx + 0x1109bfc1] */
  AL = (r8((uint32_t)(ECX + 0x1109bfc1)));
  /* 1109b62e jmp dword ptr [eax*4 + 0x1109bfad] */
  switch (EAX) {
    case 0: goto L_1109b640;
    case 1: goto L_1109b679;
    case 2: goto L_1109b635;
    case 3: goto L_1109b683;
    case 4: goto L_1109b68c;
    default: x86_unimpl("switch@0x1109b62e out of table"); return;
  }
L_1109b635:;
  /* 1109b635 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b638 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1109b63b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1109b63e jmp 0x1109b68c */
  goto L_1109b68c;
L_1109b640:;
  /* 1109b640 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109b643 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1109b646 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b649 jne 0x1109b66b */
  if (!C.zf) goto L_1109b66b;
  /* 1109b64b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109b64e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1109b652 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b655 jne 0x1109b66b */
  if (!C.zf) goto L_1109b66b;
  /* 1109b657 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109b65a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b65d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1109b660 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b663 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1109b666 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1109b669 jmp 0x1109b677 */
  goto L_1109b677;
L_1109b66b:;
  /* 1109b66b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1109b672 jmp 0x1109b400 */
  goto L_1109b400;
L_1109b677:;
  /* 1109b677 jmp 0x1109b68c */
  goto L_1109b68c;
L_1109b679:;
  /* 1109b679 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b67c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1109b67e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109b681 jmp 0x1109b68c */
  goto L_1109b68c;
L_1109b683:;
  /* 1109b683 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b686 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1109b689 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1109b68c:;
  /* 1109b68c jmp 0x1109bf52 */
  goto L_1109bf52;
L_1109b691:;
  /* 1109b691 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1109b695 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1109b69b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1109b6a1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109b6a4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1109b6aa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b6b1 ja 0x1109bd77 */
  if ((!C.cf&&!C.zf)) goto L_1109bd77;
  /* 1109b6b7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1109b6bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109b6bf mov cl, byte ptr [edx + 0x1109c02c] */
  CL = (r8((uint32_t)(EDX + 0x1109c02c)));
  /* 1109b6c5 jmp dword ptr [ecx*4 + 0x1109bff0] */
  switch (ECX) {
    case 0: goto L_1109b6cc;
    case 1: goto L_1109b960;
    case 2: goto L_1109b7f0;
    case 3: goto L_1109ba99;
    case 4: goto L_1109b75b;
    case 5: goto L_1109b6e1;
    case 6: goto L_1109ba6b;
    case 7: goto L_1109b970;
    case 8: goto L_1109b915;
    case 9: goto L_1109bae5;
    case 10: goto L_1109ba8f;
    case 11: goto L_1109b806;
    case 12: goto L_1109ba83;
    case 13: goto L_1109baa5;
    case 14: goto L_1109bd77;
    default: x86_unimpl("switch@0x1109b6c5 out of table"); return;
  }
L_1109b6cc:;
  /* 1109b6cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b6cf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1109b6d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109b6d6 jne 0x1109b6e1 */
  if (!C.zf) goto L_1109b6e1;
  /* 1109b6d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b6db or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1109b6de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1109b6e1:;
  /* 1109b6e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b6e4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1109b6ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109b6ec je 0x1109b727 */
  if (C.zf) goto L_1109b727;
  /* 1109b6ee lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1109b6f1 push eax */
  push32((uint32_t)(EAX));
  /* 1109b6f2 call 0x1109c1c0 */
  push32(0x1109b6f7u); f_1109c1c0();
  /* 1109b6f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b6fa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1109b6fe mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1109b702 push ecx */
  push32((uint32_t)(ECX));
  /* 1109b703 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1109b709 push edx */
  push32((uint32_t)(EDX));
  /* 1109b70a call 0x1109d2a0 */
  push32(0x1109b70fu); f_1109d2a0();
  /* 1109b70f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b712 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1109b715 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b719 jge 0x1109b725 */
  if ((C.sf==C.of)) goto L_1109b725;
  /* 1109b71b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1109b725:;
  /* 1109b725 jmp 0x1109b74d */
  goto L_1109b74d;
L_1109b727:;
  /* 1109b727 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1109b72a push eax */
  push32((uint32_t)(EAX));
  /* 1109b72b call 0x1109c180 */
  push32(0x1109b730u); f_1109c180();
  /* 1109b730 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b733 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1109b73a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1109b740 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1109b746 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1109b74d:;
  /* 1109b74d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1109b753 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1109b756 jmp 0x1109bd77 */
  goto L_1109bd77;
L_1109b75b:;
  /* 1109b75b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1109b75e push eax */
  push32((uint32_t)(EAX));
  /* 1109b75f call 0x1109c180 */
  push32(0x1109b764u); f_1109c180();
  /* 1109b764 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b767 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1109b76d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b774 je 0x1109b782 */
  if (C.zf) goto L_1109b782;
  /* 1109b776 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1109b77c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b780 jne 0x1109b79c */
  if (!C.zf) goto L_1109b79c;
L_1109b782:;
  /* 1109b782 mov edx, dword ptr [0x110befb0] */
  EDX = (r32((uint32_t)(0x110befb0)));
  /* 1109b788 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1109b78b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109b78e push eax */
  push32((uint32_t)(EAX));
  /* 1109b78f call 0x110971e0 */
  push32(0x1109b794u); f_110971e0();
  /* 1109b794 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b797 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1109b79a jmp 0x1109b7eb */
  goto L_1109b7eb;
L_1109b79c:;
  /* 1109b79c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b79f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1109b7a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109b7a7 je 0x1109b7cc */
  if (C.zf) goto L_1109b7cc;
  /* 1109b7a9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1109b7af mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1109b7b2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1109b7b5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1109b7bb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1109b7be shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1109b7c0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1109b7c3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1109b7ca jmp 0x1109b7eb */
  goto L_1109b7eb;
L_1109b7cc:;
  /* 1109b7cc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1109b7d3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1109b7d9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1109b7dc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1109b7df mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1109b7e5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1109b7e8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1109b7eb:;
  /* 1109b7eb jmp 0x1109bd77 */
  goto L_1109bd77;
L_1109b7f0:;
  /* 1109b7f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b7f3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1109b7f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109b7fb jne 0x1109b806 */
  if (!C.zf) goto L_1109b806;
  /* 1109b7fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b800 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1109b803 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1109b806:;
  /* 1109b806 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b80d jne 0x1109b81b */
  if (!C.zf) goto L_1109b81b;
  /* 1109b80f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1109b819 jmp 0x1109b827 */
  goto L_1109b827;
L_1109b81b:;
  /* 1109b81b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1109b821 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1109b827:;
  /* 1109b827 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1109b82d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1109b833 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1109b836 push edx */
  push32((uint32_t)(EDX));
  /* 1109b837 call 0x1109c180 */
  push32(0x1109b83cu); f_1109c180();
  /* 1109b83c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b83f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1109b842 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b845 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1109b84a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109b84c je 0x1109b8b6 */
  if (C.zf) goto L_1109b8b6;
  /* 1109b84e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b852 jne 0x1109b85d */
  if (!C.zf) goto L_1109b85d;
  /* 1109b854 mov ecx, dword ptr [0x110befb4] */
  ECX = (r32((uint32_t)(0x110befb4)));
  /* 1109b85a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1109b85d:;
  /* 1109b85d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1109b864 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109b867 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1109b86d:;
  /* 1109b86d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1109b873 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1109b879 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109b87c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1109b882 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109b884 je 0x1109b8a6 */
  if (C.zf) goto L_1109b8a6;
  /* 1109b886 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1109b88c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109b88e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1109b891 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109b893 je 0x1109b8a6 */
  if (C.zf) goto L_1109b8a6;
  /* 1109b895 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1109b89b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b89e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1109b8a4 jmp 0x1109b86d */
  goto L_1109b86d;
L_1109b8a6:;
  /* 1109b8a6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1109b8ac sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109b8af sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1109b8b1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1109b8b4 jmp 0x1109b910 */
  goto L_1109b910;
L_1109b8b6:;
  /* 1109b8b6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b8ba jne 0x1109b8c4 */
  if (!C.zf) goto L_1109b8c4;
  /* 1109b8bc mov eax, dword ptr [0x110befb0] */
  EAX = (r32((uint32_t)(0x110befb0)));
  /* 1109b8c1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1109b8c4:;
  /* 1109b8c4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109b8c7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1109b8cd:;
  /* 1109b8cd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1109b8d3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1109b8d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109b8dc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1109b8e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109b8e4 je 0x1109b904 */
  if (C.zf) goto L_1109b904;
  /* 1109b8e6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1109b8ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1109b8ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109b8f1 je 0x1109b904 */
  if (C.zf) goto L_1109b904;
  /* 1109b8f3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1109b8f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b8fc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1109b902 jmp 0x1109b8cd */
  goto L_1109b8cd;
L_1109b904:;
  /* 1109b904 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1109b90a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109b90d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1109b910:;
  /* 1109b910 jmp 0x1109bd77 */
  goto L_1109bd77;
L_1109b915:;
  /* 1109b915 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1109b918 push edx */
  push32((uint32_t)(EDX));
  /* 1109b919 call 0x1109c180 */
  push32(0x1109b91eu); f_1109c180();
  /* 1109b91e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b921 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1109b927 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b92a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1109b92d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109b92f je 0x1109b943 */
  if (C.zf) goto L_1109b943;
  /* 1109b931 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1109b937 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1109b93e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1109b941 jmp 0x1109b951 */
  goto L_1109b951;
L_1109b943:;
  /* 1109b943 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1109b949 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1109b94f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1109b951:;
  /* 1109b951 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1109b95b jmp 0x1109bd77 */
  goto L_1109bd77;
L_1109b960:;
  /* 1109b960 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1109b967 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1109b96a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1109b96d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1109b970:;
  /* 1109b970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b973 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1109b975 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109b978 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1109b97e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1109b981 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b988 jge 0x1109b996 */
  if ((C.sf==C.of)) goto L_1109b996;
  /* 1109b98a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1109b994 jmp 0x1109b9b2 */
  goto L_1109b9b2;
L_1109b996:;
  /* 1109b996 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b99d jne 0x1109b9b2 */
  if (!C.zf) goto L_1109b9b2;
  /* 1109b99f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1109b9a3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109b9a6 jne 0x1109b9b2 */
  if (!C.zf) goto L_1109b9b2;
  /* 1109b9a8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1109b9b2:;
  /* 1109b9b2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109b9b5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b9b8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1109b9bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109b9be sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109b9c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1109b9c3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1109b9c6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1109b9cc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1109b9d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109b9d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1109b9d6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1109b9dc push edx */
  push32((uint32_t)(EDX));
  /* 1109b9dd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1109b9e1 push eax */
  push32((uint32_t)(EAX));
  /* 1109b9e2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109b9e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1109b9e6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1109b9ec push edx */
  push32((uint32_t)(EDX));
  /* 1109b9ed call dword ptr [0x110bf3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110bf3a0))), 0x1109b9f3u);
  /* 1109b9f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109b9f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109b9f9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1109b9fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109ba00 je 0x1109ba18 */
  if (C.zf) goto L_1109ba18;
  /* 1109ba02 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ba09 jne 0x1109ba18 */
  if (!C.zf) goto L_1109ba18;
  /* 1109ba0b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109ba0e push ecx */
  push32((uint32_t)(ECX));
  /* 1109ba0f call dword ptr [0x110bf3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x110bf3ac))), 0x1109ba15u);
  /* 1109ba15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109ba18:;
  /* 1109ba18 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1109ba1c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ba1f jne 0x1109ba3a */
  if (!C.zf) goto L_1109ba3a;
  /* 1109ba21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ba24 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1109ba29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109ba2b jne 0x1109ba3a */
  if (!C.zf) goto L_1109ba3a;
  /* 1109ba2d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109ba30 push ecx */
  push32((uint32_t)(ECX));
  /* 1109ba31 call dword ptr [0x110bf3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110bf3a4))), 0x1109ba37u);
  /* 1109ba37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109ba3a:;
  /* 1109ba3a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109ba3d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1109ba40 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ba43 jne 0x1109ba57 */
  if (!C.zf) goto L_1109ba57;
  /* 1109ba45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ba48 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1109ba4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1109ba4e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109ba51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ba54 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1109ba57:;
  /* 1109ba57 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109ba5a push eax */
  push32((uint32_t)(EAX));
  /* 1109ba5b call 0x110971e0 */
  push32(0x1109ba60u); f_110971e0();
  /* 1109ba60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ba63 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1109ba66 jmp 0x1109bd77 */
  goto L_1109bd77;
L_1109ba6b:;
  /* 1109ba6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ba6e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1109ba71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1109ba74 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1109ba7e jmp 0x1109bb05 */
  goto L_1109bb05;
L_1109ba83:;
  /* 1109ba83 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1109ba8d jmp 0x1109bb05 */
  goto L_1109bb05;
L_1109ba8f:;
  /* 1109ba8f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1109ba99:;
  /* 1109ba99 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1109baa3 jmp 0x1109baaf */
  goto L_1109baaf;
L_1109baa5:;
  /* 1109baa5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1109baaf:;
  /* 1109baaf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1109bab9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109babc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1109bac2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109bac4 je 0x1109bae3 */
  if (C.zf) goto L_1109bae3;
  /* 1109bac6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1109bacd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1109bad3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109bad6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1109badc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1109bae3:;
  /* 1109bae3 jmp 0x1109bb05 */
  goto L_1109bb05;
L_1109bae5:;
  /* 1109bae5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1109baef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109baf2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1109baf8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109bafa je 0x1109bb05 */
  if (C.zf) goto L_1109bb05;
  /* 1109bafc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109baff or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1109bb02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1109bb05:;
  /* 1109bb05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109bb08 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1109bb0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109bb0f je 0x1109bb2e */
  if (C.zf) goto L_1109bb2e;
  /* 1109bb11 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1109bb14 push ecx */
  push32((uint32_t)(ECX));
  /* 1109bb15 call 0x1109c1a0 */
  push32(0x1109bb1au); f_1109c1a0();
  /* 1109bb1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109bb1d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1109bb23 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1109bb29 jmp 0x1109bbbf */
  goto L_1109bbbf;
L_1109bb2e:;
  /* 1109bb2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109bb31 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1109bb34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109bb36 je 0x1109bb80 */
  if (C.zf) goto L_1109bb80;
  /* 1109bb38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109bb3b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1109bb3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109bb40 je 0x1109bb60 */
  if (C.zf) goto L_1109bb60;
  /* 1109bb42 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1109bb45 push ecx */
  push32((uint32_t)(ECX));
  /* 1109bb46 call 0x1109c180 */
  push32(0x1109bb4bu); f_1109c180();
  /* 1109bb4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109bb4e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1109bb51 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1109bb52 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1109bb58 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1109bb5e jmp 0x1109bb7e */
  goto L_1109bb7e;
L_1109bb60:;
  /* 1109bb60 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1109bb63 push edx */
  push32((uint32_t)(EDX));
  /* 1109bb64 call 0x1109c180 */
  push32(0x1109bb69u); f_1109c180();
  /* 1109bb69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109bb6c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109bb71 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1109bb72 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1109bb78 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1109bb7e:;
  /* 1109bb7e jmp 0x1109bbbf */
  goto L_1109bbbf;
L_1109bb80:;
  /* 1109bb80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109bb83 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1109bb86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109bb88 je 0x1109bba5 */
  if (C.zf) goto L_1109bba5;
  /* 1109bb8a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1109bb8d push ecx */
  push32((uint32_t)(ECX));
  /* 1109bb8e call 0x1109c180 */
  push32(0x1109bb93u); f_1109c180();
  /* 1109bb93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109bb96 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1109bb97 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1109bb9d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1109bba3 jmp 0x1109bbbf */
  goto L_1109bbbf;
L_1109bba5:;
  /* 1109bba5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1109bba8 push edx */
  push32((uint32_t)(EDX));
  /* 1109bba9 call 0x1109c180 */
  push32(0x1109bbaeu); f_1109c180();
  /* 1109bbae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109bbb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109bbb3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1109bbb9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1109bbbf:;
  /* 1109bbbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109bbc2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1109bbc5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109bbc7 je 0x1109bc07 */
  if (C.zf) goto L_1109bc07;
  /* 1109bbc9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109bbd0 jg 0x1109bc07 */
  if ((!C.zf&&C.sf==C.of)) goto L_1109bc07;
  /* 1109bbd2 jl 0x1109bbdd */
  if ((C.sf!=C.of)) goto L_1109bbdd;
  /* 1109bbd4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109bbdb jae 0x1109bc07 */
  if (!C.cf) goto L_1109bc07;
L_1109bbdd:;
  /* 1109bbdd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1109bbe3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1109bbe5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1109bbeb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109bbee neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1109bbf0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1109bbf6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1109bbfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109bbff or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1109bc02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1109bc05 jmp 0x1109bc1f */
  goto L_1109bc1f;
L_1109bc07:;
  /* 1109bc07 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1109bc0d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1109bc13 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1109bc19 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1109bc1f:;
  /* 1109bc1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109bc22 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1109bc28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109bc2a jne 0x1109bc47 */
  if (!C.zf) goto L_1109bc47;
  /* 1109bc2c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1109bc32 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1109bc38 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1109bc3b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1109bc41 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1109bc47:;
  /* 1109bc47 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109bc4e jge 0x1109bc5c */
  if ((C.sf==C.of)) goto L_1109bc5c;
  /* 1109bc50 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1109bc5a jmp 0x1109bc65 */
  goto L_1109bc65;
L_1109bc5c:;
  /* 1109bc5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109bc5f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1109bc62 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1109bc65:;
  /* 1109bc65 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1109bc6b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1109bc71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109bc73 jne 0x1109bc7c */
  if (!C.zf) goto L_1109bc7c;
  /* 1109bc75 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1109bc7c:;
  /* 1109bc7c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1109bc7f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1109bc82:;
  /* 1109bc82 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1109bc88 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1109bc8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109bc91 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1109bc97 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109bc99 jg 0x1109bcaf */
  if ((!C.zf&&C.sf==C.of)) goto L_1109bcaf;
  /* 1109bc9b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1109bca1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1109bca7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109bca9 je 0x1109bd30 */
  if (C.zf) goto L_1109bd30;
L_1109bcaf:;
  /* 1109bcaf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1109bcb5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1109bcb6 push edx */
  push32((uint32_t)(EDX));
  /* 1109bcb7 push eax */
  push32((uint32_t)(EAX));
  /* 1109bcb8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1109bcbe push edx */
  push32((uint32_t)(EDX));
  /* 1109bcbf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1109bcc5 push eax */
  push32((uint32_t)(EAX));
  /* 1109bcc6 call 0x1109b040 */
  push32(0x1109bccbu); f_1109b040();
  /* 1109bccb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109bcce mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1109bcd4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1109bcda cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1109bcdb push edx */
  push32((uint32_t)(EDX));
  /* 1109bcdc push eax */
  push32((uint32_t)(EAX));
  /* 1109bcdd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1109bce3 push ecx */
  push32((uint32_t)(ECX));
  /* 1109bce4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1109bcea push edx */
  push32((uint32_t)(EDX));
  /* 1109bceb call 0x1109afd0 */
  push32(0x1109bcf0u); f_1109afd0();
  /* 1109bcf0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1109bcf6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1109bcfc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109bd03 jle 0x1109bd17 */
  if ((C.zf||C.sf!=C.of)) goto L_1109bd17;
  /* 1109bd05 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1109bd0b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109bd11 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1109bd17:;
  /* 1109bd17 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109bd1a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1109bd20 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1109bd22 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109bd25 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109bd28 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1109bd2b jmp 0x1109bc82 */
  goto L_1109bc82;
L_1109bd30:;
  /* 1109bd30 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1109bd33 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109bd36 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1109bd39 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109bd3c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109bd3f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1109bd42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109bd45 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1109bd4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109bd4c je 0x1109bd77 */
  if (C.zf) goto L_1109bd77;
  /* 1109bd4e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109bd51 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1109bd54 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109bd57 jne 0x1109bd5f */
  if (!C.zf) goto L_1109bd5f;
  /* 1109bd59 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109bd5d jne 0x1109bd77 */
  if (!C.zf) goto L_1109bd77;
L_1109bd5f:;
  /* 1109bd5f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109bd62 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109bd65 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1109bd68 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109bd6b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1109bd6e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109bd71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109bd74 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1109bd77:;
  /* 1109bd77 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109bd7e jne 0x1109bf52 */
  if (!C.zf) goto L_1109bf52;
  /* 1109bd84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109bd87 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1109bd8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109bd8c je 0x1109bddd */
  if (C.zf) goto L_1109bddd;
  /* 1109bd8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109bd91 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1109bd97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109bd99 je 0x1109bdab */
  if (C.zf) goto L_1109bdab;
  /* 1109bd9b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1109bda2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1109bda9 jmp 0x1109bddd */
  goto L_1109bddd;
L_1109bdab:;
  /* 1109bdab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109bdae and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1109bdb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109bdb3 je 0x1109bdc5 */
  if (C.zf) goto L_1109bdc5;
  /* 1109bdb5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1109bdbc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1109bdc3 jmp 0x1109bddd */
  goto L_1109bddd;
L_1109bdc5:;
  /* 1109bdc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109bdc8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1109bdcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109bdcd je 0x1109bddd */
  if (C.zf) goto L_1109bddd;
  /* 1109bdcf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1109bdd6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1109bddd:;
  /* 1109bddd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1109bde3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109bde6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109bde9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1109bdef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109bdf2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1109bdf5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109bdf7 jne 0x1109be15 */
  if (!C.zf) goto L_1109be15;
  /* 1109bdf9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1109bdff push eax */
  push32((uint32_t)(EAX));
  /* 1109be00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109be03 push ecx */
  push32((uint32_t)(ECX));
  /* 1109be04 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1109be0a push edx */
  push32((uint32_t)(EDX));
  /* 1109be0b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1109be0d call 0x1109c0f0 */
  push32(0x1109be12u); f_1109c0f0();
  /* 1109be12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109be15:;
  /* 1109be15 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1109be1b push eax */
  push32((uint32_t)(EAX));
  /* 1109be1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109be1f push ecx */
  push32((uint32_t)(ECX));
  /* 1109be20 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109be23 push edx */
  push32((uint32_t)(EDX));
  /* 1109be24 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1109be2a push eax */
  push32((uint32_t)(EAX));
  /* 1109be2b call 0x1109c130 */
  push32(0x1109be30u); f_1109c130();
  /* 1109be30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109be33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109be36 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1109be39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109be3b je 0x1109be63 */
  if (C.zf) goto L_1109be63;
  /* 1109be3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109be40 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1109be43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109be45 jne 0x1109be63 */
  if (!C.zf) goto L_1109be63;
  /* 1109be47 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1109be4d push eax */
  push32((uint32_t)(EAX));
  /* 1109be4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109be51 push ecx */
  push32((uint32_t)(ECX));
  /* 1109be52 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1109be58 push edx */
  push32((uint32_t)(EDX));
  /* 1109be59 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1109be5b call 0x1109c0f0 */
  push32(0x1109be60u); f_1109c0f0();
  /* 1109be60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109be63:;
  /* 1109be63 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109be67 je 0x1109bf11 */
  if (C.zf) goto L_1109bf11;
  /* 1109be6d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109be71 jle 0x1109bf11 */
  if ((C.zf||C.sf!=C.of)) goto L_1109bf11;
  /* 1109be77 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109be7a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1109be80 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109be83 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1109be89:;
  /* 1109be89 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1109be8f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1109be95 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109be98 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1109be9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109bea0 je 0x1109bf0f */
  if (C.zf) goto L_1109bf0f;
  /* 1109bea2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1109bea8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1109beab mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1109beb2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1109beb9 push eax */
  push32((uint32_t)(EAX));
  /* 1109beba lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1109bec0 push ecx */
  push32((uint32_t)(ECX));
  /* 1109bec1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1109bec7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109beca mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1109bed0 call 0x1109d2a0 */
  push32(0x1109bed5u); f_1109d2a0();
  /* 1109bed5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109bed8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1109bede cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109bee5 jg 0x1109bee9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1109bee9;
  /* 1109bee7 jmp 0x1109bf0f */
  goto L_1109bf0f;
L_1109bee9:;
  /* 1109bee9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1109beef push eax */
  push32((uint32_t)(EAX));
  /* 1109bef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109bef3 push ecx */
  push32((uint32_t)(ECX));
  /* 1109bef4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1109befa push edx */
  push32((uint32_t)(EDX));
  /* 1109befb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1109bf01 push eax */
  push32((uint32_t)(EAX));
  /* 1109bf02 call 0x1109c130 */
  push32(0x1109bf07u); f_1109c130();
  /* 1109bf07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109bf0a jmp 0x1109be89 */
  goto L_1109be89;
L_1109bf0f:;
  /* 1109bf0f jmp 0x1109bf2c */
  goto L_1109bf2c;
L_1109bf11:;
  /* 1109bf11 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1109bf17 push ecx */
  push32((uint32_t)(ECX));
  /* 1109bf18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109bf1b push edx */
  push32((uint32_t)(EDX));
  /* 1109bf1c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109bf1f push eax */
  push32((uint32_t)(EAX));
  /* 1109bf20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109bf23 push ecx */
  push32((uint32_t)(ECX));
  /* 1109bf24 call 0x1109c130 */
  push32(0x1109bf29u); f_1109c130();
  /* 1109bf29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109bf2c:;
  /* 1109bf2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109bf2f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1109bf32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109bf34 je 0x1109bf52 */
  if (C.zf) goto L_1109bf52;
  /* 1109bf36 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1109bf3c push eax */
  push32((uint32_t)(EAX));
  /* 1109bf3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109bf40 push ecx */
  push32((uint32_t)(ECX));
  /* 1109bf41 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1109bf47 push edx */
  push32((uint32_t)(EDX));
  /* 1109bf48 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1109bf4a call 0x1109c0f0 */
  push32(0x1109bf4fu); f_1109c0f0();
  /* 1109bf4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109bf52:;
  /* 1109bf52 jmp 0x1109b364 */
  goto L_1109b364;
L_1109bf57:;
  /* 1109bf57 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1109bf5d pop edi */
  EDI = (pop32());
  /* 1109bf5e pop esi */
  ESI = (pop32());
  /* 1109bf5f pop ebx */
  EBX = (pop32());
  /* 1109bf60 mov esp, ebp */
  ESP = (EBP);
  /* 1109bf62 pop ebp */
  EBP = (pop32());
  /* 1109bf63 ret  */
  ESPCHK(0x1109b340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c070 @ 0x1109c070 (119 bytes, 44 insns) */
void f_1109c070(void) {
  FTRACE(0x1109c070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109c070 push ebp */
  push32((uint32_t)(EBP));
  /* 1109c071 mov ebp, esp */
  EBP = (ESP);
  /* 1109c073 push ecx */
  push32((uint32_t)(ECX));
  /* 1109c074 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c077 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1109c07a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109c07d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c080 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1109c083 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c086 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c08a jl 0x1109c0b2 */
  if ((C.sf!=C.of)) goto L_1109c0b2;
  /* 1109c08c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c08f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1109c091 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1109c094 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1109c096 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1109c09a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1109c0a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1109c0a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c0a6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1109c0a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c0ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c0ae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1109c0b0 jmp 0x1109c0c5 */
  goto L_1109c0c5;
L_1109c0b2:;
  /* 1109c0b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c0b5 push edx */
  push32((uint32_t)(EDX));
  /* 1109c0b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c0b9 push eax */
  push32((uint32_t)(EAX));
  /* 1109c0ba call 0x1109b0c0 */
  push32(0x1109c0bfu); f_1109b0c0();
  /* 1109c0bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c0c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1109c0c5:;
  /* 1109c0c5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c0c9 jne 0x1109c0d6 */
  if (!C.zf) goto L_1109c0d6;
  /* 1109c0cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109c0ce mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1109c0d4 jmp 0x1109c0e3 */
  goto L_1109c0e3;
L_1109c0d6:;
  /* 1109c0d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109c0d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1109c0db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c0de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109c0e1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1109c0e3:;
  /* 1109c0e3 mov esp, ebp */
  ESP = (EBP);
  /* 1109c0e5 pop ebp */
  EBP = (pop32());
  /* 1109c0e6 ret  */
  ESPCHK(0x1109c070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0f0 @ 0x1109c0f0 (53 bytes, 23 insns) */
void f_1109c0f0(void) {
  FTRACE(0x1109c0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109c0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109c0f1 mov ebp, esp */
  EBP = (ESP);
L_1109c0f3:;
  /* 1109c0f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c0f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c0f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109c0fc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1109c0ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109c101 jle 0x1109c123 */
  if ((C.zf||C.sf!=C.of)) goto L_1109c123;
  /* 1109c103 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109c106 push edx */
  push32((uint32_t)(EDX));
  /* 1109c107 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109c10a push eax */
  push32((uint32_t)(EAX));
  /* 1109c10b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c10e push ecx */
  push32((uint32_t)(ECX));
  /* 1109c10f call 0x1109c070 */
  push32(0x1109c114u); f_1109c070();
  /* 1109c114 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c117 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109c11a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c11d jne 0x1109c121 */
  if (!C.zf) goto L_1109c121;
  /* 1109c11f jmp 0x1109c123 */
  goto L_1109c123;
L_1109c121:;
  /* 1109c121 jmp 0x1109c0f3 */
  goto L_1109c0f3;
L_1109c123:;
  /* 1109c123 pop ebp */
  EBP = (pop32());
  /* 1109c124 ret  */
  ESPCHK(0x1109c0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c130 @ 0x1109c130 (74 bytes, 31 insns) */
void f_1109c130(void) {
  FTRACE(0x1109c130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109c130 push ebp */
  push32((uint32_t)(EBP));
  /* 1109c131 mov ebp, esp */
  EBP = (ESP);
  /* 1109c133 push ecx */
  push32((uint32_t)(ECX));
L_1109c134:;
  /* 1109c134 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c137 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c13a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109c13d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1109c140 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109c142 jle 0x1109c176 */
  if ((C.zf||C.sf!=C.of)) goto L_1109c176;
  /* 1109c144 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109c147 push edx */
  push32((uint32_t)(EDX));
  /* 1109c148 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109c14b push eax */
  push32((uint32_t)(EAX));
  /* 1109c14c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c14f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1109c152 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1109c155 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109c158 push eax */
  push32((uint32_t)(EAX));
  /* 1109c159 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c15c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c15f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1109c162 call 0x1109c070 */
  push32(0x1109c167u); f_1109c070();
  /* 1109c167 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c16a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109c16d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c170 jne 0x1109c174 */
  if (!C.zf) goto L_1109c174;
  /* 1109c172 jmp 0x1109c176 */
  goto L_1109c176;
L_1109c174:;
  /* 1109c174 jmp 0x1109c134 */
  goto L_1109c134;
L_1109c176:;
  /* 1109c176 mov esp, ebp */
  ESP = (EBP);
  /* 1109c178 pop ebp */
  EBP = (pop32());
  /* 1109c179 ret  */
  ESPCHK(0x1109c130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c180 @ 0x1109c180 (26 bytes, 12 insns) */
void f_1109c180(void) {
  FTRACE(0x1109c180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109c180 push ebp */
  push32((uint32_t)(EBP));
  /* 1109c181 mov ebp, esp */
  EBP = (ESP);
  /* 1109c183 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c186 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1109c188 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c18b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c18e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1109c190 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c193 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1109c195 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1109c198 pop ebp */
  EBP = (pop32());
  /* 1109c199 ret  */
  ESPCHK(0x1109c180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1a0 @ 0x1109c1a0 (31 bytes, 14 insns) */
void f_1109c1a0(void) {
  FTRACE(0x1109c1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109c1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109c1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1109c1a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c1a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1109c1a8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c1ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c1ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1109c1b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c1b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1109c1b5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109c1b8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1109c1ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1109c1bd pop ebp */
  EBP = (pop32());
  /* 1109c1be ret  */
  ESPCHK(0x1109c1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1c0 @ 0x1109c1c0 (27 bytes, 12 insns) */
void f_1109c1c0(void) {
  FTRACE(0x1109c1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109c1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109c1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1109c1c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c1c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1109c1c8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c1cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c1ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1109c1d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c1d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1109c1d5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1109c1d9 pop ebp */
  EBP = (pop32());
  /* 1109c1da ret  */
  ESPCHK(0x1109c1c0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1109c1e0 (145 bytes, 42 insns) */
void f_1109c1e0(void) {
  FTRACE(0x1109c1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109c1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109c1e1 mov ebp, esp */
  EBP = (ESP);
  /* 1109c1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1109c1e4 call 0x1109c290 */
  push32(0x1109c1e9u); f_1109c290();
  /* 1109c1e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c1ec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1109c1ee mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1109c1f5 jmp 0x1109c200 */
  goto L_1109c200;
L_1109c1f7:;
  /* 1109c1f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109c1fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c1fd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1109c200:;
  /* 1109c200 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c204 jae 0x1109c22a */
  if (!C.cf) goto L_1109c22a;
  /* 1109c206 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109c209 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c20c cmp ecx, dword ptr [eax*8 + 0x110befb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x110befb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c213 jne 0x1109c228 */
  if (!C.zf) goto L_1109c228;
  /* 1109c215 call 0x1109c280 */
  push32(0x1109c21au); f_1109c280();
  /* 1109c21a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109c21d mov ecx, dword ptr [edx*8 + 0x110befbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x110befbc)));
  /* 1109c224 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1109c226 jmp 0x1109c26d */
  goto L_1109c26d;
L_1109c228:;
  /* 1109c228 jmp 0x1109c1f7 */
  goto L_1109c1f7;
L_1109c22a:;
  /* 1109c22a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c22e jb 0x1109c243 */
  if (C.cf) goto L_1109c243;
  /* 1109c230 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c234 ja 0x1109c243 */
  if ((!C.cf&&!C.zf)) goto L_1109c243;
  /* 1109c236 call 0x1109c280 */
  push32(0x1109c23bu); f_1109c280();
  /* 1109c23b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1109c241 jmp 0x1109c26d */
  goto L_1109c26d;
L_1109c243:;
  /* 1109c243 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c24a jb 0x1109c262 */
  if (C.cf) goto L_1109c262;
  /* 1109c24c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c253 ja 0x1109c262 */
  if ((!C.cf&&!C.zf)) goto L_1109c262;
  /* 1109c255 call 0x1109c280 */
  push32(0x1109c25au); f_1109c280();
  /* 1109c25a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1109c260 jmp 0x1109c26d */
  goto L_1109c26d;
L_1109c262:;
  /* 1109c262 call 0x1109c280 */
  push32(0x1109c267u); f_1109c280();
  /* 1109c267 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1109c26d:;
  /* 1109c26d mov esp, ebp */
  ESP = (EBP);
  /* 1109c26f pop ebp */
  EBP = (pop32());
  /* 1109c270 ret  */
  ESPCHK(0x1109c1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c280 @ 0x1109c280 (13 bytes, 6 insns) */
void f_1109c280(void) {
  FTRACE(0x1109c280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109c280 push ebp */
  push32((uint32_t)(EBP));
  /* 1109c281 mov ebp, esp */
  EBP = (ESP);
  /* 1109c283 call 0x11093df0 */
  push32(0x1109c288u); f_11093df0();
  /* 1109c288 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c28b pop ebp */
  EBP = (pop32());
  /* 1109c28c ret  */
  ESPCHK(0x1109c280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c290 @ 0x1109c290 (13 bytes, 6 insns) */
void f_1109c290(void) {
  FTRACE(0x1109c290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109c290 push ebp */
  push32((uint32_t)(EBP));
  /* 1109c291 mov ebp, esp */
  EBP = (ESP);
  /* 1109c293 call 0x11093df0 */
  push32(0x1109c298u); f_11093df0();
  /* 1109c298 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c29b pop ebp */
  EBP = (pop32());
  /* 1109c29c ret  */
  ESPCHK(0x1109c290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2a0 @ 0x1109c2a0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_1109c2a0(void) {
  FTRACE(0x1109c2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109c2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109c2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1109c2a3 push edi */
  push32((uint32_t)(EDI));
  /* 1109c2a4 push esi */
  push32((uint32_t)(ESI));
  /* 1109c2a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c2a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109c2ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c2ae mov eax, ecx */
  EAX = (ECX);
  /* 1109c2b0 mov edx, ecx */
  EDX = (ECX);
  /* 1109c2b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c2b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c2b6 jbe 0x1109c2c0 */
  if ((C.cf||C.zf)) goto L_1109c2c0;
  /* 1109c2b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c2ba jb 0x1109c438 */
  if (C.cf) goto L_1109c438;
L_1109c2c0:;
  /* 1109c2c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1109c2c6 jne 0x1109c2dc */
  if (!C.zf) goto L_1109c2dc;
  /* 1109c2c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1109c2cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1109c2ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c2d1 jb 0x1109c2fc */
  if (C.cf) goto L_1109c2fc;
  /* 1109c2d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1109c2d5 jmp dword ptr [edx*4 + 0x1109c3e8] */
  switch (EDX) {
    case 0: goto L_1109c3f8;
    case 1: goto L_1109c400;
    case 2: goto L_1109c40c;
    case 3: goto L_1109c420;
    default: x86_unimpl("switch@0x1109c2d5 out of table"); return;
  }
L_1109c2dc:;
  /* 1109c2dc mov eax, edi */
  EAX = (EDI);
  /* 1109c2de mov edx, 3 */
  EDX = (0x3u);
  /* 1109c2e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109c2e6 jb 0x1109c2f4 */
  if (C.cf) goto L_1109c2f4;
  /* 1109c2e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1109c2eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c2ed jmp dword ptr [eax*4 + 0x1109c300] */
  switch (EAX) {
    case 1: goto L_1109c310;
    case 2: goto L_1109c33c;
    case 3: goto L_1109c360;
    default: x86_unimpl("switch@0x1109c2ed out of table"); return;
  }
L_1109c2f4:;
  /* 1109c2f4 jmp dword ptr [ecx*4 + 0x1109c3f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1109c3f8)))); return;
  /* 1109c2fb nop  */
  /* nop */
L_1109c2fc:;
  /* 1109c2fc jmp dword ptr [ecx*4 + 0x1109c37c] */
  switch (ECX) {
    case 0: goto L_1109c3df;
    case 1: goto L_1109c3cc;
    case 2: goto L_1109c3c4;
    case 3: goto L_1109c3bc;
    case 4: goto L_1109c3b4;
    case 5: goto L_1109c3ac;
    case 6: goto L_1109c3a4;
    case 7: goto L_1109c39c;
    default: x86_unimpl("switch@0x1109c2fc out of table"); return;
  }
  /* 1109c303 nop  */
  /* nop */
L_1109c310:;
  /* 1109c310 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1109c312 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1109c314 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1109c316 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1109c319 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1109c31c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1109c31f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1109c322 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1109c325 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c328 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c32b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c32e jb 0x1109c2fc */
  if (C.cf) goto L_1109c2fc;
  /* 1109c330 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1109c332 jmp dword ptr [edx*4 + 0x1109c3e8] */
  switch (EDX) {
    case 0: goto L_1109c3f8;
    case 1: goto L_1109c400;
    case 2: goto L_1109c40c;
    case 3: goto L_1109c420;
    default: x86_unimpl("switch@0x1109c332 out of table"); return;
  }
  /* 1109c339 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1109c33c:;
  /* 1109c33c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1109c33e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1109c340 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1109c342 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1109c345 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1109c348 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1109c34b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c34e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c351 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c354 jb 0x1109c2fc */
  if (C.cf) goto L_1109c2fc;
  /* 1109c356 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1109c358 jmp dword ptr [edx*4 + 0x1109c3e8] */
  switch (EDX) {
    case 0: goto L_1109c3f8;
    case 1: goto L_1109c400;
    case 2: goto L_1109c40c;
    case 3: goto L_1109c420;
    default: x86_unimpl("switch@0x1109c358 out of table"); return;
  }
  /* 1109c35f nop  */
  /* nop */
L_1109c360:;
  /* 1109c360 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1109c362 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1109c364 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1109c366 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1109c367 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1109c36a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1109c36b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c36e jb 0x1109c2fc */
  if (C.cf) goto L_1109c2fc;
  /* 1109c370 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1109c372 jmp dword ptr [edx*4 + 0x1109c3e8] */
  switch (EDX) {
    case 0: goto L_1109c3f8;
    case 1: goto L_1109c400;
    case 2: goto L_1109c40c;
    case 3: goto L_1109c420;
    default: x86_unimpl("switch@0x1109c372 out of table"); return;
  }
  /* 1109c379 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1109c39c:;
  /* 1109c39c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1109c3a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1109c3a4:;
  /* 1109c3a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1109c3a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1109c3ac:;
  /* 1109c3ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1109c3b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1109c3b4:;
  /* 1109c3b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1109c3b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1109c3bc:;
  /* 1109c3bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1109c3c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1109c3c4:;
  /* 1109c3c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1109c3c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1109c3cc:;
  /* 1109c3cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1109c3d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1109c3d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1109c3db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c3dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1109c3df:;
  /* 1109c3df jmp dword ptr [edx*4 + 0x1109c3e8] */
  switch (EDX) {
    case 0: goto L_1109c3f8;
    case 1: goto L_1109c400;
    case 2: goto L_1109c40c;
    case 3: goto L_1109c420;
    default: x86_unimpl("switch@0x1109c3df out of table"); return;
  }
  /* 1109c3e6 mov edi, edi */
  EDI = (EDI);
L_1109c3f8:;
  /* 1109c3f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c3fb pop esi */
  ESI = (pop32());
  /* 1109c3fc pop edi */
  EDI = (pop32());
  /* 1109c3fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1109c3fe ret  */
  ESPCHK(0x1109c2a0u, _esp0);
  ESP += 4; return;
  /* 1109c3ff nop  */
  /* nop */
L_1109c400:;
  /* 1109c400 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1109c402 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1109c404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c407 pop esi */
  ESI = (pop32());
  /* 1109c408 pop edi */
  EDI = (pop32());
  /* 1109c409 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1109c40a ret  */
  ESPCHK(0x1109c2a0u, _esp0);
  ESP += 4; return;
  /* 1109c40b nop  */
  /* nop */
L_1109c40c:;
  /* 1109c40c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1109c40e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1109c410 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1109c413 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1109c416 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c419 pop esi */
  ESI = (pop32());
  /* 1109c41a pop edi */
  EDI = (pop32());
  /* 1109c41b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1109c41c ret  */
  ESPCHK(0x1109c2a0u, _esp0);
  ESP += 4; return;
  /* 1109c41d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1109c420:;
  /* 1109c420 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1109c422 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1109c424 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1109c427 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1109c42a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1109c42d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1109c430 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c433 pop esi */
  ESI = (pop32());
  /* 1109c434 pop edi */
  EDI = (pop32());
  /* 1109c435 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1109c436 ret  */
  ESPCHK(0x1109c2a0u, _esp0);
  ESP += 4; return;
  /* 1109c437 nop  */
  /* nop */
L_1109c438:;
  /* 1109c438 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1109c43c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1109c440 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1109c446 jne 0x1109c46c */
  if (!C.zf) goto L_1109c46c;
  /* 1109c448 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1109c44b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1109c44e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c451 jb 0x1109c460 */
  if (C.cf) goto L_1109c460;
  /* 1109c453 std  */
  C.df=1;
  /* 1109c454 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1109c456 cld  */
  C.df=0;
  /* 1109c457 jmp dword ptr [edx*4 + 0x1109c580] */
  switch (EDX) {
    case 0: goto L_1109c590;
    case 1: goto L_1109c598;
    case 2: goto L_1109c5a8;
    case 3: goto L_1109c5bc;
    default: x86_unimpl("switch@0x1109c457 out of table"); return;
  }
  /* 1109c45e mov edi, edi */
  EDI = (EDI);
L_1109c460:;
  /* 1109c460 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1109c462 jmp dword ptr [ecx*4 + 0x1109c530] */
  switch (ECX) {
    case 0: goto L_1109c577;
    default: x86_unimpl("switch@0x1109c462 out of table"); return;
  }
  /* 1109c469 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1109c46c:;
  /* 1109c46c mov eax, edi */
  EAX = (EDI);
  /* 1109c46e mov edx, 3 */
  EDX = (0x3u);
  /* 1109c473 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c476 jb 0x1109c484 */
  if (C.cf) goto L_1109c484;
  /* 1109c478 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1109c47b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109c47d jmp dword ptr [eax*4 + 0x1109c488] */
  switch (EAX) {
    case 1: goto L_1109c498;
    case 2: goto L_1109c4b8;
    case 3: goto L_1109c4e0;
    default: x86_unimpl("switch@0x1109c47d out of table"); return;
  }
L_1109c484:;
  /* 1109c484 jmp dword ptr [ecx*4 + 0x1109c580] */
  switch (ECX) {
    case 0: goto L_1109c590;
    case 1: goto L_1109c598;
    case 2: goto L_1109c5a8;
    case 3: goto L_1109c5bc;
    default: x86_unimpl("switch@0x1109c484 out of table"); return;
  }
  /* 1109c48b nop  */
  /* nop */
L_1109c498:;
  /* 1109c498 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1109c49b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1109c49d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1109c4a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1109c4a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1109c4a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1109c4a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c4a8 jb 0x1109c460 */
  if (C.cf) goto L_1109c460;
  /* 1109c4aa std  */
  C.df=1;
  /* 1109c4ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1109c4ad cld  */
  C.df=0;
  /* 1109c4ae jmp dword ptr [edx*4 + 0x1109c580] */
  switch (EDX) {
    case 0: goto L_1109c590;
    case 1: goto L_1109c598;
    case 2: goto L_1109c5a8;
    case 3: goto L_1109c5bc;
    default: x86_unimpl("switch@0x1109c4ae out of table"); return;
  }
  /* 1109c4b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1109c4b8:;
  /* 1109c4b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1109c4bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1109c4bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1109c4c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1109c4c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1109c4c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1109c4c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109c4cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109c4cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c4d2 jb 0x1109c460 */
  if (C.cf) goto L_1109c460;
  /* 1109c4d4 std  */
  C.df=1;
  /* 1109c4d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1109c4d7 cld  */
  C.df=0;
  /* 1109c4d8 jmp dword ptr [edx*4 + 0x1109c580] */
  switch (EDX) {
    case 0: goto L_1109c590;
    case 1: goto L_1109c598;
    case 2: goto L_1109c5a8;
    case 3: goto L_1109c5bc;
    default: x86_unimpl("switch@0x1109c4d8 out of table"); return;
  }
  /* 1109c4df nop  */
  /* nop */
L_1109c4e0:;
  /* 1109c4e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1109c4e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1109c4e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1109c4e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1109c4eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1109c4ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1109c4f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1109c4f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1109c4f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109c4fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109c4fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c500 jb 0x1109c460 */
  if (C.cf) goto L_1109c460;
  /* 1109c506 std  */
  C.df=1;
  /* 1109c507 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1109c509 cld  */
  C.df=0;
  /* 1109c50a jmp dword ptr [edx*4 + 0x1109c580] */
  switch (EDX) {
    case 0: goto L_1109c590;
    case 1: goto L_1109c598;
    case 2: goto L_1109c5a8;
    case 3: goto L_1109c5bc;
    default: x86_unimpl("switch@0x1109c50a out of table"); return;
  }
  /* 1109c511 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1109c514 xor al, 0xc5 */
  { uint32_t _r=(AL)^(0xc5u); AL = (_r); fl_logic(_r,8); }
  /* 1109c516 or dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1109c518 cmp al, 0xc5 */
  { uint32_t _a=(AL),_b=(0xc5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1109c51a or dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1109c51c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1109c51d lds ecx, ptr [ecx] */
  x86_unimpl("lds @ 0x1109c51d");
  /* 1109c51f adc dword ptr [ebp + eax*8 + 9], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + EAX*8 + 0x9))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EBP + EAX*8 + 0x9), (_r)); fl_add(_a,_b,_r,32); }
  /* 1109c523 adc dword ptr [ebp + eax*8 + 9], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + EAX*8 + 0x9))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EBP + EAX*8 + 0x9), (_r)); fl_add(_a,_b,_r,32); }
  /* 1109c527 adc dword ptr [ebp + eax*8 + 9], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + EAX*8 + 0x9))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EBP + EAX*8 + 0x9), (_r)); fl_add(_a,_b,_r,32); }
  /* 1109c52b adc dword ptr [ebp + eax*8 + 9], esp */
  { uint32_t _a=(r32((uint32_t)(EBP + EAX*8 + 0x9))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EBP + EAX*8 + 0x9), (_r)); fl_add(_a,_b,_r,32); }
  /* 1109c534 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1109c538 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1109c53c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1109c540 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1109c544 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1109c548 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1109c54c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1109c550 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1109c554 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1109c558 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1109c55c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1109c560 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1109c564 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1109c568 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1109c56c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1109c573 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c575 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1109c577:;
  /* 1109c577 jmp dword ptr [edx*4 + 0x1109c580] */
  switch (EDX) {
    case 0: goto L_1109c590;
    case 1: goto L_1109c598;
    case 2: goto L_1109c5a8;
    case 3: goto L_1109c5bc;
    default: x86_unimpl("switch@0x1109c577 out of table"); return;
  }
  /* 1109c57e mov edi, edi */
  EDI = (EDI);
L_1109c590:;
  /* 1109c590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c593 pop esi */
  ESI = (pop32());
  /* 1109c594 pop edi */
  EDI = (pop32());
  /* 1109c595 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1109c596 ret  */
  ESPCHK(0x1109c2a0u, _esp0);
  ESP += 4; return;
  /* 1109c597 nop  */
  /* nop */
L_1109c598:;
  /* 1109c598 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1109c59b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1109c59e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c5a1 pop esi */
  ESI = (pop32());
  /* 1109c5a2 pop edi */
  EDI = (pop32());
  /* 1109c5a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1109c5a4 ret  */
  ESPCHK(0x1109c2a0u, _esp0);
  ESP += 4; return;
  /* 1109c5a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1109c5a8:;
  /* 1109c5a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1109c5ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1109c5ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1109c5b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1109c5b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c5b7 pop esi */
  ESI = (pop32());
  /* 1109c5b8 pop edi */
  EDI = (pop32());
  /* 1109c5b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1109c5ba ret  */
  ESPCHK(0x1109c2a0u, _esp0);
  ESP += 4; return;
  /* 1109c5bb nop  */
  /* nop */
L_1109c5bc:;
  /* 1109c5bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1109c5bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1109c5c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1109c5c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1109c5c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1109c5cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1109c5ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c5d1 pop esi */
  ESI = (pop32());
  /* 1109c5d2 pop edi */
  EDI = (pop32());
  /* 1109c5d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1109c5d4 ret  */
  ESPCHK(0x1109c2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5e0 @ 0x1109c5e0 (421 bytes, 148 insns) */
void f_1109c5e0(void) {
  FTRACE(0x1109c5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109c5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109c5e1 mov ebp, esp */
  EBP = (ESP);
  /* 1109c5e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1109c5e5 push 0x110bc2f0 */
  push32((uint32_t)(0x110bc2f0u));
  /* 1109c5ea push 0x1109d4b8 */
  push32((uint32_t)(0x1109d4b8u));
  /* 1109c5ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1109c5f5 push eax */
  push32((uint32_t)(EAX));
  /* 1109c5f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1109c5fd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c600 push ebx */
  push32((uint32_t)(EBX));
  /* 1109c601 push esi */
  push32((uint32_t)(ESI));
  /* 1109c602 push edi */
  push32((uint32_t)(EDI));
  /* 1109c603 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1109c606 cmp dword ptr [0x110c07f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c07f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c60d jne 0x1109c65e */
  if (!C.zf) goto L_1109c65e;
  /* 1109c60f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1109c612 push eax */
  push32((uint32_t)(EAX));
  /* 1109c613 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109c615 push 0x110bc2ec */
  push32((uint32_t)(0x110bc2ecu));
  /* 1109c61a push 1 */
  push32((uint32_t)(0x1u));
  /* 1109c61c call dword ptr [0x110c335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c335c))), 0x1109c622u);
  /* 1109c622 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109c624 je 0x1109c632 */
  if (C.zf) goto L_1109c632;
  /* 1109c626 mov dword ptr [0x110c07f4], 1 */
  w32((uint32_t)(0x110c07f4), (0x1u));
  /* 1109c630 jmp 0x1109c65e */
  goto L_1109c65e;
L_1109c632:;
  /* 1109c632 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1109c635 push ecx */
  push32((uint32_t)(ECX));
  /* 1109c636 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109c638 push 0x110bc2e8 */
  push32((uint32_t)(0x110bc2e8u));
  /* 1109c63d push 1 */
  push32((uint32_t)(0x1u));
  /* 1109c63f push 0 */
  push32((uint32_t)(0x0u));
  /* 1109c641 call dword ptr [0x110c3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3358))), 0x1109c647u);
  /* 1109c647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109c649 je 0x1109c657 */
  if (C.zf) goto L_1109c657;
  /* 1109c64b mov dword ptr [0x110c07f4], 2 */
  w32((uint32_t)(0x110c07f4), (0x2u));
  /* 1109c655 jmp 0x1109c65e */
  goto L_1109c65e;
L_1109c657:;
  /* 1109c657 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109c659 jmp 0x1109c788 */
  goto L_1109c788;
L_1109c65e:;
  /* 1109c65e cmp dword ptr [0x110c07f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x110c07f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c665 jne 0x1109c695 */
  if (!C.zf) goto L_1109c695;
  /* 1109c667 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c66b jne 0x1109c676 */
  if (!C.zf) goto L_1109c676;
  /* 1109c66d mov edx, dword ptr [0x110c0800] */
  EDX = (r32((uint32_t)(0x110c0800)));
  /* 1109c673 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1109c676:;
  /* 1109c676 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109c679 push eax */
  push32((uint32_t)(EAX));
  /* 1109c67a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109c67d push ecx */
  push32((uint32_t)(ECX));
  /* 1109c67e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c681 push edx */
  push32((uint32_t)(EDX));
  /* 1109c682 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c685 push eax */
  push32((uint32_t)(EAX));
  /* 1109c686 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1109c689 push ecx */
  push32((uint32_t)(ECX));
  /* 1109c68a call dword ptr [0x110c3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3358))), 0x1109c690u);
  /* 1109c690 jmp 0x1109c788 */
  goto L_1109c788;
L_1109c695:;
  /* 1109c695 cmp dword ptr [0x110c07f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110c07f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c69c jne 0x1109c786 */
  if (!C.zf) goto L_1109c786;
  /* 1109c6a2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c6a6 jne 0x1109c6b1 */
  if (!C.zf) goto L_1109c6b1;
  /* 1109c6a8 mov edx, dword ptr [0x110c0810] */
  EDX = (r32((uint32_t)(0x110c0810)));
  /* 1109c6ae mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1109c6b1:;
  /* 1109c6b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109c6b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109c6b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109c6b8 push eax */
  push32((uint32_t)(EAX));
  /* 1109c6b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c6bc push ecx */
  push32((uint32_t)(ECX));
  /* 1109c6bd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1109c6c0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1109c6c2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109c6c4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1109c6c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c6ca push edx */
  push32((uint32_t)(EDX));
  /* 1109c6cb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1109c6ce push eax */
  push32((uint32_t)(EAX));
  /* 1109c6cf call dword ptr [0x110c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3354))), 0x1109c6d5u);
  /* 1109c6d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1109c6d8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c6dc jne 0x1109c6e5 */
  if (!C.zf) goto L_1109c6e5;
  /* 1109c6de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109c6e0 jmp 0x1109c788 */
  goto L_1109c788;
L_1109c6e5:;
  /* 1109c6e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1109c6ec mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109c6ef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1109c6f1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c6f4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1109c6f6 call 0x11097550 */
  push32(0x1109c6fbu); f_11097550();
  /* 1109c6fb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1109c6fe mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1109c701 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109c704 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1109c707 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109c70a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1109c70c push edx */
  push32((uint32_t)(EDX));
  /* 1109c70d push 0 */
  push32((uint32_t)(0x0u));
  /* 1109c70f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109c712 push eax */
  push32((uint32_t)(EAX));
  /* 1109c713 call 0x11098120 */
  push32(0x1109c718u); f_11098120();
  /* 1109c718 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c71b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1109c722 jmp 0x1109c73b */
  goto L_1109c73b;
  /* 1109c724 mov eax, 1 */
  EAX = (0x1u);
  /* 1109c729 ret  */
  ESPCHK(0x1109c5e0u, _esp0);
  ESP += 4; return;
  /* 1109c72a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1109c72d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1109c734 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1109c73b:;
  /* 1109c73b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c73f jne 0x1109c745 */
  if (!C.zf) goto L_1109c745;
  /* 1109c741 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109c743 jmp 0x1109c788 */
  goto L_1109c788;
L_1109c745:;
  /* 1109c745 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109c748 push ecx */
  push32((uint32_t)(ECX));
  /* 1109c749 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109c74c push edx */
  push32((uint32_t)(EDX));
  /* 1109c74d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109c750 push eax */
  push32((uint32_t)(EAX));
  /* 1109c751 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c754 push ecx */
  push32((uint32_t)(ECX));
  /* 1109c755 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109c757 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1109c75a push edx */
  push32((uint32_t)(EDX));
  /* 1109c75b call dword ptr [0x110c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3354))), 0x1109c761u);
  /* 1109c761 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1109c764 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c768 jne 0x1109c76e */
  if (!C.zf) goto L_1109c76e;
  /* 1109c76a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109c76c jmp 0x1109c788 */
  goto L_1109c788;
L_1109c76e:;
  /* 1109c76e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109c771 push eax */
  push32((uint32_t)(EAX));
  /* 1109c772 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1109c775 push ecx */
  push32((uint32_t)(ECX));
  /* 1109c776 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109c779 push edx */
  push32((uint32_t)(EDX));
  /* 1109c77a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c77d push eax */
  push32((uint32_t)(EAX));
  /* 1109c77e call dword ptr [0x110c335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c335c))), 0x1109c784u);
  /* 1109c784 jmp 0x1109c788 */
  goto L_1109c788;
L_1109c786:;
  /* 1109c786 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1109c788:;
  /* 1109c788 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1109c78b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109c78e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1109c795 pop edi */
  EDI = (pop32());
  /* 1109c796 pop esi */
  ESI = (pop32());
  /* 1109c797 pop ebx */
  EBX = (pop32());
  /* 1109c798 mov esp, ebp */
  ESP = (EBP);
  /* 1109c79a pop ebp */
  EBP = (pop32());
  /* 1109c79b ret  */
  ESPCHK(0x1109c5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7a0 @ 0x1109c7a0 (727 bytes, 263 insns) */
void f_1109c7a0(void) {
  FTRACE(0x1109c7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109c7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109c7a1 mov ebp, esp */
  EBP = (ESP);
  /* 1109c7a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1109c7a5 push 0x110bc300 */
  push32((uint32_t)(0x110bc300u));
  /* 1109c7aa push 0x1109d4b8 */
  push32((uint32_t)(0x1109d4b8u));
  /* 1109c7af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1109c7b5 push eax */
  push32((uint32_t)(EAX));
  /* 1109c7b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1109c7bd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c7c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1109c7c1 push esi */
  push32((uint32_t)(ESI));
  /* 1109c7c2 push edi */
  push32((uint32_t)(EDI));
  /* 1109c7c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1109c7c6 cmp dword ptr [0x110c0818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c7cd jne 0x1109c826 */
  if (!C.zf) goto L_1109c826;
  /* 1109c7cf push 0 */
  push32((uint32_t)(0x0u));
  /* 1109c7d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109c7d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109c7d5 push 0x110bc2ec */
  push32((uint32_t)(0x110bc2ecu));
  /* 1109c7da push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1109c7df push 0 */
  push32((uint32_t)(0x0u));
  /* 1109c7e1 call dword ptr [0x110c3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3360))), 0x1109c7e7u);
  /* 1109c7e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109c7e9 je 0x1109c7f7 */
  if (C.zf) goto L_1109c7f7;
  /* 1109c7eb mov dword ptr [0x110c0818], 1 */
  w32((uint32_t)(0x110c0818), (0x1u));
  /* 1109c7f5 jmp 0x1109c826 */
  goto L_1109c826;
L_1109c7f7:;
  /* 1109c7f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109c7f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109c7fb push 1 */
  push32((uint32_t)(0x1u));
  /* 1109c7fd push 0x110bc2e8 */
  push32((uint32_t)(0x110bc2e8u));
  /* 1109c802 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1109c807 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109c809 call dword ptr [0x110c334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c334c))), 0x1109c80fu);
  /* 1109c80f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109c811 je 0x1109c81f */
  if (C.zf) goto L_1109c81f;
  /* 1109c813 mov dword ptr [0x110c0818], 2 */
  w32((uint32_t)(0x110c0818), (0x2u));
  /* 1109c81d jmp 0x1109c826 */
  goto L_1109c826;
L_1109c81f:;
  /* 1109c81f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109c821 jmp 0x1109ca91 */
  goto L_1109ca91;
L_1109c826:;
  /* 1109c826 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c82a jle 0x1109c83f */
  if ((C.zf||C.sf!=C.of)) goto L_1109c83f;
  /* 1109c82c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109c82f push eax */
  push32((uint32_t)(EAX));
  /* 1109c830 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109c833 push ecx */
  push32((uint32_t)(ECX));
  /* 1109c834 call 0x1109cab0 */
  push32(0x1109c839u); f_1109cab0();
  /* 1109c839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c83c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1109c83f:;
  /* 1109c83f cmp dword ptr [0x110c0818], 2 */
  { uint32_t _a=(r32((uint32_t)(0x110c0818))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c846 jne 0x1109c86b */
  if (!C.zf) goto L_1109c86b;
  /* 1109c848 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1109c84b push edx */
  push32((uint32_t)(EDX));
  /* 1109c84c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1109c84f push eax */
  push32((uint32_t)(EAX));
  /* 1109c850 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109c853 push ecx */
  push32((uint32_t)(ECX));
  /* 1109c854 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109c857 push edx */
  push32((uint32_t)(EDX));
  /* 1109c858 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c85b push eax */
  push32((uint32_t)(EAX));
  /* 1109c85c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c85f push ecx */
  push32((uint32_t)(ECX));
  /* 1109c860 call dword ptr [0x110c334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c334c))), 0x1109c866u);
  /* 1109c866 jmp 0x1109ca91 */
  goto L_1109ca91;
L_1109c86b:;
  /* 1109c86b cmp dword ptr [0x110c0818], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110c0818))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c872 jne 0x1109ca8f */
  if (!C.zf) goto L_1109ca8f;
  /* 1109c878 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c87c jne 0x1109c887 */
  if (!C.zf) goto L_1109c887;
  /* 1109c87e mov edx, dword ptr [0x110c0810] */
  EDX = (r32((uint32_t)(0x110c0810)));
  /* 1109c884 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1109c887:;
  /* 1109c887 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109c889 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109c88b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109c88e push eax */
  push32((uint32_t)(EAX));
  /* 1109c88f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109c892 push ecx */
  push32((uint32_t)(ECX));
  /* 1109c893 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1109c896 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1109c898 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109c89a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1109c89d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c8a0 push edx */
  push32((uint32_t)(EDX));
  /* 1109c8a1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1109c8a4 push eax */
  push32((uint32_t)(EAX));
  /* 1109c8a5 call dword ptr [0x110c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3354))), 0x1109c8abu);
  /* 1109c8ab mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1109c8ae cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c8b2 jne 0x1109c8bb */
  if (!C.zf) goto L_1109c8bb;
  /* 1109c8b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109c8b6 jmp 0x1109ca91 */
  goto L_1109ca91;
L_1109c8bb:;
  /* 1109c8bb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1109c8c2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1109c8c5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1109c8c7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c8ca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1109c8cc call 0x11097550 */
  push32(0x1109c8d1u); f_11097550();
  /* 1109c8d1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1109c8d4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1109c8d7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1109c8da mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1109c8dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1109c8e4 jmp 0x1109c8fd */
  goto L_1109c8fd;
  /* 1109c8e6 mov eax, 1 */
  EAX = (0x1u);
  /* 1109c8eb ret  */
  ESPCHK(0x1109c7a0u, _esp0);
  ESP += 4; return;
  /* 1109c8ec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1109c8ef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1109c8f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1109c8fd:;
  /* 1109c8fd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c901 jne 0x1109c90a */
  if (!C.zf) goto L_1109c90a;
  /* 1109c903 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109c905 jmp 0x1109ca91 */
  goto L_1109ca91;
L_1109c90a:;
  /* 1109c90a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1109c90d push edx */
  push32((uint32_t)(EDX));
  /* 1109c90e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109c911 push eax */
  push32((uint32_t)(EAX));
  /* 1109c912 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109c915 push ecx */
  push32((uint32_t)(ECX));
  /* 1109c916 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109c919 push edx */
  push32((uint32_t)(EDX));
  /* 1109c91a push 1 */
  push32((uint32_t)(0x1u));
  /* 1109c91c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1109c91f push eax */
  push32((uint32_t)(EAX));
  /* 1109c920 call dword ptr [0x110c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3354))), 0x1109c926u);
  /* 1109c926 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109c928 jne 0x1109c931 */
  if (!C.zf) goto L_1109c931;
  /* 1109c92a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109c92c jmp 0x1109ca91 */
  goto L_1109ca91;
L_1109c931:;
  /* 1109c931 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109c933 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109c935 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1109c938 push ecx */
  push32((uint32_t)(ECX));
  /* 1109c939 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109c93c push edx */
  push32((uint32_t)(EDX));
  /* 1109c93d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c940 push eax */
  push32((uint32_t)(EAX));
  /* 1109c941 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c944 push ecx */
  push32((uint32_t)(ECX));
  /* 1109c945 call dword ptr [0x110c3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3360))), 0x1109c94bu);
  /* 1109c94b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1109c94e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c952 jne 0x1109c95b */
  if (!C.zf) goto L_1109c95b;
  /* 1109c954 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109c956 jmp 0x1109ca91 */
  goto L_1109ca91;
L_1109c95b:;
  /* 1109c95b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c95e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1109c964 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109c966 je 0x1109c9ab */
  if (C.zf) goto L_1109c9ab;
  /* 1109c968 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c96c je 0x1109c9a6 */
  if (C.zf) goto L_1109c9a6;
  /* 1109c96e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1109c971 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c974 jle 0x1109c97d */
  if ((C.zf||C.sf!=C.of)) goto L_1109c97d;
  /* 1109c976 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109c978 jmp 0x1109ca91 */
  goto L_1109ca91;
L_1109c97d:;
  /* 1109c97d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1109c980 push ecx */
  push32((uint32_t)(ECX));
  /* 1109c981 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1109c984 push edx */
  push32((uint32_t)(EDX));
  /* 1109c985 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1109c988 push eax */
  push32((uint32_t)(EAX));
  /* 1109c989 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109c98c push ecx */
  push32((uint32_t)(ECX));
  /* 1109c98d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109c990 push edx */
  push32((uint32_t)(EDX));
  /* 1109c991 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109c994 push eax */
  push32((uint32_t)(EAX));
  /* 1109c995 call dword ptr [0x110c3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3360))), 0x1109c99bu);
  /* 1109c99b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109c99d jne 0x1109c9a6 */
  if (!C.zf) goto L_1109c9a6;
  /* 1109c99f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109c9a1 jmp 0x1109ca91 */
  goto L_1109ca91;
L_1109c9a6:;
  /* 1109c9a6 jmp 0x1109ca8a */
  goto L_1109ca8a;
L_1109c9ab:;
  /* 1109c9ab mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1109c9ae mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1109c9b1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1109c9b8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109c9bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1109c9bd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109c9c0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1109c9c2 call 0x11097550 */
  push32(0x1109c9c7u); f_11097550();
  /* 1109c9c7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1109c9ca mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1109c9cd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1109c9d0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1109c9d3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1109c9da jmp 0x1109c9f3 */
  goto L_1109c9f3;
  /* 1109c9dc mov eax, 1 */
  EAX = (0x1u);
  /* 1109c9e1 ret  */
  ESPCHK(0x1109c7a0u, _esp0);
  ESP += 4; return;
  /* 1109c9e2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1109c9e5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1109c9ec mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1109c9f3:;
  /* 1109c9f3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109c9f7 jne 0x1109ca00 */
  if (!C.zf) goto L_1109ca00;
  /* 1109c9f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109c9fb jmp 0x1109ca91 */
  goto L_1109ca91;
L_1109ca00:;
  /* 1109ca00 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109ca03 push eax */
  push32((uint32_t)(EAX));
  /* 1109ca04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109ca07 push ecx */
  push32((uint32_t)(ECX));
  /* 1109ca08 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1109ca0b push edx */
  push32((uint32_t)(EDX));
  /* 1109ca0c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109ca0f push eax */
  push32((uint32_t)(EAX));
  /* 1109ca10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109ca13 push ecx */
  push32((uint32_t)(ECX));
  /* 1109ca14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ca17 push edx */
  push32((uint32_t)(EDX));
  /* 1109ca18 call dword ptr [0x110c3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3360))), 0x1109ca1eu);
  /* 1109ca1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109ca20 jne 0x1109ca26 */
  if (!C.zf) goto L_1109ca26;
  /* 1109ca22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109ca24 jmp 0x1109ca91 */
  goto L_1109ca91;
L_1109ca26:;
  /* 1109ca26 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ca2a jne 0x1109ca5a */
  if (!C.zf) goto L_1109ca5a;
  /* 1109ca2c push 0 */
  push32((uint32_t)(0x0u));
  /* 1109ca2e push 0 */
  push32((uint32_t)(0x0u));
  /* 1109ca30 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109ca32 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109ca34 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109ca37 push eax */
  push32((uint32_t)(EAX));
  /* 1109ca38 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109ca3b push ecx */
  push32((uint32_t)(ECX));
  /* 1109ca3c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1109ca41 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1109ca44 push edx */
  push32((uint32_t)(EDX));
  /* 1109ca45 call dword ptr [0x110c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c330c))), 0x1109ca4bu);
  /* 1109ca4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1109ca4e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ca52 jne 0x1109ca58 */
  if (!C.zf) goto L_1109ca58;
  /* 1109ca54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109ca56 jmp 0x1109ca91 */
  goto L_1109ca91;
L_1109ca58:;
  /* 1109ca58 jmp 0x1109ca8a */
  goto L_1109ca8a;
L_1109ca5a:;
  /* 1109ca5a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109ca5c push 0 */
  push32((uint32_t)(0x0u));
  /* 1109ca5e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1109ca61 push eax */
  push32((uint32_t)(EAX));
  /* 1109ca62 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1109ca65 push ecx */
  push32((uint32_t)(ECX));
  /* 1109ca66 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109ca69 push edx */
  push32((uint32_t)(EDX));
  /* 1109ca6a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109ca6d push eax */
  push32((uint32_t)(EAX));
  /* 1109ca6e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1109ca73 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1109ca76 push ecx */
  push32((uint32_t)(ECX));
  /* 1109ca77 call dword ptr [0x110c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c330c))), 0x1109ca7du);
  /* 1109ca7d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1109ca80 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ca84 jne 0x1109ca8a */
  if (!C.zf) goto L_1109ca8a;
  /* 1109ca86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109ca88 jmp 0x1109ca91 */
  goto L_1109ca91;
L_1109ca8a:;
  /* 1109ca8a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1109ca8d jmp 0x1109ca91 */
  goto L_1109ca91;
L_1109ca8f:;
  /* 1109ca8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1109ca91:;
  /* 1109ca91 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1109ca94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109ca97 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1109ca9e pop edi */
  EDI = (pop32());
  /* 1109ca9f pop esi */
  ESI = (pop32());
  /* 1109caa0 pop ebx */
  EBX = (pop32());
  /* 1109caa1 mov esp, ebp */
  ESP = (EBP);
  /* 1109caa3 pop ebp */
  EBP = (pop32());
  /* 1109caa4 ret  */
  ESPCHK(0x1109c7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cab0 @ 0x1109cab0 (80 bytes, 32 insns) */
void f_1109cab0(void) {
  FTRACE(0x1109cab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109cab0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109cab1 mov ebp, esp */
  EBP = (ESP);
  /* 1109cab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109cab6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109cab9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1109cabc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cabf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1109cac2:;
  /* 1109cac2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109cac5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109cac8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109cacb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1109cace test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109cad0 je 0x1109cae7 */
  if (C.zf) goto L_1109cae7;
  /* 1109cad2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109cad5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1109cad8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109cada je 0x1109cae7 */
  if (C.zf) goto L_1109cae7;
  /* 1109cadc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109cadf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109cae2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109cae5 jmp 0x1109cac2 */
  goto L_1109cac2;
L_1109cae7:;
  /* 1109cae7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109caea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1109caed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109caef jne 0x1109caf9 */
  if (!C.zf) goto L_1109caf9;
  /* 1109caf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109caf4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109caf7 jmp 0x1109cafc */
  goto L_1109cafc;
L_1109caf9:;
  /* 1109caf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1109cafc:;
  /* 1109cafc mov esp, ebp */
  ESP = (EBP);
  /* 1109cafe pop ebp */
  EBP = (pop32());
  /* 1109caff ret  */
  ESPCHK(0x1109cab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb00 @ 0x1109cb00 (130 bytes, 43 insns) */
void f_1109cb00(void) {
  FTRACE(0x1109cb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109cb00 push ebp */
  push32((uint32_t)(EBP));
  /* 1109cb01 mov ebp, esp */
  EBP = (ESP);
  /* 1109cb03 push ecx */
  push32((uint32_t)(ECX));
  /* 1109cb04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cb07 cmp eax, dword ptr [0x110c211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110c211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109cb0d jae 0x1109cb31 */
  if (!C.cf) goto L_1109cb31;
  /* 1109cb0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cb12 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1109cb15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cb18 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1109cb1b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109cb1e mov eax, dword ptr [ecx*4 + 0x110c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110c1fe0)));
  /* 1109cb25 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1109cb2a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1109cb2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109cb2f jne 0x1109cb4c */
  if (!C.zf) goto L_1109cb4c;
L_1109cb31:;
  /* 1109cb31 call 0x1109c280 */
  push32(0x1109cb36u); f_1109c280();
  /* 1109cb36 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1109cb3c call 0x1109c290 */
  push32(0x1109cb41u); f_1109c290();
  /* 1109cb41 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1109cb47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109cb4a jmp 0x1109cb7e */
  goto L_1109cb7e;
L_1109cb4c:;
  /* 1109cb4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cb4f push edx */
  push32((uint32_t)(EDX));
  /* 1109cb50 call 0x1109daa0 */
  push32(0x1109cb55u); f_1109daa0();
  /* 1109cb55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109cb58 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109cb5b push eax */
  push32((uint32_t)(EAX));
  /* 1109cb5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109cb5f push ecx */
  push32((uint32_t)(ECX));
  /* 1109cb60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cb63 push edx */
  push32((uint32_t)(EDX));
  /* 1109cb64 call 0x1109cb90 */
  push32(0x1109cb69u); f_1109cb90();
  /* 1109cb69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109cb6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109cb6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cb72 push eax */
  push32((uint32_t)(EAX));
  /* 1109cb73 call 0x1109db30 */
  push32(0x1109cb78u); f_1109db30();
  /* 1109cb78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109cb7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1109cb7e:;
  /* 1109cb7e mov esp, ebp */
  ESP = (EBP);
  /* 1109cb80 pop ebp */
  EBP = (pop32());
  /* 1109cb81 ret  */
  ESPCHK(0x1109cb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb90 @ 0x1109cb90 (178 bytes, 56 insns) */
void f_1109cb90(void) {
  FTRACE(0x1109cb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109cb90 push ebp */
  push32((uint32_t)(EBP));
  /* 1109cb91 mov ebp, esp */
  EBP = (ESP);
  /* 1109cb93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109cb96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cb99 push eax */
  push32((uint32_t)(EAX));
  /* 1109cb9a call 0x1109d920 */
  push32(0x1109cb9fu); f_1109d920();
  /* 1109cb9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109cba2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1109cba5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109cba9 jne 0x1109cbbe */
  if (!C.zf) goto L_1109cbbe;
  /* 1109cbab call 0x1109c280 */
  push32(0x1109cbb0u); f_1109c280();
  /* 1109cbb0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1109cbb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109cbb9 jmp 0x1109cc3e */
  goto L_1109cc3e;
L_1109cbbe:;
  /* 1109cbbe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109cbc1 push ecx */
  push32((uint32_t)(ECX));
  /* 1109cbc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109cbc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109cbc7 push edx */
  push32((uint32_t)(EDX));
  /* 1109cbc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109cbcb push eax */
  push32((uint32_t)(EAX));
  /* 1109cbcc call dword ptr [0x110c3288] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3288))), 0x1109cbd2u);
  /* 1109cbd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1109cbd5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109cbd9 jne 0x1109cbe6 */
  if (!C.zf) goto L_1109cbe6;
  /* 1109cbdb call dword ptr [0x110c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32e0))), 0x1109cbe1u);
  /* 1109cbe1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109cbe4 jmp 0x1109cbed */
  goto L_1109cbed;
L_1109cbe6:;
  /* 1109cbe6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1109cbed:;
  /* 1109cbed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109cbf1 je 0x1109cc04 */
  if (C.zf) goto L_1109cc04;
  /* 1109cbf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109cbf6 push ecx */
  push32((uint32_t)(ECX));
  /* 1109cbf7 call 0x1109c1e0 */
  push32(0x1109cbfcu); f_1109c1e0();
  /* 1109cbfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109cbff or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109cc02 jmp 0x1109cc3e */
  goto L_1109cc3e;
L_1109cc04:;
  /* 1109cc04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cc07 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1109cc0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cc0d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1109cc10 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109cc13 mov ecx, dword ptr [edx*4 + 0x110c1fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x110c1fe0)));
  /* 1109cc1a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1109cc1e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1109cc21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cc24 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1109cc27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cc2a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1109cc2d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109cc30 mov eax, dword ptr [eax*4 + 0x110c1fe0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x110c1fe0)));
  /* 1109cc37 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1109cc3b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1109cc3e:;
  /* 1109cc3e mov esp, ebp */
  ESP = (EBP);
  /* 1109cc40 pop ebp */
  EBP = (pop32());
  /* 1109cc41 ret  */
  ESPCHK(0x1109cb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc50 @ 0x1109cc50 (130 bytes, 43 insns) */
void f_1109cc50(void) {
  FTRACE(0x1109cc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109cc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1109cc51 mov ebp, esp */
  EBP = (ESP);
  /* 1109cc53 push ecx */
  push32((uint32_t)(ECX));
  /* 1109cc54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cc57 cmp eax, dword ptr [0x110c211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110c211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109cc5d jae 0x1109cc81 */
  if (!C.cf) goto L_1109cc81;
  /* 1109cc5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cc62 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1109cc65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cc68 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1109cc6b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109cc6e mov eax, dword ptr [ecx*4 + 0x110c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110c1fe0)));
  /* 1109cc75 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1109cc7a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1109cc7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109cc7f jne 0x1109cc9c */
  if (!C.zf) goto L_1109cc9c;
L_1109cc81:;
  /* 1109cc81 call 0x1109c280 */
  push32(0x1109cc86u); f_1109c280();
  /* 1109cc86 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1109cc8c call 0x1109c290 */
  push32(0x1109cc91u); f_1109c290();
  /* 1109cc91 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1109cc97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109cc9a jmp 0x1109ccce */
  goto L_1109ccce;
L_1109cc9c:;
  /* 1109cc9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cc9f push edx */
  push32((uint32_t)(EDX));
  /* 1109cca0 call 0x1109daa0 */
  push32(0x1109cca5u); f_1109daa0();
  /* 1109cca5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109cca8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109ccab push eax */
  push32((uint32_t)(EAX));
  /* 1109ccac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109ccaf push ecx */
  push32((uint32_t)(ECX));
  /* 1109ccb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ccb3 push edx */
  push32((uint32_t)(EDX));
  /* 1109ccb4 call 0x1109cce0 */
  push32(0x1109ccb9u); f_1109cce0();
  /* 1109ccb9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ccbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109ccbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ccc2 push eax */
  push32((uint32_t)(EAX));
  /* 1109ccc3 call 0x1109db30 */
  push32(0x1109ccc8u); f_1109db30();
  /* 1109ccc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109cccb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1109ccce:;
  /* 1109ccce mov esp, ebp */
  ESP = (EBP);
  /* 1109ccd0 pop ebp */
  EBP = (pop32());
  /* 1109ccd1 ret  */
  ESPCHK(0x1109cc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cce0 @ 0x1109cce0 (627 bytes, 182 insns) */
void f_1109cce0(void) {
  FTRACE(0x1109cce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109cce0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109cce1 mov ebp, esp */
  EBP = (ESP);
  /* 1109cce3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109cce9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1109ccf0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109ccf3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1109ccf9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ccfd jne 0x1109cd06 */
  if (!C.zf) goto L_1109cd06;
  /* 1109ccff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109cd01 jmp 0x1109cf4f */
  goto L_1109cf4f;
L_1109cd06:;
  /* 1109cd06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cd09 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1109cd0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cd0f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1109cd12 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109cd15 mov eax, dword ptr [ecx*4 + 0x110c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110c1fe0)));
  /* 1109cd1c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1109cd21 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1109cd24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109cd26 je 0x1109cd38 */
  if (C.zf) goto L_1109cd38;
  /* 1109cd28 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109cd2a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109cd2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cd2f push edx */
  push32((uint32_t)(EDX));
  /* 1109cd30 call 0x1109cb90 */
  push32(0x1109cd35u); f_1109cb90();
  /* 1109cd35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109cd38:;
  /* 1109cd38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cd3b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1109cd3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cd41 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1109cd44 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109cd47 mov edx, dword ptr [eax*4 + 0x110c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110c1fe0)));
  /* 1109cd4e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1109cd53 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1109cd58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109cd5a je 0x1109ce6c */
  if (C.zf) goto L_1109ce6c;
  /* 1109cd60 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109cd63 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1109cd66 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1109cd6d:;
  /* 1109cd6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109cd70 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109cd73 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109cd76 jae 0x1109ce6a */
  if (!C.cf) goto L_1109ce6a;
  /* 1109cd7c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1109cd82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1109cd85:;
  /* 1109cd85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109cd88 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1109cd8e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109cd90 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109cd96 jge 0x1109cdf7 */
  if ((C.sf==C.of)) goto L_1109cdf7;
  /* 1109cd98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109cd9b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109cd9e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109cda1 jae 0x1109cdf7 */
  if (!C.cf) goto L_1109cdf7;
  /* 1109cda3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109cda6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1109cda8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1109cdae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109cdb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109cdb4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109cdb7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1109cdbe cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109cdc1 jne 0x1109cde1 */
  if (!C.zf) goto L_1109cde1;
  /* 1109cdc3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1109cdc9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109cdcc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1109cdd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109cdd5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1109cdd8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109cddb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109cdde mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1109cde1:;
  /* 1109cde1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109cde4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1109cdea mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1109cdec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109cdef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109cdf2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109cdf5 jmp 0x1109cd85 */
  goto L_1109cd85;
L_1109cdf7:;
  /* 1109cdf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109cdf9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1109cdff push edx */
  push32((uint32_t)(EDX));
  /* 1109ce00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109ce03 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1109ce09 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109ce0b push eax */
  push32((uint32_t)(EAX));
  /* 1109ce0c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1109ce12 push edx */
  push32((uint32_t)(EDX));
  /* 1109ce13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ce16 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1109ce19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ce1c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1109ce1f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109ce22 mov edx, dword ptr [eax*4 + 0x110c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110c1fe0)));
  /* 1109ce29 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1109ce2c push eax */
  push32((uint32_t)(EAX));
  /* 1109ce2d call dword ptr [0x110c32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32a0))), 0x1109ce33u);
  /* 1109ce33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109ce35 je 0x1109ce5a */
  if (C.zf) goto L_1109ce5a;
  /* 1109ce37 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109ce3a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ce40 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1109ce43 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109ce46 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1109ce4c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109ce4e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ce54 jge 0x1109ce58 */
  if ((C.sf==C.of)) goto L_1109ce58;
  /* 1109ce56 jmp 0x1109ce6a */
  goto L_1109ce6a;
L_1109ce58:;
  /* 1109ce58 jmp 0x1109ce65 */
  goto L_1109ce65;
L_1109ce5a:;
  /* 1109ce5a call dword ptr [0x110c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32e0))), 0x1109ce60u);
  /* 1109ce60 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1109ce63 jmp 0x1109ce6a */
  goto L_1109ce6a;
L_1109ce65:;
  /* 1109ce65 jmp 0x1109cd6d */
  goto L_1109cd6d;
L_1109ce6a:;
  /* 1109ce6a jmp 0x1109cebc */
  goto L_1109cebc;
L_1109ce6c:;
  /* 1109ce6c push 0 */
  push32((uint32_t)(0x0u));
  /* 1109ce6e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1109ce74 push ecx */
  push32((uint32_t)(ECX));
  /* 1109ce75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109ce78 push edx */
  push32((uint32_t)(EDX));
  /* 1109ce79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109ce7c push eax */
  push32((uint32_t)(EAX));
  /* 1109ce7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ce80 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1109ce83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ce86 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1109ce89 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109ce8c mov eax, dword ptr [ecx*4 + 0x110c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110c1fe0)));
  /* 1109ce93 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1109ce96 push ecx */
  push32((uint32_t)(ECX));
  /* 1109ce97 call dword ptr [0x110c32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32a0))), 0x1109ce9du);
  /* 1109ce9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109ce9f je 0x1109ceb3 */
  if (C.zf) goto L_1109ceb3;
  /* 1109cea1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1109cea8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1109ceae mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1109ceb1 jmp 0x1109cebc */
  goto L_1109cebc;
L_1109ceb3:;
  /* 1109ceb3 call dword ptr [0x110c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32e0))), 0x1109ceb9u);
  /* 1109ceb9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1109cebc:;
  /* 1109cebc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109cec0 jne 0x1109cf46 */
  if (!C.zf) goto L_1109cf46;
  /* 1109cec6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ceca je 0x1109cefa */
  if (C.zf) goto L_1109cefa;
  /* 1109cecc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ced0 jne 0x1109cee9 */
  if (!C.zf) goto L_1109cee9;
  /* 1109ced2 call 0x1109c280 */
  push32(0x1109ced7u); f_1109c280();
  /* 1109ced7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1109cedd call 0x1109c290 */
  push32(0x1109cee2u); f_1109c290();
  /* 1109cee2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109cee5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1109cee7 jmp 0x1109cef5 */
  goto L_1109cef5;
L_1109cee9:;
  /* 1109cee9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ceec push edx */
  push32((uint32_t)(EDX));
  /* 1109ceed call 0x1109c1e0 */
  push32(0x1109cef2u); f_1109c1e0();
  /* 1109cef2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109cef5:;
  /* 1109cef5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109cef8 jmp 0x1109cf4f */
  goto L_1109cf4f;
L_1109cefa:;
  /* 1109cefa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cefd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1109cf00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cf03 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1109cf06 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109cf09 mov edx, dword ptr [eax*4 + 0x110c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110c1fe0)));
  /* 1109cf10 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1109cf15 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1109cf18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109cf1a je 0x1109cf2b */
  if (C.zf) goto L_1109cf2b;
  /* 1109cf1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109cf1f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1109cf22 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109cf25 jne 0x1109cf2b */
  if (!C.zf) goto L_1109cf2b;
  /* 1109cf27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109cf29 jmp 0x1109cf4f */
  goto L_1109cf4f;
L_1109cf2b:;
  /* 1109cf2b call 0x1109c280 */
  push32(0x1109cf30u); f_1109c280();
  /* 1109cf30 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1109cf36 call 0x1109c290 */
  push32(0x1109cf3bu); f_1109c290();
  /* 1109cf3b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1109cf41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109cf44 jmp 0x1109cf4f */
  goto L_1109cf4f;
L_1109cf46:;
  /* 1109cf46 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109cf49 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1109cf4f:;
  /* 1109cf4f mov esp, ebp */
  ESP = (EBP);
  /* 1109cf51 pop ebp */
  EBP = (pop32());
  /* 1109cf52 ret  */
  ESPCHK(0x1109cce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf60 @ 0x1109cf60 (199 bytes, 68 insns) */
void f_1109cf60(void) {
  FTRACE(0x1109cf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109cf60 push ebp */
  push32((uint32_t)(EBP));
  /* 1109cf61 mov ebp, esp */
  EBP = (ESP);
  /* 1109cf63 push ecx */
  push32((uint32_t)(ECX));
  /* 1109cf64 push ebx */
  push32((uint32_t)(EBX));
  /* 1109cf65 push esi */
  push32((uint32_t)(ESI));
  /* 1109cf66 push edi */
  push32((uint32_t)(EDI));
L_1109cf67:;
  /* 1109cf67 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109cf6b jne 0x1109cf8b */
  if (!C.zf) goto L_1109cf8b;
  /* 1109cf6d push 0x110bc24c */
  push32((uint32_t)(0x110bc24cu));
  /* 1109cf72 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109cf74 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1109cf76 push 0x110bc318 */
  push32((uint32_t)(0x110bc318u));
  /* 1109cf7b push 2 */
  push32((uint32_t)(0x2u));
  /* 1109cf7d call 0x11093470 */
  push32(0x1109cf82u); f_11093470();
  /* 1109cf82 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109cf85 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109cf88 jne 0x1109cf8b */
  if (!C.zf) goto L_1109cf8b;
  /* 1109cf8a int3  */
  x86_unimpl("int3 @ 0x1109cf8a");
L_1109cf8b:;
  /* 1109cf8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109cf8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109cf8f jne 0x1109cf67 */
  if (!C.zf) goto L_1109cf67;
  /* 1109cf91 mov ecx, dword ptr [0x110c081c] */
  ECX = (r32((uint32_t)(0x110c081c)));
  /* 1109cf97 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109cf9a mov dword ptr [0x110c081c], ecx */
  w32((uint32_t)(0x110c081c), (ECX));
  /* 1109cfa0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109cfa3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1109cfa6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1109cfa8 push 0x110bc318 */
  push32((uint32_t)(0x110bc318u));
  /* 1109cfad push 2 */
  push32((uint32_t)(0x2u));
  /* 1109cfaf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1109cfb4 call 0x110943b0 */
  push32(0x1109cfb9u); f_110943b0();
  /* 1109cfb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109cfbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109cfbf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1109cfc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109cfc5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109cfc9 je 0x1109cfe6 */
  if (C.zf) goto L_1109cfe6;
  /* 1109cfcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109cfce mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1109cfd1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1109cfd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109cfd7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1109cfda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109cfdd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1109cfe4 jmp 0x1109d00b */
  goto L_1109d00b;
L_1109cfe6:;
  /* 1109cfe6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109cfe9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1109cfec or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1109cfef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109cff2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1109cff5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109cff8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109cffb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109cffe mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1109d001 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d004 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1109d00b:;
  /* 1109d00b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d00e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d011 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1109d014 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1109d016 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d019 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1109d020 pop edi */
  EDI = (pop32());
  /* 1109d021 pop esi */
  ESI = (pop32());
  /* 1109d022 pop ebx */
  EBX = (pop32());
  /* 1109d023 mov esp, ebp */
  ESP = (EBP);
  /* 1109d025 pop ebp */
  EBP = (pop32());
  /* 1109d026 ret  */
  ESPCHK(0x1109cf60u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1109d030 (50 bytes, 17 insns) */
void f_1109d030(void) {
  FTRACE(0x1109d030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109d030 push ebp */
  push32((uint32_t)(EBP));
  /* 1109d031 mov ebp, esp */
  EBP = (ESP);
  /* 1109d033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d036 cmp eax, dword ptr [0x110c211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110c211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d03c jb 0x1109d042 */
  if (C.cf) goto L_1109d042;
  /* 1109d03e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109d040 jmp 0x1109d060 */
  goto L_1109d060;
L_1109d042:;
  /* 1109d042 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d045 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1109d048 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d04b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1109d04e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109d051 mov eax, dword ptr [ecx*4 + 0x110c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110c1fe0)));
  /* 1109d058 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1109d05d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1109d060:;
  /* 1109d060 pop ebp */
  EBP = (pop32());
  /* 1109d061 ret  */
  ESPCHK(0x1109d030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d070 @ 0x1109d070 (300 bytes, 80 insns) */
void f_1109d070(void) {
  FTRACE(0x1109d070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109d070 push ebp */
  push32((uint32_t)(EBP));
  /* 1109d071 mov ebp, esp */
  EBP = (ESP);
  /* 1109d073 push ecx */
  push32((uint32_t)(ECX));
  /* 1109d074 cmp dword ptr [0x110c1ce0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c1ce0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d07b jne 0x1109d089 */
  if (!C.zf) goto L_1109d089;
  /* 1109d07d mov dword ptr [0x110c1ce0], 0x200 */
  w32((uint32_t)(0x110c1ce0), (0x200u));
  /* 1109d087 jmp 0x1109d09c */
  goto L_1109d09c;
L_1109d089:;
  /* 1109d089 cmp dword ptr [0x110c1ce0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x110c1ce0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d090 jge 0x1109d09c */
  if ((C.sf==C.of)) goto L_1109d09c;
  /* 1109d092 mov dword ptr [0x110c1ce0], 0x14 */
  w32((uint32_t)(0x110c1ce0), (0x14u));
L_1109d09c:;
  /* 1109d09c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1109d0a1 push 0x110bc324 */
  push32((uint32_t)(0x110bc324u));
  /* 1109d0a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109d0a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1109d0aa mov eax, dword ptr [0x110c1ce0] */
  EAX = (r32((uint32_t)(0x110c1ce0)));
  /* 1109d0af push eax */
  push32((uint32_t)(EAX));
  /* 1109d0b0 call 0x110947c0 */
  push32(0x1109d0b5u); f_110947c0();
  /* 1109d0b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d0b8 mov dword ptr [0x110c0990], eax */
  w32((uint32_t)(0x110c0990), (EAX));
  /* 1109d0bd cmp dword ptr [0x110c0990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d0c4 jne 0x1109d105 */
  if (!C.zf) goto L_1109d105;
  /* 1109d0c6 mov dword ptr [0x110c1ce0], 0x14 */
  w32((uint32_t)(0x110c1ce0), (0x14u));
  /* 1109d0d0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1109d0d5 push 0x110bc324 */
  push32((uint32_t)(0x110bc324u));
  /* 1109d0da push 2 */
  push32((uint32_t)(0x2u));
  /* 1109d0dc push 4 */
  push32((uint32_t)(0x4u));
  /* 1109d0de mov ecx, dword ptr [0x110c1ce0] */
  ECX = (r32((uint32_t)(0x110c1ce0)));
  /* 1109d0e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1109d0e5 call 0x110947c0 */
  push32(0x1109d0eau); f_110947c0();
  /* 1109d0ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d0ed mov dword ptr [0x110c0990], eax */
  w32((uint32_t)(0x110c0990), (EAX));
  /* 1109d0f2 cmp dword ptr [0x110c0990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d0f9 jne 0x1109d105 */
  if (!C.zf) goto L_1109d105;
  /* 1109d0fb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1109d0fd call 0x11093320 */
  push32(0x1109d102u); f_11093320();
  /* 1109d102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109d105:;
  /* 1109d105 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1109d10c jmp 0x1109d117 */
  goto L_1109d117;
L_1109d10e:;
  /* 1109d10e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d111 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d114 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1109d117:;
  /* 1109d117 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d11b jge 0x1109d136 */
  if ((C.sf==C.of)) goto L_1109d136;
  /* 1109d11d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d120 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1109d123 add eax, 0x110bf120 */
  { uint32_t _a=(EAX),_b=(0x110bf120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d128 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d12b mov edx, dword ptr [0x110c0990] */
  EDX = (r32((uint32_t)(0x110c0990)));
  /* 1109d131 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1109d134 jmp 0x1109d10e */
  goto L_1109d10e;
L_1109d136:;
  /* 1109d136 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1109d13d jmp 0x1109d148 */
  goto L_1109d148;
L_1109d13f:;
  /* 1109d13f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d142 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d145 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1109d148:;
  /* 1109d148 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d14c jge 0x1109d198 */
  if ((C.sf==C.of)) goto L_1109d198;
  /* 1109d14e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d151 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1109d154 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d157 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1109d15a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109d15d mov eax, dword ptr [ecx*4 + 0x110c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110c1fe0)));
  /* 1109d164 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d168 je 0x1109d186 */
  if (C.zf) goto L_1109d186;
  /* 1109d16a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d16d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1109d170 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d173 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1109d176 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109d179 mov eax, dword ptr [ecx*4 + 0x110c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110c1fe0)));
  /* 1109d180 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d184 jne 0x1109d196 */
  if (!C.zf) goto L_1109d196;
L_1109d186:;
  /* 1109d186 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d189 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1109d18c mov dword ptr [ecx + 0x110bf130], 0xffffffff */
  w32((uint32_t)(ECX + 0x110bf130), (0xffffffffu));
L_1109d196:;
  /* 1109d196 jmp 0x1109d13f */
  goto L_1109d13f;
L_1109d198:;
  /* 1109d198 mov esp, ebp */
  ESP = (EBP);
  /* 1109d19a pop ebp */
  EBP = (pop32());
  /* 1109d19b ret  */
  ESPCHK(0x1109d070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1a0 @ 0x1109d1a0 (26 bytes, 9 insns) */
void f_1109d1a0(void) {
  FTRACE(0x1109d1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109d1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109d1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1109d1a3 call 0x1109dda0 */
  push32(0x1109d1a8u); f_1109dda0();
  /* 1109d1a8 movsx eax, byte ptr [0x110c0634] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x110c0634))));
  /* 1109d1af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109d1b1 je 0x1109d1b8 */
  if (C.zf) goto L_1109d1b8;
  /* 1109d1b3 call 0x1109db60 */
  push32(0x1109d1b8u); f_1109db60();
L_1109d1b8:;
  /* 1109d1b8 pop ebp */
  EBP = (pop32());
  /* 1109d1b9 ret  */
  ESPCHK(0x1109d1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1c0 @ 0x1109d1c0 (61 bytes, 20 insns) */
void f_1109d1c0(void) {
  FTRACE(0x1109d1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109d1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109d1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1109d1c3 cmp dword ptr [ebp + 8], 0x110bf120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x110bf120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d1ca jb 0x1109d1ee */
  if (C.cf) goto L_1109d1ee;
  /* 1109d1cc cmp dword ptr [ebp + 8], 0x110bf380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x110bf380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d1d3 ja 0x1109d1ee */
  if ((!C.cf&&!C.zf)) goto L_1109d1ee;
  /* 1109d1d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d1d8 sub eax, 0x110bf120 */
  { uint32_t _a=(EAX),_b=(0x110bf120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109d1dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1109d1e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d1e3 push eax */
  push32((uint32_t)(EAX));
  /* 1109d1e4 call 0x11097db0 */
  push32(0x1109d1e9u); f_11097db0();
  /* 1109d1e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d1ec jmp 0x1109d1fb */
  goto L_1109d1fb;
L_1109d1ee:;
  /* 1109d1ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d1f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d1f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1109d1f5 call dword ptr [0x110c32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32f8))), 0x1109d1fbu);
L_1109d1fb:;
  /* 1109d1fb pop ebp */
  EBP = (pop32());
  /* 1109d1fc ret  */
  ESPCHK(0x1109d1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d200 @ 0x1109d200 (41 bytes, 16 insns) */
void f_1109d200(void) {
  FTRACE(0x1109d200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109d200 push ebp */
  push32((uint32_t)(EBP));
  /* 1109d201 mov ebp, esp */
  EBP = (ESP);
  /* 1109d203 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d207 jge 0x1109d21a */
  if ((C.sf==C.of)) goto L_1109d21a;
  /* 1109d209 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d20c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d20f push eax */
  push32((uint32_t)(EAX));
  /* 1109d210 call 0x11097db0 */
  push32(0x1109d215u); f_11097db0();
  /* 1109d215 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d218 jmp 0x1109d227 */
  goto L_1109d227;
L_1109d21a:;
  /* 1109d21a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109d21d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d220 push ecx */
  push32((uint32_t)(ECX));
  /* 1109d221 call dword ptr [0x110c32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32f8))), 0x1109d227u);
L_1109d227:;
  /* 1109d227 pop ebp */
  EBP = (pop32());
  /* 1109d228 ret  */
  ESPCHK(0x1109d200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d230 @ 0x1109d230 (61 bytes, 20 insns) */
void f_1109d230(void) {
  FTRACE(0x1109d230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109d230 push ebp */
  push32((uint32_t)(EBP));
  /* 1109d231 mov ebp, esp */
  EBP = (ESP);
  /* 1109d233 cmp dword ptr [ebp + 8], 0x110bf120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x110bf120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d23a jb 0x1109d25e */
  if (C.cf) goto L_1109d25e;
  /* 1109d23c cmp dword ptr [ebp + 8], 0x110bf380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x110bf380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d243 ja 0x1109d25e */
  if ((!C.cf&&!C.zf)) goto L_1109d25e;
  /* 1109d245 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d248 sub eax, 0x110bf120 */
  { uint32_t _a=(EAX),_b=(0x110bf120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109d24d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1109d250 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d253 push eax */
  push32((uint32_t)(EAX));
  /* 1109d254 call 0x11097e50 */
  push32(0x1109d259u); f_11097e50();
  /* 1109d259 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d25c jmp 0x1109d26b */
  goto L_1109d26b;
L_1109d25e:;
  /* 1109d25e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d261 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d264 push ecx */
  push32((uint32_t)(ECX));
  /* 1109d265 call dword ptr [0x110c32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32fc))), 0x1109d26bu);
L_1109d26b:;
  /* 1109d26b pop ebp */
  EBP = (pop32());
  /* 1109d26c ret  */
  ESPCHK(0x1109d230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d270 @ 0x1109d270 (41 bytes, 16 insns) */
void f_1109d270(void) {
  FTRACE(0x1109d270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109d270 push ebp */
  push32((uint32_t)(EBP));
  /* 1109d271 mov ebp, esp */
  EBP = (ESP);
  /* 1109d273 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d277 jge 0x1109d28a */
  if ((C.sf==C.of)) goto L_1109d28a;
  /* 1109d279 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d27c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d27f push eax */
  push32((uint32_t)(EAX));
  /* 1109d280 call 0x11097e50 */
  push32(0x1109d285u); f_11097e50();
  /* 1109d285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d288 jmp 0x1109d297 */
  goto L_1109d297;
L_1109d28a:;
  /* 1109d28a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109d28d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d290 push ecx */
  push32((uint32_t)(ECX));
  /* 1109d291 call dword ptr [0x110c32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32fc))), 0x1109d297u);
L_1109d297:;
  /* 1109d297 pop ebp */
  EBP = (pop32());
  /* 1109d298 ret  */
  ESPCHK(0x1109d270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2a0 @ 0x1109d2a0 (119 bytes, 34 insns) */
void f_1109d2a0(void) {
  FTRACE(0x1109d2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109d2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109d2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1109d2a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109d2a6 push 0x110c098c */
  push32((uint32_t)(0x110c098cu));
  /* 1109d2ab call dword ptr [0x110c32b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32b4))), 0x1109d2b1u);
  /* 1109d2b1 cmp dword ptr [0x110c097c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c097c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d2b8 je 0x1109d2d8 */
  if (C.zf) goto L_1109d2d8;
  /* 1109d2ba push 0x110c098c */
  push32((uint32_t)(0x110c098cu));
  /* 1109d2bf call dword ptr [0x110c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32a4))), 0x1109d2c5u);
  /* 1109d2c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1109d2c7 call 0x11097db0 */
  push32(0x1109d2ccu); f_11097db0();
  /* 1109d2cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d2cf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1109d2d6 jmp 0x1109d2df */
  goto L_1109d2df;
L_1109d2d8:;
  /* 1109d2d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1109d2df:;
  /* 1109d2df mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1109d2e3 push eax */
  push32((uint32_t)(EAX));
  /* 1109d2e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d2e7 push ecx */
  push32((uint32_t)(ECX));
  /* 1109d2e8 call 0x1109d320 */
  push32(0x1109d2edu); f_1109d320();
  /* 1109d2ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d2f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1109d2f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d2f7 je 0x1109d305 */
  if (C.zf) goto L_1109d305;
  /* 1109d2f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1109d2fb call 0x11097e50 */
  push32(0x1109d300u); f_11097e50();
  /* 1109d300 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d303 jmp 0x1109d310 */
  goto L_1109d310;
L_1109d305:;
  /* 1109d305 push 0x110c098c */
  push32((uint32_t)(0x110c098cu));
  /* 1109d30a call dword ptr [0x110c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32a4))), 0x1109d310u);
L_1109d310:;
  /* 1109d310 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109d313 mov esp, ebp */
  ESP = (EBP);
  /* 1109d315 pop ebp */
  EBP = (pop32());
  /* 1109d316 ret  */
  ESPCHK(0x1109d2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d320 @ 0x1109d320 (160 bytes, 50 insns) */
void f_1109d320(void) {
  FTRACE(0x1109d320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109d320 push ebp */
  push32((uint32_t)(EBP));
  /* 1109d321 mov ebp, esp */
  EBP = (ESP);
  /* 1109d323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109d326 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d32a jne 0x1109d333 */
  if (!C.zf) goto L_1109d333;
  /* 1109d32c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109d32e jmp 0x1109d3bc */
  goto L_1109d3bc;
L_1109d333:;
  /* 1109d333 cmp dword ptr [0x110c0800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d33a jne 0x1109d36a */
  if (!C.zf) goto L_1109d36a;
  /* 1109d33c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109d33f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109d344 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d349 jle 0x1109d35b */
  if ((C.zf||C.sf!=C.of)) goto L_1109d35b;
  /* 1109d34b call 0x1109c280 */
  push32(0x1109d350u); f_1109c280();
  /* 1109d350 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1109d356 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109d359 jmp 0x1109d3bc */
  goto L_1109d3bc;
L_1109d35b:;
  /* 1109d35b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d35e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1109d361 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1109d363 mov eax, 1 */
  EAX = (0x1u);
  /* 1109d368 jmp 0x1109d3bc */
  goto L_1109d3bc;
L_1109d36a:;
  /* 1109d36a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1109d371 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1109d374 push eax */
  push32((uint32_t)(EAX));
  /* 1109d375 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109d377 mov ecx, dword ptr [0x110beea4] */
  ECX = (r32((uint32_t)(0x110beea4)));
  /* 1109d37d push ecx */
  push32((uint32_t)(ECX));
  /* 1109d37e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d381 push edx */
  push32((uint32_t)(EDX));
  /* 1109d382 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109d384 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1109d387 push eax */
  push32((uint32_t)(EAX));
  /* 1109d388 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1109d38d mov ecx, dword ptr [0x110c0810] */
  ECX = (r32((uint32_t)(0x110c0810)));
  /* 1109d393 push ecx */
  push32((uint32_t)(ECX));
  /* 1109d394 call dword ptr [0x110c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c330c))), 0x1109d39au);
  /* 1109d39a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109d39d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d3a1 je 0x1109d3a9 */
  if (C.zf) goto L_1109d3a9;
  /* 1109d3a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d3a7 je 0x1109d3b9 */
  if (C.zf) goto L_1109d3b9;
L_1109d3a9:;
  /* 1109d3a9 call 0x1109c280 */
  push32(0x1109d3aeu); f_1109c280();
  /* 1109d3ae mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1109d3b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109d3b7 jmp 0x1109d3bc */
  goto L_1109d3bc;
L_1109d3b9:;
  /* 1109d3b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1109d3bc:;
  /* 1109d3bc mov esp, ebp */
  ESP = (EBP);
  /* 1109d3be pop ebp */
  EBP = (pop32());
  /* 1109d3bf ret  */
  ESPCHK(0x1109d320u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1109d3c0 (32 bytes, 18 insns) */
void f_1109d3c0(void) {
  FTRACE(0x1109d3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109d3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109d3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1109d3c3 push ebx */
  push32((uint32_t)(EBX));
  /* 1109d3c4 push esi */
  push32((uint32_t)(ESI));
  /* 1109d3c5 push edi */
  push32((uint32_t)(EDI));
  /* 1109d3c6 push ebp */
  push32((uint32_t)(EBP));
  /* 1109d3c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109d3c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109d3cb push 0x1109d3d8 */
  push32((uint32_t)(0x1109d3d8u));
  /* 1109d3d0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1109d3d3 call 0x110a4b0c */
  push32(0x1109d3d8u); f_110a4b0c();
  /* 1109d3d8 pop ebp */
  EBP = (pop32());
  /* 1109d3d9 pop edi */
  EDI = (pop32());
  /* 1109d3da pop esi */
  ESI = (pop32());
  /* 1109d3db pop ebx */
  EBX = (pop32());
  /* 1109d3dc mov esp, ebp */
  ESP = (EBP);
  /* 1109d3de pop ebp */
  EBP = (pop32());
  /* 1109d3df ret  */
  ESPCHK(0x1109d3c0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1109d402 (104 bytes, 33 insns) */
void f_1109d402(void) {
  FTRACE(0x1109d402u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109d402 push ebx */
  push32((uint32_t)(EBX));
  /* 1109d403 push esi */
  push32((uint32_t)(ESI));
  /* 1109d404 push edi */
  push32((uint32_t)(EDI));
  /* 1109d405 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1109d409 push eax */
  push32((uint32_t)(EAX));
  /* 1109d40a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1109d40c push 0x1109d3e0 */
  push32((uint32_t)(0x1109d3e0u));
  /* 1109d411 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1109d418 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1109d41f:;
  /* 1109d41f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1109d423 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1109d426 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1109d429 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d42c je 0x1109d45c */
  if (C.zf) goto L_1109d45c;
  /* 1109d42e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d432 je 0x1109d45c */
  if (C.zf) goto L_1109d45c;
  /* 1109d434 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1109d437 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1109d43a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1109d43e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1109d441 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d446 jne 0x1109d45a */
  if (!C.zf) goto L_1109d45a;
  /* 1109d448 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1109d44d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1109d451 call 0x1109d496 */
  push32(0x1109d456u); f_1109d496();
  /* 1109d456 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1109d45au);
L_1109d45a:;
  /* 1109d45a jmp 0x1109d41f */
  goto L_1109d41f;
L_1109d45c:;
  /* 1109d45c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1109d463 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d466 pop edi */
  EDI = (pop32());
  /* 1109d467 pop esi */
  ESI = (pop32());
  /* 1109d468 pop ebx */
  EBX = (pop32());
  /* 1109d469 ret  */
  ESPCHK(0x1109d402u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d496 @ 0x1109d496 (24 bytes, 10 insns) */
void f_1109d496(void) {
  FTRACE(0x1109d496u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109d496 push ebx */
  push32((uint32_t)(EBX));
  /* 1109d497 push ecx */
  push32((uint32_t)(ECX));
  /* 1109d498 mov ebx, 0x110bf3b8 */
  EBX = (0x110bf3b8u);
  /* 1109d49d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d4a0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1109d4a3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1109d4a6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1109d4a9 pop ecx */
  ECX = (pop32());
  /* 1109d4aa pop ebx */
  EBX = (pop32());
  /* 1109d4ab ret 4 */
  ESPCHK(0x1109d496u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d575 @ 0x1109d575 (27 bytes, 11 insns) */
void f_1109d575(void) {
  FTRACE(0x1109d575u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109d575 push ebp */
  push32((uint32_t)(EBP));
  /* 1109d576 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1109d57a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1109d57c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1109d57f push eax */
  push32((uint32_t)(EAX));
  /* 1109d580 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1109d583 push eax */
  push32((uint32_t)(EAX));
  /* 1109d584 call 0x1109d402 */
  push32(0x1109d589u); f_1109d402();
  /* 1109d589 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d58c pop ebp */
  EBP = (pop32());
  /* 1109d58d ret 4 */
  ESPCHK(0x1109d575u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d590 @ 0x1109d590 (482 bytes, 138 insns) */
void f_1109d590(void) {
  FTRACE(0x1109d590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109d590 push ebp */
  push32((uint32_t)(EBP));
  /* 1109d591 mov ebp, esp */
  EBP = (ESP);
  /* 1109d593 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109d596 push esi */
  push32((uint32_t)(ESI));
  /* 1109d597 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1109d59e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1109d5a0 call 0x11097db0 */
  push32(0x1109d5a5u); f_11097db0();
  /* 1109d5a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d5a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1109d5af jmp 0x1109d5ba */
  goto L_1109d5ba;
L_1109d5b1:;
  /* 1109d5b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109d5b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d5b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1109d5ba:;
  /* 1109d5ba cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d5be jge 0x1109d760 */
  if ((C.sf==C.of)) goto L_1109d760;
  /* 1109d5c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109d5c7 cmp dword ptr [ecx*4 + 0x110c1fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x110c1fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d5cf je 0x1109d6c6 */
  if (C.zf) goto L_1109d6c6;
  /* 1109d5d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109d5d8 mov eax, dword ptr [edx*4 + 0x110c1fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x110c1fe0)));
  /* 1109d5df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109d5e2 jmp 0x1109d5ed */
  goto L_1109d5ed;
L_1109d5e4:;
  /* 1109d5e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d5e7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d5ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1109d5ed:;
  /* 1109d5ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109d5f0 mov eax, dword ptr [edx*4 + 0x110c1fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x110c1fe0)));
  /* 1109d5f7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d5fc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d5ff jae 0x1109d6b6 */
  if (!C.cf) goto L_1109d6b6;
  /* 1109d605 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d608 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1109d60c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1109d60f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109d611 jne 0x1109d6b1 */
  if (!C.zf) goto L_1109d6b1;
  /* 1109d617 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d61a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d61e jne 0x1109d659 */
  if (!C.zf) goto L_1109d659;
  /* 1109d620 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1109d622 call 0x11097db0 */
  push32(0x1109d627u); f_11097db0();
  /* 1109d627 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d62a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d62d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d631 jne 0x1109d64f */
  if (!C.zf) goto L_1109d64f;
  /* 1109d633 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d636 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d639 push edx */
  push32((uint32_t)(EDX));
  /* 1109d63a call dword ptr [0x110c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c332c))), 0x1109d640u);
  /* 1109d640 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d643 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1109d646 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d649 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d64c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1109d64f:;
  /* 1109d64f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1109d651 call 0x11097e50 */
  push32(0x1109d656u); f_11097e50();
  /* 1109d656 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109d659:;
  /* 1109d659 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d65c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d65f push eax */
  push32((uint32_t)(EAX));
  /* 1109d660 call dword ptr [0x110c32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32f8))), 0x1109d666u);
  /* 1109d666 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d669 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1109d66d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1109d670 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109d672 je 0x1109d686 */
  if (C.zf) goto L_1109d686;
  /* 1109d674 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d677 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d67a push eax */
  push32((uint32_t)(EAX));
  /* 1109d67b call dword ptr [0x110c32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32fc))), 0x1109d681u);
  /* 1109d681 jmp 0x1109d5e4 */
  goto L_1109d5e4;
L_1109d686:;
  /* 1109d686 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d689 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1109d68f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109d692 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1109d695 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109d698 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d69b sub eax, dword ptr [edx*4 + 0x110c1fe0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x110c1fe0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109d6a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1109d6a3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1109d6a8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1109d6aa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d6ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109d6af jmp 0x1109d6b6 */
  goto L_1109d6b6;
L_1109d6b1:;
  /* 1109d6b1 jmp 0x1109d5e4 */
  goto L_1109d5e4;
L_1109d6b6:;
  /* 1109d6b6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d6ba je 0x1109d6c1 */
  if (C.zf) goto L_1109d6c1;
  /* 1109d6bc jmp 0x1109d760 */
  goto L_1109d760;
L_1109d6c1:;
  /* 1109d6c1 jmp 0x1109d75b */
  goto L_1109d75b;
L_1109d6c6:;
  /* 1109d6c6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1109d6c8 push 0x110bc32c */
  push32((uint32_t)(0x110bc32cu));
  /* 1109d6cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1109d6cf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1109d6d4 call 0x110943b0 */
  push32(0x1109d6d9u); f_110943b0();
  /* 1109d6d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d6dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109d6df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d6e3 je 0x1109d759 */
  if (C.zf) goto L_1109d759;
  /* 1109d6e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109d6e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d6eb mov dword ptr [eax*4 + 0x110c1fe0], ecx */
  w32((uint32_t)(EAX*4 + 0x110c1fe0), (ECX));
  /* 1109d6f2 mov edx, dword ptr [0x110c211c] */
  EDX = (r32((uint32_t)(0x110c211c)));
  /* 1109d6f8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d6fb mov dword ptr [0x110c211c], edx */
  w32((uint32_t)(0x110c211c), (EDX));
  /* 1109d701 jmp 0x1109d70c */
  goto L_1109d70c;
L_1109d703:;
  /* 1109d703 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d706 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d709 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1109d70c:;
  /* 1109d70c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109d70f mov edx, dword ptr [ecx*4 + 0x110c1fe0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x110c1fe0)));
  /* 1109d716 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d71c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d71f jae 0x1109d744 */
  if (!C.cf) goto L_1109d744;
  /* 1109d721 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d724 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1109d728 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d72b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1109d731 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d734 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1109d738 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109d73b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1109d742 jmp 0x1109d703 */
  goto L_1109d703;
L_1109d744:;
  /* 1109d744 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109d747 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1109d74a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109d74d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109d750 push edx */
  push32((uint32_t)(EDX));
  /* 1109d751 call 0x1109daa0 */
  push32(0x1109d756u); f_1109daa0();
  /* 1109d756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109d759:;
  /* 1109d759 jmp 0x1109d760 */
  goto L_1109d760;
L_1109d75b:;
  /* 1109d75b jmp 0x1109d5b1 */
  goto L_1109d5b1;
L_1109d760:;
  /* 1109d760 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1109d762 call 0x11097e50 */
  push32(0x1109d767u); f_11097e50();
  /* 1109d767 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d76a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109d76d pop esi */
  ESI = (pop32());
  /* 1109d76e mov esp, ebp */
  ESP = (EBP);
  /* 1109d770 pop ebp */
  EBP = (pop32());
  /* 1109d771 ret  */
  ESPCHK(0x1109d590u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1109d780 (183 bytes, 57 insns) */
void f_1109d780(void) {
  FTRACE(0x1109d780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109d780 push ebp */
  push32((uint32_t)(EBP));
  /* 1109d781 mov ebp, esp */
  EBP = (ESP);
  /* 1109d783 push ecx */
  push32((uint32_t)(ECX));
  /* 1109d784 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d787 cmp eax, dword ptr [0x110c211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110c211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d78d jae 0x1109d81a */
  if (!C.cf) goto L_1109d81a;
  /* 1109d793 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d796 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1109d799 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d79c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1109d79f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109d7a2 mov eax, dword ptr [ecx*4 + 0x110c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110c1fe0)));
  /* 1109d7a9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d7ad jne 0x1109d81a */
  if (!C.zf) goto L_1109d81a;
  /* 1109d7af cmp dword ptr [0x110c05f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110c05f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d7b6 jne 0x1109d7fa */
  if (!C.zf) goto L_1109d7fa;
  /* 1109d7b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d7bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1109d7be cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d7c2 je 0x1109d7d2 */
  if (C.zf) goto L_1109d7d2;
  /* 1109d7c4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d7c8 je 0x1109d7e0 */
  if (C.zf) goto L_1109d7e0;
  /* 1109d7ca cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d7ce je 0x1109d7ee */
  if (C.zf) goto L_1109d7ee;
  /* 1109d7d0 jmp 0x1109d7fa */
  goto L_1109d7fa;
L_1109d7d2:;
  /* 1109d7d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109d7d5 push edx */
  push32((uint32_t)(EDX));
  /* 1109d7d6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1109d7d8 call dword ptr [0x110c328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c328c))), 0x1109d7deu);
  /* 1109d7de jmp 0x1109d7fa */
  goto L_1109d7fa;
L_1109d7e0:;
  /* 1109d7e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109d7e3 push eax */
  push32((uint32_t)(EAX));
  /* 1109d7e4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1109d7e6 call dword ptr [0x110c328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c328c))), 0x1109d7ecu);
  /* 1109d7ec jmp 0x1109d7fa */
  goto L_1109d7fa;
L_1109d7ee:;
  /* 1109d7ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109d7f1 push ecx */
  push32((uint32_t)(ECX));
  /* 1109d7f2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1109d7f4 call dword ptr [0x110c328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c328c))), 0x1109d7fau);
L_1109d7fa:;
  /* 1109d7fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d7fd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1109d800 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d803 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1109d806 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109d809 mov ecx, dword ptr [edx*4 + 0x110c1fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x110c1fe0)));
  /* 1109d810 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109d813 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1109d816 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109d818 jmp 0x1109d833 */
  goto L_1109d833;
L_1109d81a:;
  /* 1109d81a call 0x1109c280 */
  push32(0x1109d81fu); f_1109c280();
  /* 1109d81f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1109d825 call 0x1109c290 */
  push32(0x1109d82au); f_1109c290();
  /* 1109d82a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1109d830 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1109d833:;
  /* 1109d833 mov esp, ebp */
  ESP = (EBP);
  /* 1109d835 pop ebp */
  EBP = (pop32());
  /* 1109d836 ret  */
  ESPCHK(0x1109d780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d840 @ 0x1109d840 (216 bytes, 63 insns) */
void f_1109d840(void) {
  FTRACE(0x1109d840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109d840 push ebp */
  push32((uint32_t)(EBP));
  /* 1109d841 mov ebp, esp */
  EBP = (ESP);
  /* 1109d843 push ecx */
  push32((uint32_t)(ECX));
  /* 1109d844 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d847 cmp eax, dword ptr [0x110c211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110c211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d84d jae 0x1109d8fb */
  if (!C.cf) goto L_1109d8fb;
  /* 1109d853 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d856 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1109d859 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d85c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1109d85f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109d862 mov eax, dword ptr [ecx*4 + 0x110c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110c1fe0)));
  /* 1109d869 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1109d86e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1109d871 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109d873 je 0x1109d8fb */
  if (C.zf) goto L_1109d8fb;
  /* 1109d879 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d87c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1109d87f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d882 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1109d885 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109d888 mov ecx, dword ptr [edx*4 + 0x110c1fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x110c1fe0)));
  /* 1109d88f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d893 je 0x1109d8fb */
  if (C.zf) goto L_1109d8fb;
  /* 1109d895 cmp dword ptr [0x110c05f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110c05f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d89c jne 0x1109d8da */
  if (!C.zf) goto L_1109d8da;
  /* 1109d89e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d8a1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1109d8a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d8a8 je 0x1109d8b8 */
  if (C.zf) goto L_1109d8b8;
  /* 1109d8aa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d8ae je 0x1109d8c4 */
  if (C.zf) goto L_1109d8c4;
  /* 1109d8b0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d8b4 je 0x1109d8d0 */
  if (C.zf) goto L_1109d8d0;
  /* 1109d8b6 jmp 0x1109d8da */
  goto L_1109d8da;
L_1109d8b8:;
  /* 1109d8b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109d8ba push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1109d8bc call dword ptr [0x110c328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c328c))), 0x1109d8c2u);
  /* 1109d8c2 jmp 0x1109d8da */
  goto L_1109d8da;
L_1109d8c4:;
  /* 1109d8c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109d8c6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1109d8c8 call dword ptr [0x110c328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c328c))), 0x1109d8ceu);
  /* 1109d8ce jmp 0x1109d8da */
  goto L_1109d8da;
L_1109d8d0:;
  /* 1109d8d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109d8d2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1109d8d4 call dword ptr [0x110c328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c328c))), 0x1109d8dau);
L_1109d8da:;
  /* 1109d8da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d8dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1109d8e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d8e3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1109d8e6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109d8e9 mov edx, dword ptr [eax*4 + 0x110c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110c1fe0)));
  /* 1109d8f0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1109d8f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109d8f9 jmp 0x1109d914 */
  goto L_1109d914;
L_1109d8fb:;
  /* 1109d8fb call 0x1109c280 */
  push32(0x1109d900u); f_1109c280();
  /* 1109d900 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1109d906 call 0x1109c290 */
  push32(0x1109d90bu); f_1109c290();
  /* 1109d90b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1109d911 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1109d914:;
  /* 1109d914 mov esp, ebp */
  ESP = (EBP);
  /* 1109d916 pop ebp */
  EBP = (pop32());
  /* 1109d917 ret  */
  ESPCHK(0x1109d840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d920 @ 0x1109d920 (102 bytes, 30 insns) */
void f_1109d920(void) {
  FTRACE(0x1109d920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109d920 push ebp */
  push32((uint32_t)(EBP));
  /* 1109d921 mov ebp, esp */
  EBP = (ESP);
  /* 1109d923 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d926 cmp eax, dword ptr [0x110c211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110c211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d92c jae 0x1109d96b */
  if (!C.cf) goto L_1109d96b;
  /* 1109d92e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d931 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1109d934 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d937 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1109d93a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109d93d mov eax, dword ptr [ecx*4 + 0x110c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110c1fe0)));
  /* 1109d944 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1109d949 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1109d94c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109d94e je 0x1109d96b */
  if (C.zf) goto L_1109d96b;
  /* 1109d950 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d953 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1109d956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d959 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1109d95c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109d95f mov ecx, dword ptr [edx*4 + 0x110c1fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x110c1fe0)));
  /* 1109d966 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1109d969 jmp 0x1109d984 */
  goto L_1109d984;
L_1109d96b:;
  /* 1109d96b call 0x1109c280 */
  push32(0x1109d970u); f_1109c280();
  /* 1109d970 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1109d976 call 0x1109c290 */
  push32(0x1109d97bu); f_1109c290();
  /* 1109d97b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1109d981 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1109d984:;
  /* 1109d984 pop ebp */
  EBP = (pop32());
  /* 1109d985 ret  */
  ESPCHK(0x1109d920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d990 @ 0x1109d990 (260 bytes, 83 insns) */
void f_1109d990(void) {
  FTRACE(0x1109d990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109d990 push ebp */
  push32((uint32_t)(EBP));
  /* 1109d991 mov ebp, esp */
  EBP = (ESP);
  /* 1109d993 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109d996 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1109d99a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109d99d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1109d9a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109d9a2 je 0x1109d9ad */
  if (C.zf) goto L_1109d9ad;
  /* 1109d9a4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1109d9a7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1109d9aa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1109d9ad:;
  /* 1109d9ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109d9b0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1109d9b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109d9b8 je 0x1109d9c2 */
  if (C.zf) goto L_1109d9c2;
  /* 1109d9ba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1109d9bd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1109d9bf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1109d9c2:;
  /* 1109d9c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109d9c5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1109d9cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109d9cd je 0x1109d9d8 */
  if (C.zf) goto L_1109d9d8;
  /* 1109d9cf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1109d9d2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1109d9d5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1109d9d8:;
  /* 1109d9d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109d9db push eax */
  push32((uint32_t)(EAX));
  /* 1109d9dc call dword ptr [0x110c32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32ec))), 0x1109d9e2u);
  /* 1109d9e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109d9e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109d9e9 jne 0x1109da02 */
  if (!C.zf) goto L_1109da02;
  /* 1109d9eb call dword ptr [0x110c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32e0))), 0x1109d9f1u);
  /* 1109d9f1 push eax */
  push32((uint32_t)(EAX));
  /* 1109d9f2 call 0x1109c1e0 */
  push32(0x1109d9f7u); f_1109c1e0();
  /* 1109d9f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109d9fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109d9fd jmp 0x1109da90 */
  goto L_1109da90;
L_1109da02:;
  /* 1109da02 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109da06 jne 0x1109da13 */
  if (!C.zf) goto L_1109da13;
  /* 1109da08 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1109da0b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1109da0e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1109da11 jmp 0x1109da22 */
  goto L_1109da22;
L_1109da13:;
  /* 1109da13 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109da17 jne 0x1109da22 */
  if (!C.zf) goto L_1109da22;
  /* 1109da19 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1109da1c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1109da1f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1109da22:;
  /* 1109da22 call 0x1109d590 */
  push32(0x1109da27u); f_1109d590();
  /* 1109da27 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1109da2a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109da2e jne 0x1109da4b */
  if (!C.zf) goto L_1109da4b;
  /* 1109da30 call 0x1109c280 */
  push32(0x1109da35u); f_1109c280();
  /* 1109da35 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1109da3b call 0x1109c290 */
  push32(0x1109da40u); f_1109c290();
  /* 1109da40 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1109da46 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109da49 jmp 0x1109da90 */
  goto L_1109da90;
L_1109da4b:;
  /* 1109da4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109da4e push eax */
  push32((uint32_t)(EAX));
  /* 1109da4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109da52 push ecx */
  push32((uint32_t)(ECX));
  /* 1109da53 call 0x1109d780 */
  push32(0x1109da58u); f_1109d780();
  /* 1109da58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109da5b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1109da5e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1109da61 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1109da64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109da67 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1109da6a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109da6d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1109da70 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109da73 mov edx, dword ptr [eax*4 + 0x110c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110c1fe0)));
  /* 1109da7a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1109da7d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1109da81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109da84 push ecx */
  push32((uint32_t)(ECX));
  /* 1109da85 call 0x1109db30 */
  push32(0x1109da8au); f_1109db30();
  /* 1109da8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109da8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1109da90:;
  /* 1109da90 mov esp, ebp */
  ESP = (EBP);
  /* 1109da92 pop ebp */
  EBP = (pop32());
  /* 1109da93 ret  */
  ESPCHK(0x1109d990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000daa0 @ 0x1109daa0 (134 bytes, 44 insns) */
void f_1109daa0(void) {
  FTRACE(0x1109daa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109daa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109daa1 mov ebp, esp */
  EBP = (ESP);
  /* 1109daa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1109daa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109daa7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1109daaa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109daad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1109dab0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109dab3 mov edx, dword ptr [eax*4 + 0x110c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110c1fe0)));
  /* 1109daba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dabc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1109dabf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109dac2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109dac6 jne 0x1109db01 */
  if (!C.zf) goto L_1109db01;
  /* 1109dac8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1109daca call 0x11097db0 */
  push32(0x1109dacfu); f_11097db0();
  /* 1109dacf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dad2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109dad5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109dad9 jne 0x1109daf7 */
  if (!C.zf) goto L_1109daf7;
  /* 1109dadb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109dade add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dae1 push edx */
  push32((uint32_t)(EDX));
  /* 1109dae2 call dword ptr [0x110c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c332c))), 0x1109dae8u);
  /* 1109dae8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109daeb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1109daee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109daf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109daf4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1109daf7:;
  /* 1109daf7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1109daf9 call 0x11097e50 */
  push32(0x1109dafeu); f_11097e50();
  /* 1109dafe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109db01:;
  /* 1109db01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109db04 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1109db07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109db0a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1109db0d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109db10 mov edx, dword ptr [eax*4 + 0x110c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110c1fe0)));
  /* 1109db17 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1109db1b push eax */
  push32((uint32_t)(EAX));
  /* 1109db1c call dword ptr [0x110c32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32f8))), 0x1109db22u);
  /* 1109db22 mov esp, ebp */
  ESP = (EBP);
  /* 1109db24 pop ebp */
  EBP = (pop32());
  /* 1109db25 ret  */
  ESPCHK(0x1109daa0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1109db30 (38 bytes, 13 insns) */
void f_1109db30(void) {
  FTRACE(0x1109db30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109db30 push ebp */
  push32((uint32_t)(EBP));
  /* 1109db31 mov ebp, esp */
  EBP = (ESP);
  /* 1109db33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109db36 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1109db39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109db3c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1109db3f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109db42 mov edx, dword ptr [eax*4 + 0x110c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110c1fe0)));
  /* 1109db49 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1109db4d push eax */
  push32((uint32_t)(EAX));
  /* 1109db4e call dword ptr [0x110c32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32fc))), 0x1109db54u);
  /* 1109db54 pop ebp */
  EBP = (pop32());
  /* 1109db55 ret  */
  ESPCHK(0x1109db30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db60 @ 0x1109db60 (218 bytes, 63 insns) */
void f_1109db60(void) {
  FTRACE(0x1109db60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109db60 push ebp */
  push32((uint32_t)(EBP));
  /* 1109db61 mov ebp, esp */
  EBP = (ESP);
  /* 1109db63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109db66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1109db6d push 2 */
  push32((uint32_t)(0x2u));
  /* 1109db6f call 0x11097db0 */
  push32(0x1109db74u); f_11097db0();
  /* 1109db74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109db77 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1109db7e jmp 0x1109db89 */
  goto L_1109db89;
L_1109db80:;
  /* 1109db80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109db83 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109db86 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1109db89:;
  /* 1109db89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109db8c cmp ecx, dword ptr [0x110c1ce0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110c1ce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109db92 jge 0x1109dc29 */
  if ((C.sf==C.of)) goto L_1109dc29;
  /* 1109db98 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109db9b mov eax, dword ptr [0x110c0990] */
  EAX = (r32((uint32_t)(0x110c0990)));
  /* 1109dba0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109dba4 je 0x1109dc24 */
  if (C.zf) goto L_1109dc24;
  /* 1109dba6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dba9 mov edx, dword ptr [0x110c0990] */
  EDX = (r32((uint32_t)(0x110c0990)));
  /* 1109dbaf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1109dbb2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1109dbb5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1109dbbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109dbbd je 0x1109dbe1 */
  if (C.zf) goto L_1109dbe1;
  /* 1109dbbf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dbc2 mov eax, dword ptr [0x110c0990] */
  EAX = (r32((uint32_t)(0x110c0990)));
  /* 1109dbc7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1109dbca push ecx */
  push32((uint32_t)(ECX));
  /* 1109dbcb call 0x1109e950 */
  push32(0x1109dbd0u); f_1109e950();
  /* 1109dbd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dbd3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109dbd6 je 0x1109dbe1 */
  if (C.zf) goto L_1109dbe1;
  /* 1109dbd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109dbdb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dbde mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1109dbe1:;
  /* 1109dbe1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109dbe5 jl 0x1109dc24 */
  if ((C.sf!=C.of)) goto L_1109dc24;
  /* 1109dbe7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dbea mov ecx, dword ptr [0x110c0990] */
  ECX = (r32((uint32_t)(0x110c0990)));
  /* 1109dbf0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1109dbf3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dbf6 push edx */
  push32((uint32_t)(EDX));
  /* 1109dbf7 call dword ptr [0x110c32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32f4))), 0x1109dbfdu);
  /* 1109dbfd push 2 */
  push32((uint32_t)(0x2u));
  /* 1109dbff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dc02 mov ecx, dword ptr [0x110c0990] */
  ECX = (r32((uint32_t)(0x110c0990)));
  /* 1109dc08 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1109dc0b push edx */
  push32((uint32_t)(EDX));
  /* 1109dc0c call 0x11094e40 */
  push32(0x1109dc11u); f_11094e40();
  /* 1109dc11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dc14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dc17 mov ecx, dword ptr [0x110c0990] */
  ECX = (r32((uint32_t)(0x110c0990)));
  /* 1109dc1d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1109dc24:;
  /* 1109dc24 jmp 0x1109db80 */
  goto L_1109db80;
L_1109dc29:;
  /* 1109dc29 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109dc2b call 0x11097e50 */
  push32(0x1109dc30u); f_11097e50();
  /* 1109dc30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dc33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109dc36 mov esp, ebp */
  ESP = (EBP);
  /* 1109dc38 pop ebp */
  EBP = (pop32());
  /* 1109dc39 ret  */
  ESPCHK(0x1109db60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc40 @ 0x1109dc40 (68 bytes, 26 insns) */
void f_1109dc40(void) {
  FTRACE(0x1109dc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109dc40 push ebp */
  push32((uint32_t)(EBP));
  /* 1109dc41 mov ebp, esp */
  EBP = (ESP);
  /* 1109dc43 push ecx */
  push32((uint32_t)(ECX));
  /* 1109dc44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109dc48 jne 0x1109dc56 */
  if (!C.zf) goto L_1109dc56;
  /* 1109dc4a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109dc4c call 0x1109ddb0 */
  push32(0x1109dc51u); f_1109ddb0();
  /* 1109dc51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dc54 jmp 0x1109dc80 */
  goto L_1109dc80;
L_1109dc56:;
  /* 1109dc56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109dc59 push eax */
  push32((uint32_t)(EAX));
  /* 1109dc5a call 0x1109d1c0 */
  push32(0x1109dc5fu); f_1109d1c0();
  /* 1109dc5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dc62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109dc65 push ecx */
  push32((uint32_t)(ECX));
  /* 1109dc66 call 0x1109dc90 */
  push32(0x1109dc6bu); f_1109dc90();
  /* 1109dc6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dc6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109dc71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109dc74 push edx */
  push32((uint32_t)(EDX));
  /* 1109dc75 call 0x1109d230 */
  push32(0x1109dc7au); f_1109d230();
  /* 1109dc7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dc7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1109dc80:;
  /* 1109dc80 mov esp, ebp */
  ESP = (EBP);
  /* 1109dc82 pop ebp */
  EBP = (pop32());
  /* 1109dc83 ret  */
  ESPCHK(0x1109dc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc90 @ 0x1109dc90 (65 bytes, 26 insns) */
void f_1109dc90(void) {
  FTRACE(0x1109dc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109dc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1109dc91 mov ebp, esp */
  EBP = (ESP);
  /* 1109dc93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109dc96 push eax */
  push32((uint32_t)(EAX));
  /* 1109dc97 call 0x1109dce0 */
  push32(0x1109dc9cu); f_1109dce0();
  /* 1109dc9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dc9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109dca1 je 0x1109dca8 */
  if (C.zf) goto L_1109dca8;
  /* 1109dca3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109dca6 jmp 0x1109dccf */
  goto L_1109dccf;
L_1109dca8:;
  /* 1109dca8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109dcab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1109dcae and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1109dcb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109dcb6 je 0x1109dccd */
  if (C.zf) goto L_1109dccd;
  /* 1109dcb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109dcbb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1109dcbe push ecx */
  push32((uint32_t)(ECX));
  /* 1109dcbf call 0x1109eaa0 */
  push32(0x1109dcc4u); f_1109eaa0();
  /* 1109dcc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dcc7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1109dcc9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109dccb jmp 0x1109dccf */
  goto L_1109dccf;
L_1109dccd:;
  /* 1109dccd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1109dccf:;
  /* 1109dccf pop ebp */
  EBP = (pop32());
  /* 1109dcd0 ret  */
  ESPCHK(0x1109dc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dce0 @ 0x1109dce0 (183 bytes, 62 insns) */
void f_1109dce0(void) {
  FTRACE(0x1109dce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109dce0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109dce1 mov ebp, esp */
  EBP = (ESP);
  /* 1109dce3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109dce6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1109dced mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109dcf0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1109dcf3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dcf6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1109dcf9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1109dcfc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109dcff jne 0x1109dd7b */
  if (!C.zf) goto L_1109dd7b;
  /* 1109dd01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dd04 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1109dd07 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1109dd0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109dd0f je 0x1109dd7b */
  if (C.zf) goto L_1109dd7b;
  /* 1109dd11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dd14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dd17 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1109dd19 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109dd1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109dd1f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109dd23 jle 0x1109dd7b */
  if ((C.zf||C.sf!=C.of)) goto L_1109dd7b;
  /* 1109dd25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109dd28 push edx */
  push32((uint32_t)(EDX));
  /* 1109dd29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dd2c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1109dd2f push ecx */
  push32((uint32_t)(ECX));
  /* 1109dd30 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dd33 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1109dd36 push eax */
  push32((uint32_t)(EAX));
  /* 1109dd37 call 0x1109cc50 */
  push32(0x1109dd3cu); f_1109cc50();
  /* 1109dd3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dd3f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109dd42 jne 0x1109dd65 */
  if (!C.zf) goto L_1109dd65;
  /* 1109dd44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dd47 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1109dd4a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1109dd50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109dd52 je 0x1109dd63 */
  if (C.zf) goto L_1109dd63;
  /* 1109dd54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dd57 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1109dd5a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1109dd5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dd60 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1109dd63:;
  /* 1109dd63 jmp 0x1109dd7b */
  goto L_1109dd7b;
L_1109dd65:;
  /* 1109dd65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dd68 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1109dd6b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1109dd6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dd71 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1109dd74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1109dd7b:;
  /* 1109dd7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dd7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dd81 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1109dd84 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1109dd86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109dd89 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1109dd90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109dd93 mov esp, ebp */
  ESP = (EBP);
  /* 1109dd95 pop ebp */
  EBP = (pop32());
  /* 1109dd96 ret  */
  ESPCHK(0x1109dce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dda0 @ 0x1109dda0 (15 bytes, 7 insns) */
void f_1109dda0(void) {
  FTRACE(0x1109dda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109dda0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109dda1 mov ebp, esp */
  EBP = (ESP);
  /* 1109dda3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109dda5 call 0x1109ddb0 */
  push32(0x1109ddaau); f_1109ddb0();
  /* 1109ddaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ddad pop ebp */
  EBP = (pop32());
  /* 1109ddae ret  */
  ESPCHK(0x1109dda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddb0 @ 0x1109ddb0 (319 bytes, 94 insns) */
void f_1109ddb0(void) {
  FTRACE(0x1109ddb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109ddb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109ddb1 mov ebp, esp */
  EBP = (ESP);
  /* 1109ddb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109ddb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1109ddbd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1109ddc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109ddc6 call 0x11097db0 */
  push32(0x1109ddcbu); f_11097db0();
  /* 1109ddcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ddce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1109ddd5 jmp 0x1109dde0 */
  goto L_1109dde0;
L_1109ddd7:;
  /* 1109ddd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ddda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dddd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1109dde0:;
  /* 1109dde0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109dde3 cmp ecx, dword ptr [0x110c1ce0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110c1ce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109dde9 jge 0x1109ded3 */
  if ((C.sf==C.of)) goto L_1109ded3;
  /* 1109ddef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ddf2 mov eax, dword ptr [0x110c0990] */
  EAX = (r32((uint32_t)(0x110c0990)));
  /* 1109ddf7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ddfb je 0x1109dece */
  if (C.zf) goto L_1109dece;
  /* 1109de01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109de04 mov edx, dword ptr [0x110c0990] */
  EDX = (r32((uint32_t)(0x110c0990)));
  /* 1109de0a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1109de0d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1109de10 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1109de16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109de18 je 0x1109dece */
  if (C.zf) goto L_1109dece;
  /* 1109de1e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109de21 mov eax, dword ptr [0x110c0990] */
  EAX = (r32((uint32_t)(0x110c0990)));
  /* 1109de26 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1109de29 push ecx */
  push32((uint32_t)(ECX));
  /* 1109de2a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109de2d push edx */
  push32((uint32_t)(EDX));
  /* 1109de2e call 0x1109d200 */
  push32(0x1109de33u); f_1109d200();
  /* 1109de33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109de36 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109de39 mov ecx, dword ptr [0x110c0990] */
  ECX = (r32((uint32_t)(0x110c0990)));
  /* 1109de3f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1109de42 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1109de45 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1109de4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109de4c je 0x1109deb5 */
  if (C.zf) goto L_1109deb5;
  /* 1109de4e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109de52 jne 0x1109de79 */
  if (!C.zf) goto L_1109de79;
  /* 1109de54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109de57 mov edx, dword ptr [0x110c0990] */
  EDX = (r32((uint32_t)(0x110c0990)));
  /* 1109de5d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1109de60 push eax */
  push32((uint32_t)(EAX));
  /* 1109de61 call 0x1109dc90 */
  push32(0x1109de66u); f_1109dc90();
  /* 1109de66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109de69 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109de6c je 0x1109de77 */
  if (C.zf) goto L_1109de77;
  /* 1109de6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109de71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109de74 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1109de77:;
  /* 1109de77 jmp 0x1109deb5 */
  goto L_1109deb5;
L_1109de79:;
  /* 1109de79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109de7d jne 0x1109deb5 */
  if (!C.zf) goto L_1109deb5;
  /* 1109de7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109de82 mov eax, dword ptr [0x110c0990] */
  EAX = (r32((uint32_t)(0x110c0990)));
  /* 1109de87 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1109de8a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1109de8d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1109de90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109de92 je 0x1109deb5 */
  if (C.zf) goto L_1109deb5;
  /* 1109de94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109de97 mov ecx, dword ptr [0x110c0990] */
  ECX = (r32((uint32_t)(0x110c0990)));
  /* 1109de9d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1109dea0 push edx */
  push32((uint32_t)(EDX));
  /* 1109dea1 call 0x1109dc90 */
  push32(0x1109dea6u); f_1109dc90();
  /* 1109dea6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dea9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109deac jne 0x1109deb5 */
  if (!C.zf) goto L_1109deb5;
  /* 1109deae mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1109deb5:;
  /* 1109deb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109deb8 mov ecx, dword ptr [0x110c0990] */
  ECX = (r32((uint32_t)(0x110c0990)));
  /* 1109debe mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1109dec1 push edx */
  push32((uint32_t)(EDX));
  /* 1109dec2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109dec5 push eax */
  push32((uint32_t)(EAX));
  /* 1109dec6 call 0x1109d270 */
  push32(0x1109decbu); f_1109d270();
  /* 1109decb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109dece:;
  /* 1109dece jmp 0x1109ddd7 */
  goto L_1109ddd7;
L_1109ded3:;
  /* 1109ded3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109ded5 call 0x11097e50 */
  push32(0x1109dedau); f_11097e50();
  /* 1109deda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dedd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109dee1 jne 0x1109dee8 */
  if (!C.zf) goto L_1109dee8;
  /* 1109dee3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109dee6 jmp 0x1109deeb */
  goto L_1109deeb;
L_1109dee8:;
  /* 1109dee8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1109deeb:;
  /* 1109deeb mov esp, ebp */
  ESP = (EBP);
  /* 1109deed pop ebp */
  EBP = (pop32());
  /* 1109deee ret  */
  ESPCHK(0x1109ddb0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1109def0 (15 bytes, 7 insns) */
void f_1109def0(void) {
  FTRACE(0x1109def0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109def0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109def1 mov ebp, esp */
  EBP = (ESP);
  /* 1109def3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109def5 call 0x11093320 */
  push32(0x1109defau); f_11093320();
  /* 1109defa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109defd pop ebp */
  EBP = (pop32());
  /* 1109defe ret  */
  ESPCHK(0x1109def0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df00 @ 0x1109df00 (1007 bytes, 269 insns) */
void f_1109df00(void) {
  FTRACE(0x1109df00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109df00 push ebp */
  push32((uint32_t)(EBP));
  /* 1109df01 mov ebp, esp */
  EBP = (ESP);
  /* 1109df03 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109df09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109df0d jl 0x1109df15 */
  if ((C.sf!=C.of)) goto L_1109df15;
  /* 1109df0f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109df13 jle 0x1109df1c */
  if ((C.zf||C.sf!=C.of)) goto L_1109df1c;
L_1109df15:;
  /* 1109df15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109df17 jmp 0x1109e2eb */
  goto L_1109e2eb;
L_1109df1c:;
  /* 1109df1c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1109df1e call 0x11097db0 */
  push32(0x1109df23u); f_11097db0();
  /* 1109df23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109df26 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1109df2d mov eax, dword ptr [0x110c097c] */
  EAX = (r32((uint32_t)(0x110c097c)));
  /* 1109df32 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109df35 mov dword ptr [0x110c097c], eax */
  w32((uint32_t)(0x110c097c), (EAX));
L_1109df3a:;
  /* 1109df3a cmp dword ptr [0x110c098c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c098c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109df41 je 0x1109df4d */
  if (C.zf) goto L_1109df4d;
  /* 1109df43 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109df45 call dword ptr [0x110c327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c327c))), 0x1109df4bu);
  /* 1109df4b jmp 0x1109df3a */
  goto L_1109df3a;
L_1109df4d:;
  /* 1109df4d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109df51 je 0x1109df91 */
  if (C.zf) goto L_1109df91;
  /* 1109df53 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109df57 je 0x1109df71 */
  if (C.zf) goto L_1109df71;
  /* 1109df59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109df5c push ecx */
  push32((uint32_t)(ECX));
  /* 1109df5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109df60 push edx */
  push32((uint32_t)(EDX));
  /* 1109df61 call 0x1109e2f0 */
  push32(0x1109df66u); f_1109e2f0();
  /* 1109df66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109df69 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1109df6f jmp 0x1109df83 */
  goto L_1109df83;
L_1109df71:;
  /* 1109df71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109df74 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109df77 mov ecx, dword ptr [eax + 0x110bf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x110bf4dc)));
  /* 1109df7d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1109df83:;
  /* 1109df83 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1109df89 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1109df8c jmp 0x1109e2cb */
  goto L_1109e2cb;
L_1109df91:;
  /* 1109df91 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1109df98 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1109df9f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109dfa3 je 0x1109e2c3 */
  if (C.zf) goto L_1109e2c3;
  /* 1109dfa9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109dfac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1109dfaf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109dfb2 jne 0x1109e1d4 */
  if (!C.zf) goto L_1109e1d4;
  /* 1109dfb8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109dfbb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1109dfbf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109dfc2 jne 0x1109e1d4 */
  if (!C.zf) goto L_1109e1d4;
  /* 1109dfc8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109dfcb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1109dfcf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109dfd2 jne 0x1109e1d4 */
  if (!C.zf) goto L_1109e1d4;
  /* 1109dfd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109dfdb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1109dfe1:;
  /* 1109dfe1 push 0x110bc37c */
  push32((uint32_t)(0x110bc37cu));
  /* 1109dfe6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1109dfec push ecx */
  push32((uint32_t)(ECX));
  /* 1109dfed call 0x110a0150 */
  push32(0x1109dff2u); f_110a0150();
  /* 1109dff2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109dff5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1109dffb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e002 je 0x1109e02d */
  if (C.zf) goto L_1109e02d;
  /* 1109e004 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1109e00a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109e010 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1109e016 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e01d je 0x1109e02d */
  if (C.zf) goto L_1109e02d;
  /* 1109e01f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1109e025 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1109e028 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e02b jne 0x1109e053 */
  if (!C.zf) goto L_1109e053;
L_1109e02d:;
  /* 1109e02d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e031 je 0x1109e04c */
  if (C.zf) goto L_1109e04c;
  /* 1109e033 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1109e035 call 0x11097e50 */
  push32(0x1109e03au); f_11097e50();
  /* 1109e03a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e03d mov edx, dword ptr [0x110c097c] */
  EDX = (r32((uint32_t)(0x110c097c)));
  /* 1109e043 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109e046 mov dword ptr [0x110c097c], edx */
  w32((uint32_t)(0x110c097c), (EDX));
L_1109e04c:;
  /* 1109e04c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109e04e jmp 0x1109e2eb */
  goto L_1109e2eb;
L_1109e053:;
  /* 1109e053 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1109e05a jmp 0x1109e065 */
  goto L_1109e065;
L_1109e05c:;
  /* 1109e05c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109e05f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e062 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1109e065:;
  /* 1109e065 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e069 jg 0x1109e0b3 */
  if ((!C.zf&&C.sf==C.of)) goto L_1109e0b3;
  /* 1109e06b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1109e071 push ecx */
  push32((uint32_t)(ECX));
  /* 1109e072 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1109e078 push edx */
  push32((uint32_t)(EDX));
  /* 1109e079 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109e07c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109e07f mov ecx, dword ptr [eax + 0x110bf4d8] */
  ECX = (r32((uint32_t)(EAX + 0x110bf4d8)));
  /* 1109e085 push ecx */
  push32((uint32_t)(ECX));
  /* 1109e086 call 0x110a0110 */
  push32(0x1109e08bu); f_110a0110();
  /* 1109e08b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e08e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e090 jne 0x1109e0b1 */
  if (!C.zf) goto L_1109e0b1;
  /* 1109e092 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109e095 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109e098 mov eax, dword ptr [edx + 0x110bf4d8] */
  EAX = (r32((uint32_t)(EDX + 0x110bf4d8)));
  /* 1109e09e push eax */
  push32((uint32_t)(EAX));
  /* 1109e09f call 0x110971e0 */
  push32(0x1109e0a4u); f_110971e0();
  /* 1109e0a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e0a7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e0ad jne 0x1109e0b1 */
  if (!C.zf) goto L_1109e0b1;
  /* 1109e0af jmp 0x1109e0b3 */
  goto L_1109e0b3;
L_1109e0b1:;
  /* 1109e0b1 jmp 0x1109e05c */
  goto L_1109e05c;
L_1109e0b3:;
  /* 1109e0b3 push 0x110bc378 */
  push32((uint32_t)(0x110bc378u));
  /* 1109e0b8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1109e0be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e0c1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1109e0c7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1109e0cd push edx */
  push32((uint32_t)(EDX));
  /* 1109e0ce call 0x110a00d0 */
  push32(0x1109e0d3u); f_110a00d0();
  /* 1109e0d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e0d6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1109e0dc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e0e3 jne 0x1109e119 */
  if (!C.zf) goto L_1109e119;
  /* 1109e0e5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1109e0eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1109e0ee cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e0f1 je 0x1109e119 */
  if (C.zf) goto L_1109e119;
  /* 1109e0f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e0f7 je 0x1109e112 */
  if (C.zf) goto L_1109e112;
  /* 1109e0f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1109e0fb call 0x11097e50 */
  push32(0x1109e100u); f_11097e50();
  /* 1109e100 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e103 mov edx, dword ptr [0x110c097c] */
  EDX = (r32((uint32_t)(0x110c097c)));
  /* 1109e109 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109e10c mov dword ptr [0x110c097c], edx */
  w32((uint32_t)(0x110c097c), (EDX));
L_1109e112:;
  /* 1109e112 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109e114 jmp 0x1109e2eb */
  goto L_1109e2eb;
L_1109e119:;
  /* 1109e119 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e11d jg 0x1109e16a */
  if ((!C.zf&&C.sf==C.of)) goto L_1109e16a;
  /* 1109e11f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1109e125 push eax */
  push32((uint32_t)(EAX));
  /* 1109e126 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1109e12c push ecx */
  push32((uint32_t)(ECX));
  /* 1109e12d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1109e133 push edx */
  push32((uint32_t)(EDX));
  /* 1109e134 call 0x11097bd0 */
  push32(0x1109e139u); f_11097bd0();
  /* 1109e139 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e13c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1109e142 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1109e14a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1109e150 push ecx */
  push32((uint32_t)(ECX));
  /* 1109e151 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109e154 push edx */
  push32((uint32_t)(EDX));
  /* 1109e155 call 0x1109e2f0 */
  push32(0x1109e15au); f_1109e2f0();
  /* 1109e15a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e15d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e15f je 0x1109e16a */
  if (C.zf) goto L_1109e16a;
  /* 1109e161 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109e164 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e167 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1109e16a:;
  /* 1109e16a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1109e170 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e176 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1109e17c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1109e182 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1109e185 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e187 je 0x1109e198 */
  if (C.zf) goto L_1109e198;
  /* 1109e189 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1109e18f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e192 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1109e198:;
  /* 1109e198 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1109e19e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1109e1a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e1a3 jne 0x1109dfe1 */
  if (!C.zf) goto L_1109dfe1;
  /* 1109e1a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e1ad je 0x1109e1bc */
  if (C.zf) goto L_1109e1bc;
  /* 1109e1af call 0x1109e490 */
  push32(0x1109e1b4u); f_1109e490();
  /* 1109e1b4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1109e1ba jmp 0x1109e1c6 */
  goto L_1109e1c6;
L_1109e1bc:;
  /* 1109e1bc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1109e1c6:;
  /* 1109e1c6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1109e1cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109e1cf jmp 0x1109e2c1 */
  goto L_1109e2c1;
L_1109e1d4:;
  /* 1109e1d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e1d7 push edx */
  push32((uint32_t)(EDX));
  /* 1109e1d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109e1da push 0 */
  push32((uint32_t)(0x0u));
  /* 1109e1dc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1109e1e2 push eax */
  push32((uint32_t)(EAX));
  /* 1109e1e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e1e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1109e1e7 call 0x1109e590 */
  push32(0x1109e1ecu); f_1109e590();
  /* 1109e1ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e1ef mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1109e1f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e1f6 je 0x1109e2c1 */
  if (C.zf) goto L_1109e2c1;
  /* 1109e1fc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1109e203 jmp 0x1109e20e */
  goto L_1109e20e;
L_1109e205:;
  /* 1109e205 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109e208 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e20b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1109e20e:;
  /* 1109e20e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e212 jg 0x1109e270 */
  if ((!C.zf&&C.sf==C.of)) goto L_1109e270;
  /* 1109e214 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e218 je 0x1109e26e */
  if (C.zf) goto L_1109e26e;
  /* 1109e21a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109e21d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109e220 mov ecx, dword ptr [eax + 0x110bf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x110bf4dc)));
  /* 1109e226 push ecx */
  push32((uint32_t)(ECX));
  /* 1109e227 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1109e22d push edx */
  push32((uint32_t)(EDX));
  /* 1109e22e call 0x110a0040 */
  push32(0x1109e233u); f_110a0040();
  /* 1109e233 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e236 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e238 je 0x1109e265 */
  if (C.zf) goto L_1109e265;
  /* 1109e23a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1109e240 push eax */
  push32((uint32_t)(EAX));
  /* 1109e241 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109e244 push ecx */
  push32((uint32_t)(ECX));
  /* 1109e245 call 0x1109e2f0 */
  push32(0x1109e24au); f_1109e2f0();
  /* 1109e24a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e24d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e24f je 0x1109e25c */
  if (C.zf) goto L_1109e25c;
  /* 1109e251 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109e254 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e257 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1109e25a jmp 0x1109e263 */
  goto L_1109e263;
L_1109e25c:;
  /* 1109e25c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1109e263:;
  /* 1109e263 jmp 0x1109e26e */
  goto L_1109e26e;
L_1109e265:;
  /* 1109e265 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109e268 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e26b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1109e26e:;
  /* 1109e26e jmp 0x1109e205 */
  goto L_1109e205;
L_1109e270:;
  /* 1109e270 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e274 je 0x1109e29b */
  if (C.zf) goto L_1109e29b;
  /* 1109e276 call 0x1109e490 */
  push32(0x1109e27bu); f_1109e490();
  /* 1109e27b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1109e27e push 2 */
  push32((uint32_t)(0x2u));
  /* 1109e280 mov ecx, dword ptr [0x110bf4dc] */
  ECX = (r32((uint32_t)(0x110bf4dc)));
  /* 1109e286 push ecx */
  push32((uint32_t)(ECX));
  /* 1109e287 call 0x11094e40 */
  push32(0x1109e28cu); f_11094e40();
  /* 1109e28c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e28f mov dword ptr [0x110bf4dc], 0 */
  w32((uint32_t)(0x110bf4dc), (0x0u));
  /* 1109e299 jmp 0x1109e2c1 */
  goto L_1109e2c1;
L_1109e29b:;
  /* 1109e29b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e29f je 0x1109e2ae */
  if (C.zf) goto L_1109e2ae;
  /* 1109e2a1 call 0x1109e490 */
  push32(0x1109e2a6u); f_1109e490();
  /* 1109e2a6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1109e2ac jmp 0x1109e2b8 */
  goto L_1109e2b8;
L_1109e2ae:;
  /* 1109e2ae mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1109e2b8:;
  /* 1109e2b8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1109e2be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1109e2c1:;
  /* 1109e2c1 jmp 0x1109e2cb */
  goto L_1109e2cb;
L_1109e2c3:;
  /* 1109e2c3 call 0x1109e490 */
  push32(0x1109e2c8u); f_1109e490();
  /* 1109e2c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1109e2cb:;
  /* 1109e2cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e2cf je 0x1109e2e8 */
  if (C.zf) goto L_1109e2e8;
  /* 1109e2d1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1109e2d3 call 0x11097e50 */
  push32(0x1109e2d8u); f_11097e50();
  /* 1109e2d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e2db mov eax, dword ptr [0x110c097c] */
  EAX = (r32((uint32_t)(0x110c097c)));
  /* 1109e2e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109e2e3 mov dword ptr [0x110c097c], eax */
  w32((uint32_t)(0x110c097c), (EAX));
L_1109e2e8:;
  /* 1109e2e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1109e2eb:;
  /* 1109e2eb mov esp, ebp */
  ESP = (EBP);
  /* 1109e2ed pop ebp */
  EBP = (pop32());
  /* 1109e2ee ret  */
  ESPCHK(0x1109df00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2f0 @ 0x1109e2f0 (403 bytes, 117 insns) */
void f_1109e2f0(void) {
  FTRACE(0x1109e2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109e2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109e2f1 mov ebp, esp */
  EBP = (ESP);
  /* 1109e2f3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109e2f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e2fc push eax */
  push32((uint32_t)(EAX));
  /* 1109e2fd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1109e303 push ecx */
  push32((uint32_t)(ECX));
  /* 1109e304 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1109e30a push edx */
  push32((uint32_t)(EDX));
  /* 1109e30b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1109e311 push eax */
  push32((uint32_t)(EAX));
  /* 1109e312 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e315 push ecx */
  push32((uint32_t)(ECX));
  /* 1109e316 call 0x1109e590 */
  push32(0x1109e31bu); f_1109e590();
  /* 1109e31b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e31e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e320 jne 0x1109e329 */
  if (!C.zf) goto L_1109e329;
  /* 1109e322 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109e324 jmp 0x1109e47f */
  goto L_1109e47f;
L_1109e329:;
  /* 1109e329 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1109e32e push 0x110bc380 */
  push32((uint32_t)(0x110bc380u));
  /* 1109e333 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109e335 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1109e33b push edx */
  push32((uint32_t)(EDX));
  /* 1109e33c call 0x110971e0 */
  push32(0x1109e341u); f_110971e0();
  /* 1109e341 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e344 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e347 push eax */
  push32((uint32_t)(EAX));
  /* 1109e348 call 0x110943b0 */
  push32(0x1109e34du); f_110943b0();
  /* 1109e34d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e350 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1109e353 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e357 jne 0x1109e360 */
  if (!C.zf) goto L_1109e360;
  /* 1109e359 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109e35b jmp 0x1109e47f */
  goto L_1109e47f;
L_1109e360:;
  /* 1109e360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e363 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109e366 mov ecx, dword ptr [eax + 0x110bf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x110bf4dc)));
  /* 1109e36c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109e36f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e372 mov eax, dword ptr [edx*4 + 0x110c07f8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x110c07f8)));
  /* 1109e379 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109e37c push 6 */
  push32((uint32_t)(0x6u));
  /* 1109e37e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e381 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109e384 add ecx, 0x110c0848 */
  { uint32_t _a=(ECX),_b=(0x110c0848u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e38a push ecx */
  push32((uint32_t)(ECX));
  /* 1109e38b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1109e38e push edx */
  push32((uint32_t)(EDX));
  /* 1109e38f call 0x1109ac90 */
  push32(0x1109e394u); f_1109ac90();
  /* 1109e394 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e397 mov eax, dword ptr [0x110c0810] */
  EAX = (r32((uint32_t)(0x110c0810)));
  /* 1109e39c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1109e39f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1109e3a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1109e3a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109e3a9 push edx */
  push32((uint32_t)(EDX));
  /* 1109e3aa call 0x11097360 */
  push32(0x1109e3afu); f_11097360();
  /* 1109e3af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e3b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e3b5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109e3b8 mov dword ptr [ecx + 0x110bf4dc], eax */
  w32((uint32_t)(ECX + 0x110bf4dc), (EAX));
  /* 1109e3be mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1109e3c4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1109e3ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e3cd mov dword ptr [eax*4 + 0x110c07f8], edx */
  w32((uint32_t)(EAX*4 + 0x110c07f8), (EDX));
  /* 1109e3d4 push 6 */
  push32((uint32_t)(0x6u));
  /* 1109e3d6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1109e3dc push ecx */
  push32((uint32_t)(ECX));
  /* 1109e3dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e3e0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109e3e3 add edx, 0x110c0848 */
  { uint32_t _a=(EDX),_b=(0x110c0848u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e3e9 push edx */
  push32((uint32_t)(EDX));
  /* 1109e3ea call 0x1109ac90 */
  push32(0x1109e3efu); f_1109ac90();
  /* 1109e3ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e3f2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e3f6 jne 0x1109e403 */
  if (!C.zf) goto L_1109e403;
  /* 1109e3f8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1109e3fe mov dword ptr [0x110c0810], eax */
  w32((uint32_t)(0x110c0810), (EAX));
L_1109e403:;
  /* 1109e403 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e407 jne 0x1109e415 */
  if (!C.zf) goto L_1109e415;
  /* 1109e409 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1109e40f mov dword ptr [0x110c0814], ecx */
  w32((uint32_t)(0x110c0814), (ECX));
L_1109e415:;
  /* 1109e415 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e418 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109e41b call dword ptr [edx + 0x110bf4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x110bf4e0))), 0x1109e421u);
  /* 1109e421 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e423 je 0x1109e45c */
  if (C.zf) goto L_1109e45c;
  /* 1109e425 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e428 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109e42b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109e42e mov dword ptr [eax + 0x110bf4dc], ecx */
  w32((uint32_t)(EAX + 0x110bf4dc), (ECX));
  /* 1109e434 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109e436 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109e439 push edx */
  push32((uint32_t)(EDX));
  /* 1109e43a call 0x11094e40 */
  push32(0x1109e43fu); f_11094e40();
  /* 1109e43f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e442 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e445 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109e448 mov dword ptr [eax*4 + 0x110c07f8], ecx */
  w32((uint32_t)(EAX*4 + 0x110c07f8), (ECX));
  /* 1109e44f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109e452 mov dword ptr [0x110c0810], edx */
  w32((uint32_t)(0x110c0810), (EDX));
  /* 1109e458 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109e45a jmp 0x1109e47f */
  goto L_1109e47f;
L_1109e45c:;
  /* 1109e45c cmp dword ptr [ebp - 0xc], 0x110bf3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x110bf3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e463 je 0x1109e473 */
  if (C.zf) goto L_1109e473;
  /* 1109e465 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109e467 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109e46a push eax */
  push32((uint32_t)(EAX));
  /* 1109e46b call 0x11094e40 */
  push32(0x1109e470u); f_11094e40();
  /* 1109e470 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109e473:;
  /* 1109e473 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e476 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109e479 mov eax, dword ptr [ecx + 0x110bf4dc] */
  EAX = (r32((uint32_t)(ECX + 0x110bf4dc)));
L_1109e47f:;
  /* 1109e47f mov esp, ebp */
  ESP = (EBP);
  /* 1109e481 pop ebp */
  EBP = (pop32());
  /* 1109e482 ret  */
  ESPCHK(0x1109e2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e490 @ 0x1109e490 (256 bytes, 72 insns) */
void f_1109e490(void) {
  FTRACE(0x1109e490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109e490 push ebp */
  push32((uint32_t)(EBP));
  /* 1109e491 mov ebp, esp */
  EBP = (ESP);
  /* 1109e493 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109e496 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1109e49d cmp dword ptr [0x110bf4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110bf4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e4a4 jne 0x1109e4c4 */
  if (!C.zf) goto L_1109e4c4;
  /* 1109e4a6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1109e4ab push 0x110bc380 */
  push32((uint32_t)(0x110bc380u));
  /* 1109e4b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109e4b2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1109e4b7 call 0x110943b0 */
  push32(0x1109e4bcu); f_110943b0();
  /* 1109e4bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e4bf mov dword ptr [0x110bf4dc], eax */
  w32((uint32_t)(0x110bf4dc), (EAX));
L_1109e4c4:;
  /* 1109e4c4 mov eax, dword ptr [0x110bf4dc] */
  EAX = (r32((uint32_t)(0x110bf4dc)));
  /* 1109e4c9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1109e4cc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1109e4d3 jmp 0x1109e4de */
  goto L_1109e4de;
L_1109e4d5:;
  /* 1109e4d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109e4d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e4db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1109e4de:;
  /* 1109e4de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109e4e1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109e4e4 mov eax, dword ptr [edx + 0x110bf4dc] */
  EAX = (r32((uint32_t)(EDX + 0x110bf4dc)));
  /* 1109e4ea push eax */
  push32((uint32_t)(EAX));
  /* 1109e4eb push 0x110bc38c */
  push32((uint32_t)(0x110bc38cu));
  /* 1109e4f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109e4f3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109e4f6 mov edx, dword ptr [ecx + 0x110bf4d8] */
  EDX = (r32((uint32_t)(ECX + 0x110bf4d8)));
  /* 1109e4fc push edx */
  push32((uint32_t)(EDX));
  /* 1109e4fd push 3 */
  push32((uint32_t)(0x3u));
  /* 1109e4ff mov eax, dword ptr [0x110bf4dc] */
  EAX = (r32((uint32_t)(0x110bf4dc)));
  /* 1109e504 push eax */
  push32((uint32_t)(EAX));
  /* 1109e505 call 0x1109e730 */
  push32(0x1109e50au); f_1109e730();
  /* 1109e50a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e50d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e511 jge 0x1109e559 */
  if ((C.sf==C.of)) goto L_1109e559;
  /* 1109e513 push 0x110bc378 */
  push32((uint32_t)(0x110bc378u));
  /* 1109e518 mov ecx, dword ptr [0x110bf4dc] */
  ECX = (r32((uint32_t)(0x110bf4dc)));
  /* 1109e51e push ecx */
  push32((uint32_t)(ECX));
  /* 1109e51f call 0x11097370 */
  push32(0x1109e524u); f_11097370();
  /* 1109e524 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e527 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109e52a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e52d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109e530 mov eax, dword ptr [edx + 0x110bf4dc] */
  EAX = (r32((uint32_t)(EDX + 0x110bf4dc)));
  /* 1109e536 push eax */
  push32((uint32_t)(EAX));
  /* 1109e537 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109e53a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109e53d mov edx, dword ptr [ecx + 0x110bf4dc] */
  EDX = (r32((uint32_t)(ECX + 0x110bf4dc)));
  /* 1109e543 push edx */
  push32((uint32_t)(EDX));
  /* 1109e544 call 0x110a0040 */
  push32(0x1109e549u); f_110a0040();
  /* 1109e549 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e54c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e54e je 0x1109e557 */
  if (C.zf) goto L_1109e557;
  /* 1109e550 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1109e557:;
  /* 1109e557 jmp 0x1109e587 */
  goto L_1109e587;
L_1109e559:;
  /* 1109e559 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e55d jne 0x1109e566 */
  if (!C.zf) goto L_1109e566;
  /* 1109e55f mov eax, dword ptr [0x110bf4dc] */
  EAX = (r32((uint32_t)(0x110bf4dc)));
  /* 1109e564 jmp 0x1109e58c */
  goto L_1109e58c;
L_1109e566:;
  /* 1109e566 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109e568 mov eax, dword ptr [0x110bf4dc] */
  EAX = (r32((uint32_t)(0x110bf4dc)));
  /* 1109e56d push eax */
  push32((uint32_t)(EAX));
  /* 1109e56e call 0x11094e40 */
  push32(0x1109e573u); f_11094e40();
  /* 1109e573 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e576 mov dword ptr [0x110bf4dc], 0 */
  w32((uint32_t)(0x110bf4dc), (0x0u));
  /* 1109e580 mov eax, dword ptr [0x110bf4f4] */
  EAX = (r32((uint32_t)(0x110bf4f4)));
  /* 1109e585 jmp 0x1109e58c */
  goto L_1109e58c;
L_1109e587:;
  /* 1109e587 jmp 0x1109e4d5 */
  goto L_1109e4d5;
L_1109e58c:;
  /* 1109e58c mov esp, ebp */
  ESP = (EBP);
  /* 1109e58e pop ebp */
  EBP = (pop32());
  /* 1109e58f ret  */
  ESPCHK(0x1109e490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e590 @ 0x1109e590 (388 bytes, 115 insns) */
void f_1109e590(void) {
  FTRACE(0x1109e590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109e590 push ebp */
  push32((uint32_t)(EBP));
  /* 1109e591 mov ebp, esp */
  EBP = (ESP);
  /* 1109e593 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109e599 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e59d jne 0x1109e5a6 */
  if (!C.zf) goto L_1109e5a6;
  /* 1109e59f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109e5a1 jmp 0x1109e710 */
  goto L_1109e710;
L_1109e5a6:;
  /* 1109e5a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e5a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1109e5ac cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e5af jne 0x1109e600 */
  if (!C.zf) goto L_1109e600;
  /* 1109e5b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e5b4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1109e5b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e5ba jne 0x1109e600 */
  if (!C.zf) goto L_1109e600;
  /* 1109e5bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e5bf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1109e5c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e5c5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1109e5c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e5cd je 0x1109e5e9 */
  if (C.zf) goto L_1109e5e9;
  /* 1109e5cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109e5d2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1109e5d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109e5da mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1109e5e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109e5e3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1109e5e9:;
  /* 1109e5e9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e5ed je 0x1109e5f8 */
  if (C.zf) goto L_1109e5f8;
  /* 1109e5ef mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109e5f2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1109e5f8:;
  /* 1109e5f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e5fb jmp 0x1109e710 */
  goto L_1109e710;
L_1109e600:;
  /* 1109e600 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e603 push ecx */
  push32((uint32_t)(ECX));
  /* 1109e604 push 0x110bf450 */
  push32((uint32_t)(0x110bf450u));
  /* 1109e609 call 0x110a0040 */
  push32(0x1109e60eu); f_110a0040();
  /* 1109e60e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e611 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e613 je 0x1109e6c8 */
  if (C.zf) goto L_1109e6c8;
  /* 1109e619 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e61c push edx */
  push32((uint32_t)(EDX));
  /* 1109e61d push 0x110bf3cc */
  push32((uint32_t)(0x110bf3ccu));
  /* 1109e622 call 0x110a0040 */
  push32(0x1109e627u); f_110a0040();
  /* 1109e627 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e62a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e62c je 0x1109e6c8 */
  if (C.zf) goto L_1109e6c8;
  /* 1109e632 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e635 push eax */
  push32((uint32_t)(EAX));
  /* 1109e636 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1109e63c push ecx */
  push32((uint32_t)(ECX));
  /* 1109e63d call 0x1109e780 */
  push32(0x1109e642u); f_1109e780();
  /* 1109e642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e645 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e647 je 0x1109e650 */
  if (C.zf) goto L_1109e650;
  /* 1109e649 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109e64b jmp 0x1109e710 */
  goto L_1109e710;
L_1109e650:;
  /* 1109e650 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1109e656 push edx */
  push32((uint32_t)(EDX));
  /* 1109e657 push 0x110c0820 */
  push32((uint32_t)(0x110c0820u));
  /* 1109e65c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1109e662 push eax */
  push32((uint32_t)(EAX));
  /* 1109e663 call 0x110a0190 */
  push32(0x1109e668u); f_110a0190();
  /* 1109e668 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e66b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e66d jne 0x1109e676 */
  if (!C.zf) goto L_1109e676;
  /* 1109e66f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109e671 jmp 0x1109e710 */
  goto L_1109e710;
L_1109e676:;
  /* 1109e676 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109e678 mov cx, word ptr [0x110c0824] */
  CX = (r16((uint32_t)(0x110c0824)));
  /* 1109e67f mov dword ptr [0x110c0828], ecx */
  w32((uint32_t)(0x110c0828), (ECX));
  /* 1109e685 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1109e68b push edx */
  push32((uint32_t)(EDX));
  /* 1109e68c push 0x110bf450 */
  push32((uint32_t)(0x110bf450u));
  /* 1109e691 call 0x1109e8e0 */
  push32(0x1109e696u); f_1109e8e0();
  /* 1109e696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e699 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e69c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1109e69f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109e6a1 je 0x1109e6b6 */
  if (C.zf) goto L_1109e6b6;
  /* 1109e6a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e6a6 push edx */
  push32((uint32_t)(EDX));
  /* 1109e6a7 push 0x110bf3cc */
  push32((uint32_t)(0x110bf3ccu));
  /* 1109e6ac call 0x11097360 */
  push32(0x1109e6b1u); f_11097360();
  /* 1109e6b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e6b4 jmp 0x1109e6c8 */
  goto L_1109e6c8;
L_1109e6b6:;
  /* 1109e6b6 push 0x110bf450 */
  push32((uint32_t)(0x110bf450u));
  /* 1109e6bb push 0x110bf3cc */
  push32((uint32_t)(0x110bf3ccu));
  /* 1109e6c0 call 0x11097360 */
  push32(0x1109e6c5u); f_11097360();
  /* 1109e6c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109e6c8:;
  /* 1109e6c8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e6cc je 0x1109e6e1 */
  if (C.zf) goto L_1109e6e1;
  /* 1109e6ce push 6 */
  push32((uint32_t)(0x6u));
  /* 1109e6d0 push 0x110c0820 */
  push32((uint32_t)(0x110c0820u));
  /* 1109e6d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109e6d8 push eax */
  push32((uint32_t)(EAX));
  /* 1109e6d9 call 0x1109ac90 */
  push32(0x1109e6deu); f_1109ac90();
  /* 1109e6de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109e6e1:;
  /* 1109e6e1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e6e5 je 0x1109e6fa */
  if (C.zf) goto L_1109e6fa;
  /* 1109e6e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1109e6e9 push 0x110c0828 */
  push32((uint32_t)(0x110c0828u));
  /* 1109e6ee mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109e6f1 push ecx */
  push32((uint32_t)(ECX));
  /* 1109e6f2 call 0x1109ac90 */
  push32(0x1109e6f7u); f_1109ac90();
  /* 1109e6f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109e6fa:;
  /* 1109e6fa push 0x110bf450 */
  push32((uint32_t)(0x110bf450u));
  /* 1109e6ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e702 push edx */
  push32((uint32_t)(EDX));
  /* 1109e703 call 0x11097360 */
  push32(0x1109e708u); f_11097360();
  /* 1109e708 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e70b mov eax, 0x110bf450 */
  EAX = (0x110bf450u);
L_1109e710:;
  /* 1109e710 mov esp, ebp */
  ESP = (EBP);
  /* 1109e712 pop ebp */
  EBP = (pop32());
  /* 1109e713 ret  */
  ESPCHK(0x1109e590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e720 @ 0x1109e720 (7 bytes, 5 insns) */
void f_1109e720(void) {
  FTRACE(0x1109e720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109e720 push ebp */
  push32((uint32_t)(EBP));
  /* 1109e721 mov ebp, esp */
  EBP = (ESP);
  /* 1109e723 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109e725 pop ebp */
  EBP = (pop32());
  /* 1109e726 ret  */
  ESPCHK(0x1109e720u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1109e730 (79 bytes, 28 insns) */
void f_1109e730(void) {
  FTRACE(0x1109e730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109e730 push ebp */
  push32((uint32_t)(EBP));
  /* 1109e731 mov ebp, esp */
  EBP = (ESP);
  /* 1109e733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109e736 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1109e739 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109e73c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1109e743 jmp 0x1109e74e */
  goto L_1109e74e;
L_1109e745:;
  /* 1109e745 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109e748 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e74b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1109e74e:;
  /* 1109e74e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109e751 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e754 jge 0x1109e774 */
  if ((C.sf==C.of)) goto L_1109e774;
  /* 1109e756 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109e759 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e75c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109e75f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109e762 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1109e765 push edx */
  push32((uint32_t)(EDX));
  /* 1109e766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e769 push eax */
  push32((uint32_t)(EAX));
  /* 1109e76a call 0x11097370 */
  push32(0x1109e76fu); f_11097370();
  /* 1109e76f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e772 jmp 0x1109e745 */
  goto L_1109e745;
L_1109e774:;
  /* 1109e774 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1109e77b mov esp, ebp */
  ESP = (EBP);
  /* 1109e77d pop ebp */
  EBP = (pop32());
  /* 1109e77e ret  */
  ESPCHK(0x1109e730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e780 @ 0x1109e780 (349 bytes, 122 insns) */
void f_1109e780(void) {
  FTRACE(0x1109e780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109e780 push ebp */
  push32((uint32_t)(EBP));
  /* 1109e781 mov ebp, esp */
  EBP = (ESP);
  /* 1109e783 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109e786 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1109e78b push 0 */
  push32((uint32_t)(0x0u));
  /* 1109e78d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e790 push eax */
  push32((uint32_t)(EAX));
  /* 1109e791 call 0x11098120 */
  push32(0x1109e796u); f_11098120();
  /* 1109e796 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e799 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e79c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1109e79f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109e7a1 jne 0x1109e7aa */
  if (!C.zf) goto L_1109e7aa;
  /* 1109e7a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109e7a5 jmp 0x1109e8d9 */
  goto L_1109e8d9;
L_1109e7aa:;
  /* 1109e7aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e7ad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1109e7b0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e7b3 jne 0x1109e7e0 */
  if (!C.zf) goto L_1109e7e0;
  /* 1109e7b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e7b8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1109e7bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e7be je 0x1109e7e0 */
  if (C.zf) goto L_1109e7e0;
  /* 1109e7c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e7c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e7c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1109e7c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e7ca add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e7d0 push edx */
  push32((uint32_t)(EDX));
  /* 1109e7d1 call 0x11097360 */
  push32(0x1109e7d6u); f_11097360();
  /* 1109e7d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e7d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109e7db jmp 0x1109e8d9 */
  goto L_1109e8d9;
L_1109e7e0:;
  /* 1109e7e0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1109e7e7 jmp 0x1109e7f2 */
  goto L_1109e7f2;
L_1109e7e9:;
  /* 1109e7e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109e7ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e7ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1109e7f2:;
  /* 1109e7f2 push 0x110bc390 */
  push32((uint32_t)(0x110bc390u));
  /* 1109e7f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e7fa push ecx */
  push32((uint32_t)(ECX));
  /* 1109e7fb call 0x110a00d0 */
  push32(0x1109e800u); f_110a00d0();
  /* 1109e800 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e803 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1109e806 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e80a jne 0x1109e814 */
  if (!C.zf) goto L_1109e814;
  /* 1109e80c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109e80f jmp 0x1109e8d9 */
  goto L_1109e8d9;
L_1109e814:;
  /* 1109e814 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e817 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e81a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1109e81c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1109e81f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e823 jne 0x1109e84a */
  if (!C.zf) goto L_1109e84a;
  /* 1109e825 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e829 jge 0x1109e84a */
  if ((C.sf==C.of)) goto L_1109e84a;
  /* 1109e82b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1109e82f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e832 je 0x1109e84a */
  if (C.zf) goto L_1109e84a;
  /* 1109e834 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109e837 push edx */
  push32((uint32_t)(EDX));
  /* 1109e838 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e83b push eax */
  push32((uint32_t)(EAX));
  /* 1109e83c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e83f push ecx */
  push32((uint32_t)(ECX));
  /* 1109e840 call 0x11097bd0 */
  push32(0x1109e845u); f_11097bd0();
  /* 1109e845 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e848 jmp 0x1109e8b0 */
  goto L_1109e8b0;
L_1109e84a:;
  /* 1109e84a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e84e jne 0x1109e878 */
  if (!C.zf) goto L_1109e878;
  /* 1109e850 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e854 jge 0x1109e878 */
  if ((C.sf==C.of)) goto L_1109e878;
  /* 1109e856 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1109e85a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e85d je 0x1109e878 */
  if (C.zf) goto L_1109e878;
  /* 1109e85f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109e862 push eax */
  push32((uint32_t)(EAX));
  /* 1109e863 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e866 push ecx */
  push32((uint32_t)(ECX));
  /* 1109e867 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e86a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e86d push edx */
  push32((uint32_t)(EDX));
  /* 1109e86e call 0x11097bd0 */
  push32(0x1109e873u); f_11097bd0();
  /* 1109e873 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e876 jmp 0x1109e8b0 */
  goto L_1109e8b0;
L_1109e878:;
  /* 1109e878 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e87c jne 0x1109e8ab */
  if (!C.zf) goto L_1109e8ab;
  /* 1109e87e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1109e882 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e884 je 0x1109e88f */
  if (C.zf) goto L_1109e88f;
  /* 1109e886 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1109e88a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e88d jne 0x1109e8ab */
  if (!C.zf) goto L_1109e8ab;
L_1109e88f:;
  /* 1109e88f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109e892 push edx */
  push32((uint32_t)(EDX));
  /* 1109e893 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e896 push eax */
  push32((uint32_t)(EAX));
  /* 1109e897 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e89a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e8a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1109e8a1 call 0x11097bd0 */
  push32(0x1109e8a6u); f_11097bd0();
  /* 1109e8a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e8a9 jmp 0x1109e8b0 */
  goto L_1109e8b0;
L_1109e8ab:;
  /* 1109e8ab or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109e8ae jmp 0x1109e8d9 */
  goto L_1109e8d9;
L_1109e8b0:;
  /* 1109e8b0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1109e8b4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e8b7 jne 0x1109e8bb */
  if (!C.zf) goto L_1109e8bb;
  /* 1109e8b9 jmp 0x1109e8d7 */
  goto L_1109e8d7;
L_1109e8bb:;
  /* 1109e8bb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1109e8bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e8c1 jne 0x1109e8c5 */
  if (!C.zf) goto L_1109e8c5;
  /* 1109e8c3 jmp 0x1109e8d7 */
  goto L_1109e8d7;
L_1109e8c5:;
  /* 1109e8c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109e8c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e8cb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1109e8cf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1109e8d2 jmp 0x1109e7e9 */
  goto L_1109e7e9;
L_1109e8d7:;
  /* 1109e8d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1109e8d9:;
  /* 1109e8d9 mov esp, ebp */
  ESP = (EBP);
  /* 1109e8db pop ebp */
  EBP = (pop32());
  /* 1109e8dc ret  */
  ESPCHK(0x1109e780u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1109e8e0 (101 bytes, 36 insns) */
void f_1109e8e0(void) {
  FTRACE(0x1109e8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109e8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109e8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1109e8e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e8e6 push eax */
  push32((uint32_t)(EAX));
  /* 1109e8e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e8ea push ecx */
  push32((uint32_t)(ECX));
  /* 1109e8eb call 0x11097360 */
  push32(0x1109e8f0u); f_11097360();
  /* 1109e8f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e8f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e8f6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1109e8fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e8fc je 0x1109e918 */
  if (C.zf) goto L_1109e918;
  /* 1109e8fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e901 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e904 push ecx */
  push32((uint32_t)(ECX));
  /* 1109e905 push 0x110bc398 */
  push32((uint32_t)(0x110bc398u));
  /* 1109e90a push 2 */
  push32((uint32_t)(0x2u));
  /* 1109e90c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e90f push edx */
  push32((uint32_t)(EDX));
  /* 1109e910 call 0x1109e730 */
  push32(0x1109e915u); f_1109e730();
  /* 1109e915 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109e918:;
  /* 1109e918 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e91b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1109e922 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109e924 je 0x1109e943 */
  if (C.zf) goto L_1109e943;
  /* 1109e926 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109e929 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e92f push edx */
  push32((uint32_t)(EDX));
  /* 1109e930 push 0x110bc394 */
  push32((uint32_t)(0x110bc394u));
  /* 1109e935 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109e937 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e93a push eax */
  push32((uint32_t)(EAX));
  /* 1109e93b call 0x1109e730 */
  push32(0x1109e940u); f_1109e730();
  /* 1109e940 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109e943:;
  /* 1109e943 pop ebp */
  EBP = (pop32());
  /* 1109e944 ret  */
  ESPCHK(0x1109e8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e950 @ 0x1109e950 (130 bytes, 50 insns) */
void f_1109e950(void) {
  FTRACE(0x1109e950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109e950 push ebp */
  push32((uint32_t)(EBP));
  /* 1109e951 mov ebp, esp */
  EBP = (ESP);
  /* 1109e953 push ecx */
  push32((uint32_t)(ECX));
  /* 1109e954 push ebx */
  push32((uint32_t)(EBX));
  /* 1109e955 push esi */
  push32((uint32_t)(ESI));
  /* 1109e956 push edi */
  push32((uint32_t)(EDI));
  /* 1109e957 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1109e95e:;
  /* 1109e95e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e962 jne 0x1109e982 */
  if (!C.zf) goto L_1109e982;
  /* 1109e964 push 0x110bc3a8 */
  push32((uint32_t)(0x110bc3a8u));
  /* 1109e969 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109e96b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1109e96d push 0x110bc39c */
  push32((uint32_t)(0x110bc39cu));
  /* 1109e972 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109e974 call 0x11093470 */
  push32(0x1109e979u); f_11093470();
  /* 1109e979 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e97c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e97f jne 0x1109e982 */
  if (!C.zf) goto L_1109e982;
  /* 1109e981 int3  */
  x86_unimpl("int3 @ 0x1109e981");
L_1109e982:;
  /* 1109e982 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109e984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109e986 jne 0x1109e95e */
  if (!C.zf) goto L_1109e95e;
  /* 1109e988 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e98b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1109e98e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1109e991 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109e993 je 0x1109e9a1 */
  if (C.zf) goto L_1109e9a1;
  /* 1109e995 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e998 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1109e99f jmp 0x1109e9c8 */
  goto L_1109e9c8;
L_1109e9a1:;
  /* 1109e9a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e9a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1109e9a5 call 0x1109d1c0 */
  push32(0x1109e9aau); f_1109d1c0();
  /* 1109e9aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e9ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e9b0 push edx */
  push32((uint32_t)(EDX));
  /* 1109e9b1 call 0x1109e9e0 */
  push32(0x1109e9b6u); f_1109e9e0();
  /* 1109e9b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109e9b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109e9bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e9bf push eax */
  push32((uint32_t)(EAX));
  /* 1109e9c0 call 0x1109d230 */
  push32(0x1109e9c5u); f_1109d230();
  /* 1109e9c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109e9c8:;
  /* 1109e9c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109e9cb pop edi */
  EDI = (pop32());
  /* 1109e9cc pop esi */
  ESI = (pop32());
  /* 1109e9cd pop ebx */
  EBX = (pop32());
  /* 1109e9ce mov esp, ebp */
  ESP = (EBP);
  /* 1109e9d0 pop ebp */
  EBP = (pop32());
  /* 1109e9d1 ret  */
  ESPCHK(0x1109e950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9e0 @ 0x1109e9e0 (190 bytes, 67 insns) */
void f_1109e9e0(void) {
  FTRACE(0x1109e9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109e9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109e9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1109e9e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109e9e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1109e9e7 push esi */
  push32((uint32_t)(ESI));
  /* 1109e9e8 push edi */
  push32((uint32_t)(EDI));
  /* 1109e9e9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1109e9f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109e9f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1109e9f6:;
  /* 1109e9f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109e9fa jne 0x1109ea1a */
  if (!C.zf) goto L_1109ea1a;
  /* 1109e9fc push 0x110bc24c */
  push32((uint32_t)(0x110bc24cu));
  /* 1109ea01 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109ea03 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1109ea05 push 0x110bc39c */
  push32((uint32_t)(0x110bc39cu));
  /* 1109ea0a push 2 */
  push32((uint32_t)(0x2u));
  /* 1109ea0c call 0x11093470 */
  push32(0x1109ea11u); f_11093470();
  /* 1109ea11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ea14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ea17 jne 0x1109ea1a */
  if (!C.zf) goto L_1109ea1a;
  /* 1109ea19 int3  */
  x86_unimpl("int3 @ 0x1109ea19");
L_1109ea1a:;
  /* 1109ea1a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ea1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109ea1e jne 0x1109e9f6 */
  if (!C.zf) goto L_1109e9f6;
  /* 1109ea20 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109ea23 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1109ea26 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1109ea2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109ea2d je 0x1109ea8a */
  if (C.zf) goto L_1109ea8a;
  /* 1109ea2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109ea32 push ecx */
  push32((uint32_t)(ECX));
  /* 1109ea33 call 0x1109dce0 */
  push32(0x1109ea38u); f_1109dce0();
  /* 1109ea38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ea3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109ea3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109ea41 push edx */
  push32((uint32_t)(EDX));
  /* 1109ea42 call 0x110a1060 */
  push32(0x1109ea47u); f_110a1060();
  /* 1109ea47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ea4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109ea4d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1109ea50 push ecx */
  push32((uint32_t)(ECX));
  /* 1109ea51 call 0x110a0f30 */
  push32(0x1109ea56u); f_110a0f30();
  /* 1109ea56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ea59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109ea5b jge 0x1109ea66 */
  if ((C.sf==C.of)) goto L_1109ea66;
  /* 1109ea5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1109ea64 jmp 0x1109ea8a */
  goto L_1109ea8a;
L_1109ea66:;
  /* 1109ea66 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109ea69 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ea6d je 0x1109ea8a */
  if (C.zf) goto L_1109ea8a;
  /* 1109ea6f push 2 */
  push32((uint32_t)(0x2u));
  /* 1109ea71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109ea74 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1109ea77 push ecx */
  push32((uint32_t)(ECX));
  /* 1109ea78 call 0x11094e40 */
  push32(0x1109ea7du); f_11094e40();
  /* 1109ea7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ea80 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109ea83 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1109ea8a:;
  /* 1109ea8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109ea8d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1109ea94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ea97 pop edi */
  EDI = (pop32());
  /* 1109ea98 pop esi */
  ESI = (pop32());
  /* 1109ea99 pop ebx */
  EBX = (pop32());
  /* 1109ea9a mov esp, ebp */
  ESP = (EBP);
  /* 1109ea9c pop ebp */
  EBP = (pop32());
  /* 1109ea9d ret  */
  ESPCHK(0x1109e9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaa0 @ 0x1109eaa0 (210 bytes, 63 insns) */
void f_1109eaa0(void) {
  FTRACE(0x1109eaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109eaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109eaa1 mov ebp, esp */
  EBP = (ESP);
  /* 1109eaa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1109eaa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109eaa7 cmp eax, dword ptr [0x110c211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110c211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109eaad jae 0x1109ead1 */
  if (!C.cf) goto L_1109ead1;
  /* 1109eaaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109eab2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1109eab5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109eab8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1109eabb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109eabe mov eax, dword ptr [ecx*4 + 0x110c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110c1fe0)));
  /* 1109eac5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1109eaca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1109eacd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109eacf jne 0x1109eae4 */
  if (!C.zf) goto L_1109eae4;
L_1109ead1:;
  /* 1109ead1 call 0x1109c280 */
  push32(0x1109ead6u); f_1109c280();
  /* 1109ead6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1109eadc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109eadf jmp 0x1109eb6e */
  goto L_1109eb6e;
L_1109eae4:;
  /* 1109eae4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109eae7 push edx */
  push32((uint32_t)(EDX));
  /* 1109eae8 call 0x1109daa0 */
  push32(0x1109eaedu); f_1109daa0();
  /* 1109eaed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109eaf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109eaf3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1109eaf6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109eaf9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1109eafc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109eaff mov edx, dword ptr [eax*4 + 0x110c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110c1fe0)));
  /* 1109eb06 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1109eb0b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1109eb0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109eb10 je 0x1109eb4d */
  if (C.zf) goto L_1109eb4d;
  /* 1109eb12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109eb15 push ecx */
  push32((uint32_t)(ECX));
  /* 1109eb16 call 0x1109d920 */
  push32(0x1109eb1bu); f_1109d920();
  /* 1109eb1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109eb1e push eax */
  push32((uint32_t)(EAX));
  /* 1109eb1f call dword ptr [0x110c3278] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3278))), 0x1109eb25u);
  /* 1109eb25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109eb27 jne 0x1109eb34 */
  if (!C.zf) goto L_1109eb34;
  /* 1109eb29 call dword ptr [0x110c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32e0))), 0x1109eb2fu);
  /* 1109eb2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109eb32 jmp 0x1109eb3b */
  goto L_1109eb3b;
L_1109eb34:;
  /* 1109eb34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1109eb3b:;
  /* 1109eb3b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109eb3f jne 0x1109eb43 */
  if (!C.zf) goto L_1109eb43;
  /* 1109eb41 jmp 0x1109eb5f */
  goto L_1109eb5f;
L_1109eb43:;
  /* 1109eb43 call 0x1109c290 */
  push32(0x1109eb48u); f_1109c290();
  /* 1109eb48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109eb4b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1109eb4d:;
  /* 1109eb4d call 0x1109c280 */
  push32(0x1109eb52u); f_1109c280();
  /* 1109eb52 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1109eb58 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1109eb5f:;
  /* 1109eb5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109eb62 push eax */
  push32((uint32_t)(EAX));
  /* 1109eb63 call 0x1109db30 */
  push32(0x1109eb68u); f_1109db30();
  /* 1109eb68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109eb6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1109eb6e:;
  /* 1109eb6e mov esp, ebp */
  ESP = (EBP);
  /* 1109eb70 pop ebp */
  EBP = (pop32());
  /* 1109eb71 ret  */
  ESPCHK(0x1109eaa0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1109eb80 (219 bytes, 64 insns) */
void f_1109eb80(void) {
  FTRACE(0x1109eb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109eb80 push ebp */
  push32((uint32_t)(EBP));
  /* 1109eb81 mov ebp, esp */
  EBP = (ESP);
  /* 1109eb83 push ecx */
  push32((uint32_t)(ECX));
  /* 1109eb84 cmp dword ptr [0x110c080c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c080c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109eb8b je 0x1109ec21 */
  if (C.zf) goto L_1109ec21;
  /* 1109eb91 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1109eb93 push 0x110bc3b8 */
  push32((uint32_t)(0x110bc3b8u));
  /* 1109eb98 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109eb9a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1109eb9f push 1 */
  push32((uint32_t)(0x1u));
  /* 1109eba1 call 0x110947c0 */
  push32(0x1109eba6u); f_110947c0();
  /* 1109eba6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109eba9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109ebac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ebb0 jne 0x1109ebbc */
  if (!C.zf) goto L_1109ebbc;
  /* 1109ebb2 mov eax, 1 */
  EAX = (0x1u);
  /* 1109ebb7 jmp 0x1109ec57 */
  goto L_1109ec57;
L_1109ebbc:;
  /* 1109ebbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ebbf push eax */
  push32((uint32_t)(EAX));
  /* 1109ebc0 call 0x1109ec60 */
  push32(0x1109ebc5u); f_1109ec60();
  /* 1109ebc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ebc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109ebca je 0x1109ebed */
  if (C.zf) goto L_1109ebed;
  /* 1109ebcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ebcf push ecx */
  push32((uint32_t)(ECX));
  /* 1109ebd0 call 0x1109f1f0 */
  push32(0x1109ebd5u); f_1109f1f0();
  /* 1109ebd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ebd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109ebda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ebdd push edx */
  push32((uint32_t)(EDX));
  /* 1109ebde call 0x11094e40 */
  push32(0x1109ebe3u); f_11094e40();
  /* 1109ebe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ebe6 mov eax, 1 */
  EAX = (0x1u);
  /* 1109ebeb jmp 0x1109ec57 */
  goto L_1109ec57;
L_1109ebed:;
  /* 1109ebed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ebf0 mov dword ptr [0x110bfc98], eax */
  w32((uint32_t)(0x110bfc98), (EAX));
  /* 1109ebf5 mov ecx, dword ptr [0x110c082c] */
  ECX = (r32((uint32_t)(0x110c082c)));
  /* 1109ebfb push ecx */
  push32((uint32_t)(ECX));
  /* 1109ebfc call 0x1109f1f0 */
  push32(0x1109ec01u); f_1109f1f0();
  /* 1109ec01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ec04 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109ec06 mov edx, dword ptr [0x110c082c] */
  EDX = (r32((uint32_t)(0x110c082c)));
  /* 1109ec0c push edx */
  push32((uint32_t)(EDX));
  /* 1109ec0d call 0x11094e40 */
  push32(0x1109ec12u); f_11094e40();
  /* 1109ec12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ec15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ec18 mov dword ptr [0x110c082c], eax */
  w32((uint32_t)(0x110c082c), (EAX));
  /* 1109ec1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109ec1f jmp 0x1109ec57 */
  goto L_1109ec57;
L_1109ec21:;
  /* 1109ec21 mov dword ptr [0x110bfc98], 0x110bfca0 */
  w32((uint32_t)(0x110bfc98), (0x110bfca0u));
  /* 1109ec2b mov ecx, dword ptr [0x110c082c] */
  ECX = (r32((uint32_t)(0x110c082c)));
  /* 1109ec31 push ecx */
  push32((uint32_t)(ECX));
  /* 1109ec32 call 0x1109f1f0 */
  push32(0x1109ec37u); f_1109f1f0();
  /* 1109ec37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ec3a push 2 */
  push32((uint32_t)(0x2u));
  /* 1109ec3c mov edx, dword ptr [0x110c082c] */
  EDX = (r32((uint32_t)(0x110c082c)));
  /* 1109ec42 push edx */
  push32((uint32_t)(EDX));
  /* 1109ec43 call 0x11094e40 */
  push32(0x1109ec48u); f_11094e40();
  /* 1109ec48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ec4b mov dword ptr [0x110c082c], 0 */
  w32((uint32_t)(0x110c082c), (0x0u));
  /* 1109ec55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1109ec57:;
  /* 1109ec57 mov esp, ebp */
  ESP = (EBP);
  /* 1109ec59 pop ebp */
  EBP = (pop32());
  /* 1109ec5a ret  */
  ESPCHK(0x1109eb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec60 @ 0x1109ec60 (1423 bytes, 533 insns) */
void f_1109ec60(void) {
  FTRACE(0x1109ec60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109ec60 push ebp */
  push32((uint32_t)(EBP));
  /* 1109ec61 mov ebp, esp */
  EBP = (ESP);
  /* 1109ec63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109ec66 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1109ec6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109ec6f mov ax, word ptr [0x110c0866] */
  AX = (r16((uint32_t)(0x110c0866)));
  /* 1109ec75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109ec78 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ec7a mov cx, word ptr [0x110c0868] */
  CX = (r16((uint32_t)(0x110c0868)));
  /* 1109ec81 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109ec84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ec88 jne 0x1109ec92 */
  if (!C.zf) goto L_1109ec92;
  /* 1109ec8a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109ec8d jmp 0x1109f1eb */
  goto L_1109f1eb;
L_1109ec92:;
  /* 1109ec92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ec95 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ec98 push edx */
  push32((uint32_t)(EDX));
  /* 1109ec99 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1109ec9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ec9e push eax */
  push32((uint32_t)(EAX));
  /* 1109ec9f push 1 */
  push32((uint32_t)(0x1u));
  /* 1109eca1 call 0x110a2570 */
  push32(0x1109eca6u); f_110a2570();
  /* 1109eca6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109eca9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ecac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ecae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ecb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ecb4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ecb7 push edx */
  push32((uint32_t)(EDX));
  /* 1109ecb8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1109ecba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ecbd push eax */
  push32((uint32_t)(EAX));
  /* 1109ecbe push 1 */
  push32((uint32_t)(0x1u));
  /* 1109ecc0 call 0x110a2570 */
  push32(0x1109ecc5u); f_110a2570();
  /* 1109ecc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ecc8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109eccb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109eccd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ecd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ecd3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ecd6 push edx */
  push32((uint32_t)(EDX));
  /* 1109ecd7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1109ecd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ecdc push eax */
  push32((uint32_t)(EAX));
  /* 1109ecdd push 1 */
  push32((uint32_t)(0x1u));
  /* 1109ecdf call 0x110a2570 */
  push32(0x1109ece4u); f_110a2570();
  /* 1109ece4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ece7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ecea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ecec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ecef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ecf2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ecf5 push edx */
  push32((uint32_t)(EDX));
  /* 1109ecf6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1109ecf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ecfb push eax */
  push32((uint32_t)(EAX));
  /* 1109ecfc push 1 */
  push32((uint32_t)(0x1u));
  /* 1109ecfe call 0x110a2570 */
  push32(0x1109ed03u); f_110a2570();
  /* 1109ed03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ed06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ed09 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ed0b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ed0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ed11 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ed14 push edx */
  push32((uint32_t)(EDX));
  /* 1109ed15 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1109ed17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ed1a push eax */
  push32((uint32_t)(EAX));
  /* 1109ed1b push 1 */
  push32((uint32_t)(0x1u));
  /* 1109ed1d call 0x110a2570 */
  push32(0x1109ed22u); f_110a2570();
  /* 1109ed22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ed25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ed28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ed2a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ed2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ed30 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ed33 push edx */
  push32((uint32_t)(EDX));
  /* 1109ed34 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1109ed36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ed39 push eax */
  push32((uint32_t)(EAX));
  /* 1109ed3a push 1 */
  push32((uint32_t)(0x1u));
  /* 1109ed3c call 0x110a2570 */
  push32(0x1109ed41u); f_110a2570();
  /* 1109ed41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ed44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ed47 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ed49 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ed4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ed4f push edx */
  push32((uint32_t)(EDX));
  /* 1109ed50 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1109ed52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ed55 push eax */
  push32((uint32_t)(EAX));
  /* 1109ed56 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109ed58 call 0x110a2570 */
  push32(0x1109ed5du); f_110a2570();
  /* 1109ed5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ed60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ed63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ed65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ed68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ed6b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ed6e push edx */
  push32((uint32_t)(EDX));
  /* 1109ed6f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1109ed71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ed74 push eax */
  push32((uint32_t)(EAX));
  /* 1109ed75 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109ed77 call 0x110a2570 */
  push32(0x1109ed7cu); f_110a2570();
  /* 1109ed7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ed7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ed82 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ed84 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ed87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ed8a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ed8d push edx */
  push32((uint32_t)(EDX));
  /* 1109ed8e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1109ed90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ed93 push eax */
  push32((uint32_t)(EAX));
  /* 1109ed94 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109ed96 call 0x110a2570 */
  push32(0x1109ed9bu); f_110a2570();
  /* 1109ed9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ed9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109eda1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109eda3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109eda6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109eda9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109edac push edx */
  push32((uint32_t)(EDX));
  /* 1109edad push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1109edaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109edb2 push eax */
  push32((uint32_t)(EAX));
  /* 1109edb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109edb5 call 0x110a2570 */
  push32(0x1109edbau); f_110a2570();
  /* 1109edba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109edbd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109edc0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109edc2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109edc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109edc8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109edcb push edx */
  push32((uint32_t)(EDX));
  /* 1109edcc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1109edce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109edd1 push eax */
  push32((uint32_t)(EAX));
  /* 1109edd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109edd4 call 0x110a2570 */
  push32(0x1109edd9u); f_110a2570();
  /* 1109edd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109eddc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109eddf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ede1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ede4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ede7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109edea push edx */
  push32((uint32_t)(EDX));
  /* 1109edeb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1109eded mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109edf0 push eax */
  push32((uint32_t)(EAX));
  /* 1109edf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109edf3 call 0x110a2570 */
  push32(0x1109edf8u); f_110a2570();
  /* 1109edf8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109edfb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109edfe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ee00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ee03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ee06 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ee09 push edx */
  push32((uint32_t)(EDX));
  /* 1109ee0a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1109ee0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ee0f push eax */
  push32((uint32_t)(EAX));
  /* 1109ee10 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109ee12 call 0x110a2570 */
  push32(0x1109ee17u); f_110a2570();
  /* 1109ee17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ee1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ee1d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ee1f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ee22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ee25 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ee28 push edx */
  push32((uint32_t)(EDX));
  /* 1109ee29 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1109ee2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ee2e push eax */
  push32((uint32_t)(EAX));
  /* 1109ee2f push 1 */
  push32((uint32_t)(0x1u));
  /* 1109ee31 call 0x110a2570 */
  push32(0x1109ee36u); f_110a2570();
  /* 1109ee36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ee39 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ee3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ee3e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ee41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ee44 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ee47 push edx */
  push32((uint32_t)(EDX));
  /* 1109ee48 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1109ee4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ee4d push eax */
  push32((uint32_t)(EAX));
  /* 1109ee4e push 1 */
  push32((uint32_t)(0x1u));
  /* 1109ee50 call 0x110a2570 */
  push32(0x1109ee55u); f_110a2570();
  /* 1109ee55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ee58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ee5b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ee5d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ee60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ee63 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ee66 push edx */
  push32((uint32_t)(EDX));
  /* 1109ee67 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1109ee69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ee6c push eax */
  push32((uint32_t)(EAX));
  /* 1109ee6d push 1 */
  push32((uint32_t)(0x1u));
  /* 1109ee6f call 0x110a2570 */
  push32(0x1109ee74u); f_110a2570();
  /* 1109ee74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ee77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ee7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ee7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ee7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ee82 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ee85 push edx */
  push32((uint32_t)(EDX));
  /* 1109ee86 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1109ee88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ee8b push eax */
  push32((uint32_t)(EAX));
  /* 1109ee8c push 1 */
  push32((uint32_t)(0x1u));
  /* 1109ee8e call 0x110a2570 */
  push32(0x1109ee93u); f_110a2570();
  /* 1109ee93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ee96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ee99 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ee9b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ee9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109eea1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109eea4 push edx */
  push32((uint32_t)(EDX));
  /* 1109eea5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1109eea7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109eeaa push eax */
  push32((uint32_t)(EAX));
  /* 1109eeab push 1 */
  push32((uint32_t)(0x1u));
  /* 1109eead call 0x110a2570 */
  push32(0x1109eeb2u); f_110a2570();
  /* 1109eeb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109eeb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109eeb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109eeba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109eebd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109eec0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109eec3 push edx */
  push32((uint32_t)(EDX));
  /* 1109eec4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1109eec6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109eec9 push eax */
  push32((uint32_t)(EAX));
  /* 1109eeca push 1 */
  push32((uint32_t)(0x1u));
  /* 1109eecc call 0x110a2570 */
  push32(0x1109eed1u); f_110a2570();
  /* 1109eed1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109eed4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109eed7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109eed9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109eedc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109eedf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109eee2 push edx */
  push32((uint32_t)(EDX));
  /* 1109eee3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1109eee5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109eee8 push eax */
  push32((uint32_t)(EAX));
  /* 1109eee9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109eeeb call 0x110a2570 */
  push32(0x1109eef0u); f_110a2570();
  /* 1109eef0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109eef3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109eef6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109eef8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109eefb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109eefe add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ef01 push edx */
  push32((uint32_t)(EDX));
  /* 1109ef02 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1109ef04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ef07 push eax */
  push32((uint32_t)(EAX));
  /* 1109ef08 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109ef0a call 0x110a2570 */
  push32(0x1109ef0fu); f_110a2570();
  /* 1109ef0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ef12 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ef15 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ef17 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ef1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ef1d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ef20 push edx */
  push32((uint32_t)(EDX));
  /* 1109ef21 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1109ef23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ef26 push eax */
  push32((uint32_t)(EAX));
  /* 1109ef27 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109ef29 call 0x110a2570 */
  push32(0x1109ef2eu); f_110a2570();
  /* 1109ef2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ef31 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ef34 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ef36 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ef39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ef3c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ef3f push edx */
  push32((uint32_t)(EDX));
  /* 1109ef40 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1109ef42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ef45 push eax */
  push32((uint32_t)(EAX));
  /* 1109ef46 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109ef48 call 0x110a2570 */
  push32(0x1109ef4du); f_110a2570();
  /* 1109ef4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ef50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ef53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ef55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ef58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ef5b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ef5e push edx */
  push32((uint32_t)(EDX));
  /* 1109ef5f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1109ef61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ef64 push eax */
  push32((uint32_t)(EAX));
  /* 1109ef65 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109ef67 call 0x110a2570 */
  push32(0x1109ef6cu); f_110a2570();
  /* 1109ef6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ef6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ef72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ef74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ef77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ef7a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ef7d push edx */
  push32((uint32_t)(EDX));
  /* 1109ef7e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1109ef80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109ef83 push eax */
  push32((uint32_t)(EAX));
  /* 1109ef84 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109ef86 call 0x110a2570 */
  push32(0x1109ef8bu); f_110a2570();
  /* 1109ef8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ef8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109ef91 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109ef93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109ef96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109ef99 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ef9c push edx */
  push32((uint32_t)(EDX));
  /* 1109ef9d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1109ef9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109efa2 push eax */
  push32((uint32_t)(EAX));
  /* 1109efa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109efa5 call 0x110a2570 */
  push32(0x1109efaau); f_110a2570();
  /* 1109efaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109efad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109efb0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109efb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109efb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109efb8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109efbb push edx */
  push32((uint32_t)(EDX));
  /* 1109efbc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1109efbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109efc1 push eax */
  push32((uint32_t)(EAX));
  /* 1109efc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109efc4 call 0x110a2570 */
  push32(0x1109efc9u); f_110a2570();
  /* 1109efc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109efcc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109efcf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109efd1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109efd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109efd7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109efda push edx */
  push32((uint32_t)(EDX));
  /* 1109efdb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1109efdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109efe0 push eax */
  push32((uint32_t)(EAX));
  /* 1109efe1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109efe3 call 0x110a2570 */
  push32(0x1109efe8u); f_110a2570();
  /* 1109efe8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109efeb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109efee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109eff0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109eff3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109eff6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109eff9 push edx */
  push32((uint32_t)(EDX));
  /* 1109effa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1109effc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109efff push eax */
  push32((uint32_t)(EAX));
  /* 1109f000 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f002 call 0x110a2570 */
  push32(0x1109f007u); f_110a2570();
  /* 1109f007 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f00a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109f00d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f00f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109f012 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f015 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f018 push edx */
  push32((uint32_t)(EDX));
  /* 1109f019 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1109f01b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f01e push eax */
  push32((uint32_t)(EAX));
  /* 1109f01f push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f021 call 0x110a2570 */
  push32(0x1109f026u); f_110a2570();
  /* 1109f026 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f029 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109f02c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f02e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109f031 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f034 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f037 push edx */
  push32((uint32_t)(EDX));
  /* 1109f038 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1109f03a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f03d push eax */
  push32((uint32_t)(EAX));
  /* 1109f03e push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f040 call 0x110a2570 */
  push32(0x1109f045u); f_110a2570();
  /* 1109f045 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f048 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109f04b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f04d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109f050 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f053 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f056 push edx */
  push32((uint32_t)(EDX));
  /* 1109f057 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1109f059 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f05c push eax */
  push32((uint32_t)(EAX));
  /* 1109f05d push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f05f call 0x110a2570 */
  push32(0x1109f064u); f_110a2570();
  /* 1109f064 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f067 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109f06a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f06c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109f06f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f072 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f078 push edx */
  push32((uint32_t)(EDX));
  /* 1109f079 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1109f07b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f07e push eax */
  push32((uint32_t)(EAX));
  /* 1109f07f push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f081 call 0x110a2570 */
  push32(0x1109f086u); f_110a2570();
  /* 1109f086 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f089 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109f08c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f08e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109f091 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f094 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f09a push edx */
  push32((uint32_t)(EDX));
  /* 1109f09b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1109f09d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f0a0 push eax */
  push32((uint32_t)(EAX));
  /* 1109f0a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f0a3 call 0x110a2570 */
  push32(0x1109f0a8u); f_110a2570();
  /* 1109f0a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f0ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109f0ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f0b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109f0b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f0b6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f0bc push edx */
  push32((uint32_t)(EDX));
  /* 1109f0bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1109f0bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f0c2 push eax */
  push32((uint32_t)(EAX));
  /* 1109f0c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f0c5 call 0x110a2570 */
  push32(0x1109f0cau); f_110a2570();
  /* 1109f0ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f0cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109f0d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f0d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109f0d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f0d8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f0de push edx */
  push32((uint32_t)(EDX));
  /* 1109f0df push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1109f0e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f0e4 push eax */
  push32((uint32_t)(EAX));
  /* 1109f0e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f0e7 call 0x110a2570 */
  push32(0x1109f0ecu); f_110a2570();
  /* 1109f0ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f0ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109f0f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f0f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109f0f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f0fa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f100 push edx */
  push32((uint32_t)(EDX));
  /* 1109f101 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1109f103 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f106 push eax */
  push32((uint32_t)(EAX));
  /* 1109f107 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f109 call 0x110a2570 */
  push32(0x1109f10eu); f_110a2570();
  /* 1109f10e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f111 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109f114 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f116 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109f119 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f11c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f122 push edx */
  push32((uint32_t)(EDX));
  /* 1109f123 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1109f125 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f128 push eax */
  push32((uint32_t)(EAX));
  /* 1109f129 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f12b call 0x110a2570 */
  push32(0x1109f130u); f_110a2570();
  /* 1109f130 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f133 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109f136 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f138 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109f13b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f13e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f144 push edx */
  push32((uint32_t)(EDX));
  /* 1109f145 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1109f147 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f14a push eax */
  push32((uint32_t)(EAX));
  /* 1109f14b push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f14d call 0x110a2570 */
  push32(0x1109f152u); f_110a2570();
  /* 1109f152 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f155 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109f158 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f15a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109f15d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f160 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f166 push edx */
  push32((uint32_t)(EDX));
  /* 1109f167 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1109f169 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f16c push eax */
  push32((uint32_t)(EAX));
  /* 1109f16d push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f16f call 0x110a2570 */
  push32(0x1109f174u); f_110a2570();
  /* 1109f174 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f177 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109f17a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f17c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109f17f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f182 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f188 push edx */
  push32((uint32_t)(EDX));
  /* 1109f189 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1109f18b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109f18e push eax */
  push32((uint32_t)(EAX));
  /* 1109f18f push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f191 call 0x110a2570 */
  push32(0x1109f196u); f_110a2570();
  /* 1109f196 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f199 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109f19c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f19e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109f1a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f1a4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f1aa push edx */
  push32((uint32_t)(EDX));
  /* 1109f1ab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1109f1ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109f1b0 push eax */
  push32((uint32_t)(EAX));
  /* 1109f1b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f1b3 call 0x110a2570 */
  push32(0x1109f1b8u); f_110a2570();
  /* 1109f1b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f1bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109f1be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f1c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109f1c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f1c6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f1cc push edx */
  push32((uint32_t)(EDX));
  /* 1109f1cd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1109f1d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109f1d5 push eax */
  push32((uint32_t)(EAX));
  /* 1109f1d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f1d8 call 0x110a2570 */
  push32(0x1109f1ddu); f_110a2570();
  /* 1109f1dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f1e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109f1e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f1e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109f1e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1109f1eb:;
  /* 1109f1eb mov esp, ebp */
  ESP = (EBP);
  /* 1109f1ed pop ebp */
  EBP = (pop32());
  /* 1109f1ee ret  */
  ESPCHK(0x1109ec60u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1109f1f0 (779 bytes, 265 insns) */
void f_1109f1f0(void) {
  FTRACE(0x1109f1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109f1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109f1f1 mov ebp, esp */
  EBP = (ESP);
  /* 1109f1f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109f1f7 jne 0x1109f1fe */
  if (!C.zf) goto L_1109f1fe;
  /* 1109f1f9 jmp 0x1109f4f9 */
  goto L_1109f4f9;
L_1109f1fe:;
  /* 1109f1fe push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f200 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f203 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1109f206 push ecx */
  push32((uint32_t)(ECX));
  /* 1109f207 call 0x11094e40 */
  push32(0x1109f20cu); f_11094e40();
  /* 1109f20c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f20f push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f211 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f214 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1109f217 push eax */
  push32((uint32_t)(EAX));
  /* 1109f218 call 0x11094e40 */
  push32(0x1109f21du); f_11094e40();
  /* 1109f21d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f220 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f222 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f225 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1109f228 push edx */
  push32((uint32_t)(EDX));
  /* 1109f229 call 0x11094e40 */
  push32(0x1109f22eu); f_11094e40();
  /* 1109f22e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f231 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f233 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f236 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1109f239 push ecx */
  push32((uint32_t)(ECX));
  /* 1109f23a call 0x11094e40 */
  push32(0x1109f23fu); f_11094e40();
  /* 1109f23f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f242 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f244 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f247 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1109f24a push eax */
  push32((uint32_t)(EAX));
  /* 1109f24b call 0x11094e40 */
  push32(0x1109f250u); f_11094e40();
  /* 1109f250 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f253 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f255 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f258 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1109f25b push edx */
  push32((uint32_t)(EDX));
  /* 1109f25c call 0x11094e40 */
  push32(0x1109f261u); f_11094e40();
  /* 1109f261 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f264 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f269 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1109f26b push ecx */
  push32((uint32_t)(ECX));
  /* 1109f26c call 0x11094e40 */
  push32(0x1109f271u); f_11094e40();
  /* 1109f271 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f274 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f276 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f279 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1109f27c push eax */
  push32((uint32_t)(EAX));
  /* 1109f27d call 0x11094e40 */
  push32(0x1109f282u); f_11094e40();
  /* 1109f282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f285 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f287 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f28a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1109f28d push edx */
  push32((uint32_t)(EDX));
  /* 1109f28e call 0x11094e40 */
  push32(0x1109f293u); f_11094e40();
  /* 1109f293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f296 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f298 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f29b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1109f29e push ecx */
  push32((uint32_t)(ECX));
  /* 1109f29f call 0x11094e40 */
  push32(0x1109f2a4u); f_11094e40();
  /* 1109f2a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f2a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f2a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f2ac mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1109f2af push eax */
  push32((uint32_t)(EAX));
  /* 1109f2b0 call 0x11094e40 */
  push32(0x1109f2b5u); f_11094e40();
  /* 1109f2b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f2b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f2ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f2bd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1109f2c0 push edx */
  push32((uint32_t)(EDX));
  /* 1109f2c1 call 0x11094e40 */
  push32(0x1109f2c6u); f_11094e40();
  /* 1109f2c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f2c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f2cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f2ce mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1109f2d1 push ecx */
  push32((uint32_t)(ECX));
  /* 1109f2d2 call 0x11094e40 */
  push32(0x1109f2d7u); f_11094e40();
  /* 1109f2d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f2da push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f2dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f2df mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1109f2e2 push eax */
  push32((uint32_t)(EAX));
  /* 1109f2e3 call 0x11094e40 */
  push32(0x1109f2e8u); f_11094e40();
  /* 1109f2e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f2eb push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f2ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f2f0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1109f2f3 push edx */
  push32((uint32_t)(EDX));
  /* 1109f2f4 call 0x11094e40 */
  push32(0x1109f2f9u); f_11094e40();
  /* 1109f2f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f2fc push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f2fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f301 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1109f304 push ecx */
  push32((uint32_t)(ECX));
  /* 1109f305 call 0x11094e40 */
  push32(0x1109f30au); f_11094e40();
  /* 1109f30a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f30d push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f30f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f312 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1109f315 push eax */
  push32((uint32_t)(EAX));
  /* 1109f316 call 0x11094e40 */
  push32(0x1109f31bu); f_11094e40();
  /* 1109f31b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f31e push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f320 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f323 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1109f326 push edx */
  push32((uint32_t)(EDX));
  /* 1109f327 call 0x11094e40 */
  push32(0x1109f32cu); f_11094e40();
  /* 1109f32c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f32f push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f331 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f334 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1109f337 push ecx */
  push32((uint32_t)(ECX));
  /* 1109f338 call 0x11094e40 */
  push32(0x1109f33du); f_11094e40();
  /* 1109f33d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f340 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f342 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f345 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1109f348 push eax */
  push32((uint32_t)(EAX));
  /* 1109f349 call 0x11094e40 */
  push32(0x1109f34eu); f_11094e40();
  /* 1109f34e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f351 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f353 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f356 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1109f359 push edx */
  push32((uint32_t)(EDX));
  /* 1109f35a call 0x11094e40 */
  push32(0x1109f35fu); f_11094e40();
  /* 1109f35f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f362 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f367 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1109f36a push ecx */
  push32((uint32_t)(ECX));
  /* 1109f36b call 0x11094e40 */
  push32(0x1109f370u); f_11094e40();
  /* 1109f370 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f373 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f375 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f378 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1109f37b push eax */
  push32((uint32_t)(EAX));
  /* 1109f37c call 0x11094e40 */
  push32(0x1109f381u); f_11094e40();
  /* 1109f381 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f384 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f386 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f389 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1109f38c push edx */
  push32((uint32_t)(EDX));
  /* 1109f38d call 0x11094e40 */
  push32(0x1109f392u); f_11094e40();
  /* 1109f392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f395 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f397 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f39a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1109f39d push ecx */
  push32((uint32_t)(ECX));
  /* 1109f39e call 0x11094e40 */
  push32(0x1109f3a3u); f_11094e40();
  /* 1109f3a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f3a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f3a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f3ab mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1109f3ae push eax */
  push32((uint32_t)(EAX));
  /* 1109f3af call 0x11094e40 */
  push32(0x1109f3b4u); f_11094e40();
  /* 1109f3b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f3b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f3b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f3bc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1109f3bf push edx */
  push32((uint32_t)(EDX));
  /* 1109f3c0 call 0x11094e40 */
  push32(0x1109f3c5u); f_11094e40();
  /* 1109f3c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f3c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f3ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f3cd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1109f3d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1109f3d1 call 0x11094e40 */
  push32(0x1109f3d6u); f_11094e40();
  /* 1109f3d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f3d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f3db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f3de mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1109f3e1 push eax */
  push32((uint32_t)(EAX));
  /* 1109f3e2 call 0x11094e40 */
  push32(0x1109f3e7u); f_11094e40();
  /* 1109f3e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f3ea push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f3ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f3ef mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1109f3f2 push edx */
  push32((uint32_t)(EDX));
  /* 1109f3f3 call 0x11094e40 */
  push32(0x1109f3f8u); f_11094e40();
  /* 1109f3f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f3fb push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f3fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f400 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1109f403 push ecx */
  push32((uint32_t)(ECX));
  /* 1109f404 call 0x11094e40 */
  push32(0x1109f409u); f_11094e40();
  /* 1109f409 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f40c push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f40e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f411 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1109f414 push eax */
  push32((uint32_t)(EAX));
  /* 1109f415 call 0x11094e40 */
  push32(0x1109f41au); f_11094e40();
  /* 1109f41a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f41d push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f41f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f422 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1109f428 push edx */
  push32((uint32_t)(EDX));
  /* 1109f429 call 0x11094e40 */
  push32(0x1109f42eu); f_11094e40();
  /* 1109f42e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f431 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f433 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f436 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1109f43c push ecx */
  push32((uint32_t)(ECX));
  /* 1109f43d call 0x11094e40 */
  push32(0x1109f442u); f_11094e40();
  /* 1109f442 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f445 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f447 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f44a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1109f450 push eax */
  push32((uint32_t)(EAX));
  /* 1109f451 call 0x11094e40 */
  push32(0x1109f456u); f_11094e40();
  /* 1109f456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f459 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f45b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f45e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1109f464 push edx */
  push32((uint32_t)(EDX));
  /* 1109f465 call 0x11094e40 */
  push32(0x1109f46au); f_11094e40();
  /* 1109f46a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f46d push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f46f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f472 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1109f478 push ecx */
  push32((uint32_t)(ECX));
  /* 1109f479 call 0x11094e40 */
  push32(0x1109f47eu); f_11094e40();
  /* 1109f47e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f481 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f483 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f486 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1109f48c push eax */
  push32((uint32_t)(EAX));
  /* 1109f48d call 0x11094e40 */
  push32(0x1109f492u); f_11094e40();
  /* 1109f492 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f495 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f497 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f49a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1109f4a0 push edx */
  push32((uint32_t)(EDX));
  /* 1109f4a1 call 0x11094e40 */
  push32(0x1109f4a6u); f_11094e40();
  /* 1109f4a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f4a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f4ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f4ae mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1109f4b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1109f4b5 call 0x11094e40 */
  push32(0x1109f4bau); f_11094e40();
  /* 1109f4ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f4bd push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f4bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f4c2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1109f4c8 push eax */
  push32((uint32_t)(EAX));
  /* 1109f4c9 call 0x11094e40 */
  push32(0x1109f4ceu); f_11094e40();
  /* 1109f4ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f4d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f4d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f4d6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1109f4dc push edx */
  push32((uint32_t)(EDX));
  /* 1109f4dd call 0x11094e40 */
  push32(0x1109f4e2u); f_11094e40();
  /* 1109f4e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f4e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f4e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f4ea mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1109f4f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1109f4f1 call 0x11094e40 */
  push32(0x1109f4f6u); f_11094e40();
  /* 1109f4f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109f4f9:;
  /* 1109f4f9 pop ebp */
  EBP = (pop32());
  /* 1109f4fa ret  */
  ESPCHK(0x1109f1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f500 @ 0x1109f500 (678 bytes, 180 insns) */
void f_1109f500(void) {
  FTRACE(0x1109f500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109f500 push ebp */
  push32((uint32_t)(EBP));
  /* 1109f501 mov ebp, esp */
  EBP = (ESP);
  /* 1109f503 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109f506 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1109f50d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109f50f mov ax, word ptr [0x110c0862] */
  AX = (r16((uint32_t)(0x110c0862)));
  /* 1109f515 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109f518 cmp dword ptr [0x110c0808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109f51f je 0x1109f67a */
  if (C.zf) goto L_1109f67a;
  /* 1109f525 push 0x110c0830 */
  push32((uint32_t)(0x110c0830u));
  /* 1109f52a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1109f52c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f52f push ecx */
  push32((uint32_t)(ECX));
  /* 1109f530 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f532 call 0x110a2570 */
  push32(0x1109f537u); f_110a2570();
  /* 1109f537 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f53a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109f53d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1109f53f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1109f542 push 0x110c0834 */
  push32((uint32_t)(0x110c0834u));
  /* 1109f547 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1109f549 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f54c push eax */
  push32((uint32_t)(EAX));
  /* 1109f54d push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f54f call 0x110a2570 */
  push32(0x1109f554u); f_110a2570();
  /* 1109f554 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f557 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109f55a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f55c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109f55f push 0x110c0838 */
  push32((uint32_t)(0x110c0838u));
  /* 1109f564 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1109f566 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f569 push edx */
  push32((uint32_t)(EDX));
  /* 1109f56a push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f56c call 0x110a2570 */
  push32(0x1109f571u); f_110a2570();
  /* 1109f571 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f574 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109f577 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f579 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109f57c mov edx, dword ptr [0x110c0838] */
  EDX = (r32((uint32_t)(0x110c0838)));
  /* 1109f582 push edx */
  push32((uint32_t)(EDX));
  /* 1109f583 call 0x1109f7b0 */
  push32(0x1109f588u); f_1109f7b0();
  /* 1109f588 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f58b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109f58f je 0x1109f5e9 */
  if (C.zf) goto L_1109f5e9;
  /* 1109f591 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f593 mov eax, dword ptr [0x110c0830] */
  EAX = (r32((uint32_t)(0x110c0830)));
  /* 1109f598 push eax */
  push32((uint32_t)(EAX));
  /* 1109f599 call 0x11094e40 */
  push32(0x1109f59eu); f_11094e40();
  /* 1109f59e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f5a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f5a3 mov ecx, dword ptr [0x110c0834] */
  ECX = (r32((uint32_t)(0x110c0834)));
  /* 1109f5a9 push ecx */
  push32((uint32_t)(ECX));
  /* 1109f5aa call 0x11094e40 */
  push32(0x1109f5afu); f_11094e40();
  /* 1109f5af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f5b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f5b4 mov edx, dword ptr [0x110c0838] */
  EDX = (r32((uint32_t)(0x110c0838)));
  /* 1109f5ba push edx */
  push32((uint32_t)(EDX));
  /* 1109f5bb call 0x11094e40 */
  push32(0x1109f5c0u); f_11094e40();
  /* 1109f5c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f5c3 mov dword ptr [0x110c0830], 0 */
  w32((uint32_t)(0x110c0830), (0x0u));
  /* 1109f5cd mov dword ptr [0x110c0834], 0 */
  w32((uint32_t)(0x110c0834), (0x0u));
  /* 1109f5d7 mov dword ptr [0x110c0838], 0 */
  w32((uint32_t)(0x110c0838), (0x0u));
  /* 1109f5e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109f5e4 jmp 0x1109f7a2 */
  goto L_1109f7a2;
L_1109f5e9:;
  /* 1109f5e9 mov eax, dword ptr [0x110bfd88] */
  EAX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f5ee cmp dword ptr [eax], 0x110bfd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x110bfd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109f5f4 je 0x1109f630 */
  if (C.zf) goto L_1109f630;
  /* 1109f5f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f5f8 mov ecx, dword ptr [0x110bfd88] */
  ECX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f5fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1109f600 push edx */
  push32((uint32_t)(EDX));
  /* 1109f601 call 0x11094e40 */
  push32(0x1109f606u); f_11094e40();
  /* 1109f606 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f609 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f60b mov eax, dword ptr [0x110bfd88] */
  EAX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f610 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1109f613 push ecx */
  push32((uint32_t)(ECX));
  /* 1109f614 call 0x11094e40 */
  push32(0x1109f619u); f_11094e40();
  /* 1109f619 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f61c push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f61e mov edx, dword ptr [0x110bfd88] */
  EDX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f624 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1109f627 push eax */
  push32((uint32_t)(EAX));
  /* 1109f628 call 0x11094e40 */
  push32(0x1109f62du); f_11094e40();
  /* 1109f62d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109f630:;
  /* 1109f630 mov ecx, dword ptr [0x110bfd88] */
  ECX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f636 mov edx, dword ptr [0x110c0830] */
  EDX = (r32((uint32_t)(0x110c0830)));
  /* 1109f63c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1109f63e mov eax, dword ptr [0x110bfd88] */
  EAX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f643 mov ecx, dword ptr [0x110c0834] */
  ECX = (r32((uint32_t)(0x110c0834)));
  /* 1109f649 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1109f64c mov edx, dword ptr [0x110bfd88] */
  EDX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f652 mov eax, dword ptr [0x110c0838] */
  EAX = (r32((uint32_t)(0x110c0838)));
  /* 1109f657 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1109f65a mov ecx, dword ptr [0x110bfd88] */
  ECX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f660 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1109f662 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1109f664 mov byte ptr [0x110beea8], al */
  w8((uint32_t)(0x110beea8), (AL));
  /* 1109f669 mov dword ptr [0x110beeac], 1 */
  w32((uint32_t)(0x110beeac), (0x1u));
  /* 1109f673 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109f675 jmp 0x1109f7a2 */
  goto L_1109f7a2;
L_1109f67a:;
  /* 1109f67a push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f67c mov ecx, dword ptr [0x110c0830] */
  ECX = (r32((uint32_t)(0x110c0830)));
  /* 1109f682 push ecx */
  push32((uint32_t)(ECX));
  /* 1109f683 call 0x11094e40 */
  push32(0x1109f688u); f_11094e40();
  /* 1109f688 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f68b push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f68d mov edx, dword ptr [0x110c0834] */
  EDX = (r32((uint32_t)(0x110c0834)));
  /* 1109f693 push edx */
  push32((uint32_t)(EDX));
  /* 1109f694 call 0x11094e40 */
  push32(0x1109f699u); f_11094e40();
  /* 1109f699 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f69c push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f69e mov eax, dword ptr [0x110c0838] */
  EAX = (r32((uint32_t)(0x110c0838)));
  /* 1109f6a3 push eax */
  push32((uint32_t)(EAX));
  /* 1109f6a4 call 0x11094e40 */
  push32(0x1109f6a9u); f_11094e40();
  /* 1109f6a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f6ac mov dword ptr [0x110c0830], 0 */
  w32((uint32_t)(0x110c0830), (0x0u));
  /* 1109f6b6 mov dword ptr [0x110c0834], 0 */
  w32((uint32_t)(0x110c0834), (0x0u));
  /* 1109f6c0 mov dword ptr [0x110c0838], 0 */
  w32((uint32_t)(0x110c0838), (0x0u));
  /* 1109f6ca push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1109f6cf push 0x110bc3c4 */
  push32((uint32_t)(0x110bc3c4u));
  /* 1109f6d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f6d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f6d8 call 0x110943b0 */
  push32(0x1109f6ddu); f_110943b0();
  /* 1109f6dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f6e0 mov ecx, dword ptr [0x110bfd88] */
  ECX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f6e6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1109f6e8 mov edx, dword ptr [0x110bfd88] */
  EDX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f6ee cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109f6f1 jne 0x1109f6fb */
  if (!C.zf) goto L_1109f6fb;
  /* 1109f6f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109f6f6 jmp 0x1109f7a2 */
  goto L_1109f7a2;
L_1109f6fb:;
  /* 1109f6fb push 0x110bc394 */
  push32((uint32_t)(0x110bc394u));
  /* 1109f700 mov eax, dword ptr [0x110bfd88] */
  EAX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f705 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1109f707 push ecx */
  push32((uint32_t)(ECX));
  /* 1109f708 call 0x11097360 */
  push32(0x1109f70du); f_11097360();
  /* 1109f70d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f710 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1109f715 push 0x110bc3c4 */
  push32((uint32_t)(0x110bc3c4u));
  /* 1109f71a push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f71c push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f71e call 0x110943b0 */
  push32(0x1109f723u); f_110943b0();
  /* 1109f723 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f726 mov edx, dword ptr [0x110bfd88] */
  EDX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f72c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1109f72f mov eax, dword ptr [0x110bfd88] */
  EAX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f734 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109f738 jne 0x1109f73f */
  if (!C.zf) goto L_1109f73f;
  /* 1109f73a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109f73d jmp 0x1109f7a2 */
  goto L_1109f7a2;
L_1109f73f:;
  /* 1109f73f mov ecx, dword ptr [0x110bfd88] */
  ECX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f745 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1109f748 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1109f74b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1109f750 push 0x110bc3c4 */
  push32((uint32_t)(0x110bc3c4u));
  /* 1109f755 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f757 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f759 call 0x110943b0 */
  push32(0x1109f75eu); f_110943b0();
  /* 1109f75e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f761 mov ecx, dword ptr [0x110bfd88] */
  ECX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f767 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1109f76a mov edx, dword ptr [0x110bfd88] */
  EDX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f770 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109f774 jne 0x1109f77b */
  if (!C.zf) goto L_1109f77b;
  /* 1109f776 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109f779 jmp 0x1109f7a2 */
  goto L_1109f7a2;
L_1109f77b:;
  /* 1109f77b mov eax, dword ptr [0x110bfd88] */
  EAX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f780 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1109f783 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1109f786 mov edx, dword ptr [0x110bfd88] */
  EDX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f78c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1109f78e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1109f790 mov byte ptr [0x110beea8], cl */
  w8((uint32_t)(0x110beea8), (CL));
  /* 1109f796 mov dword ptr [0x110beeac], 1 */
  w32((uint32_t)(0x110beeac), (0x1u));
  /* 1109f7a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1109f7a2:;
  /* 1109f7a2 mov esp, ebp */
  ESP = (EBP);
  /* 1109f7a4 pop ebp */
  EBP = (pop32());
  /* 1109f7a5 ret  */
  ESPCHK(0x1109f500u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1109f7b0 (125 bytes, 49 insns) */
void f_1109f7b0(void) {
  FTRACE(0x1109f7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109f7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109f7b1 mov ebp, esp */
  EBP = (ESP);
  /* 1109f7b3 push ecx */
  push32((uint32_t)(ECX));
L_1109f7b4:;
  /* 1109f7b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f7b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1109f7ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109f7bc je 0x1109f829 */
  if (C.zf) goto L_1109f829;
  /* 1109f7be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f7c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1109f7c4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109f7c7 jl 0x1109f7ed */
  if ((C.sf!=C.of)) goto L_1109f7ed;
  /* 1109f7c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f7cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1109f7cf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109f7d2 jg 0x1109f7ed */
  if ((!C.zf&&C.sf==C.of)) goto L_1109f7ed;
  /* 1109f7d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f7d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1109f7da sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109f7dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f7e0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1109f7e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f7e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f7e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1109f7eb jmp 0x1109f827 */
  goto L_1109f827;
L_1109f7ed:;
  /* 1109f7ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f7f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1109f7f3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109f7f6 jne 0x1109f81e */
  if (!C.zf) goto L_1109f81e;
  /* 1109f7f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f7fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1109f7fe:;
  /* 1109f7fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f801 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f804 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1109f807 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1109f809 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f80c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f80f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1109f812 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f815 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1109f818 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109f81a jne 0x1109f7fe */
  if (!C.zf) goto L_1109f7fe;
  /* 1109f81c jmp 0x1109f827 */
  goto L_1109f827;
L_1109f81e:;
  /* 1109f81e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f821 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f824 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1109f827:;
  /* 1109f827 jmp 0x1109f7b4 */
  goto L_1109f7b4;
L_1109f829:;
  /* 1109f829 mov esp, ebp */
  ESP = (EBP);
  /* 1109f82b pop ebp */
  EBP = (pop32());
  /* 1109f82c ret  */
  ESPCHK(0x1109f7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f830 @ 0x1109f830 (304 bytes, 85 insns) */
void f_1109f830(void) {
  FTRACE(0x1109f830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109f830 push ebp */
  push32((uint32_t)(EBP));
  /* 1109f831 mov ebp, esp */
  EBP = (ESP);
  /* 1109f833 push ecx */
  push32((uint32_t)(ECX));
  /* 1109f834 cmp dword ptr [0x110c0804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109f83b je 0x1109f8fc */
  if (C.zf) goto L_1109f8fc;
  /* 1109f841 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1109f843 push 0x110bc3d0 */
  push32((uint32_t)(0x110bc3d0u));
  /* 1109f848 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f84a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1109f84c push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f84e call 0x110947c0 */
  push32(0x1109f853u); f_110947c0();
  /* 1109f853 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f856 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109f859 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109f85d jne 0x1109f869 */
  if (!C.zf) goto L_1109f869;
  /* 1109f85f mov eax, 1 */
  EAX = (0x1u);
  /* 1109f864 jmp 0x1109f95c */
  goto L_1109f95c;
L_1109f869:;
  /* 1109f869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f86c push eax */
  push32((uint32_t)(EAX));
  /* 1109f86d call 0x1109f960 */
  push32(0x1109f872u); f_1109f960();
  /* 1109f872 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f875 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109f877 je 0x1109f89d */
  if (C.zf) goto L_1109f89d;
  /* 1109f879 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f87c push ecx */
  push32((uint32_t)(ECX));
  /* 1109f87d call 0x1109fbf0 */
  push32(0x1109f882u); f_1109fbf0();
  /* 1109f882 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f885 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f887 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f88a push edx */
  push32((uint32_t)(EDX));
  /* 1109f88b call 0x11094e40 */
  push32(0x1109f890u); f_11094e40();
  /* 1109f890 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f893 mov eax, 1 */
  EAX = (0x1u);
  /* 1109f898 jmp 0x1109f95c */
  goto L_1109f95c;
L_1109f89d:;
  /* 1109f89d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f8a0 mov ecx, dword ptr [0x110bfd88] */
  ECX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f8a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1109f8a8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1109f8aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f8ad mov ecx, dword ptr [0x110bfd88] */
  ECX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f8b3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1109f8b6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1109f8b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f8bc mov ecx, dword ptr [0x110bfd88] */
  ECX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f8c2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1109f8c5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1109f8c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f8cb mov dword ptr [0x110bfd88], eax */
  w32((uint32_t)(0x110bfd88), (EAX));
  /* 1109f8d0 mov ecx, dword ptr [0x110c083c] */
  ECX = (r32((uint32_t)(0x110c083c)));
  /* 1109f8d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1109f8d7 call 0x1109fbf0 */
  push32(0x1109f8dcu); f_1109fbf0();
  /* 1109f8dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f8df push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f8e1 mov edx, dword ptr [0x110c083c] */
  EDX = (r32((uint32_t)(0x110c083c)));
  /* 1109f8e7 push edx */
  push32((uint32_t)(EDX));
  /* 1109f8e8 call 0x11094e40 */
  push32(0x1109f8edu); f_11094e40();
  /* 1109f8ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f8f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f8f3 mov dword ptr [0x110c083c], eax */
  w32((uint32_t)(0x110c083c), (EAX));
  /* 1109f8f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109f8fa jmp 0x1109f95c */
  goto L_1109f95c;
L_1109f8fc:;
  /* 1109f8fc mov ecx, dword ptr [0x110bfd88] */
  ECX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f902 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1109f904 mov dword ptr [0x110bfd58], edx */
  w32((uint32_t)(0x110bfd58), (EDX));
  /* 1109f90a mov eax, dword ptr [0x110bfd88] */
  EAX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f90f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1109f912 mov dword ptr [0x110bfd5c], ecx */
  w32((uint32_t)(0x110bfd5c), (ECX));
  /* 1109f918 mov edx, dword ptr [0x110bfd88] */
  EDX = (r32((uint32_t)(0x110bfd88)));
  /* 1109f91e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1109f921 mov dword ptr [0x110bfd60], eax */
  w32((uint32_t)(0x110bfd60), (EAX));
  /* 1109f926 mov dword ptr [0x110bfd88], 0x110bfd58 */
  w32((uint32_t)(0x110bfd88), (0x110bfd58u));
  /* 1109f930 mov ecx, dword ptr [0x110c083c] */
  ECX = (r32((uint32_t)(0x110c083c)));
  /* 1109f936 push ecx */
  push32((uint32_t)(ECX));
  /* 1109f937 call 0x1109fbf0 */
  push32(0x1109f93cu); f_1109fbf0();
  /* 1109f93c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f93f push 2 */
  push32((uint32_t)(0x2u));
  /* 1109f941 mov edx, dword ptr [0x110c083c] */
  EDX = (r32((uint32_t)(0x110c083c)));
  /* 1109f947 push edx */
  push32((uint32_t)(EDX));
  /* 1109f948 call 0x11094e40 */
  push32(0x1109f94du); f_11094e40();
  /* 1109f94d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f950 mov dword ptr [0x110c083c], 0 */
  w32((uint32_t)(0x110c083c), (0x0u));
  /* 1109f95a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1109f95c:;
  /* 1109f95c mov esp, ebp */
  ESP = (EBP);
  /* 1109f95e pop ebp */
  EBP = (pop32());
  /* 1109f95f ret  */
  ESPCHK(0x1109f830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f960 @ 0x1109f960 (525 bytes, 200 insns) */
void f_1109f960(void) {
  FTRACE(0x1109f960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109f960 push ebp */
  push32((uint32_t)(EBP));
  /* 1109f961 mov ebp, esp */
  EBP = (ESP);
  /* 1109f963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109f966 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1109f96d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109f96f mov ax, word ptr [0x110c085c] */
  AX = (r16((uint32_t)(0x110c085c)));
  /* 1109f975 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109f978 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109f97c jne 0x1109f986 */
  if (!C.zf) goto L_1109f986;
  /* 1109f97e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109f981 jmp 0x1109fb69 */
  goto L_1109fb69;
L_1109f986:;
  /* 1109f986 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f989 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f98c push ecx */
  push32((uint32_t)(ECX));
  /* 1109f98d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1109f98f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f992 push edx */
  push32((uint32_t)(EDX));
  /* 1109f993 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f995 call 0x110a2570 */
  push32(0x1109f99au); f_110a2570();
  /* 1109f99a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f99d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109f9a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f9a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109f9a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f9a8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f9ab push edx */
  push32((uint32_t)(EDX));
  /* 1109f9ac push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1109f9ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f9b1 push eax */
  push32((uint32_t)(EAX));
  /* 1109f9b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f9b4 call 0x110a2570 */
  push32(0x1109f9b9u); f_110a2570();
  /* 1109f9b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f9bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109f9bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f9c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109f9c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f9c7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f9ca push edx */
  push32((uint32_t)(EDX));
  /* 1109f9cb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1109f9cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f9d0 push eax */
  push32((uint32_t)(EAX));
  /* 1109f9d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f9d3 call 0x110a2570 */
  push32(0x1109f9d8u); f_110a2570();
  /* 1109f9d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f9db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109f9de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f9e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109f9e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109f9e6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f9e9 push edx */
  push32((uint32_t)(EDX));
  /* 1109f9ea push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1109f9ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109f9ef push eax */
  push32((uint32_t)(EAX));
  /* 1109f9f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109f9f2 call 0x110a2570 */
  push32(0x1109f9f7u); f_110a2570();
  /* 1109f9f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109f9fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109f9fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109f9ff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109fa02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fa05 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fa08 push edx */
  push32((uint32_t)(EDX));
  /* 1109fa09 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1109fa0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109fa0e push eax */
  push32((uint32_t)(EAX));
  /* 1109fa0f push 1 */
  push32((uint32_t)(0x1u));
  /* 1109fa11 call 0x110a2570 */
  push32(0x1109fa16u); f_110a2570();
  /* 1109fa16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fa19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109fa1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109fa1e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109fa21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fa24 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1109fa27 push eax */
  push32((uint32_t)(EAX));
  /* 1109fa28 call 0x1109fb70 */
  push32(0x1109fa2du); f_1109fb70();
  /* 1109fa2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fa30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fa33 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fa36 push ecx */
  push32((uint32_t)(ECX));
  /* 1109fa37 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1109fa39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109fa3c push edx */
  push32((uint32_t)(EDX));
  /* 1109fa3d push 1 */
  push32((uint32_t)(0x1u));
  /* 1109fa3f call 0x110a2570 */
  push32(0x1109fa44u); f_110a2570();
  /* 1109fa44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fa47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109fa4a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109fa4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109fa4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fa52 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fa55 push edx */
  push32((uint32_t)(EDX));
  /* 1109fa56 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1109fa58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109fa5b push eax */
  push32((uint32_t)(EAX));
  /* 1109fa5c push 1 */
  push32((uint32_t)(0x1u));
  /* 1109fa5e call 0x110a2570 */
  push32(0x1109fa63u); f_110a2570();
  /* 1109fa63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fa66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109fa69 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109fa6b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109fa6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fa71 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fa74 push edx */
  push32((uint32_t)(EDX));
  /* 1109fa75 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1109fa77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109fa7a push eax */
  push32((uint32_t)(EAX));
  /* 1109fa7b push 0 */
  push32((uint32_t)(0x0u));
  /* 1109fa7d call 0x110a2570 */
  push32(0x1109fa82u); f_110a2570();
  /* 1109fa82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fa85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109fa88 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109fa8a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109fa8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fa90 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fa93 push edx */
  push32((uint32_t)(EDX));
  /* 1109fa94 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1109fa96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109fa99 push eax */
  push32((uint32_t)(EAX));
  /* 1109fa9a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109fa9c call 0x110a2570 */
  push32(0x1109faa1u); f_110a2570();
  /* 1109faa1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109faa4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109faa7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109faa9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109faac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109faaf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fab2 push edx */
  push32((uint32_t)(EDX));
  /* 1109fab3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1109fab5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109fab8 push eax */
  push32((uint32_t)(EAX));
  /* 1109fab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109fabb call 0x110a2570 */
  push32(0x1109fac0u); f_110a2570();
  /* 1109fac0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fac3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109fac6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109fac8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109facb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109face add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fad1 push edx */
  push32((uint32_t)(EDX));
  /* 1109fad2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1109fad4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109fad7 push eax */
  push32((uint32_t)(EAX));
  /* 1109fad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109fada call 0x110a2570 */
  push32(0x1109fadfu); f_110a2570();
  /* 1109fadf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fae2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109fae5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109fae7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109faea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109faed add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109faf0 push edx */
  push32((uint32_t)(EDX));
  /* 1109faf1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1109faf3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109faf6 push eax */
  push32((uint32_t)(EAX));
  /* 1109faf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109faf9 call 0x110a2570 */
  push32(0x1109fafeu); f_110a2570();
  /* 1109fafe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fb01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109fb04 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109fb06 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109fb09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fb0c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fb0f push edx */
  push32((uint32_t)(EDX));
  /* 1109fb10 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1109fb12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109fb15 push eax */
  push32((uint32_t)(EAX));
  /* 1109fb16 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109fb18 call 0x110a2570 */
  push32(0x1109fb1du); f_110a2570();
  /* 1109fb1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fb20 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109fb23 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109fb25 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109fb28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fb2b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fb2e push edx */
  push32((uint32_t)(EDX));
  /* 1109fb2f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1109fb31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109fb34 push eax */
  push32((uint32_t)(EAX));
  /* 1109fb35 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109fb37 call 0x110a2570 */
  push32(0x1109fb3cu); f_110a2570();
  /* 1109fb3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fb3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109fb42 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109fb44 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109fb47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fb4a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fb4d push edx */
  push32((uint32_t)(EDX));
  /* 1109fb4e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1109fb50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109fb53 push eax */
  push32((uint32_t)(EAX));
  /* 1109fb54 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109fb56 call 0x110a2570 */
  push32(0x1109fb5bu); f_110a2570();
  /* 1109fb5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fb5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109fb61 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1109fb63 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1109fb66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1109fb69:;
  /* 1109fb69 mov esp, ebp */
  ESP = (EBP);
  /* 1109fb6b pop ebp */
  EBP = (pop32());
  /* 1109fb6c ret  */
  ESPCHK(0x1109f960u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1109fb70 (125 bytes, 49 insns) */
void f_1109fb70(void) {
  FTRACE(0x1109fb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109fb70 push ebp */
  push32((uint32_t)(EBP));
  /* 1109fb71 mov ebp, esp */
  EBP = (ESP);
  /* 1109fb73 push ecx */
  push32((uint32_t)(ECX));
L_1109fb74:;
  /* 1109fb74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fb77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1109fb7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109fb7c je 0x1109fbe9 */
  if (C.zf) goto L_1109fbe9;
  /* 1109fb7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fb81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1109fb84 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109fb87 jl 0x1109fbad */
  if ((C.sf!=C.of)) goto L_1109fbad;
  /* 1109fb89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fb8c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1109fb8f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109fb92 jg 0x1109fbad */
  if ((!C.zf&&C.sf==C.of)) goto L_1109fbad;
  /* 1109fb94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fb97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1109fb9a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109fb9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fba0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1109fba2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fba5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fba8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1109fbab jmp 0x1109fbe7 */
  goto L_1109fbe7;
L_1109fbad:;
  /* 1109fbad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fbb0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1109fbb3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109fbb6 jne 0x1109fbde */
  if (!C.zf) goto L_1109fbde;
  /* 1109fbb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fbbb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1109fbbe:;
  /* 1109fbbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109fbc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109fbc4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1109fbc7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1109fbc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109fbcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fbcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1109fbd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109fbd5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1109fbd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109fbda jne 0x1109fbbe */
  if (!C.zf) goto L_1109fbbe;
  /* 1109fbdc jmp 0x1109fbe7 */
  goto L_1109fbe7;
L_1109fbde:;
  /* 1109fbde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fbe1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fbe4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1109fbe7:;
  /* 1109fbe7 jmp 0x1109fb74 */
  goto L_1109fb74;
L_1109fbe9:;
  /* 1109fbe9 mov esp, ebp */
  ESP = (EBP);
  /* 1109fbeb pop ebp */
  EBP = (pop32());
  /* 1109fbec ret  */
  ESPCHK(0x1109fb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbf0 @ 0x1109fbf0 (147 bytes, 52 insns) */
void f_1109fbf0(void) {
  FTRACE(0x1109fbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109fbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1109fbf1 mov ebp, esp */
  EBP = (ESP);
  /* 1109fbf3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109fbf7 jne 0x1109fbfe */
  if (!C.zf) goto L_1109fbfe;
  /* 1109fbf9 jmp 0x1109fc81 */
  goto L_1109fc81;
L_1109fbfe:;
  /* 1109fbfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fc01 cmp dword ptr [eax + 0xc], 0x110c0898 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x110c0898u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109fc08 je 0x1109fc81 */
  if (C.zf) goto L_1109fc81;
  /* 1109fc0a push 2 */
  push32((uint32_t)(0x2u));
  /* 1109fc0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fc0f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1109fc12 push edx */
  push32((uint32_t)(EDX));
  /* 1109fc13 call 0x11094e40 */
  push32(0x1109fc18u); f_11094e40();
  /* 1109fc18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fc1b push 2 */
  push32((uint32_t)(0x2u));
  /* 1109fc1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fc20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1109fc23 push ecx */
  push32((uint32_t)(ECX));
  /* 1109fc24 call 0x11094e40 */
  push32(0x1109fc29u); f_11094e40();
  /* 1109fc29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fc2c push 2 */
  push32((uint32_t)(0x2u));
  /* 1109fc2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fc31 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1109fc34 push eax */
  push32((uint32_t)(EAX));
  /* 1109fc35 call 0x11094e40 */
  push32(0x1109fc3au); f_11094e40();
  /* 1109fc3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fc3d push 2 */
  push32((uint32_t)(0x2u));
  /* 1109fc3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fc42 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1109fc45 push edx */
  push32((uint32_t)(EDX));
  /* 1109fc46 call 0x11094e40 */
  push32(0x1109fc4bu); f_11094e40();
  /* 1109fc4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fc4e push 2 */
  push32((uint32_t)(0x2u));
  /* 1109fc50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fc53 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1109fc56 push ecx */
  push32((uint32_t)(ECX));
  /* 1109fc57 call 0x11094e40 */
  push32(0x1109fc5cu); f_11094e40();
  /* 1109fc5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fc5f push 2 */
  push32((uint32_t)(0x2u));
  /* 1109fc61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fc64 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1109fc67 push eax */
  push32((uint32_t)(EAX));
  /* 1109fc68 call 0x11094e40 */
  push32(0x1109fc6du); f_11094e40();
  /* 1109fc6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fc70 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109fc72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109fc75 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1109fc78 push edx */
  push32((uint32_t)(EDX));
  /* 1109fc79 call 0x11094e40 */
  push32(0x1109fc7eu); f_11094e40();
  /* 1109fc7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109fc81:;
  /* 1109fc81 pop ebp */
  EBP = (pop32());
  /* 1109fc82 ret  */
  ESPCHK(0x1109fbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc90 @ 0x1109fc90 (928 bytes, 284 insns) */
void f_1109fc90(void) {
  FTRACE(0x1109fc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109fc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1109fc91 mov ebp, esp */
  EBP = (ESP);
  /* 1109fc93 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109fc96 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1109fc9d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1109fca4 cmp dword ptr [0x110c0800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109fcab je 0x1109ffe1 */
  if (C.zf) goto L_1109ffe1;
  /* 1109fcb1 cmp dword ptr [0x110c0810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109fcb8 jne 0x1109fce0 */
  if (!C.zf) goto L_1109fce0;
  /* 1109fcba push 0x110c0810 */
  push32((uint32_t)(0x110c0810u));
  /* 1109fcbf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1109fcc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109fcc6 mov ax, word ptr [0x110c0854] */
  AX = (r16((uint32_t)(0x110c0854)));
  /* 1109fccc push eax */
  push32((uint32_t)(EAX));
  /* 1109fccd push 0 */
  push32((uint32_t)(0x0u));
  /* 1109fccf call 0x110a2570 */
  push32(0x1109fcd4u); f_110a2570();
  /* 1109fcd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fcd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109fcd9 je 0x1109fce0 */
  if (C.zf) goto L_1109fce0;
  /* 1109fcdb jmp 0x1109ffa2 */
  goto L_1109ffa2;
L_1109fce0:;
  /* 1109fce0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1109fce2 push 0x110bc3dc */
  push32((uint32_t)(0x110bc3dcu));
  /* 1109fce7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109fce9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1109fcee call 0x110943b0 */
  push32(0x1109fcf3u); f_110943b0();
  /* 1109fcf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fcf6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1109fcf9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1109fcfb push 0x110bc3dc */
  push32((uint32_t)(0x110bc3dcu));
  /* 1109fd00 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109fd02 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1109fd07 call 0x110943b0 */
  push32(0x1109fd0cu); f_110943b0();
  /* 1109fd0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fd0f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1109fd12 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1109fd14 push 0x110bc3dc */
  push32((uint32_t)(0x110bc3dcu));
  /* 1109fd19 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109fd1b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1109fd20 call 0x110943b0 */
  push32(0x1109fd25u); f_110943b0();
  /* 1109fd25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fd28 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1109fd2b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1109fd2d push 0x110bc3dc */
  push32((uint32_t)(0x110bc3dcu));
  /* 1109fd32 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109fd34 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1109fd39 call 0x110943b0 */
  push32(0x1109fd3eu); f_110943b0();
  /* 1109fd3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fd41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1109fd44 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109fd48 je 0x1109fd5c */
  if (C.zf) goto L_1109fd5c;
  /* 1109fd4a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109fd4e je 0x1109fd5c */
  if (C.zf) goto L_1109fd5c;
  /* 1109fd50 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109fd54 je 0x1109fd5c */
  if (C.zf) goto L_1109fd5c;
  /* 1109fd56 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109fd5a jne 0x1109fd61 */
  if (!C.zf) goto L_1109fd61;
L_1109fd5c:;
  /* 1109fd5c jmp 0x1109ffa2 */
  goto L_1109ffa2;
L_1109fd61:;
  /* 1109fd61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109fd64 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1109fd67 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1109fd6e jmp 0x1109fd79 */
  goto L_1109fd79;
L_1109fd70:;
  /* 1109fd70 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109fd73 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fd76 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1109fd79:;
  /* 1109fd79 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109fd80 jge 0x1109fd95 */
  if ((C.sf==C.of)) goto L_1109fd95;
  /* 1109fd82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109fd85 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1109fd88 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1109fd8a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109fd8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fd90 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1109fd93 jmp 0x1109fd70 */
  goto L_1109fd70;
L_1109fd95:;
  /* 1109fd95 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1109fd98 push eax */
  push32((uint32_t)(EAX));
  /* 1109fd99 mov ecx, dword ptr [0x110c0810] */
  ECX = (r32((uint32_t)(0x110c0810)));
  /* 1109fd9f push ecx */
  push32((uint32_t)(ECX));
  /* 1109fda0 call dword ptr [0x110c3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3330))), 0x1109fda6u);
  /* 1109fda6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109fda8 jne 0x1109fdaf */
  if (!C.zf) goto L_1109fdaf;
  /* 1109fdaa jmp 0x1109ffa2 */
  goto L_1109ffa2;
L_1109fdaf:;
  /* 1109fdaf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109fdb3 jbe 0x1109fdba */
  if ((C.cf||C.zf)) goto L_1109fdba;
  /* 1109fdb5 jmp 0x1109ffa2 */
  goto L_1109ffa2;
L_1109fdba:;
  /* 1109fdba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1109fdbd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1109fdc3 mov dword ptr [0x110beea4], edx */
  w32((uint32_t)(0x110beea4), (EDX));
  /* 1109fdc9 cmp dword ptr [0x110beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109fdd0 jle 0x1109fe29 */
  if ((C.zf||C.sf!=C.of)) goto L_1109fe29;
  /* 1109fdd2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1109fdd5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1109fdd8 jmp 0x1109fde3 */
  goto L_1109fde3;
L_1109fdda:;
  /* 1109fdda mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109fddd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fde0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1109fde3:;
  /* 1109fde3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109fde6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109fde8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1109fdea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109fdec je 0x1109fe29 */
  if (C.zf) goto L_1109fe29;
  /* 1109fdee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109fdf1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109fdf3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1109fdf6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109fdf8 je 0x1109fe29 */
  if (C.zf) goto L_1109fe29;
  /* 1109fdfa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109fdfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109fdff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1109fe01 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1109fe04 jmp 0x1109fe0f */
  goto L_1109fe0f;
L_1109fe06:;
  /* 1109fe06 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109fe09 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fe0c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1109fe0f:;
  /* 1109fe0f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109fe12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109fe14 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1109fe17 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109fe1a jg 0x1109fe27 */
  if ((!C.zf&&C.sf==C.of)) goto L_1109fe27;
  /* 1109fe1c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109fe1f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fe22 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1109fe25 jmp 0x1109fe06 */
  goto L_1109fe06;
L_1109fe27:;
  /* 1109fe27 jmp 0x1109fdda */
  goto L_1109fdda;
L_1109fe29:;
  /* 1109fe29 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109fe2b push 0 */
  push32((uint32_t)(0x0u));
  /* 1109fe2d push 0 */
  push32((uint32_t)(0x0u));
  /* 1109fe2f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1109fe32 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fe35 push eax */
  push32((uint32_t)(EAX));
  /* 1109fe36 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1109fe3b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109fe3e push ecx */
  push32((uint32_t)(ECX));
  /* 1109fe3f push 1 */
  push32((uint32_t)(0x1u));
  /* 1109fe41 call 0x1109c5e0 */
  push32(0x1109fe46u); f_1109c5e0();
  /* 1109fe46 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fe49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109fe4b jne 0x1109fe52 */
  if (!C.zf) goto L_1109fe52;
  /* 1109fe4d jmp 0x1109ffa2 */
  goto L_1109ffa2;
L_1109fe52:;
  /* 1109fe52 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1109fe55 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1109fe5a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1109fe5d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1109fe60 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1109fe67 jmp 0x1109fe72 */
  goto L_1109fe72;
L_1109fe69:;
  /* 1109fe69 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109fe6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fe6f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1109fe72:;
  /* 1109fe72 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109fe79 jge 0x1109fe90 */
  if ((C.sf==C.of)) goto L_1109fe90;
  /* 1109fe7b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109fe7e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1109fe82 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1109fe85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109fe88 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fe8b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1109fe8e jmp 0x1109fe69 */
  goto L_1109fe69;
L_1109fe90:;
  /* 1109fe90 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109fe92 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109fe94 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1109fe97 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fe9a push edx */
  push32((uint32_t)(EDX));
  /* 1109fe9b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1109fea0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1109fea3 push eax */
  push32((uint32_t)(EAX));
  /* 1109fea4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1109fea6 call 0x110a2810 */
  push32(0x1109feabu); f_110a2810();
  /* 1109feab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109feae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109feb0 jne 0x1109feb7 */
  if (!C.zf) goto L_1109feb7;
  /* 1109feb2 jmp 0x1109ffa2 */
  goto L_1109ffa2;
L_1109feb7:;
  /* 1109feb7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1109feba mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1109febf cmp dword ptr [0x110beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109fec6 jle 0x1109ff23 */
  if ((C.zf||C.sf!=C.of)) goto L_1109ff23;
  /* 1109fec8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1109fecb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1109fece jmp 0x1109fed9 */
  goto L_1109fed9;
L_1109fed0:;
  /* 1109fed0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109fed3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109fed6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1109fed9:;
  /* 1109fed9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109fedc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109fede mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1109fee0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109fee2 je 0x1109ff23 */
  if (C.zf) goto L_1109ff23;
  /* 1109fee4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109fee7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109fee9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1109feec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109feee je 0x1109ff23 */
  if (C.zf) goto L_1109ff23;
  /* 1109fef0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109fef3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109fef5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1109fef7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1109fefa jmp 0x1109ff05 */
  goto L_1109ff05;
L_1109fefc:;
  /* 1109fefc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109feff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ff02 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1109ff05:;
  /* 1109ff05 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1109ff08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109ff0a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1109ff0d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ff10 jg 0x1109ff21 */
  if ((!C.zf&&C.sf==C.of)) goto L_1109ff21;
  /* 1109ff12 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1109ff15 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1109ff18 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1109ff1f jmp 0x1109fefc */
  goto L_1109fefc;
L_1109ff21:;
  /* 1109ff21 jmp 0x1109fed0 */
  goto L_1109fed0;
L_1109ff23:;
  /* 1109ff23 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1109ff26 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ff29 mov dword ptr [0x110bec98], eax */
  w32((uint32_t)(0x110bec98), (EAX));
  /* 1109ff2e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1109ff31 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ff34 mov dword ptr [0x110bec9c], ecx */
  w32((uint32_t)(0x110bec9c), (ECX));
  /* 1109ff3a cmp dword ptr [0x110c0840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ff41 je 0x1109ff54 */
  if (C.zf) goto L_1109ff54;
  /* 1109ff43 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109ff45 mov edx, dword ptr [0x110c0840] */
  EDX = (r32((uint32_t)(0x110c0840)));
  /* 1109ff4b push edx */
  push32((uint32_t)(EDX));
  /* 1109ff4c call 0x11094e40 */
  push32(0x1109ff51u); f_11094e40();
  /* 1109ff51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109ff54:;
  /* 1109ff54 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1109ff57 mov dword ptr [0x110c0840], eax */
  w32((uint32_t)(0x110c0840), (EAX));
  /* 1109ff5c cmp dword ptr [0x110c0844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109ff63 je 0x1109ff76 */
  if (C.zf) goto L_1109ff76;
  /* 1109ff65 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109ff67 mov ecx, dword ptr [0x110c0844] */
  ECX = (r32((uint32_t)(0x110c0844)));
  /* 1109ff6d push ecx */
  push32((uint32_t)(ECX));
  /* 1109ff6e call 0x11094e40 */
  push32(0x1109ff73u); f_11094e40();
  /* 1109ff73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109ff76:;
  /* 1109ff76 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1109ff79 mov dword ptr [0x110c0844], edx */
  w32((uint32_t)(0x110c0844), (EDX));
  /* 1109ff7f push 2 */
  push32((uint32_t)(0x2u));
  /* 1109ff81 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109ff84 push eax */
  push32((uint32_t)(EAX));
  /* 1109ff85 call 0x11094e40 */
  push32(0x1109ff8au); f_11094e40();
  /* 1109ff8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ff8d push 2 */
  push32((uint32_t)(0x2u));
  /* 1109ff8f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1109ff92 push ecx */
  push32((uint32_t)(ECX));
  /* 1109ff93 call 0x11094e40 */
  push32(0x1109ff98u); f_11094e40();
  /* 1109ff98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ff9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109ff9d jmp 0x110a002c */
  goto L_110a002c;
L_1109ffa2:;
  /* 1109ffa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109ffa4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1109ffa7 push edx */
  push32((uint32_t)(EDX));
  /* 1109ffa8 call 0x11094e40 */
  push32(0x1109ffadu); f_11094e40();
  /* 1109ffad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ffb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109ffb2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1109ffb5 push eax */
  push32((uint32_t)(EAX));
  /* 1109ffb6 call 0x11094e40 */
  push32(0x1109ffbbu); f_11094e40();
  /* 1109ffbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ffbe push 2 */
  push32((uint32_t)(0x2u));
  /* 1109ffc0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1109ffc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1109ffc4 call 0x11094e40 */
  push32(0x1109ffc9u); f_11094e40();
  /* 1109ffc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ffcc push 2 */
  push32((uint32_t)(0x2u));
  /* 1109ffce mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1109ffd1 push edx */
  push32((uint32_t)(EDX));
  /* 1109ffd2 call 0x11094e40 */
  push32(0x1109ffd7u); f_11094e40();
  /* 1109ffd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109ffda mov eax, 1 */
  EAX = (0x1u);
  /* 1109ffdf jmp 0x110a002c */
  goto L_110a002c;
L_1109ffe1:;
  /* 1109ffe1 mov dword ptr [0x110bec98], 0x110beca2 */
  w32((uint32_t)(0x110bec98), (0x110beca2u));
  /* 1109ffeb mov dword ptr [0x110bec9c], 0x110beca2 */
  w32((uint32_t)(0x110bec9c), (0x110beca2u));
  /* 1109fff5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109fff7 mov eax, dword ptr [0x110c0840] */
  EAX = (r32((uint32_t)(0x110c0840)));
  /* 1109fffc push eax */
  push32((uint32_t)(EAX));
  /* 1109fffd call 0x11094e40 */
  push32(0x110a0002u); f_11094e40();
  /* 110a0002 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0005 push 2 */
  push32((uint32_t)(0x2u));
  /* 110a0007 mov ecx, dword ptr [0x110c0844] */
  ECX = (r32((uint32_t)(0x110c0844)));
  /* 110a000d push ecx */
  push32((uint32_t)(ECX));
  /* 110a000e call 0x11094e40 */
  push32(0x110a0013u); f_11094e40();
  /* 110a0013 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0016 mov dword ptr [0x110c0840], 0 */
  w32((uint32_t)(0x110c0840), (0x0u));
  /* 110a0020 mov dword ptr [0x110c0844], 0 */
  w32((uint32_t)(0x110c0844), (0x0u));
  /* 110a002a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110a002c:;
  /* 110a002c mov esp, ebp */
  ESP = (EBP);
  /* 110a002e pop ebp */
  EBP = (pop32());
  /* 110a002f ret  */
  ESPCHK(0x1109fc90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010030 @ 0x110a0030 (7 bytes, 5 insns) */
void f_110a0030(void) {
  FTRACE(0x110a0030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0030 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0031 mov ebp, esp */
  EBP = (ESP);
  /* 110a0033 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a0035 pop ebp */
  EBP = (pop32());
  /* 110a0036 ret  */
  ESPCHK(0x110a0030u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x110a0040 (129 bytes, 56 insns) */
void f_110a0040(void) {
  FTRACE(0x110a0040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0040 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 110a0044 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 110a0048 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 110a004e jne 0x110a008c */
  if (!C.zf) goto L_110a008c;
L_110a0050:;
  /* 110a0050 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110a0052 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a0054 jne 0x110a0084 */
  if (!C.zf) goto L_110a0084;
  /* 110a0056 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110a0058 je 0x110a0080 */
  if (C.zf) goto L_110a0080;
  /* 110a005a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a005d jne 0x110a0084 */
  if (!C.zf) goto L_110a0084;
  /* 110a005f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 110a0061 je 0x110a0080 */
  if (C.zf) goto L_110a0080;
  /* 110a0063 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 110a0066 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a0069 jne 0x110a0084 */
  if (!C.zf) goto L_110a0084;
  /* 110a006b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110a006d je 0x110a0080 */
  if (C.zf) goto L_110a0080;
  /* 110a006f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a0072 jne 0x110a0084 */
  if (!C.zf) goto L_110a0084;
  /* 110a0074 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0077 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a007a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 110a007c jne 0x110a0050 */
  if (!C.zf) goto L_110a0050;
  /* 110a007e mov edi, edi */
  EDI = (EDI);
L_110a0080:;
  /* 110a0080 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a0082 ret  */
  ESPCHK(0x110a0040u, _esp0);
  ESP += 4; return;
  /* 110a0083 nop  */
  /* nop */
L_110a0084:;
  /* 110a0084 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0086 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 110a0088 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110a0089 ret  */
  ESPCHK(0x110a0040u, _esp0);
  ESP += 4; return;
  /* 110a008a mov edi, edi */
  EDI = (EDI);
L_110a008c:;
  /* 110a008c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 110a0092 je 0x110a00a8 */
  if (C.zf) goto L_110a00a8;
  /* 110a0094 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a0096 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 110a0097 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a0099 jne 0x110a0084 */
  if (!C.zf) goto L_110a0084;
  /* 110a009b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110a009c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110a009e je 0x110a0080 */
  if (C.zf) goto L_110a0080;
  /* 110a00a0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 110a00a6 je 0x110a0050 */
  if (C.zf) goto L_110a0050;
L_110a00a8:;
  /* 110a00a8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 110a00ab add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a00ae cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a00b0 jne 0x110a0084 */
  if (!C.zf) goto L_110a0084;
  /* 110a00b2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110a00b4 je 0x110a0080 */
  if (C.zf) goto L_110a0080;
  /* 110a00b6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a00b9 jne 0x110a0084 */
  if (!C.zf) goto L_110a0084;
  /* 110a00bb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 110a00bd je 0x110a0080 */
  if (C.zf) goto L_110a0080;
  /* 110a00bf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a00c2 jmp 0x110a0050 */
  goto L_110a0050;
}

/* FUN_100100d0 @ 0x110a00d0 (62 bytes, 35 insns) */
void f_110a00d0(void) {
  FTRACE(0x110a00d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a00d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a00d1 mov ebp, esp */
  EBP = (ESP);
  /* 110a00d3 push esi */
  push32((uint32_t)(ESI));
  /* 110a00d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a00d6 push eax */
  push32((uint32_t)(EAX));
  /* 110a00d7 push eax */
  push32((uint32_t)(EAX));
  /* 110a00d8 push eax */
  push32((uint32_t)(EAX));
  /* 110a00d9 push eax */
  push32((uint32_t)(EAX));
  /* 110a00da push eax */
  push32((uint32_t)(EAX));
  /* 110a00db push eax */
  push32((uint32_t)(EAX));
  /* 110a00dc push eax */
  push32((uint32_t)(EAX));
  /* 110a00dd push eax */
  push32((uint32_t)(EAX));
  /* 110a00de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a00e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110a00e4:;
  /* 110a00e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a00e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110a00e8 je 0x110a00f1 */
  if (C.zf) goto L_110a00f1;
  /* 110a00ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 110a00eb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x110a00eb");
  /* 110a00ef jmp 0x110a00e4 */
  goto L_110a00e4;
L_110a00f1:;
  /* 110a00f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 110a00f4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110a00f7 nop  */
  /* nop */
L_110a00f8:;
  /* 110a00f8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110a00f9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110a00fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110a00fd je 0x110a0106 */
  if (C.zf) goto L_110a0106;
  /* 110a00ff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110a0100 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x110a0100");
  /* 110a0104 jae 0x110a00f8 */
  if (!C.cf) goto L_110a00f8;
L_110a0106:;
  /* 110a0106 mov eax, ecx */
  EAX = (ECX);
  /* 110a0108 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a010b pop esi */
  ESI = (pop32());
  /* 110a010c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110a010d ret  */
  ESPCHK(0x110a00d0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x110a0110 (56 bytes, 31 insns) */
void f_110a0110(void) {
  FTRACE(0x110a0110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0110 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0111 mov ebp, esp */
  EBP = (ESP);
  /* 110a0113 push edi */
  push32((uint32_t)(EDI));
  /* 110a0114 push esi */
  push32((uint32_t)(ESI));
  /* 110a0115 push ebx */
  push32((uint32_t)(EBX));
  /* 110a0116 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a0119 jecxz 0x110a0141 */
  x86_unimpl("jecxz @ 0x110a0119");
  /* 110a011b mov ebx, ecx */
  EBX = (ECX);
  /* 110a011d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0120 mov esi, edi */
  ESI = (EDI);
  /* 110a0122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a0124 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 110a0126 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110a0128 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a012a mov edi, esi */
  EDI = (ESI);
  /* 110a012c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 110a012f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 110a0131 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 110a0134 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a0136 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a0139 ja 0x110a013f */
  if ((!C.cf&&!C.zf)) goto L_110a013f;
  /* 110a013b je 0x110a0141 */
  if (C.zf) goto L_110a0141;
  /* 110a013d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110a013e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_110a013f:;
  /* 110a013f not ecx */
  ECX = (~(ECX));
L_110a0141:;
  /* 110a0141 mov eax, ecx */
  EAX = (ECX);
  /* 110a0143 pop ebx */
  EBX = (pop32());
  /* 110a0144 pop esi */
  ESI = (pop32());
  /* 110a0145 pop edi */
  EDI = (pop32());
  /* 110a0146 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110a0147 ret  */
  ESPCHK(0x110a0110u, _esp0);
  ESP += 4; return;
}

/* FUN_10010150 @ 0x110a0150 (58 bytes, 32 insns) */
void f_110a0150(void) {
  FTRACE(0x110a0150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0150 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0151 mov ebp, esp */
  EBP = (ESP);
  /* 110a0153 push esi */
  push32((uint32_t)(ESI));
  /* 110a0154 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a0156 push eax */
  push32((uint32_t)(EAX));
  /* 110a0157 push eax */
  push32((uint32_t)(EAX));
  /* 110a0158 push eax */
  push32((uint32_t)(EAX));
  /* 110a0159 push eax */
  push32((uint32_t)(EAX));
  /* 110a015a push eax */
  push32((uint32_t)(EAX));
  /* 110a015b push eax */
  push32((uint32_t)(EAX));
  /* 110a015c push eax */
  push32((uint32_t)(EAX));
  /* 110a015d push eax */
  push32((uint32_t)(EAX));
  /* 110a015e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a0161 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110a0164:;
  /* 110a0164 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a0166 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110a0168 je 0x110a0171 */
  if (C.zf) goto L_110a0171;
  /* 110a016a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 110a016b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x110a016b");
  /* 110a016f jmp 0x110a0164 */
  goto L_110a0164;
L_110a0171:;
  /* 110a0171 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_110a0174:;
  /* 110a0174 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110a0176 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110a0178 je 0x110a0184 */
  if (C.zf) goto L_110a0184;
  /* 110a017a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110a017b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x110a017b");
  /* 110a017f jae 0x110a0174 */
  if (!C.cf) goto L_110a0174;
  /* 110a0181 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_110a0184:;
  /* 110a0184 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0187 pop esi */
  ESI = (pop32());
  /* 110a0188 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110a0189 ret  */
  ESPCHK(0x110a0150u, _esp0);
  ESP += 4; return;
}

/* FUN_10010190 @ 0x110a0190 (512 bytes, 147 insns) */
void f_110a0190(void) {
  FTRACE(0x110a0190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0190 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0191 mov ebp, esp */
  EBP = (ESP);
  /* 110a0193 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0196 cmp dword ptr [0x110c088c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c088c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a019d jne 0x110a01c2 */
  if (!C.zf) goto L_110a01c2;
  /* 110a019f call 0x110a0c60 */
  push32(0x110a01a4u); f_110a0c60();
  /* 110a01a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a01a6 je 0x110a01b2 */
  if (C.zf) goto L_110a01b2;
  /* 110a01a8 mov eax, dword ptr [0x110c326c] */
  EAX = (r32((uint32_t)(0x110c326c)));
  /* 110a01ad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110a01b0 jmp 0x110a01b9 */
  goto L_110a01b9;
L_110a01b2:;
  /* 110a01b2 mov dword ptr [ebp - 8], 0x110a0cb0 */
  w32((uint32_t)(EBP + -0x8), (0x110a0cb0u));
L_110a01b9:;
  /* 110a01b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a01bc mov dword ptr [0x110c088c], ecx */
  w32((uint32_t)(0x110c088c), (ECX));
L_110a01c2:;
  /* 110a01c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a01c6 jne 0x110a01d2 */
  if (!C.zf) goto L_110a01d2;
  /* 110a01c8 call 0x110a0ab0 */
  push32(0x110a01cdu); f_110a0ab0();
  /* 110a01cd jmp 0x110a029e */
  goto L_110a029e;
L_110a01d2:;
  /* 110a01d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a01d5 mov dword ptr [0x110c087c], edx */
  w32((uint32_t)(0x110c087c), (EDX));
  /* 110a01db cmp dword ptr [0x110c087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a01e2 je 0x110a0204 */
  if (C.zf) goto L_110a0204;
  /* 110a01e4 mov eax, dword ptr [0x110c087c] */
  EAX = (r32((uint32_t)(0x110c087c)));
  /* 110a01e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110a01ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a01ee je 0x110a0204 */
  if (C.zf) goto L_110a0204;
  /* 110a01f0 push 0x110c087c */
  push32((uint32_t)(0x110c087cu));
  /* 110a01f5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 110a01f7 push 0x110bfa90 */
  push32((uint32_t)(0x110bfa90u));
  /* 110a01fc call 0x110a0390 */
  push32(0x110a0201u); f_110a0390();
  /* 110a0201 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110a0204:;
  /* 110a0204 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0207 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a020a mov dword ptr [0x110c0880], edx */
  w32((uint32_t)(0x110c0880), (EDX));
  /* 110a0210 cmp dword ptr [0x110c0880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0217 je 0x110a0239 */
  if (C.zf) goto L_110a0239;
  /* 110a0219 mov eax, dword ptr [0x110c0880] */
  EAX = (r32((uint32_t)(0x110c0880)));
  /* 110a021e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110a0221 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a0223 je 0x110a0239 */
  if (C.zf) goto L_110a0239;
  /* 110a0225 push 0x110c0880 */
  push32((uint32_t)(0x110c0880u));
  /* 110a022a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 110a022c push 0x110bf9d8 */
  push32((uint32_t)(0x110bf9d8u));
  /* 110a0231 call 0x110a0390 */
  push32(0x110a0236u); f_110a0390();
  /* 110a0236 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110a0239:;
  /* 110a0239 mov dword ptr [0x110c0884], 0 */
  w32((uint32_t)(0x110c0884), (0x0u));
  /* 110a0243 cmp dword ptr [0x110c087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a024a je 0x110a027d */
  if (C.zf) goto L_110a027d;
  /* 110a024c mov edx, dword ptr [0x110c087c] */
  EDX = (r32((uint32_t)(0x110c087c)));
  /* 110a0252 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110a0255 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a0257 je 0x110a027d */
  if (C.zf) goto L_110a027d;
  /* 110a0259 cmp dword ptr [0x110c0880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0260 je 0x110a0276 */
  if (C.zf) goto L_110a0276;
  /* 110a0262 mov ecx, dword ptr [0x110c0880] */
  ECX = (r32((uint32_t)(0x110c0880)));
  /* 110a0268 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110a026b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a026d je 0x110a0276 */
  if (C.zf) goto L_110a0276;
  /* 110a026f call 0x110a0420 */
  push32(0x110a0274u); f_110a0420();
  /* 110a0274 jmp 0x110a027b */
  goto L_110a027b;
L_110a0276:;
  /* 110a0276 call 0x110a0810 */
  push32(0x110a027bu); f_110a0810();
L_110a027b:;
  /* 110a027b jmp 0x110a029e */
  goto L_110a029e;
L_110a027d:;
  /* 110a027d cmp dword ptr [0x110c0880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0284 je 0x110a0299 */
  if (C.zf) goto L_110a0299;
  /* 110a0286 mov eax, dword ptr [0x110c0880] */
  EAX = (r32((uint32_t)(0x110c0880)));
  /* 110a028b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110a028e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a0290 je 0x110a0299 */
  if (C.zf) goto L_110a0299;
  /* 110a0292 call 0x110a09b0 */
  push32(0x110a0297u); f_110a09b0();
  /* 110a0297 jmp 0x110a029e */
  goto L_110a029e;
L_110a0299:;
  /* 110a0299 call 0x110a0ab0 */
  push32(0x110a029eu); f_110a0ab0();
L_110a029e:;
  /* 110a029e cmp dword ptr [0x110c0884], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0884))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a02a5 jne 0x110a02ae */
  if (!C.zf) goto L_110a02ae;
  /* 110a02a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a02a9 jmp 0x110a038c */
  goto L_110a038c;
L_110a02ae:;
  /* 110a02ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a02b1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a02b7 push edx */
  push32((uint32_t)(EDX));
  /* 110a02b8 call 0x110a0ae0 */
  push32(0x110a02bdu); f_110a0ae0();
  /* 110a02bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a02c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a02c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a02c7 je 0x110a02dc */
  if (C.zf) goto L_110a02dc;
  /* 110a02c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a02cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a02d1 push eax */
  push32((uint32_t)(EAX));
  /* 110a02d2 call dword ptr [0x110c3270] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3270))), 0x110a02d8u);
  /* 110a02d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a02da jne 0x110a02e3 */
  if (!C.zf) goto L_110a02e3;
L_110a02dc:;
  /* 110a02dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a02de jmp 0x110a038c */
  goto L_110a038c;
L_110a02e3:;
  /* 110a02e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 110a02e5 mov ecx, dword ptr [0x110c086c] */
  ECX = (r32((uint32_t)(0x110c086c)));
  /* 110a02eb push ecx */
  push32((uint32_t)(ECX));
  /* 110a02ec call dword ptr [0x110c3280] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3280))), 0x110a02f2u);
  /* 110a02f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a02f4 jne 0x110a02fd */
  if (!C.zf) goto L_110a02fd;
  /* 110a02f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a02f8 jmp 0x110a038c */
  goto L_110a038c;
L_110a02fd:;
  /* 110a02fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0301 je 0x110a0328 */
  if (C.zf) goto L_110a0328;
  /* 110a0303 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a0306 mov ax, word ptr [0x110c086c] */
  AX = (r16((uint32_t)(0x110c086c)));
  /* 110a030c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 110a030f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a0312 mov dx, word ptr [0x110c0888] */
  DX = (r16((uint32_t)(0x110c0888)));
  /* 110a0319 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 110a031d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a0320 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 110a0324 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_110a0328:;
  /* 110a0328 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a032c je 0x110a0387 */
  if (C.zf) goto L_110a0387;
  /* 110a032e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 110a0330 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a0333 push edx */
  push32((uint32_t)(EDX));
  /* 110a0334 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 110a0339 mov eax, dword ptr [0x110c086c] */
  EAX = (r32((uint32_t)(0x110c086c)));
  /* 110a033e push eax */
  push32((uint32_t)(EAX));
  /* 110a033f call dword ptr [0x110c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c088c))), 0x110a0345u);
  /* 110a0345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a0347 jne 0x110a034d */
  if (!C.zf) goto L_110a034d;
  /* 110a0349 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a034b jmp 0x110a038c */
  goto L_110a038c;
L_110a034d:;
  /* 110a034d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 110a034f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a0352 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0355 push ecx */
  push32((uint32_t)(ECX));
  /* 110a0356 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 110a035b mov edx, dword ptr [0x110c0888] */
  EDX = (r32((uint32_t)(0x110c0888)));
  /* 110a0361 push edx */
  push32((uint32_t)(EDX));
  /* 110a0362 call dword ptr [0x110c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c088c))), 0x110a0368u);
  /* 110a0368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a036a jne 0x110a0370 */
  if (!C.zf) goto L_110a0370;
  /* 110a036c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a036e jmp 0x110a038c */
  goto L_110a038c;
L_110a0370:;
  /* 110a0370 push 0xa */
  push32((uint32_t)(0xau));
  /* 110a0372 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a0375 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a037a push eax */
  push32((uint32_t)(EAX));
  /* 110a037b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a037e push ecx */
  push32((uint32_t)(ECX));
  /* 110a037f call 0x11096ef0 */
  push32(0x110a0384u); f_11096ef0();
  /* 110a0384 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110a0387:;
  /* 110a0387 mov eax, 1 */
  EAX = (0x1u);
L_110a038c:;
  /* 110a038c mov esp, ebp */
  ESP = (EBP);
  /* 110a038e pop ebp */
  EBP = (pop32());
  /* 110a038f ret  */
  ESPCHK(0x110a0190u, _esp0);
  ESP += 4; return;
}

/* FUN_10010390 @ 0x110a0390 (130 bytes, 47 insns) */
void f_110a0390(void) {
  FTRACE(0x110a0390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0390 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0391 mov ebp, esp */
  EBP = (ESP);
  /* 110a0393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0396 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 110a039d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_110a03a4:;
  /* 110a03a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a03a7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a03aa jg 0x110a040e */
  if ((!C.zf&&C.sf==C.of)) goto L_110a040e;
  /* 110a03ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a03b0 je 0x110a040e */
  if (C.zf) goto L_110a040e;
  /* 110a03b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a03b5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a03b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110a03b9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a03bb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 110a03bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a03c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a03c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a03c6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 110a03c9 push eax */
  push32((uint32_t)(EAX));
  /* 110a03ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a03cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a03cf push edx */
  push32((uint32_t)(EDX));
  /* 110a03d0 call 0x110a2a80 */
  push32(0x110a03d5u); f_110a2a80();
  /* 110a03d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a03d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110a03db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a03df jne 0x110a03f2 */
  if (!C.zf) goto L_110a03f2;
  /* 110a03e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a03e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a03e7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 110a03eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a03ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 110a03f0 jmp 0x110a040c */
  goto L_110a040c;
L_110a03f2:;
  /* 110a03f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a03f6 jge 0x110a0403 */
  if ((C.sf==C.of)) goto L_110a0403;
  /* 110a03f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a03fb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a03fe mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 110a0401 jmp 0x110a040c */
  goto L_110a040c;
L_110a0403:;
  /* 110a0403 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a0406 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0409 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_110a040c:;
  /* 110a040c jmp 0x110a03a4 */
  goto L_110a03a4;
L_110a040e:;
  /* 110a040e mov esp, ebp */
  ESP = (EBP);
  /* 110a0410 pop ebp */
  EBP = (pop32());
  /* 110a0411 ret  */
  ESPCHK(0x110a0390u, _esp0);
  ESP += 4; return;
}

/* FUN_10010420 @ 0x110a0420 (186 bytes, 50 insns) */
void f_110a0420(void) {
  FTRACE(0x110a0420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0420 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0421 mov ebp, esp */
  EBP = (ESP);
  /* 110a0423 push ecx */
  push32((uint32_t)(ECX));
  /* 110a0424 mov eax, dword ptr [0x110c087c] */
  EAX = (r32((uint32_t)(0x110c087c)));
  /* 110a0429 push eax */
  push32((uint32_t)(EAX));
  /* 110a042a call 0x110971e0 */
  push32(0x110a042fu); f_110971e0();
  /* 110a042f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0432 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a0434 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0437 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 110a043a mov dword ptr [0x110c0878], ecx */
  w32((uint32_t)(0x110c0878), (ECX));
  /* 110a0440 mov edx, dword ptr [0x110c0880] */
  EDX = (r32((uint32_t)(0x110c0880)));
  /* 110a0446 push edx */
  push32((uint32_t)(EDX));
  /* 110a0447 call 0x110971e0 */
  push32(0x110a044cu); f_110971e0();
  /* 110a044c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a044f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a0451 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0454 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 110a0457 mov dword ptr [0x110c0870], ecx */
  w32((uint32_t)(0x110c0870), (ECX));
  /* 110a045d mov dword ptr [0x110c086c], 0 */
  w32((uint32_t)(0x110c086c), (0x0u));
  /* 110a0467 cmp dword ptr [0x110c0878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a046e je 0x110a0479 */
  if (C.zf) goto L_110a0479;
  /* 110a0470 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 110a0477 jmp 0x110a048b */
  goto L_110a048b;
L_110a0479:;
  /* 110a0479 mov edx, dword ptr [0x110c087c] */
  EDX = (r32((uint32_t)(0x110c087c)));
  /* 110a047f push edx */
  push32((uint32_t)(EDX));
  /* 110a0480 call 0x110a0ec0 */
  push32(0x110a0485u); f_110a0ec0();
  /* 110a0485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0488 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_110a048b:;
  /* 110a048b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a048e mov dword ptr [0x110c0874], eax */
  w32((uint32_t)(0x110c0874), (EAX));
  /* 110a0493 push 1 */
  push32((uint32_t)(0x1u));
  /* 110a0495 push 0x110a04e0 */
  push32((uint32_t)(0x110a04e0u));
  /* 110a049a call dword ptr [0x110c3274] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3274))), 0x110a04a0u);
  /* 110a04a0 mov ecx, dword ptr [0x110c0884] */
  ECX = (r32((uint32_t)(0x110c0884)));
  /* 110a04a6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 110a04ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a04ae je 0x110a04cc */
  if (C.zf) goto L_110a04cc;
  /* 110a04b0 mov edx, dword ptr [0x110c0884] */
  EDX = (r32((uint32_t)(0x110c0884)));
  /* 110a04b6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 110a04bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a04be je 0x110a04cc */
  if (C.zf) goto L_110a04cc;
  /* 110a04c0 mov eax, dword ptr [0x110c0884] */
  EAX = (r32((uint32_t)(0x110c0884)));
  /* 110a04c5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 110a04c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a04ca jne 0x110a04d6 */
  if (!C.zf) goto L_110a04d6;
L_110a04cc:;
  /* 110a04cc mov dword ptr [0x110c0884], 0 */
  w32((uint32_t)(0x110c0884), (0x0u));
L_110a04d6:;
  /* 110a04d6 mov esp, ebp */
  ESP = (EBP);
  /* 110a04d8 pop ebp */
  EBP = (pop32());
  /* 110a04d9 ret  */
  ESPCHK(0x110a0420u, _esp0);
  ESP += 4; return;
}

/* FUN_100104e0 @ 0x110a04e0 (804 bytes, 220 insns) */
void f_110a04e0(void) {
  FTRACE(0x110a04e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a04e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a04e1 mov ebp, esp */
  EBP = (ESP);
  /* 110a04e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a04e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a04e9 push eax */
  push32((uint32_t)(EAX));
  /* 110a04ea call 0x110a0e40 */
  push32(0x110a04efu); f_110a0e40();
  /* 110a04ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a04f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 110a04f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 110a04f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 110a04fa push ecx */
  push32((uint32_t)(ECX));
  /* 110a04fb mov edx, dword ptr [0x110c0870] */
  EDX = (r32((uint32_t)(0x110c0870)));
  /* 110a0501 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 110a0503 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0505 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 110a050b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0511 push edx */
  push32((uint32_t)(EDX));
  /* 110a0512 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a0515 push eax */
  push32((uint32_t)(EAX));
  /* 110a0516 call dword ptr [0x110c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c088c))), 0x110a051cu);
  /* 110a051c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a051e jne 0x110a0534 */
  if (!C.zf) goto L_110a0534;
  /* 110a0520 mov dword ptr [0x110c0884], 0 */
  w32((uint32_t)(0x110c0884), (0x0u));
  /* 110a052a mov eax, 1 */
  EAX = (0x1u);
  /* 110a052f jmp 0x110a07fe */
  goto L_110a07fe;
L_110a0534:;
  /* 110a0534 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 110a0537 push ecx */
  push32((uint32_t)(ECX));
  /* 110a0538 mov edx, dword ptr [0x110c0880] */
  EDX = (r32((uint32_t)(0x110c0880)));
  /* 110a053e push edx */
  push32((uint32_t)(EDX));
  /* 110a053f call 0x110a2a80 */
  push32(0x110a0544u); f_110a2a80();
  /* 110a0544 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0547 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a0549 jne 0x110a066f */
  if (!C.zf) goto L_110a066f;
  /* 110a054f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 110a0551 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 110a0554 push eax */
  push32((uint32_t)(EAX));
  /* 110a0555 mov ecx, dword ptr [0x110c0878] */
  ECX = (r32((uint32_t)(0x110c0878)));
  /* 110a055b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110a055d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a055f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 110a0565 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a056b push ecx */
  push32((uint32_t)(ECX));
  /* 110a056c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a056f push edx */
  push32((uint32_t)(EDX));
  /* 110a0570 call dword ptr [0x110c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c088c))), 0x110a0576u);
  /* 110a0576 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a0578 jne 0x110a058e */
  if (!C.zf) goto L_110a058e;
  /* 110a057a mov dword ptr [0x110c0884], 0 */
  w32((uint32_t)(0x110c0884), (0x0u));
  /* 110a0584 mov eax, 1 */
  EAX = (0x1u);
  /* 110a0589 jmp 0x110a07fe */
  goto L_110a07fe;
L_110a058e:;
  /* 110a058e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 110a0591 push eax */
  push32((uint32_t)(EAX));
  /* 110a0592 mov ecx, dword ptr [0x110c087c] */
  ECX = (r32((uint32_t)(0x110c087c)));
  /* 110a0598 push ecx */
  push32((uint32_t)(ECX));
  /* 110a0599 call 0x110a2a80 */
  push32(0x110a059eu); f_110a2a80();
  /* 110a059e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a05a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a05a3 jne 0x110a05d0 */
  if (!C.zf) goto L_110a05d0;
  /* 110a05a5 mov edx, dword ptr [0x110c0884] */
  EDX = (r32((uint32_t)(0x110c0884)));
  /* 110a05ab or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 110a05b1 mov dword ptr [0x110c0884], edx */
  w32((uint32_t)(0x110c0884), (EDX));
  /* 110a05b7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a05ba mov dword ptr [0x110c0888], eax */
  w32((uint32_t)(0x110c0888), (EAX));
  /* 110a05bf mov ecx, dword ptr [0x110c0888] */
  ECX = (r32((uint32_t)(0x110c0888)));
  /* 110a05c5 mov dword ptr [0x110c086c], ecx */
  w32((uint32_t)(0x110c086c), (ECX));
  /* 110a05cb jmp 0x110a066f */
  goto L_110a066f;
L_110a05d0:;
  /* 110a05d0 mov edx, dword ptr [0x110c0884] */
  EDX = (r32((uint32_t)(0x110c0884)));
  /* 110a05d6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 110a05d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a05db jne 0x110a066f */
  if (!C.zf) goto L_110a066f;
  /* 110a05e1 cmp dword ptr [0x110c0874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a05e8 je 0x110a063d */
  if (C.zf) goto L_110a063d;
  /* 110a05ea mov eax, dword ptr [0x110c0874] */
  EAX = (r32((uint32_t)(0x110c0874)));
  /* 110a05ef push eax */
  push32((uint32_t)(EAX));
  /* 110a05f0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 110a05f3 push ecx */
  push32((uint32_t)(ECX));
  /* 110a05f4 mov edx, dword ptr [0x110c087c] */
  EDX = (r32((uint32_t)(0x110c087c)));
  /* 110a05fa push edx */
  push32((uint32_t)(EDX));
  /* 110a05fb call 0x110a2b50 */
  push32(0x110a0600u); f_110a2b50();
  /* 110a0600 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0603 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a0605 jne 0x110a063d */
  if (!C.zf) goto L_110a063d;
  /* 110a0607 mov eax, dword ptr [0x110c0884] */
  EAX = (r32((uint32_t)(0x110c0884)));
  /* 110a060c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 110a060e mov dword ptr [0x110c0884], eax */
  w32((uint32_t)(0x110c0884), (EAX));
  /* 110a0613 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a0616 mov dword ptr [0x110c0888], ecx */
  w32((uint32_t)(0x110c0888), (ECX));
  /* 110a061c mov edx, dword ptr [0x110c087c] */
  EDX = (r32((uint32_t)(0x110c087c)));
  /* 110a0622 push edx */
  push32((uint32_t)(EDX));
  /* 110a0623 call 0x110971e0 */
  push32(0x110a0628u); f_110971e0();
  /* 110a0628 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a062b cmp eax, dword ptr [0x110c0874] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110c0874))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0631 jne 0x110a063b */
  if (!C.zf) goto L_110a063b;
  /* 110a0633 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a0636 mov dword ptr [0x110c086c], eax */
  w32((uint32_t)(0x110c086c), (EAX));
L_110a063b:;
  /* 110a063b jmp 0x110a066f */
  goto L_110a066f;
L_110a063d:;
  /* 110a063d mov ecx, dword ptr [0x110c0884] */
  ECX = (r32((uint32_t)(0x110c0884)));
  /* 110a0643 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 110a0646 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a0648 jne 0x110a066f */
  if (!C.zf) goto L_110a066f;
  /* 110a064a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a064d push edx */
  push32((uint32_t)(EDX));
  /* 110a064e call 0x110a0b80 */
  push32(0x110a0653u); f_110a0b80();
  /* 110a0653 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0656 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a0658 je 0x110a066f */
  if (C.zf) goto L_110a066f;
  /* 110a065a mov eax, dword ptr [0x110c0884] */
  EAX = (r32((uint32_t)(0x110c0884)));
  /* 110a065f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 110a0661 mov dword ptr [0x110c0884], eax */
  w32((uint32_t)(0x110c0884), (EAX));
  /* 110a0666 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a0669 mov dword ptr [0x110c0888], ecx */
  w32((uint32_t)(0x110c0888), (ECX));
L_110a066f:;
  /* 110a066f mov edx, dword ptr [0x110c0884] */
  EDX = (r32((uint32_t)(0x110c0884)));
  /* 110a0675 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 110a067b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0681 je 0x110a07f1 */
  if (C.zf) goto L_110a07f1;
  /* 110a0687 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 110a0689 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 110a068c push eax */
  push32((uint32_t)(EAX));
  /* 110a068d mov ecx, dword ptr [0x110c0878] */
  ECX = (r32((uint32_t)(0x110c0878)));
  /* 110a0693 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110a0695 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0697 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 110a069d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a06a3 push ecx */
  push32((uint32_t)(ECX));
  /* 110a06a4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a06a7 push edx */
  push32((uint32_t)(EDX));
  /* 110a06a8 call dword ptr [0x110c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c088c))), 0x110a06aeu);
  /* 110a06ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a06b0 jne 0x110a06c6 */
  if (!C.zf) goto L_110a06c6;
  /* 110a06b2 mov dword ptr [0x110c0884], 0 */
  w32((uint32_t)(0x110c0884), (0x0u));
  /* 110a06bc mov eax, 1 */
  EAX = (0x1u);
  /* 110a06c1 jmp 0x110a07fe */
  goto L_110a07fe;
L_110a06c6:;
  /* 110a06c6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 110a06c9 push eax */
  push32((uint32_t)(EAX));
  /* 110a06ca mov ecx, dword ptr [0x110c087c] */
  ECX = (r32((uint32_t)(0x110c087c)));
  /* 110a06d0 push ecx */
  push32((uint32_t)(ECX));
  /* 110a06d1 call 0x110a2a80 */
  push32(0x110a06d6u); f_110a2a80();
  /* 110a06d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a06d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a06db jne 0x110a0790 */
  if (!C.zf) goto L_110a0790;
  /* 110a06e1 mov edx, dword ptr [0x110c0884] */
  EDX = (r32((uint32_t)(0x110c0884)));
  /* 110a06e7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 110a06ea mov dword ptr [0x110c0884], edx */
  w32((uint32_t)(0x110c0884), (EDX));
  /* 110a06f0 cmp dword ptr [0x110c0878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a06f7 je 0x110a071a */
  if (C.zf) goto L_110a071a;
  /* 110a06f9 mov eax, dword ptr [0x110c0884] */
  EAX = (r32((uint32_t)(0x110c0884)));
  /* 110a06fe or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 110a0701 mov dword ptr [0x110c0884], eax */
  w32((uint32_t)(0x110c0884), (EAX));
  /* 110a0706 cmp dword ptr [0x110c086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a070d jne 0x110a0718 */
  if (!C.zf) goto L_110a0718;
  /* 110a070f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a0712 mov dword ptr [0x110c086c], ecx */
  w32((uint32_t)(0x110c086c), (ECX));
L_110a0718:;
  /* 110a0718 jmp 0x110a078e */
  goto L_110a078e;
L_110a071a:;
  /* 110a071a cmp dword ptr [0x110c0874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0721 je 0x110a076f */
  if (C.zf) goto L_110a076f;
  /* 110a0723 mov edx, dword ptr [0x110c087c] */
  EDX = (r32((uint32_t)(0x110c087c)));
  /* 110a0729 push edx */
  push32((uint32_t)(EDX));
  /* 110a072a call 0x110971e0 */
  push32(0x110a072fu); f_110971e0();
  /* 110a072f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0732 cmp eax, dword ptr [0x110c0874] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110c0874))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0738 jne 0x110a076f */
  if (!C.zf) goto L_110a076f;
  /* 110a073a push 1 */
  push32((uint32_t)(0x1u));
  /* 110a073c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a073f push eax */
  push32((uint32_t)(EAX));
  /* 110a0740 call 0x110a0bd0 */
  push32(0x110a0745u); f_110a0bd0();
  /* 110a0745 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0748 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a074a je 0x110a076d */
  if (C.zf) goto L_110a076d;
  /* 110a074c mov ecx, dword ptr [0x110c0884] */
  ECX = (r32((uint32_t)(0x110c0884)));
  /* 110a0752 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 110a0755 mov dword ptr [0x110c0884], ecx */
  w32((uint32_t)(0x110c0884), (ECX));
  /* 110a075b cmp dword ptr [0x110c086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0762 jne 0x110a076d */
  if (!C.zf) goto L_110a076d;
  /* 110a0764 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a0767 mov dword ptr [0x110c086c], edx */
  w32((uint32_t)(0x110c086c), (EDX));
L_110a076d:;
  /* 110a076d jmp 0x110a078e */
  goto L_110a078e;
L_110a076f:;
  /* 110a076f mov eax, dword ptr [0x110c0884] */
  EAX = (r32((uint32_t)(0x110c0884)));
  /* 110a0774 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 110a0777 mov dword ptr [0x110c0884], eax */
  w32((uint32_t)(0x110c0884), (EAX));
  /* 110a077c cmp dword ptr [0x110c086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0783 jne 0x110a078e */
  if (!C.zf) goto L_110a078e;
  /* 110a0785 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a0788 mov dword ptr [0x110c086c], ecx */
  w32((uint32_t)(0x110c086c), (ECX));
L_110a078e:;
  /* 110a078e jmp 0x110a07f1 */
  goto L_110a07f1;
L_110a0790:;
  /* 110a0790 cmp dword ptr [0x110c0878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0797 jne 0x110a07f1 */
  if (!C.zf) goto L_110a07f1;
  /* 110a0799 cmp dword ptr [0x110c0874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a07a0 je 0x110a07f1 */
  if (C.zf) goto L_110a07f1;
  /* 110a07a2 mov edx, dword ptr [0x110c0874] */
  EDX = (r32((uint32_t)(0x110c0874)));
  /* 110a07a8 push edx */
  push32((uint32_t)(EDX));
  /* 110a07a9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 110a07ac push eax */
  push32((uint32_t)(EAX));
  /* 110a07ad mov ecx, dword ptr [0x110c087c] */
  ECX = (r32((uint32_t)(0x110c087c)));
  /* 110a07b3 push ecx */
  push32((uint32_t)(ECX));
  /* 110a07b4 call 0x110a2b50 */
  push32(0x110a07b9u); f_110a2b50();
  /* 110a07b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a07bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a07be jne 0x110a07f1 */
  if (!C.zf) goto L_110a07f1;
  /* 110a07c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a07c2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a07c5 push edx */
  push32((uint32_t)(EDX));
  /* 110a07c6 call 0x110a0bd0 */
  push32(0x110a07cbu); f_110a0bd0();
  /* 110a07cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a07ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a07d0 je 0x110a07f1 */
  if (C.zf) goto L_110a07f1;
  /* 110a07d2 mov eax, dword ptr [0x110c0884] */
  EAX = (r32((uint32_t)(0x110c0884)));
  /* 110a07d7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 110a07da mov dword ptr [0x110c0884], eax */
  w32((uint32_t)(0x110c0884), (EAX));
  /* 110a07df cmp dword ptr [0x110c086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a07e6 jne 0x110a07f1 */
  if (!C.zf) goto L_110a07f1;
  /* 110a07e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a07eb mov dword ptr [0x110c086c], ecx */
  w32((uint32_t)(0x110c086c), (ECX));
L_110a07f1:;
  /* 110a07f1 mov eax, dword ptr [0x110c0884] */
  EAX = (r32((uint32_t)(0x110c0884)));
  /* 110a07f6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 110a07f9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110a07fb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a07fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_110a07fe:;
  /* 110a07fe mov esp, ebp */
  ESP = (EBP);
  /* 110a0800 pop ebp */
  EBP = (pop32());
  /* 110a0801 ret 4 */
  ESPCHK(0x110a04e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010810 @ 0x110a0810 (116 bytes, 33 insns) */
void f_110a0810(void) {
  FTRACE(0x110a0810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0810 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0811 mov ebp, esp */
  EBP = (ESP);
  /* 110a0813 push ecx */
  push32((uint32_t)(ECX));
  /* 110a0814 mov eax, dword ptr [0x110c087c] */
  EAX = (r32((uint32_t)(0x110c087c)));
  /* 110a0819 push eax */
  push32((uint32_t)(EAX));
  /* 110a081a call 0x110971e0 */
  push32(0x110a081fu); f_110971e0();
  /* 110a081f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0822 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a0824 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0827 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 110a082a mov dword ptr [0x110c0878], ecx */
  w32((uint32_t)(0x110c0878), (ECX));
  /* 110a0830 cmp dword ptr [0x110c0878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0837 je 0x110a0842 */
  if (C.zf) goto L_110a0842;
  /* 110a0839 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 110a0840 jmp 0x110a0854 */
  goto L_110a0854;
L_110a0842:;
  /* 110a0842 mov edx, dword ptr [0x110c087c] */
  EDX = (r32((uint32_t)(0x110c087c)));
  /* 110a0848 push edx */
  push32((uint32_t)(EDX));
  /* 110a0849 call 0x110a0ec0 */
  push32(0x110a084eu); f_110a0ec0();
  /* 110a084e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0851 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_110a0854:;
  /* 110a0854 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a0857 mov dword ptr [0x110c0874], eax */
  w32((uint32_t)(0x110c0874), (EAX));
  /* 110a085c push 1 */
  push32((uint32_t)(0x1u));
  /* 110a085e push 0x110a0890 */
  push32((uint32_t)(0x110a0890u));
  /* 110a0863 call dword ptr [0x110c3274] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3274))), 0x110a0869u);
  /* 110a0869 mov ecx, dword ptr [0x110c0884] */
  ECX = (r32((uint32_t)(0x110c0884)));
  /* 110a086f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 110a0872 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a0874 jne 0x110a0880 */
  if (!C.zf) goto L_110a0880;
  /* 110a0876 mov dword ptr [0x110c0884], 0 */
  w32((uint32_t)(0x110c0884), (0x0u));
L_110a0880:;
  /* 110a0880 mov esp, ebp */
  ESP = (EBP);
  /* 110a0882 pop ebp */
  EBP = (pop32());
  /* 110a0883 ret  */
  ESPCHK(0x110a0810u, _esp0);
  ESP += 4; return;
}

/* FUN_10010890 @ 0x110a0890 (287 bytes, 86 insns) */
void f_110a0890(void) {
  FTRACE(0x110a0890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0890 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0891 mov ebp, esp */
  EBP = (ESP);
  /* 110a0893 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0896 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0899 push eax */
  push32((uint32_t)(EAX));
  /* 110a089a call 0x110a0e40 */
  push32(0x110a089fu); f_110a0e40();
  /* 110a089f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a08a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 110a08a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 110a08a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 110a08aa push ecx */
  push32((uint32_t)(ECX));
  /* 110a08ab mov edx, dword ptr [0x110c0878] */
  EDX = (r32((uint32_t)(0x110c0878)));
  /* 110a08b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 110a08b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a08b5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 110a08bb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a08c1 push edx */
  push32((uint32_t)(EDX));
  /* 110a08c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a08c5 push eax */
  push32((uint32_t)(EAX));
  /* 110a08c6 call dword ptr [0x110c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c088c))), 0x110a08ccu);
  /* 110a08cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a08ce jne 0x110a08e4 */
  if (!C.zf) goto L_110a08e4;
  /* 110a08d0 mov dword ptr [0x110c0884], 0 */
  w32((uint32_t)(0x110c0884), (0x0u));
  /* 110a08da mov eax, 1 */
  EAX = (0x1u);
  /* 110a08df jmp 0x110a09a9 */
  goto L_110a09a9;
L_110a08e4:;
  /* 110a08e4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 110a08e7 push ecx */
  push32((uint32_t)(ECX));
  /* 110a08e8 mov edx, dword ptr [0x110c087c] */
  EDX = (r32((uint32_t)(0x110c087c)));
  /* 110a08ee push edx */
  push32((uint32_t)(EDX));
  /* 110a08ef call 0x110a2a80 */
  push32(0x110a08f4u); f_110a2a80();
  /* 110a08f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a08f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a08f9 jne 0x110a0939 */
  if (!C.zf) goto L_110a0939;
  /* 110a08fb cmp dword ptr [0x110c0878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0902 jne 0x110a0916 */
  if (!C.zf) goto L_110a0916;
  /* 110a0904 push 1 */
  push32((uint32_t)(0x1u));
  /* 110a0906 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a0909 push eax */
  push32((uint32_t)(EAX));
  /* 110a090a call 0x110a0bd0 */
  push32(0x110a090fu); f_110a0bd0();
  /* 110a090f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0912 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a0914 je 0x110a0937 */
  if (C.zf) goto L_110a0937;
L_110a0916:;
  /* 110a0916 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a0919 mov dword ptr [0x110c0888], ecx */
  w32((uint32_t)(0x110c0888), (ECX));
  /* 110a091f mov edx, dword ptr [0x110c0888] */
  EDX = (r32((uint32_t)(0x110c0888)));
  /* 110a0925 mov dword ptr [0x110c086c], edx */
  w32((uint32_t)(0x110c086c), (EDX));
  /* 110a092b mov eax, dword ptr [0x110c0884] */
  EAX = (r32((uint32_t)(0x110c0884)));
  /* 110a0930 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 110a0932 mov dword ptr [0x110c0884], eax */
  w32((uint32_t)(0x110c0884), (EAX));
L_110a0937:;
  /* 110a0937 jmp 0x110a099c */
  goto L_110a099c;
L_110a0939:;
  /* 110a0939 cmp dword ptr [0x110c0878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0940 jne 0x110a099c */
  if (!C.zf) goto L_110a099c;
  /* 110a0942 cmp dword ptr [0x110c0874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0949 je 0x110a099c */
  if (C.zf) goto L_110a099c;
  /* 110a094b mov ecx, dword ptr [0x110c0874] */
  ECX = (r32((uint32_t)(0x110c0874)));
  /* 110a0951 push ecx */
  push32((uint32_t)(ECX));
  /* 110a0952 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 110a0955 push edx */
  push32((uint32_t)(EDX));
  /* 110a0956 mov eax, dword ptr [0x110c087c] */
  EAX = (r32((uint32_t)(0x110c087c)));
  /* 110a095b push eax */
  push32((uint32_t)(EAX));
  /* 110a095c call 0x110a2b50 */
  push32(0x110a0961u); f_110a2b50();
  /* 110a0961 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0964 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a0966 jne 0x110a099c */
  if (!C.zf) goto L_110a099c;
  /* 110a0968 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a096a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a096d push ecx */
  push32((uint32_t)(ECX));
  /* 110a096e call 0x110a0bd0 */
  push32(0x110a0973u); f_110a0bd0();
  /* 110a0973 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0976 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a0978 je 0x110a099c */
  if (C.zf) goto L_110a099c;
  /* 110a097a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a097d mov dword ptr [0x110c0888], edx */
  w32((uint32_t)(0x110c0888), (EDX));
  /* 110a0983 mov eax, dword ptr [0x110c0888] */
  EAX = (r32((uint32_t)(0x110c0888)));
  /* 110a0988 mov dword ptr [0x110c086c], eax */
  w32((uint32_t)(0x110c086c), (EAX));
  /* 110a098d mov ecx, dword ptr [0x110c0884] */
  ECX = (r32((uint32_t)(0x110c0884)));
  /* 110a0993 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 110a0996 mov dword ptr [0x110c0884], ecx */
  w32((uint32_t)(0x110c0884), (ECX));
L_110a099c:;
  /* 110a099c mov eax, dword ptr [0x110c0884] */
  EAX = (r32((uint32_t)(0x110c0884)));
  /* 110a09a1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 110a09a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110a09a6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a09a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_110a09a9:;
  /* 110a09a9 mov esp, ebp */
  ESP = (EBP);
  /* 110a09ab pop ebp */
  EBP = (pop32());
  /* 110a09ac ret 4 */
  ESPCHK(0x110a0890u, _esp0);
  ESP += 8; return;
}

/* FUN_100109b0 @ 0x110a09b0 (69 bytes, 20 insns) */
void f_110a09b0(void) {
  FTRACE(0x110a09b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a09b0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a09b1 mov ebp, esp */
  EBP = (ESP);
  /* 110a09b3 mov eax, dword ptr [0x110c0880] */
  EAX = (r32((uint32_t)(0x110c0880)));
  /* 110a09b8 push eax */
  push32((uint32_t)(EAX));
  /* 110a09b9 call 0x110971e0 */
  push32(0x110a09beu); f_110971e0();
  /* 110a09be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a09c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a09c3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a09c6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 110a09c9 mov dword ptr [0x110c0870], ecx */
  w32((uint32_t)(0x110c0870), (ECX));
  /* 110a09cf push 1 */
  push32((uint32_t)(0x1u));
  /* 110a09d1 push 0x110a0a00 */
  push32((uint32_t)(0x110a0a00u));
  /* 110a09d6 call dword ptr [0x110c3274] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3274))), 0x110a09dcu);
  /* 110a09dc mov edx, dword ptr [0x110c0884] */
  EDX = (r32((uint32_t)(0x110c0884)));
  /* 110a09e2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 110a09e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a09e7 jne 0x110a09f3 */
  if (!C.zf) goto L_110a09f3;
  /* 110a09e9 mov dword ptr [0x110c0884], 0 */
  w32((uint32_t)(0x110c0884), (0x0u));
L_110a09f3:;
  /* 110a09f3 pop ebp */
  EBP = (pop32());
  /* 110a09f4 ret  */
  ESPCHK(0x110a09b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a00 @ 0x110a0a00 (172 bytes, 54 insns) */
void f_110a0a00(void) {
  FTRACE(0x110a0a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0a00 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0a01 mov ebp, esp */
  EBP = (ESP);
  /* 110a0a03 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0a06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0a09 push eax */
  push32((uint32_t)(EAX));
  /* 110a0a0a call 0x110a0e40 */
  push32(0x110a0a0fu); f_110a0e40();
  /* 110a0a0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0a12 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 110a0a15 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 110a0a17 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 110a0a1a push ecx */
  push32((uint32_t)(ECX));
  /* 110a0a1b mov edx, dword ptr [0x110c0870] */
  EDX = (r32((uint32_t)(0x110c0870)));
  /* 110a0a21 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 110a0a23 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0a25 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 110a0a2b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0a31 push edx */
  push32((uint32_t)(EDX));
  /* 110a0a32 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a0a35 push eax */
  push32((uint32_t)(EAX));
  /* 110a0a36 call dword ptr [0x110c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c088c))), 0x110a0a3cu);
  /* 110a0a3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a0a3e jne 0x110a0a51 */
  if (!C.zf) goto L_110a0a51;
  /* 110a0a40 mov dword ptr [0x110c0884], 0 */
  w32((uint32_t)(0x110c0884), (0x0u));
  /* 110a0a4a mov eax, 1 */
  EAX = (0x1u);
  /* 110a0a4f jmp 0x110a0aa6 */
  goto L_110a0aa6;
L_110a0a51:;
  /* 110a0a51 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 110a0a54 push ecx */
  push32((uint32_t)(ECX));
  /* 110a0a55 mov edx, dword ptr [0x110c0880] */
  EDX = (r32((uint32_t)(0x110c0880)));
  /* 110a0a5b push edx */
  push32((uint32_t)(EDX));
  /* 110a0a5c call 0x110a2a80 */
  push32(0x110a0a61u); f_110a2a80();
  /* 110a0a61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0a64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a0a66 jne 0x110a0a99 */
  if (!C.zf) goto L_110a0a99;
  /* 110a0a68 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a0a6b push eax */
  push32((uint32_t)(EAX));
  /* 110a0a6c call 0x110a0b80 */
  push32(0x110a0a71u); f_110a0b80();
  /* 110a0a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0a74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a0a76 je 0x110a0a99 */
  if (C.zf) goto L_110a0a99;
  /* 110a0a78 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110a0a7b mov dword ptr [0x110c0888], ecx */
  w32((uint32_t)(0x110c0888), (ECX));
  /* 110a0a81 mov edx, dword ptr [0x110c0888] */
  EDX = (r32((uint32_t)(0x110c0888)));
  /* 110a0a87 mov dword ptr [0x110c086c], edx */
  w32((uint32_t)(0x110c086c), (EDX));
  /* 110a0a8d mov eax, dword ptr [0x110c0884] */
  EAX = (r32((uint32_t)(0x110c0884)));
  /* 110a0a92 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 110a0a94 mov dword ptr [0x110c0884], eax */
  w32((uint32_t)(0x110c0884), (EAX));
L_110a0a99:;
  /* 110a0a99 mov eax, dword ptr [0x110c0884] */
  EAX = (r32((uint32_t)(0x110c0884)));
  /* 110a0a9e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 110a0aa1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110a0aa3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0aa5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_110a0aa6:;
  /* 110a0aa6 mov esp, ebp */
  ESP = (EBP);
  /* 110a0aa8 pop ebp */
  EBP = (pop32());
  /* 110a0aa9 ret 4 */
  ESPCHK(0x110a0a00u, _esp0);
  ESP += 8; return;
}

/* FUN_10010ab0 @ 0x110a0ab0 (43 bytes, 11 insns) */
void f_110a0ab0(void) {
  FTRACE(0x110a0ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0ab1 mov ebp, esp */
  EBP = (ESP);
  /* 110a0ab3 mov eax, dword ptr [0x110c0884] */
  EAX = (r32((uint32_t)(0x110c0884)));
  /* 110a0ab8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 110a0abd mov dword ptr [0x110c0884], eax */
  w32((uint32_t)(0x110c0884), (EAX));
  /* 110a0ac2 call dword ptr [0x110c3264] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3264))), 0x110a0ac8u);
  /* 110a0ac8 mov dword ptr [0x110c0888], eax */
  w32((uint32_t)(0x110c0888), (EAX));
  /* 110a0acd mov ecx, dword ptr [0x110c0888] */
  ECX = (r32((uint32_t)(0x110c0888)));
  /* 110a0ad3 mov dword ptr [0x110c086c], ecx */
  w32((uint32_t)(0x110c086c), (ECX));
  /* 110a0ad9 pop ebp */
  EBP = (pop32());
  /* 110a0ada ret  */
  ESPCHK(0x110a0ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ae0 @ 0x110a0ae0 (155 bytes, 57 insns) */
void f_110a0ae0(void) {
  FTRACE(0x110a0ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0ae1 mov ebp, esp */
  EBP = (ESP);
  /* 110a0ae3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0ae6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0aea je 0x110a0b0b */
  if (C.zf) goto L_110a0b0b;
  /* 110a0aec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0aef movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110a0af2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a0af4 je 0x110a0b0b */
  if (C.zf) goto L_110a0b0b;
  /* 110a0af6 push 0x110bca6c */
  push32((uint32_t)(0x110bca6cu));
  /* 110a0afb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0afe push edx */
  push32((uint32_t)(EDX));
  /* 110a0aff call 0x110a0040 */
  push32(0x110a0b04u); f_110a0040();
  /* 110a0b04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0b07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a0b09 jne 0x110a0b33 */
  if (!C.zf) goto L_110a0b33;
L_110a0b0b:;
  /* 110a0b0b push 8 */
  push32((uint32_t)(0x8u));
  /* 110a0b0d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 110a0b10 push eax */
  push32((uint32_t)(EAX));
  /* 110a0b11 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 110a0b16 mov ecx, dword ptr [0x110c0888] */
  ECX = (r32((uint32_t)(0x110c0888)));
  /* 110a0b1c push ecx */
  push32((uint32_t)(ECX));
  /* 110a0b1d call dword ptr [0x110c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c088c))), 0x110a0b23u);
  /* 110a0b23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a0b25 jne 0x110a0b2b */
  if (!C.zf) goto L_110a0b2b;
  /* 110a0b27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a0b29 jmp 0x110a0b77 */
  goto L_110a0b77;
L_110a0b2b:;
  /* 110a0b2b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 110a0b2e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 110a0b31 jmp 0x110a0b6b */
  goto L_110a0b6b;
L_110a0b33:;
  /* 110a0b33 push 0x110bca68 */
  push32((uint32_t)(0x110bca68u));
  /* 110a0b38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0b3b push eax */
  push32((uint32_t)(EAX));
  /* 110a0b3c call 0x110a0040 */
  push32(0x110a0b41u); f_110a0040();
  /* 110a0b41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0b44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a0b46 jne 0x110a0b6b */
  if (!C.zf) goto L_110a0b6b;
  /* 110a0b48 push 8 */
  push32((uint32_t)(0x8u));
  /* 110a0b4a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 110a0b4d push ecx */
  push32((uint32_t)(ECX));
  /* 110a0b4e push 0xb */
  push32((uint32_t)(0xbu));
  /* 110a0b50 mov edx, dword ptr [0x110c0888] */
  EDX = (r32((uint32_t)(0x110c0888)));
  /* 110a0b56 push edx */
  push32((uint32_t)(EDX));
  /* 110a0b57 call dword ptr [0x110c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c088c))), 0x110a0b5du);
  /* 110a0b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a0b5f jne 0x110a0b65 */
  if (!C.zf) goto L_110a0b65;
  /* 110a0b61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a0b63 jmp 0x110a0b77 */
  goto L_110a0b77;
L_110a0b65:;
  /* 110a0b65 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 110a0b68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_110a0b6b:;
  /* 110a0b6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0b6e push ecx */
  push32((uint32_t)(ECX));
  /* 110a0b6f call 0x110a2c60 */
  push32(0x110a0b74u); f_110a2c60();
  /* 110a0b74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110a0b77:;
  /* 110a0b77 mov esp, ebp */
  ESP = (EBP);
  /* 110a0b79 pop ebp */
  EBP = (pop32());
  /* 110a0b7a ret  */
  ESPCHK(0x110a0ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b80 @ 0x110a0b80 (79 bytes, 26 insns) */
void f_110a0b80(void) {
  FTRACE(0x110a0b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0b80 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0b81 mov ebp, esp */
  EBP = (ESP);
  /* 110a0b83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0b86 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 110a0b8a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 110a0b8e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 110a0b95 jmp 0x110a0ba0 */
  goto L_110a0ba0;
L_110a0b97:;
  /* 110a0b97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a0b9a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0b9d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_110a0ba0:;
  /* 110a0ba0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0ba4 jae 0x110a0bc6 */
  if (!C.cf) goto L_110a0bc6;
  /* 110a0ba6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a0ba9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 110a0baf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a0bb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a0bb4 mov cx, word ptr [eax*2 + 0x110bf9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x110bf9c4)));
  /* 110a0bbc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0bbe jne 0x110a0bc4 */
  if (!C.zf) goto L_110a0bc4;
  /* 110a0bc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a0bc2 jmp 0x110a0bcb */
  goto L_110a0bcb;
L_110a0bc4:;
  /* 110a0bc4 jmp 0x110a0b97 */
  goto L_110a0b97;
L_110a0bc6:;
  /* 110a0bc6 mov eax, 1 */
  EAX = (0x1u);
L_110a0bcb:;
  /* 110a0bcb mov esp, ebp */
  ESP = (EBP);
  /* 110a0bcd pop ebp */
  EBP = (pop32());
  /* 110a0bce ret  */
  ESPCHK(0x110a0b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bd0 @ 0x110a0bd0 (135 bytes, 48 insns) */
void f_110a0bd0(void) {
  FTRACE(0x110a0bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0bd1 mov ebp, esp */
  EBP = (ESP);
  /* 110a0bd3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0bd6 push esi */
  push32((uint32_t)(ESI));
  /* 110a0bd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0bda and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a0bdf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a0be4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a0be9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 110a0bec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a0bf1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a0bf4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 110a0bf6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 110a0bf9 push ecx */
  push32((uint32_t)(ECX));
  /* 110a0bfa push 1 */
  push32((uint32_t)(0x1u));
  /* 110a0bfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a0bff push edx */
  push32((uint32_t)(EDX));
  /* 110a0c00 call dword ptr [0x110c088c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c088c))), 0x110a0c06u);
  /* 110a0c06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a0c08 jne 0x110a0c0e */
  if (!C.zf) goto L_110a0c0e;
  /* 110a0c0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a0c0c jmp 0x110a0c52 */
  goto L_110a0c52;
L_110a0c0e:;
  /* 110a0c0e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 110a0c11 push eax */
  push32((uint32_t)(EAX));
  /* 110a0c12 call 0x110a0e40 */
  push32(0x110a0c17u); f_110a0e40();
  /* 110a0c17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0c1a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0c1d je 0x110a0c4d */
  if (C.zf) goto L_110a0c4d;
  /* 110a0c1f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0c23 je 0x110a0c4d */
  if (C.zf) goto L_110a0c4d;
  /* 110a0c25 mov ecx, dword ptr [0x110c087c] */
  ECX = (r32((uint32_t)(0x110c087c)));
  /* 110a0c2b push ecx */
  push32((uint32_t)(ECX));
  /* 110a0c2c call 0x110a0ec0 */
  push32(0x110a0c31u); f_110a0ec0();
  /* 110a0c31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0c34 mov esi, eax */
  ESI = (EAX);
  /* 110a0c36 mov edx, dword ptr [0x110c087c] */
  EDX = (r32((uint32_t)(0x110c087c)));
  /* 110a0c3c push edx */
  push32((uint32_t)(EDX));
  /* 110a0c3d call 0x110971e0 */
  push32(0x110a0c42u); f_110971e0();
  /* 110a0c42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0c45 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0c47 jne 0x110a0c4d */
  if (!C.zf) goto L_110a0c4d;
  /* 110a0c49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a0c4b jmp 0x110a0c52 */
  goto L_110a0c52;
L_110a0c4d:;
  /* 110a0c4d mov eax, 1 */
  EAX = (0x1u);
L_110a0c52:;
  /* 110a0c52 pop esi */
  ESI = (pop32());
  /* 110a0c53 mov esp, ebp */
  ESP = (EBP);
  /* 110a0c55 pop ebp */
  EBP = (pop32());
  /* 110a0c56 ret  */
  ESPCHK(0x110a0bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c60 @ 0x110a0c60 (77 bytes, 18 insns) */
void f_110a0c60(void) {
  FTRACE(0x110a0c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0c60 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0c61 mov ebp, esp */
  EBP = (ESP);
  /* 110a0c63 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0c69 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 110a0c73 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 110a0c79 push eax */
  push32((uint32_t)(EAX));
  /* 110a0c7a call dword ptr [0x110c3260] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3260))), 0x110a0c80u);
  /* 110a0c80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a0c82 je 0x110a0c99 */
  if (C.zf) goto L_110a0c99;
  /* 110a0c84 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0c8b jne 0x110a0c99 */
  if (!C.zf) goto L_110a0c99;
  /* 110a0c8d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 110a0c97 jmp 0x110a0ca3 */
  goto L_110a0ca3;
L_110a0c99:;
  /* 110a0c99 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_110a0ca3:;
  /* 110a0ca3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 110a0ca9 mov esp, ebp */
  ESP = (EBP);
  /* 110a0cab pop ebp */
  EBP = (pop32());
  /* 110a0cac ret  */
  ESPCHK(0x110a0c60u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x110a0cb0 (388 bytes, 118 insns) */
void f_110a0cb0(void) {
  FTRACE(0x110a0cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0cb1 mov ebp, esp */
  EBP = (ESP);
  /* 110a0cb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0cb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 110a0cbd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 110a0cc4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_110a0ccb:;
  /* 110a0ccb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a0cce cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0cd1 jg 0x110a0e18 */
  if ((!C.zf&&C.sf==C.of)) goto L_110a0e18;
  /* 110a0cd7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a0cda add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0cdd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110a0cde sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0ce0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 110a0ce2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110a0ce5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a0ce8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a0ceb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0cee cmp edx, dword ptr [ecx + 0x110bf520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x110bf520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0cf4 jne 0x110a0dee */
  if (!C.zf) goto L_110a0dee;
  /* 110a0cfa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a0cfd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 110a0d00 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0d04 ja 0x110a0d27 */
  if ((!C.cf&&!C.zf)) goto L_110a0d27;
  /* 110a0d06 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0d0a je 0x110a0d99 */
  if (C.zf) goto L_110a0d99;
  /* 110a0d10 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0d14 je 0x110a0d44 */
  if (C.zf) goto L_110a0d44;
  /* 110a0d16 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0d1a je 0x110a0d66 */
  if (C.zf) goto L_110a0d66;
  /* 110a0d1c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0d20 je 0x110a0d88 */
  if (C.zf) goto L_110a0d88;
  /* 110a0d22 jmp 0x110a0db8 */
  goto L_110a0db8;
L_110a0d27:;
  /* 110a0d27 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0d2e je 0x110a0d55 */
  if (C.zf) goto L_110a0d55;
  /* 110a0d30 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0d37 je 0x110a0d77 */
  if (C.zf) goto L_110a0d77;
  /* 110a0d39 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0d40 je 0x110a0daa */
  if (C.zf) goto L_110a0daa;
  /* 110a0d42 jmp 0x110a0db8 */
  goto L_110a0db8;
L_110a0d44:;
  /* 110a0d44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a0d47 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a0d4a add ecx, 0x110bf524 */
  { uint32_t _a=(ECX),_b=(0x110bf524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0d50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110a0d53 jmp 0x110a0db8 */
  goto L_110a0db8;
L_110a0d55:;
  /* 110a0d55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a0d58 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a0d5b mov eax, dword ptr [edx + 0x110bf52c] */
  EAX = (r32((uint32_t)(EDX + 0x110bf52c)));
  /* 110a0d61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110a0d64 jmp 0x110a0db8 */
  goto L_110a0db8;
L_110a0d66:;
  /* 110a0d66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a0d69 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a0d6c add ecx, 0x110bf530 */
  { uint32_t _a=(ECX),_b=(0x110bf530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0d72 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110a0d75 jmp 0x110a0db8 */
  goto L_110a0db8;
L_110a0d77:;
  /* 110a0d77 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a0d7a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a0d7d mov eax, dword ptr [edx + 0x110bf534] */
  EAX = (r32((uint32_t)(EDX + 0x110bf534)));
  /* 110a0d83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110a0d86 jmp 0x110a0db8 */
  goto L_110a0db8;
L_110a0d88:;
  /* 110a0d88 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a0d8b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a0d8e add ecx, 0x110bf538 */
  { uint32_t _a=(ECX),_b=(0x110bf538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0d94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110a0d97 jmp 0x110a0db8 */
  goto L_110a0db8;
L_110a0d99:;
  /* 110a0d99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a0d9c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a0d9f add edx, 0x110bf53c */
  { uint32_t _a=(EDX),_b=(0x110bf53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0da5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110a0da8 jmp 0x110a0db8 */
  goto L_110a0db8;
L_110a0daa:;
  /* 110a0daa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a0dad imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a0db0 add eax, 0x110bf544 */
  { uint32_t _a=(EAX),_b=(0x110bf544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0db5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_110a0db8:;
  /* 110a0db8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0dbc je 0x110a0dc4 */
  if (C.zf) goto L_110a0dc4;
  /* 110a0dbe cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0dc2 jge 0x110a0dc6 */
  if ((C.sf==C.of)) goto L_110a0dc6;
L_110a0dc4:;
  /* 110a0dc4 jmp 0x110a0e18 */
  goto L_110a0e18;
L_110a0dc6:;
  /* 110a0dc6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a0dc9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0dcc push ecx */
  push32((uint32_t)(ECX));
  /* 110a0dcd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a0dd0 push edx */
  push32((uint32_t)(EDX));
  /* 110a0dd1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a0dd4 push eax */
  push32((uint32_t)(EAX));
  /* 110a0dd5 call 0x11097bd0 */
  push32(0x110a0ddau); f_11097bd0();
  /* 110a0dda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0ddd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a0de0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0de3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 110a0de7 mov eax, 1 */
  EAX = (0x1u);
  /* 110a0dec jmp 0x110a0e2e */
  goto L_110a0e2e;
L_110a0dee:;
  /* 110a0dee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a0df1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a0df4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0df7 cmp eax, dword ptr [edx + 0x110bf520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x110bf520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0dfd jae 0x110a0e0a */
  if (!C.cf) goto L_110a0e0a;
  /* 110a0dff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a0e02 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0e05 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110a0e08 jmp 0x110a0e13 */
  goto L_110a0e13;
L_110a0e0a:;
  /* 110a0e0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a0e0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0e10 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_110a0e13:;
  /* 110a0e13 jmp 0x110a0ccb */
  goto L_110a0ccb;
L_110a0e18:;
  /* 110a0e18 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a0e1b push eax */
  push32((uint32_t)(EAX));
  /* 110a0e1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a0e1f push ecx */
  push32((uint32_t)(ECX));
  /* 110a0e20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a0e23 push edx */
  push32((uint32_t)(EDX));
  /* 110a0e24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0e27 push eax */
  push32((uint32_t)(EAX));
  /* 110a0e28 call dword ptr [0x110c326c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c326c))), 0x110a0e2eu);
L_110a0e2e:;
  /* 110a0e2e mov esp, ebp */
  ESP = (EBP);
  /* 110a0e30 pop ebp */
  EBP = (pop32());
  /* 110a0e31 ret 0x10 */
  ESPCHK(0x110a0cb0u, _esp0);
  ESP += 20; return;
}

/* FUN_10010e40 @ 0x110a0e40 (118 bytes, 42 insns) */
void f_110a0e40(void) {
  FTRACE(0x110a0e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0e40 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0e41 mov ebp, esp */
  EBP = (ESP);
  /* 110a0e43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0e46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_110a0e4d:;
  /* 110a0e4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0e50 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110a0e52 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 110a0e55 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 110a0e59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0e5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0e5f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110a0e62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a0e64 je 0x110a0eaf */
  if (C.zf) goto L_110a0eaf;
  /* 110a0e66 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 110a0e6a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0e6d jl 0x110a0e82 */
  if ((C.sf!=C.of)) goto L_110a0e82;
  /* 110a0e6f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 110a0e73 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0e76 jg 0x110a0e82 */
  if ((!C.zf&&C.sf==C.of)) goto L_110a0e82;
  /* 110a0e78 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 110a0e7b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 110a0e7d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 110a0e80 jmp 0x110a0e9c */
  goto L_110a0e9c;
L_110a0e82:;
  /* 110a0e82 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 110a0e86 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0e89 jl 0x110a0e9c */
  if ((C.sf!=C.of)) goto L_110a0e9c;
  /* 110a0e8b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 110a0e8f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0e92 jg 0x110a0e9c */
  if ((!C.zf&&C.sf==C.of)) goto L_110a0e9c;
  /* 110a0e94 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 110a0e97 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 110a0e99 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_110a0e9c:;
  /* 110a0e9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a0e9f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 110a0ea2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 110a0ea6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 110a0eaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a0ead jmp 0x110a0e4d */
  goto L_110a0e4d;
L_110a0eaf:;
  /* 110a0eaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a0eb2 mov esp, ebp */
  ESP = (EBP);
  /* 110a0eb4 pop ebp */
  EBP = (pop32());
  /* 110a0eb5 ret  */
  ESPCHK(0x110a0e40u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x110a0ec0 (101 bytes, 36 insns) */
void f_110a0ec0(void) {
  FTRACE(0x110a0ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0ec1 mov ebp, esp */
  EBP = (ESP);
  /* 110a0ec3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a0ec6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 110a0ecd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0ed0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110a0ed2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 110a0ed5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0ed8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0edb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_110a0ede:;
  /* 110a0ede movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 110a0ee2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0ee5 jl 0x110a0ef0 */
  if ((C.sf!=C.of)) goto L_110a0ef0;
  /* 110a0ee7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 110a0eeb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0eee jle 0x110a0f02 */
  if ((C.zf||C.sf!=C.of)) goto L_110a0f02;
L_110a0ef0:;
  /* 110a0ef0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 110a0ef4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0ef7 jl 0x110a0f1e */
  if ((C.sf!=C.of)) goto L_110a0f1e;
  /* 110a0ef9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 110a0efd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0f00 jg 0x110a0f1e */
  if ((!C.zf&&C.sf==C.of)) goto L_110a0f1e;
L_110a0f02:;
  /* 110a0f02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a0f05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0f08 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110a0f0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0f0e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a0f10 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 110a0f13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0f16 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0f19 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 110a0f1c jmp 0x110a0ede */
  goto L_110a0ede;
L_110a0f1e:;
  /* 110a0f1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a0f21 mov esp, ebp */
  ESP = (EBP);
  /* 110a0f23 pop ebp */
  EBP = (pop32());
  /* 110a0f24 ret  */
  ESPCHK(0x110a0ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f30 @ 0x110a0f30 (122 bytes, 39 insns) */
void f_110a0f30(void) {
  FTRACE(0x110a0f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0f30 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0f31 mov ebp, esp */
  EBP = (ESP);
  /* 110a0f33 push ecx */
  push32((uint32_t)(ECX));
  /* 110a0f34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0f37 cmp eax, dword ptr [0x110c211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110c211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0f3d jae 0x110a0f61 */
  if (!C.cf) goto L_110a0f61;
  /* 110a0f3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0f42 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110a0f45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0f48 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 110a0f4b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a0f4e mov eax, dword ptr [ecx*4 + 0x110c1fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110c1fe0)));
  /* 110a0f55 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 110a0f5a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 110a0f5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a0f5f jne 0x110a0f7c */
  if (!C.zf) goto L_110a0f7c;
L_110a0f61:;
  /* 110a0f61 call 0x1109c280 */
  push32(0x110a0f66u); f_1109c280();
  /* 110a0f66 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 110a0f6c call 0x1109c290 */
  push32(0x110a0f71u); f_1109c290();
  /* 110a0f71 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 110a0f77 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a0f7a jmp 0x110a0fa6 */
  goto L_110a0fa6;
L_110a0f7c:;
  /* 110a0f7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0f7f push edx */
  push32((uint32_t)(EDX));
  /* 110a0f80 call 0x1109daa0 */
  push32(0x110a0f85u); f_1109daa0();
  /* 110a0f85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0f88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0f8b push eax */
  push32((uint32_t)(EAX));
  /* 110a0f8c call 0x110a0fb0 */
  push32(0x110a0f91u); f_110a0fb0();
  /* 110a0f91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0f94 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a0f97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0f9a push ecx */
  push32((uint32_t)(ECX));
  /* 110a0f9b call 0x1109db30 */
  push32(0x110a0fa0u); f_1109db30();
  /* 110a0fa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0fa3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_110a0fa6:;
  /* 110a0fa6 mov esp, ebp */
  ESP = (EBP);
  /* 110a0fa8 pop ebp */
  EBP = (pop32());
  /* 110a0fa9 ret  */
  ESPCHK(0x110a0f30u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x110a0fb0 (170 bytes, 59 insns) */
void f_110a0fb0(void) {
  FTRACE(0x110a0fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a0fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a0fb1 mov ebp, esp */
  EBP = (ESP);
  /* 110a0fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 110a0fb4 push esi */
  push32((uint32_t)(ESI));
  /* 110a0fb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0fb8 push eax */
  push32((uint32_t)(EAX));
  /* 110a0fb9 call 0x1109d920 */
  push32(0x110a0fbeu); f_1109d920();
  /* 110a0fbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0fc1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0fc4 je 0x110a1003 */
  if (C.zf) goto L_110a1003;
  /* 110a0fc6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0fca je 0x110a0fd2 */
  if (C.zf) goto L_110a0fd2;
  /* 110a0fcc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0fd0 jne 0x110a0fec */
  if (!C.zf) goto L_110a0fec;
L_110a0fd2:;
  /* 110a0fd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 110a0fd4 call 0x1109d920 */
  push32(0x110a0fd9u); f_1109d920();
  /* 110a0fd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0fdc mov esi, eax */
  ESI = (EAX);
  /* 110a0fde push 2 */
  push32((uint32_t)(0x2u));
  /* 110a0fe0 call 0x1109d920 */
  push32(0x110a0fe5u); f_1109d920();
  /* 110a0fe5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0fe8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a0fea je 0x110a1003 */
  if (C.zf) goto L_110a1003;
L_110a0fec:;
  /* 110a0fec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a0fef push ecx */
  push32((uint32_t)(ECX));
  /* 110a0ff0 call 0x1109d920 */
  push32(0x110a0ff5u); f_1109d920();
  /* 110a0ff5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a0ff8 push eax */
  push32((uint32_t)(EAX));
  /* 110a0ff9 call dword ptr [0x110c3268] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3268))), 0x110a0fffu);
  /* 110a0fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a1001 je 0x110a100c */
  if (C.zf) goto L_110a100c;
L_110a1003:;
  /* 110a1003 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 110a100a jmp 0x110a1015 */
  goto L_110a1015;
L_110a100c:;
  /* 110a100c call dword ptr [0x110c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32e0))), 0x110a1012u);
  /* 110a1012 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_110a1015:;
  /* 110a1015 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a1018 push edx */
  push32((uint32_t)(EDX));
  /* 110a1019 call 0x1109d840 */
  push32(0x110a101eu); f_1109d840();
  /* 110a101e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1021 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a1024 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 110a1027 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a102a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 110a102d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a1030 mov edx, dword ptr [eax*4 + 0x110c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110c1fe0)));
  /* 110a1037 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 110a103c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1040 je 0x110a1053 */
  if (C.zf) goto L_110a1053;
  /* 110a1042 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a1045 push eax */
  push32((uint32_t)(EAX));
  /* 110a1046 call 0x1109c1e0 */
  push32(0x110a104bu); f_1109c1e0();
  /* 110a104b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a104e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a1051 jmp 0x110a1055 */
  goto L_110a1055;
L_110a1053:;
  /* 110a1053 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110a1055:;
  /* 110a1055 pop esi */
  ESI = (pop32());
  /* 110a1056 mov esp, ebp */
  ESP = (EBP);
  /* 110a1058 pop ebp */
  EBP = (pop32());
  /* 110a1059 ret  */
  ESPCHK(0x110a0fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011060 @ 0x110a1060 (146 bytes, 52 insns) */
void f_110a1060(void) {
  FTRACE(0x110a1060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a1060 push ebp */
  push32((uint32_t)(EBP));
  /* 110a1061 mov ebp, esp */
  EBP = (ESP);
  /* 110a1063 push ebx */
  push32((uint32_t)(EBX));
  /* 110a1064 push esi */
  push32((uint32_t)(ESI));
  /* 110a1065 push edi */
  push32((uint32_t)(EDI));
L_110a1066:;
  /* 110a1066 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a106a jne 0x110a108a */
  if (!C.zf) goto L_110a108a;
  /* 110a106c push 0x110bc3a8 */
  push32((uint32_t)(0x110bc3a8u));
  /* 110a1071 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a1073 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 110a1075 push 0x110bca70 */
  push32((uint32_t)(0x110bca70u));
  /* 110a107a push 2 */
  push32((uint32_t)(0x2u));
  /* 110a107c call 0x11093470 */
  push32(0x110a1081u); f_11093470();
  /* 110a1081 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1084 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1087 jne 0x110a108a */
  if (!C.zf) goto L_110a108a;
  /* 110a1089 int3  */
  x86_unimpl("int3 @ 0x110a1089");
L_110a108a:;
  /* 110a108a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a108c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a108e jne 0x110a1066 */
  if (!C.zf) goto L_110a1066;
  /* 110a1090 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a1093 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 110a1096 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 110a109c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a109e je 0x110a10ed */
  if (C.zf) goto L_110a10ed;
  /* 110a10a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a10a3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 110a10a6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 110a10a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a10ab je 0x110a10ed */
  if (C.zf) goto L_110a10ed;
  /* 110a10ad push 2 */
  push32((uint32_t)(0x2u));
  /* 110a10af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a10b2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 110a10b5 push eax */
  push32((uint32_t)(EAX));
  /* 110a10b6 call 0x11094e40 */
  push32(0x110a10bbu); f_11094e40();
  /* 110a10bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a10be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a10c1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 110a10c4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 110a10ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a10cd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 110a10d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a10d3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 110a10d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a10dc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 110a10e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a10e6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_110a10ed:;
  /* 110a10ed pop edi */
  EDI = (pop32());
  /* 110a10ee pop esi */
  ESI = (pop32());
  /* 110a10ef pop ebx */
  EBX = (pop32());
  /* 110a10f0 pop ebp */
  EBP = (pop32());
  /* 110a10f1 ret  */
  ESPCHK(0x110a1060u, _esp0);
  ESP += 4; return;
}

/* FUN_10011100 @ 0x110a1100 (289 bytes, 97 insns) */
void f_110a1100(void) {
  FTRACE(0x110a1100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a1100 push ebp */
  push32((uint32_t)(EBP));
  /* 110a1101 mov ebp, esp */
  EBP = (ESP);
  /* 110a1103 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a1106 push esi */
  push32((uint32_t)(ESI));
  /* 110a1107 mov eax, dword ptr [0x110bfc98] */
  EAX = (r32((uint32_t)(0x110bfc98)));
  /* 110a110c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110a110f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 110a1116 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 110a111d jmp 0x110a1128 */
  goto L_110a1128;
L_110a111f:;
  /* 110a111f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a1122 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1125 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_110a1128:;
  /* 110a1128 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a112c jae 0x110a1161 */
  if (!C.cf) goto L_110a1161;
  /* 110a112e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a1131 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a1134 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 110a1137 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1138 call 0x110971e0 */
  push32(0x110a113du); f_110971e0();
  /* 110a113d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1140 mov esi, eax */
  ESI = (EAX);
  /* 110a1142 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a1145 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a1148 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 110a114c push ecx */
  push32((uint32_t)(ECX));
  /* 110a114d call 0x110971e0 */
  push32(0x110a1152u); f_110971e0();
  /* 110a1152 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1155 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1158 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 110a115c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110a115f jmp 0x110a111f */
  goto L_110a111f;
L_110a1161:;
  /* 110a1161 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a1164 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1167 push eax */
  push32((uint32_t)(EAX));
  /* 110a1168 call 0x11094390 */
  push32(0x110a116du); f_11094390();
  /* 110a116d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1170 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a1173 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1177 je 0x110a1219 */
  if (C.zf) goto L_110a1219;
  /* 110a117d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a1180 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 110a1183 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 110a118a jmp 0x110a1195 */
  goto L_110a1195;
L_110a118c:;
  /* 110a118c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a118f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1192 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_110a1195:;
  /* 110a1195 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1199 jae 0x110a120a */
  if (!C.cf) goto L_110a120a;
  /* 110a119b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a119e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 110a11a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a11a4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a11a7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 110a11aa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a11ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a11b0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 110a11b3 push ecx */
  push32((uint32_t)(ECX));
  /* 110a11b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a11b7 push edx */
  push32((uint32_t)(EDX));
  /* 110a11b8 call 0x11097360 */
  push32(0x110a11bdu); f_11097360();
  /* 110a11bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a11c0 push eax */
  push32((uint32_t)(EAX));
  /* 110a11c1 call 0x110971e0 */
  push32(0x110a11c6u); f_110971e0();
  /* 110a11c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a11c9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a11cc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a11ce mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 110a11d1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a11d4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 110a11d7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a11da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a11dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 110a11e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a11e3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a11e6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 110a11ea push eax */
  push32((uint32_t)(EAX));
  /* 110a11eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a11ee push ecx */
  push32((uint32_t)(ECX));
  /* 110a11ef call 0x11097360 */
  push32(0x110a11f4u); f_11097360();
  /* 110a11f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a11f7 push eax */
  push32((uint32_t)(EAX));
  /* 110a11f8 call 0x110971e0 */
  push32(0x110a11fdu); f_110971e0();
  /* 110a11fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1200 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a1203 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1205 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 110a1208 jmp 0x110a118c */
  goto L_110a118c;
L_110a120a:;
  /* 110a120a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a120d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 110a1210 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a1213 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1216 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_110a1219:;
  /* 110a1219 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a121c pop esi */
  ESI = (pop32());
  /* 110a121d mov esp, ebp */
  ESP = (EBP);
  /* 110a121f pop ebp */
  EBP = (pop32());
  /* 110a1220 ret  */
  ESPCHK(0x110a1100u, _esp0);
  ESP += 4; return;
}

/* FUN_10011230 @ 0x110a1230 (291 bytes, 97 insns) */
void f_110a1230(void) {
  FTRACE(0x110a1230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a1230 push ebp */
  push32((uint32_t)(EBP));
  /* 110a1231 mov ebp, esp */
  EBP = (ESP);
  /* 110a1233 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a1236 push esi */
  push32((uint32_t)(ESI));
  /* 110a1237 mov eax, dword ptr [0x110bfc98] */
  EAX = (r32((uint32_t)(0x110bfc98)));
  /* 110a123c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110a123f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 110a1246 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 110a124d jmp 0x110a1258 */
  goto L_110a1258;
L_110a124f:;
  /* 110a124f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a1252 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1255 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_110a1258:;
  /* 110a1258 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a125c jae 0x110a1292 */
  if (!C.cf) goto L_110a1292;
  /* 110a125e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a1261 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a1264 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 110a1268 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1269 call 0x110971e0 */
  push32(0x110a126eu); f_110971e0();
  /* 110a126e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1271 mov esi, eax */
  ESI = (EAX);
  /* 110a1273 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a1276 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a1279 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 110a127d push ecx */
  push32((uint32_t)(ECX));
  /* 110a127e call 0x110971e0 */
  push32(0x110a1283u); f_110971e0();
  /* 110a1283 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1286 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1289 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 110a128d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110a1290 jmp 0x110a124f */
  goto L_110a124f;
L_110a1292:;
  /* 110a1292 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a1295 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1298 push eax */
  push32((uint32_t)(EAX));
  /* 110a1299 call 0x11094390 */
  push32(0x110a129eu); f_11094390();
  /* 110a129e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a12a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a12a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a12a8 je 0x110a134b */
  if (C.zf) goto L_110a134b;
  /* 110a12ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a12b1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 110a12b4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 110a12bb jmp 0x110a12c6 */
  goto L_110a12c6;
L_110a12bd:;
  /* 110a12bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a12c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a12c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_110a12c6:;
  /* 110a12c6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a12ca jae 0x110a133c */
  if (!C.cf) goto L_110a133c;
  /* 110a12cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a12cf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 110a12d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a12d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a12d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 110a12db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a12de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a12e1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 110a12e5 push ecx */
  push32((uint32_t)(ECX));
  /* 110a12e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a12e9 push edx */
  push32((uint32_t)(EDX));
  /* 110a12ea call 0x11097360 */
  push32(0x110a12efu); f_11097360();
  /* 110a12ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a12f2 push eax */
  push32((uint32_t)(EAX));
  /* 110a12f3 call 0x110971e0 */
  push32(0x110a12f8u); f_110971e0();
  /* 110a12f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a12fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a12fe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1300 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 110a1303 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a1306 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 110a1309 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a130c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a130f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 110a1312 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a1315 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a1318 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 110a131c push eax */
  push32((uint32_t)(EAX));
  /* 110a131d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a1320 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1321 call 0x11097360 */
  push32(0x110a1326u); f_11097360();
  /* 110a1326 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1329 push eax */
  push32((uint32_t)(EAX));
  /* 110a132a call 0x110971e0 */
  push32(0x110a132fu); f_110971e0();
  /* 110a132f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1332 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a1335 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1337 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 110a133a jmp 0x110a12bd */
  goto L_110a12bd;
L_110a133c:;
  /* 110a133c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a133f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 110a1342 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a1345 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1348 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_110a134b:;
  /* 110a134b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a134e pop esi */
  ESI = (pop32());
  /* 110a134f mov esp, ebp */
  ESP = (EBP);
  /* 110a1351 pop ebp */
  EBP = (pop32());
  /* 110a1352 ret  */
  ESPCHK(0x110a1230u, _esp0);
  ESP += 4; return;
}

/* FUN_10011360 @ 0x110a1360 (878 bytes, 273 insns) */
void f_110a1360(void) {
  FTRACE(0x110a1360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a1360 push ebp */
  push32((uint32_t)(EBP));
  /* 110a1361 mov ebp, esp */
  EBP = (ESP);
  /* 110a1363 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a1366 push esi */
  push32((uint32_t)(ESI));
  /* 110a1367 mov eax, dword ptr [0x110bfc98] */
  EAX = (r32((uint32_t)(0x110bfc98)));
  /* 110a136c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110a136f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 110a1376 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 110a137d jmp 0x110a1388 */
  goto L_110a1388;
L_110a137f:;
  /* 110a137f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a1382 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1385 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_110a1388:;
  /* 110a1388 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a138c jae 0x110a13c1 */
  if (!C.cf) goto L_110a13c1;
  /* 110a138e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a1391 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a1394 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 110a1397 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1398 call 0x110971e0 */
  push32(0x110a139du); f_110971e0();
  /* 110a139d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a13a0 mov esi, eax */
  ESI = (EAX);
  /* 110a13a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a13a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a13a8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 110a13ac push ecx */
  push32((uint32_t)(ECX));
  /* 110a13ad call 0x110971e0 */
  push32(0x110a13b2u); f_110971e0();
  /* 110a13b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a13b5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a13b8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 110a13bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110a13bf jmp 0x110a137f */
  goto L_110a137f;
L_110a13c1:;
  /* 110a13c1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 110a13c8 jmp 0x110a13d3 */
  goto L_110a13d3;
L_110a13ca:;
  /* 110a13ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a13cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a13d0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_110a13d3:;
  /* 110a13d3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a13d7 jae 0x110a140d */
  if (!C.cf) goto L_110a140d;
  /* 110a13d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a13dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a13df mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 110a13e3 push eax */
  push32((uint32_t)(EAX));
  /* 110a13e4 call 0x110971e0 */
  push32(0x110a13e9u); f_110971e0();
  /* 110a13e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a13ec mov esi, eax */
  ESI = (EAX);
  /* 110a13ee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a13f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a13f4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 110a13f8 push eax */
  push32((uint32_t)(EAX));
  /* 110a13f9 call 0x110971e0 */
  push32(0x110a13feu); f_110971e0();
  /* 110a13fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1401 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1404 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 110a1408 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110a140b jmp 0x110a13ca */
  goto L_110a13ca;
L_110a140d:;
  /* 110a140d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a1410 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 110a1416 push eax */
  push32((uint32_t)(EAX));
  /* 110a1417 call 0x110971e0 */
  push32(0x110a141cu); f_110971e0();
  /* 110a141c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a141f mov esi, eax */
  ESI = (EAX);
  /* 110a1421 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a1424 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 110a142a push edx */
  push32((uint32_t)(EDX));
  /* 110a142b call 0x110971e0 */
  push32(0x110a1430u); f_110971e0();
  /* 110a1430 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1433 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1436 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 110a143a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110a143d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a1440 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 110a1446 push edx */
  push32((uint32_t)(EDX));
  /* 110a1447 call 0x110971e0 */
  push32(0x110a144cu); f_110971e0();
  /* 110a144c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a144f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a1452 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 110a1456 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110a1459 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a145c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 110a1462 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1463 call 0x110971e0 */
  push32(0x110a1468u); f_110971e0();
  /* 110a1468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a146b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a146e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 110a1472 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110a1475 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a1478 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 110a147e push edx */
  push32((uint32_t)(EDX));
  /* 110a147f call 0x110971e0 */
  push32(0x110a1484u); f_110971e0();
  /* 110a1484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1487 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a148a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 110a148e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110a1491 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a1494 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1499 push eax */
  push32((uint32_t)(EAX));
  /* 110a149a call 0x11094390 */
  push32(0x110a149fu); f_11094390();
  /* 110a149f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a14a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a14a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a14a9 je 0x110a16c6 */
  if (C.zf) goto L_110a16c6;
  /* 110a14af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a14b2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 110a14b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a14b8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a14be mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 110a14c1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 110a14c6 mov eax, dword ptr [0x110bfc98] */
  EAX = (r32((uint32_t)(0x110bfc98)));
  /* 110a14cb push eax */
  push32((uint32_t)(EAX));
  /* 110a14cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a14cf push ecx */
  push32((uint32_t)(ECX));
  /* 110a14d0 call 0x1109ac90 */
  push32(0x110a14d5u); f_1109ac90();
  /* 110a14d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a14d8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 110a14df jmp 0x110a14ea */
  goto L_110a14ea;
L_110a14e1:;
  /* 110a14e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a14e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a14e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_110a14ea:;
  /* 110a14ea cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a14ee jae 0x110a155e */
  if (!C.cf) goto L_110a155e;
  /* 110a14f0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a14f3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 110a14f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a14f9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 110a14fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a14ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a1502 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 110a1505 push edx */
  push32((uint32_t)(EDX));
  /* 110a1506 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a1509 push eax */
  push32((uint32_t)(EAX));
  /* 110a150a call 0x11097360 */
  push32(0x110a150fu); f_11097360();
  /* 110a150f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1512 push eax */
  push32((uint32_t)(EAX));
  /* 110a1513 call 0x110971e0 */
  push32(0x110a1518u); f_110971e0();
  /* 110a1518 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a151b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a151e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 110a1522 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 110a1525 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a1528 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 110a152b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a152e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 110a1532 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a1535 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a1538 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 110a153c push edx */
  push32((uint32_t)(EDX));
  /* 110a153d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a1540 push eax */
  push32((uint32_t)(EAX));
  /* 110a1541 call 0x11097360 */
  push32(0x110a1546u); f_11097360();
  /* 110a1546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1549 push eax */
  push32((uint32_t)(EAX));
  /* 110a154a call 0x110971e0 */
  push32(0x110a154fu); f_110971e0();
  /* 110a154f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1552 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a1555 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 110a1559 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 110a155c jmp 0x110a14e1 */
  goto L_110a14e1;
L_110a155e:;
  /* 110a155e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 110a1565 jmp 0x110a1570 */
  goto L_110a1570;
L_110a1567:;
  /* 110a1567 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a156a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a156d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_110a1570:;
  /* 110a1570 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1574 jae 0x110a15e6 */
  if (!C.cf) goto L_110a15e6;
  /* 110a1576 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a1579 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 110a157c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a157f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 110a1583 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a1586 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a1589 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 110a158d push eax */
  push32((uint32_t)(EAX));
  /* 110a158e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a1591 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1592 call 0x11097360 */
  push32(0x110a1597u); f_11097360();
  /* 110a1597 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a159a push eax */
  push32((uint32_t)(EAX));
  /* 110a159b call 0x110971e0 */
  push32(0x110a15a0u); f_110971e0();
  /* 110a15a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a15a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a15a6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 110a15aa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 110a15ad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a15b0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 110a15b3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a15b6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 110a15ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a15bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a15c0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 110a15c4 push eax */
  push32((uint32_t)(EAX));
  /* 110a15c5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a15c8 push ecx */
  push32((uint32_t)(ECX));
  /* 110a15c9 call 0x11097360 */
  push32(0x110a15ceu); f_11097360();
  /* 110a15ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a15d1 push eax */
  push32((uint32_t)(EAX));
  /* 110a15d2 call 0x110971e0 */
  push32(0x110a15d7u); f_110971e0();
  /* 110a15d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a15da mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a15dd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 110a15e1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 110a15e4 jmp 0x110a1567 */
  goto L_110a1567;
L_110a15e6:;
  /* 110a15e6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 110a15e9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a15ec mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 110a15f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a15f5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 110a15fb push ecx */
  push32((uint32_t)(ECX));
  /* 110a15fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a15ff push edx */
  push32((uint32_t)(EDX));
  /* 110a1600 call 0x11097360 */
  push32(0x110a1605u); f_11097360();
  /* 110a1605 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1608 push eax */
  push32((uint32_t)(EAX));
  /* 110a1609 call 0x110971e0 */
  push32(0x110a160eu); f_110971e0();
  /* 110a160e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1611 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a1614 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 110a1618 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 110a161b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 110a161e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a1621 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 110a1627 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a162a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 110a1630 push eax */
  push32((uint32_t)(EAX));
  /* 110a1631 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a1634 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1635 call 0x11097360 */
  push32(0x110a163au); f_11097360();
  /* 110a163a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a163d push eax */
  push32((uint32_t)(EAX));
  /* 110a163e call 0x110971e0 */
  push32(0x110a1643u); f_110971e0();
  /* 110a1643 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1646 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a1649 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 110a164d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 110a1650 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 110a1653 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a1656 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 110a165c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a165f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 110a1665 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1666 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a1669 push edx */
  push32((uint32_t)(EDX));
  /* 110a166a call 0x11097360 */
  push32(0x110a166fu); f_11097360();
  /* 110a166f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1672 push eax */
  push32((uint32_t)(EAX));
  /* 110a1673 call 0x110971e0 */
  push32(0x110a1678u); f_110971e0();
  /* 110a1678 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a167b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a167e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 110a1682 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 110a1685 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 110a1688 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a168b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 110a1691 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a1694 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 110a169a push eax */
  push32((uint32_t)(EAX));
  /* 110a169b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a169e push ecx */
  push32((uint32_t)(ECX));
  /* 110a169f call 0x11097360 */
  push32(0x110a16a4u); f_11097360();
  /* 110a16a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a16a7 push eax */
  push32((uint32_t)(EAX));
  /* 110a16a8 call 0x110971e0 */
  push32(0x110a16adu); f_110971e0();
  /* 110a16ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a16b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a16b3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 110a16b7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 110a16ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 110a16bd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a16c0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_110a16c6:;
  /* 110a16c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a16c9 pop esi */
  ESI = (pop32());
  /* 110a16ca mov esp, ebp */
  ESP = (EBP);
  /* 110a16cc pop ebp */
  EBP = (pop32());
  /* 110a16cd ret  */
  ESPCHK(0x110a1360u, _esp0);
  ESP += 4; return;
}

/* FUN_100116d0 @ 0x110a16d0 (31 bytes, 15 insns) */
void f_110a16d0(void) {
  FTRACE(0x110a16d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a16d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a16d1 mov ebp, esp */
  EBP = (ESP);
  /* 110a16d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a16d5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a16d8 push eax */
  push32((uint32_t)(EAX));
  /* 110a16d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a16dc push ecx */
  push32((uint32_t)(ECX));
  /* 110a16dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a16e0 push edx */
  push32((uint32_t)(EDX));
  /* 110a16e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a16e4 push eax */
  push32((uint32_t)(EAX));
  /* 110a16e5 call 0x110a16f0 */
  push32(0x110a16eau); f_110a16f0();
  /* 110a16ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a16ed pop ebp */
  EBP = (pop32());
  /* 110a16ee ret  */
  ESPCHK(0x110a16d0u, _esp0);
  ESP += 4; return;
}

