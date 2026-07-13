#include "recomp.h"

/* FUN_100075c0 @ 0x113475c0 (10 bytes, 5 insns) */
void f_113475c0(void) {
  FTRACE(0x113475c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113475c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113475c1 mov ebp, esp */
  EBP = (ESP);
  /* 113475c3 mov eax, dword ptr [0x1136dc94] */
  EAX = (r32((uint32_t)(0x1136dc94)));
  /* 113475c8 pop ebp */
  EBP = (pop32());
  /* 113475c9 ret  */
  ESPCHK(0x113475c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100075d0 @ 0x113475d0 (31 bytes, 11 insns) */
void f_113475d0(void) {
  FTRACE(0x113475d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113475d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113475d1 mov ebp, esp */
  EBP = (ESP);
  /* 113475d3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113475da jbe 0x113475e0 */
  if ((C.cf||C.zf)) goto L_113475e0;
  /* 113475dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113475de jmp 0x113475ed */
  goto L_113475ed;
L_113475e0:;
  /* 113475e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113475e3 mov dword ptr [0x1136dc94], eax */
  w32((uint32_t)(0x1136dc94), (EAX));
  /* 113475e8 mov eax, 1 */
  EAX = (0x1u);
L_113475ed:;
  /* 113475ed pop ebp */
  EBP = (pop32());
  /* 113475ee ret  */
  ESPCHK(0x113475d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100075f0 @ 0x113475f0 (89 bytes, 20 insns) */
void f_113475f0(void) {
  FTRACE(0x113475f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113475f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113475f1 mov ebp, esp */
  EBP = (ESP);
  /* 113475f3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 113475f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113475fa mov eax, dword ptr [0x11370e0c] */
  EAX = (r32((uint32_t)(0x11370e0c)));
  /* 113475ff push eax */
  push32((uint32_t)(EAX));
  /* 11347600 call dword ptr [0x11371300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371300))), 0x11347606u);
  /* 11347606 mov dword ptr [0x11370e08], eax */
  w32((uint32_t)(0x11370e08), (EAX));
  /* 1134760b cmp dword ptr [0x11370e08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11370e08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347612 jne 0x11347618 */
  if (!C.zf) goto L_11347618;
  /* 11347614 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11347616 jmp 0x11347647 */
  goto L_11347647;
L_11347618:;
  /* 11347618 mov ecx, dword ptr [0x11370e08] */
  ECX = (r32((uint32_t)(0x11370e08)));
  /* 1134761e mov dword ptr [0x11370dfc], ecx */
  w32((uint32_t)(0x11370dfc), (ECX));
  /* 11347624 mov dword ptr [0x11370e00], 0 */
  w32((uint32_t)(0x11370e00), (0x0u));
  /* 1134762e mov dword ptr [0x11370e04], 0 */
  w32((uint32_t)(0x11370e04), (0x0u));
  /* 11347638 mov dword ptr [0x11370de8], 0x10 */
  w32((uint32_t)(0x11370de8), (0x10u));
  /* 11347642 mov eax, 1 */
  EAX = (0x1u);
L_11347647:;
  /* 11347647 pop ebp */
  EBP = (pop32());
  /* 11347648 ret  */
  ESPCHK(0x113475f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007650 @ 0x11347650 (85 bytes, 29 insns) */
void f_11347650(void) {
  FTRACE(0x11347650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11347650 push ebp */
  push32((uint32_t)(EBP));
  /* 11347651 mov ebp, esp */
  EBP = (ESP);
  /* 11347653 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347656 mov eax, dword ptr [0x11370e04] */
  EAX = (r32((uint32_t)(0x11370e04)));
  /* 1134765b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134765e mov ecx, dword ptr [0x11370e08] */
  ECX = (r32((uint32_t)(0x11370e08)));
  /* 11347664 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347666 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11347669 mov edx, dword ptr [0x11370e08] */
  EDX = (r32((uint32_t)(0x11370e08)));
  /* 1134766f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11347672:;
  /* 11347672 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11347675 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347678 jae 0x1134769f */
  if (!C.cf) goto L_1134769f;
  /* 1134767a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134767d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347680 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347683 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11347686 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134768d jae 0x11347694 */
  if (!C.cf) goto L_11347694;
  /* 1134768f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11347692 jmp 0x113476a1 */
  goto L_113476a1;
L_11347694:;
  /* 11347694 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11347697 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134769a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1134769d jmp 0x11347672 */
  goto L_11347672;
L_1134769f:;
  /* 1134769f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113476a1:;
  /* 113476a1 mov esp, ebp */
  ESP = (EBP);
  /* 113476a3 pop ebp */
  EBP = (pop32());
  /* 113476a4 ret  */
  ESPCHK(0x11347650u, _esp0);
  ESP += 4; return;
}

/* FUN_100076b0 @ 0x113476b0 (95 bytes, 33 insns) */
void f_113476b0(void) {
  FTRACE(0x113476b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113476b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113476b1 mov ebp, esp */
  EBP = (ESP);
  /* 113476b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113476b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113476b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113476bc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113476bf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113476c2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113476c5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 113476c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113476cb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113476d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113476d3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113476d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113476d8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113476db and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 113476dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113476df jne 0x11347701 */
  if (!C.zf) goto L_11347701;
  /* 113476e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113476e4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 113476e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113476e9 jne 0x11347701 */
  if (!C.zf) goto L_11347701;
  /* 113476eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113476ee and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 113476f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113476f6 je 0x11347701 */
  if (C.zf) goto L_11347701;
  /* 113476f8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 113476ff jmp 0x11347708 */
  goto L_11347708;
L_11347701:;
  /* 11347701 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11347708:;
  /* 11347708 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134770b mov esp, ebp */
  ESP = (EBP);
  /* 1134770d pop ebp */
  EBP = (pop32());
  /* 1134770e ret  */
  ESPCHK(0x113476b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007710 @ 0x11347710 (1485 bytes, 453 insns) */
void f_11347710(void) {
  FTRACE(0x11347710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11347710 push ebp */
  push32((uint32_t)(EBP));
  /* 11347711 mov ebp, esp */
  EBP = (ESP);
  /* 11347713 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347719 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1134771c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1134771f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347722 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11347725 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347728 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1134772b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134772e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11347731 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11347734 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11347737 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134773d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11347740 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11347747 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134774a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134774d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347750 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11347753 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11347756 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11347758 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134775b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1134775e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11347761 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347764 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11347767 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1134776a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1134776c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1134776f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11347772 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11347775 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11347778 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1134777b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1134777e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11347780 jne 0x113478a8 */
  if (!C.zf) goto L_113478a8;
  /* 11347786 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11347789 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1134778c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134778f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11347792 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347796 jbe 0x1134779f */
  if ((C.cf||C.zf)) goto L_1134779f;
  /* 11347798 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1134779f:;
  /* 1134779f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 113477a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 113477a5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 113477a8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113477ab jne 0x11347881 */
  if (!C.zf) goto L_11347881;
  /* 113477b1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113477b5 jae 0x11347816 */
  if (!C.cf) goto L_11347816;
  /* 113477b7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113477bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113477bf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113477c1 not eax */
  EAX = (~(EAX));
  /* 113477c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113477c6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113477c9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 113477cd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113477cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113477d2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113477d5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 113477d9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113477dc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113477df mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 113477e2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113477e5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113477e8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113477eb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 113477ee mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113477f1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113477f4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 113477f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113477fa jne 0x11347814 */
  if (!C.zf) goto L_11347814;
  /* 113477fc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11347801 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11347804 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11347806 not eax */
  EAX = (~(EAX));
  /* 11347808 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134780b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1134780d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1134780f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347812 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11347814:;
  /* 11347814 jmp 0x11347881 */
  goto L_11347881;
L_11347816:;
  /* 11347816 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11347819 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134781c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11347821 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11347823 not edx */
  EDX = (~(EDX));
  /* 11347825 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11347828 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1134782b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11347832 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11347834 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11347837 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1134783a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11347841 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11347844 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347847 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1134784a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1134784d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11347850 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347853 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11347856 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11347859 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134785c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11347860 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11347862 jne 0x11347881 */
  if (!C.zf) goto L_11347881;
  /* 11347864 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11347867 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134786a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1134786f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11347871 not edx */
  EDX = (~(EDX));
  /* 11347873 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347876 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11347879 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1134787b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134787e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11347881:;
  /* 11347881 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11347884 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11347887 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1134788a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1134788d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11347890 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11347893 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11347896 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11347899 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1134789c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1134789f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113478a2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113478a5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_113478a8:;
  /* 113478a8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113478ab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 113478ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113478b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 113478b4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113478b8 jbe 0x113478c1 */
  if ((C.cf||C.zf)) goto L_113478c1;
  /* 113478ba mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_113478c1:;
  /* 113478c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113478c4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113478c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113478c9 jne 0x11347a25 */
  if (!C.zf) goto L_11347a25;
  /* 113478cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113478d2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113478d5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 113478d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113478db sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 113478de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113478e1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 113478e4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113478e8 jbe 0x113478f1 */
  if ((C.cf||C.zf)) goto L_113478f1;
  /* 113478ea mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_113478f1:;
  /* 113478f1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113478f4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113478f7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 113478fa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113478fd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11347900 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347903 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11347906 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134790a jbe 0x11347913 */
  if ((C.cf||C.zf)) goto L_11347913;
  /* 1134790c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11347913:;
  /* 11347913 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11347916 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347919 je 0x11347a1f */
  if (C.zf) goto L_11347a1f;
  /* 1134791f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11347922 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11347925 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11347928 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134792b jne 0x11347a01 */
  if (!C.zf) goto L_11347a01;
  /* 11347931 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347935 jae 0x11347996 */
  if (!C.cf) goto L_11347996;
  /* 11347937 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1134793c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1134793f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11347941 not edx */
  EDX = (~(EDX));
  /* 11347943 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11347946 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11347949 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1134794d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1134794f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11347952 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11347955 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11347959 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1134795c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134795f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11347962 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11347965 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11347968 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134796b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1134796e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11347971 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347974 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11347978 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134797a jne 0x11347994 */
  if (!C.zf) goto L_11347994;
  /* 1134797c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11347981 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11347984 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11347986 not edx */
  EDX = (~(EDX));
  /* 11347988 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134798b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1134798d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1134798f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347992 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11347994:;
  /* 11347994 jmp 0x11347a01 */
  goto L_11347a01;
L_11347996:;
  /* 11347996 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11347999 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134799c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113479a1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113479a3 not eax */
  EAX = (~(EAX));
  /* 113479a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113479a8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113479ab mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 113479b2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113479b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113479b7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113479ba mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 113479c1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113479c4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113479c7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 113479ca sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113479cd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113479d0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113479d3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 113479d6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113479d9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113479dc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 113479e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113479e2 jne 0x11347a01 */
  if (!C.zf) goto L_11347a01;
  /* 113479e4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113479e7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113479ea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113479ef shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113479f1 not eax */
  EAX = (~(EAX));
  /* 113479f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113479f6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113479f9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 113479fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113479fe mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11347a01:;
  /* 11347a01 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11347a04 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11347a07 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11347a0a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11347a0d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11347a10 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11347a13 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11347a16 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11347a19 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11347a1c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11347a1f:;
  /* 11347a1f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11347a22 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11347a25:;
  /* 11347a25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11347a28 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11347a2b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11347a2d jne 0x11347a3b */
  if (!C.zf) goto L_11347a3b;
  /* 11347a2f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11347a32 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347a35 je 0x11347b4b */
  if (C.zf) goto L_11347b4b;
L_11347a3b:;
  /* 11347a3b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11347a3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11347a41 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11347a44 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11347a47 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11347a4a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11347a4d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11347a50 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11347a53 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11347a56 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11347a59 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11347a5c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11347a5f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11347a62 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11347a65 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11347a68 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11347a6b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11347a6e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11347a71 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11347a74 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11347a77 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11347a7a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347a7d jne 0x11347b4b */
  if (!C.zf) goto L_11347b4b;
  /* 11347a83 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347a87 jae 0x11347ae4 */
  if (!C.cf) goto L_11347ae4;
  /* 11347a89 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11347a8c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347a8f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11347a93 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11347a96 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347a99 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11347a9c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11347a9f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11347aa2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347aa5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11347aa8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11347aaa jne 0x11347ac2 */
  if (!C.zf) goto L_11347ac2;
  /* 11347aac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11347ab1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11347ab4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11347ab6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347ab9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11347abb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11347abd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347ac0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11347ac2:;
  /* 11347ac2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11347ac7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11347aca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11347acc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11347acf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11347ad2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11347ad6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11347ad8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11347adb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11347ade mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11347ae2 jmp 0x11347b4b */
  goto L_11347b4b;
L_11347ae4:;
  /* 11347ae4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11347ae7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347aea movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11347aee mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11347af1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347af4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11347af7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11347afa mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11347afd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347b00 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11347b03 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11347b05 jne 0x11347b22 */
  if (!C.zf) goto L_11347b22;
  /* 11347b07 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11347b0a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347b0d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11347b12 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11347b14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347b17 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11347b1a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11347b1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347b1f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11347b22:;
  /* 11347b22 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11347b25 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347b28 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11347b2d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11347b2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11347b32 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11347b35 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11347b3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11347b3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11347b41 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11347b44 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11347b4b:;
  /* 11347b4b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11347b4e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11347b51 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11347b53 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11347b56 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347b59 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11347b5c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11347b5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11347b62 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11347b64 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347b67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11347b6a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11347b6c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11347b6f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347b72 jne 0x11347cd9 */
  if (!C.zf) goto L_11347cd9;
  /* 11347b78 cmp dword ptr [0x11370e00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11370e00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347b7f je 0x11347cc8 */
  if (C.zf) goto L_11347cc8;
  /* 11347b85 mov eax, dword ptr [0x11370df8] */
  EAX = (r32((uint32_t)(0x11370df8)));
  /* 11347b8a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11347b8d mov ecx, dword ptr [0x11370e00] */
  ECX = (r32((uint32_t)(0x11370e00)));
  /* 11347b93 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11347b96 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347b98 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11347b9b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11347ba0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11347ba5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347ba8 push eax */
  push32((uint32_t)(EAX));
  /* 11347ba9 call dword ptr [0x113713a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113713a4))), 0x11347bafu);
  /* 11347baf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11347bb4 mov ecx, dword ptr [0x11370df8] */
  ECX = (r32((uint32_t)(0x11370df8)));
  /* 11347bba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11347bbc mov eax, dword ptr [0x11370e00] */
  EAX = (r32((uint32_t)(0x11370e00)));
  /* 11347bc1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11347bc4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11347bc6 mov edx, dword ptr [0x11370e00] */
  EDX = (r32((uint32_t)(0x11370e00)));
  /* 11347bcc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11347bcf mov eax, dword ptr [0x11370e00] */
  EAX = (r32((uint32_t)(0x11370e00)));
  /* 11347bd4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11347bd7 mov edx, dword ptr [0x11370df8] */
  EDX = (r32((uint32_t)(0x11370df8)));
  /* 11347bdd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11347be8 mov eax, dword ptr [0x11370e00] */
  EAX = (r32((uint32_t)(0x11370e00)));
  /* 11347bed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11347bf0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11347bf3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11347bf6 mov eax, dword ptr [0x11370e00] */
  EAX = (r32((uint32_t)(0x11370e00)));
  /* 11347bfb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11347bfe mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11347c01 mov edx, dword ptr [0x11370e00] */
  EDX = (r32((uint32_t)(0x11370e00)));
  /* 11347c07 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11347c0a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11347c0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11347c10 jne 0x11347c26 */
  if (!C.zf) goto L_11347c26;
  /* 11347c12 mov edx, dword ptr [0x11370e00] */
  EDX = (r32((uint32_t)(0x11370e00)));
  /* 11347c18 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11347c1b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11347c1d mov ecx, dword ptr [0x11370e00] */
  ECX = (r32((uint32_t)(0x11370e00)));
  /* 11347c23 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11347c26:;
  /* 11347c26 mov edx, dword ptr [0x11370e00] */
  EDX = (r32((uint32_t)(0x11370e00)));
  /* 11347c2c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347c30 jne 0x11347cc8 */
  if (!C.zf) goto L_11347cc8;
  /* 11347c36 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11347c3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11347c3d mov eax, dword ptr [0x11370e00] */
  EAX = (r32((uint32_t)(0x11370e00)));
  /* 11347c42 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11347c45 push ecx */
  push32((uint32_t)(ECX));
  /* 11347c46 call dword ptr [0x113713a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113713a4))), 0x11347c4cu);
  /* 11347c4c mov edx, dword ptr [0x11370e00] */
  EDX = (r32((uint32_t)(0x11370e00)));
  /* 11347c52 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11347c55 push eax */
  push32((uint32_t)(EAX));
  /* 11347c56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11347c58 mov ecx, dword ptr [0x11370e0c] */
  ECX = (r32((uint32_t)(0x11370e0c)));
  /* 11347c5e push ecx */
  push32((uint32_t)(ECX));
  /* 11347c5f call dword ptr [0x113713a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113713a0))), 0x11347c65u);
  /* 11347c65 mov edx, dword ptr [0x11370e04] */
  EDX = (r32((uint32_t)(0x11370e04)));
  /* 11347c6b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11347c6e mov eax, dword ptr [0x11370e08] */
  EAX = (r32((uint32_t)(0x11370e08)));
  /* 11347c73 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347c75 mov ecx, dword ptr [0x11370e00] */
  ECX = (r32((uint32_t)(0x11370e00)));
  /* 11347c7b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347c7e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347c80 push eax */
  push32((uint32_t)(EAX));
  /* 11347c81 mov edx, dword ptr [0x11370e00] */
  EDX = (r32((uint32_t)(0x11370e00)));
  /* 11347c87 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347c8a push edx */
  push32((uint32_t)(EDX));
  /* 11347c8b mov eax, dword ptr [0x11370e00] */
  EAX = (r32((uint32_t)(0x11370e00)));
  /* 11347c90 push eax */
  push32((uint32_t)(EAX));
  /* 11347c91 call 0x1134b240 */
  push32(0x11347c96u); f_1134b240();
  /* 11347c96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11347c99 mov ecx, dword ptr [0x11370e04] */
  ECX = (r32((uint32_t)(0x11370e04)));
  /* 11347c9f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347ca2 mov dword ptr [0x11370e04], ecx */
  w32((uint32_t)(0x11370e04), (ECX));
  /* 11347ca8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347cab cmp edx, dword ptr [0x11370e00] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11370e00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347cb1 jbe 0x11347cbc */
  if ((C.cf||C.zf)) goto L_11347cbc;
  /* 11347cb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347cb6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347cb9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11347cbc:;
  /* 11347cbc mov ecx, dword ptr [0x11370e08] */
  ECX = (r32((uint32_t)(0x11370e08)));
  /* 11347cc2 mov dword ptr [0x11370dfc], ecx */
  w32((uint32_t)(0x11370dfc), (ECX));
L_11347cc8:;
  /* 11347cc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347ccb mov dword ptr [0x11370e00], edx */
  w32((uint32_t)(0x11370e00), (EDX));
  /* 11347cd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11347cd4 mov dword ptr [0x11370df8], eax */
  w32((uint32_t)(0x11370df8), (EAX));
L_11347cd9:;
  /* 11347cd9 mov esp, ebp */
  ESP = (EBP);
  /* 11347cdb pop ebp */
  EBP = (pop32());
  /* 11347cdc ret  */
  ESPCHK(0x11347710u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ce0 @ 0x11347ce0 (1334 bytes, 427 insns) */
void f_11347ce0(void) {
  FTRACE(0x11347ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11347ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11347ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11347ce3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347ce6 push esi */
  push32((uint32_t)(ESI));
  /* 11347ce7 mov eax, dword ptr [0x11370e04] */
  EAX = (r32((uint32_t)(0x11370e04)));
  /* 11347cec imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11347cef mov ecx, dword ptr [0x11370e08] */
  ECX = (r32((uint32_t)(0x11370e08)));
  /* 11347cf5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347cf7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11347cfa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347cfd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347d00 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11347d03 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11347d06 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11347d09 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11347d0c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347d0f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11347d12 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347d16 jge 0x11347d2c */
  if ((C.sf==C.of)) goto L_11347d2c;
  /* 11347d18 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11347d1b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11347d1e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11347d20 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11347d23 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11347d2a jmp 0x11347d41 */
  goto L_11347d41;
L_11347d2c:;
  /* 11347d2c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11347d33 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11347d36 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347d39 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11347d3c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11347d3e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11347d41:;
  /* 11347d41 mov ecx, dword ptr [0x11370dfc] */
  ECX = (r32((uint32_t)(0x11370dfc)));
  /* 11347d47 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11347d4a:;
  /* 11347d4a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347d4d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347d50 jae 0x11347d76 */
  if (!C.cf) goto L_11347d76;
  /* 11347d52 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347d55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11347d58 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11347d5a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347d5d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11347d60 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11347d63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11347d65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11347d67 je 0x11347d6b */
  if (C.zf) goto L_11347d6b;
  /* 11347d69 jmp 0x11347d76 */
  goto L_11347d76;
L_11347d6b:;
  /* 11347d6b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347d6e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347d71 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11347d74 jmp 0x11347d4a */
  goto L_11347d4a;
L_11347d76:;
  /* 11347d76 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347d79 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347d7c jne 0x11347e5d */
  if (!C.zf) goto L_11347e5d;
  /* 11347d82 mov eax, dword ptr [0x11370e08] */
  EAX = (r32((uint32_t)(0x11370e08)));
  /* 11347d87 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11347d8a:;
  /* 11347d8a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347d8d cmp ecx, dword ptr [0x11370dfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11370dfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347d93 jae 0x11347db9 */
  if (!C.cf) goto L_11347db9;
  /* 11347d95 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347d98 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11347d9b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11347d9d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347da0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11347da3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11347da6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11347da8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11347daa je 0x11347dae */
  if (C.zf) goto L_11347dae;
  /* 11347dac jmp 0x11347db9 */
  goto L_11347db9;
L_11347dae:;
  /* 11347dae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347db1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347db4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11347db7 jmp 0x11347d8a */
  goto L_11347d8a;
L_11347db9:;
  /* 11347db9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347dbc cmp ecx, dword ptr [0x11370dfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11370dfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347dc2 jne 0x11347e5d */
  if (!C.zf) goto L_11347e5d;
L_11347dc8:;
  /* 11347dc8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347dcb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347dce jae 0x11347de6 */
  if (!C.cf) goto L_11347de6;
  /* 11347dd0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347dd3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347dd7 je 0x11347ddb */
  if (C.zf) goto L_11347ddb;
  /* 11347dd9 jmp 0x11347de6 */
  goto L_11347de6;
L_11347ddb:;
  /* 11347ddb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347dde add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347de1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11347de4 jmp 0x11347dc8 */
  goto L_11347dc8;
L_11347de6:;
  /* 11347de6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347de9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347dec jne 0x11347e37 */
  if (!C.zf) goto L_11347e37;
  /* 11347dee mov eax, dword ptr [0x11370e08] */
  EAX = (r32((uint32_t)(0x11370e08)));
  /* 11347df3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11347df6:;
  /* 11347df6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347df9 cmp ecx, dword ptr [0x11370dfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11370dfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347dff jae 0x11347e17 */
  if (!C.cf) goto L_11347e17;
  /* 11347e01 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347e04 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347e08 je 0x11347e0c */
  if (C.zf) goto L_11347e0c;
  /* 11347e0a jmp 0x11347e17 */
  goto L_11347e17;
L_11347e0c:;
  /* 11347e0c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347e0f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347e12 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11347e15 jmp 0x11347df6 */
  goto L_11347df6;
L_11347e17:;
  /* 11347e17 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347e1a cmp ecx, dword ptr [0x11370dfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11370dfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347e20 jne 0x11347e37 */
  if (!C.zf) goto L_11347e37;
  /* 11347e22 call 0x11348220 */
  push32(0x11347e27u); f_11348220();
  /* 11347e27 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11347e2a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347e2e jne 0x11347e37 */
  if (!C.zf) goto L_11347e37;
  /* 11347e30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11347e32 jmp 0x11348211 */
  goto L_11348211;
L_11347e37:;
  /* 11347e37 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347e3a push edx */
  push32((uint32_t)(EDX));
  /* 11347e3b call 0x11348330 */
  push32(0x11347e40u); f_11348330();
  /* 11347e40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11347e43 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347e46 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11347e49 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11347e4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347e4e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11347e51 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347e54 jne 0x11347e5d */
  if (!C.zf) goto L_11347e5d;
  /* 11347e56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11347e58 jmp 0x11348211 */
  goto L_11348211;
L_11347e5d:;
  /* 11347e5d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347e60 mov dword ptr [0x11370dfc], edx */
  w32((uint32_t)(0x11370dfc), (EDX));
  /* 11347e66 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347e69 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11347e6c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 11347e6f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11347e72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11347e74 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11347e77 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347e7b je 0x11347ea0 */
  if (C.zf) goto L_11347ea0;
  /* 11347e7d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11347e80 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11347e83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11347e86 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 11347e8a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11347e8d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11347e90 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11347e93 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11347e9a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11347e9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11347e9e jne 0x11347ed5 */
  if (!C.zf) goto L_11347ed5;
L_11347ea0:;
  /* 11347ea0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11347ea7:;
  /* 11347ea7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11347eaa mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11347ead mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11347eb0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11347eb4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11347eb7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11347eba mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11347ebd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11347ec4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11347ec6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11347ec8 jne 0x11347ed5 */
  if (!C.zf) goto L_11347ed5;
  /* 11347eca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11347ecd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347ed0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11347ed3 jmp 0x11347ea7 */
  goto L_11347ea7;
L_11347ed5:;
  /* 11347ed5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11347ed8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11347ede mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11347ee1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11347ee8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11347eeb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11347ef2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11347ef5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11347ef8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11347efb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11347eff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11347f02 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347f06 jne 0x11347f22 */
  if (!C.zf) goto L_11347f22;
  /* 11347f08 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11347f0f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11347f12 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11347f15 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11347f18 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11347f1f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11347f22:;
  /* 11347f22 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347f26 jl 0x11347f3b */
  if ((C.sf!=C.of)) goto L_11347f3b;
  /* 11347f28 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11347f2b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11347f2d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11347f30 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11347f33 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347f36 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11347f39 jmp 0x11347f22 */
  goto L_11347f22;
L_11347f3b:;
  /* 11347f3b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11347f3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11347f41 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11347f45 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11347f48 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11347f4b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11347f4d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347f50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11347f53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11347f56 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11347f59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347f5c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11347f5f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347f63 jle 0x11347f6c */
  if ((C.zf||C.sf!=C.of)) goto L_11347f6c;
  /* 11347f65 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11347f6c:;
  /* 11347f6c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11347f6f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347f72 je 0x11348190 */
  if (C.zf) goto L_11348190;
  /* 11347f78 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11347f7b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11347f7e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11347f81 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347f84 jne 0x1134805a */
  if (!C.zf) goto L_1134805a;
  /* 11347f8a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347f8e jge 0x11347fef */
  if ((C.sf==C.of)) goto L_11347fef;
  /* 11347f90 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11347f95 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11347f98 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11347f9a not eax */
  EAX = (~(EAX));
  /* 11347f9c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11347f9f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11347fa2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11347fa6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11347fa8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11347fab mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11347fae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11347fb2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11347fb5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347fb8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11347fbb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11347fbe mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11347fc1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347fc4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11347fc7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11347fca add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347fcd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11347fd1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11347fd3 jne 0x11347fed */
  if (!C.zf) goto L_11347fed;
  /* 11347fd5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11347fda mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11347fdd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11347fdf not eax */
  EAX = (~(EAX));
  /* 11347fe1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347fe4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11347fe6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11347fe8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11347feb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11347fed:;
  /* 11347fed jmp 0x1134805a */
  goto L_1134805a;
L_11347fef:;
  /* 11347fef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11347ff2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347ff5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11347ffa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11347ffc not edx */
  EDX = (~(EDX));
  /* 11347ffe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348001 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11348004 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1134800b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1134800d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348010 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11348013 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1134801a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1134801d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348020 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11348023 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11348026 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11348029 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134802c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1134802f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11348032 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348035 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11348039 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134803b jne 0x1134805a */
  if (!C.zf) goto L_1134805a;
  /* 1134803d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11348040 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11348043 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11348048 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1134804a not edx */
  EDX = (~(EDX));
  /* 1134804c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134804f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11348052 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11348054 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11348057 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1134805a:;
  /* 1134805a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134805d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11348060 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11348063 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11348066 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11348069 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134806c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1134806f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11348072 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11348075 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11348078 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134807c je 0x11348190 */
  if (C.zf) goto L_11348190;
  /* 11348082 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11348085 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11348088 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1134808b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134808e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11348091 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11348094 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11348097 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1134809a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134809d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113480a0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 113480a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113480a6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113480a9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 113480ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113480af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113480b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113480b5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 113480b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113480bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113480be mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 113480c1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113480c4 jne 0x11348190 */
  if (!C.zf) goto L_11348190;
  /* 113480ca cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113480ce jge 0x1134812a */
  if ((C.sf==C.of)) goto L_1134812a;
  /* 113480d0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 113480d3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113480d6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 113480da mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 113480dd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113480e0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 113480e3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 113480e5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 113480e8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113480eb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 113480ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113480f0 jne 0x11348108 */
  if (!C.zf) goto L_11348108;
  /* 113480f2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113480f7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113480fa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113480fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113480ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11348101 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11348103 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11348106 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11348108:;
  /* 11348108 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1134810d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11348110 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11348112 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348115 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11348118 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1134811c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1134811e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348121 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11348124 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11348128 jmp 0x11348190 */
  goto L_11348190;
L_1134812a:;
  /* 1134812a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1134812d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348130 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11348134 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11348137 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134813a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1134813d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1134813f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11348142 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348145 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11348148 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134814a jne 0x11348167 */
  if (!C.zf) goto L_11348167;
  /* 1134814c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1134814f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11348152 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11348157 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11348159 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134815c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1134815f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11348161 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11348164 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11348167:;
  /* 11348167 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1134816a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134816d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11348172 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11348174 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348177 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1134817a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11348181 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11348183 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348186 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11348189 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11348190:;
  /* 11348190 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348194 je 0x113481aa */
  if (C.zf) goto L_113481aa;
  /* 11348196 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11348199 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134819c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1134819e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113481a1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113481a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113481a7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_113481aa:;
  /* 113481aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113481ad add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113481b0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113481b3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113481b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113481b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113481bc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113481be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113481c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113481c4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113481c7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113481ca mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 113481cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113481d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113481d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113481d5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113481d7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113481da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113481dd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 113481df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113481e1 jne 0x11348203 */
  if (!C.zf) goto L_11348203;
  /* 113481e3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113481e6 cmp eax, dword ptr [0x11370e00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11370e00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113481ec jne 0x11348203 */
  if (!C.zf) goto L_11348203;
  /* 113481ee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113481f1 cmp ecx, dword ptr [0x11370df8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11370df8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113481f7 jne 0x11348203 */
  if (!C.zf) goto L_11348203;
  /* 113481f9 mov dword ptr [0x11370e00], 0 */
  w32((uint32_t)(0x11370e00), (0x0u));
L_11348203:;
  /* 11348203 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11348206 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348209 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1134820b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134820e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11348211:;
  /* 11348211 pop esi */
  ESI = (pop32());
  /* 11348212 mov esp, ebp */
  ESP = (EBP);
  /* 11348214 pop ebp */
  EBP = (pop32());
  /* 11348215 ret  */
  ESPCHK(0x11347ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008220 @ 0x11348220 (271 bytes, 78 insns) */
void f_11348220(void) {
  FTRACE(0x11348220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11348220 push ebp */
  push32((uint32_t)(EBP));
  /* 11348221 mov ebp, esp */
  EBP = (ESP);
  /* 11348223 push ecx */
  push32((uint32_t)(ECX));
  /* 11348224 mov eax, dword ptr [0x11370e04] */
  EAX = (r32((uint32_t)(0x11370e04)));
  /* 11348229 cmp eax, dword ptr [0x11370de8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11370de8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134822f jne 0x1134827b */
  if (!C.zf) goto L_1134827b;
  /* 11348231 mov ecx, dword ptr [0x11370de8] */
  ECX = (r32((uint32_t)(0x11370de8)));
  /* 11348237 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134823a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134823d push ecx */
  push32((uint32_t)(ECX));
  /* 1134823e mov edx, dword ptr [0x11370e08] */
  EDX = (r32((uint32_t)(0x11370e08)));
  /* 11348244 push edx */
  push32((uint32_t)(EDX));
  /* 11348245 push 0 */
  push32((uint32_t)(0x0u));
  /* 11348247 mov eax, dword ptr [0x11370e0c] */
  EAX = (r32((uint32_t)(0x11370e0c)));
  /* 1134824c push eax */
  push32((uint32_t)(EAX));
  /* 1134824d call dword ptr [0x113712fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712fc))), 0x11348253u);
  /* 11348253 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11348256 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134825a jne 0x11348263 */
  if (!C.zf) goto L_11348263;
  /* 1134825c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134825e jmp 0x1134832b */
  goto L_1134832b;
L_11348263:;
  /* 11348263 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11348266 mov dword ptr [0x11370e08], ecx */
  w32((uint32_t)(0x11370e08), (ECX));
  /* 1134826c mov edx, dword ptr [0x11370de8] */
  EDX = (r32((uint32_t)(0x11370de8)));
  /* 11348272 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348275 mov dword ptr [0x11370de8], edx */
  w32((uint32_t)(0x11370de8), (EDX));
L_1134827b:;
  /* 1134827b mov eax, dword ptr [0x11370e04] */
  EAX = (r32((uint32_t)(0x11370e04)));
  /* 11348280 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11348283 mov ecx, dword ptr [0x11370e08] */
  ECX = (r32((uint32_t)(0x11370e08)));
  /* 11348289 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134828b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1134828e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11348293 push 8 */
  push32((uint32_t)(0x8u));
  /* 11348295 mov edx, dword ptr [0x11370e0c] */
  EDX = (r32((uint32_t)(0x11370e0c)));
  /* 1134829b push edx */
  push32((uint32_t)(EDX));
  /* 1134829c call dword ptr [0x11371300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371300))), 0x113482a2u);
  /* 113482a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113482a5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 113482a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113482ab cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113482af jne 0x113482b5 */
  if (!C.zf) goto L_113482b5;
  /* 113482b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113482b3 jmp 0x1134832b */
  goto L_1134832b;
L_113482b5:;
  /* 113482b5 push 4 */
  push32((uint32_t)(0x4u));
  /* 113482b7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 113482bc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 113482c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113482c3 call dword ptr [0x113712f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712f8))), 0x113482c9u);
  /* 113482c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113482cc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 113482cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113482d2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113482d6 jne 0x113482f2 */
  if (!C.zf) goto L_113482f2;
  /* 113482d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113482db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113482de push ecx */
  push32((uint32_t)(ECX));
  /* 113482df push 0 */
  push32((uint32_t)(0x0u));
  /* 113482e1 mov edx, dword ptr [0x11370e0c] */
  EDX = (r32((uint32_t)(0x11370e0c)));
  /* 113482e7 push edx */
  push32((uint32_t)(EDX));
  /* 113482e8 call dword ptr [0x113713a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113713a0))), 0x113482eeu);
  /* 113482ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113482f0 jmp 0x1134832b */
  goto L_1134832b;
L_113482f2:;
  /* 113482f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113482f5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113482fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113482fe mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11348305 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11348308 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1134830f mov eax, dword ptr [0x11370e04] */
  EAX = (r32((uint32_t)(0x11370e04)));
  /* 11348314 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348317 mov dword ptr [0x11370e04], eax */
  w32((uint32_t)(0x11370e04), (EAX));
  /* 1134831c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134831f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11348322 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11348328 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1134832b:;
  /* 1134832b mov esp, ebp */
  ESP = (EBP);
  /* 1134832d pop ebp */
  EBP = (pop32());
  /* 1134832e ret  */
  ESPCHK(0x11348220u, _esp0);
  ESP += 4; return;
}

/* FUN_10008330 @ 0x11348330 (494 bytes, 149 insns) */
void f_11348330(void) {
  FTRACE(0x11348330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11348330 push ebp */
  push32((uint32_t)(EBP));
  /* 11348331 mov ebp, esp */
  EBP = (ESP);
  /* 11348333 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11348336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11348339 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1134833c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1134833f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11348342 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11348345 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11348348 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1134834f:;
  /* 1134834f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348353 jl 0x11348368 */
  if ((C.sf!=C.of)) goto L_11348368;
  /* 11348355 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11348358 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1134835a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134835d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11348360 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348363 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11348366 jmp 0x1134834f */
  goto L_1134834f;
L_11348368:;
  /* 11348368 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1134836b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11348371 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11348374 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1134837b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1134837e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11348385 jmp 0x11348390 */
  goto L_11348390;
L_11348387:;
  /* 11348387 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134838a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134838d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11348390:;
  /* 11348390 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348394 jge 0x113483b6 */
  if ((C.sf==C.of)) goto L_113483b6;
  /* 11348396 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11348399 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134839c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1134839f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113483a2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113483a5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113483a8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 113483ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113483ae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113483b1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 113483b4 jmp 0x11348387 */
  goto L_11348387;
L_113483b6:;
  /* 113483b6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113483b9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 113483bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113483bf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113483c2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113483c4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113483c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 113483c9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 113483ce push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 113483d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113483d6 push edx */
  push32((uint32_t)(EDX));
  /* 113483d7 call dword ptr [0x113712f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712f8))), 0x113483ddu);
  /* 113483dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113483df jne 0x113483e9 */
  if (!C.zf) goto L_113483e9;
  /* 113483e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113483e4 jmp 0x1134851a */
  goto L_1134851a;
L_113483e9:;
  /* 113483e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113483ec add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113483f1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 113483f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113483f7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113483fa jmp 0x11348408 */
  goto L_11348408;
L_113483fc:;
  /* 113483fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113483ff add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348405 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11348408:;
  /* 11348408 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134840b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134840e ja 0x1134846d */
  if ((!C.cf&&!C.zf)) goto L_1134846d;
  /* 11348410 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11348413 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1134841a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134841d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11348427 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134842a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134842d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11348430 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11348433 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11348439 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134843c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348442 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11348445 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11348448 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134844b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11348451 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11348454 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11348457 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134845a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134845f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11348462 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11348465 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1134846b jmp 0x113483fc */
  goto L_113483fc;
L_1134846d:;
  /* 1134846d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11348470 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348476 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11348479 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134847c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134847f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11348482 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11348485 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11348488 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1134848b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1134848e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11348491 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11348494 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11348497 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1134849a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134849d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113484a0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 113484a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113484a6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113484a9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113484ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113484af mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113484b2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 113484b5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113484b8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113484bb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 113484c3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113484c6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113484c9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 113484d4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113484d7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 113484db mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113484de mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 113484e1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 113484e4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113484e7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 113484ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113484ec jne 0x113484fd */
  if (!C.zf) goto L_113484fd;
  /* 113484ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113484f1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113484f4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 113484f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113484fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_113484fd:;
  /* 113484fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11348502 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11348505 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11348507 not edx */
  EDX = (~(EDX));
  /* 11348509 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134850c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1134850f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11348511 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11348514 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11348517 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1134851a:;
  /* 1134851a mov esp, ebp */
  ESP = (EBP);
  /* 1134851c pop ebp */
  EBP = (pop32());
  /* 1134851d ret  */
  ESPCHK(0x11348330u, _esp0);
  ESP += 4; return;
}

/* FUN_10008520 @ 0x11348520 (1515 bytes, 489 insns) */
void f_11348520(void) {
  FTRACE(0x11348520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11348520 push ebp */
  push32((uint32_t)(EBP));
  /* 11348521 mov ebp, esp */
  EBP = (ESP);
  /* 11348523 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11348526 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11348529 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134852c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1134852e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11348531 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11348534 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11348537 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1134853a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134853d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11348540 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11348543 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11348546 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11348549 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1134854c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1134854f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11348552 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11348558 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1134855b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11348562 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11348565 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11348568 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134856b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1134856e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11348571 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11348573 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11348576 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11348579 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1134857c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134857f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11348582 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11348585 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11348587 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1134858a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1134858d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348590 jle 0x11348846 */
  if ((C.zf||C.sf!=C.of)) goto L_11348846;
  /* 11348596 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11348599 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1134859c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134859e jne 0x113485ab */
  if (!C.zf) goto L_113485ab;
  /* 113485a0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113485a3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113485a6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113485a9 jle 0x113485b2 */
  if ((C.zf||C.sf!=C.of)) goto L_113485b2;
L_113485ab:;
  /* 113485ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113485ad jmp 0x11348b07 */
  goto L_11348b07;
L_113485b2:;
  /* 113485b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113485b5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 113485b8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113485bb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113485be cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113485c2 jbe 0x113485cb */
  if ((C.cf||C.zf)) goto L_113485cb;
  /* 113485c4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_113485cb:;
  /* 113485cb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113485ce mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113485d1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 113485d4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113485d7 jne 0x113486ad */
  if (!C.zf) goto L_113486ad;
  /* 113485dd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113485e1 jae 0x11348642 */
  if (!C.cf) goto L_11348642;
  /* 113485e3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113485e8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113485eb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113485ed not edx */
  EDX = (~(EDX));
  /* 113485ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113485f2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113485f5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 113485f9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113485fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113485fe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348601 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11348605 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348608 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134860b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1134860e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11348611 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348614 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348617 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1134861a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1134861d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348620 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11348624 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11348626 jne 0x11348640 */
  if (!C.zf) goto L_11348640;
  /* 11348628 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1134862d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11348630 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11348632 not edx */
  EDX = (~(EDX));
  /* 11348634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11348637 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11348639 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1134863b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134863e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11348640:;
  /* 11348640 jmp 0x113486ad */
  goto L_113486ad;
L_11348642:;
  /* 11348642 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11348645 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11348648 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1134864d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1134864f not eax */
  EAX = (~(EAX));
  /* 11348651 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11348654 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348657 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1134865e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11348660 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11348663 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348666 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1134866d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348670 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348673 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11348676 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11348679 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1134867c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134867f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11348682 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348685 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348688 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1134868c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134868e jne 0x113486ad */
  if (!C.zf) goto L_113486ad;
  /* 11348690 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11348693 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11348696 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1134869b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1134869d not eax */
  EAX = (~(EAX));
  /* 1134869f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113486a2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113486a5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 113486a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113486aa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_113486ad:;
  /* 113486ad mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113486b0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113486b3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113486b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113486b9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 113486bc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113486bf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 113486c2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113486c5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113486c8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 113486cb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113486ce add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113486d1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113486d4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113486d7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113486db jle 0x11348827 */
  if ((C.zf||C.sf!=C.of)) goto L_11348827;
  /* 113486e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113486e4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113486e7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 113486ea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113486ed sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 113486f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113486f3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 113486f6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113486fa jbe 0x11348703 */
  if ((C.cf||C.zf)) goto L_11348703;
  /* 113486fc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11348703:;
  /* 11348703 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11348706 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11348709 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1134870c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1134870f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11348712 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11348715 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11348718 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1134871b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1134871e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11348721 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11348724 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11348727 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1134872a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1134872d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11348730 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11348733 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11348736 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11348739 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1134873c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1134873f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11348742 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348745 jne 0x11348813 */
  if (!C.zf) goto L_11348813;
  /* 1134874b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134874f jae 0x113487ac */
  if (!C.cf) goto L_113487ac;
  /* 11348751 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348754 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348757 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1134875b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1134875e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348761 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11348764 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11348767 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1134876a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134876d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11348770 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11348772 jne 0x1134878a */
  if (!C.zf) goto L_1134878a;
  /* 11348774 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11348779 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134877c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1134877e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11348781 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11348783 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11348785 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11348788 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1134878a:;
  /* 1134878a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1134878f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11348792 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11348794 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11348797 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1134879a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1134879e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113487a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113487a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113487a6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 113487aa jmp 0x11348813 */
  goto L_11348813;
L_113487ac:;
  /* 113487ac mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113487af add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113487b2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 113487b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113487b9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113487bc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 113487bf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 113487c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113487c5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113487c8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 113487cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113487cd jne 0x113487ea */
  if (!C.zf) goto L_113487ea;
  /* 113487cf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113487d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113487d5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113487da shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113487dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113487df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113487e2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 113487e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113487e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_113487ea:;
  /* 113487ea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113487ed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113487f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113487f5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113487f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113487fa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113487fd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11348804 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11348806 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11348809 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1134880c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11348813:;
  /* 11348813 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11348816 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11348819 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1134881b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1134881e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348821 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11348824 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11348827:;
  /* 11348827 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1134882a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134882d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11348830 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11348832 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11348835 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348838 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1134883b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134883e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11348841 jmp 0x11348b02 */
  goto L_11348b02;
L_11348846:;
  /* 11348846 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11348849 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134884c jge 0x11348b02 */
  if ((C.sf==C.of)) goto L_11348b02;
  /* 11348852 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11348855 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348858 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1134885b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1134885d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11348860 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348863 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11348866 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348869 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1134886c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1134886f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348872 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11348875 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11348878 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134887b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1134887e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11348881 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11348884 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11348887 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1134888a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134888e jbe 0x11348897 */
  if ((C.cf||C.zf)) goto L_11348897;
  /* 11348890 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11348897:;
  /* 11348897 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134889a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1134889d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134889f jne 0x113489e0 */
  if (!C.zf) goto L_113489e0;
  /* 113488a5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113488a8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 113488ab sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113488ae mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113488b1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113488b5 jbe 0x113488be */
  if ((C.cf||C.zf)) goto L_113488be;
  /* 113488b7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_113488be:;
  /* 113488be mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113488c1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113488c4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 113488c7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113488ca jne 0x113489a0 */
  if (!C.zf) goto L_113489a0;
  /* 113488d0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113488d4 jae 0x11348935 */
  if (!C.cf) goto L_11348935;
  /* 113488d6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113488db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113488de shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113488e0 not edx */
  EDX = (~(EDX));
  /* 113488e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113488e5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113488e8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 113488ec and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113488ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113488f1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113488f4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 113488f8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113488fb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113488fe mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11348901 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11348904 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348907 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134890a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1134890d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348910 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348913 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11348917 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11348919 jne 0x11348933 */
  if (!C.zf) goto L_11348933;
  /* 1134891b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11348920 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11348923 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11348925 not edx */
  EDX = (~(EDX));
  /* 11348927 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134892a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1134892c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1134892e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11348931 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11348933:;
  /* 11348933 jmp 0x113489a0 */
  goto L_113489a0;
L_11348935:;
  /* 11348935 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11348938 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134893b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11348940 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11348942 not eax */
  EAX = (~(EAX));
  /* 11348944 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11348947 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1134894a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11348951 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11348953 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11348956 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348959 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11348960 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348963 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348966 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11348969 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1134896c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1134896f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348972 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11348975 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348978 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134897b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1134897f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11348981 jne 0x113489a0 */
  if (!C.zf) goto L_113489a0;
  /* 11348983 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11348986 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11348989 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1134898e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11348990 not eax */
  EAX = (~(EAX));
  /* 11348992 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11348995 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11348998 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1134899a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134899d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_113489a0:;
  /* 113489a0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113489a3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113489a6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113489a9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113489ac mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 113489af mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113489b2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 113489b5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113489b8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113489bb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 113489be mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113489c1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113489c4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 113489c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113489ca sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 113489cd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113489d0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 113489d3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113489d7 jbe 0x113489e0 */
  if ((C.cf||C.zf)) goto L_113489e0;
  /* 113489d9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_113489e0:;
  /* 113489e0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113489e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113489e6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 113489e9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 113489ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113489ef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113489f2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113489f5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 113489f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113489fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113489fe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11348a01 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11348a04 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11348a07 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11348a0a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11348a0d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11348a10 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11348a13 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11348a16 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11348a19 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11348a1c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11348a1f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348a22 jne 0x11348aee */
  if (!C.zf) goto L_11348aee;
  /* 11348a28 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348a2c jae 0x11348a88 */
  if (!C.cf) goto L_11348a88;
  /* 11348a2e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348a31 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348a34 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11348a38 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348a3b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348a3e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11348a41 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11348a43 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348a46 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348a49 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11348a4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11348a4e jne 0x11348a66 */
  if (!C.zf) goto L_11348a66;
  /* 11348a50 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11348a55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11348a58 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11348a5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11348a5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11348a5f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11348a61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11348a64 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11348a66:;
  /* 11348a66 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11348a6b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11348a6e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11348a70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11348a73 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348a76 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11348a7a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11348a7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11348a7f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348a82 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11348a86 jmp 0x11348aee */
  goto L_11348aee;
L_11348a88:;
  /* 11348a88 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348a8b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348a8e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11348a92 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348a95 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348a98 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11348a9b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11348a9d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348aa0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348aa3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11348aa6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11348aa8 jne 0x11348ac5 */
  if (!C.zf) goto L_11348ac5;
  /* 11348aaa mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11348aad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11348ab0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11348ab5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11348ab7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11348aba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11348abd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11348abf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11348ac2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11348ac5:;
  /* 11348ac5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11348ac8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11348acb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11348ad0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11348ad2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11348ad5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348ad8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11348adf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11348ae1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11348ae4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11348ae7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11348aee:;
  /* 11348aee mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11348af1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11348af4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11348af6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11348af9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348afc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11348aff mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11348b02:;
  /* 11348b02 mov eax, 1 */
  EAX = (0x1u);
L_11348b07:;
  /* 11348b07 mov esp, ebp */
  ESP = (EBP);
  /* 11348b09 pop ebp */
  EBP = (pop32());
  /* 11348b0a ret  */
  ESPCHK(0x11348520u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b10 @ 0x11348b10 (304 bytes, 79 insns) */
void f_11348b10(void) {
  FTRACE(0x11348b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11348b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11348b11 mov ebp, esp */
  EBP = (ESP);
  /* 11348b13 push ecx */
  push32((uint32_t)(ECX));
  /* 11348b14 cmp dword ptr [0x11370e00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11370e00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348b1b je 0x11348c3c */
  if (C.zf) goto L_11348c3c;
  /* 11348b21 mov eax, dword ptr [0x11370df8] */
  EAX = (r32((uint32_t)(0x11370df8)));
  /* 11348b26 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11348b29 mov ecx, dword ptr [0x11370e00] */
  ECX = (r32((uint32_t)(0x11370e00)));
  /* 11348b2f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11348b32 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348b34 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11348b37 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11348b3c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11348b41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11348b44 push eax */
  push32((uint32_t)(EAX));
  /* 11348b45 call dword ptr [0x113713a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113713a4))), 0x11348b4bu);
  /* 11348b4b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11348b50 mov ecx, dword ptr [0x11370df8] */
  ECX = (r32((uint32_t)(0x11370df8)));
  /* 11348b56 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11348b58 mov eax, dword ptr [0x11370e00] */
  EAX = (r32((uint32_t)(0x11370e00)));
  /* 11348b5d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11348b60 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11348b62 mov edx, dword ptr [0x11370e00] */
  EDX = (r32((uint32_t)(0x11370e00)));
  /* 11348b68 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11348b6b mov eax, dword ptr [0x11370e00] */
  EAX = (r32((uint32_t)(0x11370e00)));
  /* 11348b70 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11348b73 mov edx, dword ptr [0x11370df8] */
  EDX = (r32((uint32_t)(0x11370df8)));
  /* 11348b79 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11348b84 mov eax, dword ptr [0x11370e00] */
  EAX = (r32((uint32_t)(0x11370e00)));
  /* 11348b89 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11348b8c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11348b8f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11348b92 mov eax, dword ptr [0x11370e00] */
  EAX = (r32((uint32_t)(0x11370e00)));
  /* 11348b97 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11348b9a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11348b9d mov edx, dword ptr [0x11370e00] */
  EDX = (r32((uint32_t)(0x11370e00)));
  /* 11348ba3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11348ba6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11348baa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11348bac jne 0x11348bc2 */
  if (!C.zf) goto L_11348bc2;
  /* 11348bae mov edx, dword ptr [0x11370e00] */
  EDX = (r32((uint32_t)(0x11370e00)));
  /* 11348bb4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11348bb7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11348bb9 mov ecx, dword ptr [0x11370e00] */
  ECX = (r32((uint32_t)(0x11370e00)));
  /* 11348bbf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11348bc2:;
  /* 11348bc2 mov edx, dword ptr [0x11370e00] */
  EDX = (r32((uint32_t)(0x11370e00)));
  /* 11348bc8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348bcc jne 0x11348c32 */
  if (!C.zf) goto L_11348c32;
  /* 11348bce cmp dword ptr [0x11370e04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11370e04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348bd5 jle 0x11348c32 */
  if ((C.zf||C.sf!=C.of)) goto L_11348c32;
  /* 11348bd7 mov eax, dword ptr [0x11370e00] */
  EAX = (r32((uint32_t)(0x11370e00)));
  /* 11348bdc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11348bdf push ecx */
  push32((uint32_t)(ECX));
  /* 11348be0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11348be2 mov edx, dword ptr [0x11370e0c] */
  EDX = (r32((uint32_t)(0x11370e0c)));
  /* 11348be8 push edx */
  push32((uint32_t)(EDX));
  /* 11348be9 call dword ptr [0x113713a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113713a0))), 0x11348befu);
  /* 11348bef mov eax, dword ptr [0x11370e04] */
  EAX = (r32((uint32_t)(0x11370e04)));
  /* 11348bf4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11348bf7 mov ecx, dword ptr [0x11370e08] */
  ECX = (r32((uint32_t)(0x11370e08)));
  /* 11348bfd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348bff mov edx, dword ptr [0x11370e00] */
  EDX = (r32((uint32_t)(0x11370e00)));
  /* 11348c05 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348c08 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11348c0a push ecx */
  push32((uint32_t)(ECX));
  /* 11348c0b mov eax, dword ptr [0x11370e00] */
  EAX = (r32((uint32_t)(0x11370e00)));
  /* 11348c10 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348c13 push eax */
  push32((uint32_t)(EAX));
  /* 11348c14 mov ecx, dword ptr [0x11370e00] */
  ECX = (r32((uint32_t)(0x11370e00)));
  /* 11348c1a push ecx */
  push32((uint32_t)(ECX));
  /* 11348c1b call 0x1134b240 */
  push32(0x11348c20u); f_1134b240();
  /* 11348c20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11348c23 mov edx, dword ptr [0x11370e04] */
  EDX = (r32((uint32_t)(0x11370e04)));
  /* 11348c29 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11348c2c mov dword ptr [0x11370e04], edx */
  w32((uint32_t)(0x11370e04), (EDX));
L_11348c32:;
  /* 11348c32 mov dword ptr [0x11370e00], 0 */
  w32((uint32_t)(0x11370e00), (0x0u));
L_11348c3c:;
  /* 11348c3c mov esp, ebp */
  ESP = (EBP);
  /* 11348c3e pop ebp */
  EBP = (pop32());
  /* 11348c3f ret  */
  ESPCHK(0x11348b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c40 @ 0x11348c40 (1565 bytes, 343 insns) */
void f_11348c40(void) {
  FTRACE(0x11348c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11348c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11348c41 mov ebp, esp */
  EBP = (ESP);
  /* 11348c43 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11348c49 mov eax, dword ptr [0x11370e04] */
  EAX = (r32((uint32_t)(0x11370e04)));
  /* 11348c4e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11348c51 push eax */
  push32((uint32_t)(EAX));
  /* 11348c52 mov ecx, dword ptr [0x11370e08] */
  ECX = (r32((uint32_t)(0x11370e08)));
  /* 11348c58 push ecx */
  push32((uint32_t)(ECX));
  /* 11348c59 call dword ptr [0x1137137c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137137c))), 0x11348c5fu);
  /* 11348c5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11348c61 je 0x11348c6b */
  if (C.zf) goto L_11348c6b;
  /* 11348c63 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11348c66 jmp 0x11349259 */
  goto L_11349259;
L_11348c6b:;
  /* 11348c6b mov edx, dword ptr [0x11370e08] */
  EDX = (r32((uint32_t)(0x11370e08)));
  /* 11348c71 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11348c77 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11348c81 jmp 0x11348c92 */
  goto L_11348c92;
L_11348c83:;
  /* 11348c83 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11348c89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348c8c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11348c92:;
  /* 11348c92 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11348c98 cmp ecx, dword ptr [0x11370e04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11370e04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348c9e jge 0x11349257 */
  if ((C.sf==C.of)) goto L_11349257;
  /* 11348ca4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11348caa mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11348cad mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11348cb3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11348cb8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11348cbe push ecx */
  push32((uint32_t)(ECX));
  /* 11348cbf call dword ptr [0x1137137c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137137c))), 0x11348cc5u);
  /* 11348cc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11348cc7 je 0x11348cd3 */
  if (C.zf) goto L_11348cd3;
  /* 11348cc9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11348cce jmp 0x11349259 */
  goto L_11349259;
L_11348cd3:;
  /* 11348cd3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11348cd9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11348cdc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11348ce2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11348ce8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348cee mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11348cf1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11348cf7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11348cfa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11348cfd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11348d07 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11348d11 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11348d18 jmp 0x11348d23 */
  goto L_11348d23;
L_11348d1a:;
  /* 11348d1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11348d1d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348d20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11348d23:;
  /* 11348d23 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348d27 jge 0x1134921b */
  if ((C.sf==C.of)) goto L_1134921b;
  /* 11348d2d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11348d37 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11348d41 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11348d4b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11348d55 jmp 0x11348d66 */
  goto L_11348d66;
L_11348d57:;
  /* 11348d57 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11348d5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348d60 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11348d66:;
  /* 11348d66 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348d6d jge 0x11348d82 */
  if ((C.sf==C.of)) goto L_11348d82;
  /* 11348d6f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11348d75 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11348d80 jmp 0x11348d57 */
  goto L_11348d57;
L_11348d82:;
  /* 11348d82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348d86 jl 0x113491bd */
  if ((C.sf!=C.of)) goto L_113491bd;
  /* 11348d8c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11348d91 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11348d97 push ecx */
  push32((uint32_t)(ECX));
  /* 11348d98 call dword ptr [0x1137137c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137137c))), 0x11348d9eu);
  /* 11348d9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11348da0 je 0x11348dac */
  if (C.zf) goto L_11348dac;
  /* 11348da2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11348da7 jmp 0x11349259 */
  goto L_11349259;
L_11348dac:;
  /* 11348dac mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11348db2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11348db5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11348dbf jmp 0x11348dd0 */
  goto L_11348dd0;
L_11348dc1:;
  /* 11348dc1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11348dc7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348dca mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11348dd0:;
  /* 11348dd0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348dd7 jge 0x11348f54 */
  if ((C.sf==C.of)) goto L_11348f54;
  /* 11348ddd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11348de0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348de3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11348de9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11348def add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348df5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11348dfb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11348e01 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348e05 jne 0x11348e12 */
  if (!C.zf) goto L_11348e12;
  /* 11348e07 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 11348e0d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348e10 je 0x11348e1c */
  if (C.zf) goto L_11348e1c;
L_11348e12:;
  /* 11348e12 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11348e17 jmp 0x11349259 */
  goto L_11349259;
L_11348e1c:;
  /* 11348e1c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11348e22 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11348e24 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11348e2a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11348e30 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11348e36 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 11348e3c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11348e3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11348e41 je 0x11348e79 */
  if (C.zf) goto L_11348e79;
  /* 11348e43 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11348e49 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11348e4c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11348e52 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348e5c jle 0x11348e68 */
  if ((C.zf||C.sf!=C.of)) goto L_11348e68;
  /* 11348e5e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11348e63 jmp 0x11349259 */
  goto L_11349259;
L_11348e68:;
  /* 11348e68 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 11348e6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348e71 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11348e77 jmp 0x11348ebb */
  goto L_11348ebb;
L_11348e79:;
  /* 11348e79 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 11348e7f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11348e82 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11348e85 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11348e8b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348e92 jle 0x11348e9e */
  if ((C.zf||C.sf!=C.of)) goto L_11348e9e;
  /* 11348e94 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11348e9e:;
  /* 11348e9e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11348ea4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 11348eab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348eae mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11348eb4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_11348ebb:;
  /* 11348ebb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348ec2 jl 0x11348edd */
  if ((C.sf!=C.of)) goto L_11348edd;
  /* 11348ec4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11348eca and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11348ecd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11348ecf jne 0x11348edd */
  if (!C.zf) goto L_11348edd;
  /* 11348ed1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348edb jle 0x11348ee7 */
  if ((C.zf||C.sf!=C.of)) goto L_11348ee7;
L_11348edd:;
  /* 11348edd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 11348ee2 jmp 0x11349259 */
  goto L_11349259;
L_11348ee7:;
  /* 11348ee7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11348eed add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348ef3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11348ef6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348efc je 0x11348f08 */
  if (C.zf) goto L_11348f08;
  /* 11348efe mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11348f03 jmp 0x11349259 */
  goto L_11349259;
L_11348f08:;
  /* 11348f08 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11348f0e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348f14 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11348f1a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11348f20 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348f26 jb 0x11348e1c */
  if (C.cf) goto L_11348e1c;
  /* 11348f2c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11348f32 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348f38 je 0x11348f44 */
  if (C.zf) goto L_11348f44;
  /* 11348f3a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11348f3f jmp 0x11349259 */
  goto L_11349259;
L_11348f44:;
  /* 11348f44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11348f47 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348f4c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11348f4f jmp 0x11348dc1 */
  goto L_11348dc1;
L_11348f54:;
  /* 11348f54 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11348f57 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11348f59 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348f5f je 0x11348f6b */
  if (C.zf) goto L_11348f6b;
  /* 11348f61 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11348f66 jmp 0x11349259 */
  goto L_11349259;
L_11348f6b:;
  /* 11348f6b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11348f6e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11348f74 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11348f7b jmp 0x11348f86 */
  goto L_11348f86;
L_11348f7d:;
  /* 11348f7d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11348f80 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348f83 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11348f86:;
  /* 11348f86 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348f8a jge 0x113491bd */
  if ((C.sf==C.of)) goto L_113491bd;
  /* 11348f90 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 11348f9a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11348fa0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_11348fa6:;
  /* 11348fa6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11348fac mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11348faf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 11348fb5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11348fbb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348fc1 je 0x113490ea */
  if (C.zf) goto L_113490ea;
  /* 11348fc7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11348fca mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11348fd0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348fd7 je 0x113490ea */
  if (C.zf) goto L_113490ea;
  /* 11348fdd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11348fe3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348fe9 jb 0x11348ffe */
  if (C.cf) goto L_11348ffe;
  /* 11348feb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 11348ff1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11348ff6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11348ffc jb 0x11349008 */
  if (C.cf) goto L_11349008;
L_11348ffe:;
  /* 11348ffe mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 11349003 jmp 0x11349259 */
  goto L_11349259;
L_11349008:;
  /* 11349008 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1134900e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 11349014 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1134901a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 11349020 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11349023 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11349026 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11349029 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134902e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_11349034:;
  /* 11349034 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11349037 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134903d je 0x1134905e */
  if (C.zf) goto L_1134905e;
  /* 1134903f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11349042 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349048 jne 0x1134904c */
  if (!C.zf) goto L_1134904c;
  /* 1134904a jmp 0x1134905e */
  goto L_1134905e;
L_1134904c:;
  /* 1134904c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134904f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11349051 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11349054 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11349057 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11349059 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1134905c jmp 0x11349034 */
  goto L_11349034;
L_1134905e:;
  /* 1134905e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11349061 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349067 jne 0x11349073 */
  if (!C.zf) goto L_11349073;
  /* 11349069 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1134906e jmp 0x11349259 */
  goto L_11349259;
L_11349073:;
  /* 11349073 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11349079 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1134907b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1134907e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11349081 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11349087 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134908e jle 0x1134909a */
  if ((C.zf||C.sf!=C.of)) goto L_1134909a;
  /* 11349090 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1134909a:;
  /* 1134909a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 113490a0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113490a3 je 0x113490af */
  if (C.zf) goto L_113490af;
  /* 113490a5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 113490aa jmp 0x11349259 */
  goto L_11349259;
L_113490af:;
  /* 113490af mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 113490b5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113490b8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113490be je 0x113490ca */
  if (C.zf) goto L_113490ca;
  /* 113490c0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 113490c5 jmp 0x11349259 */
  goto L_11349259;
L_113490ca:;
  /* 113490ca mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 113490d0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 113490d6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 113490dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113490df mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 113490e5 jmp 0x11348fa6 */
  goto L_11348fa6;
L_113490ea:;
  /* 113490ea cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113490f1 je 0x11349161 */
  if (C.zf) goto L_11349161;
  /* 113490f3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113490f7 jge 0x1134912b */
  if ((C.sf==C.of)) goto L_1134912b;
  /* 113490f9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113490fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11349101 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11349103 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11349109 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1134910b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 11349111 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11349116 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11349119 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1134911b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11349121 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11349123 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 11349129 jmp 0x11349161 */
  goto L_11349161;
L_1134912b:;
  /* 1134912b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1134912e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11349131 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11349136 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11349138 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1134913e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11349140 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 11349146 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11349149 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134914c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11349151 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11349153 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11349159 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1134915b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11349161:;
  /* 11349161 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11349167 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1134916a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349170 jne 0x11349184 */
  if (!C.zf) goto L_11349184;
  /* 11349172 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11349175 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1134917b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349182 je 0x1134918e */
  if (C.zf) goto L_1134918e;
L_11349184:;
  /* 11349184 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 11349189 jmp 0x11349259 */
  goto L_11349259;
L_1134918e:;
  /* 1134918e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11349194 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11349197 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134919d je 0x113491a9 */
  if (C.zf) goto L_113491a9;
  /* 1134919f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 113491a4 jmp 0x11349259 */
  goto L_11349259;
L_113491a9:;
  /* 113491a9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 113491af add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113491b2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 113491b8 jmp 0x11348f7d */
  goto L_11348f7d;
L_113491bd:;
  /* 113491bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113491c0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 113491c6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 113491cc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113491d0 jne 0x113491ea */
  if (!C.zf) goto L_113491ea;
  /* 113491d2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113491d5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 113491db mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 113491e1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113491e8 je 0x113491f1 */
  if (C.zf) goto L_113491f1;
L_113491ea:;
  /* 113491ea mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 113491ef jmp 0x11349259 */
  goto L_11349259;
L_113491f1:;
  /* 113491f1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 113491f7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113491fd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 11349203 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11349206 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134920b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1134920e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11349211 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11349213 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11349216 jmp 0x11348d1a */
  goto L_11348d1a;
L_1134921b:;
  /* 1134921b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11349221 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11349227 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349229 jne 0x1134923c */
  if (!C.zf) goto L_1134923c;
  /* 1134922b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11349231 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 11349237 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134923a je 0x11349243 */
  if (C.zf) goto L_11349243;
L_1134923c:;
  /* 1134923c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 11349241 jmp 0x11349259 */
  goto L_11349259;
L_11349243:;
  /* 11349243 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11349249 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134924c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11349252 jmp 0x11348c83 */
  goto L_11348c83;
L_11349257:;
  /* 11349257 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11349259:;
  /* 11349259 mov esp, ebp */
  ESP = (EBP);
  /* 1134925b pop ebp */
  EBP = (pop32());
  /* 1134925c ret  */
  ESPCHK(0x11348c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009260 @ 0x11349260 (250 bytes, 92 insns) */
void f_11349260(void) {
  FTRACE(0x11349260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11349260 push ebp */
  push32((uint32_t)(EBP));
  /* 11349261 mov ebp, esp */
  EBP = (ESP);
  /* 11349263 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11349266 push ebx */
  push32((uint32_t)(EBX));
  /* 11349267 push esi */
  push32((uint32_t)(ESI));
  /* 11349268 push edi */
  push32((uint32_t)(EDI));
  /* 11349269 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1134926c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1134926f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11349272 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11349275:;
  /* 11349275 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349279 jne 0x11349299 */
  if (!C.zf) goto L_11349299;
  /* 1134927b push 0x1136ae50 */
  push32((uint32_t)(0x1136ae50u));
  /* 11349280 push 0 */
  push32((uint32_t)(0x0u));
  /* 11349282 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11349284 push 0x1136ae44 */
  push32((uint32_t)(0x1136ae44u));
  /* 11349289 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134928b call 0x11342410 */
  push32(0x11349290u); f_11342410();
  /* 11349290 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11349293 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349296 jne 0x11349299 */
  if (!C.zf) goto L_11349299;
  /* 11349298 int3  */
  x86_unimpl("int3 @ 0x11349298");
L_11349299:;
  /* 11349299 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1134929b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134929d jne 0x11349275 */
  if (!C.zf) goto L_11349275;
L_1134929f:;
  /* 1134929f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113492a3 jne 0x113492c3 */
  if (!C.zf) goto L_113492c3;
  /* 113492a5 push 0x1136ae34 */
  push32((uint32_t)(0x1136ae34u));
  /* 113492aa push 0 */
  push32((uint32_t)(0x0u));
  /* 113492ac push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 113492ae push 0x1136ae44 */
  push32((uint32_t)(0x1136ae44u));
  /* 113492b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113492b5 call 0x11342410 */
  push32(0x113492bau); f_11342410();
  /* 113492ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113492bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113492c0 jne 0x113492c3 */
  if (!C.zf) goto L_113492c3;
  /* 113492c2 int3  */
  x86_unimpl("int3 @ 0x113492c2");
L_113492c3:;
  /* 113492c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113492c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113492c7 jne 0x1134929f */
  if (!C.zf) goto L_1134929f;
  /* 113492c9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113492cc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 113492d3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113492d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113492d9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 113492dc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113492df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113492e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 113492e4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113492e7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 113492ee mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113492f1 push ecx */
  push32((uint32_t)(ECX));
  /* 113492f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113492f5 push edx */
  push32((uint32_t)(EDX));
  /* 113492f6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113492f9 push eax */
  push32((uint32_t)(EAX));
  /* 113492fa call 0x1134a2e0 */
  push32(0x113492ffu); f_1134a2e0();
  /* 113492ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11349302 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11349305 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11349308 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1134930b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134930e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11349311 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11349314 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11349317 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134931b jl 0x1134933f */
  if ((C.sf!=C.of)) goto L_1134933f;
  /* 1134931d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11349320 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11349322 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11349325 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11349327 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1134932d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11349330 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11349333 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11349335 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11349338 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1134933b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1134933d jmp 0x11349350 */
  goto L_11349350;
L_1134933f:;
  /* 1134933f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11349342 push edx */
  push32((uint32_t)(EDX));
  /* 11349343 push 0 */
  push32((uint32_t)(0x0u));
  /* 11349345 call 0x1134a060 */
  push32(0x1134934au); f_1134a060();
  /* 1134934a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134934d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11349350:;
  /* 11349350 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11349353 pop edi */
  EDI = (pop32());
  /* 11349354 pop esi */
  ESI = (pop32());
  /* 11349355 pop ebx */
  EBX = (pop32());
  /* 11349356 mov esp, ebp */
  ESP = (EBP);
  /* 11349358 pop ebp */
  EBP = (pop32());
  /* 11349359 ret  */
  ESPCHK(0x11349260u, _esp0);
  ESP += 4; return;
}

/* FUN_10009360 @ 0x11349360 (183 bytes, 58 insns) */
void f_11349360(void) {
  FTRACE(0x11349360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11349360 push ebp */
  push32((uint32_t)(EBP));
  /* 11349361 mov ebp, esp */
  EBP = (ESP);
  /* 11349363 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11349366 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11349369 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134936c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349371 ja 0x1134938a */
  if ((!C.cf&&!C.zf)) goto L_1134938a;
  /* 11349373 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11349376 mov edx, dword ptr [0x1136dc98] */
  EDX = (r32((uint32_t)(0x1136dc98)));
  /* 1134937c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134937e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11349382 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11349385 jmp 0x11349413 */
  goto L_11349413;
L_1134938a:;
  /* 1134938a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134938d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11349390 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11349396 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1134939c mov edx, dword ptr [0x1136dc98] */
  EDX = (r32((uint32_t)(0x1136dc98)));
  /* 113493a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113493a4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 113493a8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 113493ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113493af je 0x113493d3 */
  if (C.zf) goto L_113493d3;
  /* 113493b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113493b4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 113493b7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113493bd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 113493c0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 113493c3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 113493c6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 113493ca mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 113493d1 jmp 0x113493e4 */
  goto L_113493e4;
L_113493d3:;
  /* 113493d3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 113493d6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 113493d9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 113493dd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_113493e4:;
  /* 113493e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 113493e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113493e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113493ea lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 113493ed push ecx */
  push32((uint32_t)(ECX));
  /* 113493ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113493f1 push edx */
  push32((uint32_t)(EDX));
  /* 113493f2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 113493f5 push eax */
  push32((uint32_t)(EAX));
  /* 113493f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113493f8 call 0x1134b580 */
  push32(0x113493fdu); f_1134b580();
  /* 113493fd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11349400 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11349402 jne 0x11349408 */
  if (!C.zf) goto L_11349408;
  /* 11349404 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11349406 jmp 0x11349413 */
  goto L_11349413;
L_11349408:;
  /* 11349408 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134940b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11349410 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_11349413:;
  /* 11349413 mov esp, ebp */
  ESP = (EBP);
  /* 11349415 pop ebp */
  EBP = (pop32());
  /* 11349416 ret  */
  ESPCHK(0x11349360u, _esp0);
  ESP += 4; return;
}

/* FUN_10009420 @ 0x11349420 (836 bytes, 238 insns) */
void f_11349420(void) {
  FTRACE(0x11349420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11349420 push ebp */
  push32((uint32_t)(EBP));
  /* 11349421 mov ebp, esp */
  EBP = (ESP);
  /* 11349423 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11349426 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11349428 call 0x11346d50 */
  push32(0x1134942du); f_11346d50();
  /* 1134942d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11349430 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11349433 push eax */
  push32((uint32_t)(EAX));
  /* 11349434 call 0x11349770 */
  push32(0x11349439u); f_11349770();
  /* 11349439 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134943c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1134943f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11349442 cmp ecx, dword ptr [0x11370b44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11370b44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349448 jne 0x1134945b */
  if (!C.zf) goto L_1134945b;
  /* 1134944a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1134944c call 0x11346df0 */
  push32(0x11349451u); f_11346df0();
  /* 11349451 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11349454 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11349456 jmp 0x11349760 */
  goto L_11349760;
L_1134945b:;
  /* 1134945b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134945f jne 0x1134947c */
  if (!C.zf) goto L_1134947c;
  /* 11349461 call 0x11349850 */
  push32(0x11349466u); f_11349850();
  /* 11349466 call 0x113498d0 */
  push32(0x1134946bu); f_113498d0();
  /* 1134946b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1134946d call 0x11346df0 */
  push32(0x11349472u); f_11346df0();
  /* 11349472 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11349475 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11349477 jmp 0x11349760 */
  goto L_11349760;
L_1134947c:;
  /* 1134947c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11349483 jmp 0x1134948e */
  goto L_1134948e;
L_11349485:;
  /* 11349485 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11349488 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134948b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1134948e:;
  /* 1134948e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349492 jae 0x113495df */
  if (!C.cf) goto L_113495df;
  /* 11349498 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134949b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134949e mov ecx, dword ptr [eax + 0x1136deb8] */
  ECX = (r32((uint32_t)(EAX + 0x1136deb8)));
  /* 113494a4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113494a7 jne 0x113495da */
  if (!C.zf) goto L_113495da;
  /* 113494ad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 113494b4 jmp 0x113494bf */
  goto L_113494bf;
L_113494b6:;
  /* 113494b6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113494b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113494bc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_113494bf:;
  /* 113494bf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113494c6 jae 0x113494d4 */
  if (!C.cf) goto L_113494d4;
  /* 113494c8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113494cb mov byte ptr [eax + 0x11370ce0], 0 */
  w8((uint32_t)(EAX + 0x11370ce0), (0x0u));
  /* 113494d2 jmp 0x113494b6 */
  goto L_113494b6;
L_113494d4:;
  /* 113494d4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113494db jmp 0x113494e6 */
  goto L_113494e6;
L_113494dd:;
  /* 113494dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113494e0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113494e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_113494e6:;
  /* 113494e6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113494ea jae 0x11349567 */
  if (!C.cf) goto L_11349567;
  /* 113494ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113494ef imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113494f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113494f5 lea ecx, [edx + eax*8 + 0x1136dec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1136dec8));
  /* 113494fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113494ff jmp 0x1134950a */
  goto L_1134950a;
L_11349501:;
  /* 11349501 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11349504 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11349507 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1134950a:;
  /* 1134950a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134950d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134950f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11349511 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11349513 je 0x11349562 */
  if (C.zf) goto L_11349562;
  /* 11349515 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11349518 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134951a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1134951d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134951f je 0x11349562 */
  if (C.zf) goto L_11349562;
  /* 11349521 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11349524 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11349526 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11349528 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1134952b jmp 0x11349536 */
  goto L_11349536;
L_1134952d:;
  /* 1134952d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11349530 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11349533 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11349536:;
  /* 11349536 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11349539 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1134953b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1134953e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349541 ja 0x11349560 */
  if ((!C.cf&&!C.zf)) goto L_11349560;
  /* 11349543 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11349546 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11349549 mov dl, byte ptr [eax + 0x11370ce1] */
  DL = (r8((uint32_t)(EAX + 0x11370ce1)));
  /* 1134954f or dl, byte ptr [ecx + 0x1136deb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1136deb0))); DL = (_r); fl_logic(_r,8); }
  /* 11349555 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11349558 mov byte ptr [eax + 0x11370ce1], dl */
  w8((uint32_t)(EAX + 0x11370ce1), (DL));
  /* 1134955e jmp 0x1134952d */
  goto L_1134952d;
L_11349560:;
  /* 11349560 jmp 0x11349501 */
  goto L_11349501;
L_11349562:;
  /* 11349562 jmp 0x113494dd */
  goto L_113494dd;
L_11349567:;
  /* 11349567 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134956a mov dword ptr [0x11370b44], ecx */
  w32((uint32_t)(0x11370b44), (ECX));
  /* 11349570 mov dword ptr [0x11370bcc], 1 */
  w32((uint32_t)(0x11370bcc), (0x1u));
  /* 1134957a mov edx, dword ptr [0x11370b44] */
  EDX = (r32((uint32_t)(0x11370b44)));
  /* 11349580 push edx */
  push32((uint32_t)(EDX));
  /* 11349581 call 0x113497d0 */
  push32(0x11349586u); f_113497d0();
  /* 11349586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11349589 mov dword ptr [0x11370de4], eax */
  w32((uint32_t)(0x11370de4), (EAX));
  /* 1134958e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11349595 jmp 0x113495a0 */
  goto L_113495a0;
L_11349597:;
  /* 11349597 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134959a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134959d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_113495a0:;
  /* 113495a0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113495a4 jae 0x113495c4 */
  if (!C.cf) goto L_113495c4;
  /* 113495a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113495a9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113495ac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113495af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113495b2 mov cx, word ptr [ecx + eax*2 + 0x1136debc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1136debc)));
  /* 113495ba mov word ptr [edx*2 + 0x11370bc0], cx */
  w16((uint32_t)(EDX*2 + 0x11370bc0), (CX));
  /* 113495c2 jmp 0x11349597 */
  goto L_11349597;
L_113495c4:;
  /* 113495c4 call 0x113498d0 */
  push32(0x113495c9u); f_113498d0();
  /* 113495c9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113495cb call 0x11346df0 */
  push32(0x113495d0u); f_11346df0();
  /* 113495d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113495d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113495d5 jmp 0x11349760 */
  goto L_11349760;
L_113495da:;
  /* 113495da jmp 0x11349485 */
  goto L_11349485;
L_113495df:;
  /* 113495df lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 113495e2 push edx */
  push32((uint32_t)(EDX));
  /* 113495e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113495e6 push eax */
  push32((uint32_t)(EAX));
  /* 113495e7 call dword ptr [0x113712f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712f4))), 0x113495edu);
  /* 113495ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113495f0 jne 0x11349732 */
  if (!C.zf) goto L_11349732;
  /* 113495f6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 113495fd jmp 0x11349608 */
  goto L_11349608;
L_113495ff:;
  /* 113495ff mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11349602 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11349605 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11349608:;
  /* 11349608 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134960f jae 0x1134961d */
  if (!C.cf) goto L_1134961d;
  /* 11349611 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11349614 mov byte ptr [edx + 0x11370ce0], 0 */
  w8((uint32_t)(EDX + 0x11370ce0), (0x0u));
  /* 1134961b jmp 0x113495ff */
  goto L_113495ff;
L_1134961d:;
  /* 1134961d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11349620 mov dword ptr [0x11370b44], eax */
  w32((uint32_t)(0x11370b44), (EAX));
  /* 11349625 mov dword ptr [0x11370de4], 0 */
  w32((uint32_t)(0x11370de4), (0x0u));
  /* 1134962f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349633 jbe 0x113496ee */
  if ((C.cf||C.zf)) goto L_113496ee;
  /* 11349639 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1134963c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1134963f jmp 0x1134964a */
  goto L_1134964a;
L_11349641:;
  /* 11349641 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11349644 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11349647 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1134964a:;
  /* 1134964a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1134964d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134964f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11349651 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11349653 je 0x1134969c */
  if (C.zf) goto L_1134969c;
  /* 11349655 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11349658 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134965a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1134965d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134965f je 0x1134969c */
  if (C.zf) goto L_1134969c;
  /* 11349661 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11349664 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11349666 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11349668 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1134966b jmp 0x11349676 */
  goto L_11349676;
L_1134966d:;
  /* 1134966d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11349670 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11349673 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11349676:;
  /* 11349676 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11349679 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1134967b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1134967e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349681 ja 0x1134969a */
  if ((!C.cf&&!C.zf)) goto L_1134969a;
  /* 11349683 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11349686 mov cl, byte ptr [eax + 0x11370ce1] */
  CL = (r8((uint32_t)(EAX + 0x11370ce1)));
  /* 1134968c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1134968f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11349692 mov byte ptr [edx + 0x11370ce1], cl */
  w8((uint32_t)(EDX + 0x11370ce1), (CL));
  /* 11349698 jmp 0x1134966d */
  goto L_1134966d;
L_1134969a:;
  /* 1134969a jmp 0x11349641 */
  goto L_11349641;
L_1134969c:;
  /* 1134969c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 113496a3 jmp 0x113496ae */
  goto L_113496ae;
L_113496a5:;
  /* 113496a5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113496a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113496ab mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_113496ae:;
  /* 113496ae cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113496b5 jae 0x113496ce */
  if (!C.cf) goto L_113496ce;
  /* 113496b7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113496ba mov dl, byte ptr [ecx + 0x11370ce1] */
  DL = (r8((uint32_t)(ECX + 0x11370ce1)));
  /* 113496c0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 113496c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113496c6 mov byte ptr [eax + 0x11370ce1], dl */
  w8((uint32_t)(EAX + 0x11370ce1), (DL));
  /* 113496cc jmp 0x113496a5 */
  goto L_113496a5;
L_113496ce:;
  /* 113496ce mov ecx, dword ptr [0x11370b44] */
  ECX = (r32((uint32_t)(0x11370b44)));
  /* 113496d4 push ecx */
  push32((uint32_t)(ECX));
  /* 113496d5 call 0x113497d0 */
  push32(0x113496dau); f_113497d0();
  /* 113496da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113496dd mov dword ptr [0x11370de4], eax */
  w32((uint32_t)(0x11370de4), (EAX));
  /* 113496e2 mov dword ptr [0x11370bcc], 1 */
  w32((uint32_t)(0x11370bcc), (0x1u));
  /* 113496ec jmp 0x113496f8 */
  goto L_113496f8;
L_113496ee:;
  /* 113496ee mov dword ptr [0x11370bcc], 0 */
  w32((uint32_t)(0x11370bcc), (0x0u));
L_113496f8:;
  /* 113496f8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113496ff jmp 0x1134970a */
  goto L_1134970a;
L_11349701:;
  /* 11349701 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11349704 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11349707 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1134970a:;
  /* 1134970a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134970e jae 0x1134971f */
  if (!C.cf) goto L_1134971f;
  /* 11349710 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11349713 mov word ptr [eax*2 + 0x11370bc0], 0 */
  w16((uint32_t)(EAX*2 + 0x11370bc0), (0x0u));
  /* 1134971d jmp 0x11349701 */
  goto L_11349701;
L_1134971f:;
  /* 1134971f call 0x113498d0 */
  push32(0x11349724u); f_113498d0();
  /* 11349724 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11349726 call 0x11346df0 */
  push32(0x1134972bu); f_11346df0();
  /* 1134972b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134972e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11349730 jmp 0x11349760 */
  goto L_11349760;
L_11349732:;
  /* 11349732 cmp dword ptr [0x1136f658], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f658))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349739 je 0x11349753 */
  if (C.zf) goto L_11349753;
  /* 1134973b call 0x11349850 */
  push32(0x11349740u); f_11349850();
  /* 11349740 call 0x113498d0 */
  push32(0x11349745u); f_113498d0();
  /* 11349745 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11349747 call 0x11346df0 */
  push32(0x1134974cu); f_11346df0();
  /* 1134974c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134974f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11349751 jmp 0x11349760 */
  goto L_11349760;
L_11349753:;
  /* 11349753 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11349755 call 0x11346df0 */
  push32(0x1134975au); f_11346df0();
  /* 1134975a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134975d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11349760:;
  /* 11349760 mov esp, ebp */
  ESP = (EBP);
  /* 11349762 pop ebp */
  EBP = (pop32());
  /* 11349763 ret  */
  ESPCHK(0x11349420u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x11349770 (89 bytes, 21 insns) */
void f_11349770(void) {
  FTRACE(0x11349770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11349770 push ebp */
  push32((uint32_t)(EBP));
  /* 11349771 mov ebp, esp */
  EBP = (ESP);
  /* 11349773 mov dword ptr [0x1136f658], 0 */
  w32((uint32_t)(0x1136f658), (0x0u));
  /* 1134977d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349781 jne 0x11349795 */
  if (!C.zf) goto L_11349795;
  /* 11349783 mov dword ptr [0x1136f658], 1 */
  w32((uint32_t)(0x1136f658), (0x1u));
  /* 1134978d call dword ptr [0x113712ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712ec))), 0x11349793u);
  /* 11349793 jmp 0x113497c7 */
  goto L_113497c7;
L_11349795:;
  /* 11349795 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349799 jne 0x113497ad */
  if (!C.zf) goto L_113497ad;
  /* 1134979b mov dword ptr [0x1136f658], 1 */
  w32((uint32_t)(0x1136f658), (0x1u));
  /* 113497a5 call dword ptr [0x113712f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712f0))), 0x113497abu);
  /* 113497ab jmp 0x113497c7 */
  goto L_113497c7;
L_113497ad:;
  /* 113497ad cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113497b1 jne 0x113497c4 */
  if (!C.zf) goto L_113497c4;
  /* 113497b3 mov dword ptr [0x1136f658], 1 */
  w32((uint32_t)(0x1136f658), (0x1u));
  /* 113497bd mov eax, dword ptr [0x1136f678] */
  EAX = (r32((uint32_t)(0x1136f678)));
  /* 113497c2 jmp 0x113497c7 */
  goto L_113497c7;
L_113497c4:;
  /* 113497c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_113497c7:;
  /* 113497c7 pop ebp */
  EBP = (pop32());
  /* 113497c8 ret  */
  ESPCHK(0x11349770u, _esp0);
  ESP += 4; return;
}

/* FUN_100097d0 @ 0x113497d0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_113497d0(void) {
  FTRACE(0x113497d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113497d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113497d1 mov ebp, esp */
  EBP = (ESP);
  /* 113497d3 push ecx */
  push32((uint32_t)(ECX));
  /* 113497d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113497d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113497da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113497dd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113497e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113497e6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113497ea ja 0x1134981a */
  if ((!C.cf&&!C.zf)) goto L_1134981a;
  /* 113497ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113497ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113497f1 mov dl, byte ptr [eax + 0x11349834] */
  DL = (r8((uint32_t)(EAX + 0x11349834)));
  /* 113497f7 jmp dword ptr [edx*4 + 0x11349820] */
  switch (EDX) {
    case 0: goto L_113497fe;
    case 1: goto L_11349805;
    case 2: goto L_1134980c;
    case 3: goto L_11349813;
    case 4: goto L_1134981a;
    default: x86_unimpl("switch@0x113497f7 out of table"); return;
  }
L_113497fe:;
  /* 113497fe mov eax, 0x411 */
  EAX = (0x411u);
  /* 11349803 jmp 0x1134981c */
  goto L_1134981c;
L_11349805:;
  /* 11349805 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1134980a jmp 0x1134981c */
  goto L_1134981c;
L_1134980c:;
  /* 1134980c mov eax, 0x412 */
  EAX = (0x412u);
  /* 11349811 jmp 0x1134981c */
  goto L_1134981c;
L_11349813:;
  /* 11349813 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11349818 jmp 0x1134981c */
  goto L_1134981c;
L_1134981a:;
  /* 1134981a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1134981c:;
  /* 1134981c mov esp, ebp */
  ESP = (EBP);
  /* 1134981e pop ebp */
  EBP = (pop32());
  /* 1134981f ret  */
  ESPCHK(0x113497d0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x11349850 (116 bytes, 29 insns) */
void f_11349850(void) {
  FTRACE(0x11349850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11349850 push ebp */
  push32((uint32_t)(EBP));
  /* 11349851 mov ebp, esp */
  EBP = (ESP);
  /* 11349853 push ecx */
  push32((uint32_t)(ECX));
  /* 11349854 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1134985b jmp 0x11349866 */
  goto L_11349866;
L_1134985d:;
  /* 1134985d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11349860 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11349863 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11349866:;
  /* 11349866 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134986d jge 0x1134987b */
  if ((C.sf==C.of)) goto L_1134987b;
  /* 1134986f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11349872 mov byte ptr [ecx + 0x11370ce0], 0 */
  w8((uint32_t)(ECX + 0x11370ce0), (0x0u));
  /* 11349879 jmp 0x1134985d */
  goto L_1134985d;
L_1134987b:;
  /* 1134987b mov dword ptr [0x11370b44], 0 */
  w32((uint32_t)(0x11370b44), (0x0u));
  /* 11349885 mov dword ptr [0x11370bcc], 0 */
  w32((uint32_t)(0x11370bcc), (0x0u));
  /* 1134988f mov dword ptr [0x11370de4], 0 */
  w32((uint32_t)(0x11370de4), (0x0u));
  /* 11349899 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113498a0 jmp 0x113498ab */
  goto L_113498ab;
L_113498a2:;
  /* 113498a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113498a5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113498a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113498ab:;
  /* 113498ab cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113498af jge 0x113498c0 */
  if ((C.sf==C.of)) goto L_113498c0;
  /* 113498b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113498b4 mov word ptr [eax*2 + 0x11370bc0], 0 */
  w16((uint32_t)(EAX*2 + 0x11370bc0), (0x0u));
  /* 113498be jmp 0x113498a2 */
  goto L_113498a2;
L_113498c0:;
  /* 113498c0 mov esp, ebp */
  ESP = (EBP);
  /* 113498c2 pop ebp */
  EBP = (pop32());
  /* 113498c3 ret  */
  ESPCHK(0x11349850u, _esp0);
  ESP += 4; return;
}

/* FUN_100098d0 @ 0x113498d0 (770 bytes, 175 insns) */
void f_113498d0(void) {
  FTRACE(0x113498d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113498d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113498d1 mov ebp, esp */
  EBP = (ESP);
  /* 113498d3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113498d9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 113498df push eax */
  push32((uint32_t)(EAX));
  /* 113498e0 mov ecx, dword ptr [0x11370b44] */
  ECX = (r32((uint32_t)(0x11370b44)));
  /* 113498e6 push ecx */
  push32((uint32_t)(ECX));
  /* 113498e7 call dword ptr [0x113712f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712f4))), 0x113498edu);
  /* 113498ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113498f0 jne 0x11349b09 */
  if (!C.zf) goto L_11349b09;
  /* 113498f6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11349900 jmp 0x11349911 */
  goto L_11349911;
L_11349902:;
  /* 11349902 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349908 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134990b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11349911:;
  /* 11349911 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134991b jae 0x11349932 */
  if (!C.cf) goto L_11349932;
  /* 1134991d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349923 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 11349929 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 11349930 jmp 0x11349902 */
  goto L_11349902;
L_11349932:;
  /* 11349932 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 11349939 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1134993f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11349942 jmp 0x1134994d */
  goto L_1134994d;
L_11349944:;
  /* 11349944 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11349947 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134994a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1134994d:;
  /* 1134994d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11349950 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11349952 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11349954 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11349956 je 0x11349998 */
  if (C.zf) goto L_11349998;
  /* 11349958 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134995b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134995d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1134995f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 11349965 jmp 0x11349976 */
  goto L_11349976;
L_11349967:;
  /* 11349967 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1134996d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11349970 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11349976:;
  /* 11349976 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11349979 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134997b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1134997e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349984 ja 0x11349996 */
  if ((!C.cf&&!C.zf)) goto L_11349996;
  /* 11349986 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1134998c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11349994 jmp 0x11349967 */
  goto L_11349967;
L_11349996:;
  /* 11349996 jmp 0x11349944 */
  goto L_11349944;
L_11349998:;
  /* 11349998 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134999a mov eax, dword ptr [0x11370de4] */
  EAX = (r32((uint32_t)(0x11370de4)));
  /* 1134999f push eax */
  push32((uint32_t)(EAX));
  /* 113499a0 mov ecx, dword ptr [0x11370b44] */
  ECX = (r32((uint32_t)(0x11370b44)));
  /* 113499a6 push ecx */
  push32((uint32_t)(ECX));
  /* 113499a7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 113499ad push edx */
  push32((uint32_t)(EDX));
  /* 113499ae push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113499b3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 113499b9 push eax */
  push32((uint32_t)(EAX));
  /* 113499ba push 1 */
  push32((uint32_t)(0x1u));
  /* 113499bc call 0x1134b580 */
  push32(0x113499c1u); f_1134b580();
  /* 113499c1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113499c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113499c6 mov ecx, dword ptr [0x11370b44] */
  ECX = (r32((uint32_t)(0x11370b44)));
  /* 113499cc push ecx */
  push32((uint32_t)(ECX));
  /* 113499cd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113499d2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 113499d8 push edx */
  push32((uint32_t)(EDX));
  /* 113499d9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113499de lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 113499e4 push eax */
  push32((uint32_t)(EAX));
  /* 113499e5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113499ea mov ecx, dword ptr [0x11370de4] */
  ECX = (r32((uint32_t)(0x11370de4)));
  /* 113499f0 push ecx */
  push32((uint32_t)(ECX));
  /* 113499f1 call 0x1134b740 */
  push32(0x113499f6u); f_1134b740();
  /* 113499f6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113499f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113499fb mov edx, dword ptr [0x11370b44] */
  EDX = (r32((uint32_t)(0x11370b44)));
  /* 11349a01 push edx */
  push32((uint32_t)(EDX));
  /* 11349a02 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11349a07 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 11349a0d push eax */
  push32((uint32_t)(EAX));
  /* 11349a0e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11349a13 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 11349a19 push ecx */
  push32((uint32_t)(ECX));
  /* 11349a1a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11349a1f mov edx, dword ptr [0x11370de4] */
  EDX = (r32((uint32_t)(0x11370de4)));
  /* 11349a25 push edx */
  push32((uint32_t)(EDX));
  /* 11349a26 call 0x1134b740 */
  push32(0x11349a2bu); f_1134b740();
  /* 11349a2b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11349a2e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11349a38 jmp 0x11349a49 */
  goto L_11349a49;
L_11349a3a:;
  /* 11349a3a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349a40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11349a43 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11349a49:;
  /* 11349a49 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349a53 jae 0x11349b04 */
  if (!C.cf) goto L_11349b04;
  /* 11349a59 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349a5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11349a61 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 11349a69 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11349a6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11349a6e je 0x11349aa6 */
  if (C.zf) goto L_11349aa6;
  /* 11349a70 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349a76 mov cl, byte ptr [eax + 0x11370ce1] */
  CL = (r8((uint32_t)(EAX + 0x11370ce1)));
  /* 11349a7c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11349a7f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349a85 mov byte ptr [edx + 0x11370ce1], cl */
  w8((uint32_t)(EDX + 0x11370ce1), (CL));
  /* 11349a8b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349a91 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349a97 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 11349a9e mov byte ptr [eax + 0x11370be0], dl */
  w8((uint32_t)(EAX + 0x11370be0), (DL));
  /* 11349aa4 jmp 0x11349aff */
  goto L_11349aff;
L_11349aa6:;
  /* 11349aa6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349aac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11349aae mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11349ab6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11349ab9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11349abb je 0x11349af2 */
  if (C.zf) goto L_11349af2;
  /* 11349abd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349ac3 mov al, byte ptr [edx + 0x11370ce1] */
  AL = (r8((uint32_t)(EDX + 0x11370ce1)));
  /* 11349ac9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11349acb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349ad1 mov byte ptr [ecx + 0x11370ce1], al */
  w8((uint32_t)(ECX + 0x11370ce1), (AL));
  /* 11349ad7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349add mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349ae3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 11349aea mov byte ptr [edx + 0x11370be0], cl */
  w8((uint32_t)(EDX + 0x11370be0), (CL));
  /* 11349af0 jmp 0x11349aff */
  goto L_11349aff;
L_11349af2:;
  /* 11349af2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349af8 mov byte ptr [edx + 0x11370be0], 0 */
  w8((uint32_t)(EDX + 0x11370be0), (0x0u));
L_11349aff:;
  /* 11349aff jmp 0x11349a3a */
  goto L_11349a3a;
L_11349b04:;
  /* 11349b04 jmp 0x11349bce */
  goto L_11349bce;
L_11349b09:;
  /* 11349b09 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11349b13 jmp 0x11349b24 */
  goto L_11349b24;
L_11349b15:;
  /* 11349b15 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349b1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11349b1e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11349b24:;
  /* 11349b24 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349b2e jae 0x11349bce */
  if (!C.cf) goto L_11349bce;
  /* 11349b34 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349b3b jb 0x11349b78 */
  if (C.cf) goto L_11349b78;
  /* 11349b3d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349b44 ja 0x11349b78 */
  if ((!C.cf&&!C.zf)) goto L_11349b78;
  /* 11349b46 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349b4c mov dl, byte ptr [ecx + 0x11370ce1] */
  DL = (r8((uint32_t)(ECX + 0x11370ce1)));
  /* 11349b52 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11349b55 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349b5b mov byte ptr [eax + 0x11370ce1], dl */
  w8((uint32_t)(EAX + 0x11370ce1), (DL));
  /* 11349b61 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349b67 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11349b6a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349b70 mov byte ptr [edx + 0x11370be0], cl */
  w8((uint32_t)(EDX + 0x11370be0), (CL));
  /* 11349b76 jmp 0x11349bc9 */
  goto L_11349bc9;
L_11349b78:;
  /* 11349b78 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349b7f jb 0x11349bbc */
  if (C.cf) goto L_11349bbc;
  /* 11349b81 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349b88 ja 0x11349bbc */
  if ((!C.cf&&!C.zf)) goto L_11349bbc;
  /* 11349b8a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349b90 mov cl, byte ptr [eax + 0x11370ce1] */
  CL = (r8((uint32_t)(EAX + 0x11370ce1)));
  /* 11349b96 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11349b99 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349b9f mov byte ptr [edx + 0x11370ce1], cl */
  w8((uint32_t)(EDX + 0x11370ce1), (CL));
  /* 11349ba5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349bab sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11349bae mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349bb4 mov byte ptr [ecx + 0x11370be0], al */
  w8((uint32_t)(ECX + 0x11370be0), (AL));
  /* 11349bba jmp 0x11349bc9 */
  goto L_11349bc9;
L_11349bbc:;
  /* 11349bbc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11349bc2 mov byte ptr [edx + 0x11370be0], 0 */
  w8((uint32_t)(EDX + 0x11370be0), (0x0u));
L_11349bc9:;
  /* 11349bc9 jmp 0x11349b15 */
  goto L_11349b15;
L_11349bce:;
  /* 11349bce mov esp, ebp */
  ESP = (EBP);
  /* 11349bd0 pop ebp */
  EBP = (pop32());
  /* 11349bd1 ret  */
  ESPCHK(0x113498d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009be0 @ 0x11349be0 (23 bytes, 9 insns) */
void f_11349be0(void) {
  FTRACE(0x11349be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11349be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11349be1 mov ebp, esp */
  EBP = (ESP);
  /* 11349be3 cmp dword ptr [0x11370bcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11370bcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349bea je 0x11349bf3 */
  if (C.zf) goto L_11349bf3;
  /* 11349bec mov eax, dword ptr [0x11370b44] */
  EAX = (r32((uint32_t)(0x11370b44)));
  /* 11349bf1 jmp 0x11349bf5 */
  goto L_11349bf5;
L_11349bf3:;
  /* 11349bf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11349bf5:;
  /* 11349bf5 pop ebp */
  EBP = (pop32());
  /* 11349bf6 ret  */
  ESPCHK(0x11349be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c00 @ 0x11349c00 (34 bytes, 10 insns) */
void f_11349c00(void) {
  FTRACE(0x11349c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11349c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11349c01 mov ebp, esp */
  EBP = (ESP);
  /* 11349c03 cmp dword ptr [0x11370f90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11370f90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349c0a jne 0x11349c20 */
  if (!C.zf) goto L_11349c20;
  /* 11349c0c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11349c0e call 0x11349420 */
  push32(0x11349c13u); f_11349420();
  /* 11349c13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11349c16 mov dword ptr [0x11370f90], 1 */
  w32((uint32_t)(0x11370f90), (0x1u));
L_11349c20:;
  /* 11349c20 pop ebp */
  EBP = (pop32());
  /* 11349c21 ret  */
  ESPCHK(0x11349c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c30 @ 0x11349c30 (664 bytes, 263 insns) [15 switch table(s)] */
void f_11349c30(void) {
  FTRACE(0x11349c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11349c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11349c31 mov ebp, esp */
  EBP = (ESP);
  /* 11349c33 push edi */
  push32((uint32_t)(EDI));
  /* 11349c34 push esi */
  push32((uint32_t)(ESI));
  /* 11349c35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11349c38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11349c3b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11349c3e mov eax, ecx */
  EAX = (ECX);
  /* 11349c40 mov edx, ecx */
  EDX = (ECX);
  /* 11349c42 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11349c44 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349c46 jbe 0x11349c50 */
  if ((C.cf||C.zf)) goto L_11349c50;
  /* 11349c48 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349c4a jb 0x11349dc8 */
  if (C.cf) goto L_11349dc8;
L_11349c50:;
  /* 11349c50 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11349c56 jne 0x11349c6c */
  if (!C.zf) goto L_11349c6c;
  /* 11349c58 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11349c5b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11349c5e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349c61 jb 0x11349c8c */
  if (C.cf) goto L_11349c8c;
  /* 11349c63 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11349c65 jmp dword ptr [edx*4 + 0x11349d78] */
  switch (EDX) {
    case 0: goto L_11349d88;
    case 1: goto L_11349d90;
    case 2: goto L_11349d9c;
    case 3: goto L_11349db0;
    default: x86_unimpl("switch@0x11349c65 out of table"); return;
  }
L_11349c6c:;
  /* 11349c6c mov eax, edi */
  EAX = (EDI);
  /* 11349c6e mov edx, 3 */
  EDX = (0x3u);
  /* 11349c73 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11349c76 jb 0x11349c84 */
  if (C.cf) goto L_11349c84;
  /* 11349c78 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11349c7b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11349c7d jmp dword ptr [eax*4 + 0x11349c90] */
  switch (EAX) {
    case 1: goto L_11349ca0;
    case 2: goto L_11349ccc;
    case 3: goto L_11349cf0;
    default: x86_unimpl("switch@0x11349c7d out of table"); return;
  }
L_11349c84:;
  /* 11349c84 jmp dword ptr [ecx*4 + 0x11349d88] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11349d88)))); return;
  /* 11349c8b nop  */
  /* nop */
L_11349c8c:;
  /* 11349c8c jmp dword ptr [ecx*4 + 0x11349d0c] */
  switch (ECX) {
    case 0: goto L_11349d6f;
    case 1: goto L_11349d5c;
    case 2: goto L_11349d54;
    case 3: goto L_11349d4c;
    case 4: goto L_11349d44;
    case 5: goto L_11349d3c;
    case 6: goto L_11349d34;
    case 7: goto L_11349d2c;
    default: x86_unimpl("switch@0x11349c8c out of table"); return;
  }
  /* 11349c93 nop  */
  /* nop */
L_11349ca0:;
  /* 11349ca0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11349ca2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11349ca4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11349ca6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11349ca9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11349cac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11349caf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11349cb2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11349cb5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11349cb8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11349cbb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349cbe jb 0x11349c8c */
  if (C.cf) goto L_11349c8c;
  /* 11349cc0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11349cc2 jmp dword ptr [edx*4 + 0x11349d78] */
  switch (EDX) {
    case 0: goto L_11349d88;
    case 1: goto L_11349d90;
    case 2: goto L_11349d9c;
    case 3: goto L_11349db0;
    default: x86_unimpl("switch@0x11349cc2 out of table"); return;
  }
  /* 11349cc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11349ccc:;
  /* 11349ccc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11349cce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11349cd0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11349cd2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11349cd5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11349cd8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11349cdb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11349cde add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11349ce1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349ce4 jb 0x11349c8c */
  if (C.cf) goto L_11349c8c;
  /* 11349ce6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11349ce8 jmp dword ptr [edx*4 + 0x11349d78] */
  switch (EDX) {
    case 0: goto L_11349d88;
    case 1: goto L_11349d90;
    case 2: goto L_11349d9c;
    case 3: goto L_11349db0;
    default: x86_unimpl("switch@0x11349ce8 out of table"); return;
  }
  /* 11349cef nop  */
  /* nop */
L_11349cf0:;
  /* 11349cf0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11349cf2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11349cf4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11349cf6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11349cf7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11349cfa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11349cfb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349cfe jb 0x11349c8c */
  if (C.cf) goto L_11349c8c;
  /* 11349d00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11349d02 jmp dword ptr [edx*4 + 0x11349d78] */
  switch (EDX) {
    case 0: goto L_11349d88;
    case 1: goto L_11349d90;
    case 2: goto L_11349d9c;
    case 3: goto L_11349db0;
    default: x86_unimpl("switch@0x11349d02 out of table"); return;
  }
  /* 11349d09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11349d2c:;
  /* 11349d2c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11349d30 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11349d34:;
  /* 11349d34 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11349d38 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11349d3c:;
  /* 11349d3c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11349d40 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11349d44:;
  /* 11349d44 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11349d48 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11349d4c:;
  /* 11349d4c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11349d50 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11349d54:;
  /* 11349d54 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11349d58 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11349d5c:;
  /* 11349d5c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11349d60 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11349d64 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11349d6b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11349d6d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11349d6f:;
  /* 11349d6f jmp dword ptr [edx*4 + 0x11349d78] */
  switch (EDX) {
    case 0: goto L_11349d88;
    case 1: goto L_11349d90;
    case 2: goto L_11349d9c;
    case 3: goto L_11349db0;
    default: x86_unimpl("switch@0x11349d6f out of table"); return;
  }
  /* 11349d76 mov edi, edi */
  EDI = (EDI);
L_11349d88:;
  /* 11349d88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11349d8b pop esi */
  ESI = (pop32());
  /* 11349d8c pop edi */
  EDI = (pop32());
  /* 11349d8d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11349d8e ret  */
  ESPCHK(0x11349c30u, _esp0);
  ESP += 4; return;
  /* 11349d8f nop  */
  /* nop */
L_11349d90:;
  /* 11349d90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11349d92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11349d94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11349d97 pop esi */
  ESI = (pop32());
  /* 11349d98 pop edi */
  EDI = (pop32());
  /* 11349d99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11349d9a ret  */
  ESPCHK(0x11349c30u, _esp0);
  ESP += 4; return;
  /* 11349d9b nop  */
  /* nop */
L_11349d9c:;
  /* 11349d9c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11349d9e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11349da0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11349da3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11349da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11349da9 pop esi */
  ESI = (pop32());
  /* 11349daa pop edi */
  EDI = (pop32());
  /* 11349dab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11349dac ret  */
  ESPCHK(0x11349c30u, _esp0);
  ESP += 4; return;
  /* 11349dad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11349db0:;
  /* 11349db0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11349db2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11349db4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11349db7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11349dba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11349dbd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11349dc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11349dc3 pop esi */
  ESI = (pop32());
  /* 11349dc4 pop edi */
  EDI = (pop32());
  /* 11349dc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11349dc6 ret  */
  ESPCHK(0x11349c30u, _esp0);
  ESP += 4; return;
  /* 11349dc7 nop  */
  /* nop */
L_11349dc8:;
  /* 11349dc8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11349dcc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11349dd0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11349dd6 jne 0x11349dfc */
  if (!C.zf) goto L_11349dfc;
  /* 11349dd8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11349ddb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11349dde cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349de1 jb 0x11349df0 */
  if (C.cf) goto L_11349df0;
  /* 11349de3 std  */
  C.df=1;
  /* 11349de4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11349de6 cld  */
  C.df=0;
  /* 11349de7 jmp dword ptr [edx*4 + 0x11349f10] */
  switch (EDX) {
    case 0: goto L_11349f20;
    case 1: goto L_11349f28;
    case 2: goto L_11349f38;
    case 3: goto L_11349f4c;
    default: x86_unimpl("switch@0x11349de7 out of table"); return;
  }
  /* 11349dee mov edi, edi */
  EDI = (EDI);
L_11349df0:;
  /* 11349df0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11349df2 jmp dword ptr [ecx*4 + 0x11349ec0] */
  switch (ECX) {
    case 0: goto L_11349f07;
    default: x86_unimpl("switch@0x11349df2 out of table"); return;
  }
  /* 11349df9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11349dfc:;
  /* 11349dfc mov eax, edi */
  EAX = (EDI);
  /* 11349dfe mov edx, 3 */
  EDX = (0x3u);
  /* 11349e03 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349e06 jb 0x11349e14 */
  if (C.cf) goto L_11349e14;
  /* 11349e08 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11349e0b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11349e0d jmp dword ptr [eax*4 + 0x11349e18] */
  switch (EAX) {
    case 1: goto L_11349e28;
    case 2: goto L_11349e48;
    case 3: goto L_11349e70;
    default: x86_unimpl("switch@0x11349e0d out of table"); return;
  }
L_11349e14:;
  /* 11349e14 jmp dword ptr [ecx*4 + 0x11349f10] */
  switch (ECX) {
    case 0: goto L_11349f20;
    case 1: goto L_11349f28;
    case 2: goto L_11349f38;
    case 3: goto L_11349f4c;
    default: x86_unimpl("switch@0x11349e14 out of table"); return;
  }
  /* 11349e1b nop  */
  /* nop */
L_11349e28:;
  /* 11349e28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11349e2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11349e2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11349e30 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11349e31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11349e34 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11349e35 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349e38 jb 0x11349df0 */
  if (C.cf) goto L_11349df0;
  /* 11349e3a std  */
  C.df=1;
  /* 11349e3b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11349e3d cld  */
  C.df=0;
  /* 11349e3e jmp dword ptr [edx*4 + 0x11349f10] */
  switch (EDX) {
    case 0: goto L_11349f20;
    case 1: goto L_11349f28;
    case 2: goto L_11349f38;
    case 3: goto L_11349f4c;
    default: x86_unimpl("switch@0x11349e3e out of table"); return;
  }
  /* 11349e45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11349e48:;
  /* 11349e48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11349e4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11349e4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11349e50 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11349e53 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11349e56 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11349e59 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11349e5c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11349e5f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349e62 jb 0x11349df0 */
  if (C.cf) goto L_11349df0;
  /* 11349e64 std  */
  C.df=1;
  /* 11349e65 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11349e67 cld  */
  C.df=0;
  /* 11349e68 jmp dword ptr [edx*4 + 0x11349f10] */
  switch (EDX) {
    case 0: goto L_11349f20;
    case 1: goto L_11349f28;
    case 2: goto L_11349f38;
    case 3: goto L_11349f4c;
    default: x86_unimpl("switch@0x11349e68 out of table"); return;
  }
  /* 11349e6f nop  */
  /* nop */
L_11349e70:;
  /* 11349e70 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11349e73 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11349e75 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11349e78 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11349e7b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11349e7e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11349e81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11349e84 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11349e87 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11349e8a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11349e8d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349e90 jb 0x11349df0 */
  if (C.cf) goto L_11349df0;
  /* 11349e96 std  */
  C.df=1;
  /* 11349e97 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11349e99 cld  */
  C.df=0;
  /* 11349e9a jmp dword ptr [edx*4 + 0x11349f10] */
  switch (EDX) {
    case 0: goto L_11349f20;
    case 1: goto L_11349f28;
    case 2: goto L_11349f38;
    case 3: goto L_11349f4c;
    default: x86_unimpl("switch@0x11349e9a out of table"); return;
  }
  /* 11349ea1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11349ea4 les ebx, ptr [esi - 0x6133eecc] */
  x86_unimpl("les @ 0x11349ea4");
  /* 11349eaa xor al, 0x11 */
  { uint32_t _r=(AL)^(0x11u); AL = (_r); fl_logic(_r,8); }
  /* 11349eac aam 0x9e */
  x86_unimpl("aam @ 0x11349eac");
  /* 11349eae xor al, 0x11 */
  { uint32_t _r=(AL)^(0x11u); AL = (_r); fl_logic(_r,8); }
  /* 11349eb0 fcomp qword ptr [esi - 0x611beecc] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ESI + -0x611beecc)));
  (void)fpu_pop();
  /* 11349eb6 xor al, 0x11 */
  { uint32_t _r=(AL)^(0x11u); AL = (_r); fl_logic(_r,8); }
  /* 11349eb8 in al, dx */
  x86_unimpl("in @ 0x11349eb8");
  /* 11349eb9 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11349eba xor al, 0x11 */
  { uint32_t _r=(AL)^(0x11u); AL = (_r); fl_logic(_r,8); }
  /* 11349ebc hlt  */
  x86_unimpl("hlt @ 0x11349ebc");
  /* 11349ebd sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11349ebe xor al, 0x11 */
  { uint32_t _r=(AL)^(0x11u); AL = (_r); fl_logic(_r,8); }
  /* 11349ec4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11349ec8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11349ecc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11349ed0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11349ed4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11349ed8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11349edc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11349ee0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11349ee4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11349ee8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11349eec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11349ef0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11349ef4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11349ef8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11349efc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11349f03 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11349f05 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11349f07:;
  /* 11349f07 jmp dword ptr [edx*4 + 0x11349f10] */
  switch (EDX) {
    case 0: goto L_11349f20;
    case 1: goto L_11349f28;
    case 2: goto L_11349f38;
    case 3: goto L_11349f4c;
    default: x86_unimpl("switch@0x11349f07 out of table"); return;
  }
  /* 11349f0e mov edi, edi */
  EDI = (EDI);
L_11349f20:;
  /* 11349f20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11349f23 pop esi */
  ESI = (pop32());
  /* 11349f24 pop edi */
  EDI = (pop32());
  /* 11349f25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11349f26 ret  */
  ESPCHK(0x11349c30u, _esp0);
  ESP += 4; return;
  /* 11349f27 nop  */
  /* nop */
L_11349f28:;
  /* 11349f28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11349f2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11349f2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11349f31 pop esi */
  ESI = (pop32());
  /* 11349f32 pop edi */
  EDI = (pop32());
  /* 11349f33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11349f34 ret  */
  ESPCHK(0x11349c30u, _esp0);
  ESP += 4; return;
  /* 11349f35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11349f38:;
  /* 11349f38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11349f3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11349f3e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11349f41 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11349f44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11349f47 pop esi */
  ESI = (pop32());
  /* 11349f48 pop edi */
  EDI = (pop32());
  /* 11349f49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11349f4a ret  */
  ESPCHK(0x11349c30u, _esp0);
  ESP += 4; return;
  /* 11349f4b nop  */
  /* nop */
L_11349f4c:;
  /* 11349f4c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11349f4f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11349f52 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11349f55 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11349f58 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11349f5b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11349f5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11349f61 pop esi */
  ESI = (pop32());
  /* 11349f62 pop edi */
  EDI = (pop32());
  /* 11349f63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11349f64 ret  */
  ESPCHK(0x11349c30u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x11349f70 (104 bytes, 43 insns) */
void f_11349f70(void) {
  FTRACE(0x11349f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11349f70 push ebx */
  push32((uint32_t)(EBX));
  /* 11349f71 push esi */
  push32((uint32_t)(ESI));
  /* 11349f72 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11349f76 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11349f78 jne 0x11349f92 */
  if (!C.zf) goto L_11349f92;
  /* 11349f7a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11349f7e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11349f82 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11349f84 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11349f86 mov ebx, eax */
  EBX = (EAX);
  /* 11349f88 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11349f8c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11349f8e mov edx, ebx */
  EDX = (EBX);
  /* 11349f90 jmp 0x11349fd3 */
  goto L_11349fd3;
L_11349f92:;
  /* 11349f92 mov ecx, eax */
  ECX = (EAX);
  /* 11349f94 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11349f98 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11349f9c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_11349fa0:;
  /* 11349fa0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11349fa2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11349fa4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11349fa6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11349fa8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11349faa jne 0x11349fa0 */
  if (!C.zf) goto L_11349fa0;
  /* 11349fac div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11349fae mov esi, eax */
  ESI = (EAX);
  /* 11349fb0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11349fb4 mov ecx, eax */
  ECX = (EAX);
  /* 11349fb6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11349fba mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11349fbc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11349fbe jb 0x11349fce */
  if (C.cf) goto L_11349fce;
  /* 11349fc0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349fc4 ja 0x11349fce */
  if ((!C.cf&&!C.zf)) goto L_11349fce;
  /* 11349fc6 jb 0x11349fcf */
  if (C.cf) goto L_11349fcf;
  /* 11349fc8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11349fcc jbe 0x11349fcf */
  if ((C.cf||C.zf)) goto L_11349fcf;
L_11349fce:;
  /* 11349fce dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_11349fcf:;
  /* 11349fcf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11349fd1 mov eax, esi */
  EAX = (ESI);
L_11349fd3:;
  /* 11349fd3 pop esi */
  ESI = (pop32());
  /* 11349fd4 pop ebx */
  EBX = (pop32());
  /* 11349fd5 ret 0x10 */
  ESPCHK(0x11349f70u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x11349fe0 (117 bytes, 44 insns) */
void f_11349fe0(void) {
  FTRACE(0x11349fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11349fe0 push ebx */
  push32((uint32_t)(EBX));
  /* 11349fe1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11349fe5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11349fe7 jne 0x1134a001 */
  if (!C.zf) goto L_1134a001;
  /* 11349fe9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11349fed mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11349ff1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11349ff3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11349ff5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11349ff9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11349ffb mov eax, edx */
  EAX = (EDX);
  /* 11349ffd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11349fff jmp 0x1134a051 */
  goto L_1134a051;
L_1134a001:;
  /* 1134a001 mov ecx, eax */
  ECX = (EAX);
  /* 1134a003 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1134a007 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1134a00b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1134a00f:;
  /* 1134a00f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1134a011 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1134a013 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1134a015 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1134a017 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134a019 jne 0x1134a00f */
  if (!C.zf) goto L_1134a00f;
  /* 1134a01b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1134a01d mov ecx, eax */
  ECX = (EAX);
  /* 1134a01f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1134a023 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1134a024 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1134a028 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a02a jb 0x1134a03a */
  if (C.cf) goto L_1134a03a;
  /* 1134a02c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a030 ja 0x1134a03a */
  if ((!C.cf&&!C.zf)) goto L_1134a03a;
  /* 1134a032 jb 0x1134a042 */
  if (C.cf) goto L_1134a042;
  /* 1134a034 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a038 jbe 0x1134a042 */
  if ((C.cf||C.zf)) goto L_1134a042;
L_1134a03a:;
  /* 1134a03a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134a03e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1134a042:;
  /* 1134a042 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134a046 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134a04a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134a04c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134a04e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1134a051:;
  /* 1134a051 pop ebx */
  EBX = (pop32());
  /* 1134a052 ret 0x10 */
  ESPCHK(0x11349fe0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000a060 @ 0x1134a060 (628 bytes, 214 insns) */
void f_1134a060(void) {
  FTRACE(0x1134a060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134a060 push ebp */
  push32((uint32_t)(EBP));
  /* 1134a061 mov ebp, esp */
  EBP = (ESP);
  /* 1134a063 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134a066 push ebx */
  push32((uint32_t)(EBX));
  /* 1134a067 push esi */
  push32((uint32_t)(ESI));
  /* 1134a068 push edi */
  push32((uint32_t)(EDI));
L_1134a069:;
  /* 1134a069 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a06d jne 0x1134a08d */
  if (!C.zf) goto L_1134a08d;
  /* 1134a06f push 0x1136aefc */
  push32((uint32_t)(0x1136aefcu));
  /* 1134a074 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134a076 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1134a078 push 0x1136aef0 */
  push32((uint32_t)(0x1136aef0u));
  /* 1134a07d push 2 */
  push32((uint32_t)(0x2u));
  /* 1134a07f call 0x11342410 */
  push32(0x1134a084u); f_11342410();
  /* 1134a084 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a087 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a08a jne 0x1134a08d */
  if (!C.zf) goto L_1134a08d;
  /* 1134a08c int3  */
  x86_unimpl("int3 @ 0x1134a08c");
L_1134a08d:;
  /* 1134a08d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134a08f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134a091 jne 0x1134a069 */
  if (!C.zf) goto L_1134a069;
  /* 1134a093 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134a096 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134a099 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a09c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1134a09f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1134a0a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a0a5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1134a0a8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1134a0ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134a0b0 je 0x1134a0bf */
  if (C.zf) goto L_1134a0bf;
  /* 1134a0b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a0b5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1134a0b8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1134a0bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134a0bd je 0x1134a0d5 */
  if (C.zf) goto L_1134a0d5;
L_1134a0bf:;
  /* 1134a0bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a0c2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1134a0c5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1134a0c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a0ca mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1134a0cd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134a0d0 jmp 0x1134a2cd */
  goto L_1134a2cd;
L_1134a0d5:;
  /* 1134a0d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a0d8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1134a0db and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1134a0de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134a0e0 je 0x1134a12c */
  if (C.zf) goto L_1134a12c;
  /* 1134a0e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a0e5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1134a0ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a0ef mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1134a0f2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1134a0f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134a0f7 je 0x1134a115 */
  if (C.zf) goto L_1134a115;
  /* 1134a0f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a0fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a0ff mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1134a102 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1134a104 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a107 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1134a10a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1134a10d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a110 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1134a113 jmp 0x1134a12c */
  goto L_1134a12c;
L_1134a115:;
  /* 1134a115 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a118 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1134a11b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1134a11e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a121 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1134a124 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134a127 jmp 0x1134a2cd */
  goto L_1134a2cd;
L_1134a12c:;
  /* 1134a12c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a12f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1134a132 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1134a135 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a138 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1134a13b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a13e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1134a141 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1134a144 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a147 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1134a14a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a14d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1134a154 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1134a15b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a15e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1134a161 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a164 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1134a167 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1134a16d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134a16f jne 0x1134a19f */
  if (!C.zf) goto L_1134a19f;
  /* 1134a171 cmp dword ptr [ebp - 8], 0x1136e140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1136e140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a178 je 0x1134a183 */
  if (C.zf) goto L_1134a183;
  /* 1134a17a cmp dword ptr [ebp - 8], 0x1136e160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1136e160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a181 jne 0x1134a193 */
  if (!C.zf) goto L_1134a193;
L_1134a183:;
  /* 1134a183 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134a186 push edx */
  push32((uint32_t)(EDX));
  /* 1134a187 call 0x1134bfd0 */
  push32(0x1134a18cu); f_1134bfd0();
  /* 1134a18c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a18f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134a191 jne 0x1134a19f */
  if (!C.zf) goto L_1134a19f;
L_1134a193:;
  /* 1134a193 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a196 push eax */
  push32((uint32_t)(EAX));
  /* 1134a197 call 0x1134bf00 */
  push32(0x1134a19cu); f_1134bf00();
  /* 1134a19c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134a19f:;
  /* 1134a19f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a1a2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1134a1a5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1134a1ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134a1ad je 0x1134a28b */
  if (C.zf) goto L_1134a28b;
L_1134a1b3:;
  /* 1134a1b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a1b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a1b9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1134a1bb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134a1be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134a1c0 jge 0x1134a1e3 */
  if ((C.sf==C.of)) goto L_1134a1e3;
  /* 1134a1c2 push 0x1136aeb0 */
  push32((uint32_t)(0x1136aeb0u));
  /* 1134a1c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134a1c9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1134a1ce push 0x1136aef0 */
  push32((uint32_t)(0x1136aef0u));
  /* 1134a1d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134a1d5 call 0x11342410 */
  push32(0x1134a1dau); f_11342410();
  /* 1134a1da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a1dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a1e0 jne 0x1134a1e3 */
  if (!C.zf) goto L_1134a1e3;
  /* 1134a1e2 int3  */
  x86_unimpl("int3 @ 0x1134a1e2");
L_1134a1e3:;
  /* 1134a1e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134a1e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134a1e7 jne 0x1134a1b3 */
  if (!C.zf) goto L_1134a1b3;
  /* 1134a1e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a1ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a1ef mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1134a1f1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134a1f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134a1f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a1fa mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1134a1fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a200 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a203 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1134a205 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a208 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1134a20b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134a20e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a211 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1134a214 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a218 jle 0x1134a236 */
  if ((C.zf||C.sf!=C.of)) goto L_1134a236;
  /* 1134a21a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a21d push ecx */
  push32((uint32_t)(ECX));
  /* 1134a21e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a221 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1134a224 push eax */
  push32((uint32_t)(EAX));
  /* 1134a225 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134a228 push ecx */
  push32((uint32_t)(ECX));
  /* 1134a229 call 0x1134bbf0 */
  push32(0x1134a22eu); f_1134bbf0();
  /* 1134a22e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a231 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1134a234 jmp 0x1134a27e */
  goto L_1134a27e;
L_1134a236:;
  /* 1134a236 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a23a je 0x1134a259 */
  if (C.zf) goto L_1134a259;
  /* 1134a23c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134a23f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1134a242 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134a245 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1134a248 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134a24b mov ecx, dword ptr [edx*4 + 0x11370e40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11370e40)));
  /* 1134a252 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a254 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1134a257 jmp 0x1134a260 */
  goto L_1134a260;
L_1134a259:;
  /* 1134a259 mov dword ptr [ebp - 0x14], 0x1136da60 */
  w32((uint32_t)(EBP + -0x14), (0x1136da60u));
L_1134a260:;
  /* 1134a260 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1134a263 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1134a267 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1134a26a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134a26c je 0x1134a27e */
  if (C.zf) goto L_1134a27e;
  /* 1134a26e push 2 */
  push32((uint32_t)(0x2u));
  /* 1134a270 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134a272 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134a275 push ecx */
  push32((uint32_t)(ECX));
  /* 1134a276 call 0x1134baa0 */
  push32(0x1134a27bu); f_1134baa0();
  /* 1134a27b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134a27e:;
  /* 1134a27e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a281 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1134a284 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1134a287 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1134a289 jmp 0x1134a2a9 */
  goto L_1134a2a9;
L_1134a28b:;
  /* 1134a28b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1134a292 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a295 push edx */
  push32((uint32_t)(EDX));
  /* 1134a296 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1134a299 push eax */
  push32((uint32_t)(EAX));
  /* 1134a29a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134a29d push ecx */
  push32((uint32_t)(ECX));
  /* 1134a29e call 0x1134bbf0 */
  push32(0x1134a2a3u); f_1134bbf0();
  /* 1134a2a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a2a6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1134a2a9:;
  /* 1134a2a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134a2ac cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a2af je 0x1134a2c5 */
  if (C.zf) goto L_1134a2c5;
  /* 1134a2b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a2b4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1134a2b7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1134a2ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a2bd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1134a2c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134a2c3 jmp 0x1134a2cd */
  goto L_1134a2cd;
L_1134a2c5:;
  /* 1134a2c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134a2c8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1134a2cd:;
  /* 1134a2cd pop edi */
  EDI = (pop32());
  /* 1134a2ce pop esi */
  ESI = (pop32());
  /* 1134a2cf pop ebx */
  EBX = (pop32());
  /* 1134a2d0 mov esp, ebp */
  ESP = (EBP);
  /* 1134a2d2 pop ebp */
  EBP = (pop32());
  /* 1134a2d3 ret  */
  ESPCHK(0x1134a060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2e0 @ 0x1134a2e0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1134a2e0(void) {
  FTRACE(0x1134a2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134a2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134a2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1134a2e3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134a2e9 push ebx */
  push32((uint32_t)(EBX));
  /* 1134a2ea push esi */
  push32((uint32_t)(ESI));
  /* 1134a2eb push edi */
  push32((uint32_t)(EDI));
  /* 1134a2ec mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1134a2f3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1134a2fd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1134a304:;
  /* 1134a304 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134a307 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1134a309 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1134a30c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1134a310 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134a313 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a316 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1134a319 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134a31b je 0x1134aef7 */
  if (C.zf) goto L_1134aef7;
  /* 1134a321 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a328 jl 0x1134aef7 */
  if ((C.sf!=C.of)) goto L_1134aef7;
  /* 1134a32e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1134a332 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a335 jl 0x1134a356 */
  if ((C.sf!=C.of)) goto L_1134a356;
  /* 1134a337 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1134a33b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a33e jg 0x1134a356 */
  if ((!C.zf&&C.sf==C.of)) goto L_1134a356;
  /* 1134a340 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1134a344 movsx ecx, byte ptr [eax + 0x1136aee8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1136aee8))));
  /* 1134a34b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1134a34e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1134a354 jmp 0x1134a360 */
  goto L_1134a360;
L_1134a356:;
  /* 1134a356 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1134a360:;
  /* 1134a360 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1134a366 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1134a369 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134a36c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134a36f movsx edx, byte ptr [ecx + eax*8 + 0x1136af08] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1136af08))));
  /* 1134a377 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1134a37a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1134a37d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134a380 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1134a386 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a38d ja 0x1134aef2 */
  if ((!C.cf&&!C.zf)) goto L_1134aef2;
  /* 1134a393 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1134a399 jmp dword ptr [ecx*4 + 0x1134af04] */
  switch (ECX) {
    case 0: goto L_1134a3a0;
    case 1: goto L_1134a43a;
    case 2: goto L_1134a47c;
    case 3: goto L_1134a4eb;
    case 4: goto L_1134a543;
    case 5: goto L_1134a552;
    case 6: goto L_1134a59e;
    case 7: goto L_1134a631;
    case 8: goto L_1134a4c8;
    case 9: goto L_1134a4d3;
    case 10: goto L_1134a4be;
    case 11: goto L_1134a4b3;
    case 12: goto L_1134a4de;
    case 13: goto L_1134a4e6;
    default: x86_unimpl("switch@0x1134a399 out of table"); return;
  }
L_1134a3a0:;
  /* 1134a3a0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1134a3a7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1134a3aa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1134a3b0 mov eax, dword ptr [0x1136dc98] */
  EAX = (r32((uint32_t)(0x1136dc98)));
  /* 1134a3b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134a3b7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1134a3bb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1134a3c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134a3c3 je 0x1134a41d */
  if (C.zf) goto L_1134a41d;
  /* 1134a3c5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1134a3cb push edx */
  push32((uint32_t)(EDX));
  /* 1134a3cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134a3cf push eax */
  push32((uint32_t)(EAX));
  /* 1134a3d0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1134a3d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1134a3d5 call 0x1134b010 */
  push32(0x1134a3dau); f_1134b010();
  /* 1134a3da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a3dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134a3e0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1134a3e2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1134a3e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134a3e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a3eb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1134a3ee:;
  /* 1134a3ee movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1134a3f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134a3f4 jne 0x1134a417 */
  if (!C.zf) goto L_1134a417;
  /* 1134a3f6 push 0x1136af88 */
  push32((uint32_t)(0x1136af88u));
  /* 1134a3fb push 0 */
  push32((uint32_t)(0x0u));
  /* 1134a3fd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1134a402 push 0x1136af7c */
  push32((uint32_t)(0x1136af7cu));
  /* 1134a407 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134a409 call 0x11342410 */
  push32(0x1134a40eu); f_11342410();
  /* 1134a40e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a411 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a414 jne 0x1134a417 */
  if (!C.zf) goto L_1134a417;
  /* 1134a416 int3  */
  x86_unimpl("int3 @ 0x1134a416");
L_1134a417:;
  /* 1134a417 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134a419 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134a41b jne 0x1134a3ee */
  if (!C.zf) goto L_1134a3ee;
L_1134a41d:;
  /* 1134a41d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1134a423 push ecx */
  push32((uint32_t)(ECX));
  /* 1134a424 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134a427 push edx */
  push32((uint32_t)(EDX));
  /* 1134a428 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1134a42c push eax */
  push32((uint32_t)(EAX));
  /* 1134a42d call 0x1134b010 */
  push32(0x1134a432u); f_1134b010();
  /* 1134a432 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a435 jmp 0x1134aef2 */
  goto L_1134aef2;
L_1134a43a:;
  /* 1134a43a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1134a441 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a444 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1134a44a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1134a450 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1134a456 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1134a45c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1134a45f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1134a466 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1134a470 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1134a477 jmp 0x1134aef2 */
  goto L_1134aef2;
L_1134a47c:;
  /* 1134a47c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1134a480 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1134a486 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1134a48c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134a48f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1134a495 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a49c ja 0x1134a4e6 */
  if ((!C.cf&&!C.zf)) goto L_1134a4e6;
  /* 1134a49e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1134a4a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134a4a6 mov al, byte ptr [ecx + 0x1134af3c] */
  AL = (r8((uint32_t)(ECX + 0x1134af3c)));
  /* 1134a4ac jmp dword ptr [eax*4 + 0x1134af24] */
  switch (EAX) {
    case 0: goto L_1134a4c8;
    case 1: goto L_1134a4d3;
    case 2: goto L_1134a4be;
    case 3: goto L_1134a4b3;
    case 4: goto L_1134a4de;
    case 5: goto L_1134a4e6;
    default: x86_unimpl("switch@0x1134a4ac out of table"); return;
  }
L_1134a4b3:;
  /* 1134a4b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a4b6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1134a4b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1134a4bc jmp 0x1134a4e6 */
  goto L_1134a4e6;
L_1134a4be:;
  /* 1134a4be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a4c1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1134a4c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134a4c6 jmp 0x1134a4e6 */
  goto L_1134a4e6;
L_1134a4c8:;
  /* 1134a4c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a4cb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1134a4ce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1134a4d1 jmp 0x1134a4e6 */
  goto L_1134a4e6;
L_1134a4d3:;
  /* 1134a4d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a4d6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1134a4d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1134a4dc jmp 0x1134a4e6 */
  goto L_1134a4e6;
L_1134a4de:;
  /* 1134a4de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a4e1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1134a4e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1134a4e6:;
  /* 1134a4e6 jmp 0x1134aef2 */
  goto L_1134aef2;
L_1134a4eb:;
  /* 1134a4eb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1134a4ef cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a4f2 jne 0x1134a527 */
  if (!C.zf) goto L_1134a527;
  /* 1134a4f4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1134a4f7 push edx */
  push32((uint32_t)(EDX));
  /* 1134a4f8 call 0x1134b120 */
  push32(0x1134a4fdu); f_1134b120();
  /* 1134a4fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a500 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1134a506 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a50d jge 0x1134a525 */
  if ((C.sf==C.of)) goto L_1134a525;
  /* 1134a50f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a512 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1134a514 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134a517 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1134a51d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134a51f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1134a525:;
  /* 1134a525 jmp 0x1134a53e */
  goto L_1134a53e;
L_1134a527:;
  /* 1134a527 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1134a52d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134a530 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1134a534 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1134a538 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1134a53e:;
  /* 1134a53e jmp 0x1134aef2 */
  goto L_1134aef2;
L_1134a543:;
  /* 1134a543 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1134a54d jmp 0x1134aef2 */
  goto L_1134aef2;
L_1134a552:;
  /* 1134a552 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1134a556 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a559 jne 0x1134a582 */
  if (!C.zf) goto L_1134a582;
  /* 1134a55b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1134a55e push eax */
  push32((uint32_t)(EAX));
  /* 1134a55f call 0x1134b120 */
  push32(0x1134a564u); f_1134b120();
  /* 1134a564 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a567 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1134a56d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a574 jge 0x1134a580 */
  if ((C.sf==C.of)) goto L_1134a580;
  /* 1134a576 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1134a580:;
  /* 1134a580 jmp 0x1134a599 */
  goto L_1134a599;
L_1134a582:;
  /* 1134a582 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1134a588 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134a58b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1134a58f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1134a593 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1134a599:;
  /* 1134a599 jmp 0x1134aef2 */
  goto L_1134aef2;
L_1134a59e:;
  /* 1134a59e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1134a5a2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1134a5a8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1134a5ae sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134a5b1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1134a5b7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a5be ja 0x1134a62c */
  if ((!C.cf&&!C.zf)) goto L_1134a62c;
  /* 1134a5c0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1134a5c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134a5c8 mov al, byte ptr [ecx + 0x1134af61] */
  AL = (r8((uint32_t)(ECX + 0x1134af61)));
  /* 1134a5ce jmp dword ptr [eax*4 + 0x1134af4d] */
  switch (EAX) {
    case 0: goto L_1134a5e0;
    case 1: goto L_1134a619;
    case 2: goto L_1134a5d5;
    case 3: goto L_1134a623;
    case 4: goto L_1134a62c;
    default: x86_unimpl("switch@0x1134a5ce out of table"); return;
  }
L_1134a5d5:;
  /* 1134a5d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a5d8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1134a5db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1134a5de jmp 0x1134a62c */
  goto L_1134a62c;
L_1134a5e0:;
  /* 1134a5e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134a5e3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134a5e6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a5e9 jne 0x1134a60b */
  if (!C.zf) goto L_1134a60b;
  /* 1134a5eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134a5ee movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1134a5f2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a5f5 jne 0x1134a60b */
  if (!C.zf) goto L_1134a60b;
  /* 1134a5f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134a5fa add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a5fd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1134a600 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a603 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1134a606 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1134a609 jmp 0x1134a617 */
  goto L_1134a617;
L_1134a60b:;
  /* 1134a60b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1134a612 jmp 0x1134a3a0 */
  goto L_1134a3a0;
L_1134a617:;
  /* 1134a617 jmp 0x1134a62c */
  goto L_1134a62c;
L_1134a619:;
  /* 1134a619 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a61c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1134a61e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134a621 jmp 0x1134a62c */
  goto L_1134a62c;
L_1134a623:;
  /* 1134a623 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a626 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1134a629 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1134a62c:;
  /* 1134a62c jmp 0x1134aef2 */
  goto L_1134aef2;
L_1134a631:;
  /* 1134a631 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1134a635 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1134a63b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1134a641 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134a644 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1134a64a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a651 ja 0x1134ad17 */
  if ((!C.cf&&!C.zf)) goto L_1134ad17;
  /* 1134a657 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1134a65d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134a65f mov cl, byte ptr [edx + 0x1134afcc] */
  CL = (r8((uint32_t)(EDX + 0x1134afcc)));
  /* 1134a665 jmp dword ptr [ecx*4 + 0x1134af90] */
  switch (ECX) {
    case 0: goto L_1134a66c;
    case 1: goto L_1134a900;
    case 2: goto L_1134a790;
    case 3: goto L_1134aa39;
    case 4: goto L_1134a6fb;
    case 5: goto L_1134a681;
    case 6: goto L_1134aa0b;
    case 7: goto L_1134a910;
    case 8: goto L_1134a8b5;
    case 9: goto L_1134aa85;
    case 10: goto L_1134aa2f;
    case 11: goto L_1134a7a6;
    case 12: goto L_1134aa23;
    case 13: goto L_1134aa45;
    case 14: goto L_1134ad17;
    default: x86_unimpl("switch@0x1134a665 out of table"); return;
  }
L_1134a66c:;
  /* 1134a66c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a66f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1134a674 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134a676 jne 0x1134a681 */
  if (!C.zf) goto L_1134a681;
  /* 1134a678 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a67b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1134a67e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1134a681:;
  /* 1134a681 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a684 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1134a68a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134a68c je 0x1134a6c7 */
  if (C.zf) goto L_1134a6c7;
  /* 1134a68e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1134a691 push eax */
  push32((uint32_t)(EAX));
  /* 1134a692 call 0x1134b160 */
  push32(0x1134a697u); f_1134b160();
  /* 1134a697 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a69a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1134a69e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1134a6a2 push ecx */
  push32((uint32_t)(ECX));
  /* 1134a6a3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1134a6a9 push edx */
  push32((uint32_t)(EDX));
  /* 1134a6aa call 0x1134c240 */
  push32(0x1134a6afu); f_1134c240();
  /* 1134a6af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a6b2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1134a6b5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a6b9 jge 0x1134a6c5 */
  if ((C.sf==C.of)) goto L_1134a6c5;
  /* 1134a6bb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1134a6c5:;
  /* 1134a6c5 jmp 0x1134a6ed */
  goto L_1134a6ed;
L_1134a6c7:;
  /* 1134a6c7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1134a6ca push eax */
  push32((uint32_t)(EAX));
  /* 1134a6cb call 0x1134b120 */
  push32(0x1134a6d0u); f_1134b120();
  /* 1134a6d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a6d3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1134a6da mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1134a6e0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1134a6e6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1134a6ed:;
  /* 1134a6ed lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1134a6f3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1134a6f6 jmp 0x1134ad17 */
  goto L_1134ad17;
L_1134a6fb:;
  /* 1134a6fb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1134a6fe push eax */
  push32((uint32_t)(EAX));
  /* 1134a6ff call 0x1134b120 */
  push32(0x1134a704u); f_1134b120();
  /* 1134a704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a707 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1134a70d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a714 je 0x1134a722 */
  if (C.zf) goto L_1134a722;
  /* 1134a716 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1134a71c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a720 jne 0x1134a73c */
  if (!C.zf) goto L_1134a73c;
L_1134a722:;
  /* 1134a722 mov edx, dword ptr [0x1136dfb0] */
  EDX = (r32((uint32_t)(0x1136dfb0)));
  /* 1134a728 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1134a72b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134a72e push eax */
  push32((uint32_t)(EAX));
  /* 1134a72f call 0x11346180 */
  push32(0x1134a734u); f_11346180();
  /* 1134a734 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a737 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1134a73a jmp 0x1134a78b */
  goto L_1134a78b;
L_1134a73c:;
  /* 1134a73c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a73f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1134a745 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134a747 je 0x1134a76c */
  if (C.zf) goto L_1134a76c;
  /* 1134a749 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1134a74f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1134a752 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1134a755 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1134a75b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1134a75e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1134a760 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1134a763 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1134a76a jmp 0x1134a78b */
  goto L_1134a78b;
L_1134a76c:;
  /* 1134a76c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1134a773 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1134a779 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1134a77c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1134a77f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1134a785 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1134a788 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1134a78b:;
  /* 1134a78b jmp 0x1134ad17 */
  goto L_1134ad17;
L_1134a790:;
  /* 1134a790 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a793 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1134a799 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134a79b jne 0x1134a7a6 */
  if (!C.zf) goto L_1134a7a6;
  /* 1134a79d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a7a0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1134a7a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1134a7a6:;
  /* 1134a7a6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a7ad jne 0x1134a7bb */
  if (!C.zf) goto L_1134a7bb;
  /* 1134a7af mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1134a7b9 jmp 0x1134a7c7 */
  goto L_1134a7c7;
L_1134a7bb:;
  /* 1134a7bb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1134a7c1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1134a7c7:;
  /* 1134a7c7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1134a7cd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1134a7d3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1134a7d6 push edx */
  push32((uint32_t)(EDX));
  /* 1134a7d7 call 0x1134b120 */
  push32(0x1134a7dcu); f_1134b120();
  /* 1134a7dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a7df mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1134a7e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a7e5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1134a7ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134a7ec je 0x1134a856 */
  if (C.zf) goto L_1134a856;
  /* 1134a7ee cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a7f2 jne 0x1134a7fd */
  if (!C.zf) goto L_1134a7fd;
  /* 1134a7f4 mov ecx, dword ptr [0x1136dfb4] */
  ECX = (r32((uint32_t)(0x1136dfb4)));
  /* 1134a7fa mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1134a7fd:;
  /* 1134a7fd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1134a804 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134a807 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1134a80d:;
  /* 1134a80d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1134a813 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1134a819 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134a81c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1134a822 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134a824 je 0x1134a846 */
  if (C.zf) goto L_1134a846;
  /* 1134a826 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1134a82c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134a82e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1134a831 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134a833 je 0x1134a846 */
  if (C.zf) goto L_1134a846;
  /* 1134a835 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1134a83b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a83e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1134a844 jmp 0x1134a80d */
  goto L_1134a80d;
L_1134a846:;
  /* 1134a846 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1134a84c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134a84f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1134a851 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1134a854 jmp 0x1134a8b0 */
  goto L_1134a8b0;
L_1134a856:;
  /* 1134a856 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a85a jne 0x1134a864 */
  if (!C.zf) goto L_1134a864;
  /* 1134a85c mov eax, dword ptr [0x1136dfb0] */
  EAX = (r32((uint32_t)(0x1136dfb0)));
  /* 1134a861 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1134a864:;
  /* 1134a864 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134a867 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1134a86d:;
  /* 1134a86d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1134a873 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1134a879 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134a87c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1134a882 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134a884 je 0x1134a8a4 */
  if (C.zf) goto L_1134a8a4;
  /* 1134a886 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1134a88c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1134a88f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134a891 je 0x1134a8a4 */
  if (C.zf) goto L_1134a8a4;
  /* 1134a893 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1134a899 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a89c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1134a8a2 jmp 0x1134a86d */
  goto L_1134a86d;
L_1134a8a4:;
  /* 1134a8a4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1134a8aa sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134a8ad mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1134a8b0:;
  /* 1134a8b0 jmp 0x1134ad17 */
  goto L_1134ad17;
L_1134a8b5:;
  /* 1134a8b5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1134a8b8 push edx */
  push32((uint32_t)(EDX));
  /* 1134a8b9 call 0x1134b120 */
  push32(0x1134a8beu); f_1134b120();
  /* 1134a8be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a8c1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1134a8c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a8ca and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1134a8cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134a8cf je 0x1134a8e3 */
  if (C.zf) goto L_1134a8e3;
  /* 1134a8d1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1134a8d7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1134a8de mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1134a8e1 jmp 0x1134a8f1 */
  goto L_1134a8f1;
L_1134a8e3:;
  /* 1134a8e3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1134a8e9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1134a8ef mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1134a8f1:;
  /* 1134a8f1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1134a8fb jmp 0x1134ad17 */
  goto L_1134ad17;
L_1134a900:;
  /* 1134a900 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1134a907 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1134a90a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1134a90d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1134a910:;
  /* 1134a910 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a913 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1134a915 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134a918 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1134a91e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1134a921 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a928 jge 0x1134a936 */
  if ((C.sf==C.of)) goto L_1134a936;
  /* 1134a92a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1134a934 jmp 0x1134a952 */
  goto L_1134a952;
L_1134a936:;
  /* 1134a936 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a93d jne 0x1134a952 */
  if (!C.zf) goto L_1134a952;
  /* 1134a93f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1134a943 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a946 jne 0x1134a952 */
  if (!C.zf) goto L_1134a952;
  /* 1134a948 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1134a952:;
  /* 1134a952 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134a955 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a958 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1134a95b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134a95e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134a961 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1134a963 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1134a966 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1134a96c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1134a972 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134a975 push ecx */
  push32((uint32_t)(ECX));
  /* 1134a976 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1134a97c push edx */
  push32((uint32_t)(EDX));
  /* 1134a97d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1134a981 push eax */
  push32((uint32_t)(EAX));
  /* 1134a982 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134a985 push ecx */
  push32((uint32_t)(ECX));
  /* 1134a986 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1134a98c push edx */
  push32((uint32_t)(EDX));
  /* 1134a98d call dword ptr [0x1136e3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136e3a0))), 0x1134a993u);
  /* 1134a993 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a996 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a999 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1134a99e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134a9a0 je 0x1134a9b8 */
  if (C.zf) goto L_1134a9b8;
  /* 1134a9a2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a9a9 jne 0x1134a9b8 */
  if (!C.zf) goto L_1134a9b8;
  /* 1134a9ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134a9ae push ecx */
  push32((uint32_t)(ECX));
  /* 1134a9af call dword ptr [0x1136e3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136e3ac))), 0x1134a9b5u);
  /* 1134a9b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134a9b8:;
  /* 1134a9b8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1134a9bc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a9bf jne 0x1134a9da */
  if (!C.zf) goto L_1134a9da;
  /* 1134a9c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a9c4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1134a9c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134a9cb jne 0x1134a9da */
  if (!C.zf) goto L_1134a9da;
  /* 1134a9cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134a9d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1134a9d1 call dword ptr [0x1136e3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136e3a4))), 0x1134a9d7u);
  /* 1134a9d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134a9da:;
  /* 1134a9da mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134a9dd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1134a9e0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134a9e3 jne 0x1134a9f7 */
  if (!C.zf) goto L_1134a9f7;
  /* 1134a9e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134a9e8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1134a9eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1134a9ee mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134a9f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134a9f4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1134a9f7:;
  /* 1134a9f7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134a9fa push eax */
  push32((uint32_t)(EAX));
  /* 1134a9fb call 0x11346180 */
  push32(0x1134aa00u); f_11346180();
  /* 1134aa00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134aa03 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1134aa06 jmp 0x1134ad17 */
  goto L_1134ad17;
L_1134aa0b:;
  /* 1134aa0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134aa0e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1134aa11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1134aa14 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1134aa1e jmp 0x1134aaa5 */
  goto L_1134aaa5;
L_1134aa23:;
  /* 1134aa23 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1134aa2d jmp 0x1134aaa5 */
  goto L_1134aaa5;
L_1134aa2f:;
  /* 1134aa2f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1134aa39:;
  /* 1134aa39 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1134aa43 jmp 0x1134aa4f */
  goto L_1134aa4f;
L_1134aa45:;
  /* 1134aa45 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1134aa4f:;
  /* 1134aa4f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1134aa59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134aa5c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1134aa62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134aa64 je 0x1134aa83 */
  if (C.zf) goto L_1134aa83;
  /* 1134aa66 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1134aa6d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1134aa73 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134aa76 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1134aa7c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1134aa83:;
  /* 1134aa83 jmp 0x1134aaa5 */
  goto L_1134aaa5;
L_1134aa85:;
  /* 1134aa85 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1134aa8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134aa92 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1134aa98 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134aa9a je 0x1134aaa5 */
  if (C.zf) goto L_1134aaa5;
  /* 1134aa9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134aa9f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1134aaa2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1134aaa5:;
  /* 1134aaa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134aaa8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1134aaad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134aaaf je 0x1134aace */
  if (C.zf) goto L_1134aace;
  /* 1134aab1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1134aab4 push ecx */
  push32((uint32_t)(ECX));
  /* 1134aab5 call 0x1134b140 */
  push32(0x1134aabau); f_1134b140();
  /* 1134aaba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134aabd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1134aac3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1134aac9 jmp 0x1134ab5f */
  goto L_1134ab5f;
L_1134aace:;
  /* 1134aace mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134aad1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1134aad4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134aad6 je 0x1134ab20 */
  if (C.zf) goto L_1134ab20;
  /* 1134aad8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134aadb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1134aade test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134aae0 je 0x1134ab00 */
  if (C.zf) goto L_1134ab00;
  /* 1134aae2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1134aae5 push ecx */
  push32((uint32_t)(ECX));
  /* 1134aae6 call 0x1134b120 */
  push32(0x1134aaebu); f_1134b120();
  /* 1134aaeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134aaee movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1134aaf1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1134aaf2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1134aaf8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1134aafe jmp 0x1134ab1e */
  goto L_1134ab1e;
L_1134ab00:;
  /* 1134ab00 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1134ab03 push edx */
  push32((uint32_t)(EDX));
  /* 1134ab04 call 0x1134b120 */
  push32(0x1134ab09u); f_1134b120();
  /* 1134ab09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ab0c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134ab11 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1134ab12 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1134ab18 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1134ab1e:;
  /* 1134ab1e jmp 0x1134ab5f */
  goto L_1134ab5f;
L_1134ab20:;
  /* 1134ab20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ab23 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1134ab26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134ab28 je 0x1134ab45 */
  if (C.zf) goto L_1134ab45;
  /* 1134ab2a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1134ab2d push ecx */
  push32((uint32_t)(ECX));
  /* 1134ab2e call 0x1134b120 */
  push32(0x1134ab33u); f_1134b120();
  /* 1134ab33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ab36 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1134ab37 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1134ab3d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1134ab43 jmp 0x1134ab5f */
  goto L_1134ab5f;
L_1134ab45:;
  /* 1134ab45 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1134ab48 push edx */
  push32((uint32_t)(EDX));
  /* 1134ab49 call 0x1134b120 */
  push32(0x1134ab4eu); f_1134b120();
  /* 1134ab4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ab51 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134ab53 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1134ab59 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1134ab5f:;
  /* 1134ab5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ab62 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1134ab65 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134ab67 je 0x1134aba7 */
  if (C.zf) goto L_1134aba7;
  /* 1134ab69 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ab70 jg 0x1134aba7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1134aba7;
  /* 1134ab72 jl 0x1134ab7d */
  if ((C.sf!=C.of)) goto L_1134ab7d;
  /* 1134ab74 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ab7b jae 0x1134aba7 */
  if (!C.cf) goto L_1134aba7;
L_1134ab7d:;
  /* 1134ab7d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1134ab83 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134ab85 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1134ab8b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ab8e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134ab90 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1134ab96 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1134ab9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ab9f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1134aba2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1134aba5 jmp 0x1134abbf */
  goto L_1134abbf;
L_1134aba7:;
  /* 1134aba7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1134abad mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1134abb3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1134abb9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1134abbf:;
  /* 1134abbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134abc2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1134abc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134abca jne 0x1134abe7 */
  if (!C.zf) goto L_1134abe7;
  /* 1134abcc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1134abd2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1134abd8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1134abdb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1134abe1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1134abe7:;
  /* 1134abe7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134abee jge 0x1134abfc */
  if ((C.sf==C.of)) goto L_1134abfc;
  /* 1134abf0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1134abfa jmp 0x1134ac05 */
  goto L_1134ac05;
L_1134abfc:;
  /* 1134abfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134abff and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1134ac02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1134ac05:;
  /* 1134ac05 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1134ac0b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1134ac11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134ac13 jne 0x1134ac1c */
  if (!C.zf) goto L_1134ac1c;
  /* 1134ac15 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1134ac1c:;
  /* 1134ac1c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1134ac1f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1134ac22:;
  /* 1134ac22 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1134ac28 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1134ac2e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134ac31 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1134ac37 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134ac39 jg 0x1134ac4f */
  if ((!C.zf&&C.sf==C.of)) goto L_1134ac4f;
  /* 1134ac3b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1134ac41 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1134ac47 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134ac49 je 0x1134acd0 */
  if (C.zf) goto L_1134acd0;
L_1134ac4f:;
  /* 1134ac4f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1134ac55 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1134ac56 push edx */
  push32((uint32_t)(EDX));
  /* 1134ac57 push eax */
  push32((uint32_t)(EAX));
  /* 1134ac58 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1134ac5e push edx */
  push32((uint32_t)(EDX));
  /* 1134ac5f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1134ac65 push eax */
  push32((uint32_t)(EAX));
  /* 1134ac66 call 0x11349fe0 */
  push32(0x1134ac6bu); f_11349fe0();
  /* 1134ac6b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ac6e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1134ac74 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1134ac7a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1134ac7b push edx */
  push32((uint32_t)(EDX));
  /* 1134ac7c push eax */
  push32((uint32_t)(EAX));
  /* 1134ac7d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1134ac83 push ecx */
  push32((uint32_t)(ECX));
  /* 1134ac84 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1134ac8a push edx */
  push32((uint32_t)(EDX));
  /* 1134ac8b call 0x11349f70 */
  push32(0x1134ac90u); f_11349f70();
  /* 1134ac90 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1134ac96 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1134ac9c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134aca3 jle 0x1134acb7 */
  if ((C.zf||C.sf!=C.of)) goto L_1134acb7;
  /* 1134aca5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1134acab add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134acb1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1134acb7:;
  /* 1134acb7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134acba mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1134acc0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1134acc2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134acc5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134acc8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1134accb jmp 0x1134ac22 */
  goto L_1134ac22;
L_1134acd0:;
  /* 1134acd0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1134acd3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134acd6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1134acd9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134acdc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134acdf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1134ace2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ace5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1134acea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134acec je 0x1134ad17 */
  if (C.zf) goto L_1134ad17;
  /* 1134acee mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134acf1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1134acf4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134acf7 jne 0x1134acff */
  if (!C.zf) goto L_1134acff;
  /* 1134acf9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134acfd jne 0x1134ad17 */
  if (!C.zf) goto L_1134ad17;
L_1134acff:;
  /* 1134acff mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134ad02 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134ad05 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1134ad08 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134ad0b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1134ad0e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1134ad11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ad14 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1134ad17:;
  /* 1134ad17 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ad1e jne 0x1134aef2 */
  if (!C.zf) goto L_1134aef2;
  /* 1134ad24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ad27 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1134ad2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134ad2c je 0x1134ad7d */
  if (C.zf) goto L_1134ad7d;
  /* 1134ad2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ad31 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1134ad37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134ad39 je 0x1134ad4b */
  if (C.zf) goto L_1134ad4b;
  /* 1134ad3b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1134ad42 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1134ad49 jmp 0x1134ad7d */
  goto L_1134ad7d;
L_1134ad4b:;
  /* 1134ad4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ad4e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1134ad51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134ad53 je 0x1134ad65 */
  if (C.zf) goto L_1134ad65;
  /* 1134ad55 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1134ad5c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1134ad63 jmp 0x1134ad7d */
  goto L_1134ad7d;
L_1134ad65:;
  /* 1134ad65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ad68 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1134ad6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134ad6d je 0x1134ad7d */
  if (C.zf) goto L_1134ad7d;
  /* 1134ad6f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1134ad76 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1134ad7d:;
  /* 1134ad7d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1134ad83 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134ad86 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134ad89 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1134ad8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ad92 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1134ad95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134ad97 jne 0x1134adb5 */
  if (!C.zf) goto L_1134adb5;
  /* 1134ad99 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1134ad9f push eax */
  push32((uint32_t)(EAX));
  /* 1134ada0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ada3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134ada4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1134adaa push edx */
  push32((uint32_t)(EDX));
  /* 1134adab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1134adad call 0x1134b090 */
  push32(0x1134adb2u); f_1134b090();
  /* 1134adb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134adb5:;
  /* 1134adb5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1134adbb push eax */
  push32((uint32_t)(EAX));
  /* 1134adbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134adbf push ecx */
  push32((uint32_t)(ECX));
  /* 1134adc0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134adc3 push edx */
  push32((uint32_t)(EDX));
  /* 1134adc4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1134adca push eax */
  push32((uint32_t)(EAX));
  /* 1134adcb call 0x1134b0d0 */
  push32(0x1134add0u); f_1134b0d0();
  /* 1134add0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134add3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134add6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1134add9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134addb je 0x1134ae03 */
  if (C.zf) goto L_1134ae03;
  /* 1134addd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ade0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1134ade3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134ade5 jne 0x1134ae03 */
  if (!C.zf) goto L_1134ae03;
  /* 1134ade7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1134aded push eax */
  push32((uint32_t)(EAX));
  /* 1134adee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134adf1 push ecx */
  push32((uint32_t)(ECX));
  /* 1134adf2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1134adf8 push edx */
  push32((uint32_t)(EDX));
  /* 1134adf9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1134adfb call 0x1134b090 */
  push32(0x1134ae00u); f_1134b090();
  /* 1134ae00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134ae03:;
  /* 1134ae03 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ae07 je 0x1134aeb1 */
  if (C.zf) goto L_1134aeb1;
  /* 1134ae0d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ae11 jle 0x1134aeb1 */
  if ((C.zf||C.sf!=C.of)) goto L_1134aeb1;
  /* 1134ae17 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134ae1a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1134ae20 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1134ae23 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1134ae29:;
  /* 1134ae29 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1134ae2f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1134ae35 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134ae38 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1134ae3e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134ae40 je 0x1134aeaf */
  if (C.zf) goto L_1134aeaf;
  /* 1134ae42 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1134ae48 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1134ae4b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1134ae52 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1134ae59 push eax */
  push32((uint32_t)(EAX));
  /* 1134ae5a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1134ae60 push ecx */
  push32((uint32_t)(ECX));
  /* 1134ae61 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1134ae67 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ae6a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1134ae70 call 0x1134c240 */
  push32(0x1134ae75u); f_1134c240();
  /* 1134ae75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ae78 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1134ae7e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ae85 jg 0x1134ae89 */
  if ((!C.zf&&C.sf==C.of)) goto L_1134ae89;
  /* 1134ae87 jmp 0x1134aeaf */
  goto L_1134aeaf;
L_1134ae89:;
  /* 1134ae89 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1134ae8f push eax */
  push32((uint32_t)(EAX));
  /* 1134ae90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ae93 push ecx */
  push32((uint32_t)(ECX));
  /* 1134ae94 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1134ae9a push edx */
  push32((uint32_t)(EDX));
  /* 1134ae9b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1134aea1 push eax */
  push32((uint32_t)(EAX));
  /* 1134aea2 call 0x1134b0d0 */
  push32(0x1134aea7u); f_1134b0d0();
  /* 1134aea7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134aeaa jmp 0x1134ae29 */
  goto L_1134ae29;
L_1134aeaf:;
  /* 1134aeaf jmp 0x1134aecc */
  goto L_1134aecc;
L_1134aeb1:;
  /* 1134aeb1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1134aeb7 push ecx */
  push32((uint32_t)(ECX));
  /* 1134aeb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134aebb push edx */
  push32((uint32_t)(EDX));
  /* 1134aebc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1134aebf push eax */
  push32((uint32_t)(EAX));
  /* 1134aec0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134aec3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134aec4 call 0x1134b0d0 */
  push32(0x1134aec9u); f_1134b0d0();
  /* 1134aec9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134aecc:;
  /* 1134aecc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134aecf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1134aed2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134aed4 je 0x1134aef2 */
  if (C.zf) goto L_1134aef2;
  /* 1134aed6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1134aedc push eax */
  push32((uint32_t)(EAX));
  /* 1134aedd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134aee0 push ecx */
  push32((uint32_t)(ECX));
  /* 1134aee1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1134aee7 push edx */
  push32((uint32_t)(EDX));
  /* 1134aee8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1134aeea call 0x1134b090 */
  push32(0x1134aeefu); f_1134b090();
  /* 1134aeef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134aef2:;
  /* 1134aef2 jmp 0x1134a304 */
  goto L_1134a304;
L_1134aef7:;
  /* 1134aef7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1134aefd pop edi */
  EDI = (pop32());
  /* 1134aefe pop esi */
  ESI = (pop32());
  /* 1134aeff pop ebx */
  EBX = (pop32());
  /* 1134af00 mov esp, ebp */
  ESP = (EBP);
  /* 1134af02 pop ebp */
  EBP = (pop32());
  /* 1134af03 ret  */
  ESPCHK(0x1134a2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b010 @ 0x1134b010 (119 bytes, 44 insns) */
void f_1134b010(void) {
  FTRACE(0x1134b010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134b010 push ebp */
  push32((uint32_t)(EBP));
  /* 1134b011 mov ebp, esp */
  EBP = (ESP);
  /* 1134b013 push ecx */
  push32((uint32_t)(ECX));
  /* 1134b014 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b017 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1134b01a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134b01d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b020 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1134b023 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b026 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b02a jl 0x1134b052 */
  if ((C.sf!=C.of)) goto L_1134b052;
  /* 1134b02c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b02f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1134b031 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1134b034 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1134b036 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1134b03a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1134b040 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1134b043 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b046 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1134b048 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b04b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b04e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1134b050 jmp 0x1134b065 */
  goto L_1134b065;
L_1134b052:;
  /* 1134b052 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b055 push edx */
  push32((uint32_t)(EDX));
  /* 1134b056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b059 push eax */
  push32((uint32_t)(EAX));
  /* 1134b05a call 0x1134a060 */
  push32(0x1134b05fu); f_1134a060();
  /* 1134b05f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b062 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1134b065:;
  /* 1134b065 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b069 jne 0x1134b076 */
  if (!C.zf) goto L_1134b076;
  /* 1134b06b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134b06e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1134b074 jmp 0x1134b083 */
  goto L_1134b083;
L_1134b076:;
  /* 1134b076 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134b079 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1134b07b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b07e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134b081 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1134b083:;
  /* 1134b083 mov esp, ebp */
  ESP = (EBP);
  /* 1134b085 pop ebp */
  EBP = (pop32());
  /* 1134b086 ret  */
  ESPCHK(0x1134b010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b090 @ 0x1134b090 (53 bytes, 23 insns) */
void f_1134b090(void) {
  FTRACE(0x1134b090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134b090 push ebp */
  push32((uint32_t)(EBP));
  /* 1134b091 mov ebp, esp */
  EBP = (ESP);
L_1134b093:;
  /* 1134b093 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b096 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b099 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134b09c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1134b09f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134b0a1 jle 0x1134b0c3 */
  if ((C.zf||C.sf!=C.of)) goto L_1134b0c3;
  /* 1134b0a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134b0a6 push edx */
  push32((uint32_t)(EDX));
  /* 1134b0a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134b0aa push eax */
  push32((uint32_t)(EAX));
  /* 1134b0ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b0ae push ecx */
  push32((uint32_t)(ECX));
  /* 1134b0af call 0x1134b010 */
  push32(0x1134b0b4u); f_1134b010();
  /* 1134b0b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b0b7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134b0ba cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b0bd jne 0x1134b0c1 */
  if (!C.zf) goto L_1134b0c1;
  /* 1134b0bf jmp 0x1134b0c3 */
  goto L_1134b0c3;
L_1134b0c1:;
  /* 1134b0c1 jmp 0x1134b093 */
  goto L_1134b093;
L_1134b0c3:;
  /* 1134b0c3 pop ebp */
  EBP = (pop32());
  /* 1134b0c4 ret  */
  ESPCHK(0x1134b090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0d0 @ 0x1134b0d0 (74 bytes, 31 insns) */
void f_1134b0d0(void) {
  FTRACE(0x1134b0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134b0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134b0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1134b0d3 push ecx */
  push32((uint32_t)(ECX));
L_1134b0d4:;
  /* 1134b0d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b0d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b0da sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134b0dd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1134b0e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134b0e2 jle 0x1134b116 */
  if ((C.zf||C.sf!=C.of)) goto L_1134b116;
  /* 1134b0e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134b0e7 push edx */
  push32((uint32_t)(EDX));
  /* 1134b0e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134b0eb push eax */
  push32((uint32_t)(EAX));
  /* 1134b0ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b0ef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1134b0f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1134b0f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134b0f8 push eax */
  push32((uint32_t)(EAX));
  /* 1134b0f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b0fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b0ff mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1134b102 call 0x1134b010 */
  push32(0x1134b107u); f_1134b010();
  /* 1134b107 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b10a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134b10d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b110 jne 0x1134b114 */
  if (!C.zf) goto L_1134b114;
  /* 1134b112 jmp 0x1134b116 */
  goto L_1134b116;
L_1134b114:;
  /* 1134b114 jmp 0x1134b0d4 */
  goto L_1134b0d4;
L_1134b116:;
  /* 1134b116 mov esp, ebp */
  ESP = (EBP);
  /* 1134b118 pop ebp */
  EBP = (pop32());
  /* 1134b119 ret  */
  ESPCHK(0x1134b0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b120 @ 0x1134b120 (26 bytes, 12 insns) */
void f_1134b120(void) {
  FTRACE(0x1134b120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134b120 push ebp */
  push32((uint32_t)(EBP));
  /* 1134b121 mov ebp, esp */
  EBP = (ESP);
  /* 1134b123 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b126 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1134b128 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b12b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b12e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1134b130 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b133 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1134b135 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1134b138 pop ebp */
  EBP = (pop32());
  /* 1134b139 ret  */
  ESPCHK(0x1134b120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b140 @ 0x1134b140 (31 bytes, 14 insns) */
void f_1134b140(void) {
  FTRACE(0x1134b140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134b140 push ebp */
  push32((uint32_t)(EBP));
  /* 1134b141 mov ebp, esp */
  EBP = (ESP);
  /* 1134b143 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b146 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1134b148 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b14b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b14e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1134b150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b153 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1134b155 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134b158 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1134b15a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1134b15d pop ebp */
  EBP = (pop32());
  /* 1134b15e ret  */
  ESPCHK(0x1134b140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b160 @ 0x1134b160 (27 bytes, 12 insns) */
void f_1134b160(void) {
  FTRACE(0x1134b160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134b160 push ebp */
  push32((uint32_t)(EBP));
  /* 1134b161 mov ebp, esp */
  EBP = (ESP);
  /* 1134b163 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b166 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1134b168 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b16b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b16e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1134b170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b173 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1134b175 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1134b179 pop ebp */
  EBP = (pop32());
  /* 1134b17a ret  */
  ESPCHK(0x1134b160u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1134b180 (145 bytes, 42 insns) */
void f_1134b180(void) {
  FTRACE(0x1134b180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134b180 push ebp */
  push32((uint32_t)(EBP));
  /* 1134b181 mov ebp, esp */
  EBP = (ESP);
  /* 1134b183 push ecx */
  push32((uint32_t)(ECX));
  /* 1134b184 call 0x1134b230 */
  push32(0x1134b189u); f_1134b230();
  /* 1134b189 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b18c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1134b18e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1134b195 jmp 0x1134b1a0 */
  goto L_1134b1a0;
L_1134b197:;
  /* 1134b197 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134b19a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b19d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1134b1a0:;
  /* 1134b1a0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b1a4 jae 0x1134b1ca */
  if (!C.cf) goto L_1134b1ca;
  /* 1134b1a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134b1a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b1ac cmp ecx, dword ptr [eax*8 + 0x1136dfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1136dfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b1b3 jne 0x1134b1c8 */
  if (!C.zf) goto L_1134b1c8;
  /* 1134b1b5 call 0x1134b220 */
  push32(0x1134b1bau); f_1134b220();
  /* 1134b1ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134b1bd mov ecx, dword ptr [edx*8 + 0x1136dfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1136dfbc)));
  /* 1134b1c4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1134b1c6 jmp 0x1134b20d */
  goto L_1134b20d;
L_1134b1c8:;
  /* 1134b1c8 jmp 0x1134b197 */
  goto L_1134b197;
L_1134b1ca:;
  /* 1134b1ca cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b1ce jb 0x1134b1e3 */
  if (C.cf) goto L_1134b1e3;
  /* 1134b1d0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b1d4 ja 0x1134b1e3 */
  if ((!C.cf&&!C.zf)) goto L_1134b1e3;
  /* 1134b1d6 call 0x1134b220 */
  push32(0x1134b1dbu); f_1134b220();
  /* 1134b1db mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1134b1e1 jmp 0x1134b20d */
  goto L_1134b20d;
L_1134b1e3:;
  /* 1134b1e3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b1ea jb 0x1134b202 */
  if (C.cf) goto L_1134b202;
  /* 1134b1ec cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b1f3 ja 0x1134b202 */
  if ((!C.cf&&!C.zf)) goto L_1134b202;
  /* 1134b1f5 call 0x1134b220 */
  push32(0x1134b1fau); f_1134b220();
  /* 1134b1fa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1134b200 jmp 0x1134b20d */
  goto L_1134b20d;
L_1134b202:;
  /* 1134b202 call 0x1134b220 */
  push32(0x1134b207u); f_1134b220();
  /* 1134b207 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1134b20d:;
  /* 1134b20d mov esp, ebp */
  ESP = (EBP);
  /* 1134b20f pop ebp */
  EBP = (pop32());
  /* 1134b210 ret  */
  ESPCHK(0x1134b180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b220 @ 0x1134b220 (13 bytes, 6 insns) */
void f_1134b220(void) {
  FTRACE(0x1134b220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134b220 push ebp */
  push32((uint32_t)(EBP));
  /* 1134b221 mov ebp, esp */
  EBP = (ESP);
  /* 1134b223 call 0x11342d90 */
  push32(0x1134b228u); f_11342d90();
  /* 1134b228 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b22b pop ebp */
  EBP = (pop32());
  /* 1134b22c ret  */
  ESPCHK(0x1134b220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b230 @ 0x1134b230 (13 bytes, 6 insns) */
void f_1134b230(void) {
  FTRACE(0x1134b230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134b230 push ebp */
  push32((uint32_t)(EBP));
  /* 1134b231 mov ebp, esp */
  EBP = (ESP);
  /* 1134b233 call 0x11342d90 */
  push32(0x1134b238u); f_11342d90();
  /* 1134b238 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b23b pop ebp */
  EBP = (pop32());
  /* 1134b23c ret  */
  ESPCHK(0x1134b230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b240 @ 0x1134b240 (664 bytes, 262 insns) [15 switch table(s)] */
void f_1134b240(void) {
  FTRACE(0x1134b240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134b240 push ebp */
  push32((uint32_t)(EBP));
  /* 1134b241 mov ebp, esp */
  EBP = (ESP);
  /* 1134b243 push edi */
  push32((uint32_t)(EDI));
  /* 1134b244 push esi */
  push32((uint32_t)(ESI));
  /* 1134b245 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b248 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134b24b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b24e mov eax, ecx */
  EAX = (ECX);
  /* 1134b250 mov edx, ecx */
  EDX = (ECX);
  /* 1134b252 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b254 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b256 jbe 0x1134b260 */
  if ((C.cf||C.zf)) goto L_1134b260;
  /* 1134b258 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b25a jb 0x1134b3d8 */
  if (C.cf) goto L_1134b3d8;
L_1134b260:;
  /* 1134b260 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1134b266 jne 0x1134b27c */
  if (!C.zf) goto L_1134b27c;
  /* 1134b268 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1134b26b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1134b26e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b271 jb 0x1134b29c */
  if (C.cf) goto L_1134b29c;
  /* 1134b273 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1134b275 jmp dword ptr [edx*4 + 0x1134b388] */
  switch (EDX) {
    case 0: goto L_1134b398;
    case 1: goto L_1134b3a0;
    case 2: goto L_1134b3ac;
    case 3: goto L_1134b3c0;
    default: x86_unimpl("switch@0x1134b275 out of table"); return;
  }
L_1134b27c:;
  /* 1134b27c mov eax, edi */
  EAX = (EDI);
  /* 1134b27e mov edx, 3 */
  EDX = (0x3u);
  /* 1134b283 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134b286 jb 0x1134b294 */
  if (C.cf) goto L_1134b294;
  /* 1134b288 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1134b28b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b28d jmp dword ptr [eax*4 + 0x1134b2a0] */
  switch (EAX) {
    case 1: goto L_1134b2b0;
    case 2: goto L_1134b2dc;
    case 3: goto L_1134b300;
    default: x86_unimpl("switch@0x1134b28d out of table"); return;
  }
L_1134b294:;
  /* 1134b294 jmp dword ptr [ecx*4 + 0x1134b398] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1134b398)))); return;
  /* 1134b29b nop  */
  /* nop */
L_1134b29c:;
  /* 1134b29c jmp dword ptr [ecx*4 + 0x1134b31c] */
  switch (ECX) {
    case 0: goto L_1134b37f;
    case 1: goto L_1134b36c;
    case 2: goto L_1134b364;
    case 3: goto L_1134b35c;
    case 4: goto L_1134b354;
    case 5: goto L_1134b34c;
    case 6: goto L_1134b344;
    case 7: goto L_1134b33c;
    default: x86_unimpl("switch@0x1134b29c out of table"); return;
  }
  /* 1134b2a3 nop  */
  /* nop */
L_1134b2b0:;
  /* 1134b2b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1134b2b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1134b2b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1134b2b6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1134b2b9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1134b2bc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1134b2bf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1134b2c2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1134b2c5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b2c8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b2cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b2ce jb 0x1134b29c */
  if (C.cf) goto L_1134b29c;
  /* 1134b2d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1134b2d2 jmp dword ptr [edx*4 + 0x1134b388] */
  switch (EDX) {
    case 0: goto L_1134b398;
    case 1: goto L_1134b3a0;
    case 2: goto L_1134b3ac;
    case 3: goto L_1134b3c0;
    default: x86_unimpl("switch@0x1134b2d2 out of table"); return;
  }
  /* 1134b2d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1134b2dc:;
  /* 1134b2dc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1134b2de mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1134b2e0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1134b2e2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1134b2e5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1134b2e8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1134b2eb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b2ee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b2f1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b2f4 jb 0x1134b29c */
  if (C.cf) goto L_1134b29c;
  /* 1134b2f6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1134b2f8 jmp dword ptr [edx*4 + 0x1134b388] */
  switch (EDX) {
    case 0: goto L_1134b398;
    case 1: goto L_1134b3a0;
    case 2: goto L_1134b3ac;
    case 3: goto L_1134b3c0;
    default: x86_unimpl("switch@0x1134b2f8 out of table"); return;
  }
  /* 1134b2ff nop  */
  /* nop */
L_1134b300:;
  /* 1134b300 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1134b302 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1134b304 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1134b306 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1134b307 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1134b30a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1134b30b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b30e jb 0x1134b29c */
  if (C.cf) goto L_1134b29c;
  /* 1134b310 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1134b312 jmp dword ptr [edx*4 + 0x1134b388] */
  switch (EDX) {
    case 0: goto L_1134b398;
    case 1: goto L_1134b3a0;
    case 2: goto L_1134b3ac;
    case 3: goto L_1134b3c0;
    default: x86_unimpl("switch@0x1134b312 out of table"); return;
  }
  /* 1134b319 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1134b33c:;
  /* 1134b33c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1134b340 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1134b344:;
  /* 1134b344 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1134b348 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1134b34c:;
  /* 1134b34c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1134b350 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1134b354:;
  /* 1134b354 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1134b358 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1134b35c:;
  /* 1134b35c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1134b360 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1134b364:;
  /* 1134b364 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1134b368 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1134b36c:;
  /* 1134b36c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1134b370 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1134b374 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1134b37b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b37d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1134b37f:;
  /* 1134b37f jmp dword ptr [edx*4 + 0x1134b388] */
  switch (EDX) {
    case 0: goto L_1134b398;
    case 1: goto L_1134b3a0;
    case 2: goto L_1134b3ac;
    case 3: goto L_1134b3c0;
    default: x86_unimpl("switch@0x1134b37f out of table"); return;
  }
  /* 1134b386 mov edi, edi */
  EDI = (EDI);
L_1134b398:;
  /* 1134b398 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b39b pop esi */
  ESI = (pop32());
  /* 1134b39c pop edi */
  EDI = (pop32());
  /* 1134b39d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1134b39e ret  */
  ESPCHK(0x1134b240u, _esp0);
  ESP += 4; return;
  /* 1134b39f nop  */
  /* nop */
L_1134b3a0:;
  /* 1134b3a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1134b3a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1134b3a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b3a7 pop esi */
  ESI = (pop32());
  /* 1134b3a8 pop edi */
  EDI = (pop32());
  /* 1134b3a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1134b3aa ret  */
  ESPCHK(0x1134b240u, _esp0);
  ESP += 4; return;
  /* 1134b3ab nop  */
  /* nop */
L_1134b3ac:;
  /* 1134b3ac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1134b3ae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1134b3b0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1134b3b3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1134b3b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b3b9 pop esi */
  ESI = (pop32());
  /* 1134b3ba pop edi */
  EDI = (pop32());
  /* 1134b3bb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1134b3bc ret  */
  ESPCHK(0x1134b240u, _esp0);
  ESP += 4; return;
  /* 1134b3bd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1134b3c0:;
  /* 1134b3c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1134b3c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1134b3c4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1134b3c7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1134b3ca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1134b3cd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1134b3d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b3d3 pop esi */
  ESI = (pop32());
  /* 1134b3d4 pop edi */
  EDI = (pop32());
  /* 1134b3d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1134b3d6 ret  */
  ESPCHK(0x1134b240u, _esp0);
  ESP += 4; return;
  /* 1134b3d7 nop  */
  /* nop */
L_1134b3d8:;
  /* 1134b3d8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1134b3dc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1134b3e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1134b3e6 jne 0x1134b40c */
  if (!C.zf) goto L_1134b40c;
  /* 1134b3e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1134b3eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1134b3ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b3f1 jb 0x1134b400 */
  if (C.cf) goto L_1134b400;
  /* 1134b3f3 std  */
  C.df=1;
  /* 1134b3f4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1134b3f6 cld  */
  C.df=0;
  /* 1134b3f7 jmp dword ptr [edx*4 + 0x1134b520] */
  switch (EDX) {
    case 0: goto L_1134b530;
    case 1: goto L_1134b538;
    case 2: goto L_1134b548;
    case 3: goto L_1134b55c;
    default: x86_unimpl("switch@0x1134b3f7 out of table"); return;
  }
  /* 1134b3fe mov edi, edi */
  EDI = (EDI);
L_1134b400:;
  /* 1134b400 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134b402 jmp dword ptr [ecx*4 + 0x1134b4d0] */
  switch (ECX) {
    case 0: goto L_1134b517;
    default: x86_unimpl("switch@0x1134b402 out of table"); return;
  }
  /* 1134b409 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1134b40c:;
  /* 1134b40c mov eax, edi */
  EAX = (EDI);
  /* 1134b40e mov edx, 3 */
  EDX = (0x3u);
  /* 1134b413 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b416 jb 0x1134b424 */
  if (C.cf) goto L_1134b424;
  /* 1134b418 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1134b41b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134b41d jmp dword ptr [eax*4 + 0x1134b428] */
  switch (EAX) {
    case 1: goto L_1134b438;
    case 2: goto L_1134b458;
    case 3: goto L_1134b480;
    default: x86_unimpl("switch@0x1134b41d out of table"); return;
  }
L_1134b424:;
  /* 1134b424 jmp dword ptr [ecx*4 + 0x1134b520] */
  switch (ECX) {
    case 0: goto L_1134b530;
    case 1: goto L_1134b538;
    case 2: goto L_1134b548;
    case 3: goto L_1134b55c;
    default: x86_unimpl("switch@0x1134b424 out of table"); return;
  }
  /* 1134b42b nop  */
  /* nop */
L_1134b438:;
  /* 1134b438 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1134b43b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1134b43d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1134b440 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1134b441 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1134b444 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1134b445 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b448 jb 0x1134b400 */
  if (C.cf) goto L_1134b400;
  /* 1134b44a std  */
  C.df=1;
  /* 1134b44b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1134b44d cld  */
  C.df=0;
  /* 1134b44e jmp dword ptr [edx*4 + 0x1134b520] */
  switch (EDX) {
    case 0: goto L_1134b530;
    case 1: goto L_1134b538;
    case 2: goto L_1134b548;
    case 3: goto L_1134b55c;
    default: x86_unimpl("switch@0x1134b44e out of table"); return;
  }
  /* 1134b455 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1134b458:;
  /* 1134b458 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1134b45b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1134b45d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1134b460 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1134b463 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1134b466 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1134b469 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134b46c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134b46f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b472 jb 0x1134b400 */
  if (C.cf) goto L_1134b400;
  /* 1134b474 std  */
  C.df=1;
  /* 1134b475 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1134b477 cld  */
  C.df=0;
  /* 1134b478 jmp dword ptr [edx*4 + 0x1134b520] */
  switch (EDX) {
    case 0: goto L_1134b530;
    case 1: goto L_1134b538;
    case 2: goto L_1134b548;
    case 3: goto L_1134b55c;
    default: x86_unimpl("switch@0x1134b478 out of table"); return;
  }
  /* 1134b47f nop  */
  /* nop */
L_1134b480:;
  /* 1134b480 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1134b483 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1134b485 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1134b488 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1134b48b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1134b48e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1134b491 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1134b494 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1134b497 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134b49a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134b49d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b4a0 jb 0x1134b400 */
  if (C.cf) goto L_1134b400;
  /* 1134b4a6 std  */
  C.df=1;
  /* 1134b4a7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1134b4a9 cld  */
  C.df=0;
  /* 1134b4aa jmp dword ptr [edx*4 + 0x1134b520] */
  switch (EDX) {
    case 0: goto L_1134b530;
    case 1: goto L_1134b538;
    case 2: goto L_1134b548;
    case 3: goto L_1134b55c;
    default: x86_unimpl("switch@0x1134b4aa out of table"); return;
  }
  /* 1134b4b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1134b4b4 aam 0xb4 */
  x86_unimpl("aam @ 0x1134b4b4");
  /* 1134b4b6 xor al, 0x11 */
  { uint32_t _r=(AL)^(0x11u); AL = (_r); fl_logic(_r,8); }
  /* 1134b4b8 fdiv qword ptr [esp + esi + 0x34b4e411] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(ESP + ESI*1 + 0x34b4e411)));
  /* 1134b4bf adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b4c1 mov ah, 0x34 */
  AH = (0x34u);
  /* 1134b4c3 adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b4c5 mov ah, 0x34 */
  AH = (0x34u);
  /* 1134b4c7 adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b4c9 mov ah, 0x34 */
  AH = (0x34u);
  /* 1134b4cc add al, 0xb5 */
  { uint32_t _a=(AL),_b=(0xb5u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1134b4ce xor al, 0x11 */
  { uint32_t _r=(AL)^(0x11u); AL = (_r); fl_logic(_r,8); }
  /* 1134b4d4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1134b4d8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1134b4dc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1134b4e0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1134b4e4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1134b4e8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1134b4ec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1134b4f0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1134b4f4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1134b4f8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1134b4fc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1134b500 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1134b504 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1134b508 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1134b50c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1134b513 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b515 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1134b517:;
  /* 1134b517 jmp dword ptr [edx*4 + 0x1134b520] */
  switch (EDX) {
    case 0: goto L_1134b530;
    case 1: goto L_1134b538;
    case 2: goto L_1134b548;
    case 3: goto L_1134b55c;
    default: x86_unimpl("switch@0x1134b517 out of table"); return;
  }
  /* 1134b51e mov edi, edi */
  EDI = (EDI);
L_1134b530:;
  /* 1134b530 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b533 pop esi */
  ESI = (pop32());
  /* 1134b534 pop edi */
  EDI = (pop32());
  /* 1134b535 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1134b536 ret  */
  ESPCHK(0x1134b240u, _esp0);
  ESP += 4; return;
  /* 1134b537 nop  */
  /* nop */
L_1134b538:;
  /* 1134b538 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1134b53b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1134b53e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b541 pop esi */
  ESI = (pop32());
  /* 1134b542 pop edi */
  EDI = (pop32());
  /* 1134b543 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1134b544 ret  */
  ESPCHK(0x1134b240u, _esp0);
  ESP += 4; return;
  /* 1134b545 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1134b548:;
  /* 1134b548 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1134b54b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1134b54e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1134b551 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1134b554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b557 pop esi */
  ESI = (pop32());
  /* 1134b558 pop edi */
  EDI = (pop32());
  /* 1134b559 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1134b55a ret  */
  ESPCHK(0x1134b240u, _esp0);
  ESP += 4; return;
  /* 1134b55b nop  */
  /* nop */
L_1134b55c:;
  /* 1134b55c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1134b55f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1134b562 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1134b565 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1134b568 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1134b56b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1134b56e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b571 pop esi */
  ESI = (pop32());
  /* 1134b572 pop edi */
  EDI = (pop32());
  /* 1134b573 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1134b574 ret  */
  ESPCHK(0x1134b240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b580 @ 0x1134b580 (421 bytes, 148 insns) */
void f_1134b580(void) {
  FTRACE(0x1134b580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134b580 push ebp */
  push32((uint32_t)(EBP));
  /* 1134b581 mov ebp, esp */
  EBP = (ESP);
  /* 1134b583 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1134b585 push 0x1136afa0 */
  push32((uint32_t)(0x1136afa0u));
  /* 1134b58a push 0x1134c458 */
  push32((uint32_t)(0x1134c458u));
  /* 1134b58f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1134b595 push eax */
  push32((uint32_t)(EAX));
  /* 1134b596 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1134b59d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b5a0 push ebx */
  push32((uint32_t)(EBX));
  /* 1134b5a1 push esi */
  push32((uint32_t)(ESI));
  /* 1134b5a2 push edi */
  push32((uint32_t)(EDI));
  /* 1134b5a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1134b5a6 cmp dword ptr [0x1136f65c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f65c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b5ad jne 0x1134b5fe */
  if (!C.zf) goto L_1134b5fe;
  /* 1134b5af lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1134b5b2 push eax */
  push32((uint32_t)(EAX));
  /* 1134b5b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134b5b5 push 0x1136af9c */
  push32((uint32_t)(0x1136af9cu));
  /* 1134b5ba push 1 */
  push32((uint32_t)(0x1u));
  /* 1134b5bc call dword ptr [0x113712e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712e0))), 0x1134b5c2u);
  /* 1134b5c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134b5c4 je 0x1134b5d2 */
  if (C.zf) goto L_1134b5d2;
  /* 1134b5c6 mov dword ptr [0x1136f65c], 1 */
  w32((uint32_t)(0x1136f65c), (0x1u));
  /* 1134b5d0 jmp 0x1134b5fe */
  goto L_1134b5fe;
L_1134b5d2:;
  /* 1134b5d2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1134b5d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1134b5d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134b5d8 push 0x1136af98 */
  push32((uint32_t)(0x1136af98u));
  /* 1134b5dd push 1 */
  push32((uint32_t)(0x1u));
  /* 1134b5df push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b5e1 call dword ptr [0x113712e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712e4))), 0x1134b5e7u);
  /* 1134b5e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134b5e9 je 0x1134b5f7 */
  if (C.zf) goto L_1134b5f7;
  /* 1134b5eb mov dword ptr [0x1136f65c], 2 */
  w32((uint32_t)(0x1136f65c), (0x2u));
  /* 1134b5f5 jmp 0x1134b5fe */
  goto L_1134b5fe;
L_1134b5f7:;
  /* 1134b5f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134b5f9 jmp 0x1134b728 */
  goto L_1134b728;
L_1134b5fe:;
  /* 1134b5fe cmp dword ptr [0x1136f65c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1136f65c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b605 jne 0x1134b635 */
  if (!C.zf) goto L_1134b635;
  /* 1134b607 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b60b jne 0x1134b616 */
  if (!C.zf) goto L_1134b616;
  /* 1134b60d mov edx, dword ptr [0x1136f668] */
  EDX = (r32((uint32_t)(0x1136f668)));
  /* 1134b613 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1134b616:;
  /* 1134b616 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134b619 push eax */
  push32((uint32_t)(EAX));
  /* 1134b61a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134b61d push ecx */
  push32((uint32_t)(ECX));
  /* 1134b61e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b621 push edx */
  push32((uint32_t)(EDX));
  /* 1134b622 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b625 push eax */
  push32((uint32_t)(EAX));
  /* 1134b626 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1134b629 push ecx */
  push32((uint32_t)(ECX));
  /* 1134b62a call dword ptr [0x113712e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712e4))), 0x1134b630u);
  /* 1134b630 jmp 0x1134b728 */
  goto L_1134b728;
L_1134b635:;
  /* 1134b635 cmp dword ptr [0x1136f65c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136f65c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b63c jne 0x1134b726 */
  if (!C.zf) goto L_1134b726;
  /* 1134b642 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b646 jne 0x1134b651 */
  if (!C.zf) goto L_1134b651;
  /* 1134b648 mov edx, dword ptr [0x1136f678] */
  EDX = (r32((uint32_t)(0x1136f678)));
  /* 1134b64e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1134b651:;
  /* 1134b651 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b653 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b655 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134b658 push eax */
  push32((uint32_t)(EAX));
  /* 1134b659 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b65c push ecx */
  push32((uint32_t)(ECX));
  /* 1134b65d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1134b660 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134b662 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134b664 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1134b667 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b66a push edx */
  push32((uint32_t)(EDX));
  /* 1134b66b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1134b66e push eax */
  push32((uint32_t)(EAX));
  /* 1134b66f call dword ptr [0x113712e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712e8))), 0x1134b675u);
  /* 1134b675 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1134b678 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b67c jne 0x1134b685 */
  if (!C.zf) goto L_1134b685;
  /* 1134b67e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134b680 jmp 0x1134b728 */
  goto L_1134b728;
L_1134b685:;
  /* 1134b685 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1134b68c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134b68f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1134b691 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b694 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1134b696 call 0x113464f0 */
  push32(0x1134b69bu); f_113464f0();
  /* 1134b69b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1134b69e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1134b6a1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1134b6a4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1134b6a7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134b6aa shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1134b6ac push edx */
  push32((uint32_t)(EDX));
  /* 1134b6ad push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b6af mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1134b6b2 push eax */
  push32((uint32_t)(EAX));
  /* 1134b6b3 call 0x113470c0 */
  push32(0x1134b6b8u); f_113470c0();
  /* 1134b6b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b6bb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1134b6c2 jmp 0x1134b6db */
  goto L_1134b6db;
  /* 1134b6c4 mov eax, 1 */
  EAX = (0x1u);
  /* 1134b6c9 ret  */
  ESPCHK(0x1134b580u, _esp0);
  ESP += 4; return;
  /* 1134b6ca mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1134b6cd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1134b6d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1134b6db:;
  /* 1134b6db cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b6df jne 0x1134b6e5 */
  if (!C.zf) goto L_1134b6e5;
  /* 1134b6e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134b6e3 jmp 0x1134b728 */
  goto L_1134b728;
L_1134b6e5:;
  /* 1134b6e5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134b6e8 push ecx */
  push32((uint32_t)(ECX));
  /* 1134b6e9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1134b6ec push edx */
  push32((uint32_t)(EDX));
  /* 1134b6ed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134b6f0 push eax */
  push32((uint32_t)(EAX));
  /* 1134b6f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b6f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1134b6f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134b6f7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1134b6fa push edx */
  push32((uint32_t)(EDX));
  /* 1134b6fb call dword ptr [0x113712e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712e8))), 0x1134b701u);
  /* 1134b701 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1134b704 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b708 jne 0x1134b70e */
  if (!C.zf) goto L_1134b70e;
  /* 1134b70a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134b70c jmp 0x1134b728 */
  goto L_1134b728;
L_1134b70e:;
  /* 1134b70e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134b711 push eax */
  push32((uint32_t)(EAX));
  /* 1134b712 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1134b715 push ecx */
  push32((uint32_t)(ECX));
  /* 1134b716 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1134b719 push edx */
  push32((uint32_t)(EDX));
  /* 1134b71a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b71d push eax */
  push32((uint32_t)(EAX));
  /* 1134b71e call dword ptr [0x113712e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712e0))), 0x1134b724u);
  /* 1134b724 jmp 0x1134b728 */
  goto L_1134b728;
L_1134b726:;
  /* 1134b726 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1134b728:;
  /* 1134b728 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1134b72b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134b72e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1134b735 pop edi */
  EDI = (pop32());
  /* 1134b736 pop esi */
  ESI = (pop32());
  /* 1134b737 pop ebx */
  EBX = (pop32());
  /* 1134b738 mov esp, ebp */
  ESP = (EBP);
  /* 1134b73a pop ebp */
  EBP = (pop32());
  /* 1134b73b ret  */
  ESPCHK(0x1134b580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b740 @ 0x1134b740 (727 bytes, 263 insns) */
void f_1134b740(void) {
  FTRACE(0x1134b740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134b740 push ebp */
  push32((uint32_t)(EBP));
  /* 1134b741 mov ebp, esp */
  EBP = (ESP);
  /* 1134b743 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1134b745 push 0x1136afb0 */
  push32((uint32_t)(0x1136afb0u));
  /* 1134b74a push 0x1134c458 */
  push32((uint32_t)(0x1134c458u));
  /* 1134b74f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1134b755 push eax */
  push32((uint32_t)(EAX));
  /* 1134b756 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1134b75d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b760 push ebx */
  push32((uint32_t)(EBX));
  /* 1134b761 push esi */
  push32((uint32_t)(ESI));
  /* 1134b762 push edi */
  push32((uint32_t)(EDI));
  /* 1134b763 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1134b766 cmp dword ptr [0x1136f680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b76d jne 0x1134b7c6 */
  if (!C.zf) goto L_1134b7c6;
  /* 1134b76f push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b771 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b773 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134b775 push 0x1136af9c */
  push32((uint32_t)(0x1136af9cu));
  /* 1134b77a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1134b77f push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b781 call dword ptr [0x113712d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712d8))), 0x1134b787u);
  /* 1134b787 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134b789 je 0x1134b797 */
  if (C.zf) goto L_1134b797;
  /* 1134b78b mov dword ptr [0x1136f680], 1 */
  w32((uint32_t)(0x1136f680), (0x1u));
  /* 1134b795 jmp 0x1134b7c6 */
  goto L_1134b7c6;
L_1134b797:;
  /* 1134b797 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b799 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b79b push 1 */
  push32((uint32_t)(0x1u));
  /* 1134b79d push 0x1136af98 */
  push32((uint32_t)(0x1136af98u));
  /* 1134b7a2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1134b7a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b7a9 call dword ptr [0x113712dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712dc))), 0x1134b7afu);
  /* 1134b7af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134b7b1 je 0x1134b7bf */
  if (C.zf) goto L_1134b7bf;
  /* 1134b7b3 mov dword ptr [0x1136f680], 2 */
  w32((uint32_t)(0x1136f680), (0x2u));
  /* 1134b7bd jmp 0x1134b7c6 */
  goto L_1134b7c6;
L_1134b7bf:;
  /* 1134b7bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134b7c1 jmp 0x1134ba31 */
  goto L_1134ba31;
L_1134b7c6:;
  /* 1134b7c6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b7ca jle 0x1134b7df */
  if ((C.zf||C.sf!=C.of)) goto L_1134b7df;
  /* 1134b7cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134b7cf push eax */
  push32((uint32_t)(EAX));
  /* 1134b7d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134b7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134b7d4 call 0x1134ba50 */
  push32(0x1134b7d9u); f_1134ba50();
  /* 1134b7d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b7dc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1134b7df:;
  /* 1134b7df cmp dword ptr [0x1136f680], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1136f680))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b7e6 jne 0x1134b80b */
  if (!C.zf) goto L_1134b80b;
  /* 1134b7e8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1134b7eb push edx */
  push32((uint32_t)(EDX));
  /* 1134b7ec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1134b7ef push eax */
  push32((uint32_t)(EAX));
  /* 1134b7f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134b7f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134b7f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134b7f7 push edx */
  push32((uint32_t)(EDX));
  /* 1134b7f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b7fb push eax */
  push32((uint32_t)(EAX));
  /* 1134b7fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b7ff push ecx */
  push32((uint32_t)(ECX));
  /* 1134b800 call dword ptr [0x113712dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712dc))), 0x1134b806u);
  /* 1134b806 jmp 0x1134ba31 */
  goto L_1134ba31;
L_1134b80b:;
  /* 1134b80b cmp dword ptr [0x1136f680], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136f680))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b812 jne 0x1134ba2f */
  if (!C.zf) goto L_1134ba2f;
  /* 1134b818 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b81c jne 0x1134b827 */
  if (!C.zf) goto L_1134b827;
  /* 1134b81e mov edx, dword ptr [0x1136f678] */
  EDX = (r32((uint32_t)(0x1136f678)));
  /* 1134b824 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1134b827:;
  /* 1134b827 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b829 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b82b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134b82e push eax */
  push32((uint32_t)(EAX));
  /* 1134b82f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134b832 push ecx */
  push32((uint32_t)(ECX));
  /* 1134b833 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1134b836 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134b838 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134b83a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1134b83d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b840 push edx */
  push32((uint32_t)(EDX));
  /* 1134b841 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1134b844 push eax */
  push32((uint32_t)(EAX));
  /* 1134b845 call dword ptr [0x113712e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712e8))), 0x1134b84bu);
  /* 1134b84b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1134b84e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b852 jne 0x1134b85b */
  if (!C.zf) goto L_1134b85b;
  /* 1134b854 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134b856 jmp 0x1134ba31 */
  goto L_1134ba31;
L_1134b85b:;
  /* 1134b85b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1134b862 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1134b865 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1134b867 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b86a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1134b86c call 0x113464f0 */
  push32(0x1134b871u); f_113464f0();
  /* 1134b871 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1134b874 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1134b877 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1134b87a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1134b87d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1134b884 jmp 0x1134b89d */
  goto L_1134b89d;
  /* 1134b886 mov eax, 1 */
  EAX = (0x1u);
  /* 1134b88b ret  */
  ESPCHK(0x1134b740u, _esp0);
  ESP += 4; return;
  /* 1134b88c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1134b88f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1134b896 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1134b89d:;
  /* 1134b89d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b8a1 jne 0x1134b8aa */
  if (!C.zf) goto L_1134b8aa;
  /* 1134b8a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134b8a5 jmp 0x1134ba31 */
  goto L_1134ba31;
L_1134b8aa:;
  /* 1134b8aa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1134b8ad push edx */
  push32((uint32_t)(EDX));
  /* 1134b8ae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1134b8b1 push eax */
  push32((uint32_t)(EAX));
  /* 1134b8b2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134b8b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1134b8b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134b8b9 push edx */
  push32((uint32_t)(EDX));
  /* 1134b8ba push 1 */
  push32((uint32_t)(0x1u));
  /* 1134b8bc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1134b8bf push eax */
  push32((uint32_t)(EAX));
  /* 1134b8c0 call dword ptr [0x113712e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712e8))), 0x1134b8c6u);
  /* 1134b8c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134b8c8 jne 0x1134b8d1 */
  if (!C.zf) goto L_1134b8d1;
  /* 1134b8ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134b8cc jmp 0x1134ba31 */
  goto L_1134ba31;
L_1134b8d1:;
  /* 1134b8d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b8d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b8d5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1134b8d8 push ecx */
  push32((uint32_t)(ECX));
  /* 1134b8d9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1134b8dc push edx */
  push32((uint32_t)(EDX));
  /* 1134b8dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b8e0 push eax */
  push32((uint32_t)(EAX));
  /* 1134b8e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b8e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1134b8e5 call dword ptr [0x113712d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712d8))), 0x1134b8ebu);
  /* 1134b8eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1134b8ee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b8f2 jne 0x1134b8fb */
  if (!C.zf) goto L_1134b8fb;
  /* 1134b8f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134b8f6 jmp 0x1134ba31 */
  goto L_1134ba31;
L_1134b8fb:;
  /* 1134b8fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b8fe and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1134b904 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134b906 je 0x1134b94b */
  if (C.zf) goto L_1134b94b;
  /* 1134b908 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b90c je 0x1134b946 */
  if (C.zf) goto L_1134b946;
  /* 1134b90e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1134b911 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b914 jle 0x1134b91d */
  if ((C.zf||C.sf!=C.of)) goto L_1134b91d;
  /* 1134b916 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134b918 jmp 0x1134ba31 */
  goto L_1134ba31;
L_1134b91d:;
  /* 1134b91d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1134b920 push ecx */
  push32((uint32_t)(ECX));
  /* 1134b921 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1134b924 push edx */
  push32((uint32_t)(EDX));
  /* 1134b925 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1134b928 push eax */
  push32((uint32_t)(EAX));
  /* 1134b929 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1134b92c push ecx */
  push32((uint32_t)(ECX));
  /* 1134b92d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b930 push edx */
  push32((uint32_t)(EDX));
  /* 1134b931 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b934 push eax */
  push32((uint32_t)(EAX));
  /* 1134b935 call dword ptr [0x113712d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712d8))), 0x1134b93bu);
  /* 1134b93b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134b93d jne 0x1134b946 */
  if (!C.zf) goto L_1134b946;
  /* 1134b93f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134b941 jmp 0x1134ba31 */
  goto L_1134ba31;
L_1134b946:;
  /* 1134b946 jmp 0x1134ba2a */
  goto L_1134ba2a;
L_1134b94b:;
  /* 1134b94b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1134b94e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1134b951 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1134b958 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1134b95b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1134b95d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134b960 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1134b962 call 0x113464f0 */
  push32(0x1134b967u); f_113464f0();
  /* 1134b967 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1134b96a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1134b96d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1134b970 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1134b973 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1134b97a jmp 0x1134b993 */
  goto L_1134b993;
  /* 1134b97c mov eax, 1 */
  EAX = (0x1u);
  /* 1134b981 ret  */
  ESPCHK(0x1134b740u, _esp0);
  ESP += 4; return;
  /* 1134b982 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1134b985 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1134b98c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1134b993:;
  /* 1134b993 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b997 jne 0x1134b9a0 */
  if (!C.zf) goto L_1134b9a0;
  /* 1134b999 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134b99b jmp 0x1134ba31 */
  goto L_1134ba31;
L_1134b9a0:;
  /* 1134b9a0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1134b9a3 push eax */
  push32((uint32_t)(EAX));
  /* 1134b9a4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134b9a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1134b9a8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1134b9ab push edx */
  push32((uint32_t)(EDX));
  /* 1134b9ac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1134b9af push eax */
  push32((uint32_t)(EAX));
  /* 1134b9b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134b9b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134b9b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134b9b7 push edx */
  push32((uint32_t)(EDX));
  /* 1134b9b8 call dword ptr [0x113712d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712d8))), 0x1134b9beu);
  /* 1134b9be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134b9c0 jne 0x1134b9c6 */
  if (!C.zf) goto L_1134b9c6;
  /* 1134b9c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134b9c4 jmp 0x1134ba31 */
  goto L_1134ba31;
L_1134b9c6:;
  /* 1134b9c6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b9ca jne 0x1134b9fa */
  if (!C.zf) goto L_1134b9fa;
  /* 1134b9cc push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b9ce push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b9d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b9d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b9d4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1134b9d7 push eax */
  push32((uint32_t)(EAX));
  /* 1134b9d8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134b9db push ecx */
  push32((uint32_t)(ECX));
  /* 1134b9dc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1134b9e1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1134b9e4 push edx */
  push32((uint32_t)(EDX));
  /* 1134b9e5 call dword ptr [0x11371390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371390))), 0x1134b9ebu);
  /* 1134b9eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1134b9ee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134b9f2 jne 0x1134b9f8 */
  if (!C.zf) goto L_1134b9f8;
  /* 1134b9f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134b9f6 jmp 0x1134ba31 */
  goto L_1134ba31;
L_1134b9f8:;
  /* 1134b9f8 jmp 0x1134ba2a */
  goto L_1134ba2a;
L_1134b9fa:;
  /* 1134b9fa push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b9fc push 0 */
  push32((uint32_t)(0x0u));
  /* 1134b9fe mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1134ba01 push eax */
  push32((uint32_t)(EAX));
  /* 1134ba02 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1134ba05 push ecx */
  push32((uint32_t)(ECX));
  /* 1134ba06 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1134ba09 push edx */
  push32((uint32_t)(EDX));
  /* 1134ba0a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134ba0d push eax */
  push32((uint32_t)(EAX));
  /* 1134ba0e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1134ba13 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1134ba16 push ecx */
  push32((uint32_t)(ECX));
  /* 1134ba17 call dword ptr [0x11371390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371390))), 0x1134ba1du);
  /* 1134ba1d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1134ba20 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ba24 jne 0x1134ba2a */
  if (!C.zf) goto L_1134ba2a;
  /* 1134ba26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134ba28 jmp 0x1134ba31 */
  goto L_1134ba31;
L_1134ba2a:;
  /* 1134ba2a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1134ba2d jmp 0x1134ba31 */
  goto L_1134ba31;
L_1134ba2f:;
  /* 1134ba2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1134ba31:;
  /* 1134ba31 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1134ba34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134ba37 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1134ba3e pop edi */
  EDI = (pop32());
  /* 1134ba3f pop esi */
  ESI = (pop32());
  /* 1134ba40 pop ebx */
  EBX = (pop32());
  /* 1134ba41 mov esp, ebp */
  ESP = (EBP);
  /* 1134ba43 pop ebp */
  EBP = (pop32());
  /* 1134ba44 ret  */
  ESPCHK(0x1134b740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba50 @ 0x1134ba50 (80 bytes, 32 insns) */
void f_1134ba50(void) {
  FTRACE(0x1134ba50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134ba50 push ebp */
  push32((uint32_t)(EBP));
  /* 1134ba51 mov ebp, esp */
  EBP = (ESP);
  /* 1134ba53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134ba56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134ba59 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1134ba5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ba5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1134ba62:;
  /* 1134ba62 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134ba65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134ba68 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134ba6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1134ba6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134ba70 je 0x1134ba87 */
  if (C.zf) goto L_1134ba87;
  /* 1134ba72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ba75 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1134ba78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134ba7a je 0x1134ba87 */
  if (C.zf) goto L_1134ba87;
  /* 1134ba7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ba7f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ba82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134ba85 jmp 0x1134ba62 */
  goto L_1134ba62;
L_1134ba87:;
  /* 1134ba87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ba8a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1134ba8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134ba8f jne 0x1134ba99 */
  if (!C.zf) goto L_1134ba99;
  /* 1134ba91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ba94 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134ba97 jmp 0x1134ba9c */
  goto L_1134ba9c;
L_1134ba99:;
  /* 1134ba99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1134ba9c:;
  /* 1134ba9c mov esp, ebp */
  ESP = (EBP);
  /* 1134ba9e pop ebp */
  EBP = (pop32());
  /* 1134ba9f ret  */
  ESPCHK(0x1134ba50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000baa0 @ 0x1134baa0 (130 bytes, 43 insns) */
void f_1134baa0(void) {
  FTRACE(0x1134baa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134baa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134baa1 mov ebp, esp */
  EBP = (ESP);
  /* 1134baa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134baa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134baa7 cmp eax, dword ptr [0x11370f7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11370f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134baad jae 0x1134bad1 */
  if (!C.cf) goto L_1134bad1;
  /* 1134baaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bab2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1134bab5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bab8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1134babb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134babe mov eax, dword ptr [ecx*4 + 0x11370e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11370e40)));
  /* 1134bac5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1134baca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1134bacd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134bacf jne 0x1134baec */
  if (!C.zf) goto L_1134baec;
L_1134bad1:;
  /* 1134bad1 call 0x1134b220 */
  push32(0x1134bad6u); f_1134b220();
  /* 1134bad6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1134badc call 0x1134b230 */
  push32(0x1134bae1u); f_1134b230();
  /* 1134bae1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1134bae7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134baea jmp 0x1134bb1e */
  goto L_1134bb1e;
L_1134baec:;
  /* 1134baec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134baef push edx */
  push32((uint32_t)(EDX));
  /* 1134baf0 call 0x1134ca40 */
  push32(0x1134baf5u); f_1134ca40();
  /* 1134baf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134baf8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134bafb push eax */
  push32((uint32_t)(EAX));
  /* 1134bafc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134baff push ecx */
  push32((uint32_t)(ECX));
  /* 1134bb00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bb03 push edx */
  push32((uint32_t)(EDX));
  /* 1134bb04 call 0x1134bb30 */
  push32(0x1134bb09u); f_1134bb30();
  /* 1134bb09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134bb0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134bb0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bb12 push eax */
  push32((uint32_t)(EAX));
  /* 1134bb13 call 0x1134cad0 */
  push32(0x1134bb18u); f_1134cad0();
  /* 1134bb18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134bb1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1134bb1e:;
  /* 1134bb1e mov esp, ebp */
  ESP = (EBP);
  /* 1134bb20 pop ebp */
  EBP = (pop32());
  /* 1134bb21 ret  */
  ESPCHK(0x1134baa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb30 @ 0x1134bb30 (178 bytes, 56 insns) */
void f_1134bb30(void) {
  FTRACE(0x1134bb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134bb30 push ebp */
  push32((uint32_t)(EBP));
  /* 1134bb31 mov ebp, esp */
  EBP = (ESP);
  /* 1134bb33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134bb36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bb39 push eax */
  push32((uint32_t)(EAX));
  /* 1134bb3a call 0x1134c8c0 */
  push32(0x1134bb3fu); f_1134c8c0();
  /* 1134bb3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134bb42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1134bb45 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134bb49 jne 0x1134bb5e */
  if (!C.zf) goto L_1134bb5e;
  /* 1134bb4b call 0x1134b220 */
  push32(0x1134bb50u); f_1134b220();
  /* 1134bb50 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1134bb56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134bb59 jmp 0x1134bbde */
  goto L_1134bbde;
L_1134bb5e:;
  /* 1134bb5e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134bb61 push ecx */
  push32((uint32_t)(ECX));
  /* 1134bb62 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134bb64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134bb67 push edx */
  push32((uint32_t)(EDX));
  /* 1134bb68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134bb6b push eax */
  push32((uint32_t)(EAX));
  /* 1134bb6c call dword ptr [0x113712d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712d4))), 0x1134bb72u);
  /* 1134bb72 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1134bb75 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134bb79 jne 0x1134bb86 */
  if (!C.zf) goto L_1134bb86;
  /* 1134bb7b call dword ptr [0x11371364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371364))), 0x1134bb81u);
  /* 1134bb81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134bb84 jmp 0x1134bb8d */
  goto L_1134bb8d;
L_1134bb86:;
  /* 1134bb86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1134bb8d:;
  /* 1134bb8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134bb91 je 0x1134bba4 */
  if (C.zf) goto L_1134bba4;
  /* 1134bb93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134bb96 push ecx */
  push32((uint32_t)(ECX));
  /* 1134bb97 call 0x1134b180 */
  push32(0x1134bb9cu); f_1134b180();
  /* 1134bb9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134bb9f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134bba2 jmp 0x1134bbde */
  goto L_1134bbde;
L_1134bba4:;
  /* 1134bba4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bba7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1134bbaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bbad and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1134bbb0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134bbb3 mov ecx, dword ptr [edx*4 + 0x11370e40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11370e40)));
  /* 1134bbba mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1134bbbe and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1134bbc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bbc4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1134bbc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bbca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1134bbcd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134bbd0 mov eax, dword ptr [eax*4 + 0x11370e40] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11370e40)));
  /* 1134bbd7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1134bbdb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1134bbde:;
  /* 1134bbde mov esp, ebp */
  ESP = (EBP);
  /* 1134bbe0 pop ebp */
  EBP = (pop32());
  /* 1134bbe1 ret  */
  ESPCHK(0x1134bb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbf0 @ 0x1134bbf0 (130 bytes, 43 insns) */
void f_1134bbf0(void) {
  FTRACE(0x1134bbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134bbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134bbf1 mov ebp, esp */
  EBP = (ESP);
  /* 1134bbf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134bbf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bbf7 cmp eax, dword ptr [0x11370f7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11370f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134bbfd jae 0x1134bc21 */
  if (!C.cf) goto L_1134bc21;
  /* 1134bbff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bc02 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1134bc05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bc08 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1134bc0b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134bc0e mov eax, dword ptr [ecx*4 + 0x11370e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11370e40)));
  /* 1134bc15 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1134bc1a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1134bc1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134bc1f jne 0x1134bc3c */
  if (!C.zf) goto L_1134bc3c;
L_1134bc21:;
  /* 1134bc21 call 0x1134b220 */
  push32(0x1134bc26u); f_1134b220();
  /* 1134bc26 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1134bc2c call 0x1134b230 */
  push32(0x1134bc31u); f_1134b230();
  /* 1134bc31 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1134bc37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134bc3a jmp 0x1134bc6e */
  goto L_1134bc6e;
L_1134bc3c:;
  /* 1134bc3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bc3f push edx */
  push32((uint32_t)(EDX));
  /* 1134bc40 call 0x1134ca40 */
  push32(0x1134bc45u); f_1134ca40();
  /* 1134bc45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134bc48 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134bc4b push eax */
  push32((uint32_t)(EAX));
  /* 1134bc4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134bc4f push ecx */
  push32((uint32_t)(ECX));
  /* 1134bc50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bc53 push edx */
  push32((uint32_t)(EDX));
  /* 1134bc54 call 0x1134bc80 */
  push32(0x1134bc59u); f_1134bc80();
  /* 1134bc59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134bc5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134bc5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bc62 push eax */
  push32((uint32_t)(EAX));
  /* 1134bc63 call 0x1134cad0 */
  push32(0x1134bc68u); f_1134cad0();
  /* 1134bc68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134bc6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1134bc6e:;
  /* 1134bc6e mov esp, ebp */
  ESP = (EBP);
  /* 1134bc70 pop ebp */
  EBP = (pop32());
  /* 1134bc71 ret  */
  ESPCHK(0x1134bbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc80 @ 0x1134bc80 (627 bytes, 182 insns) */
void f_1134bc80(void) {
  FTRACE(0x1134bc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134bc80 push ebp */
  push32((uint32_t)(EBP));
  /* 1134bc81 mov ebp, esp */
  EBP = (ESP);
  /* 1134bc83 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134bc89 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1134bc90 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134bc93 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1134bc99 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134bc9d jne 0x1134bca6 */
  if (!C.zf) goto L_1134bca6;
  /* 1134bc9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134bca1 jmp 0x1134beef */
  goto L_1134beef;
L_1134bca6:;
  /* 1134bca6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bca9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1134bcac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bcaf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1134bcb2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134bcb5 mov eax, dword ptr [ecx*4 + 0x11370e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11370e40)));
  /* 1134bcbc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1134bcc1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1134bcc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134bcc6 je 0x1134bcd8 */
  if (C.zf) goto L_1134bcd8;
  /* 1134bcc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134bcca push 0 */
  push32((uint32_t)(0x0u));
  /* 1134bccc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bccf push edx */
  push32((uint32_t)(EDX));
  /* 1134bcd0 call 0x1134bb30 */
  push32(0x1134bcd5u); f_1134bb30();
  /* 1134bcd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134bcd8:;
  /* 1134bcd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bcdb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1134bcde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bce1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1134bce4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134bce7 mov edx, dword ptr [eax*4 + 0x11370e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11370e40)));
  /* 1134bcee movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1134bcf3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1134bcf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134bcfa je 0x1134be0c */
  if (C.zf) goto L_1134be0c;
  /* 1134bd00 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134bd03 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1134bd06 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1134bd0d:;
  /* 1134bd0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134bd10 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134bd13 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134bd16 jae 0x1134be0a */
  if (!C.cf) goto L_1134be0a;
  /* 1134bd1c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1134bd22 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1134bd25:;
  /* 1134bd25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134bd28 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1134bd2e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134bd30 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134bd36 jge 0x1134bd97 */
  if ((C.sf==C.of)) goto L_1134bd97;
  /* 1134bd38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134bd3b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134bd3e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134bd41 jae 0x1134bd97 */
  if (!C.cf) goto L_1134bd97;
  /* 1134bd43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134bd46 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1134bd48 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1134bd4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134bd51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134bd54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134bd57 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1134bd5e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134bd61 jne 0x1134bd81 */
  if (!C.zf) goto L_1134bd81;
  /* 1134bd63 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1134bd69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134bd6c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1134bd72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134bd75 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1134bd78 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134bd7b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134bd7e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1134bd81:;
  /* 1134bd81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134bd84 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1134bd8a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1134bd8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134bd8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134bd92 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134bd95 jmp 0x1134bd25 */
  goto L_1134bd25;
L_1134bd97:;
  /* 1134bd97 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134bd99 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1134bd9f push edx */
  push32((uint32_t)(EDX));
  /* 1134bda0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134bda3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1134bda9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134bdab push eax */
  push32((uint32_t)(EAX));
  /* 1134bdac lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1134bdb2 push edx */
  push32((uint32_t)(EDX));
  /* 1134bdb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bdb6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1134bdb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bdbc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1134bdbf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134bdc2 mov edx, dword ptr [eax*4 + 0x11370e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11370e40)));
  /* 1134bdc9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1134bdcc push eax */
  push32((uint32_t)(EAX));
  /* 1134bdcd call dword ptr [0x11371324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371324))), 0x1134bdd3u);
  /* 1134bdd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134bdd5 je 0x1134bdfa */
  if (C.zf) goto L_1134bdfa;
  /* 1134bdd7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134bdda add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134bde0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1134bde3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134bde6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1134bdec sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134bdee cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134bdf4 jge 0x1134bdf8 */
  if ((C.sf==C.of)) goto L_1134bdf8;
  /* 1134bdf6 jmp 0x1134be0a */
  goto L_1134be0a;
L_1134bdf8:;
  /* 1134bdf8 jmp 0x1134be05 */
  goto L_1134be05;
L_1134bdfa:;
  /* 1134bdfa call dword ptr [0x11371364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371364))), 0x1134be00u);
  /* 1134be00 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1134be03 jmp 0x1134be0a */
  goto L_1134be0a;
L_1134be05:;
  /* 1134be05 jmp 0x1134bd0d */
  goto L_1134bd0d;
L_1134be0a:;
  /* 1134be0a jmp 0x1134be5c */
  goto L_1134be5c;
L_1134be0c:;
  /* 1134be0c push 0 */
  push32((uint32_t)(0x0u));
  /* 1134be0e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1134be14 push ecx */
  push32((uint32_t)(ECX));
  /* 1134be15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134be18 push edx */
  push32((uint32_t)(EDX));
  /* 1134be19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134be1c push eax */
  push32((uint32_t)(EAX));
  /* 1134be1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134be20 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1134be23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134be26 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1134be29 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134be2c mov eax, dword ptr [ecx*4 + 0x11370e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11370e40)));
  /* 1134be33 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1134be36 push ecx */
  push32((uint32_t)(ECX));
  /* 1134be37 call dword ptr [0x11371324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371324))), 0x1134be3du);
  /* 1134be3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134be3f je 0x1134be53 */
  if (C.zf) goto L_1134be53;
  /* 1134be41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1134be48 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1134be4e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1134be51 jmp 0x1134be5c */
  goto L_1134be5c;
L_1134be53:;
  /* 1134be53 call dword ptr [0x11371364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371364))), 0x1134be59u);
  /* 1134be59 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1134be5c:;
  /* 1134be5c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134be60 jne 0x1134bee6 */
  if (!C.zf) goto L_1134bee6;
  /* 1134be66 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134be6a je 0x1134be9a */
  if (C.zf) goto L_1134be9a;
  /* 1134be6c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134be70 jne 0x1134be89 */
  if (!C.zf) goto L_1134be89;
  /* 1134be72 call 0x1134b220 */
  push32(0x1134be77u); f_1134b220();
  /* 1134be77 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1134be7d call 0x1134b230 */
  push32(0x1134be82u); f_1134b230();
  /* 1134be82 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134be85 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1134be87 jmp 0x1134be95 */
  goto L_1134be95;
L_1134be89:;
  /* 1134be89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134be8c push edx */
  push32((uint32_t)(EDX));
  /* 1134be8d call 0x1134b180 */
  push32(0x1134be92u); f_1134b180();
  /* 1134be92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134be95:;
  /* 1134be95 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134be98 jmp 0x1134beef */
  goto L_1134beef;
L_1134be9a:;
  /* 1134be9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134be9d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1134bea0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bea3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1134bea6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134bea9 mov edx, dword ptr [eax*4 + 0x11370e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11370e40)));
  /* 1134beb0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1134beb5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1134beb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134beba je 0x1134becb */
  if (C.zf) goto L_1134becb;
  /* 1134bebc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134bebf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1134bec2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134bec5 jne 0x1134becb */
  if (!C.zf) goto L_1134becb;
  /* 1134bec7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134bec9 jmp 0x1134beef */
  goto L_1134beef;
L_1134becb:;
  /* 1134becb call 0x1134b220 */
  push32(0x1134bed0u); f_1134b220();
  /* 1134bed0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1134bed6 call 0x1134b230 */
  push32(0x1134bedbu); f_1134b230();
  /* 1134bedb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1134bee1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134bee4 jmp 0x1134beef */
  goto L_1134beef;
L_1134bee6:;
  /* 1134bee6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134bee9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1134beef:;
  /* 1134beef mov esp, ebp */
  ESP = (EBP);
  /* 1134bef1 pop ebp */
  EBP = (pop32());
  /* 1134bef2 ret  */
  ESPCHK(0x1134bc80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf00 @ 0x1134bf00 (199 bytes, 68 insns) */
void f_1134bf00(void) {
  FTRACE(0x1134bf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134bf00 push ebp */
  push32((uint32_t)(EBP));
  /* 1134bf01 mov ebp, esp */
  EBP = (ESP);
  /* 1134bf03 push ecx */
  push32((uint32_t)(ECX));
  /* 1134bf04 push ebx */
  push32((uint32_t)(EBX));
  /* 1134bf05 push esi */
  push32((uint32_t)(ESI));
  /* 1134bf06 push edi */
  push32((uint32_t)(EDI));
L_1134bf07:;
  /* 1134bf07 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134bf0b jne 0x1134bf2b */
  if (!C.zf) goto L_1134bf2b;
  /* 1134bf0d push 0x1136aefc */
  push32((uint32_t)(0x1136aefcu));
  /* 1134bf12 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134bf14 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1134bf16 push 0x1136afc8 */
  push32((uint32_t)(0x1136afc8u));
  /* 1134bf1b push 2 */
  push32((uint32_t)(0x2u));
  /* 1134bf1d call 0x11342410 */
  push32(0x1134bf22u); f_11342410();
  /* 1134bf22 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134bf25 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134bf28 jne 0x1134bf2b */
  if (!C.zf) goto L_1134bf2b;
  /* 1134bf2a int3  */
  x86_unimpl("int3 @ 0x1134bf2a");
L_1134bf2b:;
  /* 1134bf2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134bf2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134bf2f jne 0x1134bf07 */
  if (!C.zf) goto L_1134bf07;
  /* 1134bf31 mov ecx, dword ptr [0x1136f684] */
  ECX = (r32((uint32_t)(0x1136f684)));
  /* 1134bf37 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134bf3a mov dword ptr [0x1136f684], ecx */
  w32((uint32_t)(0x1136f684), (ECX));
  /* 1134bf40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bf43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1134bf46 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1134bf48 push 0x1136afc8 */
  push32((uint32_t)(0x1136afc8u));
  /* 1134bf4d push 2 */
  push32((uint32_t)(0x2u));
  /* 1134bf4f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1134bf54 call 0x11343350 */
  push32(0x1134bf59u); f_11343350();
  /* 1134bf59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134bf5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134bf5f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1134bf62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134bf65 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134bf69 je 0x1134bf86 */
  if (C.zf) goto L_1134bf86;
  /* 1134bf6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134bf6e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1134bf71 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1134bf74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134bf77 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1134bf7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134bf7d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1134bf84 jmp 0x1134bfab */
  goto L_1134bfab;
L_1134bf86:;
  /* 1134bf86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134bf89 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1134bf8c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1134bf8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134bf92 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1134bf95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134bf98 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134bf9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134bf9e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1134bfa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134bfa4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1134bfab:;
  /* 1134bfab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134bfae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134bfb1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1134bfb4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1134bfb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134bfb9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1134bfc0 pop edi */
  EDI = (pop32());
  /* 1134bfc1 pop esi */
  ESI = (pop32());
  /* 1134bfc2 pop ebx */
  EBX = (pop32());
  /* 1134bfc3 mov esp, ebp */
  ESP = (EBP);
  /* 1134bfc5 pop ebp */
  EBP = (pop32());
  /* 1134bfc6 ret  */
  ESPCHK(0x1134bf00u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1134bfd0 (50 bytes, 17 insns) */
void f_1134bfd0(void) {
  FTRACE(0x1134bfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134bfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134bfd1 mov ebp, esp */
  EBP = (ESP);
  /* 1134bfd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bfd6 cmp eax, dword ptr [0x11370f7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11370f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134bfdc jb 0x1134bfe2 */
  if (C.cf) goto L_1134bfe2;
  /* 1134bfde xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134bfe0 jmp 0x1134c000 */
  goto L_1134c000;
L_1134bfe2:;
  /* 1134bfe2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bfe5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1134bfe8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134bfeb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1134bfee imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134bff1 mov eax, dword ptr [ecx*4 + 0x11370e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11370e40)));
  /* 1134bff8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1134bffd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1134c000:;
  /* 1134c000 pop ebp */
  EBP = (pop32());
  /* 1134c001 ret  */
  ESPCHK(0x1134bfd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c010 @ 0x1134c010 (300 bytes, 80 insns) */
void f_1134c010(void) {
  FTRACE(0x1134c010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134c010 push ebp */
  push32((uint32_t)(EBP));
  /* 1134c011 mov ebp, esp */
  EBP = (ESP);
  /* 1134c013 push ecx */
  push32((uint32_t)(ECX));
  /* 1134c014 cmp dword ptr [0x11370b40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11370b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c01b jne 0x1134c029 */
  if (!C.zf) goto L_1134c029;
  /* 1134c01d mov dword ptr [0x11370b40], 0x200 */
  w32((uint32_t)(0x11370b40), (0x200u));
  /* 1134c027 jmp 0x1134c03c */
  goto L_1134c03c;
L_1134c029:;
  /* 1134c029 cmp dword ptr [0x11370b40], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11370b40))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c030 jge 0x1134c03c */
  if ((C.sf==C.of)) goto L_1134c03c;
  /* 1134c032 mov dword ptr [0x11370b40], 0x14 */
  w32((uint32_t)(0x11370b40), (0x14u));
L_1134c03c:;
  /* 1134c03c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1134c041 push 0x1136afd4 */
  push32((uint32_t)(0x1136afd4u));
  /* 1134c046 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134c048 push 4 */
  push32((uint32_t)(0x4u));
  /* 1134c04a mov eax, dword ptr [0x11370b40] */
  EAX = (r32((uint32_t)(0x11370b40)));
  /* 1134c04f push eax */
  push32((uint32_t)(EAX));
  /* 1134c050 call 0x11343760 */
  push32(0x1134c055u); f_11343760();
  /* 1134c055 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c058 mov dword ptr [0x1136f7f8], eax */
  w32((uint32_t)(0x1136f7f8), (EAX));
  /* 1134c05d cmp dword ptr [0x1136f7f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c064 jne 0x1134c0a5 */
  if (!C.zf) goto L_1134c0a5;
  /* 1134c066 mov dword ptr [0x11370b40], 0x14 */
  w32((uint32_t)(0x11370b40), (0x14u));
  /* 1134c070 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1134c075 push 0x1136afd4 */
  push32((uint32_t)(0x1136afd4u));
  /* 1134c07a push 2 */
  push32((uint32_t)(0x2u));
  /* 1134c07c push 4 */
  push32((uint32_t)(0x4u));
  /* 1134c07e mov ecx, dword ptr [0x11370b40] */
  ECX = (r32((uint32_t)(0x11370b40)));
  /* 1134c084 push ecx */
  push32((uint32_t)(ECX));
  /* 1134c085 call 0x11343760 */
  push32(0x1134c08au); f_11343760();
  /* 1134c08a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c08d mov dword ptr [0x1136f7f8], eax */
  w32((uint32_t)(0x1136f7f8), (EAX));
  /* 1134c092 cmp dword ptr [0x1136f7f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c099 jne 0x1134c0a5 */
  if (!C.zf) goto L_1134c0a5;
  /* 1134c09b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1134c09d call 0x113422c0 */
  push32(0x1134c0a2u); f_113422c0();
  /* 1134c0a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134c0a5:;
  /* 1134c0a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1134c0ac jmp 0x1134c0b7 */
  goto L_1134c0b7;
L_1134c0ae:;
  /* 1134c0ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c0b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c0b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1134c0b7:;
  /* 1134c0b7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c0bb jge 0x1134c0d6 */
  if ((C.sf==C.of)) goto L_1134c0d6;
  /* 1134c0bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c0c0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1134c0c3 add eax, 0x1136e120 */
  { uint32_t _a=(EAX),_b=(0x1136e120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c0c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c0cb mov edx, dword ptr [0x1136f7f8] */
  EDX = (r32((uint32_t)(0x1136f7f8)));
  /* 1134c0d1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1134c0d4 jmp 0x1134c0ae */
  goto L_1134c0ae;
L_1134c0d6:;
  /* 1134c0d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1134c0dd jmp 0x1134c0e8 */
  goto L_1134c0e8;
L_1134c0df:;
  /* 1134c0df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c0e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c0e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1134c0e8:;
  /* 1134c0e8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c0ec jge 0x1134c138 */
  if ((C.sf==C.of)) goto L_1134c138;
  /* 1134c0ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c0f1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1134c0f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c0f7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1134c0fa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134c0fd mov eax, dword ptr [ecx*4 + 0x11370e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11370e40)));
  /* 1134c104 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c108 je 0x1134c126 */
  if (C.zf) goto L_1134c126;
  /* 1134c10a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c10d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1134c110 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c113 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1134c116 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134c119 mov eax, dword ptr [ecx*4 + 0x11370e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11370e40)));
  /* 1134c120 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c124 jne 0x1134c136 */
  if (!C.zf) goto L_1134c136;
L_1134c126:;
  /* 1134c126 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c129 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1134c12c mov dword ptr [ecx + 0x1136e130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1136e130), (0xffffffffu));
L_1134c136:;
  /* 1134c136 jmp 0x1134c0df */
  goto L_1134c0df;
L_1134c138:;
  /* 1134c138 mov esp, ebp */
  ESP = (EBP);
  /* 1134c13a pop ebp */
  EBP = (pop32());
  /* 1134c13b ret  */
  ESPCHK(0x1134c010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c140 @ 0x1134c140 (26 bytes, 9 insns) */
void f_1134c140(void) {
  FTRACE(0x1134c140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134c140 push ebp */
  push32((uint32_t)(EBP));
  /* 1134c141 mov ebp, esp */
  EBP = (ESP);
  /* 1134c143 call 0x1134cd40 */
  push32(0x1134c148u); f_1134cd40();
  /* 1134c148 movsx eax, byte ptr [0x1136f49c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1136f49c))));
  /* 1134c14f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134c151 je 0x1134c158 */
  if (C.zf) goto L_1134c158;
  /* 1134c153 call 0x1134cb00 */
  push32(0x1134c158u); f_1134cb00();
L_1134c158:;
  /* 1134c158 pop ebp */
  EBP = (pop32());
  /* 1134c159 ret  */
  ESPCHK(0x1134c140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c160 @ 0x1134c160 (61 bytes, 20 insns) */
void f_1134c160(void) {
  FTRACE(0x1134c160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134c160 push ebp */
  push32((uint32_t)(EBP));
  /* 1134c161 mov ebp, esp */
  EBP = (ESP);
  /* 1134c163 cmp dword ptr [ebp + 8], 0x1136e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1136e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c16a jb 0x1134c18e */
  if (C.cf) goto L_1134c18e;
  /* 1134c16c cmp dword ptr [ebp + 8], 0x1136e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1136e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c173 ja 0x1134c18e */
  if ((!C.cf&&!C.zf)) goto L_1134c18e;
  /* 1134c175 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c178 sub eax, 0x1136e120 */
  { uint32_t _a=(EAX),_b=(0x1136e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134c17d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1134c180 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c183 push eax */
  push32((uint32_t)(EAX));
  /* 1134c184 call 0x11346d50 */
  push32(0x1134c189u); f_11346d50();
  /* 1134c189 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c18c jmp 0x1134c19b */
  goto L_1134c19b;
L_1134c18e:;
  /* 1134c18e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c191 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c194 push ecx */
  push32((uint32_t)(ECX));
  /* 1134c195 call dword ptr [0x11371310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371310))), 0x1134c19bu);
L_1134c19b:;
  /* 1134c19b pop ebp */
  EBP = (pop32());
  /* 1134c19c ret  */
  ESPCHK(0x1134c160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1a0 @ 0x1134c1a0 (41 bytes, 16 insns) */
void f_1134c1a0(void) {
  FTRACE(0x1134c1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134c1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134c1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1134c1a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c1a7 jge 0x1134c1ba */
  if ((C.sf==C.of)) goto L_1134c1ba;
  /* 1134c1a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c1ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c1af push eax */
  push32((uint32_t)(EAX));
  /* 1134c1b0 call 0x11346d50 */
  push32(0x1134c1b5u); f_11346d50();
  /* 1134c1b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c1b8 jmp 0x1134c1c7 */
  goto L_1134c1c7;
L_1134c1ba:;
  /* 1134c1ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134c1bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c1c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1134c1c1 call dword ptr [0x11371310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371310))), 0x1134c1c7u);
L_1134c1c7:;
  /* 1134c1c7 pop ebp */
  EBP = (pop32());
  /* 1134c1c8 ret  */
  ESPCHK(0x1134c1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1d0 @ 0x1134c1d0 (61 bytes, 20 insns) */
void f_1134c1d0(void) {
  FTRACE(0x1134c1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134c1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134c1d1 mov ebp, esp */
  EBP = (ESP);
  /* 1134c1d3 cmp dword ptr [ebp + 8], 0x1136e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1136e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c1da jb 0x1134c1fe */
  if (C.cf) goto L_1134c1fe;
  /* 1134c1dc cmp dword ptr [ebp + 8], 0x1136e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1136e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c1e3 ja 0x1134c1fe */
  if ((!C.cf&&!C.zf)) goto L_1134c1fe;
  /* 1134c1e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c1e8 sub eax, 0x1136e120 */
  { uint32_t _a=(EAX),_b=(0x1136e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134c1ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1134c1f0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c1f3 push eax */
  push32((uint32_t)(EAX));
  /* 1134c1f4 call 0x11346df0 */
  push32(0x1134c1f9u); f_11346df0();
  /* 1134c1f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c1fc jmp 0x1134c20b */
  goto L_1134c20b;
L_1134c1fe:;
  /* 1134c1fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c201 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c204 push ecx */
  push32((uint32_t)(ECX));
  /* 1134c205 call dword ptr [0x1137130c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137130c))), 0x1134c20bu);
L_1134c20b:;
  /* 1134c20b pop ebp */
  EBP = (pop32());
  /* 1134c20c ret  */
  ESPCHK(0x1134c1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c210 @ 0x1134c210 (41 bytes, 16 insns) */
void f_1134c210(void) {
  FTRACE(0x1134c210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134c210 push ebp */
  push32((uint32_t)(EBP));
  /* 1134c211 mov ebp, esp */
  EBP = (ESP);
  /* 1134c213 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c217 jge 0x1134c22a */
  if ((C.sf==C.of)) goto L_1134c22a;
  /* 1134c219 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c21c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c21f push eax */
  push32((uint32_t)(EAX));
  /* 1134c220 call 0x11346df0 */
  push32(0x1134c225u); f_11346df0();
  /* 1134c225 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c228 jmp 0x1134c237 */
  goto L_1134c237;
L_1134c22a:;
  /* 1134c22a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134c22d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c230 push ecx */
  push32((uint32_t)(ECX));
  /* 1134c231 call dword ptr [0x1137130c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137130c))), 0x1134c237u);
L_1134c237:;
  /* 1134c237 pop ebp */
  EBP = (pop32());
  /* 1134c238 ret  */
  ESPCHK(0x1134c210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c240 @ 0x1134c240 (119 bytes, 34 insns) */
void f_1134c240(void) {
  FTRACE(0x1134c240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134c240 push ebp */
  push32((uint32_t)(EBP));
  /* 1134c241 mov ebp, esp */
  EBP = (ESP);
  /* 1134c243 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134c246 push 0x1136f7f4 */
  push32((uint32_t)(0x1136f7f4u));
  /* 1134c24b call dword ptr [0x11371338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371338))), 0x1134c251u);
  /* 1134c251 cmp dword ptr [0x1136f7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c258 je 0x1134c278 */
  if (C.zf) goto L_1134c278;
  /* 1134c25a push 0x1136f7f4 */
  push32((uint32_t)(0x1136f7f4u));
  /* 1134c25f call dword ptr [0x11371328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371328))), 0x1134c265u);
  /* 1134c265 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1134c267 call 0x11346d50 */
  push32(0x1134c26cu); f_11346d50();
  /* 1134c26c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c26f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1134c276 jmp 0x1134c27f */
  goto L_1134c27f;
L_1134c278:;
  /* 1134c278 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1134c27f:;
  /* 1134c27f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1134c283 push eax */
  push32((uint32_t)(EAX));
  /* 1134c284 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c287 push ecx */
  push32((uint32_t)(ECX));
  /* 1134c288 call 0x1134c2c0 */
  push32(0x1134c28du); f_1134c2c0();
  /* 1134c28d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c290 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1134c293 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c297 je 0x1134c2a5 */
  if (C.zf) goto L_1134c2a5;
  /* 1134c299 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1134c29b call 0x11346df0 */
  push32(0x1134c2a0u); f_11346df0();
  /* 1134c2a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c2a3 jmp 0x1134c2b0 */
  goto L_1134c2b0;
L_1134c2a5:;
  /* 1134c2a5 push 0x1136f7f4 */
  push32((uint32_t)(0x1136f7f4u));
  /* 1134c2aa call dword ptr [0x11371328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371328))), 0x1134c2b0u);
L_1134c2b0:;
  /* 1134c2b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134c2b3 mov esp, ebp */
  ESP = (EBP);
  /* 1134c2b5 pop ebp */
  EBP = (pop32());
  /* 1134c2b6 ret  */
  ESPCHK(0x1134c240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2c0 @ 0x1134c2c0 (160 bytes, 50 insns) */
void f_1134c2c0(void) {
  FTRACE(0x1134c2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134c2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134c2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1134c2c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134c2c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c2ca jne 0x1134c2d3 */
  if (!C.zf) goto L_1134c2d3;
  /* 1134c2cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134c2ce jmp 0x1134c35c */
  goto L_1134c35c;
L_1134c2d3:;
  /* 1134c2d3 cmp dword ptr [0x1136f668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c2da jne 0x1134c30a */
  if (!C.zf) goto L_1134c30a;
  /* 1134c2dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134c2df and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134c2e4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c2e9 jle 0x1134c2fb */
  if ((C.zf||C.sf!=C.of)) goto L_1134c2fb;
  /* 1134c2eb call 0x1134b220 */
  push32(0x1134c2f0u); f_1134b220();
  /* 1134c2f0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1134c2f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134c2f9 jmp 0x1134c35c */
  goto L_1134c35c;
L_1134c2fb:;
  /* 1134c2fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c2fe mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1134c301 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1134c303 mov eax, 1 */
  EAX = (0x1u);
  /* 1134c308 jmp 0x1134c35c */
  goto L_1134c35c;
L_1134c30a:;
  /* 1134c30a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1134c311 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1134c314 push eax */
  push32((uint32_t)(EAX));
  /* 1134c315 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134c317 mov ecx, dword ptr [0x1136dea4] */
  ECX = (r32((uint32_t)(0x1136dea4)));
  /* 1134c31d push ecx */
  push32((uint32_t)(ECX));
  /* 1134c31e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c321 push edx */
  push32((uint32_t)(EDX));
  /* 1134c322 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134c324 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1134c327 push eax */
  push32((uint32_t)(EAX));
  /* 1134c328 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1134c32d mov ecx, dword ptr [0x1136f678] */
  ECX = (r32((uint32_t)(0x1136f678)));
  /* 1134c333 push ecx */
  push32((uint32_t)(ECX));
  /* 1134c334 call dword ptr [0x11371390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371390))), 0x1134c33au);
  /* 1134c33a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134c33d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c341 je 0x1134c349 */
  if (C.zf) goto L_1134c349;
  /* 1134c343 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c347 je 0x1134c359 */
  if (C.zf) goto L_1134c359;
L_1134c349:;
  /* 1134c349 call 0x1134b220 */
  push32(0x1134c34eu); f_1134b220();
  /* 1134c34e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1134c354 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134c357 jmp 0x1134c35c */
  goto L_1134c35c;
L_1134c359:;
  /* 1134c359 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1134c35c:;
  /* 1134c35c mov esp, ebp */
  ESP = (EBP);
  /* 1134c35e pop ebp */
  EBP = (pop32());
  /* 1134c35f ret  */
  ESPCHK(0x1134c2c0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1134c360 (32 bytes, 18 insns) */
void f_1134c360(void) {
  FTRACE(0x1134c360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134c360 push ebp */
  push32((uint32_t)(EBP));
  /* 1134c361 mov ebp, esp */
  EBP = (ESP);
  /* 1134c363 push ebx */
  push32((uint32_t)(EBX));
  /* 1134c364 push esi */
  push32((uint32_t)(ESI));
  /* 1134c365 push edi */
  push32((uint32_t)(EDI));
  /* 1134c366 push ebp */
  push32((uint32_t)(EBP));
  /* 1134c367 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134c369 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134c36b push 0x1134c378 */
  push32((uint32_t)(0x1134c378u));
  /* 1134c370 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1134c373 call 0x11353aac */
  push32(0x1134c378u); f_11353aac();
  /* 1134c378 pop ebp */
  EBP = (pop32());
  /* 1134c379 pop edi */
  EDI = (pop32());
  /* 1134c37a pop esi */
  ESI = (pop32());
  /* 1134c37b pop ebx */
  EBX = (pop32());
  /* 1134c37c mov esp, ebp */
  ESP = (EBP);
  /* 1134c37e pop ebp */
  EBP = (pop32());
  /* 1134c37f ret  */
  ESPCHK(0x1134c360u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1134c3a2 (104 bytes, 33 insns) */
void f_1134c3a2(void) {
  FTRACE(0x1134c3a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134c3a2 push ebx */
  push32((uint32_t)(EBX));
  /* 1134c3a3 push esi */
  push32((uint32_t)(ESI));
  /* 1134c3a4 push edi */
  push32((uint32_t)(EDI));
  /* 1134c3a5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1134c3a9 push eax */
  push32((uint32_t)(EAX));
  /* 1134c3aa push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1134c3ac push 0x1134c380 */
  push32((uint32_t)(0x1134c380u));
  /* 1134c3b1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1134c3b8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1134c3bf:;
  /* 1134c3bf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1134c3c3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1134c3c6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1134c3c9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c3cc je 0x1134c3fc */
  if (C.zf) goto L_1134c3fc;
  /* 1134c3ce cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c3d2 je 0x1134c3fc */
  if (C.zf) goto L_1134c3fc;
  /* 1134c3d4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1134c3d7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1134c3da mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1134c3de mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1134c3e1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c3e6 jne 0x1134c3fa */
  if (!C.zf) goto L_1134c3fa;
  /* 1134c3e8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1134c3ed mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1134c3f1 call 0x1134c436 */
  push32(0x1134c3f6u); f_1134c436();
  /* 1134c3f6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1134c3fau);
L_1134c3fa:;
  /* 1134c3fa jmp 0x1134c3bf */
  goto L_1134c3bf;
L_1134c3fc:;
  /* 1134c3fc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1134c403 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c406 pop edi */
  EDI = (pop32());
  /* 1134c407 pop esi */
  ESI = (pop32());
  /* 1134c408 pop ebx */
  EBX = (pop32());
  /* 1134c409 ret  */
  ESPCHK(0x1134c3a2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c436 @ 0x1134c436 (24 bytes, 10 insns) */
void f_1134c436(void) {
  FTRACE(0x1134c436u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134c436 push ebx */
  push32((uint32_t)(EBX));
  /* 1134c437 push ecx */
  push32((uint32_t)(ECX));
  /* 1134c438 mov ebx, 0x1136e3b8 */
  EBX = (0x1136e3b8u);
  /* 1134c43d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c440 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1134c443 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1134c446 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1134c449 pop ecx */
  ECX = (pop32());
  /* 1134c44a pop ebx */
  EBX = (pop32());
  /* 1134c44b ret 4 */
  ESPCHK(0x1134c436u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c515 @ 0x1134c515 (27 bytes, 11 insns) */
void f_1134c515(void) {
  FTRACE(0x1134c515u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134c515 push ebp */
  push32((uint32_t)(EBP));
  /* 1134c516 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1134c51a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1134c51c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1134c51f push eax */
  push32((uint32_t)(EAX));
  /* 1134c520 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1134c523 push eax */
  push32((uint32_t)(EAX));
  /* 1134c524 call 0x1134c3a2 */
  push32(0x1134c529u); f_1134c3a2();
  /* 1134c529 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c52c pop ebp */
  EBP = (pop32());
  /* 1134c52d ret 4 */
  ESPCHK(0x1134c515u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c530 @ 0x1134c530 (482 bytes, 138 insns) */
void f_1134c530(void) {
  FTRACE(0x1134c530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134c530 push ebp */
  push32((uint32_t)(EBP));
  /* 1134c531 mov ebp, esp */
  EBP = (ESP);
  /* 1134c533 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134c536 push esi */
  push32((uint32_t)(ESI));
  /* 1134c537 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1134c53e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1134c540 call 0x11346d50 */
  push32(0x1134c545u); f_11346d50();
  /* 1134c545 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c548 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1134c54f jmp 0x1134c55a */
  goto L_1134c55a;
L_1134c551:;
  /* 1134c551 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134c554 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c557 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1134c55a:;
  /* 1134c55a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c55e jge 0x1134c700 */
  if ((C.sf==C.of)) goto L_1134c700;
  /* 1134c564 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134c567 cmp dword ptr [ecx*4 + 0x11370e40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11370e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c56f je 0x1134c666 */
  if (C.zf) goto L_1134c666;
  /* 1134c575 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134c578 mov eax, dword ptr [edx*4 + 0x11370e40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11370e40)));
  /* 1134c57f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134c582 jmp 0x1134c58d */
  goto L_1134c58d;
L_1134c584:;
  /* 1134c584 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c587 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c58a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1134c58d:;
  /* 1134c58d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134c590 mov eax, dword ptr [edx*4 + 0x11370e40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11370e40)));
  /* 1134c597 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c59c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c59f jae 0x1134c656 */
  if (!C.cf) goto L_1134c656;
  /* 1134c5a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c5a8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1134c5ac and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1134c5af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134c5b1 jne 0x1134c651 */
  if (!C.zf) goto L_1134c651;
  /* 1134c5b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c5ba cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c5be jne 0x1134c5f9 */
  if (!C.zf) goto L_1134c5f9;
  /* 1134c5c0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1134c5c2 call 0x11346d50 */
  push32(0x1134c5c7u); f_11346d50();
  /* 1134c5c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c5ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c5cd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c5d1 jne 0x1134c5ef */
  if (!C.zf) goto L_1134c5ef;
  /* 1134c5d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c5d6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c5d9 push edx */
  push32((uint32_t)(EDX));
  /* 1134c5da call dword ptr [0x1137135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137135c))), 0x1134c5e0u);
  /* 1134c5e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c5e3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1134c5e6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c5e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c5ec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1134c5ef:;
  /* 1134c5ef push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1134c5f1 call 0x11346df0 */
  push32(0x1134c5f6u); f_11346df0();
  /* 1134c5f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134c5f9:;
  /* 1134c5f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c5fc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c5ff push eax */
  push32((uint32_t)(EAX));
  /* 1134c600 call dword ptr [0x11371310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371310))), 0x1134c606u);
  /* 1134c606 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c609 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1134c60d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1134c610 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134c612 je 0x1134c626 */
  if (C.zf) goto L_1134c626;
  /* 1134c614 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c617 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c61a push eax */
  push32((uint32_t)(EAX));
  /* 1134c61b call dword ptr [0x1137130c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137130c))), 0x1134c621u);
  /* 1134c621 jmp 0x1134c584 */
  goto L_1134c584;
L_1134c626:;
  /* 1134c626 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c629 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1134c62f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134c632 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1134c635 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134c638 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c63b sub eax, dword ptr [edx*4 + 0x11370e40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11370e40))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134c642 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1134c643 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1134c648 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1134c64a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c64c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134c64f jmp 0x1134c656 */
  goto L_1134c656;
L_1134c651:;
  /* 1134c651 jmp 0x1134c584 */
  goto L_1134c584;
L_1134c656:;
  /* 1134c656 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c65a je 0x1134c661 */
  if (C.zf) goto L_1134c661;
  /* 1134c65c jmp 0x1134c700 */
  goto L_1134c700;
L_1134c661:;
  /* 1134c661 jmp 0x1134c6fb */
  goto L_1134c6fb;
L_1134c666:;
  /* 1134c666 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1134c668 push 0x1136afdc */
  push32((uint32_t)(0x1136afdcu));
  /* 1134c66d push 2 */
  push32((uint32_t)(0x2u));
  /* 1134c66f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1134c674 call 0x11343350 */
  push32(0x1134c679u); f_11343350();
  /* 1134c679 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c67c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134c67f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c683 je 0x1134c6f9 */
  if (C.zf) goto L_1134c6f9;
  /* 1134c685 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134c688 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c68b mov dword ptr [eax*4 + 0x11370e40], ecx */
  w32((uint32_t)(EAX*4 + 0x11370e40), (ECX));
  /* 1134c692 mov edx, dword ptr [0x11370f7c] */
  EDX = (r32((uint32_t)(0x11370f7c)));
  /* 1134c698 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c69b mov dword ptr [0x11370f7c], edx */
  w32((uint32_t)(0x11370f7c), (EDX));
  /* 1134c6a1 jmp 0x1134c6ac */
  goto L_1134c6ac;
L_1134c6a3:;
  /* 1134c6a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c6a6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c6a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1134c6ac:;
  /* 1134c6ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134c6af mov edx, dword ptr [ecx*4 + 0x11370e40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11370e40)));
  /* 1134c6b6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c6bc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c6bf jae 0x1134c6e4 */
  if (!C.cf) goto L_1134c6e4;
  /* 1134c6c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c6c4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1134c6c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c6cb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1134c6d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c6d4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1134c6d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134c6db mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1134c6e2 jmp 0x1134c6a3 */
  goto L_1134c6a3;
L_1134c6e4:;
  /* 1134c6e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134c6e7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1134c6ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134c6ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134c6f0 push edx */
  push32((uint32_t)(EDX));
  /* 1134c6f1 call 0x1134ca40 */
  push32(0x1134c6f6u); f_1134ca40();
  /* 1134c6f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134c6f9:;
  /* 1134c6f9 jmp 0x1134c700 */
  goto L_1134c700;
L_1134c6fb:;
  /* 1134c6fb jmp 0x1134c551 */
  goto L_1134c551;
L_1134c700:;
  /* 1134c700 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1134c702 call 0x11346df0 */
  push32(0x1134c707u); f_11346df0();
  /* 1134c707 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c70a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134c70d pop esi */
  ESI = (pop32());
  /* 1134c70e mov esp, ebp */
  ESP = (EBP);
  /* 1134c710 pop ebp */
  EBP = (pop32());
  /* 1134c711 ret  */
  ESPCHK(0x1134c530u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1134c720 (183 bytes, 57 insns) */
void f_1134c720(void) {
  FTRACE(0x1134c720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134c720 push ebp */
  push32((uint32_t)(EBP));
  /* 1134c721 mov ebp, esp */
  EBP = (ESP);
  /* 1134c723 push ecx */
  push32((uint32_t)(ECX));
  /* 1134c724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c727 cmp eax, dword ptr [0x11370f7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11370f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c72d jae 0x1134c7ba */
  if (!C.cf) goto L_1134c7ba;
  /* 1134c733 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c736 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1134c739 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c73c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1134c73f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134c742 mov eax, dword ptr [ecx*4 + 0x11370e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11370e40)));
  /* 1134c749 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c74d jne 0x1134c7ba */
  if (!C.zf) goto L_1134c7ba;
  /* 1134c74f cmp dword ptr [0x1136f45c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136f45c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c756 jne 0x1134c79a */
  if (!C.zf) goto L_1134c79a;
  /* 1134c758 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c75b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1134c75e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c762 je 0x1134c772 */
  if (C.zf) goto L_1134c772;
  /* 1134c764 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c768 je 0x1134c780 */
  if (C.zf) goto L_1134c780;
  /* 1134c76a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c76e je 0x1134c78e */
  if (C.zf) goto L_1134c78e;
  /* 1134c770 jmp 0x1134c79a */
  goto L_1134c79a;
L_1134c772:;
  /* 1134c772 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134c775 push edx */
  push32((uint32_t)(EDX));
  /* 1134c776 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1134c778 call dword ptr [0x113712cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712cc))), 0x1134c77eu);
  /* 1134c77e jmp 0x1134c79a */
  goto L_1134c79a;
L_1134c780:;
  /* 1134c780 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134c783 push eax */
  push32((uint32_t)(EAX));
  /* 1134c784 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1134c786 call dword ptr [0x113712cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712cc))), 0x1134c78cu);
  /* 1134c78c jmp 0x1134c79a */
  goto L_1134c79a;
L_1134c78e:;
  /* 1134c78e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134c791 push ecx */
  push32((uint32_t)(ECX));
  /* 1134c792 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1134c794 call dword ptr [0x113712cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712cc))), 0x1134c79au);
L_1134c79a:;
  /* 1134c79a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c79d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1134c7a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c7a3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1134c7a6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134c7a9 mov ecx, dword ptr [edx*4 + 0x11370e40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11370e40)));
  /* 1134c7b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134c7b3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1134c7b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134c7b8 jmp 0x1134c7d3 */
  goto L_1134c7d3;
L_1134c7ba:;
  /* 1134c7ba call 0x1134b220 */
  push32(0x1134c7bfu); f_1134b220();
  /* 1134c7bf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1134c7c5 call 0x1134b230 */
  push32(0x1134c7cau); f_1134b230();
  /* 1134c7ca mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1134c7d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1134c7d3:;
  /* 1134c7d3 mov esp, ebp */
  ESP = (EBP);
  /* 1134c7d5 pop ebp */
  EBP = (pop32());
  /* 1134c7d6 ret  */
  ESPCHK(0x1134c720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7e0 @ 0x1134c7e0 (216 bytes, 63 insns) */
void f_1134c7e0(void) {
  FTRACE(0x1134c7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134c7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134c7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1134c7e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134c7e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c7e7 cmp eax, dword ptr [0x11370f7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11370f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c7ed jae 0x1134c89b */
  if (!C.cf) goto L_1134c89b;
  /* 1134c7f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c7f6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1134c7f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c7fc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1134c7ff imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134c802 mov eax, dword ptr [ecx*4 + 0x11370e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11370e40)));
  /* 1134c809 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1134c80e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1134c811 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134c813 je 0x1134c89b */
  if (C.zf) goto L_1134c89b;
  /* 1134c819 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c81c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1134c81f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c822 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1134c825 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134c828 mov ecx, dword ptr [edx*4 + 0x11370e40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11370e40)));
  /* 1134c82f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c833 je 0x1134c89b */
  if (C.zf) goto L_1134c89b;
  /* 1134c835 cmp dword ptr [0x1136f45c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136f45c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c83c jne 0x1134c87a */
  if (!C.zf) goto L_1134c87a;
  /* 1134c83e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c841 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1134c844 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c848 je 0x1134c858 */
  if (C.zf) goto L_1134c858;
  /* 1134c84a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c84e je 0x1134c864 */
  if (C.zf) goto L_1134c864;
  /* 1134c850 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c854 je 0x1134c870 */
  if (C.zf) goto L_1134c870;
  /* 1134c856 jmp 0x1134c87a */
  goto L_1134c87a;
L_1134c858:;
  /* 1134c858 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134c85a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1134c85c call dword ptr [0x113712cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712cc))), 0x1134c862u);
  /* 1134c862 jmp 0x1134c87a */
  goto L_1134c87a;
L_1134c864:;
  /* 1134c864 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134c866 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1134c868 call dword ptr [0x113712cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712cc))), 0x1134c86eu);
  /* 1134c86e jmp 0x1134c87a */
  goto L_1134c87a;
L_1134c870:;
  /* 1134c870 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134c872 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1134c874 call dword ptr [0x113712cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712cc))), 0x1134c87au);
L_1134c87a:;
  /* 1134c87a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c87d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1134c880 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c883 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1134c886 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134c889 mov edx, dword ptr [eax*4 + 0x11370e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11370e40)));
  /* 1134c890 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1134c897 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134c899 jmp 0x1134c8b4 */
  goto L_1134c8b4;
L_1134c89b:;
  /* 1134c89b call 0x1134b220 */
  push32(0x1134c8a0u); f_1134b220();
  /* 1134c8a0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1134c8a6 call 0x1134b230 */
  push32(0x1134c8abu); f_1134b230();
  /* 1134c8ab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1134c8b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1134c8b4:;
  /* 1134c8b4 mov esp, ebp */
  ESP = (EBP);
  /* 1134c8b6 pop ebp */
  EBP = (pop32());
  /* 1134c8b7 ret  */
  ESPCHK(0x1134c7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8c0 @ 0x1134c8c0 (102 bytes, 30 insns) */
void f_1134c8c0(void) {
  FTRACE(0x1134c8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134c8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134c8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1134c8c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c8c6 cmp eax, dword ptr [0x11370f7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11370f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c8cc jae 0x1134c90b */
  if (!C.cf) goto L_1134c90b;
  /* 1134c8ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c8d1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1134c8d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c8d7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1134c8da imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134c8dd mov eax, dword ptr [ecx*4 + 0x11370e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11370e40)));
  /* 1134c8e4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1134c8e9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1134c8ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134c8ee je 0x1134c90b */
  if (C.zf) goto L_1134c90b;
  /* 1134c8f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c8f3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1134c8f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c8f9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1134c8fc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134c8ff mov ecx, dword ptr [edx*4 + 0x11370e40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11370e40)));
  /* 1134c906 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1134c909 jmp 0x1134c924 */
  goto L_1134c924;
L_1134c90b:;
  /* 1134c90b call 0x1134b220 */
  push32(0x1134c910u); f_1134b220();
  /* 1134c910 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1134c916 call 0x1134b230 */
  push32(0x1134c91bu); f_1134b230();
  /* 1134c91b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1134c921 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1134c924:;
  /* 1134c924 pop ebp */
  EBP = (pop32());
  /* 1134c925 ret  */
  ESPCHK(0x1134c8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c930 @ 0x1134c930 (260 bytes, 83 insns) */
void f_1134c930(void) {
  FTRACE(0x1134c930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134c930 push ebp */
  push32((uint32_t)(EBP));
  /* 1134c931 mov ebp, esp */
  EBP = (ESP);
  /* 1134c933 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134c936 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1134c93a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134c93d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1134c940 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134c942 je 0x1134c94d */
  if (C.zf) goto L_1134c94d;
  /* 1134c944 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1134c947 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1134c94a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1134c94d:;
  /* 1134c94d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134c950 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1134c956 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134c958 je 0x1134c962 */
  if (C.zf) goto L_1134c962;
  /* 1134c95a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1134c95d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1134c95f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1134c962:;
  /* 1134c962 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134c965 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1134c96b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134c96d je 0x1134c978 */
  if (C.zf) goto L_1134c978;
  /* 1134c96f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1134c972 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1134c975 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1134c978:;
  /* 1134c978 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c97b push eax */
  push32((uint32_t)(EAX));
  /* 1134c97c call dword ptr [0x11371370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371370))), 0x1134c982u);
  /* 1134c982 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134c985 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c989 jne 0x1134c9a2 */
  if (!C.zf) goto L_1134c9a2;
  /* 1134c98b call dword ptr [0x11371364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371364))), 0x1134c991u);
  /* 1134c991 push eax */
  push32((uint32_t)(EAX));
  /* 1134c992 call 0x1134b180 */
  push32(0x1134c997u); f_1134b180();
  /* 1134c997 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c99a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134c99d jmp 0x1134ca30 */
  goto L_1134ca30;
L_1134c9a2:;
  /* 1134c9a2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c9a6 jne 0x1134c9b3 */
  if (!C.zf) goto L_1134c9b3;
  /* 1134c9a8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1134c9ab or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1134c9ae mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1134c9b1 jmp 0x1134c9c2 */
  goto L_1134c9c2;
L_1134c9b3:;
  /* 1134c9b3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c9b7 jne 0x1134c9c2 */
  if (!C.zf) goto L_1134c9c2;
  /* 1134c9b9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1134c9bc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1134c9bf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1134c9c2:;
  /* 1134c9c2 call 0x1134c530 */
  push32(0x1134c9c7u); f_1134c530();
  /* 1134c9c7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1134c9ca cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134c9ce jne 0x1134c9eb */
  if (!C.zf) goto L_1134c9eb;
  /* 1134c9d0 call 0x1134b220 */
  push32(0x1134c9d5u); f_1134b220();
  /* 1134c9d5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1134c9db call 0x1134b230 */
  push32(0x1134c9e0u); f_1134b230();
  /* 1134c9e0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1134c9e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134c9e9 jmp 0x1134ca30 */
  goto L_1134ca30;
L_1134c9eb:;
  /* 1134c9eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134c9ee push eax */
  push32((uint32_t)(EAX));
  /* 1134c9ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134c9f2 push ecx */
  push32((uint32_t)(ECX));
  /* 1134c9f3 call 0x1134c720 */
  push32(0x1134c9f8u); f_1134c720();
  /* 1134c9f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134c9fb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1134c9fe or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1134ca01 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1134ca04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134ca07 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1134ca0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134ca0d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1134ca10 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134ca13 mov edx, dword ptr [eax*4 + 0x11370e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11370e40)));
  /* 1134ca1a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1134ca1d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1134ca21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134ca24 push ecx */
  push32((uint32_t)(ECX));
  /* 1134ca25 call 0x1134cad0 */
  push32(0x1134ca2au); f_1134cad0();
  /* 1134ca2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ca2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1134ca30:;
  /* 1134ca30 mov esp, ebp */
  ESP = (EBP);
  /* 1134ca32 pop ebp */
  EBP = (pop32());
  /* 1134ca33 ret  */
  ESPCHK(0x1134c930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca40 @ 0x1134ca40 (134 bytes, 44 insns) */
void f_1134ca40(void) {
  FTRACE(0x1134ca40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134ca40 push ebp */
  push32((uint32_t)(EBP));
  /* 1134ca41 mov ebp, esp */
  EBP = (ESP);
  /* 1134ca43 push ecx */
  push32((uint32_t)(ECX));
  /* 1134ca44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ca47 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1134ca4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ca4d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1134ca50 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134ca53 mov edx, dword ptr [eax*4 + 0x11370e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11370e40)));
  /* 1134ca5a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ca5c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1134ca5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ca62 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ca66 jne 0x1134caa1 */
  if (!C.zf) goto L_1134caa1;
  /* 1134ca68 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1134ca6a call 0x11346d50 */
  push32(0x1134ca6fu); f_11346d50();
  /* 1134ca6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ca72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ca75 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ca79 jne 0x1134ca97 */
  if (!C.zf) goto L_1134ca97;
  /* 1134ca7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ca7e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ca81 push edx */
  push32((uint32_t)(EDX));
  /* 1134ca82 call dword ptr [0x1137135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137135c))), 0x1134ca88u);
  /* 1134ca88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ca8b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1134ca8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ca91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ca94 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1134ca97:;
  /* 1134ca97 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1134ca99 call 0x11346df0 */
  push32(0x1134ca9eu); f_11346df0();
  /* 1134ca9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134caa1:;
  /* 1134caa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134caa4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1134caa7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134caaa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1134caad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134cab0 mov edx, dword ptr [eax*4 + 0x11370e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11370e40)));
  /* 1134cab7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1134cabb push eax */
  push32((uint32_t)(EAX));
  /* 1134cabc call dword ptr [0x11371310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371310))), 0x1134cac2u);
  /* 1134cac2 mov esp, ebp */
  ESP = (EBP);
  /* 1134cac4 pop ebp */
  EBP = (pop32());
  /* 1134cac5 ret  */
  ESPCHK(0x1134ca40u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1134cad0 (38 bytes, 13 insns) */
void f_1134cad0(void) {
  FTRACE(0x1134cad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134cad0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134cad1 mov ebp, esp */
  EBP = (ESP);
  /* 1134cad3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134cad6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1134cad9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134cadc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1134cadf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134cae2 mov edx, dword ptr [eax*4 + 0x11370e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11370e40)));
  /* 1134cae9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1134caed push eax */
  push32((uint32_t)(EAX));
  /* 1134caee call dword ptr [0x1137130c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137130c))), 0x1134caf4u);
  /* 1134caf4 pop ebp */
  EBP = (pop32());
  /* 1134caf5 ret  */
  ESPCHK(0x1134cad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb00 @ 0x1134cb00 (218 bytes, 63 insns) */
void f_1134cb00(void) {
  FTRACE(0x1134cb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134cb00 push ebp */
  push32((uint32_t)(EBP));
  /* 1134cb01 mov ebp, esp */
  EBP = (ESP);
  /* 1134cb03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134cb06 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1134cb0d push 2 */
  push32((uint32_t)(0x2u));
  /* 1134cb0f call 0x11346d50 */
  push32(0x1134cb14u); f_11346d50();
  /* 1134cb14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cb17 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1134cb1e jmp 0x1134cb29 */
  goto L_1134cb29;
L_1134cb20:;
  /* 1134cb20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134cb23 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cb26 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1134cb29:;
  /* 1134cb29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134cb2c cmp ecx, dword ptr [0x11370b40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11370b40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cb32 jge 0x1134cbc9 */
  if ((C.sf==C.of)) goto L_1134cbc9;
  /* 1134cb38 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134cb3b mov eax, dword ptr [0x1136f7f8] */
  EAX = (r32((uint32_t)(0x1136f7f8)));
  /* 1134cb40 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cb44 je 0x1134cbc4 */
  if (C.zf) goto L_1134cbc4;
  /* 1134cb46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134cb49 mov edx, dword ptr [0x1136f7f8] */
  EDX = (r32((uint32_t)(0x1136f7f8)));
  /* 1134cb4f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1134cb52 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1134cb55 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1134cb5b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134cb5d je 0x1134cb81 */
  if (C.zf) goto L_1134cb81;
  /* 1134cb5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134cb62 mov eax, dword ptr [0x1136f7f8] */
  EAX = (r32((uint32_t)(0x1136f7f8)));
  /* 1134cb67 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1134cb6a push ecx */
  push32((uint32_t)(ECX));
  /* 1134cb6b call 0x1134d8f0 */
  push32(0x1134cb70u); f_1134d8f0();
  /* 1134cb70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cb73 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cb76 je 0x1134cb81 */
  if (C.zf) goto L_1134cb81;
  /* 1134cb78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134cb7b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cb7e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1134cb81:;
  /* 1134cb81 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cb85 jl 0x1134cbc4 */
  if ((C.sf!=C.of)) goto L_1134cbc4;
  /* 1134cb87 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134cb8a mov ecx, dword ptr [0x1136f7f8] */
  ECX = (r32((uint32_t)(0x1136f7f8)));
  /* 1134cb90 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1134cb93 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cb96 push edx */
  push32((uint32_t)(EDX));
  /* 1134cb97 call dword ptr [0x11371378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371378))), 0x1134cb9du);
  /* 1134cb9d push 2 */
  push32((uint32_t)(0x2u));
  /* 1134cb9f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134cba2 mov ecx, dword ptr [0x1136f7f8] */
  ECX = (r32((uint32_t)(0x1136f7f8)));
  /* 1134cba8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1134cbab push edx */
  push32((uint32_t)(EDX));
  /* 1134cbac call 0x11343de0 */
  push32(0x1134cbb1u); f_11343de0();
  /* 1134cbb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cbb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134cbb7 mov ecx, dword ptr [0x1136f7f8] */
  ECX = (r32((uint32_t)(0x1136f7f8)));
  /* 1134cbbd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1134cbc4:;
  /* 1134cbc4 jmp 0x1134cb20 */
  goto L_1134cb20;
L_1134cbc9:;
  /* 1134cbc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134cbcb call 0x11346df0 */
  push32(0x1134cbd0u); f_11346df0();
  /* 1134cbd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cbd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134cbd6 mov esp, ebp */
  ESP = (EBP);
  /* 1134cbd8 pop ebp */
  EBP = (pop32());
  /* 1134cbd9 ret  */
  ESPCHK(0x1134cb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbe0 @ 0x1134cbe0 (68 bytes, 26 insns) */
void f_1134cbe0(void) {
  FTRACE(0x1134cbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134cbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134cbe1 mov ebp, esp */
  EBP = (ESP);
  /* 1134cbe3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134cbe4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cbe8 jne 0x1134cbf6 */
  if (!C.zf) goto L_1134cbf6;
  /* 1134cbea push 0 */
  push32((uint32_t)(0x0u));
  /* 1134cbec call 0x1134cd50 */
  push32(0x1134cbf1u); f_1134cd50();
  /* 1134cbf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cbf4 jmp 0x1134cc20 */
  goto L_1134cc20;
L_1134cbf6:;
  /* 1134cbf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134cbf9 push eax */
  push32((uint32_t)(EAX));
  /* 1134cbfa call 0x1134c160 */
  push32(0x1134cbffu); f_1134c160();
  /* 1134cbff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cc02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134cc05 push ecx */
  push32((uint32_t)(ECX));
  /* 1134cc06 call 0x1134cc30 */
  push32(0x1134cc0bu); f_1134cc30();
  /* 1134cc0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cc0e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134cc11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134cc14 push edx */
  push32((uint32_t)(EDX));
  /* 1134cc15 call 0x1134c1d0 */
  push32(0x1134cc1au); f_1134c1d0();
  /* 1134cc1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cc1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1134cc20:;
  /* 1134cc20 mov esp, ebp */
  ESP = (EBP);
  /* 1134cc22 pop ebp */
  EBP = (pop32());
  /* 1134cc23 ret  */
  ESPCHK(0x1134cbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc30 @ 0x1134cc30 (65 bytes, 26 insns) */
void f_1134cc30(void) {
  FTRACE(0x1134cc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134cc30 push ebp */
  push32((uint32_t)(EBP));
  /* 1134cc31 mov ebp, esp */
  EBP = (ESP);
  /* 1134cc33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134cc36 push eax */
  push32((uint32_t)(EAX));
  /* 1134cc37 call 0x1134cc80 */
  push32(0x1134cc3cu); f_1134cc80();
  /* 1134cc3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cc3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134cc41 je 0x1134cc48 */
  if (C.zf) goto L_1134cc48;
  /* 1134cc43 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134cc46 jmp 0x1134cc6f */
  goto L_1134cc6f;
L_1134cc48:;
  /* 1134cc48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134cc4b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1134cc4e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1134cc54 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134cc56 je 0x1134cc6d */
  if (C.zf) goto L_1134cc6d;
  /* 1134cc58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134cc5b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1134cc5e push ecx */
  push32((uint32_t)(ECX));
  /* 1134cc5f call 0x1134da40 */
  push32(0x1134cc64u); f_1134da40();
  /* 1134cc64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cc67 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134cc69 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134cc6b jmp 0x1134cc6f */
  goto L_1134cc6f;
L_1134cc6d:;
  /* 1134cc6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1134cc6f:;
  /* 1134cc6f pop ebp */
  EBP = (pop32());
  /* 1134cc70 ret  */
  ESPCHK(0x1134cc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc80 @ 0x1134cc80 (183 bytes, 62 insns) */
void f_1134cc80(void) {
  FTRACE(0x1134cc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134cc80 push ebp */
  push32((uint32_t)(EBP));
  /* 1134cc81 mov ebp, esp */
  EBP = (ESP);
  /* 1134cc83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134cc86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1134cc8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134cc90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1134cc93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134cc96 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1134cc99 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1134cc9c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cc9f jne 0x1134cd1b */
  if (!C.zf) goto L_1134cd1b;
  /* 1134cca1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134cca4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1134cca7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1134ccad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134ccaf je 0x1134cd1b */
  if (C.zf) goto L_1134cd1b;
  /* 1134ccb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134ccb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134ccb7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1134ccb9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134ccbc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134ccbf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ccc3 jle 0x1134cd1b */
  if ((C.zf||C.sf!=C.of)) goto L_1134cd1b;
  /* 1134ccc5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134ccc8 push edx */
  push32((uint32_t)(EDX));
  /* 1134ccc9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134cccc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1134cccf push ecx */
  push32((uint32_t)(ECX));
  /* 1134ccd0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134ccd3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1134ccd6 push eax */
  push32((uint32_t)(EAX));
  /* 1134ccd7 call 0x1134bbf0 */
  push32(0x1134ccdcu); f_1134bbf0();
  /* 1134ccdc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ccdf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cce2 jne 0x1134cd05 */
  if (!C.zf) goto L_1134cd05;
  /* 1134cce4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134cce7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1134ccea and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1134ccf0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134ccf2 je 0x1134cd03 */
  if (C.zf) goto L_1134cd03;
  /* 1134ccf4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134ccf7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1134ccfa and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1134ccfd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134cd00 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1134cd03:;
  /* 1134cd03 jmp 0x1134cd1b */
  goto L_1134cd1b;
L_1134cd05:;
  /* 1134cd05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134cd08 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1134cd0b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1134cd0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134cd11 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1134cd14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1134cd1b:;
  /* 1134cd1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134cd1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134cd21 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1134cd24 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1134cd26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134cd29 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1134cd30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134cd33 mov esp, ebp */
  ESP = (EBP);
  /* 1134cd35 pop ebp */
  EBP = (pop32());
  /* 1134cd36 ret  */
  ESPCHK(0x1134cc80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd40 @ 0x1134cd40 (15 bytes, 7 insns) */
void f_1134cd40(void) {
  FTRACE(0x1134cd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134cd40 push ebp */
  push32((uint32_t)(EBP));
  /* 1134cd41 mov ebp, esp */
  EBP = (ESP);
  /* 1134cd43 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134cd45 call 0x1134cd50 */
  push32(0x1134cd4au); f_1134cd50();
  /* 1134cd4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cd4d pop ebp */
  EBP = (pop32());
  /* 1134cd4e ret  */
  ESPCHK(0x1134cd40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd50 @ 0x1134cd50 (319 bytes, 94 insns) */
void f_1134cd50(void) {
  FTRACE(0x1134cd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134cd50 push ebp */
  push32((uint32_t)(EBP));
  /* 1134cd51 mov ebp, esp */
  EBP = (ESP);
  /* 1134cd53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134cd56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1134cd5d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1134cd64 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134cd66 call 0x11346d50 */
  push32(0x1134cd6bu); f_11346d50();
  /* 1134cd6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cd6e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1134cd75 jmp 0x1134cd80 */
  goto L_1134cd80;
L_1134cd77:;
  /* 1134cd77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134cd7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cd7d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1134cd80:;
  /* 1134cd80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134cd83 cmp ecx, dword ptr [0x11370b40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11370b40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cd89 jge 0x1134ce73 */
  if ((C.sf==C.of)) goto L_1134ce73;
  /* 1134cd8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134cd92 mov eax, dword ptr [0x1136f7f8] */
  EAX = (r32((uint32_t)(0x1136f7f8)));
  /* 1134cd97 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cd9b je 0x1134ce6e */
  if (C.zf) goto L_1134ce6e;
  /* 1134cda1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134cda4 mov edx, dword ptr [0x1136f7f8] */
  EDX = (r32((uint32_t)(0x1136f7f8)));
  /* 1134cdaa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1134cdad mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1134cdb0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1134cdb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134cdb8 je 0x1134ce6e */
  if (C.zf) goto L_1134ce6e;
  /* 1134cdbe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134cdc1 mov eax, dword ptr [0x1136f7f8] */
  EAX = (r32((uint32_t)(0x1136f7f8)));
  /* 1134cdc6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1134cdc9 push ecx */
  push32((uint32_t)(ECX));
  /* 1134cdca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134cdcd push edx */
  push32((uint32_t)(EDX));
  /* 1134cdce call 0x1134c1a0 */
  push32(0x1134cdd3u); f_1134c1a0();
  /* 1134cdd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cdd6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134cdd9 mov ecx, dword ptr [0x1136f7f8] */
  ECX = (r32((uint32_t)(0x1136f7f8)));
  /* 1134cddf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1134cde2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1134cde5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1134cdea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134cdec je 0x1134ce55 */
  if (C.zf) goto L_1134ce55;
  /* 1134cdee cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cdf2 jne 0x1134ce19 */
  if (!C.zf) goto L_1134ce19;
  /* 1134cdf4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134cdf7 mov edx, dword ptr [0x1136f7f8] */
  EDX = (r32((uint32_t)(0x1136f7f8)));
  /* 1134cdfd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1134ce00 push eax */
  push32((uint32_t)(EAX));
  /* 1134ce01 call 0x1134cc30 */
  push32(0x1134ce06u); f_1134cc30();
  /* 1134ce06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ce09 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ce0c je 0x1134ce17 */
  if (C.zf) goto L_1134ce17;
  /* 1134ce0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ce11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ce14 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1134ce17:;
  /* 1134ce17 jmp 0x1134ce55 */
  goto L_1134ce55;
L_1134ce19:;
  /* 1134ce19 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ce1d jne 0x1134ce55 */
  if (!C.zf) goto L_1134ce55;
  /* 1134ce1f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134ce22 mov eax, dword ptr [0x1136f7f8] */
  EAX = (r32((uint32_t)(0x1136f7f8)));
  /* 1134ce27 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1134ce2a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1134ce2d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1134ce30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134ce32 je 0x1134ce55 */
  if (C.zf) goto L_1134ce55;
  /* 1134ce34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134ce37 mov ecx, dword ptr [0x1136f7f8] */
  ECX = (r32((uint32_t)(0x1136f7f8)));
  /* 1134ce3d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1134ce40 push edx */
  push32((uint32_t)(EDX));
  /* 1134ce41 call 0x1134cc30 */
  push32(0x1134ce46u); f_1134cc30();
  /* 1134ce46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ce49 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ce4c jne 0x1134ce55 */
  if (!C.zf) goto L_1134ce55;
  /* 1134ce4e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1134ce55:;
  /* 1134ce55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134ce58 mov ecx, dword ptr [0x1136f7f8] */
  ECX = (r32((uint32_t)(0x1136f7f8)));
  /* 1134ce5e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1134ce61 push edx */
  push32((uint32_t)(EDX));
  /* 1134ce62 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134ce65 push eax */
  push32((uint32_t)(EAX));
  /* 1134ce66 call 0x1134c210 */
  push32(0x1134ce6bu); f_1134c210();
  /* 1134ce6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134ce6e:;
  /* 1134ce6e jmp 0x1134cd77 */
  goto L_1134cd77;
L_1134ce73:;
  /* 1134ce73 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ce75 call 0x11346df0 */
  push32(0x1134ce7au); f_11346df0();
  /* 1134ce7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ce7d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ce81 jne 0x1134ce88 */
  if (!C.zf) goto L_1134ce88;
  /* 1134ce83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ce86 jmp 0x1134ce8b */
  goto L_1134ce8b;
L_1134ce88:;
  /* 1134ce88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1134ce8b:;
  /* 1134ce8b mov esp, ebp */
  ESP = (EBP);
  /* 1134ce8d pop ebp */
  EBP = (pop32());
  /* 1134ce8e ret  */
  ESPCHK(0x1134cd50u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1134ce90 (15 bytes, 7 insns) */
void f_1134ce90(void) {
  FTRACE(0x1134ce90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134ce90 push ebp */
  push32((uint32_t)(EBP));
  /* 1134ce91 mov ebp, esp */
  EBP = (ESP);
  /* 1134ce93 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ce95 call 0x113422c0 */
  push32(0x1134ce9au); f_113422c0();
  /* 1134ce9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ce9d pop ebp */
  EBP = (pop32());
  /* 1134ce9e ret  */
  ESPCHK(0x1134ce90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cea0 @ 0x1134cea0 (1007 bytes, 269 insns) */
void f_1134cea0(void) {
  FTRACE(0x1134cea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134cea0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134cea1 mov ebp, esp */
  EBP = (ESP);
  /* 1134cea3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134cea9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cead jl 0x1134ceb5 */
  if ((C.sf!=C.of)) goto L_1134ceb5;
  /* 1134ceaf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ceb3 jle 0x1134cebc */
  if ((C.zf||C.sf!=C.of)) goto L_1134cebc;
L_1134ceb5:;
  /* 1134ceb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134ceb7 jmp 0x1134d28b */
  goto L_1134d28b;
L_1134cebc:;
  /* 1134cebc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1134cebe call 0x11346d50 */
  push32(0x1134cec3u); f_11346d50();
  /* 1134cec3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cec6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1134cecd mov eax, dword ptr [0x1136f7e4] */
  EAX = (r32((uint32_t)(0x1136f7e4)));
  /* 1134ced2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ced5 mov dword ptr [0x1136f7e4], eax */
  w32((uint32_t)(0x1136f7e4), (EAX));
L_1134ceda:;
  /* 1134ceda cmp dword ptr [0x1136f7f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cee1 je 0x1134ceed */
  if (C.zf) goto L_1134ceed;
  /* 1134cee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134cee5 call dword ptr [0x113712c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712c8))), 0x1134ceebu);
  /* 1134ceeb jmp 0x1134ceda */
  goto L_1134ceda;
L_1134ceed:;
  /* 1134ceed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cef1 je 0x1134cf31 */
  if (C.zf) goto L_1134cf31;
  /* 1134cef3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cef7 je 0x1134cf11 */
  if (C.zf) goto L_1134cf11;
  /* 1134cef9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134cefc push ecx */
  push32((uint32_t)(ECX));
  /* 1134cefd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134cf00 push edx */
  push32((uint32_t)(EDX));
  /* 1134cf01 call 0x1134d290 */
  push32(0x1134cf06u); f_1134d290();
  /* 1134cf06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cf09 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1134cf0f jmp 0x1134cf23 */
  goto L_1134cf23;
L_1134cf11:;
  /* 1134cf11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134cf14 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134cf17 mov ecx, dword ptr [eax + 0x1136e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1136e4dc)));
  /* 1134cf1d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1134cf23:;
  /* 1134cf23 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1134cf29 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1134cf2c jmp 0x1134d26b */
  goto L_1134d26b;
L_1134cf31:;
  /* 1134cf31 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1134cf38 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1134cf3f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cf43 je 0x1134d263 */
  if (C.zf) goto L_1134d263;
  /* 1134cf49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134cf4c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134cf4f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cf52 jne 0x1134d174 */
  if (!C.zf) goto L_1134d174;
  /* 1134cf58 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134cf5b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1134cf5f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cf62 jne 0x1134d174 */
  if (!C.zf) goto L_1134d174;
  /* 1134cf68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134cf6b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1134cf6f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cf72 jne 0x1134d174 */
  if (!C.zf) goto L_1134d174;
  /* 1134cf78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134cf7b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1134cf81:;
  /* 1134cf81 push 0x1136b02c */
  push32((uint32_t)(0x1136b02cu));
  /* 1134cf86 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1134cf8c push ecx */
  push32((uint32_t)(ECX));
  /* 1134cf8d call 0x1134f0f0 */
  push32(0x1134cf92u); f_1134f0f0();
  /* 1134cf92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cf95 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1134cf9b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cfa2 je 0x1134cfcd */
  if (C.zf) goto L_1134cfcd;
  /* 1134cfa4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1134cfaa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134cfb0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1134cfb6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cfbd je 0x1134cfcd */
  if (C.zf) goto L_1134cfcd;
  /* 1134cfbf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1134cfc5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134cfc8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cfcb jne 0x1134cff3 */
  if (!C.zf) goto L_1134cff3;
L_1134cfcd:;
  /* 1134cfcd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134cfd1 je 0x1134cfec */
  if (C.zf) goto L_1134cfec;
  /* 1134cfd3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1134cfd5 call 0x11346df0 */
  push32(0x1134cfdau); f_11346df0();
  /* 1134cfda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134cfdd mov edx, dword ptr [0x1136f7e4] */
  EDX = (r32((uint32_t)(0x1136f7e4)));
  /* 1134cfe3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134cfe6 mov dword ptr [0x1136f7e4], edx */
  w32((uint32_t)(0x1136f7e4), (EDX));
L_1134cfec:;
  /* 1134cfec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134cfee jmp 0x1134d28b */
  goto L_1134d28b;
L_1134cff3:;
  /* 1134cff3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1134cffa jmp 0x1134d005 */
  goto L_1134d005;
L_1134cffc:;
  /* 1134cffc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134cfff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d002 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1134d005:;
  /* 1134d005 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d009 jg 0x1134d053 */
  if ((!C.zf&&C.sf==C.of)) goto L_1134d053;
  /* 1134d00b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1134d011 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d012 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1134d018 push edx */
  push32((uint32_t)(EDX));
  /* 1134d019 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134d01c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134d01f mov ecx, dword ptr [eax + 0x1136e4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1136e4d8)));
  /* 1134d025 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d026 call 0x1134f0b0 */
  push32(0x1134d02bu); f_1134f0b0();
  /* 1134d02b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d02e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d030 jne 0x1134d051 */
  if (!C.zf) goto L_1134d051;
  /* 1134d032 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134d035 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134d038 mov eax, dword ptr [edx + 0x1136e4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1136e4d8)));
  /* 1134d03e push eax */
  push32((uint32_t)(EAX));
  /* 1134d03f call 0x11346180 */
  push32(0x1134d044u); f_11346180();
  /* 1134d044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d047 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d04d jne 0x1134d051 */
  if (!C.zf) goto L_1134d051;
  /* 1134d04f jmp 0x1134d053 */
  goto L_1134d053;
L_1134d051:;
  /* 1134d051 jmp 0x1134cffc */
  goto L_1134cffc;
L_1134d053:;
  /* 1134d053 push 0x1136b028 */
  push32((uint32_t)(0x1136b028u));
  /* 1134d058 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1134d05e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d061 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1134d067 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1134d06d push edx */
  push32((uint32_t)(EDX));
  /* 1134d06e call 0x1134f070 */
  push32(0x1134d073u); f_1134f070();
  /* 1134d073 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d076 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1134d07c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d083 jne 0x1134d0b9 */
  if (!C.zf) goto L_1134d0b9;
  /* 1134d085 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1134d08b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134d08e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d091 je 0x1134d0b9 */
  if (C.zf) goto L_1134d0b9;
  /* 1134d093 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d097 je 0x1134d0b2 */
  if (C.zf) goto L_1134d0b2;
  /* 1134d099 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1134d09b call 0x11346df0 */
  push32(0x1134d0a0u); f_11346df0();
  /* 1134d0a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d0a3 mov edx, dword ptr [0x1136f7e4] */
  EDX = (r32((uint32_t)(0x1136f7e4)));
  /* 1134d0a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134d0ac mov dword ptr [0x1136f7e4], edx */
  w32((uint32_t)(0x1136f7e4), (EDX));
L_1134d0b2:;
  /* 1134d0b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134d0b4 jmp 0x1134d28b */
  goto L_1134d28b;
L_1134d0b9:;
  /* 1134d0b9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d0bd jg 0x1134d10a */
  if ((!C.zf&&C.sf==C.of)) goto L_1134d10a;
  /* 1134d0bf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1134d0c5 push eax */
  push32((uint32_t)(EAX));
  /* 1134d0c6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1134d0cc push ecx */
  push32((uint32_t)(ECX));
  /* 1134d0cd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1134d0d3 push edx */
  push32((uint32_t)(EDX));
  /* 1134d0d4 call 0x11346b70 */
  push32(0x1134d0d9u); f_11346b70();
  /* 1134d0d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d0dc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1134d0e2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1134d0ea lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1134d0f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d0f1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134d0f4 push edx */
  push32((uint32_t)(EDX));
  /* 1134d0f5 call 0x1134d290 */
  push32(0x1134d0fau); f_1134d290();
  /* 1134d0fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d0fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d0ff je 0x1134d10a */
  if (C.zf) goto L_1134d10a;
  /* 1134d101 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134d104 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d107 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1134d10a:;
  /* 1134d10a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1134d110 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d116 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1134d11c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1134d122 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1134d125 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d127 je 0x1134d138 */
  if (C.zf) goto L_1134d138;
  /* 1134d129 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1134d12f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d132 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1134d138:;
  /* 1134d138 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1134d13e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1134d141 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d143 jne 0x1134cf81 */
  if (!C.zf) goto L_1134cf81;
  /* 1134d149 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d14d je 0x1134d15c */
  if (C.zf) goto L_1134d15c;
  /* 1134d14f call 0x1134d430 */
  push32(0x1134d154u); f_1134d430();
  /* 1134d154 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1134d15a jmp 0x1134d166 */
  goto L_1134d166;
L_1134d15c:;
  /* 1134d15c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1134d166:;
  /* 1134d166 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1134d16c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134d16f jmp 0x1134d261 */
  goto L_1134d261;
L_1134d174:;
  /* 1134d174 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d177 push edx */
  push32((uint32_t)(EDX));
  /* 1134d178 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134d17a push 0 */
  push32((uint32_t)(0x0u));
  /* 1134d17c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1134d182 push eax */
  push32((uint32_t)(EAX));
  /* 1134d183 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d186 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d187 call 0x1134d530 */
  push32(0x1134d18cu); f_1134d530();
  /* 1134d18c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d18f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1134d192 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d196 je 0x1134d261 */
  if (C.zf) goto L_1134d261;
  /* 1134d19c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1134d1a3 jmp 0x1134d1ae */
  goto L_1134d1ae;
L_1134d1a5:;
  /* 1134d1a5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134d1a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d1ab mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1134d1ae:;
  /* 1134d1ae cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d1b2 jg 0x1134d210 */
  if ((!C.zf&&C.sf==C.of)) goto L_1134d210;
  /* 1134d1b4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d1b8 je 0x1134d20e */
  if (C.zf) goto L_1134d20e;
  /* 1134d1ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134d1bd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134d1c0 mov ecx, dword ptr [eax + 0x1136e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1136e4dc)));
  /* 1134d1c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d1c7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1134d1cd push edx */
  push32((uint32_t)(EDX));
  /* 1134d1ce call 0x1134efe0 */
  push32(0x1134d1d3u); f_1134efe0();
  /* 1134d1d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d1d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d1d8 je 0x1134d205 */
  if (C.zf) goto L_1134d205;
  /* 1134d1da lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1134d1e0 push eax */
  push32((uint32_t)(EAX));
  /* 1134d1e1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134d1e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d1e5 call 0x1134d290 */
  push32(0x1134d1eau); f_1134d290();
  /* 1134d1ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d1ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d1ef je 0x1134d1fc */
  if (C.zf) goto L_1134d1fc;
  /* 1134d1f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134d1f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d1f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1134d1fa jmp 0x1134d203 */
  goto L_1134d203;
L_1134d1fc:;
  /* 1134d1fc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1134d203:;
  /* 1134d203 jmp 0x1134d20e */
  goto L_1134d20e;
L_1134d205:;
  /* 1134d205 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134d208 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d20b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1134d20e:;
  /* 1134d20e jmp 0x1134d1a5 */
  goto L_1134d1a5;
L_1134d210:;
  /* 1134d210 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d214 je 0x1134d23b */
  if (C.zf) goto L_1134d23b;
  /* 1134d216 call 0x1134d430 */
  push32(0x1134d21bu); f_1134d430();
  /* 1134d21b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1134d21e push 2 */
  push32((uint32_t)(0x2u));
  /* 1134d220 mov ecx, dword ptr [0x1136e4dc] */
  ECX = (r32((uint32_t)(0x1136e4dc)));
  /* 1134d226 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d227 call 0x11343de0 */
  push32(0x1134d22cu); f_11343de0();
  /* 1134d22c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d22f mov dword ptr [0x1136e4dc], 0 */
  w32((uint32_t)(0x1136e4dc), (0x0u));
  /* 1134d239 jmp 0x1134d261 */
  goto L_1134d261;
L_1134d23b:;
  /* 1134d23b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d23f je 0x1134d24e */
  if (C.zf) goto L_1134d24e;
  /* 1134d241 call 0x1134d430 */
  push32(0x1134d246u); f_1134d430();
  /* 1134d246 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1134d24c jmp 0x1134d258 */
  goto L_1134d258;
L_1134d24e:;
  /* 1134d24e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1134d258:;
  /* 1134d258 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1134d25e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1134d261:;
  /* 1134d261 jmp 0x1134d26b */
  goto L_1134d26b;
L_1134d263:;
  /* 1134d263 call 0x1134d430 */
  push32(0x1134d268u); f_1134d430();
  /* 1134d268 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1134d26b:;
  /* 1134d26b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d26f je 0x1134d288 */
  if (C.zf) goto L_1134d288;
  /* 1134d271 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1134d273 call 0x11346df0 */
  push32(0x1134d278u); f_11346df0();
  /* 1134d278 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d27b mov eax, dword ptr [0x1136f7e4] */
  EAX = (r32((uint32_t)(0x1136f7e4)));
  /* 1134d280 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134d283 mov dword ptr [0x1136f7e4], eax */
  w32((uint32_t)(0x1136f7e4), (EAX));
L_1134d288:;
  /* 1134d288 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1134d28b:;
  /* 1134d28b mov esp, ebp */
  ESP = (EBP);
  /* 1134d28d pop ebp */
  EBP = (pop32());
  /* 1134d28e ret  */
  ESPCHK(0x1134cea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d290 @ 0x1134d290 (403 bytes, 117 insns) */
void f_1134d290(void) {
  FTRACE(0x1134d290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134d290 push ebp */
  push32((uint32_t)(EBP));
  /* 1134d291 mov ebp, esp */
  EBP = (ESP);
  /* 1134d293 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134d299 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d29c push eax */
  push32((uint32_t)(EAX));
  /* 1134d29d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1134d2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d2a4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1134d2aa push edx */
  push32((uint32_t)(EDX));
  /* 1134d2ab lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1134d2b1 push eax */
  push32((uint32_t)(EAX));
  /* 1134d2b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d2b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d2b6 call 0x1134d530 */
  push32(0x1134d2bbu); f_1134d530();
  /* 1134d2bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d2be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d2c0 jne 0x1134d2c9 */
  if (!C.zf) goto L_1134d2c9;
  /* 1134d2c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134d2c4 jmp 0x1134d41f */
  goto L_1134d41f;
L_1134d2c9:;
  /* 1134d2c9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1134d2ce push 0x1136b030 */
  push32((uint32_t)(0x1136b030u));
  /* 1134d2d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134d2d5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1134d2db push edx */
  push32((uint32_t)(EDX));
  /* 1134d2dc call 0x11346180 */
  push32(0x1134d2e1u); f_11346180();
  /* 1134d2e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d2e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d2e7 push eax */
  push32((uint32_t)(EAX));
  /* 1134d2e8 call 0x11343350 */
  push32(0x1134d2edu); f_11343350();
  /* 1134d2ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d2f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1134d2f3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d2f7 jne 0x1134d300 */
  if (!C.zf) goto L_1134d300;
  /* 1134d2f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134d2fb jmp 0x1134d41f */
  goto L_1134d41f;
L_1134d300:;
  /* 1134d300 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d303 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134d306 mov ecx, dword ptr [eax + 0x1136e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1136e4dc)));
  /* 1134d30c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134d30f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d312 mov eax, dword ptr [edx*4 + 0x1136f660] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1136f660)));
  /* 1134d319 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134d31c push 6 */
  push32((uint32_t)(0x6u));
  /* 1134d31e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d321 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134d324 add ecx, 0x1136f6b0 */
  { uint32_t _a=(ECX),_b=(0x1136f6b0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d32a push ecx */
  push32((uint32_t)(ECX));
  /* 1134d32b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1134d32e push edx */
  push32((uint32_t)(EDX));
  /* 1134d32f call 0x11349c30 */
  push32(0x1134d334u); f_11349c30();
  /* 1134d334 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d337 mov eax, dword ptr [0x1136f678] */
  EAX = (r32((uint32_t)(0x1136f678)));
  /* 1134d33c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1134d33f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1134d345 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d346 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134d349 push edx */
  push32((uint32_t)(EDX));
  /* 1134d34a call 0x11346300 */
  push32(0x1134d34fu); f_11346300();
  /* 1134d34f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d352 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d355 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134d358 mov dword ptr [ecx + 0x1136e4dc], eax */
  w32((uint32_t)(ECX + 0x1136e4dc), (EAX));
  /* 1134d35e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1134d364 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1134d36a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d36d mov dword ptr [eax*4 + 0x1136f660], edx */
  w32((uint32_t)(EAX*4 + 0x1136f660), (EDX));
  /* 1134d374 push 6 */
  push32((uint32_t)(0x6u));
  /* 1134d376 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1134d37c push ecx */
  push32((uint32_t)(ECX));
  /* 1134d37d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d380 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134d383 add edx, 0x1136f6b0 */
  { uint32_t _a=(EDX),_b=(0x1136f6b0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d389 push edx */
  push32((uint32_t)(EDX));
  /* 1134d38a call 0x11349c30 */
  push32(0x1134d38fu); f_11349c30();
  /* 1134d38f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d392 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d396 jne 0x1134d3a3 */
  if (!C.zf) goto L_1134d3a3;
  /* 1134d398 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1134d39e mov dword ptr [0x1136f678], eax */
  w32((uint32_t)(0x1136f678), (EAX));
L_1134d3a3:;
  /* 1134d3a3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d3a7 jne 0x1134d3b5 */
  if (!C.zf) goto L_1134d3b5;
  /* 1134d3a9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1134d3af mov dword ptr [0x1136f67c], ecx */
  w32((uint32_t)(0x1136f67c), (ECX));
L_1134d3b5:;
  /* 1134d3b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d3b8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134d3bb call dword ptr [edx + 0x1136e4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1136e4e0))), 0x1134d3c1u);
  /* 1134d3c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d3c3 je 0x1134d3fc */
  if (C.zf) goto L_1134d3fc;
  /* 1134d3c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d3c8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134d3cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134d3ce mov dword ptr [eax + 0x1136e4dc], ecx */
  w32((uint32_t)(EAX + 0x1136e4dc), (ECX));
  /* 1134d3d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134d3d6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134d3d9 push edx */
  push32((uint32_t)(EDX));
  /* 1134d3da call 0x11343de0 */
  push32(0x1134d3dfu); f_11343de0();
  /* 1134d3df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d3e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d3e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134d3e8 mov dword ptr [eax*4 + 0x1136f660], ecx */
  w32((uint32_t)(EAX*4 + 0x1136f660), (ECX));
  /* 1134d3ef mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134d3f2 mov dword ptr [0x1136f678], edx */
  w32((uint32_t)(0x1136f678), (EDX));
  /* 1134d3f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134d3fa jmp 0x1134d41f */
  goto L_1134d41f;
L_1134d3fc:;
  /* 1134d3fc cmp dword ptr [ebp - 0xc], 0x1136e3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1136e3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d403 je 0x1134d413 */
  if (C.zf) goto L_1134d413;
  /* 1134d405 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134d407 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134d40a push eax */
  push32((uint32_t)(EAX));
  /* 1134d40b call 0x11343de0 */
  push32(0x1134d410u); f_11343de0();
  /* 1134d410 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134d413:;
  /* 1134d413 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d416 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134d419 mov eax, dword ptr [ecx + 0x1136e4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1136e4dc)));
L_1134d41f:;
  /* 1134d41f mov esp, ebp */
  ESP = (EBP);
  /* 1134d421 pop ebp */
  EBP = (pop32());
  /* 1134d422 ret  */
  ESPCHK(0x1134d290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d430 @ 0x1134d430 (256 bytes, 72 insns) */
void f_1134d430(void) {
  FTRACE(0x1134d430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134d430 push ebp */
  push32((uint32_t)(EBP));
  /* 1134d431 mov ebp, esp */
  EBP = (ESP);
  /* 1134d433 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134d436 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1134d43d cmp dword ptr [0x1136e4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136e4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d444 jne 0x1134d464 */
  if (!C.zf) goto L_1134d464;
  /* 1134d446 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1134d44b push 0x1136b030 */
  push32((uint32_t)(0x1136b030u));
  /* 1134d450 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134d452 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1134d457 call 0x11343350 */
  push32(0x1134d45cu); f_11343350();
  /* 1134d45c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d45f mov dword ptr [0x1136e4dc], eax */
  w32((uint32_t)(0x1136e4dc), (EAX));
L_1134d464:;
  /* 1134d464 mov eax, dword ptr [0x1136e4dc] */
  EAX = (r32((uint32_t)(0x1136e4dc)));
  /* 1134d469 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1134d46c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1134d473 jmp 0x1134d47e */
  goto L_1134d47e;
L_1134d475:;
  /* 1134d475 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134d478 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d47b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1134d47e:;
  /* 1134d47e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134d481 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134d484 mov eax, dword ptr [edx + 0x1136e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1136e4dc)));
  /* 1134d48a push eax */
  push32((uint32_t)(EAX));
  /* 1134d48b push 0x1136b03c */
  push32((uint32_t)(0x1136b03cu));
  /* 1134d490 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134d493 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134d496 mov edx, dword ptr [ecx + 0x1136e4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1136e4d8)));
  /* 1134d49c push edx */
  push32((uint32_t)(EDX));
  /* 1134d49d push 3 */
  push32((uint32_t)(0x3u));
  /* 1134d49f mov eax, dword ptr [0x1136e4dc] */
  EAX = (r32((uint32_t)(0x1136e4dc)));
  /* 1134d4a4 push eax */
  push32((uint32_t)(EAX));
  /* 1134d4a5 call 0x1134d6d0 */
  push32(0x1134d4aau); f_1134d6d0();
  /* 1134d4aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d4ad cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d4b1 jge 0x1134d4f9 */
  if ((C.sf==C.of)) goto L_1134d4f9;
  /* 1134d4b3 push 0x1136b028 */
  push32((uint32_t)(0x1136b028u));
  /* 1134d4b8 mov ecx, dword ptr [0x1136e4dc] */
  ECX = (r32((uint32_t)(0x1136e4dc)));
  /* 1134d4be push ecx */
  push32((uint32_t)(ECX));
  /* 1134d4bf call 0x11346310 */
  push32(0x1134d4c4u); f_11346310();
  /* 1134d4c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d4c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134d4ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d4cd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134d4d0 mov eax, dword ptr [edx + 0x1136e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1136e4dc)));
  /* 1134d4d6 push eax */
  push32((uint32_t)(EAX));
  /* 1134d4d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134d4da imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134d4dd mov edx, dword ptr [ecx + 0x1136e4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1136e4dc)));
  /* 1134d4e3 push edx */
  push32((uint32_t)(EDX));
  /* 1134d4e4 call 0x1134efe0 */
  push32(0x1134d4e9u); f_1134efe0();
  /* 1134d4e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d4ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d4ee je 0x1134d4f7 */
  if (C.zf) goto L_1134d4f7;
  /* 1134d4f0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1134d4f7:;
  /* 1134d4f7 jmp 0x1134d527 */
  goto L_1134d527;
L_1134d4f9:;
  /* 1134d4f9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d4fd jne 0x1134d506 */
  if (!C.zf) goto L_1134d506;
  /* 1134d4ff mov eax, dword ptr [0x1136e4dc] */
  EAX = (r32((uint32_t)(0x1136e4dc)));
  /* 1134d504 jmp 0x1134d52c */
  goto L_1134d52c;
L_1134d506:;
  /* 1134d506 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134d508 mov eax, dword ptr [0x1136e4dc] */
  EAX = (r32((uint32_t)(0x1136e4dc)));
  /* 1134d50d push eax */
  push32((uint32_t)(EAX));
  /* 1134d50e call 0x11343de0 */
  push32(0x1134d513u); f_11343de0();
  /* 1134d513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d516 mov dword ptr [0x1136e4dc], 0 */
  w32((uint32_t)(0x1136e4dc), (0x0u));
  /* 1134d520 mov eax, dword ptr [0x1136e4f4] */
  EAX = (r32((uint32_t)(0x1136e4f4)));
  /* 1134d525 jmp 0x1134d52c */
  goto L_1134d52c;
L_1134d527:;
  /* 1134d527 jmp 0x1134d475 */
  goto L_1134d475;
L_1134d52c:;
  /* 1134d52c mov esp, ebp */
  ESP = (EBP);
  /* 1134d52e pop ebp */
  EBP = (pop32());
  /* 1134d52f ret  */
  ESPCHK(0x1134d430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d530 @ 0x1134d530 (388 bytes, 115 insns) */
void f_1134d530(void) {
  FTRACE(0x1134d530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134d530 push ebp */
  push32((uint32_t)(EBP));
  /* 1134d531 mov ebp, esp */
  EBP = (ESP);
  /* 1134d533 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134d539 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d53d jne 0x1134d546 */
  if (!C.zf) goto L_1134d546;
  /* 1134d53f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134d541 jmp 0x1134d6b0 */
  goto L_1134d6b0;
L_1134d546:;
  /* 1134d546 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d549 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134d54c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d54f jne 0x1134d5a0 */
  if (!C.zf) goto L_1134d5a0;
  /* 1134d551 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d554 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1134d558 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d55a jne 0x1134d5a0 */
  if (!C.zf) goto L_1134d5a0;
  /* 1134d55c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d55f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1134d562 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d565 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1134d569 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d56d je 0x1134d589 */
  if (C.zf) goto L_1134d589;
  /* 1134d56f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134d572 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1134d577 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134d57a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1134d580 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134d583 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1134d589:;
  /* 1134d589 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d58d je 0x1134d598 */
  if (C.zf) goto L_1134d598;
  /* 1134d58f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134d592 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1134d598:;
  /* 1134d598 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d59b jmp 0x1134d6b0 */
  goto L_1134d6b0;
L_1134d5a0:;
  /* 1134d5a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d5a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d5a4 push 0x1136e450 */
  push32((uint32_t)(0x1136e450u));
  /* 1134d5a9 call 0x1134efe0 */
  push32(0x1134d5aeu); f_1134efe0();
  /* 1134d5ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d5b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d5b3 je 0x1134d668 */
  if (C.zf) goto L_1134d668;
  /* 1134d5b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d5bc push edx */
  push32((uint32_t)(EDX));
  /* 1134d5bd push 0x1136e3cc */
  push32((uint32_t)(0x1136e3ccu));
  /* 1134d5c2 call 0x1134efe0 */
  push32(0x1134d5c7u); f_1134efe0();
  /* 1134d5c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d5ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d5cc je 0x1134d668 */
  if (C.zf) goto L_1134d668;
  /* 1134d5d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d5d5 push eax */
  push32((uint32_t)(EAX));
  /* 1134d5d6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1134d5dc push ecx */
  push32((uint32_t)(ECX));
  /* 1134d5dd call 0x1134d720 */
  push32(0x1134d5e2u); f_1134d720();
  /* 1134d5e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d5e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d5e7 je 0x1134d5f0 */
  if (C.zf) goto L_1134d5f0;
  /* 1134d5e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134d5eb jmp 0x1134d6b0 */
  goto L_1134d6b0;
L_1134d5f0:;
  /* 1134d5f0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1134d5f6 push edx */
  push32((uint32_t)(EDX));
  /* 1134d5f7 push 0x1136f688 */
  push32((uint32_t)(0x1136f688u));
  /* 1134d5fc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1134d602 push eax */
  push32((uint32_t)(EAX));
  /* 1134d603 call 0x1134f130 */
  push32(0x1134d608u); f_1134f130();
  /* 1134d608 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d60b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d60d jne 0x1134d616 */
  if (!C.zf) goto L_1134d616;
  /* 1134d60f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134d611 jmp 0x1134d6b0 */
  goto L_1134d6b0;
L_1134d616:;
  /* 1134d616 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134d618 mov cx, word ptr [0x1136f68c] */
  CX = (r16((uint32_t)(0x1136f68c)));
  /* 1134d61f mov dword ptr [0x1136f690], ecx */
  w32((uint32_t)(0x1136f690), (ECX));
  /* 1134d625 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1134d62b push edx */
  push32((uint32_t)(EDX));
  /* 1134d62c push 0x1136e450 */
  push32((uint32_t)(0x1136e450u));
  /* 1134d631 call 0x1134d880 */
  push32(0x1134d636u); f_1134d880();
  /* 1134d636 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d639 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d63c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134d63f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134d641 je 0x1134d656 */
  if (C.zf) goto L_1134d656;
  /* 1134d643 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d646 push edx */
  push32((uint32_t)(EDX));
  /* 1134d647 push 0x1136e3cc */
  push32((uint32_t)(0x1136e3ccu));
  /* 1134d64c call 0x11346300 */
  push32(0x1134d651u); f_11346300();
  /* 1134d651 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d654 jmp 0x1134d668 */
  goto L_1134d668;
L_1134d656:;
  /* 1134d656 push 0x1136e450 */
  push32((uint32_t)(0x1136e450u));
  /* 1134d65b push 0x1136e3cc */
  push32((uint32_t)(0x1136e3ccu));
  /* 1134d660 call 0x11346300 */
  push32(0x1134d665u); f_11346300();
  /* 1134d665 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134d668:;
  /* 1134d668 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d66c je 0x1134d681 */
  if (C.zf) goto L_1134d681;
  /* 1134d66e push 6 */
  push32((uint32_t)(0x6u));
  /* 1134d670 push 0x1136f688 */
  push32((uint32_t)(0x1136f688u));
  /* 1134d675 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134d678 push eax */
  push32((uint32_t)(EAX));
  /* 1134d679 call 0x11349c30 */
  push32(0x1134d67eu); f_11349c30();
  /* 1134d67e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134d681:;
  /* 1134d681 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d685 je 0x1134d69a */
  if (C.zf) goto L_1134d69a;
  /* 1134d687 push 4 */
  push32((uint32_t)(0x4u));
  /* 1134d689 push 0x1136f690 */
  push32((uint32_t)(0x1136f690u));
  /* 1134d68e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134d691 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d692 call 0x11349c30 */
  push32(0x1134d697u); f_11349c30();
  /* 1134d697 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134d69a:;
  /* 1134d69a push 0x1136e450 */
  push32((uint32_t)(0x1136e450u));
  /* 1134d69f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d6a2 push edx */
  push32((uint32_t)(EDX));
  /* 1134d6a3 call 0x11346300 */
  push32(0x1134d6a8u); f_11346300();
  /* 1134d6a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d6ab mov eax, 0x1136e450 */
  EAX = (0x1136e450u);
L_1134d6b0:;
  /* 1134d6b0 mov esp, ebp */
  ESP = (EBP);
  /* 1134d6b2 pop ebp */
  EBP = (pop32());
  /* 1134d6b3 ret  */
  ESPCHK(0x1134d530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6c0 @ 0x1134d6c0 (7 bytes, 5 insns) */
void f_1134d6c0(void) {
  FTRACE(0x1134d6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134d6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134d6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1134d6c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134d6c5 pop ebp */
  EBP = (pop32());
  /* 1134d6c6 ret  */
  ESPCHK(0x1134d6c0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1134d6d0 (79 bytes, 28 insns) */
void f_1134d6d0(void) {
  FTRACE(0x1134d6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134d6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134d6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1134d6d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134d6d6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1134d6d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134d6dc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1134d6e3 jmp 0x1134d6ee */
  goto L_1134d6ee;
L_1134d6e5:;
  /* 1134d6e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134d6e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d6eb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1134d6ee:;
  /* 1134d6ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134d6f1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d6f4 jge 0x1134d714 */
  if ((C.sf==C.of)) goto L_1134d714;
  /* 1134d6f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134d6f9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d6fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134d6ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134d702 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1134d705 push edx */
  push32((uint32_t)(EDX));
  /* 1134d706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d709 push eax */
  push32((uint32_t)(EAX));
  /* 1134d70a call 0x11346310 */
  push32(0x1134d70fu); f_11346310();
  /* 1134d70f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d712 jmp 0x1134d6e5 */
  goto L_1134d6e5;
L_1134d714:;
  /* 1134d714 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1134d71b mov esp, ebp */
  ESP = (EBP);
  /* 1134d71d pop ebp */
  EBP = (pop32());
  /* 1134d71e ret  */
  ESPCHK(0x1134d6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d720 @ 0x1134d720 (349 bytes, 122 insns) */
void f_1134d720(void) {
  FTRACE(0x1134d720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134d720 push ebp */
  push32((uint32_t)(EBP));
  /* 1134d721 mov ebp, esp */
  EBP = (ESP);
  /* 1134d723 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134d726 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1134d72b push 0 */
  push32((uint32_t)(0x0u));
  /* 1134d72d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d730 push eax */
  push32((uint32_t)(EAX));
  /* 1134d731 call 0x113470c0 */
  push32(0x1134d736u); f_113470c0();
  /* 1134d736 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d739 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d73c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1134d73f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134d741 jne 0x1134d74a */
  if (!C.zf) goto L_1134d74a;
  /* 1134d743 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134d745 jmp 0x1134d879 */
  goto L_1134d879;
L_1134d74a:;
  /* 1134d74a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d74d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134d750 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d753 jne 0x1134d780 */
  if (!C.zf) goto L_1134d780;
  /* 1134d755 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d758 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1134d75c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d75e je 0x1134d780 */
  if (C.zf) goto L_1134d780;
  /* 1134d760 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d763 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d766 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d767 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d76a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d770 push edx */
  push32((uint32_t)(EDX));
  /* 1134d771 call 0x11346300 */
  push32(0x1134d776u); f_11346300();
  /* 1134d776 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d779 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134d77b jmp 0x1134d879 */
  goto L_1134d879;
L_1134d780:;
  /* 1134d780 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1134d787 jmp 0x1134d792 */
  goto L_1134d792;
L_1134d789:;
  /* 1134d789 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134d78c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d78f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1134d792:;
  /* 1134d792 push 0x1136b040 */
  push32((uint32_t)(0x1136b040u));
  /* 1134d797 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d79a push ecx */
  push32((uint32_t)(ECX));
  /* 1134d79b call 0x1134f070 */
  push32(0x1134d7a0u); f_1134f070();
  /* 1134d7a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d7a3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1134d7a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d7aa jne 0x1134d7b4 */
  if (!C.zf) goto L_1134d7b4;
  /* 1134d7ac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134d7af jmp 0x1134d879 */
  goto L_1134d879;
L_1134d7b4:;
  /* 1134d7b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d7b7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d7ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1134d7bc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1134d7bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d7c3 jne 0x1134d7ea */
  if (!C.zf) goto L_1134d7ea;
  /* 1134d7c5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d7c9 jge 0x1134d7ea */
  if ((C.sf==C.of)) goto L_1134d7ea;
  /* 1134d7cb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1134d7cf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d7d2 je 0x1134d7ea */
  if (C.zf) goto L_1134d7ea;
  /* 1134d7d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134d7d7 push edx */
  push32((uint32_t)(EDX));
  /* 1134d7d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d7db push eax */
  push32((uint32_t)(EAX));
  /* 1134d7dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d7df push ecx */
  push32((uint32_t)(ECX));
  /* 1134d7e0 call 0x11346b70 */
  push32(0x1134d7e5u); f_11346b70();
  /* 1134d7e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d7e8 jmp 0x1134d850 */
  goto L_1134d850;
L_1134d7ea:;
  /* 1134d7ea cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d7ee jne 0x1134d818 */
  if (!C.zf) goto L_1134d818;
  /* 1134d7f0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d7f4 jge 0x1134d818 */
  if ((C.sf==C.of)) goto L_1134d818;
  /* 1134d7f6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1134d7fa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d7fd je 0x1134d818 */
  if (C.zf) goto L_1134d818;
  /* 1134d7ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134d802 push eax */
  push32((uint32_t)(EAX));
  /* 1134d803 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d806 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d807 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d80a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d80d push edx */
  push32((uint32_t)(EDX));
  /* 1134d80e call 0x11346b70 */
  push32(0x1134d813u); f_11346b70();
  /* 1134d813 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d816 jmp 0x1134d850 */
  goto L_1134d850;
L_1134d818:;
  /* 1134d818 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d81c jne 0x1134d84b */
  if (!C.zf) goto L_1134d84b;
  /* 1134d81e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1134d822 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d824 je 0x1134d82f */
  if (C.zf) goto L_1134d82f;
  /* 1134d826 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1134d82a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d82d jne 0x1134d84b */
  if (!C.zf) goto L_1134d84b;
L_1134d82f:;
  /* 1134d82f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134d832 push edx */
  push32((uint32_t)(EDX));
  /* 1134d833 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d836 push eax */
  push32((uint32_t)(EAX));
  /* 1134d837 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d83a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d840 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d841 call 0x11346b70 */
  push32(0x1134d846u); f_11346b70();
  /* 1134d846 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d849 jmp 0x1134d850 */
  goto L_1134d850;
L_1134d84b:;
  /* 1134d84b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134d84e jmp 0x1134d879 */
  goto L_1134d879;
L_1134d850:;
  /* 1134d850 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1134d854 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d857 jne 0x1134d85b */
  if (!C.zf) goto L_1134d85b;
  /* 1134d859 jmp 0x1134d877 */
  goto L_1134d877;
L_1134d85b:;
  /* 1134d85b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1134d85f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d861 jne 0x1134d865 */
  if (!C.zf) goto L_1134d865;
  /* 1134d863 jmp 0x1134d877 */
  goto L_1134d877;
L_1134d865:;
  /* 1134d865 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134d868 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d86b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1134d86f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1134d872 jmp 0x1134d789 */
  goto L_1134d789;
L_1134d877:;
  /* 1134d877 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1134d879:;
  /* 1134d879 mov esp, ebp */
  ESP = (EBP);
  /* 1134d87b pop ebp */
  EBP = (pop32());
  /* 1134d87c ret  */
  ESPCHK(0x1134d720u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1134d880 (101 bytes, 36 insns) */
void f_1134d880(void) {
  FTRACE(0x1134d880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134d880 push ebp */
  push32((uint32_t)(EBP));
  /* 1134d881 mov ebp, esp */
  EBP = (ESP);
  /* 1134d883 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d886 push eax */
  push32((uint32_t)(EAX));
  /* 1134d887 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d88a push ecx */
  push32((uint32_t)(ECX));
  /* 1134d88b call 0x11346300 */
  push32(0x1134d890u); f_11346300();
  /* 1134d890 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d893 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d896 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1134d89a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d89c je 0x1134d8b8 */
  if (C.zf) goto L_1134d8b8;
  /* 1134d89e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d8a1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d8a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d8a5 push 0x1136b048 */
  push32((uint32_t)(0x1136b048u));
  /* 1134d8aa push 2 */
  push32((uint32_t)(0x2u));
  /* 1134d8ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d8af push edx */
  push32((uint32_t)(EDX));
  /* 1134d8b0 call 0x1134d6d0 */
  push32(0x1134d8b5u); f_1134d6d0();
  /* 1134d8b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134d8b8:;
  /* 1134d8b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d8bb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1134d8c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134d8c4 je 0x1134d8e3 */
  if (C.zf) goto L_1134d8e3;
  /* 1134d8c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134d8c9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d8cf push edx */
  push32((uint32_t)(EDX));
  /* 1134d8d0 push 0x1136b044 */
  push32((uint32_t)(0x1136b044u));
  /* 1134d8d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134d8d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d8da push eax */
  push32((uint32_t)(EAX));
  /* 1134d8db call 0x1134d6d0 */
  push32(0x1134d8e0u); f_1134d6d0();
  /* 1134d8e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134d8e3:;
  /* 1134d8e3 pop ebp */
  EBP = (pop32());
  /* 1134d8e4 ret  */
  ESPCHK(0x1134d880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8f0 @ 0x1134d8f0 (130 bytes, 50 insns) */
void f_1134d8f0(void) {
  FTRACE(0x1134d8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134d8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134d8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1134d8f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d8f4 push ebx */
  push32((uint32_t)(EBX));
  /* 1134d8f5 push esi */
  push32((uint32_t)(ESI));
  /* 1134d8f6 push edi */
  push32((uint32_t)(EDI));
  /* 1134d8f7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1134d8fe:;
  /* 1134d8fe cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d902 jne 0x1134d922 */
  if (!C.zf) goto L_1134d922;
  /* 1134d904 push 0x1136b058 */
  push32((uint32_t)(0x1136b058u));
  /* 1134d909 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134d90b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1134d90d push 0x1136b04c */
  push32((uint32_t)(0x1136b04cu));
  /* 1134d912 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134d914 call 0x11342410 */
  push32(0x1134d919u); f_11342410();
  /* 1134d919 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d91c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d91f jne 0x1134d922 */
  if (!C.zf) goto L_1134d922;
  /* 1134d921 int3  */
  x86_unimpl("int3 @ 0x1134d921");
L_1134d922:;
  /* 1134d922 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134d924 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d926 jne 0x1134d8fe */
  if (!C.zf) goto L_1134d8fe;
  /* 1134d928 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d92b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1134d92e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1134d931 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134d933 je 0x1134d941 */
  if (C.zf) goto L_1134d941;
  /* 1134d935 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d938 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1134d93f jmp 0x1134d968 */
  goto L_1134d968;
L_1134d941:;
  /* 1134d941 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d944 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d945 call 0x1134c160 */
  push32(0x1134d94au); f_1134c160();
  /* 1134d94a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d94d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d950 push edx */
  push32((uint32_t)(EDX));
  /* 1134d951 call 0x1134d980 */
  push32(0x1134d956u); f_1134d980();
  /* 1134d956 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d959 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134d95c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d95f push eax */
  push32((uint32_t)(EAX));
  /* 1134d960 call 0x1134c1d0 */
  push32(0x1134d965u); f_1134c1d0();
  /* 1134d965 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134d968:;
  /* 1134d968 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134d96b pop edi */
  EDI = (pop32());
  /* 1134d96c pop esi */
  ESI = (pop32());
  /* 1134d96d pop ebx */
  EBX = (pop32());
  /* 1134d96e mov esp, ebp */
  ESP = (EBP);
  /* 1134d970 pop ebp */
  EBP = (pop32());
  /* 1134d971 ret  */
  ESPCHK(0x1134d8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d980 @ 0x1134d980 (190 bytes, 67 insns) */
void f_1134d980(void) {
  FTRACE(0x1134d980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134d980 push ebp */
  push32((uint32_t)(EBP));
  /* 1134d981 mov ebp, esp */
  EBP = (ESP);
  /* 1134d983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134d986 push ebx */
  push32((uint32_t)(EBX));
  /* 1134d987 push esi */
  push32((uint32_t)(ESI));
  /* 1134d988 push edi */
  push32((uint32_t)(EDI));
  /* 1134d989 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1134d990 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134d993 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1134d996:;
  /* 1134d996 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d99a jne 0x1134d9ba */
  if (!C.zf) goto L_1134d9ba;
  /* 1134d99c push 0x1136aefc */
  push32((uint32_t)(0x1136aefcu));
  /* 1134d9a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134d9a3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1134d9a5 push 0x1136b04c */
  push32((uint32_t)(0x1136b04cu));
  /* 1134d9aa push 2 */
  push32((uint32_t)(0x2u));
  /* 1134d9ac call 0x11342410 */
  push32(0x1134d9b1u); f_11342410();
  /* 1134d9b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d9b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134d9b7 jne 0x1134d9ba */
  if (!C.zf) goto L_1134d9ba;
  /* 1134d9b9 int3  */
  x86_unimpl("int3 @ 0x1134d9b9");
L_1134d9ba:;
  /* 1134d9ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134d9bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134d9be jne 0x1134d996 */
  if (!C.zf) goto L_1134d996;
  /* 1134d9c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134d9c3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1134d9c6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1134d9cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d9cd je 0x1134da2a */
  if (C.zf) goto L_1134da2a;
  /* 1134d9cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134d9d2 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d9d3 call 0x1134cc80 */
  push32(0x1134d9d8u); f_1134cc80();
  /* 1134d9d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d9db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134d9de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134d9e1 push edx */
  push32((uint32_t)(EDX));
  /* 1134d9e2 call 0x11350000 */
  push32(0x1134d9e7u); f_11350000();
  /* 1134d9e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d9ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134d9ed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1134d9f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1134d9f1 call 0x1134fed0 */
  push32(0x1134d9f6u); f_1134fed0();
  /* 1134d9f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134d9f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134d9fb jge 0x1134da06 */
  if ((C.sf==C.of)) goto L_1134da06;
  /* 1134d9fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1134da04 jmp 0x1134da2a */
  goto L_1134da2a;
L_1134da06:;
  /* 1134da06 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134da09 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134da0d je 0x1134da2a */
  if (C.zf) goto L_1134da2a;
  /* 1134da0f push 2 */
  push32((uint32_t)(0x2u));
  /* 1134da11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134da14 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1134da17 push ecx */
  push32((uint32_t)(ECX));
  /* 1134da18 call 0x11343de0 */
  push32(0x1134da1du); f_11343de0();
  /* 1134da1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134da20 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134da23 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1134da2a:;
  /* 1134da2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134da2d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1134da34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134da37 pop edi */
  EDI = (pop32());
  /* 1134da38 pop esi */
  ESI = (pop32());
  /* 1134da39 pop ebx */
  EBX = (pop32());
  /* 1134da3a mov esp, ebp */
  ESP = (EBP);
  /* 1134da3c pop ebp */
  EBP = (pop32());
  /* 1134da3d ret  */
  ESPCHK(0x1134d980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da40 @ 0x1134da40 (210 bytes, 63 insns) */
void f_1134da40(void) {
  FTRACE(0x1134da40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134da40 push ebp */
  push32((uint32_t)(EBP));
  /* 1134da41 mov ebp, esp */
  EBP = (ESP);
  /* 1134da43 push ecx */
  push32((uint32_t)(ECX));
  /* 1134da44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134da47 cmp eax, dword ptr [0x11370f7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11370f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134da4d jae 0x1134da71 */
  if (!C.cf) goto L_1134da71;
  /* 1134da4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134da52 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1134da55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134da58 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1134da5b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134da5e mov eax, dword ptr [ecx*4 + 0x11370e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11370e40)));
  /* 1134da65 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1134da6a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1134da6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134da6f jne 0x1134da84 */
  if (!C.zf) goto L_1134da84;
L_1134da71:;
  /* 1134da71 call 0x1134b220 */
  push32(0x1134da76u); f_1134b220();
  /* 1134da76 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1134da7c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134da7f jmp 0x1134db0e */
  goto L_1134db0e;
L_1134da84:;
  /* 1134da84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134da87 push edx */
  push32((uint32_t)(EDX));
  /* 1134da88 call 0x1134ca40 */
  push32(0x1134da8du); f_1134ca40();
  /* 1134da8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134da90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134da93 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1134da96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134da99 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1134da9c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134da9f mov edx, dword ptr [eax*4 + 0x11370e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11370e40)));
  /* 1134daa6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1134daab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1134daae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134dab0 je 0x1134daed */
  if (C.zf) goto L_1134daed;
  /* 1134dab2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dab5 push ecx */
  push32((uint32_t)(ECX));
  /* 1134dab6 call 0x1134c8c0 */
  push32(0x1134dabbu); f_1134c8c0();
  /* 1134dabb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dabe push eax */
  push32((uint32_t)(EAX));
  /* 1134dabf call dword ptr [0x113712c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712c4))), 0x1134dac5u);
  /* 1134dac5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134dac7 jne 0x1134dad4 */
  if (!C.zf) goto L_1134dad4;
  /* 1134dac9 call dword ptr [0x11371364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371364))), 0x1134dacfu);
  /* 1134dacf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134dad2 jmp 0x1134dadb */
  goto L_1134dadb;
L_1134dad4:;
  /* 1134dad4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1134dadb:;
  /* 1134dadb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134dadf jne 0x1134dae3 */
  if (!C.zf) goto L_1134dae3;
  /* 1134dae1 jmp 0x1134daff */
  goto L_1134daff;
L_1134dae3:;
  /* 1134dae3 call 0x1134b230 */
  push32(0x1134dae8u); f_1134b230();
  /* 1134dae8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134daeb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1134daed:;
  /* 1134daed call 0x1134b220 */
  push32(0x1134daf2u); f_1134b220();
  /* 1134daf2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1134daf8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1134daff:;
  /* 1134daff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134db02 push eax */
  push32((uint32_t)(EAX));
  /* 1134db03 call 0x1134cad0 */
  push32(0x1134db08u); f_1134cad0();
  /* 1134db08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134db0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1134db0e:;
  /* 1134db0e mov esp, ebp */
  ESP = (EBP);
  /* 1134db10 pop ebp */
  EBP = (pop32());
  /* 1134db11 ret  */
  ESPCHK(0x1134da40u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1134db20 (219 bytes, 64 insns) */
void f_1134db20(void) {
  FTRACE(0x1134db20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134db20 push ebp */
  push32((uint32_t)(EBP));
  /* 1134db21 mov ebp, esp */
  EBP = (ESP);
  /* 1134db23 push ecx */
  push32((uint32_t)(ECX));
  /* 1134db24 cmp dword ptr [0x1136f674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134db2b je 0x1134dbc1 */
  if (C.zf) goto L_1134dbc1;
  /* 1134db31 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1134db33 push 0x1136b068 */
  push32((uint32_t)(0x1136b068u));
  /* 1134db38 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134db3a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1134db3f push 1 */
  push32((uint32_t)(0x1u));
  /* 1134db41 call 0x11343760 */
  push32(0x1134db46u); f_11343760();
  /* 1134db46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134db49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134db4c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134db50 jne 0x1134db5c */
  if (!C.zf) goto L_1134db5c;
  /* 1134db52 mov eax, 1 */
  EAX = (0x1u);
  /* 1134db57 jmp 0x1134dbf7 */
  goto L_1134dbf7;
L_1134db5c:;
  /* 1134db5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134db5f push eax */
  push32((uint32_t)(EAX));
  /* 1134db60 call 0x1134dc00 */
  push32(0x1134db65u); f_1134dc00();
  /* 1134db65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134db68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134db6a je 0x1134db8d */
  if (C.zf) goto L_1134db8d;
  /* 1134db6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134db6f push ecx */
  push32((uint32_t)(ECX));
  /* 1134db70 call 0x1134e190 */
  push32(0x1134db75u); f_1134e190();
  /* 1134db75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134db78 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134db7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134db7d push edx */
  push32((uint32_t)(EDX));
  /* 1134db7e call 0x11343de0 */
  push32(0x1134db83u); f_11343de0();
  /* 1134db83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134db86 mov eax, 1 */
  EAX = (0x1u);
  /* 1134db8b jmp 0x1134dbf7 */
  goto L_1134dbf7;
L_1134db8d:;
  /* 1134db8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134db90 mov dword ptr [0x1136ec98], eax */
  w32((uint32_t)(0x1136ec98), (EAX));
  /* 1134db95 mov ecx, dword ptr [0x1136f694] */
  ECX = (r32((uint32_t)(0x1136f694)));
  /* 1134db9b push ecx */
  push32((uint32_t)(ECX));
  /* 1134db9c call 0x1134e190 */
  push32(0x1134dba1u); f_1134e190();
  /* 1134dba1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dba4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134dba6 mov edx, dword ptr [0x1136f694] */
  EDX = (r32((uint32_t)(0x1136f694)));
  /* 1134dbac push edx */
  push32((uint32_t)(EDX));
  /* 1134dbad call 0x11343de0 */
  push32(0x1134dbb2u); f_11343de0();
  /* 1134dbb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dbb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dbb8 mov dword ptr [0x1136f694], eax */
  w32((uint32_t)(0x1136f694), (EAX));
  /* 1134dbbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134dbbf jmp 0x1134dbf7 */
  goto L_1134dbf7;
L_1134dbc1:;
  /* 1134dbc1 mov dword ptr [0x1136ec98], 0x1136eca0 */
  w32((uint32_t)(0x1136ec98), (0x1136eca0u));
  /* 1134dbcb mov ecx, dword ptr [0x1136f694] */
  ECX = (r32((uint32_t)(0x1136f694)));
  /* 1134dbd1 push ecx */
  push32((uint32_t)(ECX));
  /* 1134dbd2 call 0x1134e190 */
  push32(0x1134dbd7u); f_1134e190();
  /* 1134dbd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dbda push 2 */
  push32((uint32_t)(0x2u));
  /* 1134dbdc mov edx, dword ptr [0x1136f694] */
  EDX = (r32((uint32_t)(0x1136f694)));
  /* 1134dbe2 push edx */
  push32((uint32_t)(EDX));
  /* 1134dbe3 call 0x11343de0 */
  push32(0x1134dbe8u); f_11343de0();
  /* 1134dbe8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dbeb mov dword ptr [0x1136f694], 0 */
  w32((uint32_t)(0x1136f694), (0x0u));
  /* 1134dbf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1134dbf7:;
  /* 1134dbf7 mov esp, ebp */
  ESP = (EBP);
  /* 1134dbf9 pop ebp */
  EBP = (pop32());
  /* 1134dbfa ret  */
  ESPCHK(0x1134db20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc00 @ 0x1134dc00 (1423 bytes, 533 insns) */
void f_1134dc00(void) {
  FTRACE(0x1134dc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134dc00 push ebp */
  push32((uint32_t)(EBP));
  /* 1134dc01 mov ebp, esp */
  EBP = (ESP);
  /* 1134dc03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134dc06 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1134dc0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134dc0f mov ax, word ptr [0x1136f6ce] */
  AX = (r16((uint32_t)(0x1136f6ce)));
  /* 1134dc15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134dc18 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134dc1a mov cx, word ptr [0x1136f6d0] */
  CX = (r16((uint32_t)(0x1136f6d0)));
  /* 1134dc21 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134dc24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134dc28 jne 0x1134dc32 */
  if (!C.zf) goto L_1134dc32;
  /* 1134dc2a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134dc2d jmp 0x1134e18b */
  goto L_1134e18b;
L_1134dc32:;
  /* 1134dc32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dc35 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dc38 push edx */
  push32((uint32_t)(EDX));
  /* 1134dc39 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1134dc3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dc3e push eax */
  push32((uint32_t)(EAX));
  /* 1134dc3f push 1 */
  push32((uint32_t)(0x1u));
  /* 1134dc41 call 0x11351510 */
  push32(0x1134dc46u); f_11351510();
  /* 1134dc46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dc49 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134dc4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134dc4e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134dc51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dc54 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dc57 push edx */
  push32((uint32_t)(EDX));
  /* 1134dc58 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1134dc5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dc5d push eax */
  push32((uint32_t)(EAX));
  /* 1134dc5e push 1 */
  push32((uint32_t)(0x1u));
  /* 1134dc60 call 0x11351510 */
  push32(0x1134dc65u); f_11351510();
  /* 1134dc65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dc68 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134dc6b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134dc6d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134dc70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dc73 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dc76 push edx */
  push32((uint32_t)(EDX));
  /* 1134dc77 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1134dc79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dc7c push eax */
  push32((uint32_t)(EAX));
  /* 1134dc7d push 1 */
  push32((uint32_t)(0x1u));
  /* 1134dc7f call 0x11351510 */
  push32(0x1134dc84u); f_11351510();
  /* 1134dc84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dc87 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134dc8a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134dc8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134dc8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dc92 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dc95 push edx */
  push32((uint32_t)(EDX));
  /* 1134dc96 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1134dc98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dc9b push eax */
  push32((uint32_t)(EAX));
  /* 1134dc9c push 1 */
  push32((uint32_t)(0x1u));
  /* 1134dc9e call 0x11351510 */
  push32(0x1134dca3u); f_11351510();
  /* 1134dca3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dca6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134dca9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134dcab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134dcae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dcb1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dcb4 push edx */
  push32((uint32_t)(EDX));
  /* 1134dcb5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1134dcb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dcba push eax */
  push32((uint32_t)(EAX));
  /* 1134dcbb push 1 */
  push32((uint32_t)(0x1u));
  /* 1134dcbd call 0x11351510 */
  push32(0x1134dcc2u); f_11351510();
  /* 1134dcc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dcc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134dcc8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134dcca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134dccd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dcd0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dcd3 push edx */
  push32((uint32_t)(EDX));
  /* 1134dcd4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1134dcd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dcd9 push eax */
  push32((uint32_t)(EAX));
  /* 1134dcda push 1 */
  push32((uint32_t)(0x1u));
  /* 1134dcdc call 0x11351510 */
  push32(0x1134dce1u); f_11351510();
  /* 1134dce1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dce4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134dce7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134dce9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134dcec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dcef push edx */
  push32((uint32_t)(EDX));
  /* 1134dcf0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1134dcf2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dcf5 push eax */
  push32((uint32_t)(EAX));
  /* 1134dcf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134dcf8 call 0x11351510 */
  push32(0x1134dcfdu); f_11351510();
  /* 1134dcfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dd00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134dd03 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134dd05 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134dd08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dd0b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dd0e push edx */
  push32((uint32_t)(EDX));
  /* 1134dd0f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1134dd11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dd14 push eax */
  push32((uint32_t)(EAX));
  /* 1134dd15 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134dd17 call 0x11351510 */
  push32(0x1134dd1cu); f_11351510();
  /* 1134dd1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dd1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134dd22 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134dd24 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134dd27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dd2a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dd2d push edx */
  push32((uint32_t)(EDX));
  /* 1134dd2e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1134dd30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dd33 push eax */
  push32((uint32_t)(EAX));
  /* 1134dd34 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134dd36 call 0x11351510 */
  push32(0x1134dd3bu); f_11351510();
  /* 1134dd3b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dd3e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134dd41 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134dd43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134dd46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dd49 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dd4c push edx */
  push32((uint32_t)(EDX));
  /* 1134dd4d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1134dd4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dd52 push eax */
  push32((uint32_t)(EAX));
  /* 1134dd53 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134dd55 call 0x11351510 */
  push32(0x1134dd5au); f_11351510();
  /* 1134dd5a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dd5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134dd60 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134dd62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134dd65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dd68 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dd6b push edx */
  push32((uint32_t)(EDX));
  /* 1134dd6c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1134dd6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dd71 push eax */
  push32((uint32_t)(EAX));
  /* 1134dd72 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134dd74 call 0x11351510 */
  push32(0x1134dd79u); f_11351510();
  /* 1134dd79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dd7c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134dd7f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134dd81 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134dd84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dd87 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dd8a push edx */
  push32((uint32_t)(EDX));
  /* 1134dd8b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1134dd8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dd90 push eax */
  push32((uint32_t)(EAX));
  /* 1134dd91 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134dd93 call 0x11351510 */
  push32(0x1134dd98u); f_11351510();
  /* 1134dd98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dd9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134dd9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134dda0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134dda3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dda6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dda9 push edx */
  push32((uint32_t)(EDX));
  /* 1134ddaa push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1134ddac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ddaf push eax */
  push32((uint32_t)(EAX));
  /* 1134ddb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134ddb2 call 0x11351510 */
  push32(0x1134ddb7u); f_11351510();
  /* 1134ddb7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ddba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134ddbd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134ddbf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134ddc2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ddc5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ddc8 push edx */
  push32((uint32_t)(EDX));
  /* 1134ddc9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1134ddcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ddce push eax */
  push32((uint32_t)(EAX));
  /* 1134ddcf push 1 */
  push32((uint32_t)(0x1u));
  /* 1134ddd1 call 0x11351510 */
  push32(0x1134ddd6u); f_11351510();
  /* 1134ddd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ddd9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134dddc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134ddde mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134dde1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dde4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dde7 push edx */
  push32((uint32_t)(EDX));
  /* 1134dde8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1134ddea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dded push eax */
  push32((uint32_t)(EAX));
  /* 1134ddee push 1 */
  push32((uint32_t)(0x1u));
  /* 1134ddf0 call 0x11351510 */
  push32(0x1134ddf5u); f_11351510();
  /* 1134ddf5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ddf8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134ddfb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134ddfd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134de00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134de03 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134de06 push edx */
  push32((uint32_t)(EDX));
  /* 1134de07 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1134de09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134de0c push eax */
  push32((uint32_t)(EAX));
  /* 1134de0d push 1 */
  push32((uint32_t)(0x1u));
  /* 1134de0f call 0x11351510 */
  push32(0x1134de14u); f_11351510();
  /* 1134de14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134de17 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134de1a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134de1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134de1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134de22 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134de25 push edx */
  push32((uint32_t)(EDX));
  /* 1134de26 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1134de28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134de2b push eax */
  push32((uint32_t)(EAX));
  /* 1134de2c push 1 */
  push32((uint32_t)(0x1u));
  /* 1134de2e call 0x11351510 */
  push32(0x1134de33u); f_11351510();
  /* 1134de33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134de36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134de39 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134de3b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134de3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134de41 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134de44 push edx */
  push32((uint32_t)(EDX));
  /* 1134de45 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1134de47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134de4a push eax */
  push32((uint32_t)(EAX));
  /* 1134de4b push 1 */
  push32((uint32_t)(0x1u));
  /* 1134de4d call 0x11351510 */
  push32(0x1134de52u); f_11351510();
  /* 1134de52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134de55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134de58 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134de5a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134de5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134de60 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134de63 push edx */
  push32((uint32_t)(EDX));
  /* 1134de64 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1134de66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134de69 push eax */
  push32((uint32_t)(EAX));
  /* 1134de6a push 1 */
  push32((uint32_t)(0x1u));
  /* 1134de6c call 0x11351510 */
  push32(0x1134de71u); f_11351510();
  /* 1134de71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134de74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134de77 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134de79 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134de7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134de7f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134de82 push edx */
  push32((uint32_t)(EDX));
  /* 1134de83 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1134de85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134de88 push eax */
  push32((uint32_t)(EAX));
  /* 1134de89 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134de8b call 0x11351510 */
  push32(0x1134de90u); f_11351510();
  /* 1134de90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134de93 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134de96 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134de98 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134de9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134de9e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dea1 push edx */
  push32((uint32_t)(EDX));
  /* 1134dea2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1134dea4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dea7 push eax */
  push32((uint32_t)(EAX));
  /* 1134dea8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134deaa call 0x11351510 */
  push32(0x1134deafu); f_11351510();
  /* 1134deaf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134deb2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134deb5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134deb7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134deba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134debd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dec0 push edx */
  push32((uint32_t)(EDX));
  /* 1134dec1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1134dec3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dec6 push eax */
  push32((uint32_t)(EAX));
  /* 1134dec7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134dec9 call 0x11351510 */
  push32(0x1134deceu); f_11351510();
  /* 1134dece add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ded1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134ded4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134ded6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134ded9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dedc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dedf push edx */
  push32((uint32_t)(EDX));
  /* 1134dee0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1134dee2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dee5 push eax */
  push32((uint32_t)(EAX));
  /* 1134dee6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134dee8 call 0x11351510 */
  push32(0x1134deedu); f_11351510();
  /* 1134deed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134def0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134def3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134def5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134def8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134defb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134defe push edx */
  push32((uint32_t)(EDX));
  /* 1134deff push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1134df01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134df04 push eax */
  push32((uint32_t)(EAX));
  /* 1134df05 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134df07 call 0x11351510 */
  push32(0x1134df0cu); f_11351510();
  /* 1134df0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134df0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134df12 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134df14 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134df17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134df1a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134df1d push edx */
  push32((uint32_t)(EDX));
  /* 1134df1e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1134df20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134df23 push eax */
  push32((uint32_t)(EAX));
  /* 1134df24 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134df26 call 0x11351510 */
  push32(0x1134df2bu); f_11351510();
  /* 1134df2b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134df2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134df31 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134df33 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134df36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134df39 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134df3c push edx */
  push32((uint32_t)(EDX));
  /* 1134df3d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1134df3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134df42 push eax */
  push32((uint32_t)(EAX));
  /* 1134df43 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134df45 call 0x11351510 */
  push32(0x1134df4au); f_11351510();
  /* 1134df4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134df4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134df50 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134df52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134df55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134df58 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134df5b push edx */
  push32((uint32_t)(EDX));
  /* 1134df5c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1134df5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134df61 push eax */
  push32((uint32_t)(EAX));
  /* 1134df62 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134df64 call 0x11351510 */
  push32(0x1134df69u); f_11351510();
  /* 1134df69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134df6c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134df6f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134df71 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134df74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134df77 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134df7a push edx */
  push32((uint32_t)(EDX));
  /* 1134df7b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1134df7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134df80 push eax */
  push32((uint32_t)(EAX));
  /* 1134df81 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134df83 call 0x11351510 */
  push32(0x1134df88u); f_11351510();
  /* 1134df88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134df8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134df8e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134df90 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134df93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134df96 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134df99 push edx */
  push32((uint32_t)(EDX));
  /* 1134df9a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1134df9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134df9f push eax */
  push32((uint32_t)(EAX));
  /* 1134dfa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134dfa2 call 0x11351510 */
  push32(0x1134dfa7u); f_11351510();
  /* 1134dfa7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dfaa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134dfad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134dfaf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134dfb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dfb5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dfb8 push edx */
  push32((uint32_t)(EDX));
  /* 1134dfb9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1134dfbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dfbe push eax */
  push32((uint32_t)(EAX));
  /* 1134dfbf push 1 */
  push32((uint32_t)(0x1u));
  /* 1134dfc1 call 0x11351510 */
  push32(0x1134dfc6u); f_11351510();
  /* 1134dfc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dfc9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134dfcc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134dfce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134dfd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dfd4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dfd7 push edx */
  push32((uint32_t)(EDX));
  /* 1134dfd8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1134dfda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dfdd push eax */
  push32((uint32_t)(EAX));
  /* 1134dfde push 1 */
  push32((uint32_t)(0x1u));
  /* 1134dfe0 call 0x11351510 */
  push32(0x1134dfe5u); f_11351510();
  /* 1134dfe5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dfe8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134dfeb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134dfed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134dff0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134dff3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134dff6 push edx */
  push32((uint32_t)(EDX));
  /* 1134dff7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1134dff9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134dffc push eax */
  push32((uint32_t)(EAX));
  /* 1134dffd push 1 */
  push32((uint32_t)(0x1u));
  /* 1134dfff call 0x11351510 */
  push32(0x1134e004u); f_11351510();
  /* 1134e004 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e007 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134e00a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e00c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134e00f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e012 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e018 push edx */
  push32((uint32_t)(EDX));
  /* 1134e019 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1134e01b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e01e push eax */
  push32((uint32_t)(EAX));
  /* 1134e01f push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e021 call 0x11351510 */
  push32(0x1134e026u); f_11351510();
  /* 1134e026 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e029 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134e02c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e02e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134e031 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e034 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e03a push edx */
  push32((uint32_t)(EDX));
  /* 1134e03b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1134e03d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e040 push eax */
  push32((uint32_t)(EAX));
  /* 1134e041 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e043 call 0x11351510 */
  push32(0x1134e048u); f_11351510();
  /* 1134e048 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e04b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134e04e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e050 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134e053 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e056 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e05c push edx */
  push32((uint32_t)(EDX));
  /* 1134e05d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1134e05f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e062 push eax */
  push32((uint32_t)(EAX));
  /* 1134e063 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e065 call 0x11351510 */
  push32(0x1134e06au); f_11351510();
  /* 1134e06a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e06d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134e070 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e072 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134e075 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e078 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e07e push edx */
  push32((uint32_t)(EDX));
  /* 1134e07f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1134e081 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e084 push eax */
  push32((uint32_t)(EAX));
  /* 1134e085 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e087 call 0x11351510 */
  push32(0x1134e08cu); f_11351510();
  /* 1134e08c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e08f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134e092 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e094 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134e097 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e09a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e0a0 push edx */
  push32((uint32_t)(EDX));
  /* 1134e0a1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1134e0a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e0a6 push eax */
  push32((uint32_t)(EAX));
  /* 1134e0a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e0a9 call 0x11351510 */
  push32(0x1134e0aeu); f_11351510();
  /* 1134e0ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e0b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134e0b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e0b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134e0b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e0bc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e0c2 push edx */
  push32((uint32_t)(EDX));
  /* 1134e0c3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1134e0c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e0c8 push eax */
  push32((uint32_t)(EAX));
  /* 1134e0c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e0cb call 0x11351510 */
  push32(0x1134e0d0u); f_11351510();
  /* 1134e0d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e0d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134e0d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e0d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134e0db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e0de add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e0e4 push edx */
  push32((uint32_t)(EDX));
  /* 1134e0e5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1134e0e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e0ea push eax */
  push32((uint32_t)(EAX));
  /* 1134e0eb push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e0ed call 0x11351510 */
  push32(0x1134e0f2u); f_11351510();
  /* 1134e0f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e0f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134e0f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e0fa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134e0fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e100 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e106 push edx */
  push32((uint32_t)(EDX));
  /* 1134e107 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1134e109 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e10c push eax */
  push32((uint32_t)(EAX));
  /* 1134e10d push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e10f call 0x11351510 */
  push32(0x1134e114u); f_11351510();
  /* 1134e114 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e117 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134e11a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e11c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134e11f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e122 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e128 push edx */
  push32((uint32_t)(EDX));
  /* 1134e129 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1134e12b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134e12e push eax */
  push32((uint32_t)(EAX));
  /* 1134e12f push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e131 call 0x11351510 */
  push32(0x1134e136u); f_11351510();
  /* 1134e136 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e139 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134e13c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e13e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134e141 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e144 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e14a push edx */
  push32((uint32_t)(EDX));
  /* 1134e14b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1134e14d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134e150 push eax */
  push32((uint32_t)(EAX));
  /* 1134e151 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e153 call 0x11351510 */
  push32(0x1134e158u); f_11351510();
  /* 1134e158 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e15b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134e15e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e160 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134e163 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e166 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e16c push edx */
  push32((uint32_t)(EDX));
  /* 1134e16d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1134e172 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134e175 push eax */
  push32((uint32_t)(EAX));
  /* 1134e176 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e178 call 0x11351510 */
  push32(0x1134e17du); f_11351510();
  /* 1134e17d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e180 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134e183 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e185 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1134e188 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1134e18b:;
  /* 1134e18b mov esp, ebp */
  ESP = (EBP);
  /* 1134e18d pop ebp */
  EBP = (pop32());
  /* 1134e18e ret  */
  ESPCHK(0x1134dc00u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1134e190 (779 bytes, 265 insns) */
void f_1134e190(void) {
  FTRACE(0x1134e190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134e190 push ebp */
  push32((uint32_t)(EBP));
  /* 1134e191 mov ebp, esp */
  EBP = (ESP);
  /* 1134e193 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134e197 jne 0x1134e19e */
  if (!C.zf) goto L_1134e19e;
  /* 1134e199 jmp 0x1134e499 */
  goto L_1134e499;
L_1134e19e:;
  /* 1134e19e push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e1a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e1a3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1134e1a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1134e1a7 call 0x11343de0 */
  push32(0x1134e1acu); f_11343de0();
  /* 1134e1ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e1af push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e1b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e1b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1134e1b7 push eax */
  push32((uint32_t)(EAX));
  /* 1134e1b8 call 0x11343de0 */
  push32(0x1134e1bdu); f_11343de0();
  /* 1134e1bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e1c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e1c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e1c5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1134e1c8 push edx */
  push32((uint32_t)(EDX));
  /* 1134e1c9 call 0x11343de0 */
  push32(0x1134e1ceu); f_11343de0();
  /* 1134e1ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e1d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e1d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e1d6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1134e1d9 push ecx */
  push32((uint32_t)(ECX));
  /* 1134e1da call 0x11343de0 */
  push32(0x1134e1dfu); f_11343de0();
  /* 1134e1df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e1e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e1e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e1e7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1134e1ea push eax */
  push32((uint32_t)(EAX));
  /* 1134e1eb call 0x11343de0 */
  push32(0x1134e1f0u); f_11343de0();
  /* 1134e1f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e1f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e1f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e1f8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1134e1fb push edx */
  push32((uint32_t)(EDX));
  /* 1134e1fc call 0x11343de0 */
  push32(0x1134e201u); f_11343de0();
  /* 1134e201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e204 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e209 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1134e20b push ecx */
  push32((uint32_t)(ECX));
  /* 1134e20c call 0x11343de0 */
  push32(0x1134e211u); f_11343de0();
  /* 1134e211 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e214 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e216 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e219 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1134e21c push eax */
  push32((uint32_t)(EAX));
  /* 1134e21d call 0x11343de0 */
  push32(0x1134e222u); f_11343de0();
  /* 1134e222 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e225 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e227 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e22a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1134e22d push edx */
  push32((uint32_t)(EDX));
  /* 1134e22e call 0x11343de0 */
  push32(0x1134e233u); f_11343de0();
  /* 1134e233 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e236 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e238 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e23b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1134e23e push ecx */
  push32((uint32_t)(ECX));
  /* 1134e23f call 0x11343de0 */
  push32(0x1134e244u); f_11343de0();
  /* 1134e244 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e247 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e249 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e24c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1134e24f push eax */
  push32((uint32_t)(EAX));
  /* 1134e250 call 0x11343de0 */
  push32(0x1134e255u); f_11343de0();
  /* 1134e255 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e258 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e25a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e25d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1134e260 push edx */
  push32((uint32_t)(EDX));
  /* 1134e261 call 0x11343de0 */
  push32(0x1134e266u); f_11343de0();
  /* 1134e266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e269 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e26b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e26e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1134e271 push ecx */
  push32((uint32_t)(ECX));
  /* 1134e272 call 0x11343de0 */
  push32(0x1134e277u); f_11343de0();
  /* 1134e277 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e27a push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e27c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e27f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1134e282 push eax */
  push32((uint32_t)(EAX));
  /* 1134e283 call 0x11343de0 */
  push32(0x1134e288u); f_11343de0();
  /* 1134e288 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e28b push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e28d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e290 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1134e293 push edx */
  push32((uint32_t)(EDX));
  /* 1134e294 call 0x11343de0 */
  push32(0x1134e299u); f_11343de0();
  /* 1134e299 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e29c push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e29e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e2a1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1134e2a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1134e2a5 call 0x11343de0 */
  push32(0x1134e2aau); f_11343de0();
  /* 1134e2aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e2ad push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e2af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e2b2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1134e2b5 push eax */
  push32((uint32_t)(EAX));
  /* 1134e2b6 call 0x11343de0 */
  push32(0x1134e2bbu); f_11343de0();
  /* 1134e2bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e2be push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e2c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e2c3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1134e2c6 push edx */
  push32((uint32_t)(EDX));
  /* 1134e2c7 call 0x11343de0 */
  push32(0x1134e2ccu); f_11343de0();
  /* 1134e2cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e2cf push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e2d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e2d4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1134e2d7 push ecx */
  push32((uint32_t)(ECX));
  /* 1134e2d8 call 0x11343de0 */
  push32(0x1134e2ddu); f_11343de0();
  /* 1134e2dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e2e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e2e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e2e5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1134e2e8 push eax */
  push32((uint32_t)(EAX));
  /* 1134e2e9 call 0x11343de0 */
  push32(0x1134e2eeu); f_11343de0();
  /* 1134e2ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e2f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e2f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e2f6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1134e2f9 push edx */
  push32((uint32_t)(EDX));
  /* 1134e2fa call 0x11343de0 */
  push32(0x1134e2ffu); f_11343de0();
  /* 1134e2ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e302 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e307 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1134e30a push ecx */
  push32((uint32_t)(ECX));
  /* 1134e30b call 0x11343de0 */
  push32(0x1134e310u); f_11343de0();
  /* 1134e310 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e313 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e315 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e318 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1134e31b push eax */
  push32((uint32_t)(EAX));
  /* 1134e31c call 0x11343de0 */
  push32(0x1134e321u); f_11343de0();
  /* 1134e321 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e324 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e326 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e329 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1134e32c push edx */
  push32((uint32_t)(EDX));
  /* 1134e32d call 0x11343de0 */
  push32(0x1134e332u); f_11343de0();
  /* 1134e332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e335 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e337 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e33a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1134e33d push ecx */
  push32((uint32_t)(ECX));
  /* 1134e33e call 0x11343de0 */
  push32(0x1134e343u); f_11343de0();
  /* 1134e343 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e346 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e348 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e34b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1134e34e push eax */
  push32((uint32_t)(EAX));
  /* 1134e34f call 0x11343de0 */
  push32(0x1134e354u); f_11343de0();
  /* 1134e354 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e357 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e359 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e35c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1134e35f push edx */
  push32((uint32_t)(EDX));
  /* 1134e360 call 0x11343de0 */
  push32(0x1134e365u); f_11343de0();
  /* 1134e365 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e368 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e36a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e36d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1134e370 push ecx */
  push32((uint32_t)(ECX));
  /* 1134e371 call 0x11343de0 */
  push32(0x1134e376u); f_11343de0();
  /* 1134e376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e379 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e37b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e37e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1134e381 push eax */
  push32((uint32_t)(EAX));
  /* 1134e382 call 0x11343de0 */
  push32(0x1134e387u); f_11343de0();
  /* 1134e387 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e38a push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e38c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e38f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1134e392 push edx */
  push32((uint32_t)(EDX));
  /* 1134e393 call 0x11343de0 */
  push32(0x1134e398u); f_11343de0();
  /* 1134e398 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e39b push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e39d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e3a0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1134e3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134e3a4 call 0x11343de0 */
  push32(0x1134e3a9u); f_11343de0();
  /* 1134e3a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e3ac push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e3ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e3b1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1134e3b4 push eax */
  push32((uint32_t)(EAX));
  /* 1134e3b5 call 0x11343de0 */
  push32(0x1134e3bau); f_11343de0();
  /* 1134e3ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e3bd push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e3bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e3c2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1134e3c8 push edx */
  push32((uint32_t)(EDX));
  /* 1134e3c9 call 0x11343de0 */
  push32(0x1134e3ceu); f_11343de0();
  /* 1134e3ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e3d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e3d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e3d6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1134e3dc push ecx */
  push32((uint32_t)(ECX));
  /* 1134e3dd call 0x11343de0 */
  push32(0x1134e3e2u); f_11343de0();
  /* 1134e3e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e3e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e3e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e3ea mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1134e3f0 push eax */
  push32((uint32_t)(EAX));
  /* 1134e3f1 call 0x11343de0 */
  push32(0x1134e3f6u); f_11343de0();
  /* 1134e3f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e3f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e3fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e3fe mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1134e404 push edx */
  push32((uint32_t)(EDX));
  /* 1134e405 call 0x11343de0 */
  push32(0x1134e40au); f_11343de0();
  /* 1134e40a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e40d push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e40f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e412 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1134e418 push ecx */
  push32((uint32_t)(ECX));
  /* 1134e419 call 0x11343de0 */
  push32(0x1134e41eu); f_11343de0();
  /* 1134e41e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e421 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e423 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e426 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1134e42c push eax */
  push32((uint32_t)(EAX));
  /* 1134e42d call 0x11343de0 */
  push32(0x1134e432u); f_11343de0();
  /* 1134e432 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e435 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e437 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e43a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1134e440 push edx */
  push32((uint32_t)(EDX));
  /* 1134e441 call 0x11343de0 */
  push32(0x1134e446u); f_11343de0();
  /* 1134e446 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e449 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e44b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e44e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1134e454 push ecx */
  push32((uint32_t)(ECX));
  /* 1134e455 call 0x11343de0 */
  push32(0x1134e45au); f_11343de0();
  /* 1134e45a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e45d push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e45f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e462 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1134e468 push eax */
  push32((uint32_t)(EAX));
  /* 1134e469 call 0x11343de0 */
  push32(0x1134e46eu); f_11343de0();
  /* 1134e46e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e471 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e473 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e476 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1134e47c push edx */
  push32((uint32_t)(EDX));
  /* 1134e47d call 0x11343de0 */
  push32(0x1134e482u); f_11343de0();
  /* 1134e482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e485 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e487 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e48a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1134e490 push ecx */
  push32((uint32_t)(ECX));
  /* 1134e491 call 0x11343de0 */
  push32(0x1134e496u); f_11343de0();
  /* 1134e496 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134e499:;
  /* 1134e499 pop ebp */
  EBP = (pop32());
  /* 1134e49a ret  */
  ESPCHK(0x1134e190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4a0 @ 0x1134e4a0 (678 bytes, 180 insns) */
void f_1134e4a0(void) {
  FTRACE(0x1134e4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134e4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134e4a1 mov ebp, esp */
  EBP = (ESP);
  /* 1134e4a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134e4a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1134e4ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134e4af mov ax, word ptr [0x1136f6ca] */
  AX = (r16((uint32_t)(0x1136f6ca)));
  /* 1134e4b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134e4b8 cmp dword ptr [0x1136f670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134e4bf je 0x1134e61a */
  if (C.zf) goto L_1134e61a;
  /* 1134e4c5 push 0x1136f698 */
  push32((uint32_t)(0x1136f698u));
  /* 1134e4ca push 0xe */
  push32((uint32_t)(0xeu));
  /* 1134e4cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e4cf push ecx */
  push32((uint32_t)(ECX));
  /* 1134e4d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e4d2 call 0x11351510 */
  push32(0x1134e4d7u); f_11351510();
  /* 1134e4d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e4da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134e4dd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1134e4df mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1134e4e2 push 0x1136f69c */
  push32((uint32_t)(0x1136f69cu));
  /* 1134e4e7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1134e4e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e4ec push eax */
  push32((uint32_t)(EAX));
  /* 1134e4ed push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e4ef call 0x11351510 */
  push32(0x1134e4f4u); f_11351510();
  /* 1134e4f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e4f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134e4fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e4fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134e4ff push 0x1136f6a0 */
  push32((uint32_t)(0x1136f6a0u));
  /* 1134e504 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1134e506 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e509 push edx */
  push32((uint32_t)(EDX));
  /* 1134e50a push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e50c call 0x11351510 */
  push32(0x1134e511u); f_11351510();
  /* 1134e511 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e514 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134e517 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e519 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134e51c mov edx, dword ptr [0x1136f6a0] */
  EDX = (r32((uint32_t)(0x1136f6a0)));
  /* 1134e522 push edx */
  push32((uint32_t)(EDX));
  /* 1134e523 call 0x1134e750 */
  push32(0x1134e528u); f_1134e750();
  /* 1134e528 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e52b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134e52f je 0x1134e589 */
  if (C.zf) goto L_1134e589;
  /* 1134e531 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e533 mov eax, dword ptr [0x1136f698] */
  EAX = (r32((uint32_t)(0x1136f698)));
  /* 1134e538 push eax */
  push32((uint32_t)(EAX));
  /* 1134e539 call 0x11343de0 */
  push32(0x1134e53eu); f_11343de0();
  /* 1134e53e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e541 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e543 mov ecx, dword ptr [0x1136f69c] */
  ECX = (r32((uint32_t)(0x1136f69c)));
  /* 1134e549 push ecx */
  push32((uint32_t)(ECX));
  /* 1134e54a call 0x11343de0 */
  push32(0x1134e54fu); f_11343de0();
  /* 1134e54f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e552 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e554 mov edx, dword ptr [0x1136f6a0] */
  EDX = (r32((uint32_t)(0x1136f6a0)));
  /* 1134e55a push edx */
  push32((uint32_t)(EDX));
  /* 1134e55b call 0x11343de0 */
  push32(0x1134e560u); f_11343de0();
  /* 1134e560 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e563 mov dword ptr [0x1136f698], 0 */
  w32((uint32_t)(0x1136f698), (0x0u));
  /* 1134e56d mov dword ptr [0x1136f69c], 0 */
  w32((uint32_t)(0x1136f69c), (0x0u));
  /* 1134e577 mov dword ptr [0x1136f6a0], 0 */
  w32((uint32_t)(0x1136f6a0), (0x0u));
  /* 1134e581 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134e584 jmp 0x1134e742 */
  goto L_1134e742;
L_1134e589:;
  /* 1134e589 mov eax, dword ptr [0x1136ed88] */
  EAX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e58e cmp dword ptr [eax], 0x1136ed50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1136ed50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134e594 je 0x1134e5d0 */
  if (C.zf) goto L_1134e5d0;
  /* 1134e596 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e598 mov ecx, dword ptr [0x1136ed88] */
  ECX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e59e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1134e5a0 push edx */
  push32((uint32_t)(EDX));
  /* 1134e5a1 call 0x11343de0 */
  push32(0x1134e5a6u); f_11343de0();
  /* 1134e5a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e5a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e5ab mov eax, dword ptr [0x1136ed88] */
  EAX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e5b0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1134e5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134e5b4 call 0x11343de0 */
  push32(0x1134e5b9u); f_11343de0();
  /* 1134e5b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e5bc push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e5be mov edx, dword ptr [0x1136ed88] */
  EDX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e5c4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1134e5c7 push eax */
  push32((uint32_t)(EAX));
  /* 1134e5c8 call 0x11343de0 */
  push32(0x1134e5cdu); f_11343de0();
  /* 1134e5cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134e5d0:;
  /* 1134e5d0 mov ecx, dword ptr [0x1136ed88] */
  ECX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e5d6 mov edx, dword ptr [0x1136f698] */
  EDX = (r32((uint32_t)(0x1136f698)));
  /* 1134e5dc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1134e5de mov eax, dword ptr [0x1136ed88] */
  EAX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e5e3 mov ecx, dword ptr [0x1136f69c] */
  ECX = (r32((uint32_t)(0x1136f69c)));
  /* 1134e5e9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1134e5ec mov edx, dword ptr [0x1136ed88] */
  EDX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e5f2 mov eax, dword ptr [0x1136f6a0] */
  EAX = (r32((uint32_t)(0x1136f6a0)));
  /* 1134e5f7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1134e5fa mov ecx, dword ptr [0x1136ed88] */
  ECX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e600 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1134e602 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1134e604 mov byte ptr [0x1136dea8], al */
  w8((uint32_t)(0x1136dea8), (AL));
  /* 1134e609 mov dword ptr [0x1136deac], 1 */
  w32((uint32_t)(0x1136deac), (0x1u));
  /* 1134e613 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134e615 jmp 0x1134e742 */
  goto L_1134e742;
L_1134e61a:;
  /* 1134e61a push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e61c mov ecx, dword ptr [0x1136f698] */
  ECX = (r32((uint32_t)(0x1136f698)));
  /* 1134e622 push ecx */
  push32((uint32_t)(ECX));
  /* 1134e623 call 0x11343de0 */
  push32(0x1134e628u); f_11343de0();
  /* 1134e628 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e62b push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e62d mov edx, dword ptr [0x1136f69c] */
  EDX = (r32((uint32_t)(0x1136f69c)));
  /* 1134e633 push edx */
  push32((uint32_t)(EDX));
  /* 1134e634 call 0x11343de0 */
  push32(0x1134e639u); f_11343de0();
  /* 1134e639 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e63c push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e63e mov eax, dword ptr [0x1136f6a0] */
  EAX = (r32((uint32_t)(0x1136f6a0)));
  /* 1134e643 push eax */
  push32((uint32_t)(EAX));
  /* 1134e644 call 0x11343de0 */
  push32(0x1134e649u); f_11343de0();
  /* 1134e649 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e64c mov dword ptr [0x1136f698], 0 */
  w32((uint32_t)(0x1136f698), (0x0u));
  /* 1134e656 mov dword ptr [0x1136f69c], 0 */
  w32((uint32_t)(0x1136f69c), (0x0u));
  /* 1134e660 mov dword ptr [0x1136f6a0], 0 */
  w32((uint32_t)(0x1136f6a0), (0x0u));
  /* 1134e66a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1134e66f push 0x1136b074 */
  push32((uint32_t)(0x1136b074u));
  /* 1134e674 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e676 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e678 call 0x11343350 */
  push32(0x1134e67du); f_11343350();
  /* 1134e67d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e680 mov ecx, dword ptr [0x1136ed88] */
  ECX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e686 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1134e688 mov edx, dword ptr [0x1136ed88] */
  EDX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e68e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134e691 jne 0x1134e69b */
  if (!C.zf) goto L_1134e69b;
  /* 1134e693 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134e696 jmp 0x1134e742 */
  goto L_1134e742;
L_1134e69b:;
  /* 1134e69b push 0x1136b044 */
  push32((uint32_t)(0x1136b044u));
  /* 1134e6a0 mov eax, dword ptr [0x1136ed88] */
  EAX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e6a5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1134e6a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1134e6a8 call 0x11346300 */
  push32(0x1134e6adu); f_11346300();
  /* 1134e6ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e6b0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1134e6b5 push 0x1136b074 */
  push32((uint32_t)(0x1136b074u));
  /* 1134e6ba push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e6bc push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e6be call 0x11343350 */
  push32(0x1134e6c3u); f_11343350();
  /* 1134e6c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e6c6 mov edx, dword ptr [0x1136ed88] */
  EDX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e6cc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1134e6cf mov eax, dword ptr [0x1136ed88] */
  EAX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e6d4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134e6d8 jne 0x1134e6df */
  if (!C.zf) goto L_1134e6df;
  /* 1134e6da or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134e6dd jmp 0x1134e742 */
  goto L_1134e742;
L_1134e6df:;
  /* 1134e6df mov ecx, dword ptr [0x1136ed88] */
  ECX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e6e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1134e6e8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1134e6eb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1134e6f0 push 0x1136b074 */
  push32((uint32_t)(0x1136b074u));
  /* 1134e6f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e6f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e6f9 call 0x11343350 */
  push32(0x1134e6feu); f_11343350();
  /* 1134e6fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e701 mov ecx, dword ptr [0x1136ed88] */
  ECX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e707 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1134e70a mov edx, dword ptr [0x1136ed88] */
  EDX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e710 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134e714 jne 0x1134e71b */
  if (!C.zf) goto L_1134e71b;
  /* 1134e716 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134e719 jmp 0x1134e742 */
  goto L_1134e742;
L_1134e71b:;
  /* 1134e71b mov eax, dword ptr [0x1136ed88] */
  EAX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e720 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1134e723 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1134e726 mov edx, dword ptr [0x1136ed88] */
  EDX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e72c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1134e72e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1134e730 mov byte ptr [0x1136dea8], cl */
  w8((uint32_t)(0x1136dea8), (CL));
  /* 1134e736 mov dword ptr [0x1136deac], 1 */
  w32((uint32_t)(0x1136deac), (0x1u));
  /* 1134e740 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1134e742:;
  /* 1134e742 mov esp, ebp */
  ESP = (EBP);
  /* 1134e744 pop ebp */
  EBP = (pop32());
  /* 1134e745 ret  */
  ESPCHK(0x1134e4a0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1134e750 (125 bytes, 49 insns) */
void f_1134e750(void) {
  FTRACE(0x1134e750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134e750 push ebp */
  push32((uint32_t)(EBP));
  /* 1134e751 mov ebp, esp */
  EBP = (ESP);
  /* 1134e753 push ecx */
  push32((uint32_t)(ECX));
L_1134e754:;
  /* 1134e754 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e757 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134e75a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134e75c je 0x1134e7c9 */
  if (C.zf) goto L_1134e7c9;
  /* 1134e75e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e761 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1134e764 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134e767 jl 0x1134e78d */
  if ((C.sf!=C.of)) goto L_1134e78d;
  /* 1134e769 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e76c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1134e76f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134e772 jg 0x1134e78d */
  if ((!C.zf&&C.sf==C.of)) goto L_1134e78d;
  /* 1134e774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e777 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134e77a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134e77d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e780 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1134e782 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e785 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e788 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1134e78b jmp 0x1134e7c7 */
  goto L_1134e7c7;
L_1134e78d:;
  /* 1134e78d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e790 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1134e793 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134e796 jne 0x1134e7be */
  if (!C.zf) goto L_1134e7be;
  /* 1134e798 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e79b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1134e79e:;
  /* 1134e79e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e7a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e7a4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1134e7a7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1134e7a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e7ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e7af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1134e7b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e7b5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1134e7b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134e7ba jne 0x1134e79e */
  if (!C.zf) goto L_1134e79e;
  /* 1134e7bc jmp 0x1134e7c7 */
  goto L_1134e7c7;
L_1134e7be:;
  /* 1134e7be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e7c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e7c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1134e7c7:;
  /* 1134e7c7 jmp 0x1134e754 */
  goto L_1134e754;
L_1134e7c9:;
  /* 1134e7c9 mov esp, ebp */
  ESP = (EBP);
  /* 1134e7cb pop ebp */
  EBP = (pop32());
  /* 1134e7cc ret  */
  ESPCHK(0x1134e750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7d0 @ 0x1134e7d0 (304 bytes, 85 insns) */
void f_1134e7d0(void) {
  FTRACE(0x1134e7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134e7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134e7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1134e7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134e7d4 cmp dword ptr [0x1136f66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134e7db je 0x1134e89c */
  if (C.zf) goto L_1134e89c;
  /* 1134e7e1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1134e7e3 push 0x1136b080 */
  push32((uint32_t)(0x1136b080u));
  /* 1134e7e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e7ea push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1134e7ec push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e7ee call 0x11343760 */
  push32(0x1134e7f3u); f_11343760();
  /* 1134e7f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e7f6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134e7f9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134e7fd jne 0x1134e809 */
  if (!C.zf) goto L_1134e809;
  /* 1134e7ff mov eax, 1 */
  EAX = (0x1u);
  /* 1134e804 jmp 0x1134e8fc */
  goto L_1134e8fc;
L_1134e809:;
  /* 1134e809 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e80c push eax */
  push32((uint32_t)(EAX));
  /* 1134e80d call 0x1134e900 */
  push32(0x1134e812u); f_1134e900();
  /* 1134e812 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e815 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134e817 je 0x1134e83d */
  if (C.zf) goto L_1134e83d;
  /* 1134e819 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e81c push ecx */
  push32((uint32_t)(ECX));
  /* 1134e81d call 0x1134eb90 */
  push32(0x1134e822u); f_1134eb90();
  /* 1134e822 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e825 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e827 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e82a push edx */
  push32((uint32_t)(EDX));
  /* 1134e82b call 0x11343de0 */
  push32(0x1134e830u); f_11343de0();
  /* 1134e830 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e833 mov eax, 1 */
  EAX = (0x1u);
  /* 1134e838 jmp 0x1134e8fc */
  goto L_1134e8fc;
L_1134e83d:;
  /* 1134e83d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e840 mov ecx, dword ptr [0x1136ed88] */
  ECX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e846 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1134e848 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1134e84a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e84d mov ecx, dword ptr [0x1136ed88] */
  ECX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e853 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1134e856 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1134e859 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e85c mov ecx, dword ptr [0x1136ed88] */
  ECX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e862 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1134e865 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1134e868 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e86b mov dword ptr [0x1136ed88], eax */
  w32((uint32_t)(0x1136ed88), (EAX));
  /* 1134e870 mov ecx, dword ptr [0x1136f6a4] */
  ECX = (r32((uint32_t)(0x1136f6a4)));
  /* 1134e876 push ecx */
  push32((uint32_t)(ECX));
  /* 1134e877 call 0x1134eb90 */
  push32(0x1134e87cu); f_1134eb90();
  /* 1134e87c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e87f push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e881 mov edx, dword ptr [0x1136f6a4] */
  EDX = (r32((uint32_t)(0x1136f6a4)));
  /* 1134e887 push edx */
  push32((uint32_t)(EDX));
  /* 1134e888 call 0x11343de0 */
  push32(0x1134e88du); f_11343de0();
  /* 1134e88d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e890 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e893 mov dword ptr [0x1136f6a4], eax */
  w32((uint32_t)(0x1136f6a4), (EAX));
  /* 1134e898 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134e89a jmp 0x1134e8fc */
  goto L_1134e8fc;
L_1134e89c:;
  /* 1134e89c mov ecx, dword ptr [0x1136ed88] */
  ECX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e8a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1134e8a4 mov dword ptr [0x1136ed58], edx */
  w32((uint32_t)(0x1136ed58), (EDX));
  /* 1134e8aa mov eax, dword ptr [0x1136ed88] */
  EAX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e8af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1134e8b2 mov dword ptr [0x1136ed5c], ecx */
  w32((uint32_t)(0x1136ed5c), (ECX));
  /* 1134e8b8 mov edx, dword ptr [0x1136ed88] */
  EDX = (r32((uint32_t)(0x1136ed88)));
  /* 1134e8be mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1134e8c1 mov dword ptr [0x1136ed60], eax */
  w32((uint32_t)(0x1136ed60), (EAX));
  /* 1134e8c6 mov dword ptr [0x1136ed88], 0x1136ed58 */
  w32((uint32_t)(0x1136ed88), (0x1136ed58u));
  /* 1134e8d0 mov ecx, dword ptr [0x1136f6a4] */
  ECX = (r32((uint32_t)(0x1136f6a4)));
  /* 1134e8d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1134e8d7 call 0x1134eb90 */
  push32(0x1134e8dcu); f_1134eb90();
  /* 1134e8dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e8df push 2 */
  push32((uint32_t)(0x2u));
  /* 1134e8e1 mov edx, dword ptr [0x1136f6a4] */
  EDX = (r32((uint32_t)(0x1136f6a4)));
  /* 1134e8e7 push edx */
  push32((uint32_t)(EDX));
  /* 1134e8e8 call 0x11343de0 */
  push32(0x1134e8edu); f_11343de0();
  /* 1134e8ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e8f0 mov dword ptr [0x1136f6a4], 0 */
  w32((uint32_t)(0x1136f6a4), (0x0u));
  /* 1134e8fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1134e8fc:;
  /* 1134e8fc mov esp, ebp */
  ESP = (EBP);
  /* 1134e8fe pop ebp */
  EBP = (pop32());
  /* 1134e8ff ret  */
  ESPCHK(0x1134e7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e900 @ 0x1134e900 (525 bytes, 200 insns) */
void f_1134e900(void) {
  FTRACE(0x1134e900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134e900 push ebp */
  push32((uint32_t)(EBP));
  /* 1134e901 mov ebp, esp */
  EBP = (ESP);
  /* 1134e903 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134e906 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1134e90d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134e90f mov ax, word ptr [0x1136f6c4] */
  AX = (r16((uint32_t)(0x1136f6c4)));
  /* 1134e915 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134e918 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134e91c jne 0x1134e926 */
  if (!C.zf) goto L_1134e926;
  /* 1134e91e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134e921 jmp 0x1134eb09 */
  goto L_1134eb09;
L_1134e926:;
  /* 1134e926 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e929 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e92c push ecx */
  push32((uint32_t)(ECX));
  /* 1134e92d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1134e92f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e932 push edx */
  push32((uint32_t)(EDX));
  /* 1134e933 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e935 call 0x11351510 */
  push32(0x1134e93au); f_11351510();
  /* 1134e93a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e93d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134e940 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e942 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134e945 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e948 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e94b push edx */
  push32((uint32_t)(EDX));
  /* 1134e94c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1134e94e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e951 push eax */
  push32((uint32_t)(EAX));
  /* 1134e952 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e954 call 0x11351510 */
  push32(0x1134e959u); f_11351510();
  /* 1134e959 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e95c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134e95f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e961 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134e964 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e967 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e96a push edx */
  push32((uint32_t)(EDX));
  /* 1134e96b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1134e96d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e970 push eax */
  push32((uint32_t)(EAX));
  /* 1134e971 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e973 call 0x11351510 */
  push32(0x1134e978u); f_11351510();
  /* 1134e978 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e97b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134e97e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e980 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134e983 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e986 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e989 push edx */
  push32((uint32_t)(EDX));
  /* 1134e98a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1134e98c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e98f push eax */
  push32((uint32_t)(EAX));
  /* 1134e990 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e992 call 0x11351510 */
  push32(0x1134e997u); f_11351510();
  /* 1134e997 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e99a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134e99d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e99f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134e9a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e9a5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e9a8 push edx */
  push32((uint32_t)(EDX));
  /* 1134e9a9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1134e9ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e9ae push eax */
  push32((uint32_t)(EAX));
  /* 1134e9af push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e9b1 call 0x11351510 */
  push32(0x1134e9b6u); f_11351510();
  /* 1134e9b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e9b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134e9bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e9be mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134e9c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e9c4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1134e9c7 push eax */
  push32((uint32_t)(EAX));
  /* 1134e9c8 call 0x1134eb10 */
  push32(0x1134e9cdu); f_1134eb10();
  /* 1134e9cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e9d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e9d3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e9d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1134e9d7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1134e9d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e9dc push edx */
  push32((uint32_t)(EDX));
  /* 1134e9dd push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e9df call 0x11351510 */
  push32(0x1134e9e4u); f_11351510();
  /* 1134e9e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e9e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134e9ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134e9ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134e9ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134e9f2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134e9f5 push edx */
  push32((uint32_t)(EDX));
  /* 1134e9f6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1134e9f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134e9fb push eax */
  push32((uint32_t)(EAX));
  /* 1134e9fc push 1 */
  push32((uint32_t)(0x1u));
  /* 1134e9fe call 0x11351510 */
  push32(0x1134ea03u); f_11351510();
  /* 1134ea03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ea06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134ea09 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134ea0b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134ea0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ea11 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ea14 push edx */
  push32((uint32_t)(EDX));
  /* 1134ea15 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1134ea17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ea1a push eax */
  push32((uint32_t)(EAX));
  /* 1134ea1b push 0 */
  push32((uint32_t)(0x0u));
  /* 1134ea1d call 0x11351510 */
  push32(0x1134ea22u); f_11351510();
  /* 1134ea22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ea25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134ea28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134ea2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134ea2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ea30 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ea33 push edx */
  push32((uint32_t)(EDX));
  /* 1134ea34 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1134ea36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ea39 push eax */
  push32((uint32_t)(EAX));
  /* 1134ea3a push 0 */
  push32((uint32_t)(0x0u));
  /* 1134ea3c call 0x11351510 */
  push32(0x1134ea41u); f_11351510();
  /* 1134ea41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ea44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134ea47 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134ea49 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134ea4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ea4f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ea52 push edx */
  push32((uint32_t)(EDX));
  /* 1134ea53 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1134ea55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ea58 push eax */
  push32((uint32_t)(EAX));
  /* 1134ea59 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134ea5b call 0x11351510 */
  push32(0x1134ea60u); f_11351510();
  /* 1134ea60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ea63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134ea66 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134ea68 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134ea6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ea6e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ea71 push edx */
  push32((uint32_t)(EDX));
  /* 1134ea72 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1134ea74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ea77 push eax */
  push32((uint32_t)(EAX));
  /* 1134ea78 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134ea7a call 0x11351510 */
  push32(0x1134ea7fu); f_11351510();
  /* 1134ea7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ea82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134ea85 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134ea87 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134ea8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ea8d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ea90 push edx */
  push32((uint32_t)(EDX));
  /* 1134ea91 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1134ea93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ea96 push eax */
  push32((uint32_t)(EAX));
  /* 1134ea97 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134ea99 call 0x11351510 */
  push32(0x1134ea9eu); f_11351510();
  /* 1134ea9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134eaa1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134eaa4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134eaa6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134eaa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134eaac add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134eaaf push edx */
  push32((uint32_t)(EDX));
  /* 1134eab0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1134eab2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134eab5 push eax */
  push32((uint32_t)(EAX));
  /* 1134eab6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134eab8 call 0x11351510 */
  push32(0x1134eabdu); f_11351510();
  /* 1134eabd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134eac0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134eac3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134eac5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134eac8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134eacb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134eace push edx */
  push32((uint32_t)(EDX));
  /* 1134eacf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1134ead1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ead4 push eax */
  push32((uint32_t)(EAX));
  /* 1134ead5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134ead7 call 0x11351510 */
  push32(0x1134eadcu); f_11351510();
  /* 1134eadc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134eadf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134eae2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134eae4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134eae7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134eaea add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134eaed push edx */
  push32((uint32_t)(EDX));
  /* 1134eaee push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1134eaf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134eaf3 push eax */
  push32((uint32_t)(EAX));
  /* 1134eaf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134eaf6 call 0x11351510 */
  push32(0x1134eafbu); f_11351510();
  /* 1134eafb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134eafe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134eb01 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1134eb03 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134eb06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1134eb09:;
  /* 1134eb09 mov esp, ebp */
  ESP = (EBP);
  /* 1134eb0b pop ebp */
  EBP = (pop32());
  /* 1134eb0c ret  */
  ESPCHK(0x1134e900u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1134eb10 (125 bytes, 49 insns) */
void f_1134eb10(void) {
  FTRACE(0x1134eb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134eb10 push ebp */
  push32((uint32_t)(EBP));
  /* 1134eb11 mov ebp, esp */
  EBP = (ESP);
  /* 1134eb13 push ecx */
  push32((uint32_t)(ECX));
L_1134eb14:;
  /* 1134eb14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134eb17 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134eb1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134eb1c je 0x1134eb89 */
  if (C.zf) goto L_1134eb89;
  /* 1134eb1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134eb21 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1134eb24 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134eb27 jl 0x1134eb4d */
  if ((C.sf!=C.of)) goto L_1134eb4d;
  /* 1134eb29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134eb2c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1134eb2f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134eb32 jg 0x1134eb4d */
  if ((!C.zf&&C.sf==C.of)) goto L_1134eb4d;
  /* 1134eb34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134eb37 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134eb3a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134eb3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134eb40 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1134eb42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134eb45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134eb48 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1134eb4b jmp 0x1134eb87 */
  goto L_1134eb87;
L_1134eb4d:;
  /* 1134eb4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134eb50 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1134eb53 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134eb56 jne 0x1134eb7e */
  if (!C.zf) goto L_1134eb7e;
  /* 1134eb58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134eb5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1134eb5e:;
  /* 1134eb5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134eb61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134eb64 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1134eb67 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1134eb69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134eb6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134eb6f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1134eb72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134eb75 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1134eb78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134eb7a jne 0x1134eb5e */
  if (!C.zf) goto L_1134eb5e;
  /* 1134eb7c jmp 0x1134eb87 */
  goto L_1134eb87;
L_1134eb7e:;
  /* 1134eb7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134eb81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134eb84 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1134eb87:;
  /* 1134eb87 jmp 0x1134eb14 */
  goto L_1134eb14;
L_1134eb89:;
  /* 1134eb89 mov esp, ebp */
  ESP = (EBP);
  /* 1134eb8b pop ebp */
  EBP = (pop32());
  /* 1134eb8c ret  */
  ESPCHK(0x1134eb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb90 @ 0x1134eb90 (147 bytes, 52 insns) */
void f_1134eb90(void) {
  FTRACE(0x1134eb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134eb90 push ebp */
  push32((uint32_t)(EBP));
  /* 1134eb91 mov ebp, esp */
  EBP = (ESP);
  /* 1134eb93 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134eb97 jne 0x1134eb9e */
  if (!C.zf) goto L_1134eb9e;
  /* 1134eb99 jmp 0x1134ec21 */
  goto L_1134ec21;
L_1134eb9e:;
  /* 1134eb9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134eba1 cmp dword ptr [eax + 0xc], 0x1136f700 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1136f700u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134eba8 je 0x1134ec21 */
  if (C.zf) goto L_1134ec21;
  /* 1134ebaa push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ebac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ebaf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1134ebb2 push edx */
  push32((uint32_t)(EDX));
  /* 1134ebb3 call 0x11343de0 */
  push32(0x1134ebb8u); f_11343de0();
  /* 1134ebb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ebbb push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ebbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ebc0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1134ebc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134ebc4 call 0x11343de0 */
  push32(0x1134ebc9u); f_11343de0();
  /* 1134ebc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ebcc push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ebce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ebd1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1134ebd4 push eax */
  push32((uint32_t)(EAX));
  /* 1134ebd5 call 0x11343de0 */
  push32(0x1134ebdau); f_11343de0();
  /* 1134ebda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ebdd push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ebdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ebe2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1134ebe5 push edx */
  push32((uint32_t)(EDX));
  /* 1134ebe6 call 0x11343de0 */
  push32(0x1134ebebu); f_11343de0();
  /* 1134ebeb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ebee push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ebf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ebf3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1134ebf6 push ecx */
  push32((uint32_t)(ECX));
  /* 1134ebf7 call 0x11343de0 */
  push32(0x1134ebfcu); f_11343de0();
  /* 1134ebfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ebff push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ec01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ec04 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1134ec07 push eax */
  push32((uint32_t)(EAX));
  /* 1134ec08 call 0x11343de0 */
  push32(0x1134ec0du); f_11343de0();
  /* 1134ec0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ec10 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ec12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ec15 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1134ec18 push edx */
  push32((uint32_t)(EDX));
  /* 1134ec19 call 0x11343de0 */
  push32(0x1134ec1eu); f_11343de0();
  /* 1134ec1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134ec21:;
  /* 1134ec21 pop ebp */
  EBP = (pop32());
  /* 1134ec22 ret  */
  ESPCHK(0x1134eb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec30 @ 0x1134ec30 (928 bytes, 284 insns) */
void f_1134ec30(void) {
  FTRACE(0x1134ec30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134ec30 push ebp */
  push32((uint32_t)(EBP));
  /* 1134ec31 mov ebp, esp */
  EBP = (ESP);
  /* 1134ec33 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134ec36 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1134ec3d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1134ec44 cmp dword ptr [0x1136f668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ec4b je 0x1134ef81 */
  if (C.zf) goto L_1134ef81;
  /* 1134ec51 cmp dword ptr [0x1136f678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ec58 jne 0x1134ec80 */
  if (!C.zf) goto L_1134ec80;
  /* 1134ec5a push 0x1136f678 */
  push32((uint32_t)(0x1136f678u));
  /* 1134ec5f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1134ec64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134ec66 mov ax, word ptr [0x1136f6bc] */
  AX = (r16((uint32_t)(0x1136f6bc)));
  /* 1134ec6c push eax */
  push32((uint32_t)(EAX));
  /* 1134ec6d push 0 */
  push32((uint32_t)(0x0u));
  /* 1134ec6f call 0x11351510 */
  push32(0x1134ec74u); f_11351510();
  /* 1134ec74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ec77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134ec79 je 0x1134ec80 */
  if (C.zf) goto L_1134ec80;
  /* 1134ec7b jmp 0x1134ef42 */
  goto L_1134ef42;
L_1134ec80:;
  /* 1134ec80 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1134ec82 push 0x1136b08c */
  push32((uint32_t)(0x1136b08cu));
  /* 1134ec87 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ec89 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1134ec8e call 0x11343350 */
  push32(0x1134ec93u); f_11343350();
  /* 1134ec93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ec96 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1134ec99 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1134ec9b push 0x1136b08c */
  push32((uint32_t)(0x1136b08cu));
  /* 1134eca0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134eca2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1134eca7 call 0x11343350 */
  push32(0x1134ecacu); f_11343350();
  /* 1134ecac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ecaf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1134ecb2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1134ecb4 push 0x1136b08c */
  push32((uint32_t)(0x1136b08cu));
  /* 1134ecb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ecbb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1134ecc0 call 0x11343350 */
  push32(0x1134ecc5u); f_11343350();
  /* 1134ecc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ecc8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1134eccb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1134eccd push 0x1136b08c */
  push32((uint32_t)(0x1136b08cu));
  /* 1134ecd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ecd4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1134ecd9 call 0x11343350 */
  push32(0x1134ecdeu); f_11343350();
  /* 1134ecde add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ece1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1134ece4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ece8 je 0x1134ecfc */
  if (C.zf) goto L_1134ecfc;
  /* 1134ecea cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ecee je 0x1134ecfc */
  if (C.zf) goto L_1134ecfc;
  /* 1134ecf0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ecf4 je 0x1134ecfc */
  if (C.zf) goto L_1134ecfc;
  /* 1134ecf6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ecfa jne 0x1134ed01 */
  if (!C.zf) goto L_1134ed01;
L_1134ecfc:;
  /* 1134ecfc jmp 0x1134ef42 */
  goto L_1134ef42;
L_1134ed01:;
  /* 1134ed01 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1134ed04 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1134ed07 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1134ed0e jmp 0x1134ed19 */
  goto L_1134ed19;
L_1134ed10:;
  /* 1134ed10 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134ed13 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ed16 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1134ed19:;
  /* 1134ed19 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ed20 jge 0x1134ed35 */
  if ((C.sf==C.of)) goto L_1134ed35;
  /* 1134ed22 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134ed25 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1134ed28 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1134ed2a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134ed2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ed30 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1134ed33 jmp 0x1134ed10 */
  goto L_1134ed10;
L_1134ed35:;
  /* 1134ed35 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1134ed38 push eax */
  push32((uint32_t)(EAX));
  /* 1134ed39 mov ecx, dword ptr [0x1136f678] */
  ECX = (r32((uint32_t)(0x1136f678)));
  /* 1134ed3f push ecx */
  push32((uint32_t)(ECX));
  /* 1134ed40 call dword ptr [0x113712f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712f4))), 0x1134ed46u);
  /* 1134ed46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134ed48 jne 0x1134ed4f */
  if (!C.zf) goto L_1134ed4f;
  /* 1134ed4a jmp 0x1134ef42 */
  goto L_1134ef42;
L_1134ed4f:;
  /* 1134ed4f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ed53 jbe 0x1134ed5a */
  if ((C.cf||C.zf)) goto L_1134ed5a;
  /* 1134ed55 jmp 0x1134ef42 */
  goto L_1134ef42;
L_1134ed5a:;
  /* 1134ed5a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1134ed5d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1134ed63 mov dword ptr [0x1136dea4], edx */
  w32((uint32_t)(0x1136dea4), (EDX));
  /* 1134ed69 cmp dword ptr [0x1136dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ed70 jle 0x1134edc9 */
  if ((C.zf||C.sf!=C.of)) goto L_1134edc9;
  /* 1134ed72 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1134ed75 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1134ed78 jmp 0x1134ed83 */
  goto L_1134ed83;
L_1134ed7a:;
  /* 1134ed7a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134ed7d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ed80 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1134ed83:;
  /* 1134ed83 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134ed86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134ed88 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1134ed8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134ed8c je 0x1134edc9 */
  if (C.zf) goto L_1134edc9;
  /* 1134ed8e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134ed91 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1134ed93 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1134ed96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134ed98 je 0x1134edc9 */
  if (C.zf) goto L_1134edc9;
  /* 1134ed9a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134ed9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134ed9f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1134eda1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1134eda4 jmp 0x1134edaf */
  goto L_1134edaf;
L_1134eda6:;
  /* 1134eda6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134eda9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134edac mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1134edaf:;
  /* 1134edaf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134edb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134edb4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1134edb7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134edba jg 0x1134edc7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1134edc7;
  /* 1134edbc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1134edbf add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134edc2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1134edc5 jmp 0x1134eda6 */
  goto L_1134eda6;
L_1134edc7:;
  /* 1134edc7 jmp 0x1134ed7a */
  goto L_1134ed7a;
L_1134edc9:;
  /* 1134edc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134edcb push 0 */
  push32((uint32_t)(0x0u));
  /* 1134edcd push 0 */
  push32((uint32_t)(0x0u));
  /* 1134edcf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1134edd2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134edd5 push eax */
  push32((uint32_t)(EAX));
  /* 1134edd6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1134eddb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1134edde push ecx */
  push32((uint32_t)(ECX));
  /* 1134eddf push 1 */
  push32((uint32_t)(0x1u));
  /* 1134ede1 call 0x1134b580 */
  push32(0x1134ede6u); f_1134b580();
  /* 1134ede6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ede9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134edeb jne 0x1134edf2 */
  if (!C.zf) goto L_1134edf2;
  /* 1134eded jmp 0x1134ef42 */
  goto L_1134ef42;
L_1134edf2:;
  /* 1134edf2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1134edf5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1134edfa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1134edfd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1134ee00 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1134ee07 jmp 0x1134ee12 */
  goto L_1134ee12;
L_1134ee09:;
  /* 1134ee09 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134ee0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ee0f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1134ee12:;
  /* 1134ee12 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ee19 jge 0x1134ee30 */
  if ((C.sf==C.of)) goto L_1134ee30;
  /* 1134ee1b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1134ee1e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1134ee22 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1134ee25 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1134ee28 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ee2b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1134ee2e jmp 0x1134ee09 */
  goto L_1134ee09;
L_1134ee30:;
  /* 1134ee30 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134ee32 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134ee34 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1134ee37 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ee3a push edx */
  push32((uint32_t)(EDX));
  /* 1134ee3b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1134ee40 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1134ee43 push eax */
  push32((uint32_t)(EAX));
  /* 1134ee44 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134ee46 call 0x113517b0 */
  push32(0x1134ee4bu); f_113517b0();
  /* 1134ee4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ee4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134ee50 jne 0x1134ee57 */
  if (!C.zf) goto L_1134ee57;
  /* 1134ee52 jmp 0x1134ef42 */
  goto L_1134ef42;
L_1134ee57:;
  /* 1134ee57 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1134ee5a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1134ee5f cmp dword ptr [0x1136dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ee66 jle 0x1134eec3 */
  if ((C.zf||C.sf!=C.of)) goto L_1134eec3;
  /* 1134ee68 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1134ee6b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1134ee6e jmp 0x1134ee79 */
  goto L_1134ee79;
L_1134ee70:;
  /* 1134ee70 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134ee73 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ee76 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1134ee79:;
  /* 1134ee79 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134ee7c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1134ee7e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1134ee80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134ee82 je 0x1134eec3 */
  if (C.zf) goto L_1134eec3;
  /* 1134ee84 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134ee87 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134ee89 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1134ee8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134ee8e je 0x1134eec3 */
  if (C.zf) goto L_1134eec3;
  /* 1134ee90 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134ee93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134ee95 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1134ee97 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1134ee9a jmp 0x1134eea5 */
  goto L_1134eea5;
L_1134ee9c:;
  /* 1134ee9c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134ee9f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134eea2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1134eea5:;
  /* 1134eea5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134eea8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134eeaa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1134eead cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134eeb0 jg 0x1134eec1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1134eec1;
  /* 1134eeb2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1134eeb5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1134eeb8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1134eebf jmp 0x1134ee9c */
  goto L_1134ee9c;
L_1134eec1:;
  /* 1134eec1 jmp 0x1134ee70 */
  goto L_1134ee70;
L_1134eec3:;
  /* 1134eec3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1134eec6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134eec9 mov dword ptr [0x1136dc98], eax */
  w32((uint32_t)(0x1136dc98), (EAX));
  /* 1134eece mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1134eed1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134eed4 mov dword ptr [0x1136dc9c], ecx */
  w32((uint32_t)(0x1136dc9c), (ECX));
  /* 1134eeda cmp dword ptr [0x1136f6a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134eee1 je 0x1134eef4 */
  if (C.zf) goto L_1134eef4;
  /* 1134eee3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134eee5 mov edx, dword ptr [0x1136f6a8] */
  EDX = (r32((uint32_t)(0x1136f6a8)));
  /* 1134eeeb push edx */
  push32((uint32_t)(EDX));
  /* 1134eeec call 0x11343de0 */
  push32(0x1134eef1u); f_11343de0();
  /* 1134eef1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134eef4:;
  /* 1134eef4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1134eef7 mov dword ptr [0x1136f6a8], eax */
  w32((uint32_t)(0x1136f6a8), (EAX));
  /* 1134eefc cmp dword ptr [0x1136f6ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ef03 je 0x1134ef16 */
  if (C.zf) goto L_1134ef16;
  /* 1134ef05 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ef07 mov ecx, dword ptr [0x1136f6ac] */
  ECX = (r32((uint32_t)(0x1136f6ac)));
  /* 1134ef0d push ecx */
  push32((uint32_t)(ECX));
  /* 1134ef0e call 0x11343de0 */
  push32(0x1134ef13u); f_11343de0();
  /* 1134ef13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134ef16:;
  /* 1134ef16 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1134ef19 mov dword ptr [0x1136f6ac], edx */
  w32((uint32_t)(0x1136f6ac), (EDX));
  /* 1134ef1f push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ef21 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1134ef24 push eax */
  push32((uint32_t)(EAX));
  /* 1134ef25 call 0x11343de0 */
  push32(0x1134ef2au); f_11343de0();
  /* 1134ef2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ef2d push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ef2f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1134ef32 push ecx */
  push32((uint32_t)(ECX));
  /* 1134ef33 call 0x11343de0 */
  push32(0x1134ef38u); f_11343de0();
  /* 1134ef38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ef3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134ef3d jmp 0x1134efcc */
  goto L_1134efcc;
L_1134ef42:;
  /* 1134ef42 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ef44 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1134ef47 push edx */
  push32((uint32_t)(EDX));
  /* 1134ef48 call 0x11343de0 */
  push32(0x1134ef4du); f_11343de0();
  /* 1134ef4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ef50 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ef52 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1134ef55 push eax */
  push32((uint32_t)(EAX));
  /* 1134ef56 call 0x11343de0 */
  push32(0x1134ef5bu); f_11343de0();
  /* 1134ef5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ef5e push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ef60 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1134ef63 push ecx */
  push32((uint32_t)(ECX));
  /* 1134ef64 call 0x11343de0 */
  push32(0x1134ef69u); f_11343de0();
  /* 1134ef69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ef6c push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ef6e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1134ef71 push edx */
  push32((uint32_t)(EDX));
  /* 1134ef72 call 0x11343de0 */
  push32(0x1134ef77u); f_11343de0();
  /* 1134ef77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ef7a mov eax, 1 */
  EAX = (0x1u);
  /* 1134ef7f jmp 0x1134efcc */
  goto L_1134efcc;
L_1134ef81:;
  /* 1134ef81 mov dword ptr [0x1136dc98], 0x1136dca2 */
  w32((uint32_t)(0x1136dc98), (0x1136dca2u));
  /* 1134ef8b mov dword ptr [0x1136dc9c], 0x1136dca2 */
  w32((uint32_t)(0x1136dc9c), (0x1136dca2u));
  /* 1134ef95 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ef97 mov eax, dword ptr [0x1136f6a8] */
  EAX = (r32((uint32_t)(0x1136f6a8)));
  /* 1134ef9c push eax */
  push32((uint32_t)(EAX));
  /* 1134ef9d call 0x11343de0 */
  push32(0x1134efa2u); f_11343de0();
  /* 1134efa2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134efa5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134efa7 mov ecx, dword ptr [0x1136f6ac] */
  ECX = (r32((uint32_t)(0x1136f6ac)));
  /* 1134efad push ecx */
  push32((uint32_t)(ECX));
  /* 1134efae call 0x11343de0 */
  push32(0x1134efb3u); f_11343de0();
  /* 1134efb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134efb6 mov dword ptr [0x1136f6a8], 0 */
  w32((uint32_t)(0x1136f6a8), (0x0u));
  /* 1134efc0 mov dword ptr [0x1136f6ac], 0 */
  w32((uint32_t)(0x1136f6ac), (0x0u));
  /* 1134efca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1134efcc:;
  /* 1134efcc mov esp, ebp */
  ESP = (EBP);
  /* 1134efce pop ebp */
  EBP = (pop32());
  /* 1134efcf ret  */
  ESPCHK(0x1134ec30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efd0 @ 0x1134efd0 (7 bytes, 5 insns) */
void f_1134efd0(void) {
  FTRACE(0x1134efd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134efd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134efd1 mov ebp, esp */
  EBP = (ESP);
  /* 1134efd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134efd5 pop ebp */
  EBP = (pop32());
  /* 1134efd6 ret  */
  ESPCHK(0x1134efd0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1134efe0 (129 bytes, 56 insns) */
void f_1134efe0(void) {
  FTRACE(0x1134efe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134efe0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1134efe4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1134efe8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1134efee jne 0x1134f02c */
  if (!C.zf) goto L_1134f02c;
L_1134eff0:;
  /* 1134eff0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1134eff2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1134eff4 jne 0x1134f024 */
  if (!C.zf) goto L_1134f024;
  /* 1134eff6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1134eff8 je 0x1134f020 */
  if (C.zf) goto L_1134f020;
  /* 1134effa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1134effd jne 0x1134f024 */
  if (!C.zf) goto L_1134f024;
  /* 1134efff or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1134f001 je 0x1134f020 */
  if (C.zf) goto L_1134f020;
  /* 1134f003 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1134f006 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1134f009 jne 0x1134f024 */
  if (!C.zf) goto L_1134f024;
  /* 1134f00b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1134f00d je 0x1134f020 */
  if (C.zf) goto L_1134f020;
  /* 1134f00f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1134f012 jne 0x1134f024 */
  if (!C.zf) goto L_1134f024;
  /* 1134f014 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f017 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f01a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1134f01c jne 0x1134eff0 */
  if (!C.zf) goto L_1134eff0;
  /* 1134f01e mov edi, edi */
  EDI = (EDI);
L_1134f020:;
  /* 1134f020 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134f022 ret  */
  ESPCHK(0x1134efe0u, _esp0);
  ESP += 4; return;
  /* 1134f023 nop  */
  /* nop */
L_1134f024:;
  /* 1134f024 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134f026 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1134f028 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1134f029 ret  */
  ESPCHK(0x1134efe0u, _esp0);
  ESP += 4; return;
  /* 1134f02a mov edi, edi */
  EDI = (EDI);
L_1134f02c:;
  /* 1134f02c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1134f032 je 0x1134f048 */
  if (C.zf) goto L_1134f048;
  /* 1134f034 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1134f036 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1134f037 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1134f039 jne 0x1134f024 */
  if (!C.zf) goto L_1134f024;
  /* 1134f03b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1134f03c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1134f03e je 0x1134f020 */
  if (C.zf) goto L_1134f020;
  /* 1134f040 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1134f046 je 0x1134eff0 */
  if (C.zf) goto L_1134eff0;
L_1134f048:;
  /* 1134f048 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1134f04b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f04e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1134f050 jne 0x1134f024 */
  if (!C.zf) goto L_1134f024;
  /* 1134f052 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1134f054 je 0x1134f020 */
  if (C.zf) goto L_1134f020;
  /* 1134f056 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1134f059 jne 0x1134f024 */
  if (!C.zf) goto L_1134f024;
  /* 1134f05b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1134f05d je 0x1134f020 */
  if (C.zf) goto L_1134f020;
  /* 1134f05f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f062 jmp 0x1134eff0 */
  goto L_1134eff0;
}

/* FUN_1000f070 @ 0x1134f070 (62 bytes, 35 insns) */
void f_1134f070(void) {
  FTRACE(0x1134f070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134f070 push ebp */
  push32((uint32_t)(EBP));
  /* 1134f071 mov ebp, esp */
  EBP = (ESP);
  /* 1134f073 push esi */
  push32((uint32_t)(ESI));
  /* 1134f074 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134f076 push eax */
  push32((uint32_t)(EAX));
  /* 1134f077 push eax */
  push32((uint32_t)(EAX));
  /* 1134f078 push eax */
  push32((uint32_t)(EAX));
  /* 1134f079 push eax */
  push32((uint32_t)(EAX));
  /* 1134f07a push eax */
  push32((uint32_t)(EAX));
  /* 1134f07b push eax */
  push32((uint32_t)(EAX));
  /* 1134f07c push eax */
  push32((uint32_t)(EAX));
  /* 1134f07d push eax */
  push32((uint32_t)(EAX));
  /* 1134f07e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134f081 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1134f084:;
  /* 1134f084 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1134f086 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1134f088 je 0x1134f091 */
  if (C.zf) goto L_1134f091;
  /* 1134f08a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1134f08b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1134f08b");
  /* 1134f08f jmp 0x1134f084 */
  goto L_1134f084;
L_1134f091:;
  /* 1134f091 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1134f094 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1134f097 nop  */
  /* nop */
L_1134f098:;
  /* 1134f098 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1134f099 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1134f09b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1134f09d je 0x1134f0a6 */
  if (C.zf) goto L_1134f0a6;
  /* 1134f09f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1134f0a0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1134f0a0");
  /* 1134f0a4 jae 0x1134f098 */
  if (!C.cf) goto L_1134f098;
L_1134f0a6:;
  /* 1134f0a6 mov eax, ecx */
  EAX = (ECX);
  /* 1134f0a8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f0ab pop esi */
  ESI = (pop32());
  /* 1134f0ac leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1134f0ad ret  */
  ESPCHK(0x1134f070u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1134f0b0 (56 bytes, 31 insns) */
void f_1134f0b0(void) {
  FTRACE(0x1134f0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134f0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134f0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1134f0b3 push edi */
  push32((uint32_t)(EDI));
  /* 1134f0b4 push esi */
  push32((uint32_t)(ESI));
  /* 1134f0b5 push ebx */
  push32((uint32_t)(EBX));
  /* 1134f0b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134f0b9 jecxz 0x1134f0e1 */
  x86_unimpl("jecxz @ 0x1134f0b9");
  /* 1134f0bb mov ebx, ecx */
  EBX = (ECX);
  /* 1134f0bd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1134f0c0 mov esi, edi */
  ESI = (EDI);
  /* 1134f0c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134f0c4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1134f0c6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134f0c8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f0ca mov edi, esi */
  EDI = (ESI);
  /* 1134f0cc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1134f0cf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1134f0d1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1134f0d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134f0d6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1134f0d9 ja 0x1134f0df */
  if ((!C.cf&&!C.zf)) goto L_1134f0df;
  /* 1134f0db je 0x1134f0e1 */
  if (C.zf) goto L_1134f0e1;
  /* 1134f0dd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1134f0de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1134f0df:;
  /* 1134f0df not ecx */
  ECX = (~(ECX));
L_1134f0e1:;
  /* 1134f0e1 mov eax, ecx */
  EAX = (ECX);
  /* 1134f0e3 pop ebx */
  EBX = (pop32());
  /* 1134f0e4 pop esi */
  ESI = (pop32());
  /* 1134f0e5 pop edi */
  EDI = (pop32());
  /* 1134f0e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1134f0e7 ret  */
  ESPCHK(0x1134f0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0f0 @ 0x1134f0f0 (58 bytes, 32 insns) */
void f_1134f0f0(void) {
  FTRACE(0x1134f0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134f0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134f0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1134f0f3 push esi */
  push32((uint32_t)(ESI));
  /* 1134f0f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134f0f6 push eax */
  push32((uint32_t)(EAX));
  /* 1134f0f7 push eax */
  push32((uint32_t)(EAX));
  /* 1134f0f8 push eax */
  push32((uint32_t)(EAX));
  /* 1134f0f9 push eax */
  push32((uint32_t)(EAX));
  /* 1134f0fa push eax */
  push32((uint32_t)(EAX));
  /* 1134f0fb push eax */
  push32((uint32_t)(EAX));
  /* 1134f0fc push eax */
  push32((uint32_t)(EAX));
  /* 1134f0fd push eax */
  push32((uint32_t)(EAX));
  /* 1134f0fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134f101 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1134f104:;
  /* 1134f104 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1134f106 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1134f108 je 0x1134f111 */
  if (C.zf) goto L_1134f111;
  /* 1134f10a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1134f10b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1134f10b");
  /* 1134f10f jmp 0x1134f104 */
  goto L_1134f104;
L_1134f111:;
  /* 1134f111 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1134f114:;
  /* 1134f114 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1134f116 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1134f118 je 0x1134f124 */
  if (C.zf) goto L_1134f124;
  /* 1134f11a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1134f11b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1134f11b");
  /* 1134f11f jae 0x1134f114 */
  if (!C.cf) goto L_1134f114;
  /* 1134f121 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1134f124:;
  /* 1134f124 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f127 pop esi */
  ESI = (pop32());
  /* 1134f128 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1134f129 ret  */
  ESPCHK(0x1134f0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f130 @ 0x1134f130 (512 bytes, 147 insns) */
void f_1134f130(void) {
  FTRACE(0x1134f130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134f130 push ebp */
  push32((uint32_t)(EBP));
  /* 1134f131 mov ebp, esp */
  EBP = (ESP);
  /* 1134f133 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134f136 cmp dword ptr [0x1136f6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f13d jne 0x1134f162 */
  if (!C.zf) goto L_1134f162;
  /* 1134f13f call 0x1134fc00 */
  push32(0x1134f144u); f_1134fc00();
  /* 1134f144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f146 je 0x1134f152 */
  if (C.zf) goto L_1134f152;
  /* 1134f148 mov eax, dword ptr [0x113712b8] */
  EAX = (r32((uint32_t)(0x113712b8)));
  /* 1134f14d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1134f150 jmp 0x1134f159 */
  goto L_1134f159;
L_1134f152:;
  /* 1134f152 mov dword ptr [ebp - 8], 0x1134fc50 */
  w32((uint32_t)(EBP + -0x8), (0x1134fc50u));
L_1134f159:;
  /* 1134f159 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134f15c mov dword ptr [0x1136f6f4], ecx */
  w32((uint32_t)(0x1136f6f4), (ECX));
L_1134f162:;
  /* 1134f162 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f166 jne 0x1134f172 */
  if (!C.zf) goto L_1134f172;
  /* 1134f168 call 0x1134fa50 */
  push32(0x1134f16du); f_1134fa50();
  /* 1134f16d jmp 0x1134f23e */
  goto L_1134f23e;
L_1134f172:;
  /* 1134f172 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134f175 mov dword ptr [0x1136f6e4], edx */
  w32((uint32_t)(0x1136f6e4), (EDX));
  /* 1134f17b cmp dword ptr [0x1136f6e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f182 je 0x1134f1a4 */
  if (C.zf) goto L_1134f1a4;
  /* 1134f184 mov eax, dword ptr [0x1136f6e4] */
  EAX = (r32((uint32_t)(0x1136f6e4)));
  /* 1134f189 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134f18c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134f18e je 0x1134f1a4 */
  if (C.zf) goto L_1134f1a4;
  /* 1134f190 push 0x1136f6e4 */
  push32((uint32_t)(0x1136f6e4u));
  /* 1134f195 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1134f197 push 0x1136ea90 */
  push32((uint32_t)(0x1136ea90u));
  /* 1134f19c call 0x1134f330 */
  push32(0x1134f1a1u); f_1134f330();
  /* 1134f1a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134f1a4:;
  /* 1134f1a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134f1a7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f1aa mov dword ptr [0x1136f6e8], edx */
  w32((uint32_t)(0x1136f6e8), (EDX));
  /* 1134f1b0 cmp dword ptr [0x1136f6e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f1b7 je 0x1134f1d9 */
  if (C.zf) goto L_1134f1d9;
  /* 1134f1b9 mov eax, dword ptr [0x1136f6e8] */
  EAX = (r32((uint32_t)(0x1136f6e8)));
  /* 1134f1be movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134f1c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134f1c3 je 0x1134f1d9 */
  if (C.zf) goto L_1134f1d9;
  /* 1134f1c5 push 0x1136f6e8 */
  push32((uint32_t)(0x1136f6e8u));
  /* 1134f1ca push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1134f1cc push 0x1136e9d8 */
  push32((uint32_t)(0x1136e9d8u));
  /* 1134f1d1 call 0x1134f330 */
  push32(0x1134f1d6u); f_1134f330();
  /* 1134f1d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134f1d9:;
  /* 1134f1d9 mov dword ptr [0x1136f6ec], 0 */
  w32((uint32_t)(0x1136f6ec), (0x0u));
  /* 1134f1e3 cmp dword ptr [0x1136f6e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f1ea je 0x1134f21d */
  if (C.zf) goto L_1134f21d;
  /* 1134f1ec mov edx, dword ptr [0x1136f6e4] */
  EDX = (r32((uint32_t)(0x1136f6e4)));
  /* 1134f1f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1134f1f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f1f7 je 0x1134f21d */
  if (C.zf) goto L_1134f21d;
  /* 1134f1f9 cmp dword ptr [0x1136f6e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f200 je 0x1134f216 */
  if (C.zf) goto L_1134f216;
  /* 1134f202 mov ecx, dword ptr [0x1136f6e8] */
  ECX = (r32((uint32_t)(0x1136f6e8)));
  /* 1134f208 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1134f20b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134f20d je 0x1134f216 */
  if (C.zf) goto L_1134f216;
  /* 1134f20f call 0x1134f3c0 */
  push32(0x1134f214u); f_1134f3c0();
  /* 1134f214 jmp 0x1134f21b */
  goto L_1134f21b;
L_1134f216:;
  /* 1134f216 call 0x1134f7b0 */
  push32(0x1134f21bu); f_1134f7b0();
L_1134f21b:;
  /* 1134f21b jmp 0x1134f23e */
  goto L_1134f23e;
L_1134f21d:;
  /* 1134f21d cmp dword ptr [0x1136f6e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f224 je 0x1134f239 */
  if (C.zf) goto L_1134f239;
  /* 1134f226 mov eax, dword ptr [0x1136f6e8] */
  EAX = (r32((uint32_t)(0x1136f6e8)));
  /* 1134f22b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134f22e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134f230 je 0x1134f239 */
  if (C.zf) goto L_1134f239;
  /* 1134f232 call 0x1134f950 */
  push32(0x1134f237u); f_1134f950();
  /* 1134f237 jmp 0x1134f23e */
  goto L_1134f23e;
L_1134f239:;
  /* 1134f239 call 0x1134fa50 */
  push32(0x1134f23eu); f_1134fa50();
L_1134f23e:;
  /* 1134f23e cmp dword ptr [0x1136f6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f245 jne 0x1134f24e */
  if (!C.zf) goto L_1134f24e;
  /* 1134f247 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134f249 jmp 0x1134f32c */
  goto L_1134f32c;
L_1134f24e:;
  /* 1134f24e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134f251 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f257 push edx */
  push32((uint32_t)(EDX));
  /* 1134f258 call 0x1134fa80 */
  push32(0x1134f25du); f_1134fa80();
  /* 1134f25d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f260 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134f263 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f267 je 0x1134f27c */
  if (C.zf) goto L_1134f27c;
  /* 1134f269 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134f26c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134f271 push eax */
  push32((uint32_t)(EAX));
  /* 1134f272 call dword ptr [0x113712bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712bc))), 0x1134f278u);
  /* 1134f278 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f27a jne 0x1134f283 */
  if (!C.zf) goto L_1134f283;
L_1134f27c:;
  /* 1134f27c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134f27e jmp 0x1134f32c */
  goto L_1134f32c;
L_1134f283:;
  /* 1134f283 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134f285 mov ecx, dword ptr [0x1136f6d4] */
  ECX = (r32((uint32_t)(0x1136f6d4)));
  /* 1134f28b push ecx */
  push32((uint32_t)(ECX));
  /* 1134f28c call dword ptr [0x113712c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712c0))), 0x1134f292u);
  /* 1134f292 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f294 jne 0x1134f29d */
  if (!C.zf) goto L_1134f29d;
  /* 1134f296 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134f298 jmp 0x1134f32c */
  goto L_1134f32c;
L_1134f29d:;
  /* 1134f29d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f2a1 je 0x1134f2c8 */
  if (C.zf) goto L_1134f2c8;
  /* 1134f2a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134f2a6 mov ax, word ptr [0x1136f6d4] */
  AX = (r16((uint32_t)(0x1136f6d4)));
  /* 1134f2ac mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1134f2af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134f2b2 mov dx, word ptr [0x1136f6f0] */
  DX = (r16((uint32_t)(0x1136f6f0)));
  /* 1134f2b9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1134f2bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134f2c0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1134f2c4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_1134f2c8:;
  /* 1134f2c8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f2cc je 0x1134f327 */
  if (C.zf) goto L_1134f327;
  /* 1134f2ce push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1134f2d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134f2d3 push edx */
  push32((uint32_t)(EDX));
  /* 1134f2d4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 1134f2d9 mov eax, dword ptr [0x1136f6d4] */
  EAX = (r32((uint32_t)(0x1136f6d4)));
  /* 1134f2de push eax */
  push32((uint32_t)(EAX));
  /* 1134f2df call dword ptr [0x1136f6f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136f6f4))), 0x1134f2e5u);
  /* 1134f2e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f2e7 jne 0x1134f2ed */
  if (!C.zf) goto L_1134f2ed;
  /* 1134f2e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134f2eb jmp 0x1134f32c */
  goto L_1134f32c;
L_1134f2ed:;
  /* 1134f2ed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1134f2ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134f2f2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f2f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1134f2f6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1134f2fb mov edx, dword ptr [0x1136f6f0] */
  EDX = (r32((uint32_t)(0x1136f6f0)));
  /* 1134f301 push edx */
  push32((uint32_t)(EDX));
  /* 1134f302 call dword ptr [0x1136f6f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136f6f4))), 0x1134f308u);
  /* 1134f308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f30a jne 0x1134f310 */
  if (!C.zf) goto L_1134f310;
  /* 1134f30c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134f30e jmp 0x1134f32c */
  goto L_1134f32c;
L_1134f310:;
  /* 1134f310 push 0xa */
  push32((uint32_t)(0xau));
  /* 1134f312 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134f315 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f31a push eax */
  push32((uint32_t)(EAX));
  /* 1134f31b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134f31e push ecx */
  push32((uint32_t)(ECX));
  /* 1134f31f call 0x11345e90 */
  push32(0x1134f324u); f_11345e90();
  /* 1134f324 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134f327:;
  /* 1134f327 mov eax, 1 */
  EAX = (0x1u);
L_1134f32c:;
  /* 1134f32c mov esp, ebp */
  ESP = (EBP);
  /* 1134f32e pop ebp */
  EBP = (pop32());
  /* 1134f32f ret  */
  ESPCHK(0x1134f130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f330 @ 0x1134f330 (130 bytes, 47 insns) */
void f_1134f330(void) {
  FTRACE(0x1134f330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134f330 push ebp */
  push32((uint32_t)(EBP));
  /* 1134f331 mov ebp, esp */
  EBP = (ESP);
  /* 1134f333 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134f336 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1134f33d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1134f344:;
  /* 1134f344 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134f347 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f34a jg 0x1134f3ae */
  if ((!C.zf&&C.sf==C.of)) goto L_1134f3ae;
  /* 1134f34c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f350 je 0x1134f3ae */
  if (C.zf) goto L_1134f3ae;
  /* 1134f352 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134f355 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f358 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1134f359 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134f35b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1134f35d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134f360 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134f363 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134f366 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 1134f369 push eax */
  push32((uint32_t)(EAX));
  /* 1134f36a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134f36d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1134f36f push edx */
  push32((uint32_t)(EDX));
  /* 1134f370 call 0x11351a20 */
  push32(0x1134f375u); f_11351a20();
  /* 1134f375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f378 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1134f37b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f37f jne 0x1134f392 */
  if (!C.zf) goto L_1134f392;
  /* 1134f381 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134f384 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134f387 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1134f38b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134f38e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1134f390 jmp 0x1134f3ac */
  goto L_1134f3ac;
L_1134f392:;
  /* 1134f392 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f396 jge 0x1134f3a3 */
  if ((C.sf==C.of)) goto L_1134f3a3;
  /* 1134f398 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134f39b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134f39e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1134f3a1 jmp 0x1134f3ac */
  goto L_1134f3ac;
L_1134f3a3:;
  /* 1134f3a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134f3a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f3a9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1134f3ac:;
  /* 1134f3ac jmp 0x1134f344 */
  goto L_1134f344;
L_1134f3ae:;
  /* 1134f3ae mov esp, ebp */
  ESP = (EBP);
  /* 1134f3b0 pop ebp */
  EBP = (pop32());
  /* 1134f3b1 ret  */
  ESPCHK(0x1134f330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3c0 @ 0x1134f3c0 (186 bytes, 50 insns) */
void f_1134f3c0(void) {
  FTRACE(0x1134f3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134f3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134f3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1134f3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134f3c4 mov eax, dword ptr [0x1136f6e4] */
  EAX = (r32((uint32_t)(0x1136f6e4)));
  /* 1134f3c9 push eax */
  push32((uint32_t)(EAX));
  /* 1134f3ca call 0x11346180 */
  push32(0x1134f3cfu); f_11346180();
  /* 1134f3cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f3d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134f3d4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f3d7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1134f3da mov dword ptr [0x1136f6e0], ecx */
  w32((uint32_t)(0x1136f6e0), (ECX));
  /* 1134f3e0 mov edx, dword ptr [0x1136f6e8] */
  EDX = (r32((uint32_t)(0x1136f6e8)));
  /* 1134f3e6 push edx */
  push32((uint32_t)(EDX));
  /* 1134f3e7 call 0x11346180 */
  push32(0x1134f3ecu); f_11346180();
  /* 1134f3ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f3ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134f3f1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f3f4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1134f3f7 mov dword ptr [0x1136f6d8], ecx */
  w32((uint32_t)(0x1136f6d8), (ECX));
  /* 1134f3fd mov dword ptr [0x1136f6d4], 0 */
  w32((uint32_t)(0x1136f6d4), (0x0u));
  /* 1134f407 cmp dword ptr [0x1136f6e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f40e je 0x1134f419 */
  if (C.zf) goto L_1134f419;
  /* 1134f410 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1134f417 jmp 0x1134f42b */
  goto L_1134f42b;
L_1134f419:;
  /* 1134f419 mov edx, dword ptr [0x1136f6e4] */
  EDX = (r32((uint32_t)(0x1136f6e4)));
  /* 1134f41f push edx */
  push32((uint32_t)(EDX));
  /* 1134f420 call 0x1134fe60 */
  push32(0x1134f425u); f_1134fe60();
  /* 1134f425 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f428 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1134f42b:;
  /* 1134f42b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134f42e mov dword ptr [0x1136f6dc], eax */
  w32((uint32_t)(0x1136f6dc), (EAX));
  /* 1134f433 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134f435 push 0x1134f480 */
  push32((uint32_t)(0x1134f480u));
  /* 1134f43a call dword ptr [0x113712b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712b4))), 0x1134f440u);
  /* 1134f440 mov ecx, dword ptr [0x1136f6ec] */
  ECX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f446 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1134f44c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134f44e je 0x1134f46c */
  if (C.zf) goto L_1134f46c;
  /* 1134f450 mov edx, dword ptr [0x1136f6ec] */
  EDX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f456 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1134f45c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134f45e je 0x1134f46c */
  if (C.zf) goto L_1134f46c;
  /* 1134f460 mov eax, dword ptr [0x1136f6ec] */
  EAX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f465 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1134f468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f46a jne 0x1134f476 */
  if (!C.zf) goto L_1134f476;
L_1134f46c:;
  /* 1134f46c mov dword ptr [0x1136f6ec], 0 */
  w32((uint32_t)(0x1136f6ec), (0x0u));
L_1134f476:;
  /* 1134f476 mov esp, ebp */
  ESP = (EBP);
  /* 1134f478 pop ebp */
  EBP = (pop32());
  /* 1134f479 ret  */
  ESPCHK(0x1134f3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f480 @ 0x1134f480 (804 bytes, 220 insns) */
void f_1134f480(void) {
  FTRACE(0x1134f480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134f480 push ebp */
  push32((uint32_t)(EBP));
  /* 1134f481 mov ebp, esp */
  EBP = (ESP);
  /* 1134f483 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134f486 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134f489 push eax */
  push32((uint32_t)(EAX));
  /* 1134f48a call 0x1134fde0 */
  push32(0x1134f48fu); f_1134fde0();
  /* 1134f48f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f492 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1134f495 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1134f497 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1134f49a push ecx */
  push32((uint32_t)(ECX));
  /* 1134f49b mov edx, dword ptr [0x1136f6d8] */
  EDX = (r32((uint32_t)(0x1136f6d8)));
  /* 1134f4a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134f4a3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134f4a5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1134f4ab add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f4b1 push edx */
  push32((uint32_t)(EDX));
  /* 1134f4b2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f4b5 push eax */
  push32((uint32_t)(EAX));
  /* 1134f4b6 call dword ptr [0x1136f6f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136f6f4))), 0x1134f4bcu);
  /* 1134f4bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f4be jne 0x1134f4d4 */
  if (!C.zf) goto L_1134f4d4;
  /* 1134f4c0 mov dword ptr [0x1136f6ec], 0 */
  w32((uint32_t)(0x1136f6ec), (0x0u));
  /* 1134f4ca mov eax, 1 */
  EAX = (0x1u);
  /* 1134f4cf jmp 0x1134f79e */
  goto L_1134f79e;
L_1134f4d4:;
  /* 1134f4d4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1134f4d7 push ecx */
  push32((uint32_t)(ECX));
  /* 1134f4d8 mov edx, dword ptr [0x1136f6e8] */
  EDX = (r32((uint32_t)(0x1136f6e8)));
  /* 1134f4de push edx */
  push32((uint32_t)(EDX));
  /* 1134f4df call 0x11351a20 */
  push32(0x1134f4e4u); f_11351a20();
  /* 1134f4e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f4e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f4e9 jne 0x1134f60f */
  if (!C.zf) goto L_1134f60f;
  /* 1134f4ef push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1134f4f1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1134f4f4 push eax */
  push32((uint32_t)(EAX));
  /* 1134f4f5 mov ecx, dword ptr [0x1136f6e0] */
  ECX = (r32((uint32_t)(0x1136f6e0)));
  /* 1134f4fb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134f4fd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134f4ff and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1134f505 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f50b push ecx */
  push32((uint32_t)(ECX));
  /* 1134f50c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f50f push edx */
  push32((uint32_t)(EDX));
  /* 1134f510 call dword ptr [0x1136f6f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136f6f4))), 0x1134f516u);
  /* 1134f516 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f518 jne 0x1134f52e */
  if (!C.zf) goto L_1134f52e;
  /* 1134f51a mov dword ptr [0x1136f6ec], 0 */
  w32((uint32_t)(0x1136f6ec), (0x0u));
  /* 1134f524 mov eax, 1 */
  EAX = (0x1u);
  /* 1134f529 jmp 0x1134f79e */
  goto L_1134f79e;
L_1134f52e:;
  /* 1134f52e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1134f531 push eax */
  push32((uint32_t)(EAX));
  /* 1134f532 mov ecx, dword ptr [0x1136f6e4] */
  ECX = (r32((uint32_t)(0x1136f6e4)));
  /* 1134f538 push ecx */
  push32((uint32_t)(ECX));
  /* 1134f539 call 0x11351a20 */
  push32(0x1134f53eu); f_11351a20();
  /* 1134f53e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f541 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f543 jne 0x1134f570 */
  if (!C.zf) goto L_1134f570;
  /* 1134f545 mov edx, dword ptr [0x1136f6ec] */
  EDX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f54b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 1134f551 mov dword ptr [0x1136f6ec], edx */
  w32((uint32_t)(0x1136f6ec), (EDX));
  /* 1134f557 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f55a mov dword ptr [0x1136f6f0], eax */
  w32((uint32_t)(0x1136f6f0), (EAX));
  /* 1134f55f mov ecx, dword ptr [0x1136f6f0] */
  ECX = (r32((uint32_t)(0x1136f6f0)));
  /* 1134f565 mov dword ptr [0x1136f6d4], ecx */
  w32((uint32_t)(0x1136f6d4), (ECX));
  /* 1134f56b jmp 0x1134f60f */
  goto L_1134f60f;
L_1134f570:;
  /* 1134f570 mov edx, dword ptr [0x1136f6ec] */
  EDX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f576 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1134f579 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134f57b jne 0x1134f60f */
  if (!C.zf) goto L_1134f60f;
  /* 1134f581 cmp dword ptr [0x1136f6dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f588 je 0x1134f5dd */
  if (C.zf) goto L_1134f5dd;
  /* 1134f58a mov eax, dword ptr [0x1136f6dc] */
  EAX = (r32((uint32_t)(0x1136f6dc)));
  /* 1134f58f push eax */
  push32((uint32_t)(EAX));
  /* 1134f590 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1134f593 push ecx */
  push32((uint32_t)(ECX));
  /* 1134f594 mov edx, dword ptr [0x1136f6e4] */
  EDX = (r32((uint32_t)(0x1136f6e4)));
  /* 1134f59a push edx */
  push32((uint32_t)(EDX));
  /* 1134f59b call 0x11351af0 */
  push32(0x1134f5a0u); f_11351af0();
  /* 1134f5a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f5a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f5a5 jne 0x1134f5dd */
  if (!C.zf) goto L_1134f5dd;
  /* 1134f5a7 mov eax, dword ptr [0x1136f6ec] */
  EAX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f5ac or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1134f5ae mov dword ptr [0x1136f6ec], eax */
  w32((uint32_t)(0x1136f6ec), (EAX));
  /* 1134f5b3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f5b6 mov dword ptr [0x1136f6f0], ecx */
  w32((uint32_t)(0x1136f6f0), (ECX));
  /* 1134f5bc mov edx, dword ptr [0x1136f6e4] */
  EDX = (r32((uint32_t)(0x1136f6e4)));
  /* 1134f5c2 push edx */
  push32((uint32_t)(EDX));
  /* 1134f5c3 call 0x11346180 */
  push32(0x1134f5c8u); f_11346180();
  /* 1134f5c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f5cb cmp eax, dword ptr [0x1136f6dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1136f6dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f5d1 jne 0x1134f5db */
  if (!C.zf) goto L_1134f5db;
  /* 1134f5d3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f5d6 mov dword ptr [0x1136f6d4], eax */
  w32((uint32_t)(0x1136f6d4), (EAX));
L_1134f5db:;
  /* 1134f5db jmp 0x1134f60f */
  goto L_1134f60f;
L_1134f5dd:;
  /* 1134f5dd mov ecx, dword ptr [0x1136f6ec] */
  ECX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f5e3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1134f5e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134f5e8 jne 0x1134f60f */
  if (!C.zf) goto L_1134f60f;
  /* 1134f5ea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f5ed push edx */
  push32((uint32_t)(EDX));
  /* 1134f5ee call 0x1134fb20 */
  push32(0x1134f5f3u); f_1134fb20();
  /* 1134f5f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f5f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f5f8 je 0x1134f60f */
  if (C.zf) goto L_1134f60f;
  /* 1134f5fa mov eax, dword ptr [0x1136f6ec] */
  EAX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f5ff or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1134f601 mov dword ptr [0x1136f6ec], eax */
  w32((uint32_t)(0x1136f6ec), (EAX));
  /* 1134f606 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f609 mov dword ptr [0x1136f6f0], ecx */
  w32((uint32_t)(0x1136f6f0), (ECX));
L_1134f60f:;
  /* 1134f60f mov edx, dword ptr [0x1136f6ec] */
  EDX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f615 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1134f61b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f621 je 0x1134f791 */
  if (C.zf) goto L_1134f791;
  /* 1134f627 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1134f629 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1134f62c push eax */
  push32((uint32_t)(EAX));
  /* 1134f62d mov ecx, dword ptr [0x1136f6e0] */
  ECX = (r32((uint32_t)(0x1136f6e0)));
  /* 1134f633 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134f635 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134f637 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1134f63d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f643 push ecx */
  push32((uint32_t)(ECX));
  /* 1134f644 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f647 push edx */
  push32((uint32_t)(EDX));
  /* 1134f648 call dword ptr [0x1136f6f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136f6f4))), 0x1134f64eu);
  /* 1134f64e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f650 jne 0x1134f666 */
  if (!C.zf) goto L_1134f666;
  /* 1134f652 mov dword ptr [0x1136f6ec], 0 */
  w32((uint32_t)(0x1136f6ec), (0x0u));
  /* 1134f65c mov eax, 1 */
  EAX = (0x1u);
  /* 1134f661 jmp 0x1134f79e */
  goto L_1134f79e;
L_1134f666:;
  /* 1134f666 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1134f669 push eax */
  push32((uint32_t)(EAX));
  /* 1134f66a mov ecx, dword ptr [0x1136f6e4] */
  ECX = (r32((uint32_t)(0x1136f6e4)));
  /* 1134f670 push ecx */
  push32((uint32_t)(ECX));
  /* 1134f671 call 0x11351a20 */
  push32(0x1134f676u); f_11351a20();
  /* 1134f676 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f67b jne 0x1134f730 */
  if (!C.zf) goto L_1134f730;
  /* 1134f681 mov edx, dword ptr [0x1136f6ec] */
  EDX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f687 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1134f68a mov dword ptr [0x1136f6ec], edx */
  w32((uint32_t)(0x1136f6ec), (EDX));
  /* 1134f690 cmp dword ptr [0x1136f6e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f697 je 0x1134f6ba */
  if (C.zf) goto L_1134f6ba;
  /* 1134f699 mov eax, dword ptr [0x1136f6ec] */
  EAX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f69e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1134f6a1 mov dword ptr [0x1136f6ec], eax */
  w32((uint32_t)(0x1136f6ec), (EAX));
  /* 1134f6a6 cmp dword ptr [0x1136f6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f6ad jne 0x1134f6b8 */
  if (!C.zf) goto L_1134f6b8;
  /* 1134f6af mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f6b2 mov dword ptr [0x1136f6d4], ecx */
  w32((uint32_t)(0x1136f6d4), (ECX));
L_1134f6b8:;
  /* 1134f6b8 jmp 0x1134f72e */
  goto L_1134f72e;
L_1134f6ba:;
  /* 1134f6ba cmp dword ptr [0x1136f6dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f6c1 je 0x1134f70f */
  if (C.zf) goto L_1134f70f;
  /* 1134f6c3 mov edx, dword ptr [0x1136f6e4] */
  EDX = (r32((uint32_t)(0x1136f6e4)));
  /* 1134f6c9 push edx */
  push32((uint32_t)(EDX));
  /* 1134f6ca call 0x11346180 */
  push32(0x1134f6cfu); f_11346180();
  /* 1134f6cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f6d2 cmp eax, dword ptr [0x1136f6dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1136f6dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f6d8 jne 0x1134f70f */
  if (!C.zf) goto L_1134f70f;
  /* 1134f6da push 1 */
  push32((uint32_t)(0x1u));
  /* 1134f6dc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f6df push eax */
  push32((uint32_t)(EAX));
  /* 1134f6e0 call 0x1134fb70 */
  push32(0x1134f6e5u); f_1134fb70();
  /* 1134f6e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f6e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f6ea je 0x1134f70d */
  if (C.zf) goto L_1134f70d;
  /* 1134f6ec mov ecx, dword ptr [0x1136f6ec] */
  ECX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f6f2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1134f6f5 mov dword ptr [0x1136f6ec], ecx */
  w32((uint32_t)(0x1136f6ec), (ECX));
  /* 1134f6fb cmp dword ptr [0x1136f6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f702 jne 0x1134f70d */
  if (!C.zf) goto L_1134f70d;
  /* 1134f704 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f707 mov dword ptr [0x1136f6d4], edx */
  w32((uint32_t)(0x1136f6d4), (EDX));
L_1134f70d:;
  /* 1134f70d jmp 0x1134f72e */
  goto L_1134f72e;
L_1134f70f:;
  /* 1134f70f mov eax, dword ptr [0x1136f6ec] */
  EAX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f714 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1134f717 mov dword ptr [0x1136f6ec], eax */
  w32((uint32_t)(0x1136f6ec), (EAX));
  /* 1134f71c cmp dword ptr [0x1136f6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f723 jne 0x1134f72e */
  if (!C.zf) goto L_1134f72e;
  /* 1134f725 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f728 mov dword ptr [0x1136f6d4], ecx */
  w32((uint32_t)(0x1136f6d4), (ECX));
L_1134f72e:;
  /* 1134f72e jmp 0x1134f791 */
  goto L_1134f791;
L_1134f730:;
  /* 1134f730 cmp dword ptr [0x1136f6e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f737 jne 0x1134f791 */
  if (!C.zf) goto L_1134f791;
  /* 1134f739 cmp dword ptr [0x1136f6dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f740 je 0x1134f791 */
  if (C.zf) goto L_1134f791;
  /* 1134f742 mov edx, dword ptr [0x1136f6dc] */
  EDX = (r32((uint32_t)(0x1136f6dc)));
  /* 1134f748 push edx */
  push32((uint32_t)(EDX));
  /* 1134f749 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1134f74c push eax */
  push32((uint32_t)(EAX));
  /* 1134f74d mov ecx, dword ptr [0x1136f6e4] */
  ECX = (r32((uint32_t)(0x1136f6e4)));
  /* 1134f753 push ecx */
  push32((uint32_t)(ECX));
  /* 1134f754 call 0x11351af0 */
  push32(0x1134f759u); f_11351af0();
  /* 1134f759 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f75c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f75e jne 0x1134f791 */
  if (!C.zf) goto L_1134f791;
  /* 1134f760 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134f762 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f765 push edx */
  push32((uint32_t)(EDX));
  /* 1134f766 call 0x1134fb70 */
  push32(0x1134f76bu); f_1134fb70();
  /* 1134f76b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f76e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f770 je 0x1134f791 */
  if (C.zf) goto L_1134f791;
  /* 1134f772 mov eax, dword ptr [0x1136f6ec] */
  EAX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f777 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1134f77a mov dword ptr [0x1136f6ec], eax */
  w32((uint32_t)(0x1136f6ec), (EAX));
  /* 1134f77f cmp dword ptr [0x1136f6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f786 jne 0x1134f791 */
  if (!C.zf) goto L_1134f791;
  /* 1134f788 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f78b mov dword ptr [0x1136f6d4], ecx */
  w32((uint32_t)(0x1136f6d4), (ECX));
L_1134f791:;
  /* 1134f791 mov eax, dword ptr [0x1136f6ec] */
  EAX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f796 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1134f799 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134f79b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134f79d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1134f79e:;
  /* 1134f79e mov esp, ebp */
  ESP = (EBP);
  /* 1134f7a0 pop ebp */
  EBP = (pop32());
  /* 1134f7a1 ret 4 */
  ESPCHK(0x1134f480u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f7b0 @ 0x1134f7b0 (116 bytes, 33 insns) */
void f_1134f7b0(void) {
  FTRACE(0x1134f7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134f7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134f7b1 mov ebp, esp */
  EBP = (ESP);
  /* 1134f7b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134f7b4 mov eax, dword ptr [0x1136f6e4] */
  EAX = (r32((uint32_t)(0x1136f6e4)));
  /* 1134f7b9 push eax */
  push32((uint32_t)(EAX));
  /* 1134f7ba call 0x11346180 */
  push32(0x1134f7bfu); f_11346180();
  /* 1134f7bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f7c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134f7c4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f7c7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1134f7ca mov dword ptr [0x1136f6e0], ecx */
  w32((uint32_t)(0x1136f6e0), (ECX));
  /* 1134f7d0 cmp dword ptr [0x1136f6e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f7d7 je 0x1134f7e2 */
  if (C.zf) goto L_1134f7e2;
  /* 1134f7d9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1134f7e0 jmp 0x1134f7f4 */
  goto L_1134f7f4;
L_1134f7e2:;
  /* 1134f7e2 mov edx, dword ptr [0x1136f6e4] */
  EDX = (r32((uint32_t)(0x1136f6e4)));
  /* 1134f7e8 push edx */
  push32((uint32_t)(EDX));
  /* 1134f7e9 call 0x1134fe60 */
  push32(0x1134f7eeu); f_1134fe60();
  /* 1134f7ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f7f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1134f7f4:;
  /* 1134f7f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134f7f7 mov dword ptr [0x1136f6dc], eax */
  w32((uint32_t)(0x1136f6dc), (EAX));
  /* 1134f7fc push 1 */
  push32((uint32_t)(0x1u));
  /* 1134f7fe push 0x1134f830 */
  push32((uint32_t)(0x1134f830u));
  /* 1134f803 call dword ptr [0x113712b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712b4))), 0x1134f809u);
  /* 1134f809 mov ecx, dword ptr [0x1136f6ec] */
  ECX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f80f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1134f812 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134f814 jne 0x1134f820 */
  if (!C.zf) goto L_1134f820;
  /* 1134f816 mov dword ptr [0x1136f6ec], 0 */
  w32((uint32_t)(0x1136f6ec), (0x0u));
L_1134f820:;
  /* 1134f820 mov esp, ebp */
  ESP = (EBP);
  /* 1134f822 pop ebp */
  EBP = (pop32());
  /* 1134f823 ret  */
  ESPCHK(0x1134f7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f830 @ 0x1134f830 (287 bytes, 86 insns) */
void f_1134f830(void) {
  FTRACE(0x1134f830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134f830 push ebp */
  push32((uint32_t)(EBP));
  /* 1134f831 mov ebp, esp */
  EBP = (ESP);
  /* 1134f833 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134f836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134f839 push eax */
  push32((uint32_t)(EAX));
  /* 1134f83a call 0x1134fde0 */
  push32(0x1134f83fu); f_1134fde0();
  /* 1134f83f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f842 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1134f845 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1134f847 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1134f84a push ecx */
  push32((uint32_t)(ECX));
  /* 1134f84b mov edx, dword ptr [0x1136f6e0] */
  EDX = (r32((uint32_t)(0x1136f6e0)));
  /* 1134f851 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134f853 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134f855 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1134f85b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f861 push edx */
  push32((uint32_t)(EDX));
  /* 1134f862 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f865 push eax */
  push32((uint32_t)(EAX));
  /* 1134f866 call dword ptr [0x1136f6f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136f6f4))), 0x1134f86cu);
  /* 1134f86c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f86e jne 0x1134f884 */
  if (!C.zf) goto L_1134f884;
  /* 1134f870 mov dword ptr [0x1136f6ec], 0 */
  w32((uint32_t)(0x1136f6ec), (0x0u));
  /* 1134f87a mov eax, 1 */
  EAX = (0x1u);
  /* 1134f87f jmp 0x1134f949 */
  goto L_1134f949;
L_1134f884:;
  /* 1134f884 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1134f887 push ecx */
  push32((uint32_t)(ECX));
  /* 1134f888 mov edx, dword ptr [0x1136f6e4] */
  EDX = (r32((uint32_t)(0x1136f6e4)));
  /* 1134f88e push edx */
  push32((uint32_t)(EDX));
  /* 1134f88f call 0x11351a20 */
  push32(0x1134f894u); f_11351a20();
  /* 1134f894 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f897 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f899 jne 0x1134f8d9 */
  if (!C.zf) goto L_1134f8d9;
  /* 1134f89b cmp dword ptr [0x1136f6e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f8a2 jne 0x1134f8b6 */
  if (!C.zf) goto L_1134f8b6;
  /* 1134f8a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134f8a6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f8a9 push eax */
  push32((uint32_t)(EAX));
  /* 1134f8aa call 0x1134fb70 */
  push32(0x1134f8afu); f_1134fb70();
  /* 1134f8af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f8b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f8b4 je 0x1134f8d7 */
  if (C.zf) goto L_1134f8d7;
L_1134f8b6:;
  /* 1134f8b6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f8b9 mov dword ptr [0x1136f6f0], ecx */
  w32((uint32_t)(0x1136f6f0), (ECX));
  /* 1134f8bf mov edx, dword ptr [0x1136f6f0] */
  EDX = (r32((uint32_t)(0x1136f6f0)));
  /* 1134f8c5 mov dword ptr [0x1136f6d4], edx */
  w32((uint32_t)(0x1136f6d4), (EDX));
  /* 1134f8cb mov eax, dword ptr [0x1136f6ec] */
  EAX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f8d0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1134f8d2 mov dword ptr [0x1136f6ec], eax */
  w32((uint32_t)(0x1136f6ec), (EAX));
L_1134f8d7:;
  /* 1134f8d7 jmp 0x1134f93c */
  goto L_1134f93c;
L_1134f8d9:;
  /* 1134f8d9 cmp dword ptr [0x1136f6e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f8e0 jne 0x1134f93c */
  if (!C.zf) goto L_1134f93c;
  /* 1134f8e2 cmp dword ptr [0x1136f6dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f6dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f8e9 je 0x1134f93c */
  if (C.zf) goto L_1134f93c;
  /* 1134f8eb mov ecx, dword ptr [0x1136f6dc] */
  ECX = (r32((uint32_t)(0x1136f6dc)));
  /* 1134f8f1 push ecx */
  push32((uint32_t)(ECX));
  /* 1134f8f2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 1134f8f5 push edx */
  push32((uint32_t)(EDX));
  /* 1134f8f6 mov eax, dword ptr [0x1136f6e4] */
  EAX = (r32((uint32_t)(0x1136f6e4)));
  /* 1134f8fb push eax */
  push32((uint32_t)(EAX));
  /* 1134f8fc call 0x11351af0 */
  push32(0x1134f901u); f_11351af0();
  /* 1134f901 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f904 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f906 jne 0x1134f93c */
  if (!C.zf) goto L_1134f93c;
  /* 1134f908 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134f90a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f90d push ecx */
  push32((uint32_t)(ECX));
  /* 1134f90e call 0x1134fb70 */
  push32(0x1134f913u); f_1134fb70();
  /* 1134f913 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f916 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f918 je 0x1134f93c */
  if (C.zf) goto L_1134f93c;
  /* 1134f91a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f91d mov dword ptr [0x1136f6f0], edx */
  w32((uint32_t)(0x1136f6f0), (EDX));
  /* 1134f923 mov eax, dword ptr [0x1136f6f0] */
  EAX = (r32((uint32_t)(0x1136f6f0)));
  /* 1134f928 mov dword ptr [0x1136f6d4], eax */
  w32((uint32_t)(0x1136f6d4), (EAX));
  /* 1134f92d mov ecx, dword ptr [0x1136f6ec] */
  ECX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f933 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1134f936 mov dword ptr [0x1136f6ec], ecx */
  w32((uint32_t)(0x1136f6ec), (ECX));
L_1134f93c:;
  /* 1134f93c mov eax, dword ptr [0x1136f6ec] */
  EAX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f941 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1134f944 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134f946 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134f948 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1134f949:;
  /* 1134f949 mov esp, ebp */
  ESP = (EBP);
  /* 1134f94b pop ebp */
  EBP = (pop32());
  /* 1134f94c ret 4 */
  ESPCHK(0x1134f830u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f950 @ 0x1134f950 (69 bytes, 20 insns) */
void f_1134f950(void) {
  FTRACE(0x1134f950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134f950 push ebp */
  push32((uint32_t)(EBP));
  /* 1134f951 mov ebp, esp */
  EBP = (ESP);
  /* 1134f953 mov eax, dword ptr [0x1136f6e8] */
  EAX = (r32((uint32_t)(0x1136f6e8)));
  /* 1134f958 push eax */
  push32((uint32_t)(EAX));
  /* 1134f959 call 0x11346180 */
  push32(0x1134f95eu); f_11346180();
  /* 1134f95e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f961 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134f963 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134f966 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1134f969 mov dword ptr [0x1136f6d8], ecx */
  w32((uint32_t)(0x1136f6d8), (ECX));
  /* 1134f96f push 1 */
  push32((uint32_t)(0x1u));
  /* 1134f971 push 0x1134f9a0 */
  push32((uint32_t)(0x1134f9a0u));
  /* 1134f976 call dword ptr [0x113712b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712b4))), 0x1134f97cu);
  /* 1134f97c mov edx, dword ptr [0x1136f6ec] */
  EDX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134f982 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1134f985 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134f987 jne 0x1134f993 */
  if (!C.zf) goto L_1134f993;
  /* 1134f989 mov dword ptr [0x1136f6ec], 0 */
  w32((uint32_t)(0x1136f6ec), (0x0u));
L_1134f993:;
  /* 1134f993 pop ebp */
  EBP = (pop32());
  /* 1134f994 ret  */
  ESPCHK(0x1134f950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9a0 @ 0x1134f9a0 (172 bytes, 54 insns) */
void f_1134f9a0(void) {
  FTRACE(0x1134f9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134f9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134f9a1 mov ebp, esp */
  EBP = (ESP);
  /* 1134f9a3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134f9a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134f9a9 push eax */
  push32((uint32_t)(EAX));
  /* 1134f9aa call 0x1134fde0 */
  push32(0x1134f9afu); f_1134fde0();
  /* 1134f9af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f9b2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1134f9b5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1134f9b7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1134f9ba push ecx */
  push32((uint32_t)(ECX));
  /* 1134f9bb mov edx, dword ptr [0x1136f6d8] */
  EDX = (r32((uint32_t)(0x1136f6d8)));
  /* 1134f9c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134f9c3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134f9c5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1134f9cb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134f9d1 push edx */
  push32((uint32_t)(EDX));
  /* 1134f9d2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134f9d5 push eax */
  push32((uint32_t)(EAX));
  /* 1134f9d6 call dword ptr [0x1136f6f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136f6f4))), 0x1134f9dcu);
  /* 1134f9dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134f9de jne 0x1134f9f1 */
  if (!C.zf) goto L_1134f9f1;
  /* 1134f9e0 mov dword ptr [0x1136f6ec], 0 */
  w32((uint32_t)(0x1136f6ec), (0x0u));
  /* 1134f9ea mov eax, 1 */
  EAX = (0x1u);
  /* 1134f9ef jmp 0x1134fa46 */
  goto L_1134fa46;
L_1134f9f1:;
  /* 1134f9f1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1134f9f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1134f9f5 mov edx, dword ptr [0x1136f6e8] */
  EDX = (r32((uint32_t)(0x1136f6e8)));
  /* 1134f9fb push edx */
  push32((uint32_t)(EDX));
  /* 1134f9fc call 0x11351a20 */
  push32(0x1134fa01u); f_11351a20();
  /* 1134fa01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fa04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134fa06 jne 0x1134fa39 */
  if (!C.zf) goto L_1134fa39;
  /* 1134fa08 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134fa0b push eax */
  push32((uint32_t)(EAX));
  /* 1134fa0c call 0x1134fb20 */
  push32(0x1134fa11u); f_1134fb20();
  /* 1134fa11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fa14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134fa16 je 0x1134fa39 */
  if (C.zf) goto L_1134fa39;
  /* 1134fa18 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1134fa1b mov dword ptr [0x1136f6f0], ecx */
  w32((uint32_t)(0x1136f6f0), (ECX));
  /* 1134fa21 mov edx, dword ptr [0x1136f6f0] */
  EDX = (r32((uint32_t)(0x1136f6f0)));
  /* 1134fa27 mov dword ptr [0x1136f6d4], edx */
  w32((uint32_t)(0x1136f6d4), (EDX));
  /* 1134fa2d mov eax, dword ptr [0x1136f6ec] */
  EAX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134fa32 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1134fa34 mov dword ptr [0x1136f6ec], eax */
  w32((uint32_t)(0x1136f6ec), (EAX));
L_1134fa39:;
  /* 1134fa39 mov eax, dword ptr [0x1136f6ec] */
  EAX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134fa3e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1134fa41 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134fa43 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134fa45 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1134fa46:;
  /* 1134fa46 mov esp, ebp */
  ESP = (EBP);
  /* 1134fa48 pop ebp */
  EBP = (pop32());
  /* 1134fa49 ret 4 */
  ESPCHK(0x1134f9a0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fa50 @ 0x1134fa50 (43 bytes, 11 insns) */
void f_1134fa50(void) {
  FTRACE(0x1134fa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134fa50 push ebp */
  push32((uint32_t)(EBP));
  /* 1134fa51 mov ebp, esp */
  EBP = (ESP);
  /* 1134fa53 mov eax, dword ptr [0x1136f6ec] */
  EAX = (r32((uint32_t)(0x1136f6ec)));
  /* 1134fa58 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1134fa5d mov dword ptr [0x1136f6ec], eax */
  w32((uint32_t)(0x1136f6ec), (EAX));
  /* 1134fa62 call dword ptr [0x113712b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712b0))), 0x1134fa68u);
  /* 1134fa68 mov dword ptr [0x1136f6f0], eax */
  w32((uint32_t)(0x1136f6f0), (EAX));
  /* 1134fa6d mov ecx, dword ptr [0x1136f6f0] */
  ECX = (r32((uint32_t)(0x1136f6f0)));
  /* 1134fa73 mov dword ptr [0x1136f6d4], ecx */
  w32((uint32_t)(0x1136f6d4), (ECX));
  /* 1134fa79 pop ebp */
  EBP = (pop32());
  /* 1134fa7a ret  */
  ESPCHK(0x1134fa50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa80 @ 0x1134fa80 (155 bytes, 57 insns) */
void f_1134fa80(void) {
  FTRACE(0x1134fa80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134fa80 push ebp */
  push32((uint32_t)(EBP));
  /* 1134fa81 mov ebp, esp */
  EBP = (ESP);
  /* 1134fa83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134fa86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fa8a je 0x1134faab */
  if (C.zf) goto L_1134faab;
  /* 1134fa8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134fa8f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134fa92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134fa94 je 0x1134faab */
  if (C.zf) goto L_1134faab;
  /* 1134fa96 push 0x1136b71c */
  push32((uint32_t)(0x1136b71cu));
  /* 1134fa9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134fa9e push edx */
  push32((uint32_t)(EDX));
  /* 1134fa9f call 0x1134efe0 */
  push32(0x1134faa4u); f_1134efe0();
  /* 1134faa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134faa7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134faa9 jne 0x1134fad3 */
  if (!C.zf) goto L_1134fad3;
L_1134faab:;
  /* 1134faab push 8 */
  push32((uint32_t)(0x8u));
  /* 1134faad lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1134fab0 push eax */
  push32((uint32_t)(EAX));
  /* 1134fab1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1134fab6 mov ecx, dword ptr [0x1136f6f0] */
  ECX = (r32((uint32_t)(0x1136f6f0)));
  /* 1134fabc push ecx */
  push32((uint32_t)(ECX));
  /* 1134fabd call dword ptr [0x1136f6f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136f6f4))), 0x1134fac3u);
  /* 1134fac3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134fac5 jne 0x1134facb */
  if (!C.zf) goto L_1134facb;
  /* 1134fac7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134fac9 jmp 0x1134fb17 */
  goto L_1134fb17;
L_1134facb:;
  /* 1134facb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1134face mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1134fad1 jmp 0x1134fb0b */
  goto L_1134fb0b;
L_1134fad3:;
  /* 1134fad3 push 0x1136b718 */
  push32((uint32_t)(0x1136b718u));
  /* 1134fad8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134fadb push eax */
  push32((uint32_t)(EAX));
  /* 1134fadc call 0x1134efe0 */
  push32(0x1134fae1u); f_1134efe0();
  /* 1134fae1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fae4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134fae6 jne 0x1134fb0b */
  if (!C.zf) goto L_1134fb0b;
  /* 1134fae8 push 8 */
  push32((uint32_t)(0x8u));
  /* 1134faea lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1134faed push ecx */
  push32((uint32_t)(ECX));
  /* 1134faee push 0xb */
  push32((uint32_t)(0xbu));
  /* 1134faf0 mov edx, dword ptr [0x1136f6f0] */
  EDX = (r32((uint32_t)(0x1136f6f0)));
  /* 1134faf6 push edx */
  push32((uint32_t)(EDX));
  /* 1134faf7 call dword ptr [0x1136f6f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136f6f4))), 0x1134fafdu);
  /* 1134fafd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134faff jne 0x1134fb05 */
  if (!C.zf) goto L_1134fb05;
  /* 1134fb01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134fb03 jmp 0x1134fb17 */
  goto L_1134fb17;
L_1134fb05:;
  /* 1134fb05 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1134fb08 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1134fb0b:;
  /* 1134fb0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134fb0e push ecx */
  push32((uint32_t)(ECX));
  /* 1134fb0f call 0x11351c00 */
  push32(0x1134fb14u); f_11351c00();
  /* 1134fb14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134fb17:;
  /* 1134fb17 mov esp, ebp */
  ESP = (EBP);
  /* 1134fb19 pop ebp */
  EBP = (pop32());
  /* 1134fb1a ret  */
  ESPCHK(0x1134fa80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb20 @ 0x1134fb20 (79 bytes, 26 insns) */
void f_1134fb20(void) {
  FTRACE(0x1134fb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134fb20 push ebp */
  push32((uint32_t)(EBP));
  /* 1134fb21 mov ebp, esp */
  EBP = (ESP);
  /* 1134fb23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134fb26 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1134fb2a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1134fb2e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1134fb35 jmp 0x1134fb40 */
  goto L_1134fb40;
L_1134fb37:;
  /* 1134fb37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134fb3a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fb3d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1134fb40:;
  /* 1134fb40 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fb44 jae 0x1134fb66 */
  if (!C.cf) goto L_1134fb66;
  /* 1134fb46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134fb49 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1134fb4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134fb52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134fb54 mov cx, word ptr [eax*2 + 0x1136e9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1136e9c4)));
  /* 1134fb5c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fb5e jne 0x1134fb64 */
  if (!C.zf) goto L_1134fb64;
  /* 1134fb60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134fb62 jmp 0x1134fb6b */
  goto L_1134fb6b;
L_1134fb64:;
  /* 1134fb64 jmp 0x1134fb37 */
  goto L_1134fb37;
L_1134fb66:;
  /* 1134fb66 mov eax, 1 */
  EAX = (0x1u);
L_1134fb6b:;
  /* 1134fb6b mov esp, ebp */
  ESP = (EBP);
  /* 1134fb6d pop ebp */
  EBP = (pop32());
  /* 1134fb6e ret  */
  ESPCHK(0x1134fb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb70 @ 0x1134fb70 (135 bytes, 48 insns) */
void f_1134fb70(void) {
  FTRACE(0x1134fb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134fb70 push ebp */
  push32((uint32_t)(EBP));
  /* 1134fb71 mov ebp, esp */
  EBP = (ESP);
  /* 1134fb73 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134fb76 push esi */
  push32((uint32_t)(ESI));
  /* 1134fb77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134fb7a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134fb7f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134fb84 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134fb89 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1134fb8c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134fb91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134fb94 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1134fb96 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 1134fb99 push ecx */
  push32((uint32_t)(ECX));
  /* 1134fb9a push 1 */
  push32((uint32_t)(0x1u));
  /* 1134fb9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134fb9f push edx */
  push32((uint32_t)(EDX));
  /* 1134fba0 call dword ptr [0x1136f6f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136f6f4))), 0x1134fba6u);
  /* 1134fba6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134fba8 jne 0x1134fbae */
  if (!C.zf) goto L_1134fbae;
  /* 1134fbaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134fbac jmp 0x1134fbf2 */
  goto L_1134fbf2;
L_1134fbae:;
  /* 1134fbae lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 1134fbb1 push eax */
  push32((uint32_t)(EAX));
  /* 1134fbb2 call 0x1134fde0 */
  push32(0x1134fbb7u); f_1134fde0();
  /* 1134fbb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fbba cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fbbd je 0x1134fbed */
  if (C.zf) goto L_1134fbed;
  /* 1134fbbf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fbc3 je 0x1134fbed */
  if (C.zf) goto L_1134fbed;
  /* 1134fbc5 mov ecx, dword ptr [0x1136f6e4] */
  ECX = (r32((uint32_t)(0x1136f6e4)));
  /* 1134fbcb push ecx */
  push32((uint32_t)(ECX));
  /* 1134fbcc call 0x1134fe60 */
  push32(0x1134fbd1u); f_1134fe60();
  /* 1134fbd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fbd4 mov esi, eax */
  ESI = (EAX);
  /* 1134fbd6 mov edx, dword ptr [0x1136f6e4] */
  EDX = (r32((uint32_t)(0x1136f6e4)));
  /* 1134fbdc push edx */
  push32((uint32_t)(EDX));
  /* 1134fbdd call 0x11346180 */
  push32(0x1134fbe2u); f_11346180();
  /* 1134fbe2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fbe5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fbe7 jne 0x1134fbed */
  if (!C.zf) goto L_1134fbed;
  /* 1134fbe9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134fbeb jmp 0x1134fbf2 */
  goto L_1134fbf2;
L_1134fbed:;
  /* 1134fbed mov eax, 1 */
  EAX = (0x1u);
L_1134fbf2:;
  /* 1134fbf2 pop esi */
  ESI = (pop32());
  /* 1134fbf3 mov esp, ebp */
  ESP = (EBP);
  /* 1134fbf5 pop ebp */
  EBP = (pop32());
  /* 1134fbf6 ret  */
  ESPCHK(0x1134fb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc00 @ 0x1134fc00 (77 bytes, 18 insns) */
void f_1134fc00(void) {
  FTRACE(0x1134fc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134fc00 push ebp */
  push32((uint32_t)(EBP));
  /* 1134fc01 mov ebp, esp */
  EBP = (ESP);
  /* 1134fc03 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134fc09 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 1134fc13 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 1134fc19 push eax */
  push32((uint32_t)(EAX));
  /* 1134fc1a call dword ptr [0x113712ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712ac))), 0x1134fc20u);
  /* 1134fc20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134fc22 je 0x1134fc39 */
  if (C.zf) goto L_1134fc39;
  /* 1134fc24 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fc2b jne 0x1134fc39 */
  if (!C.zf) goto L_1134fc39;
  /* 1134fc2d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 1134fc37 jmp 0x1134fc43 */
  goto L_1134fc43;
L_1134fc39:;
  /* 1134fc39 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_1134fc43:;
  /* 1134fc43 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 1134fc49 mov esp, ebp */
  ESP = (EBP);
  /* 1134fc4b pop ebp */
  EBP = (pop32());
  /* 1134fc4c ret  */
  ESPCHK(0x1134fc00u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x1134fc50 (388 bytes, 118 insns) */
void f_1134fc50(void) {
  FTRACE(0x1134fc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134fc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1134fc51 mov ebp, esp */
  EBP = (ESP);
  /* 1134fc53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134fc56 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1134fc5d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 1134fc64 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1134fc6b:;
  /* 1134fc6b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134fc6e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fc71 jg 0x1134fdb8 */
  if ((!C.zf&&C.sf==C.of)) goto L_1134fdb8;
  /* 1134fc77 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134fc7a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fc7d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1134fc7e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134fc80 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1134fc82 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1134fc85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134fc88 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134fc8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134fc8e cmp edx, dword ptr [ecx + 0x1136e520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1136e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fc94 jne 0x1134fd8e */
  if (!C.zf) goto L_1134fd8e;
  /* 1134fc9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134fc9d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1134fca0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fca4 ja 0x1134fcc7 */
  if ((!C.cf&&!C.zf)) goto L_1134fcc7;
  /* 1134fca6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fcaa je 0x1134fd39 */
  if (C.zf) goto L_1134fd39;
  /* 1134fcb0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fcb4 je 0x1134fce4 */
  if (C.zf) goto L_1134fce4;
  /* 1134fcb6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fcba je 0x1134fd06 */
  if (C.zf) goto L_1134fd06;
  /* 1134fcbc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fcc0 je 0x1134fd28 */
  if (C.zf) goto L_1134fd28;
  /* 1134fcc2 jmp 0x1134fd58 */
  goto L_1134fd58;
L_1134fcc7:;
  /* 1134fcc7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fcce je 0x1134fcf5 */
  if (C.zf) goto L_1134fcf5;
  /* 1134fcd0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fcd7 je 0x1134fd17 */
  if (C.zf) goto L_1134fd17;
  /* 1134fcd9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fce0 je 0x1134fd4a */
  if (C.zf) goto L_1134fd4a;
  /* 1134fce2 jmp 0x1134fd58 */
  goto L_1134fd58;
L_1134fce4:;
  /* 1134fce4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134fce7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134fcea add ecx, 0x1136e524 */
  { uint32_t _a=(ECX),_b=(0x1136e524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fcf0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134fcf3 jmp 0x1134fd58 */
  goto L_1134fd58;
L_1134fcf5:;
  /* 1134fcf5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134fcf8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134fcfb mov eax, dword ptr [edx + 0x1136e52c] */
  EAX = (r32((uint32_t)(EDX + 0x1136e52c)));
  /* 1134fd01 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1134fd04 jmp 0x1134fd58 */
  goto L_1134fd58;
L_1134fd06:;
  /* 1134fd06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134fd09 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134fd0c add ecx, 0x1136e530 */
  { uint32_t _a=(ECX),_b=(0x1136e530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fd12 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134fd15 jmp 0x1134fd58 */
  goto L_1134fd58;
L_1134fd17:;
  /* 1134fd17 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134fd1a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134fd1d mov eax, dword ptr [edx + 0x1136e534] */
  EAX = (r32((uint32_t)(EDX + 0x1136e534)));
  /* 1134fd23 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1134fd26 jmp 0x1134fd58 */
  goto L_1134fd58;
L_1134fd28:;
  /* 1134fd28 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134fd2b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134fd2e add ecx, 0x1136e538 */
  { uint32_t _a=(ECX),_b=(0x1136e538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fd34 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134fd37 jmp 0x1134fd58 */
  goto L_1134fd58;
L_1134fd39:;
  /* 1134fd39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134fd3c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134fd3f add edx, 0x1136e53c */
  { uint32_t _a=(EDX),_b=(0x1136e53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fd45 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1134fd48 jmp 0x1134fd58 */
  goto L_1134fd58;
L_1134fd4a:;
  /* 1134fd4a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134fd4d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134fd50 add eax, 0x1136e544 */
  { uint32_t _a=(EAX),_b=(0x1136e544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fd55 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1134fd58:;
  /* 1134fd58 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fd5c je 0x1134fd64 */
  if (C.zf) goto L_1134fd64;
  /* 1134fd5e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fd62 jge 0x1134fd66 */
  if ((C.sf==C.of)) goto L_1134fd66;
L_1134fd64:;
  /* 1134fd64 jmp 0x1134fdb8 */
  goto L_1134fdb8;
L_1134fd66:;
  /* 1134fd66 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134fd69 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134fd6c push ecx */
  push32((uint32_t)(ECX));
  /* 1134fd6d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134fd70 push edx */
  push32((uint32_t)(EDX));
  /* 1134fd71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134fd74 push eax */
  push32((uint32_t)(EAX));
  /* 1134fd75 call 0x11346b70 */
  push32(0x1134fd7au); f_11346b70();
  /* 1134fd7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fd7d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134fd80 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fd83 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 1134fd87 mov eax, 1 */
  EAX = (0x1u);
  /* 1134fd8c jmp 0x1134fdce */
  goto L_1134fdce;
L_1134fd8e:;
  /* 1134fd8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134fd91 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134fd94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134fd97 cmp eax, dword ptr [edx + 0x1136e520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1136e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fd9d jae 0x1134fdaa */
  if (!C.cf) goto L_1134fdaa;
  /* 1134fd9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134fda2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134fda5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1134fda8 jmp 0x1134fdb3 */
  goto L_1134fdb3;
L_1134fdaa:;
  /* 1134fdaa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134fdad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fdb0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1134fdb3:;
  /* 1134fdb3 jmp 0x1134fc6b */
  goto L_1134fc6b;
L_1134fdb8:;
  /* 1134fdb8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134fdbb push eax */
  push32((uint32_t)(EAX));
  /* 1134fdbc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134fdbf push ecx */
  push32((uint32_t)(ECX));
  /* 1134fdc0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134fdc3 push edx */
  push32((uint32_t)(EDX));
  /* 1134fdc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134fdc7 push eax */
  push32((uint32_t)(EAX));
  /* 1134fdc8 call dword ptr [0x113712b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712b8))), 0x1134fdceu);
L_1134fdce:;
  /* 1134fdce mov esp, ebp */
  ESP = (EBP);
  /* 1134fdd0 pop ebp */
  EBP = (pop32());
  /* 1134fdd1 ret 0x10 */
  ESPCHK(0x1134fc50u, _esp0);
  ESP += 20; return;
}

/* FUN_1000fde0 @ 0x1134fde0 (118 bytes, 42 insns) */
void f_1134fde0(void) {
  FTRACE(0x1134fde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134fde0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134fde1 mov ebp, esp */
  EBP = (ESP);
  /* 1134fde3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134fde6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1134fded:;
  /* 1134fded mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134fdf0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1134fdf2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 1134fdf5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1134fdf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134fdfc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fdff mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1134fe02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134fe04 je 0x1134fe4f */
  if (C.zf) goto L_1134fe4f;
  /* 1134fe06 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1134fe0a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fe0d jl 0x1134fe22 */
  if ((C.sf!=C.of)) goto L_1134fe22;
  /* 1134fe0f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1134fe13 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fe16 jg 0x1134fe22 */
  if ((!C.zf&&C.sf==C.of)) goto L_1134fe22;
  /* 1134fe18 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1134fe1b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1134fe1d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1134fe20 jmp 0x1134fe3c */
  goto L_1134fe3c;
L_1134fe22:;
  /* 1134fe22 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1134fe26 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fe29 jl 0x1134fe3c */
  if ((C.sf!=C.of)) goto L_1134fe3c;
  /* 1134fe2b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1134fe2f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fe32 jg 0x1134fe3c */
  if ((!C.zf&&C.sf==C.of)) goto L_1134fe3c;
  /* 1134fe34 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1134fe37 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1134fe39 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1134fe3c:;
  /* 1134fe3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134fe3f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1134fe42 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1134fe46 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1134fe4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134fe4d jmp 0x1134fded */
  goto L_1134fded;
L_1134fe4f:;
  /* 1134fe4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134fe52 mov esp, ebp */
  ESP = (EBP);
  /* 1134fe54 pop ebp */
  EBP = (pop32());
  /* 1134fe55 ret  */
  ESPCHK(0x1134fde0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x1134fe60 (101 bytes, 36 insns) */
void f_1134fe60(void) {
  FTRACE(0x1134fe60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134fe60 push ebp */
  push32((uint32_t)(EBP));
  /* 1134fe61 mov ebp, esp */
  EBP = (ESP);
  /* 1134fe63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134fe66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1134fe6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134fe70 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1134fe72 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 1134fe75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134fe78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fe7b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1134fe7e:;
  /* 1134fe7e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1134fe82 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fe85 jl 0x1134fe90 */
  if ((C.sf!=C.of)) goto L_1134fe90;
  /* 1134fe87 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1134fe8b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fe8e jle 0x1134fea2 */
  if ((C.zf||C.sf!=C.of)) goto L_1134fea2;
L_1134fe90:;
  /* 1134fe90 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1134fe94 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fe97 jl 0x1134febe */
  if ((C.sf!=C.of)) goto L_1134febe;
  /* 1134fe99 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1134fe9d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fea0 jg 0x1134febe */
  if ((!C.zf&&C.sf==C.of)) goto L_1134febe;
L_1134fea2:;
  /* 1134fea2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134fea5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134fea8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1134feab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134feae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1134feb0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 1134feb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134feb6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134feb9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1134febc jmp 0x1134fe7e */
  goto L_1134fe7e;
L_1134febe:;
  /* 1134febe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134fec1 mov esp, ebp */
  ESP = (EBP);
  /* 1134fec3 pop ebp */
  EBP = (pop32());
  /* 1134fec4 ret  */
  ESPCHK(0x1134fe60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fed0 @ 0x1134fed0 (122 bytes, 39 insns) */
void f_1134fed0(void) {
  FTRACE(0x1134fed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134fed0 push ebp */
  push32((uint32_t)(EBP));
  /* 1134fed1 mov ebp, esp */
  EBP = (ESP);
  /* 1134fed3 push ecx */
  push32((uint32_t)(ECX));
  /* 1134fed4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134fed7 cmp eax, dword ptr [0x11370f7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11370f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134fedd jae 0x1134ff01 */
  if (!C.cf) goto L_1134ff01;
  /* 1134fedf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134fee2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1134fee5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134fee8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1134feeb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134feee mov eax, dword ptr [ecx*4 + 0x11370e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11370e40)));
  /* 1134fef5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1134fefa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1134fefd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134feff jne 0x1134ff1c */
  if (!C.zf) goto L_1134ff1c;
L_1134ff01:;
  /* 1134ff01 call 0x1134b220 */
  push32(0x1134ff06u); f_1134b220();
  /* 1134ff06 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1134ff0c call 0x1134b230 */
  push32(0x1134ff11u); f_1134b230();
  /* 1134ff11 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1134ff17 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134ff1a jmp 0x1134ff46 */
  goto L_1134ff46;
L_1134ff1c:;
  /* 1134ff1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ff1f push edx */
  push32((uint32_t)(EDX));
  /* 1134ff20 call 0x1134ca40 */
  push32(0x1134ff25u); f_1134ca40();
  /* 1134ff25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ff28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ff2b push eax */
  push32((uint32_t)(EAX));
  /* 1134ff2c call 0x1134ff50 */
  push32(0x1134ff31u); f_1134ff50();
  /* 1134ff31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ff34 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134ff37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ff3a push ecx */
  push32((uint32_t)(ECX));
  /* 1134ff3b call 0x1134cad0 */
  push32(0x1134ff40u); f_1134cad0();
  /* 1134ff40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ff43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1134ff46:;
  /* 1134ff46 mov esp, ebp */
  ESP = (EBP);
  /* 1134ff48 pop ebp */
  EBP = (pop32());
  /* 1134ff49 ret  */
  ESPCHK(0x1134fed0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x1134ff50 (170 bytes, 59 insns) */
void f_1134ff50(void) {
  FTRACE(0x1134ff50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134ff50 push ebp */
  push32((uint32_t)(EBP));
  /* 1134ff51 mov ebp, esp */
  EBP = (ESP);
  /* 1134ff53 push ecx */
  push32((uint32_t)(ECX));
  /* 1134ff54 push esi */
  push32((uint32_t)(ESI));
  /* 1134ff55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ff58 push eax */
  push32((uint32_t)(EAX));
  /* 1134ff59 call 0x1134c8c0 */
  push32(0x1134ff5eu); f_1134c8c0();
  /* 1134ff5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ff61 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ff64 je 0x1134ffa3 */
  if (C.zf) goto L_1134ffa3;
  /* 1134ff66 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ff6a je 0x1134ff72 */
  if (C.zf) goto L_1134ff72;
  /* 1134ff6c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ff70 jne 0x1134ff8c */
  if (!C.zf) goto L_1134ff8c;
L_1134ff72:;
  /* 1134ff72 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134ff74 call 0x1134c8c0 */
  push32(0x1134ff79u); f_1134c8c0();
  /* 1134ff79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ff7c mov esi, eax */
  ESI = (EAX);
  /* 1134ff7e push 2 */
  push32((uint32_t)(0x2u));
  /* 1134ff80 call 0x1134c8c0 */
  push32(0x1134ff85u); f_1134c8c0();
  /* 1134ff85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ff88 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ff8a je 0x1134ffa3 */
  if (C.zf) goto L_1134ffa3;
L_1134ff8c:;
  /* 1134ff8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ff8f push ecx */
  push32((uint32_t)(ECX));
  /* 1134ff90 call 0x1134c8c0 */
  push32(0x1134ff95u); f_1134c8c0();
  /* 1134ff95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ff98 push eax */
  push32((uint32_t)(EAX));
  /* 1134ff99 call dword ptr [0x113712a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712a8))), 0x1134ff9fu);
  /* 1134ff9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134ffa1 je 0x1134ffac */
  if (C.zf) goto L_1134ffac;
L_1134ffa3:;
  /* 1134ffa3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1134ffaa jmp 0x1134ffb5 */
  goto L_1134ffb5;
L_1134ffac:;
  /* 1134ffac call dword ptr [0x11371364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371364))), 0x1134ffb2u);
  /* 1134ffb2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1134ffb5:;
  /* 1134ffb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ffb8 push edx */
  push32((uint32_t)(EDX));
  /* 1134ffb9 call 0x1134c7e0 */
  push32(0x1134ffbeu); f_1134c7e0();
  /* 1134ffbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ffc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ffc4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1134ffc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134ffca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1134ffcd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134ffd0 mov edx, dword ptr [eax*4 + 0x11370e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11370e40)));
  /* 1134ffd7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1134ffdc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134ffe0 je 0x1134fff3 */
  if (C.zf) goto L_1134fff3;
  /* 1134ffe2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134ffe5 push eax */
  push32((uint32_t)(EAX));
  /* 1134ffe6 call 0x1134b180 */
  push32(0x1134ffebu); f_1134b180();
  /* 1134ffeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134ffee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134fff1 jmp 0x1134fff5 */
  goto L_1134fff5;
L_1134fff3:;
  /* 1134fff3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1134fff5:;
  /* 1134fff5 pop esi */
  ESI = (pop32());
  /* 1134fff6 mov esp, ebp */
  ESP = (EBP);
  /* 1134fff8 pop ebp */
  EBP = (pop32());
  /* 1134fff9 ret  */
  ESPCHK(0x1134ff50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010000 @ 0x11350000 (146 bytes, 52 insns) */
void f_11350000(void) {
  FTRACE(0x11350000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11350000 push ebp */
  push32((uint32_t)(EBP));
  /* 11350001 mov ebp, esp */
  EBP = (ESP);
  /* 11350003 push ebx */
  push32((uint32_t)(EBX));
  /* 11350004 push esi */
  push32((uint32_t)(ESI));
  /* 11350005 push edi */
  push32((uint32_t)(EDI));
L_11350006:;
  /* 11350006 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135000a jne 0x1135002a */
  if (!C.zf) goto L_1135002a;
  /* 1135000c push 0x1136b058 */
  push32((uint32_t)(0x1136b058u));
  /* 11350011 push 0 */
  push32((uint32_t)(0x0u));
  /* 11350013 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11350015 push 0x1136b720 */
  push32((uint32_t)(0x1136b720u));
  /* 1135001a push 2 */
  push32((uint32_t)(0x2u));
  /* 1135001c call 0x11342410 */
  push32(0x11350021u); f_11342410();
  /* 11350021 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350024 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350027 jne 0x1135002a */
  if (!C.zf) goto L_1135002a;
  /* 11350029 int3  */
  x86_unimpl("int3 @ 0x11350029");
L_1135002a:;
  /* 1135002a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1135002c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1135002e jne 0x11350006 */
  if (!C.zf) goto L_11350006;
  /* 11350030 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11350033 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11350036 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1135003c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1135003e je 0x1135008d */
  if (C.zf) goto L_1135008d;
  /* 11350040 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11350043 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11350046 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11350049 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1135004b je 0x1135008d */
  if (C.zf) goto L_1135008d;
  /* 1135004d push 2 */
  push32((uint32_t)(0x2u));
  /* 1135004f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11350052 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11350055 push eax */
  push32((uint32_t)(EAX));
  /* 11350056 call 0x11343de0 */
  push32(0x1135005bu); f_11343de0();
  /* 1135005b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1135005e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11350061 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11350064 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1135006a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1135006d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11350070 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11350073 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11350079 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1135007c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11350083 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11350086 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1135008d:;
  /* 1135008d pop edi */
  EDI = (pop32());
  /* 1135008e pop esi */
  ESI = (pop32());
  /* 1135008f pop ebx */
  EBX = (pop32());
  /* 11350090 pop ebp */
  EBP = (pop32());
  /* 11350091 ret  */
  ESPCHK(0x11350000u, _esp0);
  ESP += 4; return;
}

/* FUN_100100a0 @ 0x113500a0 (289 bytes, 97 insns) */
void f_113500a0(void) {
  FTRACE(0x113500a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113500a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113500a1 mov ebp, esp */
  EBP = (ESP);
  /* 113500a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113500a6 push esi */
  push32((uint32_t)(ESI));
  /* 113500a7 mov eax, dword ptr [0x1136ec98] */
  EAX = (r32((uint32_t)(0x1136ec98)));
  /* 113500ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113500af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113500b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113500bd jmp 0x113500c8 */
  goto L_113500c8;
L_113500bf:;
  /* 113500bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113500c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113500c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_113500c8:;
  /* 113500c8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113500cc jae 0x11350101 */
  if (!C.cf) goto L_11350101;
  /* 113500ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113500d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113500d4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 113500d7 push ecx */
  push32((uint32_t)(ECX));
  /* 113500d8 call 0x11346180 */
  push32(0x113500ddu); f_11346180();
  /* 113500dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113500e0 mov esi, eax */
  ESI = (EAX);
  /* 113500e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113500e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113500e8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 113500ec push ecx */
  push32((uint32_t)(ECX));
  /* 113500ed call 0x11346180 */
  push32(0x113500f2u); f_11346180();
  /* 113500f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113500f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113500f8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 113500fc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113500ff jmp 0x113500bf */
  goto L_113500bf;
L_11350101:;
  /* 11350101 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11350104 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350107 push eax */
  push32((uint32_t)(EAX));
  /* 11350108 call 0x11343330 */
  push32(0x1135010du); f_11343330();
  /* 1135010d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350110 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11350113 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350117 je 0x113501b9 */
  if (C.zf) goto L_113501b9;
  /* 1135011d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11350120 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11350123 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1135012a jmp 0x11350135 */
  goto L_11350135;
L_1135012c:;
  /* 1135012c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1135012f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350132 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11350135:;
  /* 11350135 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350139 jae 0x113501aa */
  if (!C.cf) goto L_113501aa;
  /* 1135013b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1135013e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11350141 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11350144 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350147 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1135014a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1135014d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11350150 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11350153 push ecx */
  push32((uint32_t)(ECX));
  /* 11350154 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11350157 push edx */
  push32((uint32_t)(EDX));
  /* 11350158 call 0x11346300 */
  push32(0x1135015du); f_11346300();
  /* 1135015d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350160 push eax */
  push32((uint32_t)(EAX));
  /* 11350161 call 0x11346180 */
  push32(0x11350166u); f_11346180();
  /* 11350166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350169 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1135016c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135016e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11350171 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11350174 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11350177 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1135017a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135017d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11350180 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11350183 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11350186 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1135018a push eax */
  push32((uint32_t)(EAX));
  /* 1135018b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1135018e push ecx */
  push32((uint32_t)(ECX));
  /* 1135018f call 0x11346300 */
  push32(0x11350194u); f_11346300();
  /* 11350194 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350197 push eax */
  push32((uint32_t)(EAX));
  /* 11350198 call 0x11346180 */
  push32(0x1135019du); f_11346180();
  /* 1135019d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113501a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113501a3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113501a5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113501a8 jmp 0x1135012c */
  goto L_1135012c;
L_113501aa:;
  /* 113501aa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113501ad mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 113501b0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113501b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113501b6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_113501b9:;
  /* 113501b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113501bc pop esi */
  ESI = (pop32());
  /* 113501bd mov esp, ebp */
  ESP = (EBP);
  /* 113501bf pop ebp */
  EBP = (pop32());
  /* 113501c0 ret  */
  ESPCHK(0x113500a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100101d0 @ 0x113501d0 (291 bytes, 97 insns) */
void f_113501d0(void) {
  FTRACE(0x113501d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113501d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113501d1 mov ebp, esp */
  EBP = (ESP);
  /* 113501d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113501d6 push esi */
  push32((uint32_t)(ESI));
  /* 113501d7 mov eax, dword ptr [0x1136ec98] */
  EAX = (r32((uint32_t)(0x1136ec98)));
  /* 113501dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113501df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113501e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113501ed jmp 0x113501f8 */
  goto L_113501f8;
L_113501ef:;
  /* 113501ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113501f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113501f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_113501f8:;
  /* 113501f8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113501fc jae 0x11350232 */
  if (!C.cf) goto L_11350232;
  /* 113501fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11350201 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11350204 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11350208 push ecx */
  push32((uint32_t)(ECX));
  /* 11350209 call 0x11346180 */
  push32(0x1135020eu); f_11346180();
  /* 1135020e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350211 mov esi, eax */
  ESI = (EAX);
  /* 11350213 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11350216 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11350219 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1135021d push ecx */
  push32((uint32_t)(ECX));
  /* 1135021e call 0x11346180 */
  push32(0x11350223u); f_11346180();
  /* 11350223 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350226 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350229 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1135022d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11350230 jmp 0x113501ef */
  goto L_113501ef;
L_11350232:;
  /* 11350232 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11350235 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350238 push eax */
  push32((uint32_t)(EAX));
  /* 11350239 call 0x11343330 */
  push32(0x1135023eu); f_11343330();
  /* 1135023e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350241 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11350244 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350248 je 0x113502eb */
  if (C.zf) goto L_113502eb;
  /* 1135024e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11350251 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11350254 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1135025b jmp 0x11350266 */
  goto L_11350266;
L_1135025d:;
  /* 1135025d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11350260 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350263 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11350266:;
  /* 11350266 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135026a jae 0x113502dc */
  if (!C.cf) goto L_113502dc;
  /* 1135026c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1135026f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11350272 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11350275 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350278 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1135027b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1135027e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11350281 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11350285 push ecx */
  push32((uint32_t)(ECX));
  /* 11350286 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11350289 push edx */
  push32((uint32_t)(EDX));
  /* 1135028a call 0x11346300 */
  push32(0x1135028fu); f_11346300();
  /* 1135028f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350292 push eax */
  push32((uint32_t)(EAX));
  /* 11350293 call 0x11346180 */
  push32(0x11350298u); f_11346180();
  /* 11350298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1135029b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1135029e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113502a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113502a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113502a6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 113502a9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113502ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113502af mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113502b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113502b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113502b8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 113502bc push eax */
  push32((uint32_t)(EAX));
  /* 113502bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113502c0 push ecx */
  push32((uint32_t)(ECX));
  /* 113502c1 call 0x11346300 */
  push32(0x113502c6u); f_11346300();
  /* 113502c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113502c9 push eax */
  push32((uint32_t)(EAX));
  /* 113502ca call 0x11346180 */
  push32(0x113502cfu); f_11346180();
  /* 113502cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113502d2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113502d5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113502d7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113502da jmp 0x1135025d */
  goto L_1135025d;
L_113502dc:;
  /* 113502dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113502df mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 113502e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113502e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113502e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_113502eb:;
  /* 113502eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113502ee pop esi */
  ESI = (pop32());
  /* 113502ef mov esp, ebp */
  ESP = (EBP);
  /* 113502f1 pop ebp */
  EBP = (pop32());
  /* 113502f2 ret  */
  ESPCHK(0x113501d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010300 @ 0x11350300 (878 bytes, 273 insns) */
void f_11350300(void) {
  FTRACE(0x11350300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11350300 push ebp */
  push32((uint32_t)(EBP));
  /* 11350301 mov ebp, esp */
  EBP = (ESP);
  /* 11350303 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11350306 push esi */
  push32((uint32_t)(ESI));
  /* 11350307 mov eax, dword ptr [0x1136ec98] */
  EAX = (r32((uint32_t)(0x1136ec98)));
  /* 1135030c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1135030f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11350316 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1135031d jmp 0x11350328 */
  goto L_11350328;
L_1135031f:;
  /* 1135031f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11350322 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350325 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11350328:;
  /* 11350328 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135032c jae 0x11350361 */
  if (!C.cf) goto L_11350361;
  /* 1135032e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11350331 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11350334 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11350337 push ecx */
  push32((uint32_t)(ECX));
  /* 11350338 call 0x11346180 */
  push32(0x1135033du); f_11346180();
  /* 1135033d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350340 mov esi, eax */
  ESI = (EAX);
  /* 11350342 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11350345 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11350348 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1135034c push ecx */
  push32((uint32_t)(ECX));
  /* 1135034d call 0x11346180 */
  push32(0x11350352u); f_11346180();
  /* 11350352 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350355 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350358 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1135035c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1135035f jmp 0x1135031f */
  goto L_1135031f;
L_11350361:;
  /* 11350361 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11350368 jmp 0x11350373 */
  goto L_11350373;
L_1135036a:;
  /* 1135036a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1135036d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350370 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11350373:;
  /* 11350373 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350377 jae 0x113503ad */
  if (!C.cf) goto L_113503ad;
  /* 11350379 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1135037c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1135037f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11350383 push eax */
  push32((uint32_t)(EAX));
  /* 11350384 call 0x11346180 */
  push32(0x11350389u); f_11346180();
  /* 11350389 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1135038c mov esi, eax */
  ESI = (EAX);
  /* 1135038e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11350391 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11350394 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11350398 push eax */
  push32((uint32_t)(EAX));
  /* 11350399 call 0x11346180 */
  push32(0x1135039eu); f_11346180();
  /* 1135039e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113503a1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113503a4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 113503a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113503ab jmp 0x1135036a */
  goto L_1135036a;
L_113503ad:;
  /* 113503ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113503b0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 113503b6 push eax */
  push32((uint32_t)(EAX));
  /* 113503b7 call 0x11346180 */
  push32(0x113503bcu); f_11346180();
  /* 113503bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113503bf mov esi, eax */
  ESI = (EAX);
  /* 113503c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113503c4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 113503ca push edx */
  push32((uint32_t)(EDX));
  /* 113503cb call 0x11346180 */
  push32(0x113503d0u); f_11346180();
  /* 113503d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113503d3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113503d6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 113503da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113503dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113503e0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 113503e6 push edx */
  push32((uint32_t)(EDX));
  /* 113503e7 call 0x11346180 */
  push32(0x113503ecu); f_11346180();
  /* 113503ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113503ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113503f2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 113503f6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113503f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113503fc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11350402 push ecx */
  push32((uint32_t)(ECX));
  /* 11350403 call 0x11346180 */
  push32(0x11350408u); f_11346180();
  /* 11350408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1135040b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1135040e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11350412 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11350415 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11350418 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1135041e push edx */
  push32((uint32_t)(EDX));
  /* 1135041f call 0x11346180 */
  push32(0x11350424u); f_11346180();
  /* 11350424 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350427 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1135042a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1135042e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11350431 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11350434 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350439 push eax */
  push32((uint32_t)(EAX));
  /* 1135043a call 0x11343330 */
  push32(0x1135043fu); f_11343330();
  /* 1135043f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350442 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11350445 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350449 je 0x11350666 */
  if (C.zf) goto L_11350666;
  /* 1135044f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11350452 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11350455 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11350458 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135045e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11350461 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11350466 mov eax, dword ptr [0x1136ec98] */
  EAX = (r32((uint32_t)(0x1136ec98)));
  /* 1135046b push eax */
  push32((uint32_t)(EAX));
  /* 1135046c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1135046f push ecx */
  push32((uint32_t)(ECX));
  /* 11350470 call 0x11349c30 */
  push32(0x11350475u); f_11349c30();
  /* 11350475 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350478 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1135047f jmp 0x1135048a */
  goto L_1135048a;
L_11350481:;
  /* 11350481 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11350484 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350487 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1135048a:;
  /* 1135048a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135048e jae 0x113504fe */
  if (!C.cf) goto L_113504fe;
  /* 11350490 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11350493 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11350496 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11350499 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1135049c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1135049f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113504a2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 113504a5 push edx */
  push32((uint32_t)(EDX));
  /* 113504a6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113504a9 push eax */
  push32((uint32_t)(EAX));
  /* 113504aa call 0x11346300 */
  push32(0x113504afu); f_11346300();
  /* 113504af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113504b2 push eax */
  push32((uint32_t)(EAX));
  /* 113504b3 call 0x11346180 */
  push32(0x113504b8u); f_11346180();
  /* 113504b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113504bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113504be lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 113504c2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113504c5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113504c8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113504cb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113504ce mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 113504d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113504d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113504d8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 113504dc push edx */
  push32((uint32_t)(EDX));
  /* 113504dd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113504e0 push eax */
  push32((uint32_t)(EAX));
  /* 113504e1 call 0x11346300 */
  push32(0x113504e6u); f_11346300();
  /* 113504e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113504e9 push eax */
  push32((uint32_t)(EAX));
  /* 113504ea call 0x11346180 */
  push32(0x113504efu); f_11346180();
  /* 113504ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113504f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113504f5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 113504f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113504fc jmp 0x11350481 */
  goto L_11350481;
L_113504fe:;
  /* 113504fe mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11350505 jmp 0x11350510 */
  goto L_11350510;
L_11350507:;
  /* 11350507 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1135050a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135050d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11350510:;
  /* 11350510 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350514 jae 0x11350586 */
  if (!C.cf) goto L_11350586;
  /* 11350516 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11350519 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1135051c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1135051f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11350523 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11350526 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11350529 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1135052d push eax */
  push32((uint32_t)(EAX));
  /* 1135052e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11350531 push ecx */
  push32((uint32_t)(ECX));
  /* 11350532 call 0x11346300 */
  push32(0x11350537u); f_11346300();
  /* 11350537 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1135053a push eax */
  push32((uint32_t)(EAX));
  /* 1135053b call 0x11346180 */
  push32(0x11350540u); f_11346180();
  /* 11350540 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350543 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11350546 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1135054a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1135054d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11350550 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11350553 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11350556 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1135055a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1135055d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11350560 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11350564 push eax */
  push32((uint32_t)(EAX));
  /* 11350565 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11350568 push ecx */
  push32((uint32_t)(ECX));
  /* 11350569 call 0x11346300 */
  push32(0x1135056eu); f_11346300();
  /* 1135056e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350571 push eax */
  push32((uint32_t)(EAX));
  /* 11350572 call 0x11346180 */
  push32(0x11350577u); f_11346180();
  /* 11350577 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1135057a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1135057d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11350581 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11350584 jmp 0x11350507 */
  goto L_11350507;
L_11350586:;
  /* 11350586 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11350589 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1135058c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11350592 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11350595 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1135059b push ecx */
  push32((uint32_t)(ECX));
  /* 1135059c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1135059f push edx */
  push32((uint32_t)(EDX));
  /* 113505a0 call 0x11346300 */
  push32(0x113505a5u); f_11346300();
  /* 113505a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113505a8 push eax */
  push32((uint32_t)(EAX));
  /* 113505a9 call 0x11346180 */
  push32(0x113505aeu); f_11346180();
  /* 113505ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113505b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113505b4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 113505b8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113505bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113505be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113505c1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 113505c7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113505ca mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 113505d0 push eax */
  push32((uint32_t)(EAX));
  /* 113505d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113505d4 push ecx */
  push32((uint32_t)(ECX));
  /* 113505d5 call 0x11346300 */
  push32(0x113505dau); f_11346300();
  /* 113505da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113505dd push eax */
  push32((uint32_t)(EAX));
  /* 113505de call 0x11346180 */
  push32(0x113505e3u); f_11346180();
  /* 113505e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113505e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113505e9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 113505ed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113505f0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113505f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113505f6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 113505fc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113505ff mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11350605 push ecx */
  push32((uint32_t)(ECX));
  /* 11350606 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11350609 push edx */
  push32((uint32_t)(EDX));
  /* 1135060a call 0x11346300 */
  push32(0x1135060fu); f_11346300();
  /* 1135060f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350612 push eax */
  push32((uint32_t)(EAX));
  /* 11350613 call 0x11346180 */
  push32(0x11350618u); f_11346180();
  /* 11350618 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1135061b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1135061e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11350622 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11350625 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11350628 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1135062b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11350631 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11350634 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1135063a push eax */
  push32((uint32_t)(EAX));
  /* 1135063b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1135063e push ecx */
  push32((uint32_t)(ECX));
  /* 1135063f call 0x11346300 */
  push32(0x11350644u); f_11346300();
  /* 11350644 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350647 push eax */
  push32((uint32_t)(EAX));
  /* 11350648 call 0x11346180 */
  push32(0x1135064du); f_11346180();
  /* 1135064d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350650 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11350653 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11350657 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1135065a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1135065d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11350660 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11350666:;
  /* 11350666 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11350669 pop esi */
  ESI = (pop32());
  /* 1135066a mov esp, ebp */
  ESP = (EBP);
  /* 1135066c pop ebp */
  EBP = (pop32());
  /* 1135066d ret  */
  ESPCHK(0x11350300u, _esp0);
  ESP += 4; return;
}

/* FUN_10010670 @ 0x11350670 (31 bytes, 15 insns) */
void f_11350670(void) {
  FTRACE(0x11350670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11350670 push ebp */
  push32((uint32_t)(EBP));
  /* 11350671 mov ebp, esp */
  EBP = (ESP);
  /* 11350673 push 0 */
  push32((uint32_t)(0x0u));
  /* 11350675 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350678 push eax */
  push32((uint32_t)(EAX));
  /* 11350679 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135067c push ecx */
  push32((uint32_t)(ECX));
  /* 1135067d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350680 push edx */
  push32((uint32_t)(EDX));
  /* 11350681 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11350684 push eax */
  push32((uint32_t)(EAX));
  /* 11350685 call 0x11350690 */
  push32(0x1135068au); f_11350690();
  /* 1135068a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1135068d pop ebp */
  EBP = (pop32());
  /* 1135068e ret  */
  ESPCHK(0x11350670u, _esp0);
  ESP += 4; return;
}

